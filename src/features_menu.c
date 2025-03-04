#include "global.h"
#include "battle.h"
#include "battle_setup.h"
#include "berry.h"
#include "clock.h"
#include "coins.h"
#include "credits.h"
#include "data.h"
#include "daycare.h"
#include "debug.h"
#include "event_data.h"
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
};

enum HeartScalesIvMenu
{
    IV_MENU_HP,
    IV_MENU_ATTACK,
    IV_MENU_DEFENSE,
    IV_MENU_SPECIAL_ATTACK,
    IV_MENU_SPECIAL_DEFENSE,
    IV_MENU_SPEED,
};

enum HeartScalesNatureMenu
{
    NATURE_MENU_HARDY,
    NATURE_MENU_LAX,
    NATURE_MENU_GENTLE,
    NATURE_MENU_BRAVE,
    NATURE_MENU_BOLD,
    NATURE_MENU_RELAXED,
    NATURE_MENU_IMPISH,
    NATURE_MENU_QUIET,
    NATURE_MENU_CALM,
    NATURE_MENU_SASSY,
    NATURE_MENU_CAREFUL,
    NATURE_MENU_LONELY,
    NATURE_MENU_ADAMANT,
    NATURE_MENU_NAUGHTY,
    NATURE_MENU_TIMID,
    NATURE_MENU_HASTY,
    NATURE_MENU_JOLLY,
    NATURE_MENU_NAIVE,
    NATURE_MENU_MODEST,
    NATURE_MENU_MILD,
    NATURE_MENU_RASH,
};

struct FeaturesMenuListData
{
    struct ListMenuItem listItems[20 + 1];
    u8 itemNames[26][26];
    u8 listId;
};

//EWRAM
EWRAM_DATA static u8 sNumFeaturesMenuActions = 0;
EWRAM_DATA static u8 sCurrentFeaturesMenuActions[7] = {0};
EWRAM_DATA static s8 sInitFeaturesMenuData[2] = {0};

void ShowFeaturesMenu(void);
static void AddFeaturesMenuAction(u8 action);
static void CreateFeaturesMenuTask(TaskFunc followupFunc);
static void Features_ReShowMainMenu(void);
static void Features_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate);
static void Features_DestroyMenu(u8 taskId);
static void Features_DestroyMenu_Full(u8 taskId);
static void Features_RefreshListMenu(u8 taskId);
static void BuildFeaturesMenuActions(void);
static bool32 InitFeaturesMenuStep(void);

static void FeaturesTask_HandleMenuInput_Main(u8 taskId);
static void FeaturesTask_HandleMenuInput_MoveTutors(u8 taskId);
static void FeaturesTask_HandleMenuInput_HeartScales(u8 taskId);

static void FeaturesAction_OpenPc(u8 taskId);
static void FeaturesAction_HealParty(u8 taskId);
static void FeaturesAction_Repel(u8 taskId);
static void FeaturesAction_OpenMoveTutorsMenu(u8 taskId);
static void FeaturesAction_OpenHeartScalesMenu(u8 taskId);
static void FeaturesAction_MoveDeleter(u8 taskId);
static void FeaturesAction_PokeRider(u8 taskId);

static void FeaturesAction_HeartScales_MoveReminder(u8 taskId);
static void FeaturesAction_HeartScales_ChangeIV(u8 taskId);
static void FeaturesAction_HeartScales_ChangeNature(u8 taskId);
static void FeaturesAction_HeartScales_ChangeAbility(u8 taskId);
static void FeaturesAction_HeartScales_IncreaseLevelCap(u8 taskId);

static void FeaturesAction_HeartScales_IVs_ChangeHP(u8 taskId);
static void FeaturesAction_HeartScales_IVs_ChangeAttack(u8 taskId);
static void FeaturesAction_HeartScales_IVs_ChangeDefense(u8 taskId);
static void FeaturesAction_HeartScales_IVs_ChangeSpecialAttack(u8 taskId);
static void FeaturesAction_HeartScales_IVs_ChangeSpecialDefense(u8 taskId);
static void FeaturesAction_HeartScales_IVs_ChangeSpeed(u8 taskId);

