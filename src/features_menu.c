#include "global.h"
#include "battle.h"
#include "battle_setup.h"
#include "berry.h"
#include "clock.h"
#include "coins.h"
#include "credits.h"
#include "data.h"
#include "data/map_group_count.h"
#include "daycare.h"
#include "debug.h"
#include "event_data.h"
#include "event_object_lock.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "features_menu.h"
#include "field_message_box.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_weather.h"
#include "international_string_util.h"
#include "item.h"
#include "item_icon.h"
#include "list_menu.h"
#include "m4a.h"
#include "main.h"
#include "main_menu.h"
#include "malloc.h"
#include "map_name_popup.h"
#include "menu.h"
#include "money.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "pokedex.h"
#include "pokemon.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"
#include "random.h"
#include "region_map.h"
#include "rtc.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "sound.h"
#include "start_menu.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "pokemon_summary_screen.h"
#include "wild_encounter.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_frontier.h"
#include "constants/coins.h"
#include "constants/expansion.h"
#include "constants/flags.h"
#include "constants/items.h"
#include "constants/map_groups.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "constants/species.h"
#include "constants/weather.h"
#include "save.h"

enum FeaturesMenu
{
    FEATURES_MENU_PORTA_PC,
    FEATURES_MENU_POKE_VIAL,
    FEATURES_MENU_REPEL,
    FEATURES_MENU_MOVE_TUTORS,
    FEATURES_MENU_HEART_SCALES,
    FEATURES_MENU_BUY_ITEMS,
    FEATURES_MENU_MOVE_DELETER,
    FEATURES_MENU_POKE_RIDER,
};

enum HeartScalesMenu
{
    HEART_SCALE_MENU_MOVE_REMINDER,
    HEART_SCALE_MENU_CHANGE_IV,
    HEART_SCALE_MENU_CHANGE_NATURE,
    HEART_SCALE_MENU_CHANGE_ABILITY,
    HEART_SCALE_MENU_INCREASE_LEVEL_CAP,
    HEART_SCALE_MENU_EXIT,
};

enum ItemsMenu
{
    ITEM_MENU_EJECT_PACK,
    ITEM_MENU_EJECT_BUTTON,
    ITEM_MENU_RED_CARD,
    ITEM_MENU_GEMS,
    ITEM_MENU_RESIST_BERRIES,
    ITEM_MENU_PINCH_BERRIES,
    ITEM_MENU_EXIT,
};

struct FeaturesMenuListData
{
    struct ListMenuItem listItems[20 + 1];
    u8 itemNames[26][26];
    u8 listId;
};

//EWRAM
EWRAM_DATA static u8 sNumFeaturesMenuActions = 0;
EWRAM_DATA static u8 sNumHeartScalesMenuActions = 0;
EWRAM_DATA static u8 sNumItemsMenuActions = 0;
EWRAM_DATA static u8 sCurrentFeaturesMenuActions[8] = {0};
EWRAM_DATA static u8 sCurrentHeartScalesMenuActions[6] = {0};
EWRAM_DATA static u8 sCurrentItemsMenuActions[7] = {0};
EWRAM_DATA static s8 sInitFeaturesMenuData[2] = {0};
EWRAM_DATA static s8 sInitHeartScalesMenuData[2] = {0};
EWRAM_DATA static s8 sInitItemsMenuData[2] = {0};
EWRAM_DATA static u8 sFeaturesMenuCursorPos = 0;
EWRAM_DATA static u8 sHeartScalesMenuCursorPos = 0;
EWRAM_DATA static u8 sItemsMenuCursorPos = 0;

void ShowFeaturesMenu(void);
static void AddFeaturesMenuAction(u8 action);
static void AddHeartScalesMenuAction(u8 action);
static void AddItemsMenuAction(u8 action);
static void CreateFeaturesMenuTask(TaskFunc followupFunc);
static void CreateHeartScalesMenuTask(TaskFunc followupFunc);
static void CreateItemsMenuTask(TaskFunc followupFunc);
static void BuildFeaturesMenuActions(void);
static void BuildHeartScalesMenuActions(void);
static void BuildItemsMenuActions(void);
static void HideFeaturesMenu(void);
static void HideHeartScalesMenu(void);
static void HideItemsMenu(void);
static void FeaturesMenu_PreformScript(const u8 *script);

