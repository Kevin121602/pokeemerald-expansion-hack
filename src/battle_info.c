#include "global.h"
#include "graphics.h"
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
#include "battle_interface.h"
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

enum
{   // Corresponds to gHealthboxElementsGfxTable (and the tables after it) in graphics.c
    // These are indexes into the tables, which are filled with 8x8 square pixel data.
    HEALTHBOX_GFX_0, //hp bar [black section]
    HEALTHBOX_GFX_1, //hp bar "H"
    HEALTHBOX_GFX_2, //hp bar "P"
    HEALTHBOX_GFX_HP_BAR_GREEN, //hp bar [0 pixels]
    HEALTHBOX_GFX_4,  //hp bar [1 pixels]
    HEALTHBOX_GFX_5,  //hp bar [2 pixels]
    HEALTHBOX_GFX_6,  //hp bar [3 pixels]
    HEALTHBOX_GFX_7,  //hp bar [4 pixels]
    HEALTHBOX_GFX_8,  //hp bar [5 pixels]
    HEALTHBOX_GFX_9,  //hp bar [6 pixels]
    HEALTHBOX_GFX_10, //hp bar [7 pixels]
    HEALTHBOX_GFX_11, //hp bar [8 pixels]
    HEALTHBOX_GFX_HP_BAR_YELLOW, //hp bar yellow [0 pixels]
    HEALTHBOX_GFX_48, //hp bar yellow [1 pixels]
    HEALTHBOX_GFX_49, //hp bar yellow [2 pixels]
    HEALTHBOX_GFX_50, //hp bar yellow [3 pixels]
    HEALTHBOX_GFX_51, //hp bar yellow [4 pixels]
    HEALTHBOX_GFX_52, //hp bar yellow [5 pixels]
    HEALTHBOX_GFX_53, //hp bar yellow [6 pixels]
    HEALTHBOX_GFX_54, //hp bar yellow [7 pixels]
    HEALTHBOX_GFX_55, //hp bar yellow [8 pixels]
    HEALTHBOX_GFX_HP_BAR_RED,  //hp bar red [0 pixels]
    HEALTHBOX_GFX_57, //hp bar red [1 pixels]
    HEALTHBOX_GFX_58, //hp bar red [2 pixels]
    HEALTHBOX_GFX_59, //hp bar red [3 pixels]
    HEALTHBOX_GFX_60, //hp bar red [4 pixels]
    HEALTHBOX_GFX_61, //hp bar red [5 pixels]
    HEALTHBOX_GFX_62, //hp bar red [6 pixels]
    HEALTHBOX_GFX_63, //hp bar red [7 pixels]
    HEALTHBOX_GFX_64, //hp bar red [8 pixels]
    HEALTHBOX_GFX_START, //hp bar frame end
    HEALTHBOX_GFX_END,
};

static const u8 *GetHealthbarElementGfxPtr(u8);
static void Task_BattleInfoFadeOut(u8 taskId);
static void Task_BattleInfoFadeIn(u8 taskId);
static void Task_ShowBattleTimers(u8 taskId);
static void PrintOnBattleInfoWindow(u8 windowId);
static void PrintOnBattleTimersWindow(u8 windowId);
static s32 CalcInfoBarValue(s32, s32, s32, s32 *, u8, u16);
static u8 CalcBarFilledPixels(s32, s32, s32, s32 *, u8 *, u8);
static void SwitchToTimerViewFromAiParty(u8 taskId);
static void SwitchToPartyViewFromTimers(u8 taskId);

static const struct OamData sOamData_Healthbar =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x8),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x8),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const struct Subsprite sHealthBar_Subsprites_Player[] =
{
    {
        .x = -16,
        .y = 0,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 16,
        .y = 0,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 1
    }
};

