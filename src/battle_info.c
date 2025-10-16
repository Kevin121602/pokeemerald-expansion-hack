#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_message.h"
#include "main.h"
#include "menu.h"
#include "menu_helpers.h"
#include "scanline_effect.h"
#include "palette.h"
#include "party_menu.h"
#include "pokemon_icon.h"
#include "sprite.h"
#include "item.h"
#include "task.h"
#include "bg.h"
#include "gpu_regs.h"
#include "window.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "strings.h"
#include "battle_ai_main.h"
#include "battle_ai_switch_items.h"
#include "battle_ai_util.h"
#include "battle_info.h"
#include "list_menu.h"
#include "decompress.h"
#include "trainer_pokemon_sprites.h"
#include "malloc.h"
#include "string_util.h"
#include "util.h"
#include "data.h"
#include "reset_rtc_screen.h"
#include "reshow_battle_screen.h"
#include "constants/abilities.h"
#include "constants/party_menu.h"
#include "constants/moves.h"
#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/hold_effects.h"

static void Task_BattleInfoFadeOut(u8 taskId);
static void Task_BattleInfoFadeIn(u8 taskId);
static void Task_BattleInfoProcessInput(u8 taskId);
static void PrintOnBattleInfoWindow(u8 windowId);

static struct BattleInfo *GetStructPtr(u8 taskId)
{
    u8 *taskDataPtr = (u8 *)(&gTasks[taskId].data[0]);

    return (struct BattleInfo*)(T1_READ_PTR(taskDataPtr));
}

static void SetStructPtr(u8 taskId, void *ptr)
{
    u32 structPtr = (u32)(ptr);
    u8 *taskDataPtr = (u8 *)(&gTasks[taskId].data[0]);

    taskDataPtr[0] = structPtr >> 0;
    taskDataPtr[1] = structPtr >> 8;
    taskDataPtr[2] = structPtr >> 16;
    taskDataPtr[3] = structPtr >> 24;
}

static const u8 sText_AIParty[] = _("AI Party");
static const u8 sText_B_Back[] = _("{B_BUTTON} Back");
static const u8 sText_Right_Battle_Info[] = _("{DPAD_RIGHT} Battle Info");
static const u8 sText_Left_AIParty[] = _("{DPAD_LEFT} AI Party");
static const u8 sText_BattleInfo[] = _("Battle Info");
static const u8 sText_Player[] = _("Player");
static const u8 sText_AI[] = _("AI");
static const u8 sText_Tailwind[] = _("Tailwind");
static const u8 sText_Reflect[] = _("Reflect");
static const u8 sText_LightScreen[] = _("Light Screen");
static const u8 sText_AuroraVeil[] = _("Aurora Veil");
static const u8 sText_TrickRoom[] = _("Trick Room");
static const u8 sText_Terrain[] = _("Terrain");
static const u8 sText_MagicRoom[] = _("Magic Room");
static const u8 sText_WonderRoom[] = _("Wonder Room");
static const u8 sText_Weather[] = _("Weather");
static const u8 sText_None[] = _("None");
static const u8 sText_Sun[] = _("Sun");
static const u8 sText_Rain[] = _("Rain");
static const u8 sText_Sand[] = _("Sand");
static const u8 sText_Snow[] = _("Snow");

static const struct BgTemplate sBgTemplates[] =
{
   {
       .bg = 0,
       .charBaseIndex = 0,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
       .baseTile = 0
   },
   {
       .bg = 1,
       .charBaseIndex = 2,
       .mapBaseIndex = 20,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
   }
};

static const struct WindowTemplate sButtonControlWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 31,
    .height = 3,
    .paletteNum = 0xF,
    .baseBlock = 0x1B5
};

struct BattleInfo
{
    u8 buttonControlWindowID;
    u8 aiPartyTextWindowID;

    u8 activeWindow;
};

enum
{
    ACTIVE_WIN_PARTY,
    ACTIVE_WIN_INFO
};

static const u16 sBgColor[] = {RGB_WHITE};

static void Task_BattleInfoProcessInput(u8 taskId)
{
    s32 listItemId = 0;
    struct BattleInfo *data = GetStructPtr(taskId);

    // Exit the menu.
    if (JOY_NEW(R_BUTTON) || JOY_NEW(B_BUTTON))
    {
        BeginNormalPaletteFade(-1, 0, 0, 0x10, 0);
        gTasks[taskId].func = Task_BattleInfoFadeOut;
        return;
    }
}

static void Task_BattleInfoFadeOut(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        struct BattleInfo *data = GetStructPtr(taskId);

        FreeAllWindowBuffers();
        DestroyTask(taskId);
        SetMainCallback2(ReshowBattleScreenAfterMenu);
    }
}

static void Task_BattleInfoFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_BattleInfoProcessInput;
}

static void PrintOnBattleInfoWindow(u8 windowId)
{

    FillWindowPixelBuffer(windowId, 0x11);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, sText_B_Back, 15, 3, 0, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, sText_Right_Battle_Info, 152, 3, 0, NULL);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void CB2_BattleInfo(void)
{
    u8 taskId;
    struct BattleInfo *data;

    switch (gMain.state)
    {
    default:
    case 0:
        SetVBlankCallback(NULL);
        gMain.state++;
        break;
    case 1:
        ResetVramOamAndBgCntRegs();
        SetGpuReg(REG_OFFSET_DISPCNT, 0);
        ResetBgsAndClearDma3BusyFlags(0);
        InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
        ResetAllBgsCoordinates();
        FreeAllWindowBuffers();
        DeactivateAllTextPrinters();
        SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
        ShowBg(0);
        ShowBg(1);
        gMain.state++;
        break;
    case 2:
        ResetPaletteFade();
        ScanlineEffect_Stop();
        ResetTasks();
        ResetSpriteData();
        gMain.state++;
        break;
    case 3:
        LoadPalette(sBgColor, 0, 2);
        LoadPalette(GetOverworldTextboxPalettePtr(), 0xf0, 16);
        gMain.state++;
        break;
    case 4:
        taskId = CreateTask(Task_BattleInfoFadeIn, 0);
        data = AllocZeroed(sizeof(struct BattleInfo));
        SetStructPtr(taskId, data);

        data->buttonControlWindowID = AddWindow(&sButtonControlWindowTemplate);
        PutWindowTilemap(data->buttonControlWindowID);
        PrintOnBattleInfoWindow(data->buttonControlWindowID);

        data->activeWindow = ACTIVE_WIN_PARTY;
        gMain.state++;
        break;
    case 5:
        BeginNormalPaletteFade(-1, 0, 0x10, 0, 0);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        return;
    }
}