static bool32 InitFeaturesMenuStep(void);
static bool32 InitHeartScalesMenuStep(void);
static bool32 InitItemsMenuStep(void);
static bool32 PrintFeaturesMenuActions(s8 *pIndex, u32 count);
static bool32 PrintHeartScalesMenuActions(s8 *pIndex, u32 count);
static bool32 PrintItemsMenuActions(s8 *pIndex, u32 count);

static bool8 HandleFeaturesMenuInput(void);
static bool8 HandleHeartScalesMenuInput(void);
static bool8 HandleItemsMenuInput(void);

static bool8 FeaturesAction_OpenPc(void);
static bool8 FeaturesAction_HealParty(void);
static bool8 FeaturesAction_Repel(void);
static bool8 FeaturesAction_OpenMoveTutorsMenu(void);
static bool8 FeaturesAction_OpenHeartScalesMenu(void);
static bool8 FeaturesAction_OpenItemsMenu(void);
static bool8 FeaturesAction_MoveDeleter(void);
static bool8 FeaturesAction_PokeRider(void);

static bool8 FeaturesAction_HeartScales_MoveReminder(void);
static bool8 FeaturesAction_HeartScales_ChangeIV(void);
static bool8 FeaturesAction_HeartScales_ChangeNature(void);
static bool8 FeaturesAction_HeartScales_ChangeAbility(void);
static bool8 FeaturesAction_HeartScales_IncreaseLevelCap(void);
static bool8 FeaturesAction_HeartScales_Exit(void);

static bool8 FeaturesAction_Items_EjectPack(void);
static bool8 FeaturesAction_Items_EjectButton(void);
static bool8 FeaturesAction_Items_RedCard(void);
static bool8 FeaturesAction_Items_Gems(void);
static bool8 FeaturesAction_Items_ResistBerries(void);
static bool8 FeaturesAction_Items_PinchBerries(void);
static bool8 FeaturesAction_Items_Exit(void);

//Task Callbacks
static void FeaturesMenuTask(u8 taskId);
static void HeartScalesMenuTask(u8 taskId);
static void ItemsMenuTask(u8 taskId);

//Text
//Features Main Menu
static const u8 sFeaturesText_PortaPC[] =           _("Porta-PC");
static const u8 sFeaturesText_PokeVial[] =          _("Poké Vial");
static const u8 sFeaturesText_Repel[] =             _("Repel");
static const u8 sFeaturesText_MoveTutors[] =        _("Move Tutors");
static const u8 sFeaturesText_HeartScales[] =       _("Heart Scales");
static const u8 sFeaturesText_BuyItems[] =          _("Buy Items");
static const u8 sFeaturesText_MoveDeleter[] =       _("Move Deleter");
static const u8 sFeaturesText_PokeRider[] =         _("Poké Rider");
//Heart Scale Menu
static const u8 sFeaturesText_HeartScales_MoveReminder[] =      _("Move Reminder");
static const u8 sFeaturesText_HeartScales_ChangeIV[] =          _("Change IV");
static const u8 sFeaturesText_HeartScales_ChangeNature[] =      _("Change Nature");
static const u8 sFeaturesText_HeartScales_ChangeAbility[] =     _("Change Ability");
static const u8 sFeaturesText_HeartScales_IncreaseLevelCap[] =  _("Increase Level Cap");
static const u8 sFeaturesText_HeartScales_Exit[] =              _("Exit");
//Items Menu
static const u8 sFeaturesText_Items_EjectPack[] =               _("Eject Pack");
static const u8 sFeaturesText_Items_EjectButton[] =             _("Eject Button");
static const u8 sFeaturesText_Items_RedCard[] =                 _("Red Card");
static const u8 sFeaturesText_Items_Gems[] =                    _("Gems");
static const u8 sFeaturesText_Items_ResistBerries[] =           _("Dmg Reduce Berries");
static const u8 sFeaturesText_Items_PinchBerries[] =            _("Low HP Berries");
static const u8 sFeaturesText_Items_Exit[] =                    _("Exit");