static const struct Subsprite sHealthBar_Subsprites_Opponent[] =
{
    {
        .x = -16,
        .y = 0,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 0,
        .priority = 1
    },
    {
        .x = 16,
        .y = 0,
        .shape = SPRITE_SHAPE(32x8),
        .size = SPRITE_SIZE(32x8),
        .tileOffset = 4,
        .priority = 1
    },
};

static const struct SubspriteTable sHealthBar_SubspriteTables[] =
{
    [B_SIDE_PLAYER]   = {ARRAY_COUNT(sHealthBar_Subsprites_Player), sHealthBar_Subsprites_Player},
    [B_SIDE_OPPONENT] = {ARRAY_COUNT(sHealthBar_Subsprites_Opponent), sHealthBar_Subsprites_Opponent}
};

const struct SpriteTemplate gSpriteTemplate_Healthbar[PARTY_SIZE] =
{
    {
        .tileTag = TAG_HEALTHBAR_INFO_1,
        .paletteTag = TAG_HEALTHBAR_PAL,
        .oam = &sOamData_Healthbar,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    },
    {
        .tileTag = TAG_HEALTHBAR_INFO_2,
        .paletteTag = TAG_HEALTHBAR_PAL,
        .oam = &sOamData_Healthbar,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    },
    {
        .tileTag = TAG_HEALTHBAR_INFO_3,
        .paletteTag = TAG_HEALTHBAR_PAL,
        .oam = &sOamData_Healthbar,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    },
    {
        .tileTag = TAG_HEALTHBAR_INFO_4,
        .paletteTag = TAG_HEALTHBAR_PAL,
        .oam = &sOamData_Healthbar,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    },
    {
        .tileTag = TAG_HEALTHBAR_INFO_5,
        .paletteTag = TAG_HEALTHBAR_PAL,
        .oam = &sOamData_Healthbar,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    },
    {
        .tileTag = TAG_HEALTHBAR_INFO_6,
        .paletteTag = TAG_HEALTHBAR_PAL,
        .oam = &sOamData_Healthbar,
        .anims = gDummySpriteAnimTable,
        .images = NULL,
        .affineAnims = gDummySpriteAffineAnimTable,
        .callback = SpriteCallbackDummy,
    },
};

static const struct CompressedSpriteSheet sSpriteSheets_BattleInfoHealthBar[PARTY_SIZE] =
{
    {gBlankGfxCompressed, 0x0100, TAG_HEALTHBAR_INFO_1},
    {gBlankGfxCompressed, 0x0120, TAG_HEALTHBAR_INFO_2},
    {gBlankGfxCompressed, 0x0100, TAG_HEALTHBAR_INFO_3},
    {gBlankGfxCompressed, 0x0120, TAG_HEALTHBAR_INFO_4},
    {gBlankGfxCompressed, 0x0100, TAG_HEALTHBAR_INFO_5},
    {gBlankGfxCompressed, 0x0120, TAG_HEALTHBAR_INFO_6}
};

const struct SpritePalette sSpritePalettes_BattleInfoHealthBar =
{
    gBattleInterface_BallDisplayPal, TAG_HEALTHBAR_PAL
};

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

static const u8 *GetHealthbarElementGfxPtr(u8 elementId)
{
    return gBattleInfoHpBar_Gfx[elementId];
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
static const u8 sText_None[] = _("(None)");
static const u8 sText_Sun[] = _("(Sun)");
static const u8 sText_Rain[] = _("(Rain)");
static const u8 sText_Sand[] = _("(Sand)");
static const u8 sText_Snow[] = _("(Snow)");

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

static const struct WindowTemplate sBattleTimersWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 0,
    .tilemapTop = 0,
    .width = 31,
    .height = 18,
    .paletteNum = 0xF,
    .baseBlock = 0x1B5
};

struct BattleInfo
{
    u8 battlerId:2;

    u8 AIPartyWindowID;

    u8 BattleTimersWindowID;

    u8 activeWindow;

    u8 aiViewState;

