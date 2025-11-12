#ifndef GUARD_BATTLE_AI_MAIN_H
#define GUARD_BATTLE_AI_MAIN_H


typedef s32 (*AiScoreFunc)(u32, u32, u32, s32);

#define UNKNOWN_NO_OF_HITS UINT32_MAX

// for AI_WhoStrikesFirst
#define AI_IS_FASTER   1
#define AI_IS_SLOWER   -1

//for doubles targeting cases

#define DIAGONAL_TARGETING              0
#define PARALLEL_TARGETING              1
#define DEFAULT_TARGETING               2
#define RANDOM_TARGETING                3

enum StatChange
{
    STAT_CHANGE_ATK,
    STAT_CHANGE_DEF,
    STAT_CHANGE_SPEED,
    STAT_CHANGE_SPATK,
    STAT_CHANGE_SPDEF,
    STAT_CHANGE_ATK_2,
    STAT_CHANGE_DEF_2,
    STAT_CHANGE_SPEED_2,
    STAT_CHANGE_SPATK_2,
    STAT_CHANGE_SPDEF_2,
    STAT_CHANGE_ACC,
    STAT_CHANGE_EVASION,
    STAT_CHANGE_ATK_DEF,
    STAT_CHANGE_DEF_SPDEF,
    STAT_CHANGE_ATK_SPEED,
    STAT_CHANGE_SPATK_SPDEF,
    STAT_CHANGE_ATK_SPEED_2,
    STAT_CHANGE_SPATK_SPDEF_SPEED,
    STAT_CHANGE_ATK_DEF_SPEED,
    STAT_CHANGE_CRIT_RATE,
    STAT_CHANGE_CURSE,
    STAT_CHANGE_SHELL_SMASH,
    STAT_CHANGE_ATK_SPATK
};

#define BEST_DAMAGE_MOVE         1  // Move with the most amount of hits with the best accuracy/effect
#define POWERFUL_STATUS_MOVE     12 // Moves with this score will be chosen over a move that faints target
#define NO_DAMAGE_OR_FAILS      -20 // Move fails or does no damage

// Scores given in AI_CalcMoveEffectScore and AI_CalcHoldEffectMoveScore
#define NO_INCREASE      0
#define WEAK_EFFECT      1 //discouraged status
#define DECENT_EFFECT    2 //encouraged but not likely status
#define GOOD_EFFECT      3 //encouraged likely status
#define BEST_EFFECT      5 //status moves guaranteed over highest damage but no kill

// AI_TryToFaint
#define DISCOURAGED_KILL 6 // Hyper Beam
#define KILL             7 // AI faints target
#define ENCOURAGED_KILL  8 // Certain encouraged moves like speed drop/omniboost etc get an 80% 1 point increase
#define LAST_CHANCE      9 // AI faints to target. It should try and do damage with a priority move
#define FAST_KILL        10 //AI has priority kill on target
#define REVENGE_KILL     11 //Kill With Pursuit

// AI_Risky
#define STRONG_RISKY_EFFECT     3
#define AVERAGE_RISKY_EFFECT    2

#include "test_runner.h"

// Logs for debugging AI tests.
#define SET_SCORE(battler, movesetIndex, val) \
    do \
    { \
        if (TESTING) \
        { \
            TestRunner_Battle_AISetScore(__FILE__, __LINE__, battler, movesetIndex, val); \
        } \
        gAiThinkingStruct->score[movesetIndex] = val; \
    } while (0) \

#define ADJUST_SCORE(val) \
    do \
    { \
        if (TESTING) \
        { \
            TestRunner_Battle_AIAdjustScore(__FILE__, __LINE__, battlerAtk, gAiThinkingStruct->movesetIndex, val); \
        } \
        score += val; \
    } while (0) \

#define ADJUST_AND_RETURN_SCORE(val) \
    do \
    { \
    if (TESTING) \
        { \
            TestRunner_Battle_AIAdjustScore(__FILE__, __LINE__, battlerAtk, gAiThinkingStruct->movesetIndex, val); \
        } \
        score += val; \
        return score; \
    } while (0) \

#define ADJUST_SCORE_PTR(val) \
    do \
    { \
        if (TESTING) \
        { \
            TestRunner_Battle_AIAdjustScore(__FILE__, __LINE__, battlerAtk, gAiThinkingStruct->movesetIndex, val); \
        } \
        (*score) += val; \
    } while (0) \

#define RETURN_SCORE_PLUS(val)      \
{                                   \
    ADJUST_SCORE(val);              \
    return score;                   \
}

#define RETURN_SCORE_MINUS(val)     \
{                                   \
    ADJUST_SCORE(-val);             \
    return score;                   \
}

void BattleAI_SetupItems(void);
void BattleAI_SetupFlags(void);
void BattleAI_SetupAIData(u8 defaultScoreMoves, u32 battler);
void ComputeBattlerDecisions(u32 battler);
u32 BattleAI_ChooseMoveIndex(u32 battler);
void Ai_InitPartyStruct(void);
void Ai_UpdateSwitchInData(u32 battler);
void Ai_UpdateFaintData(u32 battler);
void SetAiLogicDataForTurn(struct AiLogicData *aiData);
void ResetDynamicAiFunc(void);

#endif // GUARD_BATTLE_AI_MAIN_H