extern const u8 LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget[];
extern const u8 EventScript_FeaturesMenu_Repel[];
extern const u8 EventScript_FeaturesMenu_RepelOff[];
extern const u8 EventScript_FeaturesMenu_NoHeartScales[];
extern const u8 EventScript_FeaturesMenu_NoBottleCaps[];
extern const u8 EventScript_FeaturesMenu_IncreaseLevelCap[];
extern const u8 EventScript_FeaturesMenu_ChangeAbility[];
extern const u8 EventScript_FeaturesMenu_ChangeIV[];
extern const u8 EventScript_FeaturesMenu_ChangeNature[];
extern const u8 FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon[];
extern const u8 EventScript_FeaturesMenu_GiveEjectPack[];
extern const u8 EventScript_FeaturesMenu_GiveEjectButton[];
extern const u8 EventScript_FeaturesMenu_GiveRedCard[];
extern const u8 EventScript_AccessPokemonStorage[];

static const struct WindowTemplate sFeaturesMenuWindowTemplateMain =
{
    .bg = 0,
    .tilemapLeft = 1,
    .tilemapTop = 1,
    .width = 11,
    .height = 15,
    .paletteNum = 15,
    .baseBlock = 0x8,
};

static const struct MenuAction sFeaturesMenu_Items_Main[] =
{
    [FEATURES_MENU_PORTA_PC]         = {sFeaturesText_PortaPC,      {.u8_void = FeaturesAction_OpenPc}},
    [FEATURES_MENU_POKE_VIAL]        = {sFeaturesText_PokeVial,     {.u8_void = FeaturesAction_HealParty}},
    [FEATURES_MENU_REPEL]            = {sFeaturesText_Repel,        {.u8_void = FeaturesAction_Repel}},
    [FEATURES_MENU_MOVE_TUTORS]      = {sFeaturesText_MoveTutors,   {.u8_void = FeaturesAction_OpenMoveTutorsMenu}},
    [FEATURES_MENU_HEART_SCALES]     = {sFeaturesText_HeartScales,  {.u8_void = FeaturesAction_OpenHeartScalesMenu}},
    [FEATURES_MENU_BUY_ITEMS]        = {sFeaturesText_BuyItems,     {.u8_void = FeaturesAction_OpenItemsMenu}},
    [FEATURES_MENU_MOVE_DELETER]     = {sFeaturesText_MoveDeleter,  {.u8_void = FeaturesAction_MoveDeleter}},
    [FEATURES_MENU_POKE_RIDER]       = {sFeaturesText_PokeRider,    {.u8_void = FeaturesAction_PokeRider}},
};

static const struct MenuAction sFeaturesMenu_Items_HeartScales[] =
{
    [HEART_SCALE_MENU_MOVE_REMINDER]            = {sFeaturesText_HeartScales_MoveReminder,      {.u8_void = FeaturesAction_HeartScales_MoveReminder}},
    [HEART_SCALE_MENU_CHANGE_IV]                = {sFeaturesText_HeartScales_ChangeIV,          {.u8_void = FeaturesAction_HeartScales_ChangeIV}},
    [HEART_SCALE_MENU_CHANGE_NATURE]            = {sFeaturesText_HeartScales_ChangeNature,      {.u8_void = FeaturesAction_HeartScales_ChangeNature}},
    [HEART_SCALE_MENU_CHANGE_ABILITY]           = {sFeaturesText_HeartScales_ChangeAbility,     {.u8_void = FeaturesAction_HeartScales_ChangeAbility}},
    [HEART_SCALE_MENU_INCREASE_LEVEL_CAP]       = {sFeaturesText_HeartScales_IncreaseLevelCap,  {.u8_void = FeaturesAction_HeartScales_IncreaseLevelCap}},
    [HEART_SCALE_MENU_EXIT]                     = {sFeaturesText_HeartScales_Exit,              {.u8_void = FeaturesAction_HeartScales_Exit}},
};