    union
    {
        u8 aiIconSpriteIds[MAX_BATTLERS_COUNT];
        u8 aiPartyIcons[PARTY_SIZE];
        //u8 healthBarSprites[PARTY_SIZE];
    } spriteIds;

    s32 hpBarValue[PARTY_SIZE];
    u8 pixelsCount[PARTY_SIZE];
};

enum
{
    ACTIVE_WIN_PARTY,
    ACTIVE_WIN_INFO
};

static const u16 sBgColor[] = {RGB_WHITE};

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

static s32 CalcInfoBarValue(s32 maxValue, s32 oldValue, s32 receivedValue, s32 *currValue, u8 scale, u16 toAdd)
{
    s32 ret, newValue;
    scale *= 8;

    if (*currValue == -32768) // first function call
    {
        if (maxValue < scale)
            *currValue = Q_24_8(oldValue);
        else
            *currValue = oldValue;
    }

    newValue = oldValue - receivedValue;
    if (newValue < 0)
        newValue = 0;
    else if (newValue > maxValue)
        newValue = maxValue;

    if (maxValue < scale)
    {
        if (newValue == Q_24_8_TO_INT(*currValue) && (*currValue & 0xFF) == 0)
            return -1;
    }
    else
    {
        if (newValue == *currValue) // we're done, the bar's value has been updated
            return -1;
    }

    if (maxValue < scale) // handle cases of max var having less pixels than the whole bar
    {
        s32 toAdd = Q_24_8(maxValue) / scale;

        if (receivedValue < 0) // fill bar right
        {
            *currValue += toAdd;
            ret = Q_24_8_TO_INT(*currValue);
            if (ret >= newValue)
            {
                *currValue = Q_24_8(newValue);
                ret = newValue;
            }
        }
        else // move bar left
        {
            *currValue -= toAdd;
            ret = Q_24_8_TO_INT(*currValue);
            // try round up
            if ((*currValue & 0xFF) > 0)
                ret++;
            if (ret <= newValue)
            {
                *currValue = Q_24_8(newValue);
                ret = newValue;
            }
        }
    }
    else
    {
        if (receivedValue < 0) // fill bar right
        {
            *currValue += toAdd;
            if (*currValue > newValue)
                *currValue = newValue;
            ret = *currValue;
        }
        else // move bar left
        {
            *currValue -= toAdd;
            if (*currValue < newValue)
                *currValue = newValue;
            ret = *currValue;
        }
    }

    return ret;
}

static u8 CalcBarFilledPixels(s32 maxValue, s32 oldValue, s32 receivedValue, s32 *currValue, u8 *pixelsArray, u8 scale)
{
    u8 pixels, filledPixels, totalPixels;
    u8 i;

    s32 newValue = oldValue - receivedValue;
    if (newValue < 0)
        newValue = 0;
    else if (newValue > maxValue)
        newValue = maxValue;

    totalPixels = scale * 8;

    for (i = 0; i < scale; i++)
        pixelsArray[i] = 0;

    if (maxValue < totalPixels)
        pixels = (*currValue * totalPixels / maxValue) >> 8;
    else
        pixels = *currValue * totalPixels / maxValue;

    filledPixels = pixels;

    if (filledPixels == 0 && newValue > 0)
    {
        pixelsArray[0] = 1;
        filledPixels = 1;
    }
    else
    {
        for (i = 0; i < scale; i++)
        {
            if (pixels >= 8)
            {
                pixelsArray[i] = 8;
            }
            else
            {
                pixelsArray[i] = pixels;
                break;
            }
            pixels -= 8;
        }
    }

    return filledPixels;
}

#define sConditionSpriteId data[1]
#define sHealthBarId data[2]

