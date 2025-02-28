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
#include "field_message_box.h"
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