static const struct MenuAction sFeaturesMenu_Items_BottleCaps[] =
{
    [ITEM_MENU_EJECT_PACK]                      = {sFeaturesText_Items_EjectPack,               {.u8_void = FeaturesAction_Items_EjectPack}},
    [ITEM_MENU_EJECT_BUTTON]                    = {sFeaturesText_Items_EjectButton,             {.u8_void = FeaturesAction_Items_EjectButton}},
    [ITEM_MENU_RED_CARD]                        = {sFeaturesText_Items_RedCard,                 {.u8_void = FeaturesAction_Items_RedCard}},
    [ITEM_MENU_GEMS]                            = {sFeaturesText_Items_Gems,                    {.u8_void = FeaturesAction_Items_Gems}},
    [ITEM_MENU_RESIST_BERRIES]                  = {sFeaturesText_Items_ResistBerries,           {.u8_void = FeaturesAction_Items_ResistBerries}},
    [ITEM_MENU_PINCH_BERRIES]                   = {sFeaturesText_Items_PinchBerries,            {.u8_void = FeaturesAction_Items_PinchBerries}},
    [ITEM_MENU_EXIT]                            = {sFeaturesText_Items_Exit,                    {.u8_void = FeaturesAction_Items_Exit}},
};

//Functions
void ShowFeaturesMenu(void){
    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }
    CreateFeaturesMenuTask(Task_ShowFeaturesMenu);
    LockPlayerFieldControls();
}

static void CreateFeaturesMenuTask(TaskFunc followupFunc){
    u8 taskId;

    sInitFeaturesMenuData[0] = 0;
    sInitFeaturesMenuData[1] = 0;
    taskId = CreateTask(FeaturesMenuTask, 0x50);
    SetTaskFuncWithFollowupFunc(taskId, FeaturesMenuTask, followupFunc);
}

static void CreateHeartScalesMenuTask(TaskFunc followupFunc){
    u8 taskId;

    sInitHeartScalesMenuData[0] = 0;
    sInitHeartScalesMenuData[1] = 0;
    taskId = CreateTask(HeartScalesMenuTask, 0x50);
    SetTaskFuncWithFollowupFunc(taskId, HeartScalesMenuTask, followupFunc);
}

static void CreateItemsMenuTask(TaskFunc followupFunc){
    u8 taskId;

    sInitItemsMenuData[0] = 0;
    sInitItemsMenuData[1] = 0;
    taskId = CreateTask(ItemsMenuTask, 0x50);
    SetTaskFuncWithFollowupFunc(taskId, ItemsMenuTask, followupFunc);
}

static bool32 InitFeaturesMenuStep(void)
{
    s8 state = sInitFeaturesMenuData[0];

    switch (state)
    {
    case 0:
        sInitFeaturesMenuData[0]++;
        break;
    case 1:
        BuildFeaturesMenuActions();
        sInitFeaturesMenuData[0]++;
        break;
     case 2:
        LoadMessageBoxAndBorderGfx();
        DrawStdWindowFrame(AddFeaturesMenuWindow(sNumFeaturesMenuActions), FALSE);
        sInitFeaturesMenuData[1] = 0;
        sInitFeaturesMenuData[0]++;
        break;
    //case 3:
    //    sInitFeaturesMenuData[0]++;
    //    break;
    case 3:
        if (PrintFeaturesMenuActions(&sInitFeaturesMenuData[1], 2))
            sInitFeaturesMenuData[0]++;
        break;
    case 4:
        sFeaturesMenuCursorPos = InitMenuNormal(GetFeaturesMenuWindowId(), FONT_NORMAL, 0, 9, 16, sNumFeaturesMenuActions, sFeaturesMenuCursorPos);
        CopyWindowToVram(GetFeaturesMenuWindowId(), COPYWIN_MAP);
        return TRUE;
    }

    return FALSE;
}