static void Task_ShowAiPartyIcons(u8 taskId)
{
    u32 i, ailment;
    struct WindowTemplate winTemplate;
    struct AiPartyMon *aiMons;
    struct Pokemon *mon;
    struct BattleInfo *data = GetStructPtr(taskId);
    u8 xOffset;
    u8 yOffset;
    u8 filledPixelsCount;
    u8 hpBarLevel;
    u8 healthbarSpriteId;
    struct Sprite *healthBarSpritePtr;

    switch (data->aiViewState)
    {
    case 0:
        //HideBg(0);
        //ShowBg(1);

        LoadMonIconPalettes();
        LoadPartyMenuAilmentGfx();
        LoadSpritePalette(&sSpritePalettes_BattleInfoHealthBar);
        data->battlerId = B_POSITION_OPPONENT_LEFT;
        if(gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS){
            aiMons = AI_PARTY->mons[GetBattlerSide(data->battlerId)];
            for (i = 0; i < AI_PARTY->count[GetBattlerSide(data->battlerId)]; i++)
            {
                u8 barElementId;
                u8 array[8];
                u8 j;

                LoadCompressedSpriteSheet(&sSpriteSheets_BattleInfoHealthBar[i]);

                xOffset = 39 + (i % 3) * 80;
                yOffset = 40;

                mon = &gEnemyParty[i];
                u16 species = SPECIES_NONE; // Question mark
                if (GetMonAbility(mon) == ABILITY_ILLUSION && !gBattleStruct->illusion[data->battlerId].broken){
                    species = aiMons[gBattleStruct->illusion[data->battlerId].partyId].species; 
                } else {
                    species = aiMons[i].species;  
                }

                if (aiMons[i].species == SPECIES_NONE)
                    continue;

                data->spriteIds.aiPartyIcons[i] = CreateMonIcon(species, SpriteCallbackDummy, xOffset, yOffset, 1, 0);
                gSprites[data->spriteIds.aiPartyIcons[i]].oam.priority = 0;

                gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId = CreateSprite(&gSpriteTemplate_StatusIcons, xOffset + 6, yOffset, 0);
                gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId].oam.priority = 0;

                if (aiMons[i].isFainted)
                    ailment = AILMENT_FNT;
                else
                    ailment = GetAilmentFromStatus(mon->status);

                if (ailment != AILMENT_NONE)
                    StartSpriteAnim(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId], ailment - 1);
                else
                    gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId].invisible = TRUE;

                if (aiMons[i].isFainted)
                    continue;

                gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId = CreateSprite(&gSpriteTemplate_Healthbar[i], xOffset - 15, yOffset + 19, 0);
                SetSubspriteTables(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId], &sHealthBar_SubspriteTables[B_SIDE_OPPONENT]);
                gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.priority = 0;

                CpuCopy32(GetHealthbarElementGfxPtr(HEALTHBOX_GFX_START), (void *)(OBJ_VRAM0 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum) * TILE_SIZE_4BPP), 32);

                data->hpBarValue[i] = -32768;
                CalcInfoBarValue(GetMonData(mon, MON_DATA_MAX_HP), GetMonData(mon, MON_DATA_HP), 0, &data->hpBarValue[i], 6, 1);

                data->pixelsCount[i] = CalcBarFilledPixels(GetMonData(mon, MON_DATA_MAX_HP), GetMonData(mon, MON_DATA_HP), 0, &data->hpBarValue[i], array, 6);

                if (data->pixelsCount[i] > 24) // more than 50 % hp
                    barElementId = HEALTHBOX_GFX_HP_BAR_GREEN;
                else if (data->pixelsCount[i] > 9) // more than 20% hp
                    barElementId = HEALTHBOX_GFX_HP_BAR_YELLOW;
                else
                    barElementId = HEALTHBOX_GFX_HP_BAR_RED; // 20 % or less

                for (j = 0; j < 6; j++)
                {
                    if (j < 2)
                        CpuCopy32(GetHealthbarElementGfxPtr(barElementId) + array[j] * 32,
                            (void *)(OBJ_VRAM0 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum + 1 + j) * TILE_SIZE_4BPP), 32);
                    else
                        CpuCopy32(GetHealthbarElementGfxPtr(barElementId) + array[j] * 32,
                            (void *)(OBJ_VRAM0 + 64 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum + j - 1) * TILE_SIZE_4BPP), 32);
                }

                CpuCopy32(GetHealthbarElementGfxPtr(HEALTHBOX_GFX_END),
                            (void *)(OBJ_VRAM0 + 64 + (5 + gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum) * TILE_SIZE_4BPP), 32);

            }
            for (; i < 3; i++)
                data->spriteIds.aiPartyIcons[i] = 0xFF;

            data->battlerId = B_POSITION_OPPONENT_RIGHT;
            aiMons = AI_PARTY->mons[GetBattlerSide(data->battlerId)];
            for (i = 2; i < PARTY_SIZE; i++)
            {
                u8 barElementId;
                u8 array[8];
                u8 j;

                LoadCompressedSpriteSheet(&sSpriteSheets_BattleInfoHealthBar[i]);

                xOffset = 39 + (i % 3) * 80;
                yOffset = 100;

                mon = &gEnemyParty[i];
                u16 species = SPECIES_NONE; // Question mark
                if (GetMonAbility(mon) == ABILITY_ILLUSION && !gBattleStruct->illusion[data->battlerId].broken){
                    species = aiMons[gBattleStruct->illusion[data->battlerId].partyId].species; 
                } else {
                    species = aiMons[i].species;  
                }

                if (aiMons[i].species == SPECIES_NONE)
                    continue;
                
                data->spriteIds.aiPartyIcons[i] = CreateMonIcon(species, SpriteCallbackDummy, xOffset, yOffset, 1, 0);
                gSprites[data->spriteIds.aiPartyIcons[i]].oam.priority = 0;

                gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId = CreateSprite(&gSpriteTemplate_StatusIcons, xOffset + 6, yOffset, 0);
                gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId].oam.priority = 0;

                if (aiMons[i].isFainted)
                    ailment = AILMENT_FNT;
                else
                    ailment = GetAilmentFromStatus(mon->status);

                if (ailment != AILMENT_NONE)
                    StartSpriteAnim(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId], ailment - 1);
                else
                    gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId].invisible = TRUE;

                if (aiMons[i].isFainted)
                    continue;

                gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId = CreateSprite(&gSpriteTemplate_Healthbar[i], xOffset - 15, yOffset + 19, 0);
                SetSubspriteTables(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId], &sHealthBar_SubspriteTables[B_SIDE_OPPONENT]);
                gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.priority = 0;

                CpuCopy32(GetHealthbarElementGfxPtr(HEALTHBOX_GFX_START), (void *)(OBJ_VRAM0 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum) * TILE_SIZE_4BPP), 32);

                data->hpBarValue[i] = -32768;
                CalcInfoBarValue(GetMonData(mon, MON_DATA_MAX_HP), GetMonData(mon, MON_DATA_HP), 0, &data->hpBarValue[i], 6, 1);

                data->pixelsCount[i] = CalcBarFilledPixels(GetMonData(mon, MON_DATA_MAX_HP), GetMonData(mon, MON_DATA_HP), 0, &data->hpBarValue[i], array, 6);

                if (data->pixelsCount[i] > 24) // more than 50 % hp
                    barElementId = HEALTHBOX_GFX_HP_BAR_GREEN;
                else if (data->pixelsCount[i] > 9) // more than 20% hp
                    barElementId = HEALTHBOX_GFX_HP_BAR_YELLOW;
                else
                    barElementId = HEALTHBOX_GFX_HP_BAR_RED; // 20 % or less

                for (j = 0; j < 6; j++)
                {
                    if (j < 2)
                        CpuCopy32(GetHealthbarElementGfxPtr(barElementId) + array[j] * 32,
                            (void *)(OBJ_VRAM0 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum + 1 + j) * TILE_SIZE_4BPP), 32);
                    else
                        CpuCopy32(GetHealthbarElementGfxPtr(barElementId) + array[j] * 32,
                            (void *)(OBJ_VRAM0 + 64 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum + j - 1) * TILE_SIZE_4BPP), 32);
                }

                CpuCopy32(GetHealthbarElementGfxPtr(HEALTHBOX_GFX_END),
                            (void *)(OBJ_VRAM0 + 64 + (5 + gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum) * TILE_SIZE_4BPP), 32);

            }
            for (; i < 3; i++)
                data->spriteIds.aiPartyIcons[i] = 0xFF;
        } else {
            aiMons = AI_PARTY->mons[GetBattlerSide(data->battlerId)];
            for (i = 0; i < AI_PARTY->count[GetBattlerSide(data->battlerId)]; i++)
            {
                u8 barElementId;
                u8 array[8];
                u8 j;

                LoadCompressedSpriteSheet(&sSpriteSheets_BattleInfoHealthBar[i]);

                xOffset = 39 + (i % 3) * 80;
                if(i < 3)
                    yOffset = 40;
                else
                    yOffset = 100;
                mon = &gEnemyParty[i];
                u16 species = SPECIES_NONE; // Question mark
                if (GetMonAbility(mon) == ABILITY_ILLUSION && !gBattleStruct->illusion[data->battlerId].broken){
                    species = aiMons[gBattleStruct->illusion[data->battlerId].partyId].species; 
                } else {
                    species = aiMons[i].species;  
                }
                data->spriteIds.aiPartyIcons[i] = CreateMonIcon(species, SpriteCallbackDummy, xOffset, yOffset, 1, 0);
                gSprites[data->spriteIds.aiPartyIcons[i]].oam.priority = 0;

                gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId = CreateSprite(&gSpriteTemplate_StatusIcons, xOffset + 6, yOffset, 0);
                gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId].oam.priority = 0;

                if (aiMons[i].isFainted)
                    ailment = AILMENT_FNT;
                else
                    ailment = GetAilmentFromStatus(mon->status);

                if (ailment != AILMENT_NONE)
                    StartSpriteAnim(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId], ailment - 1);
                else
                    gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId].invisible = TRUE;

                if (aiMons[i].isFainted)
                    continue;

                gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId = CreateSprite(&gSpriteTemplate_Healthbar[i], xOffset - 15, yOffset + 19, 0);
                SetSubspriteTables(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId], &sHealthBar_SubspriteTables[B_SIDE_OPPONENT]);
                gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.priority = 0;

                CpuCopy32(GetHealthbarElementGfxPtr(HEALTHBOX_GFX_START), (void *)(OBJ_VRAM0 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum) * TILE_SIZE_4BPP), 32);

                data->hpBarValue[i] = -32768;
                CalcInfoBarValue(GetMonData(mon, MON_DATA_MAX_HP), GetMonData(mon, MON_DATA_HP), 0, &data->hpBarValue[i], 6, 1);

                data->pixelsCount[i] = CalcBarFilledPixels(GetMonData(mon, MON_DATA_MAX_HP), GetMonData(mon, MON_DATA_HP), 0, &data->hpBarValue[i], array, 6);

                if (data->pixelsCount[i] > 24) // more than 50 % hp
                    barElementId = HEALTHBOX_GFX_HP_BAR_GREEN;
                else if (data->pixelsCount[i] > 9) // more than 20% hp
                    barElementId = HEALTHBOX_GFX_HP_BAR_YELLOW;
                else
                    barElementId = HEALTHBOX_GFX_HP_BAR_RED; // 20 % or less

                for (j = 0; j < 6; j++)
                {
                    if (j < 2)
                        CpuCopy32(GetHealthbarElementGfxPtr(barElementId) + array[j] * 32,
                            (void *)(OBJ_VRAM0 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum + 1 + j) * TILE_SIZE_4BPP), 32);
                    else
                        CpuCopy32(GetHealthbarElementGfxPtr(barElementId) + array[j] * 32,
                            (void *)(OBJ_VRAM0 + 64 + (gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum + j - 1) * TILE_SIZE_4BPP), 32);
                }

                CpuCopy32(GetHealthbarElementGfxPtr(HEALTHBOX_GFX_END),
                            (void *)(OBJ_VRAM0 + 64 + (5 + gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId].oam.tileNum) * TILE_SIZE_4BPP), 32);

            }
            for (; i < PARTY_SIZE; i++)
                data->spriteIds.aiPartyIcons[i] = 0xFF;
        }
        data->aiViewState++;
        break;
    // Input
    case 1:
        if (JOY_NEW(R_BUTTON | B_BUTTON))
        {
            BeginNormalPaletteFade(-1, 0, 0, 0x10, 0);
            gTasks[taskId].func = Task_BattleInfoFadeOut;
            return;
        }
        if (JOY_NEW(DPAD_RIGHT))
        {
            SwitchToTimerViewFromAiParty(taskId);
            //HideBg(1);
            //ShowBg(0);
            return;
        }
        break;
    }
}