static void FeaturesAction_HeartScales_Natures_Hardy(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Lax(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Gentle(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Brave(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Bold(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Relaxed(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Impish(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Quiet(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Calm(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Sassy(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Careful(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Lonely(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Adamant(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Naughty(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Timid(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Hasty(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Jolly(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Naive(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Modest(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Mild(u8 taskId);
static void FeaturesAction_HeartScales_Natures_Rash(u8 taskId);

//Task Callbacks
static void FeaturesMenuTask(u8 taskId);

//Text
//Features Main Menu
static const u8 sFeaturesText_PortaPC[] =           _("Porta-PC");
static const u8 sFeaturesText_PokeVial[] =          _("Poké Vial");
static const u8 sFeaturesText_Repel[] =             _("Repel");
static const u8 sFeaturesText_MoveTutors[] =        _("Move Tutors");
static const u8 sFeaturesText_HeartScales[] =       _("Heart Scales");
static const u8 sFeaturesText_MoveDeleter[] =       _("Move Deleter");
static const u8 sFeaturesText_PokeRider[] =         _("Poké Rider");
//Heart Scale Menu
static const u8 sFeaturesText_HeartScales_MoveReminder[] =      _("Move Reminder");
static const u8 sFeaturesText_HeartScales_ChangeIV[] =          _("Change IV");
static const u8 sFeaturesText_HeartScales_ChangeNature[] =      _("Change Nature");
static const u8 sFeaturesText_HeartScales_ChangeAbility[] =     _("Change Ability");
static const u8 sFeaturesText_HeartScales_IncreaseLevelCap[] =  _("Increase Level Cap");
//IVs
static const u8 sFeaturesText_HeartScales_IV_HP[] =             _("HP");
static const u8 sFeaturesText_HeartScales_IV_Attack[] =         _("Attack");
static const u8 sFeaturesText_HeartScales_IV_Defense[] =        _("Defense");
static const u8 sFeaturesText_HeartScales_IV_SpecialAttack[] =  _("Special Attack");
static const u8 sFeaturesText_HeartScales_IV_SpecialDefense[] = _("Special Defense");
static const u8 sFeaturesText_HeartScales_IV_Speed[] =          _("Speed");
//Natures
static const u8 sFeaturesText_HeartScales_Natures_Hardy[] =     _("Hardy   (1 Scale)");
static const u8 sFeaturesText_HeartScales_Natures_Lax[] =       _("Lax     (1 Scale)");
static const u8 sFeaturesText_HeartScales_Natures_Gentle[] =    _("Gentle  (1 Scale)");
static const u8 sFeaturesText_HeartScales_Natures_Brave[] =     _("Brave   (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Bold[] =      _("Bold    (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Relaxed[] =   _("Relaxed (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Impish[] =    _("Impish  (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Quiet[] =     _("Quiet   (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Calm[] =      _("Calm    (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Sassy[] =     _("Sassy   (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Careful[] =   _("Careful (2 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Lonely[] =    _("Lonely  (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Adamant[] =   _("Adamant (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Naughty[] =   _("Naughty (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Timid[] =     _("Timid   (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Hasty[] =     _("Hasty   (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Jolly[] =     _("Jolly   (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Naive[] =     _("Naive   (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Modest[] =    _("Modest  (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Mild[] =      _("Mild    (3 Scales)");
static const u8 sFeaturesText_HeartScales_Natures_Rash[] =      _("Rash    (3 Scales)");

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

static const struct ListMenuItem sFeaturesMenu_Items_Main[] =
{
    [FEATURES_MENU_PORTA_PC]         = {sFeaturesText_PortaPC,      FEATURES_MENU_PORTA_PC},
    [FEATURES_MENU_POKE_VIAL]        = {sFeaturesText_PokeVial,     FEATURES_MENU_POKE_VIAL},
    [FEATURES_MENU_REPEL]            = {sFeaturesText_Repel,        FEATURES_MENU_REPEL},
    [FEATURES_MENU_MOVE_TUTORS]      = {sFeaturesText_MoveTutors,   FEATURES_MENU_MOVE_TUTORS},
    [FEATURES_MENU_HEART_SCALES]     = {sFeaturesText_HeartScales,  FEATURES_MENU_HEART_SCALES},
    [FEATURES_MENU_MOVE_DELETER]     = {sFeaturesText_MoveDeleter,  FEATURES_MENU_MOVE_DELETER},
    [FEATURES_MENU_POKE_RIDER]       = {sFeaturesText_PokeRider,    FEATURES_MENU_POKE_RIDER},
};

static const struct ListMenuItem sFeaturesMenu_Items_HeartScales[] =
{
    [HEART_SCALE_MENU_MOVE_REMINDER]            = {sFeaturesText_HeartScales_MoveReminder,      HEART_SCALE_MENU_MOVE_REMINDER},
    [HEART_SCALE_MENU_CHANGE_IV]                = {sFeaturesText_HeartScales_ChangeIV,          HEART_SCALE_MENU_CHANGE_IV},
    [HEART_SCALE_MENU_CHANGE_NATURE]            = {sFeaturesText_HeartScales_ChangeNature,      HEART_SCALE_MENU_CHANGE_NATURE},
    [HEART_SCALE_MENU_CHANGE_ABILITY]           = {sFeaturesText_HeartScales_ChangeAbility,     HEART_SCALE_MENU_CHANGE_ABILITY},
    [HEART_SCALE_MENU_INCREASE_LEVEL_CAP]       = {sFeaturesText_HeartScales_IncreaseLevelCap,  HEART_SCALE_MENU_INCREASE_LEVEL_CAP},
};

static const struct ListMenuItem sFeaturesMenu_Items_HeartScales_IVs[] =
{
    [IV_MENU_HP]                = {sFeaturesText_HeartScales_IV_HP,             IV_MENU_HP},
    [IV_MENU_ATTACK]            = {sFeaturesText_HeartScales_IV_Attack,         IV_MENU_ATTACK},
    [IV_MENU_DEFENSE]           = {sFeaturesText_HeartScales_IV_Defense,        IV_MENU_DEFENSE},
    [IV_MENU_SPECIAL_ATTACK]    = {sFeaturesText_HeartScales_IV_SpecialAttack,  IV_MENU_SPECIAL_ATTACK},
    [IV_MENU_SPECIAL_DEFENSE]   = {sFeaturesText_HeartScales_IV_SpecialDefense, IV_MENU_SPECIAL_DEFENSE},
    [IV_MENU_SPEED]             = {sFeaturesText_HeartScales_IV_Speed,          IV_MENU_SPEED},
};

static const struct ListMenuItem sFeaturesMenu_Items_HeartScales_Natures[] =
{
    [NATURE_MENU_HARDY]              = {sFeaturesText_HeartScales_Natures_Hardy,           NATURE_MENU_HARDY},
    [NATURE_MENU_LAX]                = {sFeaturesText_HeartScales_Natures_Lax,             NATURE_MENU_LAX},
    [NATURE_MENU_GENTLE]             = {sFeaturesText_HeartScales_Natures_Gentle,          NATURE_MENU_GENTLE},
    [NATURE_MENU_BRAVE]              = {sFeaturesText_HeartScales_Natures_Brave,           NATURE_MENU_BRAVE},
    [NATURE_MENU_BOLD]               = {sFeaturesText_HeartScales_Natures_Bold,            NATURE_MENU_BOLD},
    [NATURE_MENU_RELAXED]            = {sFeaturesText_HeartScales_Natures_Relaxed,         NATURE_MENU_RELAXED},
    [NATURE_MENU_IMPISH]             = {sFeaturesText_HeartScales_Natures_Impish,          NATURE_MENU_IMPISH},
    [NATURE_MENU_QUIET]              = {sFeaturesText_HeartScales_Natures_Quiet,           NATURE_MENU_QUIET},
    [NATURE_MENU_CALM]               = {sFeaturesText_HeartScales_Natures_Calm,            NATURE_MENU_CALM},
    [NATURE_MENU_SASSY]              = {sFeaturesText_HeartScales_Natures_Sassy,           NATURE_MENU_SASSY},
    [NATURE_MENU_CAREFUL]            = {sFeaturesText_HeartScales_Natures_Careful,         NATURE_MENU_CAREFUL},
    [NATURE_MENU_LONELY]             = {sFeaturesText_HeartScales_Natures_Lonely,          NATURE_MENU_LONELY},
    [NATURE_MENU_ADAMANT]            = {sFeaturesText_HeartScales_Natures_Adamant,         NATURE_MENU_ADAMANT},
    [NATURE_MENU_NAUGHTY]            = {sFeaturesText_HeartScales_Natures_Naughty,         NATURE_MENU_NAUGHTY},
    [NATURE_MENU_TIMID]              = {sFeaturesText_HeartScales_Natures_Timid,           NATURE_MENU_TIMID},
    [NATURE_MENU_HASTY]              = {sFeaturesText_HeartScales_Natures_Hasty,           NATURE_MENU_HASTY},
    [NATURE_MENU_JOLLY]              = {sFeaturesText_HeartScales_Natures_Jolly,           NATURE_MENU_JOLLY},
    [NATURE_MENU_NAIVE]              = {sFeaturesText_HeartScales_Natures_Naive,           NATURE_MENU_NAIVE},
    [NATURE_MENU_MODEST]             = {sFeaturesText_HeartScales_Natures_Modest,          NATURE_MENU_MODEST},
    [NATURE_MENU_MILD]               = {sFeaturesText_HeartScales_Natures_Mild,            NATURE_MENU_MILD},
    [NATURE_MENU_RASH]               = {sFeaturesText_HeartScales_Natures_Rash,            NATURE_MENU_RASH},
};

// Menu Actions
static void (*const sFeaturesMenu_Actions_Main[])(u8) =
{
    [FEATURES_MENU_PORTA_PC]         = FeaturesAction_OpenPc,
    [FEATURES_MENU_POKE_VIAL]        = FeaturesAction_HealParty,
    [FEATURES_MENU_REPEL]            = FeaturesAction_Repel,
    [FEATURES_MENU_MOVE_TUTORS]      = FeaturesAction_OpenMoveTutorsMenu,
    [FEATURES_MENU_HEART_SCALES]     = FeaturesAction_OpenHeartScalesMenu,
    [FEATURES_MENU_MOVE_DELETER]     = FeaturesAction_MoveDeleter,
    [FEATURES_MENU_POKE_RIDER]       = FeaturesAction_PokeRider,
};

static void (*const sFeaturesMenu_Actions_HeartScales[])(u8) =
{
    [HEART_SCALE_MENU_MOVE_REMINDER]            = FeaturesAction_HeartScales_MoveReminder,
    [HEART_SCALE_MENU_CHANGE_IV]                = FeaturesAction_HeartScales_ChangeIV,
    [HEART_SCALE_MENU_CHANGE_NATURE]            = FeaturesAction_HeartScales_ChangeNature,
    [HEART_SCALE_MENU_CHANGE_ABILITY]           = FeaturesAction_HeartScales_ChangeAbility,
    [HEART_SCALE_MENU_INCREASE_LEVEL_CAP]       = FeaturesAction_HeartScales_IncreaseLevelCap,
};

static void (*const sFeaturesMenu_Actions_HeartScales_IVs[])(u8) =
{
    [IV_MENU_HP]                = FeaturesAction_HeartScales_IVs_ChangeHP,
    [IV_MENU_ATTACK]            = FeaturesAction_HeartScales_IVs_ChangeAttack,
    [IV_MENU_DEFENSE]           = FeaturesAction_HeartScales_IVs_ChangeDefense,
    [IV_MENU_SPECIAL_ATTACK]    = FeaturesAction_HeartScales_IVs_ChangeSpecialAttack,
    [IV_MENU_SPECIAL_DEFENSE]   = FeaturesAction_HeartScales_IVs_ChangeSpecialDefense,
    [IV_MENU_SPEED]             = FeaturesAction_HeartScales_IVs_ChangeSpeed,
};

static void (*const sFeaturesMenu_Actions_HeartScales_Natures[])(u8) =
{
    [NATURE_MENU_HARDY]              = FeaturesAction_HeartScales_Natures_Hardy,
    [NATURE_MENU_LAX]                = FeaturesAction_HeartScales_Natures_Lax,
    [NATURE_MENU_GENTLE]             = FeaturesAction_HeartScales_Natures_Gentle,
    [NATURE_MENU_BRAVE]              = FeaturesAction_HeartScales_Natures_Brave,
    [NATURE_MENU_BOLD]               = FeaturesAction_HeartScales_Natures_Bold,
    [NATURE_MENU_RELAXED]            = FeaturesAction_HeartScales_Natures_Relaxed,
    [NATURE_MENU_IMPISH]             = FeaturesAction_HeartScales_Natures_Impish,
    [NATURE_MENU_QUIET]              = FeaturesAction_HeartScales_Natures_Quiet,
    [NATURE_MENU_CALM]               = FeaturesAction_HeartScales_Natures_Calm,
    [NATURE_MENU_SASSY]              = FeaturesAction_HeartScales_Natures_Sassy,
    [NATURE_MENU_CAREFUL]            = FeaturesAction_HeartScales_Natures_Careful,
    [NATURE_MENU_LONELY]             = FeaturesAction_HeartScales_Natures_Lonely,
    [NATURE_MENU_ADAMANT]            = FeaturesAction_HeartScales_Natures_Adamant,
    [NATURE_MENU_NAUGHTY]            = FeaturesAction_HeartScales_Natures_Naughty,
    [NATURE_MENU_TIMID]              = FeaturesAction_HeartScales_Natures_Timid,
    [NATURE_MENU_HASTY]              = FeaturesAction_HeartScales_Natures_Hasty,
    [NATURE_MENU_JOLLY]              = FeaturesAction_HeartScales_Natures_Jolly,
    [NATURE_MENU_NAIVE]              = FeaturesAction_HeartScales_Natures_Naive,
    [NATURE_MENU_MODEST]             = FeaturesAction_HeartScales_Natures_Modest,
    [NATURE_MENU_MILD]               = FeaturesAction_HeartScales_Natures_Mild,
    [NATURE_MENU_RASH]               = FeaturesAction_HeartScales_Natures_Rash,
};

// List Menu Templates
static const struct ListMenuTemplate sFeaturesMenu_ListTemplate_Main =
{
    .items = sFeaturesMenu_Items_Main,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sFeaturesMenu_Items_Main),
};

static const struct ListMenuTemplate sFeaturesMenu_ListTemplate_HeartScales =
{
    .items = sFeaturesMenu_Items_HeartScales,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sFeaturesMenu_Items_HeartScales),
};

static const struct ListMenuTemplate sFeaturesMenu_ListTemplate_HeartScales_IVs =
{
    .items = sFeaturesMenu_Items_HeartScales_IVs,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sFeaturesMenu_Items_HeartScales_IVs),
};

static const struct ListMenuTemplate sFeaturesMenu_ListTemplate_HeartScales_Natures =
{
    .items = sFeaturesMenu_Items_HeartScales_Natures,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = ARRAY_COUNT(sFeaturesMenu_Items_HeartScales_Natures),
};

//Functions
void ShowFeaturesMenu(void){
    if (!IsOverworldLinkActive())
    {
        FreezeObjectEvents();
        PlayerFreeze();
        StopPlayerAvatar();
    }
    //CreateFeaturesMenuTask(Task_ShowFeaturesMenu);
    LockPlayerFieldControls();
}

static void CreateFeaturesMenuTask(TaskFunc followupFunc){
    u8 taskId;

    sInitFeaturesMenuData[0] = 0;
    sInitFeaturesMenuData[1] = 0;
    taskId = CreateTask(FeaturesMenuTask, 0x50);
    SetTaskFuncWithFollowupFunc(taskId, FeaturesMenuTask, followupFunc);
}

static void Features_ReShowMainMenu(void){
    
}

static void Features_ShowMenu(void (*HandleInput)(u8), struct ListMenuTemplate LMtemplate){

}

static void Features_DestroyMenu(u8 taskId){

}

static void Features_DestroyMenu_Full(u8 taskId){

}

static void Features_RefreshListMenu(u8 taskId){

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
    /* case 2:
        LoadMessageBoxAndBorderGfx();
        DrawStdWindowFrame(AddStartMenuWindow(sNumStartMenuActions), FALSE);
        sInitFeaturesMenuData[1] = 0;
        sInitFeaturesMenuData[0]++;
        break;
    case 3:
        if (GetSafariZoneFlag())
            ShowSafariBallsWindow();
        if (InBattlePyramid())
            ShowPyramidFloorWindow();
            sInitFeaturesMenuData[0]++;
        break;
    case 4:
        if (PrintStartMenuActions(&sInitFeaturesMenuData[1], 2))
            sInitFeaturesMenuData[0]++;
        break;
    case 5:
        sStartMenuCursorPos = InitMenuNormal(GetStartMenuWindowId(), FONT_NORMAL, 0, 9, 16, sNumStartMenuActions, sStartMenuCursorPos);
        CopyWindowToVram(GetStartMenuWindowId(), COPYWIN_MAP);
        return TRUE;*/
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
    AddFeaturesMenuAction(FEATURES_MENU_MOVE_DELETER);
    if (FlagGet(FLAG_SYS_GAUNTLET) == FALSE)
    {
        AddFeaturesMenuAction(FEATURES_MENU_POKE_RIDER);
    }
}

static void AddFeaturesMenuAction(u8 action){
    AppendToList(sCurrentFeaturesMenuActions, &sNumFeaturesMenuActions, action);
}

static void FeaturesTask_HandleMenuInput_Main(u8 taskId){

}

static void FeaturesTask_HandleMenuInput_MoveTutors(u8 taskId){

}

static void FeaturesTask_HandleMenuInput_HeartScales(u8 taskId){

}

static void FeaturesAction_OpenPc(u8 taskId){

}

static void FeaturesAction_HealParty(u8 taskId){

}

static void FeaturesAction_Repel(u8 taskId){
    
}

static void FeaturesAction_OpenMoveTutorsMenu(u8 taskId){

}

static void FeaturesAction_OpenHeartScalesMenu(u8 taskId){

}

static void FeaturesAction_MoveDeleter(u8 taskId){

}

static void FeaturesAction_PokeRider(u8 taskId){

}

static void FeaturesAction_HeartScales_MoveReminder(u8 taskId){

}

static void FeaturesAction_HeartScales_ChangeIV(u8 taskId){

}

static void FeaturesAction_HeartScales_ChangeNature(u8 taskId){
    
}

static void FeaturesAction_HeartScales_ChangeAbility(u8 taskId){
    
}

static void FeaturesAction_HeartScales_IncreaseLevelCap(u8 taskId){

}

static void FeaturesAction_HeartScales_IVs_ChangeHP(u8 taskId){
    
}

static void FeaturesAction_HeartScales_IVs_ChangeAttack(u8 taskId){
    
}

static void FeaturesAction_HeartScales_IVs_ChangeDefense(u8 taskId){
    
}

static void FeaturesAction_HeartScales_IVs_ChangeSpecialAttack(u8 taskId){
    
}

static void FeaturesAction_HeartScales_IVs_ChangeSpecialDefense(u8 taskId){
    
}

static void FeaturesAction_HeartScales_IVs_ChangeSpeed(u8 taskId){
    
}

static void FeaturesAction_HeartScales_Natures_Hardy(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Lax(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Gentle(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Brave(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Bold(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Relaxed(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Impish(u8 taskId){
    
}

static void FeaturesAction_HeartScales_Natures_Quiet(u8 taskId){
    
}

static void FeaturesAction_HeartScales_Natures_Calm(u8 taskId){
    
}

static void FeaturesAction_HeartScales_Natures_Sassy(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Careful(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Lonely(u8 taskId){
    
}

static void FeaturesAction_HeartScales_Natures_Adamant(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Naughty(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Timid(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Hasty(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Jolly(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Naive(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Modest(u8 taskId){
    
}

static void FeaturesAction_HeartScales_Natures_Mild(u8 taskId){

}

static void FeaturesAction_HeartScales_Natures_Rash(u8 taskId){

}

static void FeaturesMenuTask(u8 taskId)
{
    if (InitFeaturesMenuStep() == TRUE)
        SwitchTaskToFollowupFunc(taskId);
}