static bool32 InitHeartScalesMenuStep(void)
{
    s8 state = sInitHeartScalesMenuData[0];

    switch (state)
    {
    case 0:
        sInitHeartScalesMenuData[0]++;
        break;
    case 1:
        BuildHeartScalesMenuActions();
        sInitHeartScalesMenuData[0]++;
        break;
     case 2:
        LoadMessageBoxAndBorderGfx();
        DrawStdWindowFrame(AddHeartScalesMenuWindow(), FALSE);
        sInitHeartScalesMenuData[1] = 0;
        sInitHeartScalesMenuData[0]++;
        break;
    case 3:
        if (PrintHeartScalesMenuActions(&sInitHeartScalesMenuData[1], 2))
            sInitHeartScalesMenuData[0]++;
        break;
    case 4:
        sHeartScalesMenuCursorPos = InitMenuNormal(GetHeartScalesMenuWindowId(), FONT_NORMAL, 0, 9, 16, sNumHeartScalesMenuActions, sHeartScalesMenuCursorPos);
        CopyWindowToVram(GetHeartScalesMenuWindowId(), COPYWIN_MAP);
        return TRUE;
    }

    return FALSE;
}

static bool32 InitItemsMenuStep(void)
{
    s8 state = sInitItemsMenuData[0];

    switch (state)
    {
    case 0:
        sInitItemsMenuData[0]++;
        break;
    case 1:
        BuildItemsMenuActions();
        sInitItemsMenuData[0]++;
        break;
     case 2:
        LoadMessageBoxAndBorderGfx();
        DrawStdWindowFrame(AddItemsMenuWindow(sNumItemsMenuActions), FALSE);
        sInitItemsMenuData[1] = 0;
        sInitItemsMenuData[0]++;
        break;
    case 3:
        if (PrintItemsMenuActions(&sInitItemsMenuData[1], 2))
            sInitItemsMenuData[0]++;
        break;
    case 4:
        sItemsMenuCursorPos = InitMenuNormal(GetItemsMenuWindowId(), FONT_NORMAL, 0, 9, 16, sNumItemsMenuActions, sItemsMenuCursorPos);
        CopyWindowToVram(GetItemsMenuWindowId(), COPYWIN_MAP);
        return TRUE;
    }

    return FALSE;
}

static bool32 PrintFeaturesMenuActions(s8 *pIndex, u32 count)
{
    s8 index = *pIndex;

    do
    {
        StringExpandPlaceholders(gStringVar4, sFeaturesMenu_Items_Main[sCurrentFeaturesMenuActions[index]].text);
        AddTextPrinterParameterized(GetFeaturesMenuWindowId(), FONT_NORMAL, gStringVar4, 8, (index << 4) + 9, TEXT_SKIP_DRAW, NULL);

        index++;
        if (index >= sNumFeaturesMenuActions)
        {
            *pIndex = index;
            return TRUE;
        }

        count--;
    }
    while (count != 0);

    *pIndex = index;
    return FALSE;
}

static bool32 PrintHeartScalesMenuActions(s8 *pIndex, u32 count)
{
    s8 index = *pIndex;

    do
    {
        StringExpandPlaceholders(gStringVar4, sFeaturesMenu_Items_HeartScales[sCurrentHeartScalesMenuActions[index]].text);
        AddTextPrinterParameterized(GetHeartScalesMenuWindowId(), FONT_NORMAL, gStringVar4, 8, (index << 4) + 9, TEXT_SKIP_DRAW, NULL);

        index++;
        if (index >= sNumHeartScalesMenuActions)
        {
            *pIndex = index;
            return TRUE;
        }

        count--;
    }
    while (count != 0);

    *pIndex = index;
    return FALSE;
}

static bool32 PrintItemsMenuActions(s8 *pIndex, u32 count)
{
    s8 index = *pIndex;

    do
    {
        StringExpandPlaceholders(gStringVar4, sFeaturesMenu_Items_BottleCaps[sCurrentItemsMenuActions[index]].text);
        AddTextPrinterParameterized(GetItemsMenuWindowId(), FONT_NORMAL, gStringVar4, 8, (index << 4) + 9, TEXT_SKIP_DRAW, NULL);

        index++;
        if (index >= sNumItemsMenuActions)
        {
            *pIndex = index;
            return TRUE;
        }

        count--;
    }
    while (count != 0);

    *pIndex = index;
    return FALSE;
}