static void SwitchToTimerViewFromAiParty(u8 taskId)
{
    u32 i;
    struct BattleInfo *data = GetStructPtr(taskId);

    FreeMonIconPalettes();
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (data->spriteIds.aiPartyIcons[i] != 0xFF)
        {
            DestroySpriteAndFreeResources(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sConditionSpriteId]);
            DestroySpriteAndFreeResources(&gSprites[gSprites[data->spriteIds.aiPartyIcons[i]].sHealthBarId]);
            FreeAndDestroyMonIconSprite(&gSprites[data->spriteIds.aiPartyIcons[i]]);
        }
    }
    ClearWindowTilemap(data->AIPartyWindowID);
    RemoveWindow(data->AIPartyWindowID);

    gTasks[taskId].func = Task_ShowBattleTimers;
}

#undef sConditionSpriteId
#undef sHealthBarId

static void Task_ShowBattleTimers(u8 taskId)
{
    u32 i, count;
    struct WindowTemplate winTemplate;
    struct BattleInfo *data = GetStructPtr(taskId);
    struct Pokemon *mon;

    switch (data->aiViewState)
    {
    case 0:
        //HideBg(0);
        //ShowBg(1);

        data->aiViewState++;
        break;
    // Put text
    case 1:
        data->BattleTimersWindowID = AddWindow(&sBattleTimersWindowTemplate);
        PutWindowTilemap(data->BattleTimersWindowID);
        PrintOnBattleTimersWindow(data->BattleTimersWindowID);

        data->aiViewState++;
        break;
    // Input
    case 2:
        if (JOY_NEW(R_BUTTON | B_BUTTON))
        {
            BeginNormalPaletteFade(-1, 0, 0, 0x10, 0);
            gTasks[taskId].func = Task_BattleInfoFadeOut;
            return;
        }
        if (JOY_NEW(DPAD_LEFT))
        {
            SwitchToPartyViewFromTimers(taskId);
            //HideBg(1);
            //ShowBg(0);
            return;
        }
        break;
    }
}

