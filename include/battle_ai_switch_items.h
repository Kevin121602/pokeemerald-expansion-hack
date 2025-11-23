#ifndef GUARD_BATTLE_AI_SWITCH_ITEMS_H
#define GUARD_BATTLE_AI_SWITCH_ITEMS_H

enum ShouldSwitchScenario
{
    SHOULD_SWITCH_WONDER_GUARD,
    SHOULD_SWITCH_ABSORBS_MOVE,
    SHOULD_SWITCH_TRAPPER,
    SHOULD_SWITCH_FREE_TURN,
    SHOULD_SWITCH_TRUANT,
    SHOULD_SWITCH_ALL_MOVES_BAD,
    SHOULD_SWITCH_PERISH_SONG,
    SHOULD_SWITCH_YAWN,
    SHOULD_SWITCH_BADLY_POISONED,
    SHOULD_SWITCH_BADLY_POISONED_STATS_RAISED,
    SHOULD_SWITCH_CURSED,
    SHOULD_SWITCH_CURSED_STATS_RAISED,
    SHOULD_SWITCH_NIGHTMARE,
    SHOULD_SWITCH_NIGHTMARE_STATS_RAISED,
    SHOULD_SWITCH_SEEDED,
    SHOULD_SWITCH_SEEDED_STATS_RAISED,
    SHOULD_SWITCH_INFATUATION,
    SHOULD_SWITCH_HASBADODDS,
    SHOULD_SWITCH_NATURAL_CURE_STRONG,
    SHOULD_SWITCH_NATURAL_CURE_STRONG_STATS_RAISED,
    SHOULD_SWITCH_NATURAL_CURE_WEAK,
    SHOULD_SWITCH_NATURAL_CURE_WEAK_STATS_RAISED,
    SHOULD_SWITCH_REGENERATOR,
    SHOULD_SWITCH_REGENERATOR_STATS_RAISED,
    SHOULD_SWITCH_ENCORE_STATUS,
    SHOULD_SWITCH_ENCORE_DAMAGE,
    SHOULD_SWITCH_CHOICE_LOCKED,
    SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO,
    SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS,
    SHOULD_SWITCH_ALL_SCORES_BAD,
};
 
#define SCORE_FAST_TRAPPING_KO    15
#define SCORE_SLOW_TRAPPING_KO    14
#define SCORE_FAST_KO             13
#define SCORE_SLOW_KO             12
#define SCORE_FAST_THREATEN       11
#define SCORE_SLOW_THREATEN       10
#define SCORE_SPECIAL_CASE        10
#define SCORE_FASTER              9
#define SCORE_DEFAULT             8
#define SCORE_FASTER_BUT_KOD      3
#define SCORE_SLOWER_AND_KOD      0

enum SwitchType
{
    SWITCH_AFTER_KO,
    SWITCH_MID_BATTLE,
};

struct MostSuitableCandidate
{
    u8 mon;
    u8 score; 
};

void GetAIPartyIndexes(u32 battlerId, s32 *firstId, s32 *lastId);
void AI_TrySwitchOrUseItem(u32 battler);
void InitializeSwitchinCandidate(struct Pokemon *mon);
struct MostSuitableCandidate GetMostSuitableMonToSwitchInto(u32 battler, bool32 switchAfterMonKOd);
bool32 ShouldSwitch(u32 battler);
bool32 ShouldSwitchIfOutspedAndKOd(u32 battler, bool32 emitResult);
bool32 ShouldSwitchIfFasterButKOd(u32 battler, bool32 emitResult);
bool32 ShouldSwitchIfBadMatchup(u32 battler, bool32 emitResult);
bool32 ShouldSwitchIfStatusedNaturalCure(u32 battler, bool32 emitResult);
u32 GetSwitchInSpeedStatArgs(struct BattlePokemon battleMon, u32 battler, u32 ability, u32 holdEffect);
u32 GetMonSwitchScore(struct BattlePokemon battleMon, u32 battler, u32 opposingBattler, bool32 switchAfterMonKOd);
bool32 IsMonGrounded(u16 heldItemEffect, u32 ability, u8 type1, u8 type2);
void ModifySwitchAfterMoveScoring(u32 battler);

#endif // GUARD_BATTLE_AI_SWITCH_ITEMS_H