void Task_ShowFeaturesMenu(u8 taskId){
    struct Task *task = &gTasks[taskId];

    switch(task->data[0])
    {
    case 0:
        gMenuCallback = HandleFeaturesMenuInput;
        task->data[0]++;
        break;
    case 1:
        if (gMenuCallback() == TRUE)
            DestroyTask(taskId);
        break;
    }
}

void Task_ShowHeartScalesMenu(u8 taskId){
    struct Task *task = &gTasks[taskId];

    switch(task->data[0])
    {
    case 0:
        gMenuCallback = HandleHeartScalesMenuInput;
        task->data[0]++;
        break;
    case 1:
        if (gMenuCallback() == TRUE)
            DestroyTask(taskId);
        break;
    }
}

void Task_ShowItemsMenu(u8 taskId){
    struct Task *task = &gTasks[taskId];

    switch(task->data[0])
    {
    case 0:
        gMenuCallback = HandleItemsMenuInput;
        task->data[0]++;
        break;
    case 1:
        if (gMenuCallback() == TRUE)
            DestroyTask(taskId);
        break;
    }
}

static bool8 HandleFeaturesMenuInput(void){
    if (JOY_NEW(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        sFeaturesMenuCursorPos = Menu_MoveCursor(-1);
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        sFeaturesMenuCursorPos = Menu_MoveCursor(1);
    }

    if (JOY_NEW(A_BUTTON))
    {
        gMenuCallback = sFeaturesMenu_Items_Main[sCurrentFeaturesMenuActions[sFeaturesMenuCursorPos]].func.u8_void;
    }

    if (JOY_NEW(L_BUTTON | B_BUTTON))
    {
        PlaySE(SE_SELECT);
        HideFeaturesMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 HandleHeartScalesMenuInput(void){
    if (JOY_NEW(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        sHeartScalesMenuCursorPos = Menu_MoveCursor(-1);
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        sHeartScalesMenuCursorPos = Menu_MoveCursor(1);
    }

    if (JOY_NEW(A_BUTTON))
    {
        gMenuCallback = sFeaturesMenu_Items_HeartScales[sCurrentHeartScalesMenuActions[sHeartScalesMenuCursorPos]].func.u8_void;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        //HideFeaturesMenu();
        ClearStdWindowAndFrame(GetHeartScalesMenuWindowId(), TRUE);
        RemoveHeartScalesMenuWindow();
        CreateFeaturesMenuTask(Task_ShowFeaturesMenu);
        return TRUE;
    }

    if (JOY_NEW(L_BUTTON))
    {
        PlaySE(SE_SELECT);
        HideHeartScalesMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 HandleItemsMenuInput(void){
    if (JOY_NEW(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        sItemsMenuCursorPos = Menu_MoveCursor(-1);
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        sItemsMenuCursorPos = Menu_MoveCursor(1);
    }

    if (JOY_NEW(A_BUTTON))
    {
        gMenuCallback = sFeaturesMenu_Items_BottleCaps[sCurrentItemsMenuActions[sItemsMenuCursorPos]].func.u8_void;
    }

    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        //HideFeaturesMenu();
        ClearStdWindowAndFrame(GetItemsMenuWindowId(), TRUE);
        RemoveItemsMenuWindow();
        CreateFeaturesMenuTask(Task_ShowFeaturesMenu);
        return TRUE;
    }

    if (JOY_NEW(L_BUTTON))
    {
        PlaySE(SE_SELECT);
        HideItemsMenu();
        return TRUE;
    }

    return FALSE;
}

static void BuildFeaturesMenuActions(void){

    sNumFeaturesMenuActions = 0;

    if (FlagGet(FLAG_SYS_GAUNTLET) == FALSE)
    {
        AddFeaturesMenuAction(FEATURES_MENU_PORTA_PC);
    }
    AddFeaturesMenuAction(FEATURES_MENU_POKE_VIAL);
    AddFeaturesMenuAction(FEATURES_MENU_REPEL);
    if (FlagGet(FLAG_SYS_GAUNTLET) == FALSE)
    {
        AddFeaturesMenuAction(FEATURES_MENU_MOVE_TUTORS);
    }
    AddFeaturesMenuAction(FEATURES_MENU_HEART_SCALES);
    AddFeaturesMenuAction(FEATURES_MENU_BUY_ITEMS);
    AddFeaturesMenuAction(FEATURES_MENU_MOVE_DELETER);
    if (FlagGet(FLAG_SYS_GAUNTLET) == FALSE && Overworld_MapTypeAllowsTeleportAndFly(gMapHeader.mapType) == TRUE)
    {
        AddFeaturesMenuAction(FEATURES_MENU_POKE_RIDER);
    }
}

static void BuildHeartScalesMenuActions(void){

    sNumHeartScalesMenuActions = 0;

    for(int i = HEART_SCALE_MENU_MOVE_REMINDER; i <= HEART_SCALE_MENU_EXIT; i++)
    {
        AddHeartScalesMenuAction(i);
    }
}

static void BuildItemsMenuActions(void){

    sNumItemsMenuActions = 0;

    AddItemsMenuAction(ITEM_MENU_EJECT_PACK);
    AddItemsMenuAction(ITEM_MENU_EJECT_BUTTON);
    AddItemsMenuAction(ITEM_MENU_RED_CARD);
    if (FlagGet(FLAG_BADGE02_GET) == TRUE)
    {
        AddItemsMenuAction(ITEM_MENU_GEMS);
    }
    if (FlagGet(FLAG_BADGE06_GET) == TRUE)
    {
        AddItemsMenuAction(ITEM_MENU_RESIST_BERRIES);
    }
    if (FlagGet(FLAG_BADGE03_GET) == TRUE)
    {
        AddItemsMenuAction(ITEM_MENU_PINCH_BERRIES);
    }
    AddItemsMenuAction(ITEM_MENU_EXIT);
}

static void FeaturesMenu_PreformScript(const u8 *script)
{
    HideFeaturesMenu();
    LockPlayerFieldControls();
    FreezeObjectEvents();
    ScriptContext_SetupScript(script);
}

static void AddFeaturesMenuAction(u8 action){
    AppendToList(sCurrentFeaturesMenuActions, &sNumFeaturesMenuActions, action);
}

static void AddHeartScalesMenuAction(u8 action){
    AppendToList(sCurrentHeartScalesMenuActions, &sNumHeartScalesMenuActions, action);
}

static void AddItemsMenuAction(u8 action){
    AppendToList(sCurrentItemsMenuActions, &sNumItemsMenuActions, action);
}

static bool8 FeaturesAction_OpenPc(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        FeaturesMenu_PreformScript(EventScript_AccessPokemonStorage);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_HealParty(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HealPlayerParty();
        HideFeaturesMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Repel(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        if(FlagGet(FLAG_REPEL_ON) == TRUE){
            FeaturesMenu_PreformScript(EventScript_FeaturesMenu_RepelOff);
            return TRUE;
        } else {
            FeaturesMenu_PreformScript(EventScript_FeaturesMenu_Repel);
            return TRUE;
        }
        //return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_OpenMoveTutorsMenu(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HideFeaturesMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_OpenHeartScalesMenu(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        //HideFeaturesMenu();
        ClearStdWindowAndFrame(GetFeaturesMenuWindowId(), TRUE);
        RemoveFeaturesMenuWindow();
        if(CheckBagHasItem(ITEM_HEART_SCALE, 1)){
            CreateHeartScalesMenuTask(Task_ShowHeartScalesMenu);
        } else {
            FeaturesMenu_PreformScript(EventScript_FeaturesMenu_NoHeartScales);
        }
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_OpenItemsMenu(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        //HideFeaturesMenu();
        ClearStdWindowAndFrame(GetFeaturesMenuWindowId(), TRUE);
        RemoveFeaturesMenuWindow();
        if(CheckBagHasItem(ITEM_BOTTLE_CAP, 1)){
            CreateItemsMenuTask(Task_ShowItemsMenu);
        } else {
            FeaturesMenu_PreformScript(EventScript_FeaturesMenu_NoBottleCaps);
        }
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_MoveDeleter(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        FeaturesMenu_PreformScript(LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_PokeRider(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HideFeaturesMenu();
        LockPlayerFieldControls();
        FreezeObjectEvents();
        SetMainCallback2(CB2_OpenFlyMap);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_HeartScales_MoveReminder(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetHeartScalesMenuWindowId(), TRUE);
        RemoveHeartScalesMenuWindow();
        FeaturesMenu_PreformScript(FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_HeartScales_ChangeIV(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetHeartScalesMenuWindowId(), TRUE);
        RemoveHeartScalesMenuWindow();
        FeaturesMenu_PreformScript(EventScript_FeaturesMenu_ChangeIV);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_HeartScales_ChangeNature(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetHeartScalesMenuWindowId(), TRUE);
        RemoveHeartScalesMenuWindow();
        FeaturesMenu_PreformScript(EventScript_FeaturesMenu_ChangeNature);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_HeartScales_ChangeAbility(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetHeartScalesMenuWindowId(), TRUE);
        RemoveHeartScalesMenuWindow();
        FeaturesMenu_PreformScript(EventScript_FeaturesMenu_ChangeAbility);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_HeartScales_IncreaseLevelCap(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetHeartScalesMenuWindowId(), TRUE);
        RemoveHeartScalesMenuWindow();
        FeaturesMenu_PreformScript(EventScript_FeaturesMenu_IncreaseLevelCap);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_HeartScales_Exit(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HideHeartScalesMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Items_EjectPack(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetItemsMenuWindowId(), TRUE);
        RemoveItemsMenuWindow();
        FeaturesMenu_PreformScript(EventScript_FeaturesMenu_GiveEjectPack);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Items_EjectButton(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetItemsMenuWindowId(), TRUE);
        RemoveItemsMenuWindow();
        FeaturesMenu_PreformScript(EventScript_FeaturesMenu_GiveEjectButton);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Items_RedCard(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrame(GetItemsMenuWindowId(), TRUE);
        RemoveItemsMenuWindow();
        FeaturesMenu_PreformScript(EventScript_FeaturesMenu_GiveRedCard);
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Items_Gems(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HideItemsMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Items_ResistBerries(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HideItemsMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Items_PinchBerries(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HideItemsMenu();
        return TRUE;
    }

    return FALSE;
}

static bool8 FeaturesAction_Items_Exit(void){
    if (!gPaletteFade.active)
    {
        PlaySE(SE_SELECT);
        HideItemsMenu();
        return TRUE;
    }

    return FALSE;
}


static void HideFeaturesMenu(void)
{
    ClearStdWindowAndFrame(GetFeaturesMenuWindowId(), TRUE);
    RemoveFeaturesMenuWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
}

static void HideHeartScalesMenu(void)
{
    ClearStdWindowAndFrame(GetHeartScalesMenuWindowId(), TRUE);
    RemoveHeartScalesMenuWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
}

static void HideItemsMenu(void)
{
    ClearStdWindowAndFrame(GetItemsMenuWindowId(), TRUE);
    RemoveItemsMenuWindow();
    ScriptUnfreezeObjectEvents();
    UnlockPlayerFieldControls();
}

static void FeaturesMenuTask(u8 taskId)
{
    if (InitFeaturesMenuStep() == TRUE)
        SwitchTaskToFollowupFunc(taskId);
}

static void HeartScalesMenuTask(u8 taskId)
{
    if (InitHeartScalesMenuStep() == TRUE)
        SwitchTaskToFollowupFunc(taskId);
}

static void ItemsMenuTask(u8 taskId)
{
    if (InitItemsMenuStep() == TRUE)
        SwitchTaskToFollowupFunc(taskId);
}