static void Task_BattleInfoFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_ShowAiPartyIcons;
}

static void PrintOnBattleInfoWindow(u8 windowId)
{

    FillWindowPixelBuffer(windowId, 0x11);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, sText_B_Back, 15, 3, 0, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, sText_Right_Battle_Info, 152, 3, 0, NULL);
    CopyWindowToVram(windowId, COPYWIN_FULL);
}

static void PrintOnBattleTimersWindow(u8 windowId)
{
    u8 *text = Alloc(0x50), *txtPtr;
    u8 xOffset;
    u8 yOffset;
    u8 i;

    FillWindowPixelBuffer(windowId, 0x11);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, sText_B_Back, 15, 3, 0, NULL);
    AddTextPrinterParameterized(windowId, FONT_NORMAL, sText_Left_AIParty, 169, 3, 0, NULL);
    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Player, 87, 19, 0, NULL);
    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_AI, 140, 19, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Tailwind, 15, 44, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_PLAYER].tailwindTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 112, 44, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_OPPONENT].tailwindTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 145, 44, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Reflect, 15, 59, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_PLAYER].reflectTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 112, 59, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_OPPONENT].reflectTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 145, 59, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_LightScreen, 15, 74, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_PLAYER].lightscreenTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 112, 74, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_OPPONENT].lightscreenTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 145, 74, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_AuroraVeil, 15, 89, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_PLAYER].auroraVeilTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 112, 89, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gSideTimers[B_SIDE_OPPONENT].auroraVeilTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 145, 89, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_TrickRoom, 15, 114, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gFieldTimers.trickRoomTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 70, 114, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Terrain, 15, 129, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gFieldTimers.terrainTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 70, 129, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_MagicRoom, 87, 114, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gFieldTimers.magicRoomTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 145, 114, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_WonderRoom, 162, 114, 0, NULL);
    txtPtr = ConvertIntToDecimalStringN(text, gFieldTimers.wonderRoomTimer, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 222, 114, 0, NULL);

    AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Weather, 87, 129, 0, NULL);
    if(gBattleWeather & B_WEATHER_RAIN)
        AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Rain, 123, 129, 0, NULL);
    else if(gBattleWeather & B_WEATHER_SUN)
        AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Sun, 123, 129, 0, NULL);
    else if(gBattleWeather & B_WEATHER_SANDSTORM)
        AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Sand, 123, 129, 0, NULL);
    else if(gBattleWeather & B_WEATHER_SNOW)
        AddTextPrinterParameterized(windowId, FONT_SMALL, sText_Snow, 123, 129, 0, NULL);
    else
        AddTextPrinterParameterized(windowId, FONT_SMALL, sText_None, 123, 129, 0, NULL);

    txtPtr = ConvertIntToDecimalStringN(text, gWishFutureKnock.weatherDuration, STR_CONV_MODE_LEFT_ALIGN, 1);
    *txtPtr = EOS;
    AddTextPrinterParameterized(windowId, FONT_SMALL, text, 162, 129, 0, NULL);

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

static void SwitchToPartyViewFromTimers(u8 taskId)
{
    u32 i;
    struct BattleInfo *data = GetStructPtr(taskId);
    data->aiViewState = 0;

    ClearWindowTilemap(data->BattleTimersWindowID);
    RemoveWindow(data->BattleTimersWindowID);

    data->AIPartyWindowID = AddWindow(&sButtonControlWindowTemplate);
    PutWindowTilemap(data->AIPartyWindowID);
    PrintOnBattleInfoWindow(data->AIPartyWindowID);

    LoadSpritePalette(&sSpritePalettes_BattleInfoHealthBar);

    gTasks[taskId].func = Task_BattleInfoFadeIn;
}

#define sConditionSpriteId data[1]

void CB2_BattleInfo(void)
{
    u8 taskId;
    u32 i, ailment;
    struct AiPartyMon *aiMons;
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

        data->AIPartyWindowID = AddWindow(&sButtonControlWindowTemplate);
        PutWindowTilemap(data->AIPartyWindowID);
        PrintOnBattleInfoWindow(data->AIPartyWindowID);

        //data->activeWindow = ACTIVE_WIN_PARTY;
        gMain.state++;
        break;
    case 5:
        BeginNormalPaletteFade(-1, 0, 0x10, 0, 0);
        SetVBlankCallback(VBlankCB);
        SetMainCallback2(MainCB2);
        break;
        return;
    }
}


#undef sConditionSpriteId
