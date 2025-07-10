#include "global.h"
#include "battle_z_move.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_ai_util.h"
#include "battle_ai_main.h"
#include "battle_ai_switch_items.h"
#include "battle_factory.h"
#include "battle_setup.h"
#include "event_data.h"
#include "data.h"
#include "item.h"
#include "pokemon.h"
#include "random.h"
#include "recorded_battle.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/battle_ai.h"
#include "constants/battle_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"
#include "constants/items.h"

#define CHECK_MOVE_FLAG(flag)                                                                                   \
    s32 i;                                                                                                      \
    u16 *moves = GetMovesArray(battler);                                                                        \
    for (i = 0; i < MAX_MON_MOVES; i++)                                                                         \
    {                                                                                                           \
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].flag)                 \
            return TRUE;                                                                                        \
    }                                                                                                           \
    return FALSE

static u32 AI_GetEffectiveness(uq4_12_t multiplier);

// Functions

bool32 PartyMonHasInTactFocusSashSturdy(u32 battlerAtk, u32 battlerDef, u32 move, u32 holdEffect, u32 ability, struct BattlePokemon battleMon, bool32 isPartyMonCheckedForSash)
{
    if (isPartyMonCheckedForSash)
    {
        if(GetBattlerAbility(battlerDef) == ABILITY_PARENTAL_BOND || gMovesInfo[move].effect == EFFECT_MULTI_HIT || gMovesInfo[move].effect == EFFECT_TRIPLE_KICK || gMovesInfo[move].strikeCount > 1){
            return FALSE;
        }

        if(holdEffect == HOLD_EFFECT_FOCUS_SASH && (battleMon.hp == battleMon.maxHP)){
            return TRUE;
        }

        if(ability == ABILITY_STURDY && (battleMon.hp == battleMon.maxHP) && !IsMoldBreakerTypeAbility(battlerDef, gBattleMons[battlerDef].ability) && !gMovesInfo[move].ignoresTargetAbility){
            return TRUE;
        }

        return FALSE;
    }
    else
    {
        if(battleMon.ability == ABILITY_PARENTAL_BOND || gMovesInfo[move].effect == EFFECT_MULTI_HIT || gMovesInfo[move].effect == EFFECT_TRIPLE_KICK || gMovesInfo[move].strikeCount > 1){
            return FALSE;
        }

        if(holdEffect == HOLD_EFFECT_FOCUS_SASH && AtMaxHp(battlerAtk)){
            return TRUE;
        }

        if(ability == ABILITY_STURDY && AtMaxHp(battlerAtk) && !IsMoldBreakerTypeAbility(battlerAtk, battleMon.ability) && !gMovesInfo[move].ignoresTargetAbility){
            return TRUE;
        }

        return FALSE;
    }
}


bool32 MonHasInTactFocusSashSturdy(u32 battler, u32 opposingBattler, u32 holdEffect, u32 ability, u32 move)
{
    //battler is the one being checked for sash
    if(GetBattlerAbility(opposingBattler) == ABILITY_PARENTAL_BOND || gMovesInfo[move].effect == EFFECT_MULTI_HIT || gMovesInfo[move].effect == EFFECT_TRIPLE_KICK || gMovesInfo[move].strikeCount > 1){
        return FALSE;
    }

    if(holdEffect == HOLD_EFFECT_FOCUS_SASH && AtMaxHp(battler)){
        return TRUE;
    }

    if(ability == ABILITY_STURDY && AtMaxHp(battler) && !IsMoldBreakerTypeAbility(opposingBattler, gBattleMons[opposingBattler].ability) && !gMovesInfo[move].ignoresTargetAbility){
        return TRUE;
    }

    return FALSE;
}

bool32 AI_IsFaster(u32 battlerAi, u32 battlerDef, u32 move)
{
    return (AI_WhoStrikesFirst(battlerAi, battlerDef, move) == AI_IS_FASTER);
}

bool32 AI_IsSlower(u32 battlerAi, u32 battlerDef, u32 move)
{
    return (AI_WhoStrikesFirst(battlerAi, battlerDef, move) == AI_IS_SLOWER);
}

u32 GetAIChosenMove(u32 battlerId)
{
    return (gBattleMons[battlerId].moves[gBattleStruct->aiMoveOrAction[battlerId]]);
}

bool32 AI_RandLessThan(u32 val)
{
    if ((Random() % 0xFF) < val)
        return TRUE;
    return FALSE;
}

bool32 IsAiVsAiBattle(void)
{
    return (B_FLAG_AI_VS_AI_BATTLE && FlagGet(B_FLAG_AI_VS_AI_BATTLE));
}

bool32 BattlerHasAi(u32 battlerId)
{
    switch (GetBattlerPosition(battlerId))
    {
    case B_POSITION_PLAYER_LEFT:
        if (IsAiVsAiBattle())
            return TRUE;
    default:
        return FALSE;
    case B_POSITION_OPPONENT_LEFT:
        return TRUE;
    case B_POSITION_PLAYER_RIGHT:
        if ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER) || IsAiVsAiBattle())
            return TRUE;
        else
            return FALSE;
    case B_POSITION_OPPONENT_RIGHT:
        return TRUE;
    }
}

bool32 IsAiBattlerAware(u32 battlerId)
{
    return TRUE;
}

void ClearBattlerMoveHistory(u32 battlerId)
{
    memset(BATTLE_HISTORY->usedMoves[battlerId], 0, sizeof(BATTLE_HISTORY->usedMoves[battlerId]));
    memset(BATTLE_HISTORY->moveHistory[battlerId], 0, sizeof(BATTLE_HISTORY->moveHistory[battlerId]));
    BATTLE_HISTORY->moveHistoryIndex[battlerId] = 0;
}

void RecordLastUsedMoveBy(u32 battlerId, u32 move)
{
    u8 *index = &BATTLE_HISTORY->moveHistoryIndex[battlerId];

    if (++(*index) >= AI_MOVE_HISTORY_COUNT)
        *index = 0;
    BATTLE_HISTORY->moveHistory[battlerId][*index] = move;
}

void RecordKnownMove(u32 battlerId, u32 move)
{
    s32 i;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (BATTLE_HISTORY->usedMoves[battlerId][i] == move)
            break;
        if (BATTLE_HISTORY->usedMoves[battlerId][i] == MOVE_NONE)
        {
            BATTLE_HISTORY->usedMoves[battlerId][i] = move;
            AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].moves[i] = move;
            break;
        }
    }
}

void RecordAllMoves(u32 battler)
{
    memcpy(AI_PARTY->mons[GetBattlerSide(battler)][gBattlerPartyIndexes[battler]].moves, gBattleMons[battler].moves, MAX_MON_MOVES * sizeof(u16));
}

void RecordAbilityBattle(u32 battlerId, u32 abilityId)
{
    BATTLE_HISTORY->abilities[battlerId] = abilityId;
    AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability = abilityId;
}

void ClearBattlerAbilityHistory(u32 battlerId)
{
    BATTLE_HISTORY->abilities[battlerId] = ABILITY_NONE;
}

void RecordItemEffectBattle(u32 battlerId, u32 itemEffect)
{
    BATTLE_HISTORY->itemEffects[battlerId] = itemEffect;
    AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].heldEffect = itemEffect;
}

void ClearBattlerItemEffectHistory(u32 battlerId)
{
    BATTLE_HISTORY->itemEffects[battlerId] = 0;
}

void SaveBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && !AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i;

        AI_THINKING_STRUCT->saved[battlerId].saved = TRUE;
        AI_THINKING_STRUCT->saved[battlerId].ability = gBattleMons[battlerId].ability;
        AI_THINKING_STRUCT->saved[battlerId].heldItem = gBattleMons[battlerId].item;
        AI_THINKING_STRUCT->saved[battlerId].species = gBattleMons[battlerId].species;
        for (i = 0; i < 4; i++)
            AI_THINKING_STRUCT->saved[battlerId].moves[i] = gBattleMons[battlerId].moves[i];
    }
    // Save and restore types even for AI controlled battlers in case it gets changed during move evaluation process.
    AI_THINKING_STRUCT->saved[battlerId].types[0] = gBattleMons[battlerId].types[0];
    AI_THINKING_STRUCT->saved[battlerId].types[1] = gBattleMons[battlerId].types[1];
}

static bool32 ShouldFailForIllusion(u32 illusionSpecies, u32 battlerId)
{
    return FALSE;
}

void SetBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i, species, illusionSpecies, side;
        side = GetBattlerSide(battlerId);

        // Simulate Illusion
        species = gBattleMons[battlerId].species;
        illusionSpecies = GetIllusionMonSpecies(battlerId);
        if (illusionSpecies != SPECIES_NONE && ShouldFailForIllusion(illusionSpecies, battlerId))
        {
            // If the battler's type has not been changed, AI assumes the types of the illusion mon.
            if (gBattleMons[battlerId].types[0] == gSpeciesInfo[species].types[0]
                && gBattleMons[battlerId].types[1] == gSpeciesInfo[species].types[1])
            {
                gBattleMons[battlerId].types[0] = gSpeciesInfo[illusionSpecies].types[0];
                gBattleMons[battlerId].types[1] = gSpeciesInfo[illusionSpecies].types[1];
            }
            species = illusionSpecies;
        }

        // Use the known battler's ability.
        gBattleMons[battlerId].ability = gBattleMons[battlerId].ability;

        gBattleMons[battlerId].item = gBattleMons[battlerId].item;

        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (AI_PARTY->mons[side][gBattlerPartyIndexes[battlerId]].moves[i] == 0)
                gBattleMons[battlerId].moves[i] = 0;
        }
    }
}

void RestoreBattlerData(u32 battlerId)
{
    if (!BattlerHasAi(battlerId) && AI_THINKING_STRUCT->saved[battlerId].saved)
    {
        u32 i;

        AI_THINKING_STRUCT->saved[battlerId].saved = FALSE;
        gBattleMons[battlerId].ability = AI_THINKING_STRUCT->saved[battlerId].ability;
        gBattleMons[battlerId].item = AI_THINKING_STRUCT->saved[battlerId].heldItem;
        gBattleMons[battlerId].species = AI_THINKING_STRUCT->saved[battlerId].species;
        for (i = 0; i < 4; i++)
            gBattleMons[battlerId].moves[i] = AI_THINKING_STRUCT->saved[battlerId].moves[i];
    }
    gBattleMons[battlerId].types[0] = AI_THINKING_STRUCT->saved[battlerId].types[0];
    gBattleMons[battlerId].types[1] = AI_THINKING_STRUCT->saved[battlerId].types[1];
}

u32 GetHealthPercentage(u32 battlerId)
{
    return (u32)((100 * gBattleMons[battlerId].hp) / gBattleMons[battlerId].maxHP);
}

bool32 AtMaxHp(u32 battlerId)
{
    if (AI_DATA->hpPercents[battlerId] == 100)
        return TRUE;
    return FALSE;
}

bool32 IsBattlerTrapped(u32 battler, bool32 checkSwitch)
{
    u32 holdEffect = AI_DATA->holdEffects[battler];

    if (B_GHOSTS_ESCAPE >= GEN_6 && IS_BATTLER_OF_TYPE(battler, TYPE_GHOST))
        return FALSE;
    if (checkSwitch && holdEffect == HOLD_EFFECT_SHED_SHELL)
        return FALSE;
    else if (!checkSwitch && holdEffect == HOLD_EFFECT_CAN_ALWAYS_RUN)
        return FALSE;
    else if (gBattleMons[battler].status2 & (STATUS2_ESCAPE_PREVENTION | STATUS2_WRAPPED))
        return TRUE;
    else if (gStatuses3[battler] & (STATUS3_ROOTED | STATUS3_SKY_DROPPED))
        return TRUE;
    else if (gFieldStatuses & STATUS_FIELD_FAIRY_LOCK)
        return TRUE;
    else if (IsAbilityPreventingEscape(battler))
        return TRUE;

    return FALSE;
}

u32 GetTotalBaseStat(u32 species)
{
    return gSpeciesInfo[species].baseHP
        + gSpeciesInfo[species].baseAttack
        + gSpeciesInfo[species].baseDefense
        + gSpeciesInfo[species].baseSpeed
        + gSpeciesInfo[species].baseSpAttack
        + gSpeciesInfo[species].baseSpDefense;
}

bool32 IsTruantMonVulnerable(u32 battlerAI, u32 opposingBattler)
{
    int i;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        u32 move = gBattleResources->battleHistory->usedMoves[opposingBattler][i];
        if (gMovesInfo[move].effect == EFFECT_PROTECT && move != MOVE_ENDURE)
            return TRUE;
        if (gMovesInfo[move].effect == EFFECT_SEMI_INVULNERABLE && AI_IsSlower(battlerAI, opposingBattler, GetAIChosenMove(battlerAI)))
            return TRUE;
    }
    return FALSE;
}

// move checks
bool32 IsAffectedByPowder(u32 battler, u32 ability, u32 holdEffect)
{
    if (ability == ABILITY_OVERCOAT
        || (B_POWDER_GRASS >= GEN_6 && IS_BATTLER_OF_TYPE(battler, TYPE_GRASS))
        || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES)
        return FALSE;
    return TRUE;
}

// This function checks if all physical/special moves are either unusable or unreasonable to use.
// Consider a pokemon boosting their attack against a ghost pokemon having only normal-type physical attacks.
bool32 MovesWithCategoryUnusable(u32 attacker, u32 target, u32 category)
{
    s32 i, moveType;
    u32 usable = 0;
    u32 unusable = AI_DATA->moveLimitations[attacker];
    u16 *moves = GetMovesArray(attacker);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE
            && moves[i] != MOVE_UNAVAILABLE
            && GetBattleMoveCategory(moves[i]) == category
            && !(unusable & gBitTable[i]))
        {
            SetTypeBeforeUsingMove(moves[i], attacker);
            GET_MOVE_TYPE(moves[i], moveType);
            if (CalcTypeEffectivenessMultiplier(moves[i], moveType, attacker, target, AI_DATA->abilities[target], FALSE) != 0)
                usable |= gBitTable[i];
        }
    }

    return (usable == 0);
}

// To save computation time this function has 2 variants. One saves, sets and restores battlers, while the other doesn't.
struct SimulatedDamage AI_CalcDamageSaveBattlers(u32 move, u32 battlerAtk, u32 battlerDef, u8 *typeEffectiveness, bool32 considerZPower, enum DamageRollType rollType)
{
    struct SimulatedDamage dmg;
    SaveBattlerData(battlerAtk);
    SaveBattlerData(battlerDef);
    SetBattlerData(battlerAtk);
    SetBattlerData(battlerDef);
    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, typeEffectiveness, considerZPower, AI_GetWeather(AI_DATA), rollType);
    RestoreBattlerData(battlerAtk);
    RestoreBattlerData(battlerDef);
    return dmg;
}

static inline s32 LowestRollDmg(s32 dmg)
{
    dmg *= MIN_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

static inline s32 HighestRollDmg(s32 dmg)
{
    dmg *= MAX_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

static inline s32 DmgRoll(s32 dmg)
{
    dmg *= DMG_ROLL_PERCENTAGE;
    dmg /= 100;
    return dmg;
}

static inline s32 RandomRollDmg(s32 dmg)
{
    int DMG_ROLL_RANDOM = Random() % (MAX_ROLL_PERCENTAGE - MIN_ROLL_PERCENTAGE + 1) + MIN_ROLL_PERCENTAGE;
    dmg *= DMG_ROLL_RANDOM;
    dmg /= 100;
    return dmg;
}

bool32 IsDamageMoveUnusable(u32 move, u32 battlerAtk, u32 battlerDef)
{
    s32 moveType;
    struct AiLogicData *aiData = AI_DATA;
    u32 battlerDefAbility;
    GET_MOVE_TYPE(move, moveType);

    if (DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
        battlerDefAbility = ABILITY_NONE;
    else
        battlerDefAbility = aiData->abilities[battlerDef];

    if (battlerDef == BATTLE_PARTNER(battlerAtk))
        battlerDefAbility = aiData->abilities[battlerDef];

    switch (battlerDefAbility)
    {
    case ABILITY_LIGHTNING_ROD:
        if (B_REDIRECT_ABILITY_IMMUNITY < GEN_5)
            break;
        // Fallthrough
    case ABILITY_VOLT_ABSORB:
    case ABILITY_MOTOR_DRIVE:
        if (moveType == TYPE_ELECTRIC)
            return TRUE;
        break;
    case ABILITY_STORM_DRAIN:
        if (B_REDIRECT_ABILITY_IMMUNITY < GEN_5)
            break;
        // Fallthrough
    case ABILITY_WATER_ABSORB:
    case ABILITY_DRY_SKIN:
        if (moveType == TYPE_WATER)
            return TRUE;
        break;
    case ABILITY_FLASH_FIRE:
        if (moveType == TYPE_FIRE)
            return TRUE;
        break;
    case ABILITY_SOUNDPROOF:
        if (gMovesInfo[move].soundMove)
            return TRUE;
        break;
    case ABILITY_BULLETPROOF:
        if (gMovesInfo[move].ballisticMove)
            return TRUE;
        break;
    case ABILITY_SAP_SIPPER:
        if (moveType == TYPE_GRASS)
            return TRUE;
        break;
    case ABILITY_EARTH_EATER:
        if (moveType == TYPE_GROUND)
            return TRUE;
        break;
    }

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_DREAM_EATER:
        if (!AI_IsBattlerAsleepOrComatose(battlerDef))
            return TRUE;
        break;
    case EFFECT_BELCH:
        if (IsBelchPreventingMove(battlerAtk, move))
            return TRUE;
        break;
    case EFFECT_LAST_RESORT:
        if (!CanUseLastResort(battlerAtk))
            return TRUE;
        break;
    case EFFECT_LOW_KICK:
    case EFFECT_HEAT_CRASH:
        if (GetActiveGimmick(battlerDef) == GIMMICK_DYNAMAX)
            return TRUE;
        break;
    case EFFECT_FAIL_IF_NOT_ARG_TYPE:
        if (!IS_BATTLER_OF_TYPE(battlerAtk, gMovesInfo[move].argument))
            return TRUE;
        break;
    case EFFECT_HIT_SET_REMOVE_TERRAIN:
        if (!(gFieldStatuses & STATUS_FIELD_TERRAIN_ANY) && gMovesInfo[move].argument == ARG_TRY_REMOVE_TERRAIN_FAIL)
            return TRUE;
        break;
    case EFFECT_POLTERGEIST:
        if (AI_DATA->items[battlerDef] == ITEM_NONE || gFieldStatuses & STATUS_FIELD_MAGIC_ROOM || battlerDefAbility == ABILITY_KLUTZ)
            return TRUE;
        break;
    case EFFECT_FIRST_TURN_ONLY:
        if (!gDisableStructs[battlerAtk].isFirstTurn)
            return TRUE;
        break;
    }

    return FALSE;
}

static inline s32 GetDamageByRollType(s32 dmg, enum DamageRollType rollType)
{
    if (rollType == DMG_ROLL_LOWEST)
        return LowestRollDmg(dmg);
    else if (rollType == DMG_ROLL_HIGHEST)
        return HighestRollDmg(dmg);
    else if (rollType == DMG_ROLL_DEFAULT)
        return DmgRoll(dmg);
    else
        return RandomRollDmg(dmg);
}

struct SimulatedDamage AI_CalcDamage(u32 move, u32 battlerAtk, u32 battlerDef, u8 *typeEffectiveness, bool32 considerZPower, u32 weather, enum DamageRollType rollType)
{
    struct SimulatedDamage simDamage;
    s32 moveType;
    u32 moveEffect = gMovesInfo[move].effect;
    uq4_12_t effectivenessMultiplier;
    bool32 isDamageMoveUnusable = FALSE;
    bool32 toggledGimmick = FALSE;
    struct AiLogicData *aiData = AI_DATA;
    gBattleStruct->aiCalcInProgress = TRUE;
    u32 battlerAtkHoldEffect = ItemId_GetHoldEffect(gBattleMons[battlerAtk].item);
    u32 battlerDefHoldEffect = ItemId_GetHoldEffect(gBattleMons[battlerDef].item);
    u32 battlerAtkAbility = GetBattlerAbility(battlerAtk);
    u32 battlerDefAbility = GetBattlerAbility(battlerDef);

    if (moveEffect == EFFECT_NATURE_POWER)
        move = GetNaturePowerMove(battlerAtk);

    // Temporarily enable gimmicks for damage calcs if planned
    if (gBattleStruct->gimmick.usableGimmick[battlerAtk] && GetActiveGimmick(battlerAtk) == GIMMICK_NONE
        && !(gBattleStruct->gimmick.usableGimmick[battlerAtk] == GIMMICK_Z_MOVE && !considerZPower))
    {
        // Set Z-Move variables if needed
        if (gBattleStruct->gimmick.usableGimmick[battlerAtk] == GIMMICK_Z_MOVE && IsViableZMove(battlerAtk, move))
            gBattleStruct->zmove.baseMoves[battlerAtk] = move;

        toggledGimmick = TRUE;
        SetActiveGimmick(battlerAtk, gBattleStruct->gimmick.usableGimmick[battlerAtk]);
    }

    moveEffect = gMovesInfo[move].effect;
    switch (moveEffect)
    {
    case EFFECT_PHOTON_GEYSER:
        gBattleStruct->swapDamageCategory = (GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL);
        break;
    case EFFECT_SHELL_SIDE_ARM:
        if (gBattleStruct->shellSideArmCategory[battlerAtk][battlerDef] == DAMAGE_CATEGORY_PHYSICAL)
            gBattleStruct->swapDamageCategory = TRUE;
        break;
    case EFFECT_TERA_BLAST:
        if (GetActiveGimmick(battlerAtk) == GIMMICK_TERA)
            gBattleStruct->swapDamageCategory = GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL;
        break;
    case EFFECT_TERA_STARSTORM:
        if (GetActiveGimmick(battlerAtk) == GIMMICK_TERA && gBattleMons[battlerAtk].species == SPECIES_TERAPAGOS_STELLAR)
            gBattleStruct->swapDamageCategory = GetCategoryBasedOnStats(battlerAtk) == DAMAGE_CATEGORY_PHYSICAL;
        break;
    }

    SetTypeBeforeUsingMove(move, battlerAtk);
    GET_MOVE_TYPE(move, moveType);
    effectivenessMultiplier = CalcTypeEffectivenessMultiplier(move, moveType, battlerAtk, battlerDef, battlerDefAbility, FALSE);

    if (gMovesInfo[move].power)
        isDamageMoveUnusable = IsDamageMoveUnusable(move, battlerAtk, battlerDef);

    if (gMovesInfo[move].power && !isDamageMoveUnusable)
    {
        s32 critChanceIndex, fixedBasePower, n;

        ProteanTryChangeType(battlerAtk, aiData->abilities[battlerAtk], move, moveType);
        // Certain moves like Rollout calculate damage based on values which change during the move execution, but before calling dmg calc.
        switch (moveEffect)
        {
        case EFFECT_ROLLOUT:
            n = gDisableStructs[battlerAtk].rolloutTimer - 1;
            fixedBasePower = CalcRolloutBasePower(battlerAtk, gMovesInfo[move].power, n < 0 ? 5 : n);
            break;
        case EFFECT_FURY_CUTTER:
            fixedBasePower = CalcFuryCutterBasePower(gMovesInfo[move].power, min(gDisableStructs[battlerAtk].furyCutterCounter + 1, 5));
            break;
        default:
            fixedBasePower = 0;
            break;
        }

        critChanceIndex = CalcCritChanceStageArgs(battlerAtk, battlerDef, move, FALSE, battlerAtkAbility, battlerDefAbility, battlerAtkHoldEffect);
        if (critChanceIndex > 1) // Consider crit damage only if a move has at least +2 crit chance
        {
            s32 nonCritDmg = CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                     effectivenessMultiplier, weather, FALSE,
                                                     battlerAtkHoldEffect, battlerDefHoldEffect,
                                                     battlerAtkAbility, battlerDefAbility);
            s32 critDmg = CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                  effectivenessMultiplier, weather, TRUE,
                                                  battlerAtkHoldEffect, battlerDefHoldEffect,
                                                  battlerAtkAbility, battlerDefAbility);

            u32 critOdds = GetCritHitOdds(critChanceIndex);
            // With critOdds getting closer to 1, dmg gets closer to critDmg.
            simDamage.expected = GetDamageByRollType((critDmg + nonCritDmg * (critOdds - 1)) / critOdds, rollType);
            if (critOdds == 1){
                simDamage.minimum = LowestRollDmg(critDmg);
                simDamage.expected = GetDamageByRollType(critDmg, rollType);
            }
            else{
                simDamage.minimum = LowestRollDmg(nonCritDmg);
                simDamage.expected = GetDamageByRollType(nonCritDmg, rollType);
            }
        }
        else if (critChanceIndex == -2) // Guaranteed critical
        {
            s32 critDmg = CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                  effectivenessMultiplier, weather, TRUE,
                                                  battlerAtkHoldEffect, battlerDefHoldEffect,
                                                  battlerAtkAbility, battlerDefAbility);

            simDamage.expected = GetDamageByRollType(critDmg, rollType);
            simDamage.minimum = LowestRollDmg(critDmg);
        }
        else
        {
            s32 nonCritDmg = 0;
            if (moveEffect == EFFECT_TRIPLE_KICK)
            {
                for (gMultiHitCounter = gMovesInfo[move].strikeCount; gMultiHitCounter > 0; gMultiHitCounter--) // The global is used to simulate actual damage done
                {
                    nonCritDmg += CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                          effectivenessMultiplier, weather, FALSE,
                                                          battlerAtkHoldEffect, battlerDefHoldEffect,
                                                          battlerAtkAbility, battlerDefAbility);
                }
            }
            else
            {
                nonCritDmg = CalculateMoveDamageVars(move, battlerAtk, battlerDef, moveType, fixedBasePower,
                                                     effectivenessMultiplier, weather, FALSE,
                                                     battlerAtkHoldEffect, battlerDefHoldEffect,
                                                     battlerAtkAbility, battlerDefAbility);
            }
            simDamage.expected = GetDamageByRollType(nonCritDmg, rollType);
            simDamage.minimum = LowestRollDmg(nonCritDmg);
        }

        if (GetActiveGimmick(battlerAtk) != GIMMICK_Z_MOVE)
        {
            // Handle dynamic move damage
            switch (moveEffect)
            {
            case EFFECT_LEVEL_DAMAGE:
                simDamage.expected = simDamage.minimum = gBattleMons[battlerAtk].level * (gBattleMons[battlerAtk].ability == ABILITY_PARENTAL_BOND ? 2 : 1);
                if(AI_GetMoveEffectiveness(move, battlerAtk, battlerDef) == AI_EFFECTIVENESS_x0){
                    simDamage.expected = simDamage.minimum = 0;
                }
                break;
            case EFFECT_PSYWAVE:
                simDamage.expected = gBattleMons[battlerAtk].level * (gBattleMons[battlerAtk].ability == ABILITY_PARENTAL_BOND ? 2 : 1);
                simDamage.minimum = simDamage.expected / 2;
                if(AI_GetMoveEffectiveness(move, battlerAtk, battlerDef) == AI_EFFECTIVENESS_x0){
                    simDamage.expected = simDamage.minimum = 0;
                }
                break;
            case EFFECT_FIXED_DAMAGE_ARG:
                simDamage.expected = simDamage.minimum = gMovesInfo[move].argument * (gBattleMons[battlerAtk].ability == ABILITY_PARENTAL_BOND ? 2 : 1);
                if(AI_GetMoveEffectiveness(move, battlerAtk, battlerDef) == AI_EFFECTIVENESS_x0){
                    simDamage.expected = simDamage.minimum = 0;
                }
                break;
            case EFFECT_MULTI_HIT:
                if (move == MOVE_WATER_SHURIKEN && gBattleMons[battlerAtk].species == SPECIES_GRENINJA_ASH)
                {
                    simDamage.expected *= 3;
                    simDamage.minimum *= 3;
                }
                else if (gBattleMons[battlerAtk].ability == ABILITY_SKILL_LINK)
                {
                    simDamage.expected *= 5;
                    simDamage.minimum *= 5;
                }
                else if (aiData->holdEffects[battlerAtk] == HOLD_EFFECT_LOADED_DICE)
                {
                    simDamage.expected *= 9;
                    simDamage.expected /= 2;
                    simDamage.minimum *= 4;
                }
                else
                {
                    simDamage.expected *= 3;
                    simDamage.minimum *= 3;
                }
                break;
            case EFFECT_ENDEAVOR:
                // If target has less HP than user, Endeavor does no damage
                simDamage.expected = simDamage.minimum = max(0, gBattleMons[battlerDef].hp - gBattleMons[battlerAtk].hp);
                if(AI_GetMoveEffectiveness(move, battlerAtk, battlerDef) == AI_EFFECTIVENESS_x0){
                    simDamage.expected = simDamage.minimum = 0;
                }
                break;
            case EFFECT_SUPER_FANG:
                simDamage.expected = simDamage.minimum = (gBattleMons[battlerAtk].ability == ABILITY_PARENTAL_BOND
                    ? max(2, gBattleMons[battlerDef].hp * 3 / 4)
                    : max(1, gBattleMons[battlerDef].hp / 2));
                if(AI_GetMoveEffectiveness(move, battlerAtk, battlerDef) == AI_EFFECTIVENESS_x0){
                    simDamage.expected = simDamage.minimum = 0;
                }
                break;
            case EFFECT_FINAL_GAMBIT:
                simDamage.expected = simDamage.minimum = gBattleMons[battlerAtk].hp;
                if(AI_GetMoveEffectiveness(move, battlerAtk, battlerDef) == AI_EFFECTIVENESS_x0){
                    simDamage.expected = simDamage.minimum = 0;
                }
                break;
            case EFFECT_BEAT_UP:
                if (B_BEAT_UP >= GEN_5)
                {
                    u32 partyCount = CalculatePartyCount(GetBattlerParty(battlerAtk));
                    u32 i;
                    gBattleStruct->beatUpSlot = 0;
                    simDamage.expected = 0;
                    for (i = 0; i < partyCount; i++)
                    {
                        simDamage.expected += CalculateMoveDamage(move, battlerAtk, battlerDef, moveType, 0, FALSE, FALSE, FALSE);
                    }
                    simDamage.minimum = simDamage.expected;
                    gBattleStruct->beatUpSlot = 0;
                }
                break;
            }

            // Handle other multi-strike moves
            if (gMovesInfo[move].strikeCount > 1 && gMovesInfo[move].effect != EFFECT_TRIPLE_KICK)
            {
                simDamage.expected *= gMovesInfo[move].strikeCount;
                simDamage.minimum *= gMovesInfo[move].strikeCount;
            }

            if (simDamage.expected == 0)
                simDamage.expected = 1;
            if (simDamage.minimum == 0)
                simDamage.minimum = 1;
        }
    }
    else
    {
        simDamage.expected = 0;
        simDamage.minimum = 0;
    }

    // convert multiper to AI_EFFECTIVENESS_xX
    *typeEffectiveness = AI_GetEffectiveness(effectivenessMultiplier);

    // Undo temporary settings
    gBattleStruct->dynamicMoveType = 0;
    gBattleStruct->aiCalcInProgress = FALSE;
    gBattleStruct->swapDamageCategory = FALSE;
    gBattleStruct->zmove.baseMoves[battlerAtk] = MOVE_NONE;
    if (toggledGimmick)
        SetActiveGimmick(battlerAtk, GIMMICK_NONE);

    return simDamage;
}

bool32 AI_IsDamagedByRecoil(u32 battler)
{
    u32 ability = AI_DATA->abilities[battler];
    if (ability == ABILITY_MAGIC_GUARD || ability == ABILITY_ROCK_HEAD)
        return FALSE;
    return TRUE;
}

// Decide whether move having an additional effect for .
static bool32 AI_IsMoveEffectInPlus(u32 battlerAtk, u32 battlerDef, u32 move, s32 noOfHitsToKo)
{
    u32 i;
    u32 abilityDef = AI_DATA->abilities[battlerDef];
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_HIT_ESCAPE:
        if (CountUsablePartyMons(battlerAtk) != 0 && ShouldPivot(battlerAtk, battlerDef, abilityDef, move, AI_THINKING_STRUCT->movesetIndex))
            return TRUE;
        break;
    case EFFECT_FELL_STINGER:
        if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK))
            return TRUE;
        break;
    }

    // check ADDITIONAL_EFFECTS
    for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
    {
        // Consider move effects that target self
        if (gMovesInfo[move].additionalEffects[i].self)
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_ATK_PLUS_1:
                case MOVE_EFFECT_ATK_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ATK))
                        return TRUE;
                    break;
                case MOVE_EFFECT_DEF_PLUS_1:
                case MOVE_EFFECT_DEF_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_DEF))
                        return TRUE;
                    break;
                case MOVE_EFFECT_SPD_PLUS_1:
                case MOVE_EFFECT_SPD_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPEED))
                        return TRUE;
                    break;
                case MOVE_EFFECT_SP_ATK_PLUS_1:
                case MOVE_EFFECT_SP_ATK_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_SPATK))
                        return TRUE;
                    break;
                case MOVE_EFFECT_EVS_PLUS_1:
                case MOVE_EFFECT_EVS_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_EVASION))
                        return TRUE;
                    break;
                case MOVE_EFFECT_ACC_PLUS_1:
                case MOVE_EFFECT_ACC_PLUS_2:
                    if (BattlerStatCanRise(battlerAtk, abilityAtk, STAT_ACC))
                        return TRUE;
                    break;
                case MOVE_EFFECT_ALL_STATS_UP:
                    for (i = STAT_ATK; i <= NUM_STATS; i++)
                    {
                        if (BattlerStatCanRise(battlerAtk, abilityAtk, i))
                            return TRUE;
                    }
                    break;
            }
        }
        else // consider move effects that hinder the target
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_POISON:
                case MOVE_EFFECT_TOXIC:
                    if (AI_CanPoison(battlerAtk, battlerDef, abilityDef, move, MOVE_NONE))
                        return TRUE;
                    break;
                case MOVE_EFFECT_BURN:
                    if (AI_CanBurn(battlerAtk, battlerDef, abilityDef, BATTLE_PARTNER(battlerAtk), move, MOVE_NONE))
                        return TRUE;
                    break;
                case MOVE_EFFECT_FREEZE_OR_FROSTBITE:
                    if (AI_CanGetFrostbite(battlerDef, abilityDef))
                        return TRUE;
                    break;
                case MOVE_EFFECT_PARALYSIS:
                    if (AI_CanParalyze(battlerAtk, battlerDef, abilityDef, move, MOVE_NONE))
                        return TRUE;
                    break;
                case MOVE_EFFECT_CONFUSION:
                    if (AI_CanConfuse(battlerAtk, battlerDef, abilityDef, BATTLE_PARTNER(battlerAtk), move, MOVE_NONE))
                        return TRUE;
                    break;
                case MOVE_EFFECT_FLINCH:
                    if (ShouldTryToFlinch(battlerAtk, battlerDef, abilityAtk, abilityDef, move))
                        return TRUE;
                    break;
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                case MOVE_EFFECT_ACC_MINUS_1:
                case MOVE_EFFECT_EVS_MINUS_1:
                    if (ShouldLowerStat(battlerDef, abilityDef, STAT_ATK + (gMovesInfo[move].additionalEffects[i].moveEffect - MOVE_EFFECT_ATK_MINUS_1)) && noOfHitsToKo != 1)
                        return TRUE;
                    break;
                case MOVE_EFFECT_ATK_MINUS_2:
                case MOVE_EFFECT_DEF_MINUS_2:
                case MOVE_EFFECT_SPD_MINUS_2:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                case MOVE_EFFECT_ACC_MINUS_2:
                case MOVE_EFFECT_EVS_MINUS_2:
                    if (ShouldLowerStat(battlerDef, abilityDef, STAT_ATK + (gMovesInfo[move].additionalEffects[i].moveEffect - MOVE_EFFECT_ATK_MINUS_2)) && noOfHitsToKo != 1)
                        return TRUE;
                    break;
            }
        }
    }

    return FALSE;
}

static bool32 AI_IsMoveEffectInMinus(u32 battlerAtk, u32 battlerDef, u32 move, s32 noOfHitsToKo)
{
    u32 abilityAtk = AI_DATA->abilities[battlerAtk];
    u32 abilityDef = AI_DATA->abilities[battlerDef];
    u8 i;

    // recoil
    if (gMovesInfo[move].recoil > 0 && AI_IsDamagedByRecoil(battlerAtk))
        return TRUE;

    switch (gMovesInfo[move].effect)
    {
    case EFFECT_MAX_HP_50_RECOIL:
    case EFFECT_MIND_BLOWN:
    case EFFECT_EXPLOSION:
    case EFFECT_FINAL_GAMBIT:
        return TRUE;
    case EFFECT_RECOIL_IF_MISS:
        if (AI_IsDamagedByRecoil(battlerAtk))
            return TRUE;
        break;
    default:
    {
        for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++)
        {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                case MOVE_EFFECT_EVS_MINUS_1:
                case MOVE_EFFECT_ACC_MINUS_1:
                case MOVE_EFFECT_ATK_MINUS_2:
                case MOVE_EFFECT_DEF_MINUS_2:
                case MOVE_EFFECT_SPD_MINUS_2:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                case MOVE_EFFECT_EVS_MINUS_2:
                case MOVE_EFFECT_ACC_MINUS_2:
                case MOVE_EFFECT_V_CREATE:
                case MOVE_EFFECT_ATK_DEF_DOWN:
                case MOVE_EFFECT_DEF_SPDEF_DOWN:
                    if ((gMovesInfo[move].additionalEffects[i].self && abilityAtk != ABILITY_CONTRARY)
                        || (noOfHitsToKo != 1 && abilityDef == ABILITY_CONTRARY && !DoesBattlerIgnoreAbilityChecks(abilityAtk, move)))
                        return TRUE;
                    break;
                case MOVE_EFFECT_RECHARGE:
                    return gMovesInfo[move].additionalEffects[i].self;
                case MOVE_EFFECT_ATK_PLUS_1:
                case MOVE_EFFECT_DEF_PLUS_1:
                case MOVE_EFFECT_SPD_PLUS_1:
                case MOVE_EFFECT_SP_ATK_PLUS_1:
                case MOVE_EFFECT_SP_DEF_PLUS_1:
                case MOVE_EFFECT_EVS_PLUS_1:
                case MOVE_EFFECT_ACC_PLUS_1:
                case MOVE_EFFECT_ATK_PLUS_2:
                case MOVE_EFFECT_DEF_PLUS_2:
                case MOVE_EFFECT_SPD_PLUS_2:
                case MOVE_EFFECT_SP_ATK_PLUS_2:
                case MOVE_EFFECT_SP_DEF_PLUS_2:
                case MOVE_EFFECT_EVS_PLUS_2:
                case MOVE_EFFECT_ACC_PLUS_2:
                case MOVE_EFFECT_ALL_STATS_UP:
                    if ((gMovesInfo[move].additionalEffects[i].self && abilityAtk == ABILITY_CONTRARY)
                        || (noOfHitsToKo != 1 && !(abilityDef == ABILITY_CONTRARY && !DoesBattlerIgnoreAbilityChecks(abilityAtk, move))))
                        return TRUE;
                    break;
            }
        }
        break;
    }
    }
    return FALSE;
}

// Checks if one of the moves has side effects or perks, assuming equal dmg or equal no of hits to KO
s32 AI_WhichMoveBetter(u32 move1, u32 move2, u32 battlerAtk, u32 battlerDef, s32 noOfHitsToKo)
{
    bool32 effect1, effect2;
    u32 defAbility = AI_DATA->abilities[battlerDef];
    u32 atkAbility = AI_DATA->abilities[battlerAtk];

    // Check if physical moves hurt.
    if (AI_DATA->holdEffects[battlerAtk] != HOLD_EFFECT_PROTECTIVE_PADS && atkAbility != ABILITY_LONG_REACH
        && (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_ROCKY_HELMET
        || defAbility == ABILITY_IRON_BARBS || defAbility == ABILITY_ROUGH_SKIN))
    {
        if (gMovesInfo[move1].makesContact && !gMovesInfo[move2].makesContact)
            return -1;
        if (gMovesInfo[move2].makesContact && !gMovesInfo[move1].makesContact)
            return 1;
    }

    // Check additional effects.
    effect1 = AI_IsMoveEffectInMinus(battlerAtk, battlerDef, move1, noOfHitsToKo);
    effect2 = AI_IsMoveEffectInMinus(battlerAtk, battlerDef, move2, noOfHitsToKo);
    if (effect2 && !effect1)
        return 1;
    if (effect1 && !effect2)
        return -1;

    effect1 = AI_IsMoveEffectInPlus(battlerAtk, battlerDef, move1, noOfHitsToKo);
    effect2 = AI_IsMoveEffectInPlus(battlerAtk, battlerDef, move2, noOfHitsToKo);
    if (effect2 && !effect1)
        return -1;
    if (effect1 && !effect2)
        return 1;

    return 0;
}

u32 GetNoOfHitsToKO(u32 dmg, s32 hp)
{
    if (dmg == 0)
        return UINT32_MAX;
    if (hp % dmg == 0)
        return hp / dmg;
    else
        return (hp / dmg) + 1;
}

u32 GetNoOfHitsToKOBattlerDmg(u32 dmg, u32 battlerDef)
{
    return GetNoOfHitsToKO(dmg, gBattleMons[battlerDef].hp);
}

u32 GetNoOfHitsToKOBattler(u32 battlerAtk, u32 battlerDef, u32 moveIndex)
{
    return GetNoOfHitsToKOBattlerDmg(AI_DATA->simulatedDmg[battlerAtk][battlerDef][moveIndex].expected, battlerDef);
}

u32 GetMinNoOfHitsToKOBattler(u32 battlerAtk, u32 battlerDef)
{
    u32 numHits = 0;
    u32 minHits = 0;
    for(int i = 0; i < MAX_MON_MOVES; i++){
        if(gBattleMons[battlerAtk].moves[i] != MOVE_NONE
            && gMovesInfo[gBattleMons[battlerAtk].moves[i]].effect != EFFECT_EXPLOSION
            && gMovesInfo[gBattleMons[battlerAtk].moves[i]].effect != EFFECT_FINAL_GAMBIT
            && !IS_MOVE_STATUS(gBattleMons[battlerAtk].moves[i]))
        numHits = GetNoOfHitsToKOBattlerDmg(AI_DATA->simulatedDmg[battlerAtk][battlerDef][i].expected, battlerDef);
        if(numHits < minHits)
            minHits = numHits;
    }

    return minHits;
}

u32 GetCurrDamageHpPercent(u32 battlerAtk, u32 battlerDef)
{
    int bestDmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex].expected;

    return (bestDmg * 100) / gBattleMons[battlerDef].maxHP;
}

uq4_12_t AI_GetTypeEffectiveness(u32 move, u32 battlerAtk, u32 battlerDef)
{
    uq4_12_t typeEffectiveness;
    u32 moveType;

    SaveBattlerData(battlerAtk);
    SaveBattlerData(battlerDef);

    SetBattlerData(battlerAtk);
    SetBattlerData(battlerDef);

    gBattleStruct->dynamicMoveType = 0;
    SetTypeBeforeUsingMove(move, battlerAtk);
    GET_MOVE_TYPE(move, moveType);
    typeEffectiveness = CalcTypeEffectivenessMultiplier(move, moveType, battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], FALSE);

    RestoreBattlerData(battlerAtk);
    RestoreBattlerData(battlerDef);

    return typeEffectiveness;
}

u32 AI_GetMoveEffectiveness(u32 move, u32 battlerAtk, u32 battlerDef)
{
    gMoveResultFlags = 0;
    return AI_GetEffectiveness(AI_GetTypeEffectiveness(move, battlerAtk, battlerDef));
}

static u32 AI_GetEffectiveness(uq4_12_t multiplier)
{
    switch (multiplier)
    {
    case UQ_4_12(0.0):
        return AI_EFFECTIVENESS_x0;
    case UQ_4_12(0.125):
        return AI_EFFECTIVENESS_x0_125;
    case UQ_4_12(0.25):
        return AI_EFFECTIVENESS_x0_25;
    case UQ_4_12(0.5):
        return AI_EFFECTIVENESS_x0_5;
    case UQ_4_12(1.0):
    default:
        return AI_EFFECTIVENESS_x1;
    case UQ_4_12(2.0):
        return AI_EFFECTIVENESS_x2;
    case UQ_4_12(4.0):
        return AI_EFFECTIVENESS_x4;
    case UQ_4_12(8.0):
        return AI_EFFECTIVENESS_x8;
    }
}

/* Checks to see if AI will move ahead of another battler
 * The function uses a stripped down version of the checks from GetWhichBattlerFasterArgs
 * Output:
    * AI_IS_FASTER: is user(ai) faster
    * AI_IS_SLOWER: is target faster
*/
s32 AI_WhoStrikesFirst(u32 battlerAI, u32 battler, u32 moveConsidered)
{
    u32 speedBattlerAI, speedBattler;
    u32 holdEffectAI = AI_DATA->holdEffects[battlerAI];
    u32 holdEffectPlayer = AI_DATA->holdEffects[battler];
    u32 abilityAI = AI_DATA->abilities[battlerAI];
    u32 abilityPlayer = AI_DATA->abilities[battler];

    if (GetMovePriority(battlerAI, moveConsidered) > 0)
        return AI_IS_FASTER;

    speedBattlerAI = GetBattlerTotalSpeedStatArgs(battlerAI, abilityAI, holdEffectAI);
    speedBattler   = GetBattlerTotalSpeedStatArgs(battler, abilityPlayer, holdEffectPlayer);

    if (holdEffectAI == HOLD_EFFECT_LAGGING_TAIL && holdEffectPlayer != HOLD_EFFECT_LAGGING_TAIL)
        return AI_IS_SLOWER;
    else if (holdEffectAI != HOLD_EFFECT_LAGGING_TAIL && holdEffectPlayer == HOLD_EFFECT_LAGGING_TAIL)
        return AI_IS_FASTER;

    if (abilityAI == ABILITY_STALL && abilityPlayer != ABILITY_STALL)
        return AI_IS_SLOWER;
    else if (abilityAI != ABILITY_STALL && abilityPlayer == ABILITY_STALL)
        return AI_IS_FASTER;

    if (speedBattlerAI > speedBattler)
    {
        if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
            return AI_IS_SLOWER;
        else
            return AI_IS_FASTER;
    }
    else if (speedBattlerAI == speedBattler)
    {
        return AI_IS_FASTER;
    }
    else
    {
        if (gFieldStatuses & STATUS_FIELD_TRICK_ROOM)
            return AI_IS_FASTER;
        else
            return AI_IS_SLOWER;
    }

    return AI_IS_SLOWER;
}

// Check if target has means to faint ai mon.
bool32 CanTargetFaintAi(u32 battlerDef, u32 battlerAtk)
{
    s32 i;
    u32 unusable = AI_DATA->moveLimitations[battlerDef];
    u16 *moves = GetMovesArray(battlerDef);

    //edit so it only looks at multi hit moves w/ focus sash
    //if((gBattleMons[battlerAtk].item == ITEM_FOCUS_SASH) && AtMaxHp(battlerAtk)){
    //    return FALSE;
    //}
    //else 
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && !(unusable & gBitTable[i])
                && AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected >= gBattleMons[battlerAtk].hp)
            {
                if(!MonHasInTactFocusSashSturdy(battlerAtk, battlerDef, AI_DATA->holdEffects[battlerAtk], AI_DATA->abilities[battlerAtk], moves[i]))
                    return TRUE;
            }
        }
    }

    return FALSE;
}

u32 NoOfHitsForTargetToFaintAI(u32 battlerDef, u32 battlerAtk)
{
    u32 i;
    u32 currNumberOfHits;
    u32 leastNumberOfHits = UNKNOWN_NO_OF_HITS;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        currNumberOfHits = GetNoOfHitsToKOBattler(battlerDef, battlerAtk, i);
        if (currNumberOfHits != 0)
        {
            if (currNumberOfHits < leastNumberOfHits)
                leastNumberOfHits = currNumberOfHits;
        }
    }
    return leastNumberOfHits;
}

u32 GetBestDmgMoveFromBattler(u32 battlerAtk, u32 battlerDef)
{
    u32 i;
    u32 move = 0;
    u32 bestDmg = 0;
    u32 unusable = AI_DATA->moveLimitations[battlerAtk];
    //u16 *moves = GetMovesArray(battlerAtk);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (gBattleMons[battlerAtk].moves[i] != MOVE_NONE && gBattleMons[battlerAtk].moves[i] != MOVE_UNAVAILABLE && !(unusable & gBitTable[i])
            && bestDmg < AI_DATA->simulatedDmg[battlerAtk][battlerDef][i].expected
            && gMovesInfo[gBattleMons[battlerAtk].moves[i]].effect != EFFECT_EXPLOSION
            && gMovesInfo[gBattleMons[battlerAtk].moves[i]].effect != EFFECT_FINAL_GAMBIT)
        {
            if(BattlerHasAi(battlerAtk) && AI_THINKING_STRUCT->score[i] < 100)
                continue;

            bestDmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][i].expected;
            move = gBattleMons[battlerAtk].moves[i];
        }
    }
    return move;
}

u32 GetBestDmgFromBattler(u32 battler, u32 battlerTarget)
{
    u32 i;
    u32 bestDmg = 0;
    u32 unusable = AI_DATA->moveLimitations[battler];
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE
         && moves[i] != MOVE_UNAVAILABLE
         && !(unusable & gBitTable[i])
         && bestDmg < AI_DATA->simulatedDmg[battler][battlerTarget][i].expected
         && gMovesInfo[moves[i]].effect != EFFECT_EXPLOSION
         && gMovesInfo[moves[i]].effect != EFFECT_FINAL_GAMBIT
         && !IsTwoTurnNotSemiInvulnerableMove(battler, moves[i])
         && AI_THINKING_STRUCT->score[i] >= 100)
        {
            bestDmg = AI_DATA->simulatedDmg[battler][battlerTarget][i].expected;
        }
    }

    return bestDmg;
}

// Check if AI mon has the means to faint the target with any of its moves.
// If numHits > 1, check if the target will be KO'ed by that number of hits (ignoring healing effects)
bool32 CanAIFaintTarget(u32 battlerAtk, u32 battlerDef, u32 numHits)
{
    s32 i, dmg;
    u32 moveLimitations = AI_DATA->moveLimitations[battlerAtk];
    u16 *moves = gBattleMons[battlerAtk].moves;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].effect != EFFECT_EXPLOSION && !(moveLimitations & gBitTable[i]))
        {
            // Use the pre-calculated value in simulatedDmg instead of re-calculating it
            dmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][i].minimum;

            if (numHits)
                dmg *= numHits;

            if (gBattleMons[battlerDef].hp <= dmg)
                return TRUE;
        }
    }

    return FALSE;
}

bool32 CanTargetMoveFaintAi(u32 move, u32 battlerDef, u32 battlerAtk, u32 nHits)
{
    u32 indexSlot = GetMoveSlot(GetMovesArray(battlerDef), move);
    if (indexSlot < MAX_MON_MOVES)
    {
        if (GetNoOfHitsToKO(AI_DATA->simulatedDmg[battlerDef][battlerAtk][indexSlot].expected, gBattleMons[battlerAtk].hp) <= nHits)
            return TRUE;
    }
    return FALSE;
}

// Check if target has means to faint ai mon after modding hp/dmg
bool32 CanTargetFaintAiWithMod(u32 battlerDef, u32 battlerAtk, s32 hpMod, s32 dmgMod)
{
    u32 i;
    u32 unusable = AI_DATA->moveLimitations[battlerDef];
    s32 dmg;
    u16 *moves = gBattleResources->battleHistory->usedMoves[battlerDef];
    u32 hpCheck = gBattleMons[battlerAtk].hp + hpMod;

    if (hpCheck > gBattleMons[battlerAtk].maxHP)
        hpCheck = gBattleMons[battlerAtk].maxHP;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        dmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][i].expected;
        if (dmgMod)
            dmg *= dmgMod;

        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && !(unusable & gBitTable[i]) && dmg >= hpCheck)
        {
            return TRUE;
        }
    }

    return FALSE;
}

bool32 AI_IsAbilityOnSide(u32 battlerId, u32 ability)
{
    if (IsBattlerAlive(battlerId) && AI_DATA->abilities[battlerId] == ability)
        return TRUE;
    else if (IsBattlerAlive(BATTLE_PARTNER(battlerId)) && AI_DATA->abilities[BATTLE_PARTNER(battlerId)] == ability)
        return TRUE;
    else
        return FALSE;
}

u32 AI_GetBattlerAbility(u32 battler)
{
    if (gAbilitiesInfo[gBattleMons[battler].ability].cantBeSuppressed)
        return gBattleMons[battler].ability;

    if (gStatuses3[battler] & STATUS3_GASTRO_ACID)
        return ABILITY_NONE;

    if (IsNeutralizingGasOnField()
     && gBattleMons[battler].ability != ABILITY_NEUTRALIZING_GAS
     && GetBattlerHoldEffectIgnoreAbility(battler, TRUE) != HOLD_EFFECT_ABILITY_SHIELD)
        return ABILITY_NONE;

    return gBattleMons[battler].ability;
}

// does NOT include ability suppression checks
s32 AI_DecideKnownAbilityForTurn(u32 battlerId)
{
    u32 validAbilities[NUM_ABILITY_SLOTS];
    u8 i, numValidAbilities = 0;
    u32 knownAbility = AI_GetBattlerAbility(battlerId);

    // We've had ability overwritten by e.g. Worry Seed. It is not part of AI_PARTY in case of switching
    if (gBattleStruct->overwrittenAbilities[battlerId])
        return gBattleStruct->overwrittenAbilities[battlerId];

    // The AI knows its own ability.
    if (IsAiBattlerAware(battlerId))
        return knownAbility;

    // Check neutralizing gas, gastro acid
    if (knownAbility == ABILITY_NONE)
        return knownAbility;

    if (AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability != ABILITY_NONE)
        return AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].ability;

    // Abilities that prevent fleeing - treat as always known
    if (knownAbility == ABILITY_SHADOW_TAG || knownAbility == ABILITY_MAGNET_PULL || knownAbility == ABILITY_ARENA_TRAP)
        return knownAbility;

    for (i = 0; i < NUM_ABILITY_SLOTS; i++)
    {
        if (gSpeciesInfo[gBattleMons[battlerId].species].abilities[i] != ABILITY_NONE)
            validAbilities[numValidAbilities++] = gSpeciesInfo[gBattleMons[battlerId].species].abilities[i];
    }

    //if (numValidAbilities > 0)
    //    return validAbilities[RandomUniform(RNG_AI_ABILITY, 0, numValidAbilities - 1)];

    return knownAbility; // Unknown.
}

u32 AI_DecideHoldEffectForTurn(u32 battlerId)
{
    u32 holdEffect;

    if (!IsAiBattlerAware(battlerId))
        holdEffect = AI_PARTY->mons[GetBattlerSide(battlerId)][gBattlerPartyIndexes[battlerId]].heldEffect;
    else
        holdEffect = GetBattlerHoldEffect(battlerId, FALSE);

    if (AI_THINKING_STRUCT->aiFlags[battlerId] & AI_FLAG_NEGATE_UNAWARE)
        return holdEffect;

    if (gStatuses3[battlerId] & STATUS3_EMBARGO)
        return HOLD_EFFECT_NONE;
    if (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM)
        return HOLD_EFFECT_NONE;
    if (AI_DATA->abilities[battlerId] == ABILITY_KLUTZ && !(gStatuses3[battlerId] & STATUS3_GASTRO_ACID))
        return HOLD_EFFECT_NONE;

    return holdEffect;
}

bool32 AI_IsTerrainAffected(u32 battlerId, u32 flags)
{
    if (gStatuses3[battlerId] & STATUS3_SEMI_INVULNERABLE)
        return FALSE;
    else if (!(gFieldStatuses & flags))
        return FALSE;
    return AI_IsBattlerGrounded(battlerId);
}

// different from IsBattlerGrounded in that we don't always know battler's hold effect or ability
bool32 AI_IsBattlerGrounded(u32 battlerId)
{
    u32 holdEffect = AI_DATA->holdEffects[battlerId];

    if (holdEffect == HOLD_EFFECT_IRON_BALL)
        return TRUE;
    else if (gFieldStatuses & STATUS_FIELD_GRAVITY)
        return TRUE;
    else if (gStatuses3[battlerId] & STATUS3_ROOTED)
        return TRUE;
    else if (gStatuses3[battlerId] & STATUS3_SMACKED_DOWN)
        return TRUE;
    else if (gStatuses3[battlerId] & STATUS3_TELEKINESIS)
        return FALSE;
    else if (gStatuses3[battlerId] & STATUS3_MAGNET_RISE)
        return FALSE;
    else if (holdEffect == HOLD_EFFECT_AIR_BALLOON)
        return FALSE;
    else if (AI_DATA->abilities[battlerId] == ABILITY_LEVITATE)
        return FALSE;
    else if (IS_BATTLER_OF_TYPE(battlerId, TYPE_FLYING))
        return FALSE;
    else
        return TRUE;
}

bool32 DoesBattlerIgnoreAbilityChecks(u32 atkAbility, u32 move)
{
    if (AI_THINKING_STRUCT->aiFlags[sBattler_AI] & AI_FLAG_NEGATE_UNAWARE)
        return FALSE;   // AI handicap flag: doesn't understand ability suppression concept

    if (IsMoldBreakerTypeAbility(sBattler_AI, atkAbility) || gMovesInfo[move].ignoresTargetAbility)
        return TRUE;

    return FALSE;
}

static inline bool32 AI_WeatherHasEffect(struct AiLogicData *aiData)
{
    if (AI_THINKING_STRUCT->aiFlags[sBattler_AI] & AI_FLAG_NEGATE_UNAWARE)
        return TRUE;   // AI doesn't understand weather supression (handicap)

    return aiData->weatherHasEffect;  // weather damping abilities are announced
}

u32 AI_GetWeather(struct AiLogicData *aiData)
{
    if (gBattleWeather == B_WEATHER_NONE)
        return B_WEATHER_NONE;
    if (!AI_WeatherHasEffect(aiData))
        return B_WEATHER_NONE;
    return gBattleWeather;
}

u32 AI_GetBattlerMoveTargetType(u32 battlerId, u32 move)
{
    if (gMovesInfo[move].effect == EFFECT_EXPANDING_FORCE && AI_IsTerrainAffected(battlerId, STATUS_FIELD_PSYCHIC_TERRAIN))
        return MOVE_TARGET_BOTH;
    else
        return gMovesInfo[move].target;
}

bool32 IsAromaVeilProtectedMove(u32 move)
{
    switch (move)
    {
    case MOVE_DISABLE:
    case MOVE_ATTRACT:
    case MOVE_ENCORE:
    case MOVE_TORMENT:
    case MOVE_TAUNT:
    case MOVE_HEAL_BLOCK:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsNonVolatileStatusMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_SLEEP:
    case EFFECT_TOXIC:
    case EFFECT_POISON:
    case EFFECT_PARALYZE:
    case EFFECT_WILL_O_WISP:
    case EFFECT_YAWN:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsConfusionMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_CONFUSE:
    case EFFECT_SWAGGER:
    case EFFECT_FLATTER:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsHazardMoveEffect(u32 moveEffect)
{
    switch (moveEffect)
    {
    case EFFECT_SPIKES:
    case EFFECT_TOXIC_SPIKES:
    case EFFECT_STICKY_WEB:
    case EFFECT_STEALTH_ROCK:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsMoveRedirectionPrevented(u32 move, u32 atkAbility)
{
    if (AI_THINKING_STRUCT->aiFlags[sBattler_AI] & AI_FLAG_NEGATE_UNAWARE)
        return FALSE;

    if (move == MOVE_SKY_DROP
      || move == MOVE_SNIPE_SHOT
      || atkAbility == ABILITY_PROPELLER_TAIL
      || atkAbility == ABILITY_STALWART)
        return TRUE;
    return FALSE;
}

bool32 IsSemiInvulnerable(u32 battlerDef, u32 move)
{
    if (gStatuses3[battlerDef] & STATUS3_PHANTOM_FORCE)
        return TRUE;
    else if (!gMovesInfo[move].damagesAirborne && gStatuses3[battlerDef] & STATUS3_ON_AIR)
        return TRUE;
    else if (!gMovesInfo[move].damagesUnderwater && gStatuses3[battlerDef] & STATUS3_UNDERWATER)
        return TRUE;
    else if (!gMovesInfo[move].damagesUnderground && gStatuses3[battlerDef] & STATUS3_UNDERGROUND)
        return TRUE;
    else
        return FALSE;
}

bool32 IsMoveEncouragedToHit(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 weather;
    if (IsSemiInvulnerable(battlerDef, move))
        return FALSE;

    //TODO - anticipate protect move?

    // always hits
    if (gStatuses3[battlerDef] & STATUS3_ALWAYS_HITS || gDisableStructs[battlerDef].battlerWithSureHit == battlerAtk)
        return TRUE;

    if (AI_DATA->abilities[battlerDef] == ABILITY_NO_GUARD || AI_DATA->abilities[battlerAtk] == ABILITY_NO_GUARD)
        return TRUE;

    if (AI_DATA->abilities[battlerAtk] == ABILITY_FATAL_PRECISION && CalcTypeEffectivenessMultiplier(move, gMovesInfo[move].type, battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], FALSE) >= UQ_4_12(2.0))
        return TRUE;

    if (B_TOXIC_NEVER_MISS >= GEN_6 && gMovesInfo[move].effect == EFFECT_TOXIC && IS_BATTLER_OF_TYPE(battlerAtk, TYPE_POISON))
        return TRUE;

    // discouraged from hitting
    weather = AI_GetWeather(AI_DATA);
    if ((weather & B_WEATHER_SUN) && gMovesInfo[move].effect == EFFECT_THUNDER)
        return FALSE;

    // increased accuracy but don't always hit
    if ((weather & B_WEATHER_RAIN) && gMovesInfo[move].effect == EFFECT_THUNDER)
        return TRUE;
    if ((weather & (B_WEATHER_HAIL | B_WEATHER_SNOW)) && gMovesInfo[move].effect == EFFECT_BLIZZARD)
        return TRUE;
    if (B_MINIMIZE_DMG_ACC >= GEN_6 && (gStatuses3[battlerDef] & STATUS3_MINIMIZED) && gMovesInfo[move].minimizeDoubleDamage)
        return TRUE;
    if (gMovesInfo[move].accuracy == 0)
        return TRUE;

    return FALSE;
}

bool32 ShouldTryOHKO(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move)
{
    u32 holdEffect = AI_DATA->holdEffects[battlerDef];
    u32 accuracy = AI_DATA->moveAccuracy[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex];

    gPotentialItemEffectBattler = battlerDef;
    if (holdEffect == HOLD_EFFECT_FOCUS_BAND && (Random() % 100) < AI_DATA->holdEffectParams[battlerDef])
        return FALSE;   //probabilistically speaking, focus band should activate so dont OHKO
    else if (holdEffect == HOLD_EFFECT_FOCUS_SASH && AtMaxHp(battlerDef))
        return FALSE;

    if (!DoesBattlerIgnoreAbilityChecks(atkAbility, move) && defAbility == ABILITY_STURDY)
        return FALSE;

    if ((((gStatuses3[battlerDef] & STATUS3_ALWAYS_HITS)
        && gDisableStructs[battlerDef].battlerWithSureHit == battlerAtk)
        || atkAbility == ABILITY_NO_GUARD || defAbility == ABILITY_NO_GUARD)
        && gBattleMons[battlerAtk].level >= gBattleMons[battlerDef].level)
    {
        return TRUE;
    }
    else    // test the odds
    {
        u32 odds = accuracy + (gBattleMons[battlerAtk].level - gBattleMons[battlerDef].level);
        if (B_SHEER_COLD_ACC >= GEN_7 && move == MOVE_SHEER_COLD && !IS_BATTLER_OF_TYPE(gBattlerAttacker, TYPE_ICE))
            odds -= 10;
        if (Random() % 100 + 1 < odds && gBattleMons[battlerAtk].level >= gBattleMons[battlerDef].level)
            return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSandstorm(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_SANDSTORM)
        return FALSE;

    if (ability == ABILITY_SAND_VEIL
      || ability == ABILITY_SAND_RUSH
      || ability == ABILITY_SAND_FORCE
      || ability == ABILITY_OVERCOAT
      || ability == ABILITY_MAGIC_GUARD
      || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES
      || IS_BATTLER_OF_TYPE(battler, TYPE_ROCK)
      || IS_BATTLER_OF_TYPE(battler, TYPE_STEEL)
      || IS_BATTLER_OF_TYPE(battler, TYPE_GROUND)
      || HasMoveEffect(battler, EFFECT_SHORE_UP)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetHail(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & (B_WEATHER_HAIL | B_WEATHER_SNOW))
        return FALSE;

    if (ability == ABILITY_SNOW_CLOAK
      || ability == ABILITY_ICE_BODY
      || ability == ABILITY_FORECAST
      || ability == ABILITY_SLUSH_RUSH
      || ability == ABILITY_MAGIC_GUARD
      || ability == ABILITY_OVERCOAT
      || holdEffect == HOLD_EFFECT_SAFETY_GOGGLES
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || HasMoveEffect(battler, EFFECT_BLIZZARD)
      || HasMoveEffect(battler, EFFECT_AURORA_VEIL)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetRain(u32 battlerAtk, u32 atkAbility, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_RAIN)
        return FALSE;

    if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
     && (atkAbility == ABILITY_SWIFT_SWIM
      || atkAbility == ABILITY_FORECAST
      || atkAbility == ABILITY_HYDRATION
      || atkAbility == ABILITY_RAIN_DISH
      || atkAbility == ABILITY_DRY_SKIN
      || HasMoveEffect(battlerAtk, EFFECT_THUNDER)
      || HasMoveEffect(battlerAtk, EFFECT_WEATHER_BALL)
      || HasMoveWithType(battlerAtk, TYPE_WATER)))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSun(u32 battlerAtk, u32 atkAbility, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & B_WEATHER_SUN)
        return FALSE;

    if (holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
     && (atkAbility == ABILITY_CHLOROPHYLL
      || atkAbility == ABILITY_FLOWER_GIFT
      || atkAbility == ABILITY_FORECAST
      || atkAbility == ABILITY_LEAF_GUARD
      || atkAbility == ABILITY_SOLAR_POWER
      || atkAbility == ABILITY_HARVEST
      || HasMoveEffect(battlerAtk, EFFECT_SOLAR_BEAM)
      || HasMoveEffect(battlerAtk, EFFECT_MORNING_SUN)
      || HasMoveEffect(battlerAtk, EFFECT_SYNTHESIS)
      || HasMoveEffect(battlerAtk, EFFECT_MOONLIGHT)
      || HasMoveEffect(battlerAtk, EFFECT_WEATHER_BALL)
      || HasMoveEffect(battlerAtk, EFFECT_GROWTH)
      || HasMoveWithType(battlerAtk, TYPE_FIRE)))
    {
        return TRUE;
    }
    return FALSE;
}

bool32 ShouldSetSnow(u32 battler, u32 ability, u32 holdEffect)
{
    u32 weather = AI_GetWeather(AI_DATA);
    if (weather & (B_WEATHER_SNOW | B_WEATHER_HAIL))
        return FALSE;

    if (ability == ABILITY_SNOW_CLOAK
      || ability == ABILITY_ICE_BODY
      || ability == ABILITY_FORECAST
      || ability == ABILITY_SLUSH_RUSH
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || HasMoveEffect(battler, EFFECT_BLIZZARD)
      || HasMoveEffect(battler, EFFECT_AURORA_VEIL)
      || HasMoveEffect(battler, EFFECT_WEATHER_BALL))
    {
        return TRUE;
    }
    return FALSE;
}

void ProtectChecks(u32 battlerAtk, u32 battlerDef, u32 move, u32 predictedMove, s32 *score)
{

    u32 noOfHitsToFaint = NoOfHitsForTargetToFaintAI(battlerDef, battlerAtk);

    u32 speedBattlerAI, speedBattler;
    u32 holdEffectAI = AI_DATA->holdEffects[battlerAtk];
    u32 holdEffectPlayer = AI_DATA->holdEffects[battlerDef];
    u32 abilityAI = AI_DATA->abilities[battlerAtk];
    u32 abilityPlayer = AI_DATA->abilities[battlerDef];

    speedBattlerAI = GetBattlerTotalSpeedStatArgs(battlerAtk, abilityAI, holdEffectAI);
    speedBattler   = GetBattlerTotalSpeedStatArgs(battlerDef, abilityPlayer, holdEffectPlayer);

    u32 i;

    //if attacking mon previously used protect but protect is not on cooldown, 50% to disincentivise protect
    if (IsDoubleBattle()){
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if((gBattleResources->battleHistory->usedMoves[battlerAtk][i] == move) && Random() % 100 < 50)
                ADJUST_SCORE_PTR(-30);
        }
    }

    //never uses protect in doubles if used last turn
    if (IsDoubleBattle()){
        //if(uses > 0){
        //    ADJUST_SCORE_PTR(-30);
        //}
        if(noOfHitsToFaint == 1){
            //if player has kill on AI and AI is faster
            if(speedBattlerAI >= speedBattler){
                ADJUST_SCORE_PTR(BEST_EFFECT);
            } else {
                //if AI is slower, protect incentivised over all other moves
                ADJUST_SCORE_PTR(20);
            }
        }
    } else {
        //if (uses == 0)
        //{
            ADJUST_SCORE_PTR(WEAK_EFFECT);
        //}

        if (gBattleMons[battlerDef].status1 & (STATUS1_TOXIC_POISON | STATUS1_POISON | STATUS1_BURN)
        || gBattleMons[battlerDef].status2 & STATUS2_CURSED
        || gStatuses3[battlerDef] & (STATUS3_PERISH_SONG | STATUS3_LEECHSEED | STATUS3_YAWN))
            ADJUST_SCORE_PTR(WEAK_EFFECT);

        if(gWishFutureKnock.wishCounter[battlerAtk] != 0){
            ADJUST_SCORE_PTR(DECENT_EFFECT + WEAK_EFFECT);
        }
    }
}

// stat stages
bool32 ShouldLowerStat(u32 battler, u32 battlerAbility, u32 stat)
{
    if (gBattleMons[battler].statStages[stat] > MIN_STAT_STAGE && battlerAbility != ABILITY_CONTRARY)
    {
        if (AI_DATA->holdEffects[battler] == HOLD_EFFECT_CLEAR_AMULET
         || battlerAbility == ABILITY_CLEAR_BODY
         || battlerAbility == ABILITY_WHITE_SMOKE
         || battlerAbility == ABILITY_FULL_METAL_BODY)
            return FALSE;

        switch (stat)
        {
            case STAT_ATK:
                return !(battlerAbility == ABILITY_HYPER_CUTTER);
            case STAT_DEF:
                return !(battlerAbility == ABILITY_BIG_PECKS);
            case STAT_SPEED:
                // If AI is faster and doesn't have any mons left, lowering speed doesn't give any
                return !(AI_IsFaster(sBattler_AI, battler, AI_THINKING_STRUCT->moveConsidered)
                    && CountUsablePartyMons(sBattler_AI) == 0
                    && !HasMoveEffect(sBattler_AI, EFFECT_ELECTRO_BALL));
            case STAT_ACC:
                return !(battlerAbility == ABILITY_KEEN_EYE || (B_ILLUMINATE_EFFECT >= GEN_9 && battlerAbility == ABILITY_ILLUMINATE));
        }
        return TRUE;
    }

    return FALSE;
}

bool32 BattlerStatCanRise(u32 battler, u32 battlerAbility, u32 stat)
{
    if ((gBattleMons[battler].statStages[stat] < MAX_STAT_STAGE && battlerAbility != ABILITY_CONTRARY)
      || (battlerAbility == ABILITY_CONTRARY && gBattleMons[battler].statStages[stat] > MIN_STAT_STAGE))
        return TRUE;
    return FALSE;
}

bool32 AreBattlersStatsMaxed(u32 battlerId)
{
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] < MAX_STAT_STAGE)
            return FALSE;
    }
    return TRUE;
}

bool32 AnyStatIsRaised(u32 battlerId)
{
    u32 i;

    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] > DEFAULT_STAT_STAGE)
            return TRUE;
    }
    return FALSE;
}

u32 CountPositiveStatStages(u32 battlerId)
{
    u32 count = 0;
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] > DEFAULT_STAT_STAGE)
            count++;
    }
    return count;
}

u32 CountNegativeStatStages(u32 battlerId)
{
    u32 count = 0;
    u32 i;
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerId].statStages[i] < DEFAULT_STAT_STAGE)
            count++;
    }
    return count;
}

bool32 ShouldLowerAttack(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_ATK] > 4
      && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_HYPER_CUTTER
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerDefense(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_DEF] > 4
      && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_BIG_PECKS
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerSpeed(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (defAbility == ABILITY_CONTRARY
     || defAbility == ABILITY_CLEAR_BODY
     || defAbility == ABILITY_FULL_METAL_BODY
     || defAbility == ABILITY_WHITE_SMOKE
     || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CLEAR_AMULET)
        return FALSE;

    if(AI_DATA->speedStats[battlerAtk] >= AI_DATA->speedStats[battlerDef])
        return FALSE;

    return TRUE;
}

bool32 ShouldLowerSpAtk(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_SPATK] > 4
      && HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerSpDef(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_SPDEF] > 4
      && HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL)
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerAccuracy(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_KEEN_EYE
      && defAbility != ABILITY_MINDS_EYE
      && (B_ILLUMINATE_EFFECT >= GEN_9 && defAbility != ABILITY_ILLUMINATE)
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 ShouldLowerEvasion(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if (AI_IsFaster(battlerAtk, battlerDef, AI_THINKING_STRUCT->moveConsidered)
            && (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT)
            && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return FALSE; // Don't bother lowering stats if can kill enemy.

    if (gBattleMons[battlerDef].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE
      && defAbility != ABILITY_CONTRARY
      && defAbility != ABILITY_CLEAR_BODY
      && defAbility != ABILITY_FULL_METAL_BODY
      && defAbility != ABILITY_WHITE_SMOKE
      && AI_DATA->holdEffects[battlerDef] != HOLD_EFFECT_CLEAR_AMULET)
        return TRUE;
    return FALSE;
}

bool32 CanIndexMoveFaintTarget(u32 battlerAtk, u32 battlerDef, u32 index, u32 numHits)
{
    s32 dmg;

    if (numHits)
        dmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][index].expected * numHits;
    else
        dmg = AI_DATA->simulatedDmg[battlerAtk][battlerDef][index].minimum;

    if (gBattleMons[battlerDef].hp <= dmg)
        return TRUE;
    return FALSE;
}

bool32 IsMoveEncouragedKill(u32 battlerAtk, u32 battlerDef, u32 move){
    u8 i;

    if(gMovesInfo[move].effect == EFFECT_FELL_STINGER){
        return TRUE;
    }

    if(gMovesInfo[move].effect == EFFECT_KNOCK_OFF){
        return TRUE;
    }

    if(gMovesInfo[move].additionalEffects[0].moveEffect == MOVE_EFFECT_ALL_STATS_UP){
        return TRUE;
    }

    for (i = 0; i < gMovesInfo[move].numAdditionalEffects; i++){
        if (!MoveEffectIsGuaranteed(battlerAtk, AI_DATA->abilities[battlerAtk], &gMovesInfo[move].additionalEffects[i]))
            continue;

        if (gMovesInfo[move].additionalEffects[i].self)
        {
            if (AI_DATA->abilities[battlerAtk] != ABILITY_CONTRARY)
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                case MOVE_EFFECT_ATK_PLUS_1:
                case MOVE_EFFECT_DEF_PLUS_1:
                case MOVE_EFFECT_SPD_PLUS_1:
                case MOVE_EFFECT_SP_ATK_PLUS_1:
                case MOVE_EFFECT_SP_DEF_PLUS_1:
                case MOVE_EFFECT_ATK_PLUS_2:
                case MOVE_EFFECT_DEF_PLUS_2:
                case MOVE_EFFECT_SPD_PLUS_2:
                case MOVE_EFFECT_SP_ATK_PLUS_2:
                case MOVE_EFFECT_SP_DEF_PLUS_2:
                case MOVE_EFFECT_ACC_PLUS_1:
                case MOVE_EFFECT_ACC_PLUS_2:
                case MOVE_EFFECT_EVS_PLUS_1:
                case MOVE_EFFECT_EVS_PLUS_2:
                case MOVE_EFFECT_RAPID_SPIN:
                        return TRUE;
                    break;
                }
            }
            else
            {
                switch (gMovesInfo[move].additionalEffects[i].moveEffect)
                {
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                case MOVE_EFFECT_ATK_MINUS_2:
                case MOVE_EFFECT_DEF_MINUS_2:
                case MOVE_EFFECT_SPD_MINUS_2:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                case MOVE_EFFECT_ACC_MINUS_1:
                case MOVE_EFFECT_ACC_MINUS_2:
                case MOVE_EFFECT_EVS_MINUS_1:
                case MOVE_EFFECT_EVS_MINUS_2:
                case MOVE_EFFECT_DEF_SPDEF_DOWN:
                case MOVE_EFFECT_ATK_DEF_DOWN:
                case MOVE_EFFECT_V_CREATE:
                        return TRUE;
                    break;
                }
            }
        } else {
            switch (gMovesInfo[move].additionalEffects[i].moveEffect)
            {
                case MOVE_EFFECT_SPD_MINUS_1:
                case MOVE_EFFECT_SPD_MINUS_2:
                case MOVE_EFFECT_ATK_MINUS_1:
                case MOVE_EFFECT_DEF_MINUS_1:
                case MOVE_EFFECT_SP_ATK_MINUS_1:
                case MOVE_EFFECT_SP_DEF_MINUS_1:
                case MOVE_EFFECT_ACC_MINUS_1:
                case MOVE_EFFECT_EVS_MINUS_1:
                case MOVE_EFFECT_ATK_MINUS_2:
                case MOVE_EFFECT_DEF_MINUS_2:
                case MOVE_EFFECT_SP_ATK_MINUS_2:
                case MOVE_EFFECT_SP_DEF_MINUS_2:
                case MOVE_EFFECT_ACC_MINUS_2:
                case MOVE_EFFECT_EVS_MINUS_2:
                case MOVE_EFFECT_STEALTH_ROCK:
                case MOVE_EFFECT_SPIKES:
                        return TRUE;
                    break;
            }
        }
    }
    return FALSE;
}

u16 *GetMovesArray(u32 battler)
{
    return gBattleMons[battler].moves;
}

bool32 HasOnlyMovesWithCategory(u32 battlerId, u32 category, bool32 onlyOffensive)
{
    u32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (onlyOffensive && IS_MOVE_STATUS(moves[i]))
            continue;
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && GetBattleMoveCategory(moves[i]) != category)
            return FALSE;
    }

    return TRUE;
}

bool32 HasMoveWithCategory(u32 battler, u32 category)
{
    u32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && GetBattleMoveCategory(moves[i]) == category)
            return TRUE;
    }
    return FALSE;
}

bool32 HasMoveWithType(u32 battler, u32 type)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].type == type)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveEffect(u32 battlerId, u32 effect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect == effect)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveEffectANDArg(u32 battlerId, u32 effect, u32 argument)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect == effect
            && (gMovesInfo[moves[i]].argument & argument))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithAdditionalEffect(u32 battlerId, u32 moveEffect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && MoveHasAdditionalEffect(moves[i], moveEffect))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithCriticalHitChance(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].criticalHitStage > 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithMoveEffectExcept(u32 battlerId, u32 moveEffect, u32 exception)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
            && gMovesInfo[moves[i]].effect != exception
            && MoveHasAdditionalEffect(moves[i], moveEffect))
            return TRUE;
    }

    return FALSE;
}

bool32 HasMove(u32 battlerId, u32 move)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && moves[i] == move)
            return TRUE;
    }

    return FALSE;
}

bool32 HasAnyKnownMove(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef, u32 accCheck, bool32 ignoreStatus, u32 atkAbility, u32 defAbility, u32 atkHoldEffect, u32 defHoldEffect)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerAtk);
    u32 moveLimitations = AI_DATA->moveLimitations[battlerAtk];

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE || moves[i] == MOVE_UNAVAILABLE)
            continue;

        if (!(gBitTable[i] & moveLimitations))
        {
            if (ignoreStatus && IS_MOVE_STATUS(moves[i]))
                continue;
            else if ((!IS_MOVE_STATUS(moves[i]) && gMovesInfo[moves[i]].accuracy == 0)
              || AI_GetBattlerMoveTargetType(battlerAtk, moves[i]) & (MOVE_TARGET_USER | MOVE_TARGET_OPPONENTS_FIELD))
                continue;

            if (AI_DATA->moveAccuracy[battlerAtk][battlerDef][i] <= accCheck)
                return TRUE;
        }
    }

    return FALSE;
}

bool32 HasSleepMoveWithLowAccuracy(u32 battlerAtk, u32 battlerDef)
{
    u32 moveLimitations = AI_DATA->moveLimitations[battlerAtk];
    u32 i;
    u16 *moves = GetMovesArray(battlerAtk);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] == MOVE_NONE)
            break;
        if (!(gBitTable[i] & moveLimitations))
        {
            if (gMovesInfo[moves[i]].effect == EFFECT_SLEEP
              && AI_DATA->moveAccuracy[battlerAtk][battlerDef][i] < 85)
                return TRUE;
        }
    }
    return FALSE;
}

bool32 IsHealingMove(u32 move)
{
    return gMovesInfo[move].healingMove;
}

bool32 HasHealingEffect(u32 battlerId)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && IsHealingMove(moves[i]))
            return TRUE;
    }

    return FALSE;
}

bool32 IsTrappingMove(u32 move)
{
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_MEAN_LOOK:
    case EFFECT_FAIRY_LOCK:
    //case EFFECT_NO_RETREAT:   // TODO
        return TRUE;
    default:
        return MoveHasAdditionalEffect(move, MOVE_EFFECT_PREVENT_ESCAPE)
            || MoveHasAdditionalEffect(move, MOVE_EFFECT_WRAP);
    }
}

bool32 HasTrappingMoveEffect(u32 battler)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && IsTrappingMove(moves[i]))
            return TRUE;
    }

    return FALSE;
}

bool32 HasThawingMove(u32 battler)
{
    CHECK_MOVE_FLAG(thawsUser);
}

bool32 IsUngroundingEffect(u32 effect)
{
    switch (effect)
    {
    case EFFECT_MAGNET_RISE:
        return TRUE;
    default:
        return FALSE;
    }
}

// for anger point
bool32 IsAttackBoostMoveEffect(u32 effect)
{
    switch (effect)
    {
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_2:
    case EFFECT_ATTACK_ACCURACY_UP:
    case EFFECT_ATTACK_SPATK_UP:
    case EFFECT_DRAGON_DANCE:
    case EFFECT_COIL:
    case EFFECT_BELLY_DRUM:
    case EFFECT_BULK_UP:
    case EFFECT_GROWTH:
    case EFFECT_FILLET_AWAY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsStatRaisingEffect(u32 effect)
{
    switch (effect)
    {
    case EFFECT_ATTACK_UP:
    case EFFECT_ATTACK_UP_2:
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_SPEED_UP:
    case EFFECT_SPEED_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP:
    case EFFECT_SPECIAL_ATTACK_UP_2:
    case EFFECT_SPECIAL_ATTACK_UP_3:
    case EFFECT_SPECIAL_DEFENSE_UP:
    case EFFECT_SPECIAL_DEFENSE_UP_2:
    case EFFECT_ACCURACY_UP:
    case EFFECT_ACCURACY_UP_2:
    case EFFECT_EVASION_UP:
    case EFFECT_EVASION_UP_2:
    case EFFECT_MINIMIZE:
    case EFFECT_DEFENSE_CURL:
    case EFFECT_CALM_MIND:
    case EFFECT_COSMIC_POWER:
    case EFFECT_DRAGON_DANCE:
    case EFFECT_ACUPRESSURE:
    case EFFECT_SHELL_SMASH:
    case EFFECT_SHIFT_GEAR:
    case EFFECT_ATTACK_ACCURACY_UP:
    case EFFECT_ATTACK_SPATK_UP:
    case EFFECT_GROWTH:
    case EFFECT_COIL:
    case EFFECT_QUIVER_DANCE:
    case EFFECT_BULK_UP:
    case EFFECT_GEOMANCY:
    case EFFECT_STOCKPILE:
    case EFFECT_VICTORY_DANCE:
        return TRUE;
    case EFFECT_CHARGE:
        return B_CHARGE_SPDEF_RAISE >= GEN_5;
    default:
        return FALSE;
    }
}

bool32 IsStatLoweringEffect(u32 effect)
{
    // ignore other potentially-beneficial effects like defog, gravity
    switch (effect)
    {
    case EFFECT_ATTACK_DOWN:
    case EFFECT_DEFENSE_DOWN:
    case EFFECT_SPEED_DOWN:
    case EFFECT_SPECIAL_ATTACK_DOWN:
    case EFFECT_SPECIAL_DEFENSE_DOWN:
    case EFFECT_ACCURACY_DOWN:
    case EFFECT_EVASION_DOWN:
    case EFFECT_ATTACK_DOWN_2:
    case EFFECT_DEFENSE_DOWN_2:
    case EFFECT_SPEED_DOWN_2:
    case EFFECT_SPECIAL_ATTACK_DOWN_2:
    case EFFECT_SPECIAL_DEFENSE_DOWN_2:
    case EFFECT_ACCURACY_DOWN_2:
    case EFFECT_EVASION_DOWN_2:
    case EFFECT_TICKLE:
    case EFFECT_CAPTIVATE:
    case EFFECT_NOBLE_ROAR:
    case EFFECT_MEMENTO:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 HasDamagingMove(u32 battlerId)
{
    u32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].power != 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasDamagingMoveOfType(u32 battlerId, u32 type)
{
    s32 i;
    u16 *moves = GetMovesArray(battlerId);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE
          && gMovesInfo[moves[i]].type == type && gMovesInfo[moves[i]].power != 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasSubstituteIgnoringMove(u32 battler)
{
    CHECK_MOVE_FLAG(ignoresSubstitute);
}

bool32 HasHighCritRatioMove(u32 battler)
{
    s32 i;
    u16 *moves = GetMovesArray(battler);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && gMovesInfo[moves[i]].criticalHitStage > 0)
            return TRUE;
    }

    return FALSE;
}

bool32 HasMagicCoatAffectedMove(u32 battler)
{
    CHECK_MOVE_FLAG(magicCoatAffected);
}

bool32 HasSnatchAffectedMove(u32 battler)
{
    CHECK_MOVE_FLAG(snatchAffected);
}

bool32 IsTwoTurnNotSemiInvulnerableMove(u32 battlerAtk, u32 move)
{
    switch (gMovesInfo[move].effect)
    {
    case EFFECT_SOLAR_BEAM:
    case EFFECT_TWO_TURNS_ATTACK:
        return !(AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_POWER_HERB
          || (AI_GetWeather(AI_DATA) & gMovesInfo[move].argument));
    default:
        return FALSE;
    }
}

static u32 GetLeechSeedDamage(u32 battlerId)
{
    u32 damage = 0;
    if ((gStatuses3[battlerId] & STATUS3_LEECHSEED)
     && gBattleMons[gStatuses3[battlerId] & STATUS3_LEECHSEED_BATTLER].hp != 0)
     {
        damage = GetNonDynamaxMaxHP(battlerId) / 8;
        if (damage == 0)
            damage = 1;
     }
     return damage;
}

static u32 GetNightmareDamage(u32 battlerId)
{
    u32 damage = 0;
    if ((gBattleMons[battlerId].status2 & STATUS2_NIGHTMARE) && gBattleMons[battlerId].status1 & STATUS1_SLEEP)
    {
        damage = GetNonDynamaxMaxHP(battlerId) / 4;
        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetCurseDamage(u32 battlerId)
{
    u32 damage = 0;
    if (gBattleMons[battlerId].status2 & STATUS2_CURSED)
    {
        damage = GetNonDynamaxMaxHP(battlerId) / 4;
        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetTrapDamage(u32 battlerId)
{
    // ai has no knowledge about turns remaining
    u32 damage = 0;
    u32 holdEffect = AI_DATA->holdEffects[gBattleStruct->wrappedBy[battlerId]];
    if (gBattleMons[battlerId].status2 & STATUS2_WRAPPED)
    {
        if (holdEffect == HOLD_EFFECT_BINDING_BAND)
            damage = GetNonDynamaxMaxHP(battlerId) / (B_BINDING_DAMAGE >= GEN_6 ? 6 : 8);
        else
            damage = GetNonDynamaxMaxHP(battlerId) / (B_BINDING_DAMAGE >= GEN_6 ? 8 : 16);

        if (damage == 0)
            damage = 1;
    }
    return damage;
}

static u32 GetPoisonDamage(u32 battlerId)
{
    u32 damage = 0;

    if (AI_DATA->abilities[battlerId] == ABILITY_POISON_HEAL)
        return damage;

    if (gBattleMons[battlerId].status1 & STATUS1_POISON)
    {
        damage = gBattleMons[battlerId].maxHP / 8;
        if (damage == 0)
            damage = 1;
    }
    else if (gBattleMons[battlerId].status1 & STATUS1_TOXIC_POISON)
    {
        damage = gBattleMons[battlerId].maxHP / 16;
        if (damage == 0)
            damage = 1;
        if ((gBattleMons[battlerId].status1 & STATUS1_TOXIC_COUNTER) != STATUS1_TOXIC_TURN(15)) // not 16 turns
            gBattleMons[battlerId].status1 += STATUS1_TOXIC_TURN(1);
        damage *= (gBattleMons[battlerId].status1 & STATUS1_TOXIC_COUNTER) >> 8;
    }
    return damage;
}

static bool32 BattlerAffectedBySandstorm(u32 battlerId, u32 ability)
{
    if (!IS_BATTLER_OF_TYPE(battlerId, TYPE_ROCK)
      && !IS_BATTLER_OF_TYPE(battlerId, TYPE_GROUND)
      && !IS_BATTLER_OF_TYPE(battlerId, TYPE_STEEL)
      && ability != ABILITY_SAND_VEIL
      && ability != ABILITY_SAND_FORCE
      && ability != ABILITY_SAND_RUSH
      && ability != ABILITY_OVERCOAT)
        return TRUE;
    return FALSE;
}

static bool32 BattlerAffectedByHail(u32 battlerId, u32 ability)
{
    if (!IS_BATTLER_OF_TYPE(battlerId, TYPE_ICE)
      && ability != ABILITY_SNOW_CLOAK
      && ability != ABILITY_OVERCOAT
      && ability != ABILITY_ICE_BODY)
        return TRUE;
    return FALSE;
}

static u32 GetWeatherDamage(u32 battlerId)
{
    u32 ability = AI_DATA->abilities[battlerId];
    u32 holdEffect = AI_DATA->holdEffects[battlerId];
    u32 damage = 0;
    u32 weather = AI_GetWeather(AI_DATA);
    if (!weather)
        return 0;

    if (weather & B_WEATHER_SANDSTORM)
    {
        if (BattlerAffectedBySandstorm(battlerId, ability)
          && !(gStatuses3[battlerId] & (STATUS3_UNDERGROUND | STATUS3_UNDERWATER))
          && holdEffect != HOLD_EFFECT_SAFETY_GOGGLES)
        {
            damage = GetNonDynamaxMaxHP(battlerId) / 16;
            if (damage == 0)
                damage = 1;
        }
    }
    if ((weather & B_WEATHER_HAIL) && ability != ABILITY_ICE_BODY)
    {
        if (BattlerAffectedByHail(battlerId, ability)
          && !(gStatuses3[battlerId] & (STATUS3_UNDERGROUND | STATUS3_UNDERWATER))
          && holdEffect != HOLD_EFFECT_SAFETY_GOGGLES)
        {
            damage = GetNonDynamaxMaxHP(battlerId) / 16;
            if (damage == 0)
                damage = 1;
        }
    }
    return damage;
}

u32 GetBattlerSecondaryDamage(u32 battlerId)
{
    u32 secondaryDamage;

    if (AI_DATA->abilities[battlerId] == ABILITY_MAGIC_GUARD)
        return FALSE;

    secondaryDamage = GetLeechSeedDamage(battlerId)
     + GetNightmareDamage(battlerId)
     + GetCurseDamage(battlerId)
     + GetTrapDamage(battlerId)
     + GetPoisonDamage(battlerId)
     + GetWeatherDamage(battlerId);

    return secondaryDamage;
}

bool32 BattlerWillFaintFromWeather(u32 battler, u32 ability)
{
    if ((BattlerAffectedBySandstorm(battler, ability) || BattlerAffectedByHail(battler, ability))
      && gBattleMons[battler].hp <= max(1, gBattleMons[battler].maxHP / 16))
        return TRUE;

    return FALSE;
}

bool32 BattlerWillFaintFromSecondaryDamage(u32 battler, u32 ability)
{
    if (GetBattlerSecondaryDamage(battler) != 0
      && gBattleMons[battler].hp <= max(1, gBattleMons[battler].maxHP / 16))
        return TRUE;
    return FALSE;
}

static bool32 AnyUsefulStatIsRaised(u32 battler)
{
    u32 statId;

    for (statId = STAT_ATK; statId < NUM_BATTLE_STATS; statId++)
    {
        if (gBattleMons[battler].statStages[statId] > DEFAULT_STAT_STAGE)
        {
            switch (statId)
            {
            case STAT_ATK:
                if (HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
                    return TRUE;
                break;
            case STAT_SPATK:
                if (HasMoveWithCategory(battler, DAMAGE_CATEGORY_SPECIAL))
                    return TRUE;
                break;
            case STAT_SPEED:
                return TRUE;
            }
        }
    }

    return FALSE;
}

struct Pokemon *GetPartyBattlerPartyData(u32 battlerId, u32 switchBattler)
{
    struct Pokemon *mon;
    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        mon = &gPlayerParty[switchBattler];
    else
        mon = &gEnemyParty[switchBattler];
    return mon;
}

static bool32 PartyBattlerShouldAvoidHazards(u32 currBattler, u32 switchBattler)
{
    struct Pokemon *mon = GetPartyBattlerPartyData(currBattler, switchBattler);
    u32 ability = GetMonAbility(mon);   // we know our own party data
    u32 holdEffect;
    u32 species = GetMonData(mon, MON_DATA_SPECIES);
    u32 flags = gSideStatuses[GetBattlerSide(currBattler)] & (SIDE_STATUS_SPIKES | SIDE_STATUS_STEALTH_ROCK | SIDE_STATUS_STICKY_WEB | SIDE_STATUS_TOXIC_SPIKES);
    s32 hazardDamage = 0;
    u32 type1 = gSpeciesInfo[species].types[0];
    u32 type2 = gSpeciesInfo[species].types[1];
    u32 maxHp = GetMonData(mon, MON_DATA_MAX_HP);

    if (flags == 0)
        return FALSE;

    if (ability == ABILITY_MAGIC_GUARD)
        return FALSE;
    if (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM || ability == ABILITY_KLUTZ)
        holdEffect = HOLD_EFFECT_NONE;
    else
        holdEffect = gItemsInfo[GetMonData(mon, MON_DATA_HELD_ITEM)].holdEffect;
    if (holdEffect == HOLD_EFFECT_HEAVY_DUTY_BOOTS)
        return FALSE;

    if (flags & SIDE_STATUS_STEALTH_ROCK)
        hazardDamage += GetStealthHazardDamageByTypesAndHP(gMovesInfo[MOVE_STEALTH_ROCK].type, type1, type2, maxHp);

    if (flags & SIDE_STATUS_SPIKES && ((type1 != TYPE_FLYING && type2 != TYPE_FLYING
        && ability != ABILITY_LEVITATE && holdEffect != HOLD_EFFECT_AIR_BALLOON)
        || holdEffect == HOLD_EFFECT_IRON_BALL || gFieldStatuses & STATUS_FIELD_GRAVITY))
    {
        s32 spikesDmg = maxHp / ((5 - gSideTimers[GetBattlerSide(currBattler)].spikesAmount) * 2);
        if (spikesDmg == 0)
            spikesDmg = 1;
        hazardDamage += spikesDmg;
    }

    if (hazardDamage >= GetMonData(mon, MON_DATA_HP))
        return TRUE;
    return FALSE;
}

enum {
    DONT_PIVOT,
    CAN_TRY_PIVOT,
    PIVOT,
};
bool32 ShouldPivot(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 moveIndex)
{
    bool32 hasStatBoost = AnyUsefulStatIsRaised(battlerAtk) || gBattleMons[battlerDef].statStages[STAT_EVASION] >= 9; //Significant boost in evasion for any class
    bool32 shouldSwitch;
    u32 battlerToSwitch;

    shouldSwitch = ShouldSwitch(battlerAtk, FALSE);
    battlerToSwitch = gBattleStruct->AI_monToSwitchIntoId[battlerAtk];

    if (PartyBattlerShouldAvoidHazards(battlerAtk, battlerToSwitch))
        return DONT_PIVOT;

    if (!IsDoubleBattle())
    {
        if (CountUsablePartyMons(battlerAtk) == 0)
            return CAN_TRY_PIVOT; // can't switch, but attack might still be useful

        //TODO - predict opponent switching
        /*if (IsPredictedToSwitch(battlerDef, battlerAtk) && !hasStatBoost)
            return PIVOT; // Try pivoting so you can switch to a better matchup to counter your new opponent*/

        if (AI_IsFaster(battlerAtk, battlerDef, move)) // Attacker goes first
        {
            if (!CanAIFaintTarget(battlerAtk, battlerDef, 0)) // Can't KO foe otherwise
            {
                if (CanAIFaintTarget(battlerAtk, battlerDef, 2))
                {
                    // attacker can kill target in two hits (theoretically)
                    if (CanTargetFaintAi(battlerDef, battlerAtk))
                        return PIVOT;   // Won't get the two turns, pivot

                    if (!IS_MOVE_STATUS(move) && (shouldSwitch
                        || (AtMaxHp(battlerDef) && (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_FOCUS_SASH
                        || (B_STURDY >= GEN_5 && defAbility == ABILITY_STURDY)
                        || defAbility == ABILITY_MULTISCALE
                        || defAbility == ABILITY_SHADOW_SHIELD))))
                        return PIVOT;   // pivot to break sash/sturdy/multiscale
                }
                else if (!hasStatBoost)
                {
                    if (!IS_MOVE_STATUS(move) && (AtMaxHp(battlerDef) && (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_FOCUS_SASH
                        || (B_STURDY >= GEN_5 && defAbility == ABILITY_STURDY)
                        || defAbility == ABILITY_MULTISCALE
                        || defAbility == ABILITY_SHADOW_SHIELD)))
                        return PIVOT;   // pivot to break sash/sturdy/multiscale

                    if (shouldSwitch)
                        return PIVOT;

                    /* TODO - check if switchable mon unafffected by/will remove hazards
                    if (gSideStatuses[battlerAtk] & SIDE_STATUS_SPIKES && switchScore >= SWITCHING_INCREASE_CAN_REMOVE_HAZARDS)
                        return PIVOT;*/

                    /*if (BattlerWillFaintFromSecondaryDamage(battlerAtk, AI_DATA->abilities[battlerAtk]) && switchScore >= SWITCHING_INCREASE_WALLS_FOE)
                        return PIVOT;*/

                    /*if (IsClassDamager(class) && switchScore >= SWITCHING_INCREASE_HAS_SUPER_EFFECTIVE_MOVE)
                    {
                        bool32 physMoveInMoveset = PhysicalMoveInMoveset(battlerAtk);
                        bool32 specMoveInMoveset = SpecialMoveInMoveset(battlerAtk);

                        //Pivot if attacking stats are bad
                        if (physMoveInMoveset && !specMoveInMoveset)
                        {
                            if (STAT_STAGE_ATK < 6)
                                return PIVOT;
                        }
                        else if (!physMoveInMoveset && specMoveInMoveset)
                        {
                            if (STAT_STAGE_SPATK < 6)
                                return PIVOT;
                        }
                        else if (physMoveInMoveset && specMoveInMoveset)
                        {
                            if (STAT_STAGE_ATK < 6 && STAT_STAGE_SPATK < 6)
                                return PIVOT;
                        }

                        return CAN_TRY_PIVOT;
                    }*/
                }
            }
        }
        else // Opponent Goes First
        {
            if (CanTargetFaintAi(battlerDef, battlerAtk))
            {
                if (gMovesInfo[move].effect == EFFECT_TELEPORT)
                    return DONT_PIVOT; // If you're going to faint because you'll go second, use a different move
                else
                    return CAN_TRY_PIVOT; // You're probably going to faint anyways so if for some reason you don't, better switch
            }
            else if (CanTargetFaintAiWithMod(battlerDef, battlerAtk, 0, 2)) // Foe can 2HKO AI
            {
                if (CanAIFaintTarget(battlerAtk, battlerDef, 0))
                {
                    if (!BattlerWillFaintFromSecondaryDamage(battlerAtk, AI_DATA->abilities[battlerAtk]))
                        return CAN_TRY_PIVOT; // Use this move to KO if you must
                }
                else // Can't KO the foe
                {
                    return PIVOT;
                }
            }
            else // Foe can 3HKO+ AI
            {
                if (CanAIFaintTarget(battlerAtk, battlerDef, 0))
                {
                    if (!BattlerWillFaintFromSecondaryDamage(battlerAtk, AI_DATA->abilities[battlerAtk]) // This is the only move that can KO
                      && !hasStatBoost) //You're not wasting a valuable stat boost
                    {
                        return CAN_TRY_PIVOT;
                    }
                }
                else if (CanAIFaintTarget(battlerAtk, battlerDef, 2))
                {
                    // can knock out foe in 2 hits
                    if (IS_MOVE_STATUS(move) && (shouldSwitch //Damaging move
                      //&& (switchScore >= SWITCHING_INCREASE_RESIST_ALL_MOVES + SWITCHING_INCREASE_KO_FOE //remove hazards
                     || (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_FOCUS_SASH && AtMaxHp(battlerDef))))
                        return DONT_PIVOT; // Pivot to break the sash
                    else
                        return CAN_TRY_PIVOT;
                }
                else
                {
                    //if (IsClassDamager(class) && switchScore >= SWITCHING_INCREASE_KO_FOE)
                        //return PIVOT; //Only switch if way better matchup

                    if (!hasStatBoost)
                    {
                        // TODO - check if switching prevents/removes hazards
                        //if (gSideStatuses[battlerAtk] & SIDE_STATUS_SPIKES && switchScore >= SWITCHING_INCREASE_CAN_REMOVE_HAZARDS)
                            //return PIVOT;

                        // TODO - not always a good idea
                        //if (BattlerWillFaintFromSecondaryDamage(battlerAtk) && switchScore >= SWITCHING_INCREASE_HAS_SUPER_EFFECTIVE_MOVE)
                            //return PIVOT;

                        /*if (IsClassDamager(class) && switchScore >= SWITCHING_INCREASE_HAS_SUPER_EFFECTIVE_MOVE)
                        {
                            bool32 physMoveInMoveset = PhysicalMoveInMoveset(battlerAtk);
                            bool32 specMoveInMoveset = SpecialMoveInMoveset(battlerAtk);

                            //Pivot if attacking stats are bad
                            if (physMoveInMoveset && !specMoveInMoveset)
                            {
                                if (STAT_STAGE_ATK < 6)
                                    return PIVOT;
                            }
                            else if (!physMoveInMoveset && specMoveInMoveset)
                            {
                                if (STAT_STAGE_SPATK < 6)
                                    return PIVOT;
                            }
                            else if (physMoveInMoveset && specMoveInMoveset)
                            {
                                if (STAT_STAGE_ATK < 6 && STAT_STAGE_SPATK < 6)
                                    return PIVOT;
                            }
                        }*/

                        return CAN_TRY_PIVOT;
                    }
                }
            }
        }
    }

    return DONT_PIVOT;
}

bool32 CanKnockOffItem(u32 battler, u32 item)
{
    if (item == ITEM_NONE)
        return FALSE;

    if (!(gBattleTypeFlags & (BATTLE_TYPE_EREADER_TRAINER
      | BATTLE_TYPE_FRONTIER
      | BATTLE_TYPE_LINK
      | BATTLE_TYPE_RECORDED_LINK
      | BATTLE_TYPE_SECRET_BASE
      | (B_TRAINERS_KNOCK_OFF_ITEMS == TRUE ? BATTLE_TYPE_TRAINER : 0)
      )) && GetBattlerSide(battler) == B_SIDE_PLAYER)
        return FALSE;

    if (AI_DATA->abilities[battler] == ABILITY_STICKY_HOLD)
        return FALSE;

    if (!CanBattlerGetOrLoseItem(battler, item))
        return FALSE;

    return TRUE;
}

// status checks
bool32 IsBattlerIncapacitated(u32 battler, u32 ability)
{
    if ((gBattleMons[battler].status1 & STATUS1_FREEZE) && !HasThawingMove(battler))
        return TRUE;    // if battler has thawing move we assume they will definitely use it, and thus being frozen should be neglected

    if (gBattleMons[battler].status1 & STATUS1_SLEEP)
        return TRUE;

    if (gBattleMons[battler].status2 & STATUS2_RECHARGE || (ability == ABILITY_TRUANT && gDisableStructs[battler].truantCounter != 0))
        return TRUE;

    return FALSE;
}

bool32 AI_CanPutToSleep(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBeSlept(battlerDef, defAbility)
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))   // shouldn't try to sleep mon that partner is trying to make sleep
        return FALSE;
    return TRUE;
}

bool32 ShouldPoisonSelf(u32 battler, u32 ability)
{
    if (CanBePoisoned(battler, battler, GetBattlerAbility(battler)) && (
     ability == ABILITY_MARVEL_SCALE
      || ability == ABILITY_POISON_HEAL
      || ability == ABILITY_QUICK_FEET
      || ability == ABILITY_MAGIC_GUARD
      || (ability == ABILITY_TOXIC_BOOST && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
      || (ability == ABILITY_GUTS && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
      || HasMoveEffect(battler, EFFECT_FACADE)
      || HasMoveEffect(battler, EFFECT_PSYCHO_SHIFT)))
        return TRUE;    // battler can be poisoned and has move/ability that synergizes with being poisoned
    return FALSE;
}

bool32 AI_CanPoison(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBePoisoned(battlerAtk, battlerDef, GetBattlerAbility(battlerDef))
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))
        return FALSE;
    else if (defAbility != ABILITY_CORROSION && (IS_BATTLER_OF_TYPE(battlerDef, TYPE_POISON) || IS_BATTLER_OF_TYPE(battlerDef, TYPE_STEEL)))
        return FALSE;
    else if (IsValidDoubleBattle(battlerAtk) && AI_DATA->abilities[BATTLE_PARTNER(battlerDef)] == ABILITY_PASTEL_VEIL)
        return FALSE;

    return TRUE;
}

bool32 AI_CanParalyze(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 move, u32 partnerMove)
{
    if (!CanBeParalyzed(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SAFEGUARD
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(BATTLE_PARTNER(battlerAtk), battlerDef, partnerMove))
        return FALSE;
    return TRUE;
}

bool32 AI_CanBeConfused(u32 battlerAtk, u32 battlerDef, u32 move, u32 ability)
{
    if ((gBattleMons[battlerDef].status2 & STATUS2_CONFUSION)
     || (ability == ABILITY_OWN_TEMPO && !DoesBattlerIgnoreAbilityChecks(AI_DATA->abilities[battlerAtk], move))
     || (IsBattlerGrounded(battlerDef) && (gFieldStatuses & STATUS_FIELD_MISTY_TERRAIN))
     || gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_SAFEGUARD
     || DoesSubstituteBlockMove(battlerAtk, battlerDef, move))
        return FALSE;
    return TRUE;
}

bool32 AI_CanConfuse(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (gMovesInfo[move].target == MOVE_TARGET_FOES_AND_ALLY
     && AI_CanBeConfused(battlerAtk, battlerDef, move, defAbility)
     && !AI_CanBeConfused(battlerAtk, BATTLE_PARTNER(battlerDef), move, AI_DATA->abilities[BATTLE_PARTNER(battlerDef)]))
        return FALSE;

    if (!AI_CanBeConfused(battlerAtk, battlerDef, move, defAbility)
     || DoesPartnerHaveSameMoveEffect(battlerAtkPartner, battlerDef, move, partnerMove))
        return FALSE;

    return TRUE;
}

bool32 AI_CanGetFrostbite(u32 battler, u32 ability)
{
    if (ability == ABILITY_MAGMA_ARMOR
      || ability == ABILITY_COMATOSE
      || IS_BATTLER_OF_TYPE(battler, TYPE_ICE)
      || gBattleMons[battler].status1 & STATUS1_ANY
      || IsAbilityStatusProtected(battler)
      || gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_SAFEGUARD)
        return FALSE;
    return TRUE;
}

bool32 ShouldBurnSelf(u32 battler, u32 ability)
{
    if (CanBeBurned(battler, ability) && (
     ability == ABILITY_QUICK_FEET
      || ability == ABILITY_HEATPROOF
      || ability == ABILITY_MAGIC_GUARD
      || (ability == ABILITY_FLARE_BOOST && HasMoveWithCategory(battler, DAMAGE_CATEGORY_SPECIAL))
      || (ability == ABILITY_GUTS && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL))
      || HasMoveEffect(battler, EFFECT_FACADE)
      || HasMoveEffect(battler, EFFECT_PSYCHO_SHIFT)))
        return TRUE;
    return FALSE;
}

bool32 AI_CanBurn(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!CanBeBurned(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(battlerAtkPartner, battlerDef, partnerMove))
    {
        return FALSE;
    }
    return TRUE;
}

bool32 AI_CanGiveFrostbite(u32 battlerAtk, u32 battlerDef, u32 defAbility, u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!AI_CanGetFrostbite(battlerDef, defAbility)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || PartnerMoveEffectIsStatusSameTarget(battlerAtkPartner, battlerDef, partnerMove))
    {
        return FALSE;
    }
    return TRUE;
}

bool32 AI_CanBeInfatuated(u32 battlerAtk, u32 battlerDef, u32 defAbility)
{
    if ((gBattleMons[battlerDef].status2 & STATUS2_INFATUATION)
      || AI_DATA->effectiveness[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex] == AI_EFFECTIVENESS_x0
      || defAbility == ABILITY_OBLIVIOUS
      || AI_IsAbilityOnSide(battlerDef, ABILITY_AROMA_VEIL))
        return FALSE;
    return TRUE;
}

u32 ShouldTryToFlinch(u32 battlerAtk, u32 battlerDef, u32 atkAbility, u32 defAbility, u32 move)
{
    if (((!IsMoldBreakerTypeAbility(battlerAtk, AI_DATA->abilities[battlerAtk]) && (defAbility == ABILITY_SHIELD_DUST || defAbility == ABILITY_INNER_FOCUS))
      || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_COVERT_CLOAK
      || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
      || AI_IsSlower(battlerAtk, battlerDef, move))) // Opponent goes first
    {
        return 0;
    }
    else if ((atkAbility == ABILITY_SERENE_GRACE
      || gBattleMons[battlerDef].status1 & STATUS1_PARALYSIS
      || gBattleMons[battlerDef].status2 & STATUS2_INFATUATION
      || gBattleMons[battlerDef].status2 & STATUS2_CONFUSION)
      || ((AI_IsFaster(battlerAtk, battlerDef, move)) && CanTargetFaintAi(battlerDef, battlerAtk)))
    {
        return 2;   // good idea to flinch
    }

    return 0;   // don't try to flinch
}

bool32 ShouldTrap(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 noOfHitsToFaint = NoOfHitsForTargetToFaintAI(battlerDef, battlerAtk);
    u32 aiIsFaster = AI_IsFaster(battlerAtk, battlerDef, TRUE);

    if (IsBattlerTrapped(battlerDef, TRUE))
        return FALSE;

    if(gSpeciesInfo[battlerDef].types[0] == TYPE_GHOST || gSpeciesInfo[battlerDef].types[1] == TYPE_GHOST)
        return FALSE;

    if ((noOfHitsToFaint >= 2 && aiIsFaster) || (noOfHitsToFaint >= 3 && !aiIsFaster))
        return TRUE;    // chance to trap if decent mu

    return FALSE;
}

bool32 ShouldRollout(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 noOfHitsToFaint = NoOfHitsForTargetToFaintAI(battlerDef, battlerAtk);
    u32 aiIsFaster = AI_IsFaster(battlerAtk, battlerDef, TRUE);

    if(HasMoveEffect(battlerDef, EFFECT_PROTECT)){
        return FALSE;
    }

    if ((noOfHitsToFaint >= 2 && aiIsFaster) || (noOfHitsToFaint >= 3 && !aiIsFaster))
        return TRUE;    // chance to trap if decent mu

    return FALSE;
}

bool32 ShouldFakeOut(u32 battlerAtk, u32 battlerDef, u32 move)
{
    if ((!gDisableStructs[battlerAtk].isFirstTurn && MoveHasAdditionalEffectWithChance(move, MOVE_EFFECT_FLINCH, 100))
    || AI_DATA->abilities[battlerAtk] == ABILITY_GORILLA_TACTICS
    || AI_DATA->holdEffects[battlerAtk] == HOLD_EFFECT_CHOICE_BAND
    || AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_COVERT_CLOAK
    || DoesSubstituteBlockMove(battlerAtk, battlerDef, move)
    || (!IsMoldBreakerTypeAbility(battlerAtk, AI_DATA->abilities[battlerAtk])
    && (gBattleMons[battlerDef].ability == ABILITY_SHIELD_DUST || gBattleMons[battlerDef].ability == ABILITY_INNER_FOCUS)))
        return FALSE;

    return TRUE;
}

static u32 FindMoveUsedXTurnsAgo(u32 battlerId, u32 x)
{
    s32 i, index = BATTLE_HISTORY->moveHistoryIndex[battlerId];
    for (i = 0; i < x; i++)
    {
        if (--index < 0)
            index = AI_MOVE_HISTORY_COUNT - 1;
    }
    return BATTLE_HISTORY->moveHistory[battlerId][index];
}

bool32 IsWakeupTurn(u32 battler)
{
    // Check if rest was used 2 turns ago
    if ((gBattleMons[battler].status1 & STATUS1_SLEEP) == 1 && FindMoveUsedXTurnsAgo(battler, 2) == MOVE_REST)
        return TRUE;
    else // no way to know
        return FALSE;
}

bool32 AnyPartyMemberStatused(u32 battlerId, bool32 checkSoundproof)
{
    struct Pokemon *party;
    u32 i, battlerOnField1, battlerOnField2;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battlerId)))];
        // Check partner's status
        if ((B_HEAL_BELL_SOUNDPROOF == GEN_5 || AI_DATA->abilities[BATTLE_PARTNER(battlerId)] != ABILITY_SOUNDPROOF || !checkSoundproof)
         && GetMonData(&party[battlerOnField2], MON_DATA_STATUS) != STATUS1_NONE)
            return TRUE;
    }
    else // In singles there's only one battlerId by side.
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[battlerId];
    }

    // Check attacker's status
    if ((B_HEAL_BELL_SOUNDPROOF == GEN_5 || B_HEAL_BELL_SOUNDPROOF >= GEN_8
      || AI_DATA->abilities[battlerId] != ABILITY_SOUNDPROOF || !checkSoundproof)
     && GetMonData(&party[battlerOnField1], MON_DATA_STATUS) != STATUS1_NONE)
        return TRUE;

    // Check inactive party mons' status
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i == battlerOnField1 || i == battlerOnField2)
            continue;
        if (B_HEAL_BELL_SOUNDPROOF < GEN_5 && checkSoundproof && GetMonAbility(&party[i]) == ABILITY_SOUNDPROOF)
            continue;
        if (GetMonData(&party[i], MON_DATA_STATUS) != STATUS1_NONE)
            return TRUE;
    }

    return FALSE;
}

u32 GetBattlerSideSpeedAverage(u32 battler)
{
    u32 speed1 = 0;
    u32 speed2 = 0;
    u32 numBattlersAlive = 0;

    if (IsBattlerAlive(battler))
    {
        speed1 = AI_DATA->speedStats[battler];
        numBattlersAlive++;
    }

    if (IsDoubleBattle() && IsBattlerAlive(BATTLE_PARTNER(battler)))
    {
        speed2 = AI_DATA->speedStats[BATTLE_PARTNER(battler)];
        numBattlersAlive++;
    }

    return (speed1 + speed2) / numBattlersAlive;
}

bool32 ShouldUseRecoilMove(u32 battlerAtk, u32 battlerDef, u32 recoilDmg, u32 moveIndex)
{
    if (recoilDmg >= gBattleMons[battlerAtk].hp //Recoil kills attacker
      && CountUsablePartyMons(battlerDef) != 0) //Foe has more than 1 target left
    {
        if (recoilDmg >= gBattleMons[battlerDef].hp && !CanAIFaintTarget(battlerAtk, battlerDef, 0))
            return TRUE; //If it's the only KO move then just use it
        else
            return FALSE; //Not as good to use move if you'll faint and not win
    }

    return TRUE;
}

bool32 ShouldAbsorb(u32 battlerAtk, u32 battlerDef, u32 move, s32 damage)
{
    if (move == 0xFFFF || AI_IsFaster(battlerAtk, battlerDef, move))
    {
        // using item or user goes first
        u32 healPercent = (gMovesInfo[move].argument == 0) ? 50 : gMovesInfo[move].argument;
        s32 healDmg = (healPercent * damage) / 100;

        if (gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK)
            healDmg = 0;

        if (CanTargetFaintAi(battlerDef, battlerAtk)
          && !CanTargetFaintAiWithMod(battlerDef, battlerAtk, healDmg, 0))
            return TRUE;    // target can faint attacker unless they heal
        else if (!CanTargetFaintAi(battlerDef, battlerAtk) && AI_DATA->hpPercents[battlerAtk] < 60 && (Random() % 3))
            return TRUE;    // target can't faint attacker at all, attacker health is about half, 2/3rds rate of encouraging healing
    }
    else
    {
        // opponent goes first
        if (!CanTargetFaintAi(battlerDef, battlerAtk))
            return TRUE;
    }

    return FALSE;
}

//change this function, have it not recover if player does over half with any move
bool32 ShouldRecover(u32 battlerAtk, u32 battlerDef, u32 move, u32 healPercent)
{
    u32 i;
    u32 unusable = AI_DATA->moveLimitations[battlerDef];
    u16 *moves = GetMovesArray(battlerDef);
    u8 effectiveness;

    //s32 damage = AI_DATA->simulatedDmg[battlerAtk][battlerDef][AI_THINKING_STRUCT->movesetIndex].expected;
    s32 healAmount = (healPercent * gBattleMons[battlerAtk].maxHP) / 100;

    if(move == MOVE_STRENGTH_SAP){
        healAmount = gBattleMons[battlerDef].attack;
        healAmount *= gStatStageRatios[gBattleMons[battlerDef].statStages[STAT_ATK]][0];
        healAmount /= gStatStageRatios[gBattleMons[battlerDef].statStages[STAT_ATK]][1];
    }
    if (AI_DATA->hpPercents[battlerAtk] < 75){
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            if (moves[i] != MOVE_NONE && moves[i] != MOVE_UNAVAILABLE && !(unusable & gBitTable[i])
                && AI_CalcDamage(moves[i], battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected >= healAmount)
            {
                return FALSE;
            }
        }
    if ((gStatuses3[battlerAtk] & STATUS3_HEAL_BLOCK))
        return FALSE;
    else
        return TRUE; 
    } // target can't faint attacker at all, attacker health is about 2/3rds
    return FALSE;
}

bool32 ShouldSetScreen(u32 battlerAtk, u32 battlerDef, u32 moveEffect)
{
    u32 atkSide = GetBattlerSide(battlerAtk);

    switch (moveEffect)
    {
    case EFFECT_AURORA_VEIL:
        // Use only in Hail and only if AI doesn't already have Reflect, Light Screen or Aurora Veil itself active.
        if ((AI_GetWeather(AI_DATA) & (B_WEATHER_HAIL | B_WEATHER_SNOW))
            && !(gSideStatuses[atkSide] & (SIDE_STATUS_REFLECT | SIDE_STATUS_LIGHTSCREEN | SIDE_STATUS_AURORA_VEIL)))
            return TRUE;
        break;
    case EFFECT_REFLECT:
        // Use only if the player has a physical move and AI doesn't already have Reflect itself active.
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)
            && !(gSideStatuses[atkSide] & SIDE_STATUS_REFLECT))
            return TRUE;
        break;
    case EFFECT_LIGHT_SCREEN:
        // Use only if the player has a special move and AI doesn't already have Light Screen itself active.
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL)
            && !(gSideStatuses[atkSide] & SIDE_STATUS_LIGHTSCREEN))
            return TRUE;
        break;
    }

    return FALSE;
}

// Partner Logic
bool32 IsValidDoubleBattle(u32 battlerAtk)
{
    if (IsDoubleBattle()
      && ((IsBattlerAlive(BATTLE_OPPOSITE(battlerAtk)) && IsBattlerAlive(BATTLE_PARTNER(BATTLE_OPPOSITE(battlerAtk)))) || IsBattlerAlive(BATTLE_PARTNER(battlerAtk))))
        return TRUE;
    return FALSE;
}

u32 GetAllyChosenMove(u32 battlerId)
{
    u32 partnerBattler = BATTLE_PARTNER(battlerId);

    if (!IsBattlerAlive(partnerBattler) || !IsAiBattlerAware(partnerBattler))
        return MOVE_NONE;
    else if (partnerBattler > battlerId) // Battler with the lower id chooses the move first.
        return gLastMoves[partnerBattler];
    else
        return gBattleMons[partnerBattler].moves[gBattleStruct->chosenMovePositions[partnerBattler]];
}

//PARTNER_MOVE_EFFECT_IS_SAME
bool32 DoesPartnerHaveSameMoveEffect(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (gMovesInfo[move].effect == gMovesInfo[partnerMove].effect
      && partnerMove != MOVE_NONE
      && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef)
    {
        return TRUE;
    }
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_SAME_NO_TARGET
bool32 PartnerHasSameMoveEffectWithoutTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (gMovesInfo[move].effect == gMovesInfo[partnerMove].effect
      && partnerMove != MOVE_NONE)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_STATUS_SAME_TARGET
bool32 PartnerMoveEffectIsStatusSameTarget(u32 battlerAtkPartner, u32 battlerDef, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE
     && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef
     && (gMovesInfo[partnerMove].effect == EFFECT_SLEEP
       || gMovesInfo[partnerMove].effect == EFFECT_POISON
       || gMovesInfo[partnerMove].effect == EFFECT_TOXIC
       || gMovesInfo[partnerMove].effect == EFFECT_PARALYZE
       || gMovesInfo[partnerMove].effect == EFFECT_WILL_O_WISP
       || gMovesInfo[partnerMove].effect == EFFECT_YAWN))
        return TRUE;
    return FALSE;
}

bool32 IsMoveEffectWeather(u32 move)
{
    if (move != MOVE_NONE
     && (gMovesInfo[move].effect == EFFECT_SUNNY_DAY
      || gMovesInfo[move].effect == EFFECT_RAIN_DANCE
      || gMovesInfo[move].effect == EFFECT_SANDSTORM
      || gMovesInfo[move].effect == EFFECT_HAIL
      || gMovesInfo[move].effect == EFFECT_SNOWSCAPE))
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_EFFECT_IS_TERRAIN
bool32 PartnerMoveEffectIsTerrain(u32 battlerAtkPartner, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE
     && (gMovesInfo[partnerMove].effect == EFFECT_GRASSY_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_MISTY_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_ELECTRIC_TERRAIN
      || gMovesInfo[partnerMove].effect == EFFECT_PSYCHIC_TERRAIN))
        return TRUE;

    return FALSE;
}

//PARTNER_MOVE_IS_TAILWIND_TRICKROOM
bool32 PartnerMoveIs(u32 battlerAtkPartner, u32 partnerMove, u32 moveCheck)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE && partnerMove == moveCheck)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_IS_SAME
bool32 PartnerMoveIsSameAsAttacker(u32 battlerAtkPartner, u32 battlerDef, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;

    if (partnerMove != MOVE_NONE && move == partnerMove && gBattleStruct->moveTarget[battlerAtkPartner] == battlerDef)
        return TRUE;
    return FALSE;
}

//PARTNER_MOVE_IS_SAME_NO_TARGET
bool32 PartnerMoveIsSameNoTarget(u32 battlerAtkPartner, u32 move, u32 partnerMove)
{
    if (!IsDoubleBattle())
        return FALSE;
    if (partnerMove != MOVE_NONE && move == partnerMove)
        return TRUE;
    return FALSE;
}

bool32 ShouldUseWishAromatherapy(u32 battlerAtk, u32 battlerDef, u32 move)
{
    u32 i;
    s32 firstId, lastId;
    struct Pokemon* party;
    bool32 hasStatus = AnyPartyMemberStatused(battlerAtk, gMovesInfo[move].soundMove);
    bool32 needHealing = FALSE;

    GetAIPartyIndexes(battlerAtk, &firstId, &lastId);

    if (GetBattlerSide(battlerAtk) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (CountUsablePartyMons(battlerAtk) == 0
      && (CanTargetFaintAi(battlerDef, battlerAtk) || BattlerWillFaintFromSecondaryDamage(battlerAtk, AI_DATA->abilities[battlerAtk])))
        return FALSE; // Don't heal if last mon and will faint

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 currHp = GetMonData(&party[i], MON_DATA_HP);
        u32 maxHp = GetMonData(&party[i], MON_DATA_MAX_HP);

        if (!GetMonData(&party[i], MON_DATA_IS_EGG, NULL) && currHp > 0)
        {
            if ((currHp * 100) / maxHp < 65 // Less than 65% health remaining
              && i >= firstId && i < lastId) // Can only switch to mon on your team
            {
                needHealing = TRUE;
            }
        }
    }

    if (!IsDoubleBattle())
    {
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_WISH:
            if (needHealing)
                return TRUE;
            break;
        case EFFECT_HEAL_BELL:
            if (hasStatus)
                return TRUE;
        }
    }
    else
    {
        switch (gMovesInfo[move].effect)
        {
        case EFFECT_WISH:
            return ShouldRecover(battlerAtk, battlerDef, move, 50); // Switch recovery isn't good idea in doubles
        case EFFECT_HEAL_BELL:
            if (hasStatus)
                return TRUE;
        }
    }

    return FALSE;
}

#define SIZE_G_BATTLE_MONS (sizeof(struct BattlePokemon) * MAX_BATTLERS_COUNT)

struct BattlePokemon *AllocSaveBattleMons(void)
{
    struct BattlePokemon *savedBattleMons = Alloc(SIZE_G_BATTLE_MONS);
    memcpy(savedBattleMons, gBattleMons, SIZE_G_BATTLE_MONS);
    return savedBattleMons;
}

void FreeRestoreBattleMons(struct BattlePokemon *savedBattleMons)
{
    memcpy(gBattleMons, savedBattleMons, SIZE_G_BATTLE_MONS);
    Free(savedBattleMons);
}

// party logic
s32 AI_CalcPartyMonDamage(u32 move, u32 battlerAtk, u32 battlerDef, struct BattlePokemon switchinCandidate, bool32 isPartyMonAttacker, enum DamageRollType rollType)
{
    struct SimulatedDamage dmg;
    u8 effectiveness;
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();
    u32 battleStatuses3 = gStatuses3[battlerDef];
    u32 battleStatuses4 = gStatuses4[battlerDef];

    if (isPartyMonAttacker)
    {
        gBattleMons[battlerAtk] = switchinCandidate;
        AI_THINKING_STRUCT->saved[battlerDef].saved = TRUE;
        SetBattlerData(battlerDef); // set known opposing battler data
        AI_THINKING_STRUCT->saved[battlerDef].saved = FALSE;
    }
    else
    {
        gBattleMons[battlerDef] = switchinCandidate;
        //bandaid fix, improve later
        gStatuses3[battlerDef] = 0;
        gStatuses4[battlerDef] = 0;
        AI_THINKING_STRUCT->saved[battlerAtk].saved = TRUE;
        SetBattlerData(battlerAtk); // set known opposing battler data
        AI_THINKING_STRUCT->saved[battlerAtk].saved = FALSE;
    }

    dmg = AI_CalcDamage(move, battlerAtk, battlerDef, &effectiveness, FALSE, AI_GetWeather(AI_DATA), rollType);
    // restores original gBattleMon struct
    gStatuses3[battlerDef] = battleStatuses3;
    gStatuses4[battlerDef] = battleStatuses4;
    FreeRestoreBattleMons(savedBattleMons);
    return dmg.expected;
}

s32 CountUsablePartyMons(u32 battlerId)
{
    s32 battlerOnField1, battlerOnField2, i, ret;
    struct Pokemon *party;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battlerId)))];
    }
    else // In singles there's only one battlerId by side.
    {
        battlerOnField1 = gBattlerPartyIndexes[battlerId];
        battlerOnField2 = gBattlerPartyIndexes[battlerId];
    }

    ret = 0;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i != battlerOnField1 && i != battlerOnField2
         && GetMonData(&party[i], MON_DATA_HP) != 0
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_NONE
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_EGG)
        {
            ret++;
        }
    }

    return ret;
}

bool32 IsPartyFullyHealedExceptBattler(u32 battlerId)
{
    struct Pokemon *party;
    u32 i;

    if (GetBattlerSide(battlerId) == B_SIDE_PLAYER)
        party = gPlayerParty;
    else
        party = gEnemyParty;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (i != gBattlerPartyIndexes[battlerId]
         && GetMonData(&party[i], MON_DATA_HP) != 0
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_NONE
         && GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG) != SPECIES_EGG
         && GetMonData(&party[i], MON_DATA_HP) < GetMonData(&party[i], MON_DATA_MAX_HP))
            return FALSE;
    }
    return TRUE;
}

bool32 PartyHasMoveCategory(u32 battlerId, u32 category)
{
    struct Pokemon *party = GetBattlerParty(battlerId);
    u32 i, j;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&party[i], MON_DATA_HP, NULL) == 0)
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            u32 move = GetMonData(&party[i], MON_DATA_MOVE1 + j, NULL);
            u32 pp = GetMonData(&party[i], MON_DATA_PP1 + j, NULL);

            if (pp > 0 && move != MOVE_NONE)
            {
                //TODO - handle photon geyser, light that burns the sky
                if (gMovesInfo[move].category == category)
                    return TRUE;
            }
        }
    }

    return FALSE;
}

bool32 SideHasMoveCategory(u32 battlerId, u32 category)
{
    if (IsDoubleBattle())
    {
        if (HasMoveWithCategory(battlerId, category) || HasMoveWithCategory(BATTLE_PARTNER(battlerId), category))
            return TRUE;
    }
    else
    {
        if (HasMoveWithCategory(battlerId, category))
            return TRUE;
    }
    return FALSE;
}

bool32 IsAbilityOfRating(u32 ability, s8 rating)
{
    if (gAbilitiesInfo[ability].aiRating >= rating)
        return TRUE;
    return FALSE;
}

static const u16 sRecycleEncouragedItems[] =
{
    ITEM_CHESTO_BERRY,
    ITEM_LUM_BERRY,
    ITEM_STARF_BERRY,
    ITEM_SITRUS_BERRY,
    ITEM_MICLE_BERRY,
    ITEM_CUSTAP_BERRY,
    ITEM_MENTAL_HERB,
    ITEM_FOCUS_SASH,
    // TODO expand this
};

// Its assumed that the berry is strategically given, so no need to check benefits of the berry
bool32 IsStatBoostingBerry(u32 item)
{
    switch (item)
    {
    case ITEM_LIECHI_BERRY:
    case ITEM_GANLON_BERRY:
    case ITEM_SALAC_BERRY:
    case ITEM_PETAYA_BERRY:
    case ITEM_APICOT_BERRY:
    //case ITEM_LANSAT_BERRY:
    case ITEM_STARF_BERRY:
    case ITEM_MICLE_BERRY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 ShouldRestoreHpBerry(u32 battlerAtk, u32 item)
{
    switch (item)
    {
    case ITEM_ORAN_BERRY:
        if (gBattleMons[battlerAtk].maxHP <= 50)
            return TRUE;    // Only worth it in the early game
        return FALSE;
    case ITEM_SITRUS_BERRY:
    case ITEM_FIGY_BERRY:
    case ITEM_WIKI_BERRY:
    case ITEM_MAGO_BERRY:
    case ITEM_AGUAV_BERRY:
    case ITEM_IAPAPA_BERRY:
        return TRUE;
    default:
        return FALSE;
    }
}

bool32 IsRecycleEncouragedItem(u32 item)
{
    u32 i;
    for (i = 0; i < ARRAY_COUNT(sRecycleEncouragedItems); i++)
    {
        if (item == sRecycleEncouragedItems[i])
            return TRUE;
    }
    return FALSE;
}

static u32 GetHPWithBerry(u32 battler){

    u32 startingHP = gBattleMons[battler].hp;
    u32 maxHP = gBattleMons[battler].maxHP;
    u32 finalHP;

    u32 heldItemEffect = ItemId_GetHoldEffect(gBattleMons[battler].item);
    u8 holdEffectParam = ItemId_GetHoldEffectParam(gBattleMons[battler].item);

    switch (heldItemEffect)
    {
        case HOLD_EFFECT_RESTORE_HP:
            finalHP = (startingHP + holdEffectParam);
            break;
        case HOLD_EFFECT_RESTORE_PCT_HP:
            finalHP = startingHP + (maxHP / holdEffectParam);
            break;
        case HOLD_EFFECT_CONFUSE_SPICY:
        case HOLD_EFFECT_CONFUSE_DRY:
        case HOLD_EFFECT_CONFUSE_SWEET:
        case HOLD_EFFECT_CONFUSE_BITTER:
        case HOLD_EFFECT_CONFUSE_SOUR:
            finalHP = startingHP + (maxHP / holdEffectParam);
            break;
        default:
            return finalHP = startingHP;
            break;
    }

    return finalHP;
}

bool32 HasPriorityMove(u32 battler){
    u8 i;
    u16 *moves = GetMovesArray(battler);

    for(i = 0; i < MAX_MON_MOVES; i++){
        if(GetMovePriority(battler, moves[i]) > 0)
            return TRUE;
    }

    return FALSE;
}

bool32 ShouldBellyDrum(u32 battlerAtk, u32 battlerDef){

    u32 battlerHP;
    u8 effectiveness;

    u32 speedBattlerAI, speedBattler;
    u32 holdEffectAI = AI_DATA->holdEffects[battlerAtk];
    u32 holdEffectPlayer = AI_DATA->holdEffects[battlerDef];
    u32 abilityAI = AI_DATA->abilities[battlerAtk];
    u32 abilityPlayer = AI_DATA->abilities[battlerDef];

    u32 bestMove = GetBestDmgMoveFromBattler(battlerDef, battlerAtk);
    u32 bestMoveDmg = AI_CalcDamage(bestMove, battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected;

    speedBattlerAI = AI_DATA->speedStats[battlerAtk];
    speedBattler   = AI_DATA->speedStats[battlerDef];

    if(abilityPlayer == ABILITY_UNAWARE){
        return FALSE;
    }

    if(abilityPlayer == ABILITY_UNNERVE){
        battlerHP = gBattleMons[battlerAtk].hp;
    } else {
        battlerHP = GetHPWithBerry(battlerAtk);
    }

    if((battlerHP - bestMoveDmg) <= (gBattleMons[battlerAtk].maxHP/2) || bestMoveDmg >= battlerHP){
        return FALSE;
    }

    if(speedBattlerAI >= speedBattler){
        return TRUE;
    }

    if(holdEffectAI == HOLD_EFFECT_CUSTAP_BERRY){
        return TRUE;
    }

    if(holdEffectAI == HOLD_EFFECT_SPEED_UP && (speedBattlerAI*3)/2 >= speedBattler){
        return TRUE;
    }

    if(HasPriorityMove(battlerAtk) && (abilityPlayer != ABILITY_DAZZLING) && (abilityPlayer != ABILITY_QUEENLY_MAJESTY)){
        return TRUE;
    }

    if((battlerHP - bestMoveDmg*2) > (gBattleMons[battlerAtk].maxHP/2) && (bestMoveDmg*2 < battlerHP)){
        return FALSE;
    }


    return FALSE;
}

static u32 GetSpeedStatAfterBoost(u32 battlerAtk, u32 currentSpeed, u32 stages, bool8 increase){

    u32 currentStage = gBattleMons[battlerAtk].statStages[STAT_SPEED];
    u32 finalStage;
    u32 finalStat = currentSpeed;

    finalStat *= gStatStageRatios[currentStage][1];
    finalStat /= gStatStageRatios[currentStage][0];

    if(increase){
        finalStage = ((gBattleMons[battlerAtk].statStages[STAT_SPEED] + stages) < MAX_STAT_STAGE) ? (gBattleMons[battlerAtk].statStages[STAT_SPEED] + stages) : MAX_STAT_STAGE;
    } else {
        finalStage = (gBattleMons[battlerAtk].statStages[STAT_SPEED] - stages);
    }

    finalStat *= gStatStageRatios[finalStage][0];
    finalStat /= gStatStageRatios[finalStage][1];

    return finalStat;
}

static u32 GetDamageRollAfterDefBoost(u32 battlerAtk, u32 damageRoll, u32 statId, u32 stages, bool8 increase){
    u32 currentStage = gBattleMons[battlerAtk].statStages[statId];
    u32 finalStage;
    u32 finalRoll = damageRoll;

    finalRoll *= gStatStageRatios[currentStage][0];
    finalRoll /= gStatStageRatios[currentStage][1];

    if(increase){
        finalStage = ((gBattleMons[battlerAtk].statStages[statId] + stages) < MAX_STAT_STAGE) ? (gBattleMons[battlerAtk].statStages[statId] + stages) : MAX_STAT_STAGE;
    } else {
        finalStage = (gBattleMons[battlerAtk].statStages[statId] - stages);
    }

    finalRoll *= gStatStageRatios[finalStage][1];
    finalRoll /= gStatStageRatios[finalStage][0];

    return finalRoll;
}

static u32 IncreaseStatUpScoreInternal(u32 battlerAtk, u32 battlerDef, u32 statId, bool32 considerContrary)
{
    u32 tempScore = NO_INCREASE;
    u8 i;
    u16 *moves = GetMovesArray(battlerDef);
    bool32 aiIsFaster;
    bool32 shouldSetUp = FALSE;
    u8 effectiveness;
    //u32 noOfHitsToFaint = NoOfHitsForTargetToFaintAI(battlerDef, battlerAtk);

    //u32 bestMove = GetBestDmgMoveFromBattler(battlerDef, battlerAtk);
    u32 bestPhysicalMove = MAX_MON_MOVES;
    u32 bestSpecialMove = MAX_MON_MOVES;
    u32 bestOverallMove = MAX_MON_MOVES;

    u32 bestPhysPrioMove = MAX_MON_MOVES;
    u32 bestSpecialPrioMove = MAX_MON_MOVES;

    u32 bestPhysMultiHitMove = MAX_MON_MOVES;
    u32 bestSpecialMultiHitMove = MAX_MON_MOVES;

    u32 bestPhysicalDmg = 0;
    u32 bestSpecialDmg = 0;
    u32 bestOverallDmg = 0;
    u32 ignoreBoostsDmg = 0;

    u32 bestPhysPrioDmg = 0;
    u32 bestSpecialPrioDmg = 0;
    u32 bestPrioDmg = 0;

    u32 bestPhysMultiHitDmg = 0;
    u32 bestSpecialMultiHitDmg = 0;
    u32 bestMultiHitDmg = 0;

    u16 speedBattlerAI, speedBattler;
    u32 holdEffectAI = AI_DATA->holdEffects[battlerAtk];
    u32 holdEffectPlayer = AI_DATA->holdEffects[battlerDef];
    u32 abilityAI = AI_DATA->abilities[battlerAtk];
    u32 abilityPlayer = AI_DATA->abilities[battlerDef];

    bool8 intactFocusSashOrSturdyAI = FALSE;
    bool8 intactFocusSashOrSturdyPlayer = FALSE;

    u32 bestAIDmgOnPlayer = GetBestDmgFromBattler(battlerAtk, battlerDef);

    //speedBattlerAI = GetBattlerTotalSpeedStatArgs(battlerAtk, abilityAI, holdEffectAI);
    //speedBattler   = GetBattlerTotalSpeedStatArgs(battlerDef, abilityPlayer, holdEffectPlayer);

    speedBattlerAI = AI_DATA->speedStats[battlerAtk];
    speedBattler = AI_DATA->speedStats[battlerDef];

    u16 AISpeedAfterBoosts;

    for(i = 0; i < MAX_MON_MOVES; i++){
        if(gMovesInfo[moves[i]].category == DAMAGE_CATEGORY_STATUS)
            continue;

        if(gMovesInfo[moves[i]].category == DAMAGE_CATEGORY_PHYSICAL){
            if(AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > bestPhysicalDmg){
                bestPhysicalDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
                bestPhysicalMove = i;
            }
            if((AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > ignoreBoostsDmg) && gMovesInfo[moves[i]].ignoresTargetDefenseEvasionStages){
                ignoreBoostsDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
            }
            if(AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > bestPhysPrioDmg && GetMovePriority(battlerDef, moves[i]) > 0){
                bestPhysPrioDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
                bestPhysPrioMove = i;
            }
            if(AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > bestPhysMultiHitDmg && (gMovesInfo[moves[i]].effect == EFFECT_MULTI_HIT || gMovesInfo[moves[i]].strikeCount > 1)){
                bestPhysMultiHitDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
                bestPhysMultiHitMove = i;
            }
        } else {
            if(AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > bestSpecialDmg){
                bestSpecialDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
                bestSpecialMove = i;
            } 
            if(AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > bestSpecialPrioDmg && GetMovePriority(battlerDef, moves[i]) > 0){
                bestSpecialPrioDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
                bestSpecialPrioMove = i;
            }
            if(AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > bestSpecialMultiHitDmg && (gMovesInfo[moves[i]].effect == EFFECT_MULTI_HIT || gMovesInfo[moves[i]].strikeCount > 1)){
                bestSpecialMultiHitDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
                bestSpecialMultiHitMove = i;
            }
        }
    }

    if(bestPhysicalMove != MAX_MON_MOVES){
        bestPhysicalDmg = AI_CalcDamage(moves[bestPhysicalMove], battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected;
    }
    if(bestSpecialMove != MAX_MON_MOVES){
        bestSpecialDmg = AI_CalcDamage(moves[bestSpecialMove], battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected;
    }

    if(bestPhysPrioMove != MAX_MON_MOVES){
        bestPhysPrioDmg = AI_CalcDamage(moves[bestPhysPrioMove], battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected;
    }
    if(bestSpecialPrioMove != MAX_MON_MOVES){
        bestSpecialPrioDmg = AI_CalcDamage(moves[bestSpecialPrioMove], battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected;
    }

    if(bestPhysMultiHitMove != MAX_MON_MOVES){
        bestPhysMultiHitDmg = AI_CalcDamage(moves[bestPhysMultiHitMove], battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected;
    }
    if(bestSpecialMultiHitMove != MAX_MON_MOVES){
        bestSpecialMultiHitDmg = AI_CalcDamage(moves[bestSpecialMultiHitMove], battlerDef, battlerAtk, &effectiveness, TRUE, AI_GetWeather(AI_DATA), DMG_ROLL_DEFAULT).expected;
    }

    bestOverallDmg = (bestPhysicalDmg > bestSpecialDmg) ? bestPhysicalDmg : bestSpecialDmg;
    bestPrioDmg = (bestPhysPrioDmg > bestSpecialPrioDmg) ? bestPhysPrioDmg : bestSpecialPrioDmg;
    bestMultiHitDmg = (bestPhysMultiHitDmg > bestSpecialMultiHitDmg) ? bestPhysMultiHitDmg : bestSpecialMultiHitDmg;

    u32 bestPhysicalDmgAfterBoosts = bestPhysicalDmg;
    u32 bestSpecialDmgAfterBoosts = bestSpecialDmg;
    u32 bestOverallDmgAfterBoosts = bestOverallDmg;

    u32 bestPhysPrioDmgAfterBoosts = bestPhysPrioDmg;
    u32 bestSpecialPrioDmgAfterBoosts = bestSpecialPrioDmg;
    u32 bestPrioDmgAfterBoosts = bestPrioDmg;

    u32 bestPhysMultiHitDmgAfterBoosts = bestPhysMultiHitDmg;
    u32 bestSpecialMultiHitDmgAfterBoosts = bestSpecialMultiHitDmg;
    u32 bestMultiHitDmgAfterBoosts = bestMultiHitDmg;

    //u32 hitsToKoShellSmash = GetNoOfHitsToKO(AI_DATA->simulatedDmg[battlerDef][battlerAtk][bestMove].expected, (gBattleMons[battlerAtk].hp/1.5));

    if(statId == STAT_CHANGE_CURSE){
        AISpeedAfterBoosts = GetSpeedStatAfterBoost(battlerAtk, speedBattlerAI, 1, FALSE);
    } else if (statId == STAT_CHANGE_SPEED || statId == STAT_CHANGE_SPEED || statId ==  STAT_CHANGE_ATK_SPEED || statId == STAT_CHANGE_SPATK_SPDEF_SPEED
        || statId == STAT_CHANGE_ATK_DEF_SPEED){
        AISpeedAfterBoosts = GetSpeedStatAfterBoost(battlerAtk, speedBattlerAI, 1, TRUE);
    } else if (statId == STAT_CHANGE_SPEED_2 || statId == STAT_CHANGE_ATK_SPEED_2 || statId == STAT_CHANGE_SHELL_SMASH){
        AISpeedAfterBoosts = GetSpeedStatAfterBoost(battlerAtk, speedBattlerAI, 2, TRUE);
    } else {
        AISpeedAfterBoosts = speedBattlerAI;
    }

    if(statId == STAT_CHANGE_DEF || statId == STAT_CHANGE_ATK_DEF || statId == STAT_CHANGE_DEF_SPDEF || statId == STAT_CHANGE_ATK_DEF_SPEED || statId == STAT_CHANGE_CURSE){
        bestPhysicalDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysicalDmg, STAT_DEF, 1, TRUE);
        bestPhysPrioDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysPrioDmg, STAT_DEF, 1, TRUE);
        bestPhysMultiHitDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysMultiHitDmg, STAT_DEF, 1, TRUE);
    }

    if(statId == STAT_CHANGE_DEF_2){
        bestPhysicalDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysicalDmg, STAT_DEF, 2, TRUE);
        bestPhysMultiHitDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysMultiHitDmg, STAT_DEF, 2, TRUE);
    }

    if(statId == STAT_CHANGE_SPDEF || statId == STAT_CHANGE_SPATK_SPDEF || statId == STAT_CHANGE_DEF_SPDEF || statId == STAT_CHANGE_SPATK_SPDEF_SPEED){
        bestSpecialDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialDmg, STAT_SPDEF, 1, TRUE);
        bestSpecialPrioDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialPrioDmg, STAT_SPDEF, 1, TRUE);
        bestSpecialMultiHitDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialMultiHitDmg, STAT_SPDEF, 1, TRUE);
    }

    if(statId == STAT_CHANGE_DEF_2){
        bestSpecialDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialDmg, STAT_SPDEF, 2, TRUE);
        bestSpecialPrioDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialPrioDmg, STAT_SPDEF, 2, TRUE);
        bestSpecialMultiHitDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialMultiHitDmg, STAT_SPDEF, 2, TRUE);
    }

    if(statId == STAT_CHANGE_SHELL_SMASH && holdEffectAI != HOLD_EFFECT_RESTORE_STATS){
        bestPhysicalDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysicalDmg, STAT_DEF, 1, FALSE);
        bestSpecialDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialDmg, STAT_SPDEF, 1, FALSE);

        bestPhysPrioDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysPrioDmg, STAT_DEF, 1, FALSE);
        bestSpecialPrioDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialPrioDmg, STAT_SPDEF, 1, FALSE);

        bestPhysMultiHitDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestPhysMultiHitDmg, STAT_DEF, 1, FALSE);
        bestSpecialMultiHitDmgAfterBoosts = GetDamageRollAfterDefBoost(battlerAtk, bestSpecialMultiHitDmg, STAT_SPDEF, 1, FALSE);
    }

    bestOverallDmgAfterBoosts = (bestPhysicalDmgAfterBoosts > bestSpecialDmgAfterBoosts) ? bestPhysicalDmgAfterBoosts : bestSpecialDmgAfterBoosts;
    bestPrioDmgAfterBoosts = (bestPhysPrioDmgAfterBoosts > bestSpecialPrioDmgAfterBoosts) ? bestPhysPrioDmgAfterBoosts : bestSpecialPrioDmgAfterBoosts;
    bestMultiHitDmgAfterBoosts = (bestPhysMultiHitDmgAfterBoosts > bestSpecialMultiHitDmgAfterBoosts) ? bestPhysMultiHitDmgAfterBoosts : bestSpecialMultiHitDmgAfterBoosts;

    if(ignoreBoostsDmg > bestOverallDmgAfterBoosts){
        bestOverallDmgAfterBoosts = ignoreBoostsDmg;
    }

    if(AISpeedAfterBoosts >= speedBattler){
        aiIsFaster = TRUE;
    } else {
        aiIsFaster = FALSE;
    }

    if(AtMaxHp(battlerAtk) && abilityPlayer != ABILITY_PARENTAL_BOND && holdEffectAI == HOLD_EFFECT_FOCUS_SASH){
        intactFocusSashOrSturdyAI = TRUE;
    } else if (AtMaxHp(battlerAtk) && abilityPlayer != ABILITY_PARENTAL_BOND && !IsMoldBreakerTypeAbility(battlerDef, gBattleMons[battlerDef].ability) && abilityAI == ABILITY_STURDY){
        intactFocusSashOrSturdyAI = TRUE;
    }

    if(AtMaxHp(battlerDef) && abilityAI != ABILITY_PARENTAL_BOND && holdEffectPlayer == HOLD_EFFECT_FOCUS_SASH){
        intactFocusSashOrSturdyPlayer = TRUE;
    } else if (AtMaxHp(battlerAtk) && abilityAI != ABILITY_PARENTAL_BOND && !IsMoldBreakerTypeAbility(battlerAtk, gBattleMons[battlerAtk].ability) && abilityPlayer == ABILITY_STURDY){
        intactFocusSashOrSturdyPlayer = TRUE;
    }

    if(speedBattler > speedBattlerAI && CanTargetFaintAi(battlerDef, battlerAtk)){
        shouldSetUp = FALSE;
    } else if(aiIsFaster && (bestMultiHitDmgAfterBoosts < gBattleMons[battlerAtk].hp) && intactFocusSashOrSturdyAI){
        shouldSetUp = TRUE;
    } else if(aiIsFaster && ((bestOverallDmgAfterBoosts + bestPrioDmgAfterBoosts) < gBattleMons[battlerAtk].hp)){
        shouldSetUp = TRUE;
    } else if((bestOverallDmg + bestOverallDmgAfterBoosts) < gBattleMons[battlerAtk].hp){
        shouldSetUp = TRUE;
    }

    if(intactFocusSashOrSturdyPlayer && bestAIDmgOnPlayer*2 >= gBattleMons[battlerDef].hp){
        shouldSetUp = FALSE;
    }

    if (considerContrary && AI_DATA->abilities[battlerAtk] == ABILITY_CONTRARY)
        return NO_INCREASE;

    if(AI_DATA->abilities[battlerDef] == ABILITY_UNAWARE && (AISpeedAfterBoosts < speedBattler || speedBattler > speedBattlerAI))
        return NO_INCREASE;

    // Don't increase stat if AI is at +4
    //if (gBattleMons[battlerAtk].statStages[statId] >= MAX_STAT_STAGE - 2)
    //    return NO_INCREASE;

    // Don't set up if AI is dead to residual damage from weather
    if (GetBattlerSecondaryDamage(battlerAtk) >= gBattleMons[battlerAtk].hp)
        return NO_INCREASE;

    // Don't increase stats if opposing battler has Opportunist
    if (AI_DATA->abilities[battlerDef] == ABILITY_OPPORTUNIST)
        return NO_INCREASE;

    switch (statId)
    {
    case STAT_CHANGE_ATK:
    case STAT_CHANGE_ATK_2:
    case STAT_CHANGE_ATK_DEF:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_ATK] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL) && shouldSetUp){
            tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_ATK_SPATK:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_ATK] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (shouldSetUp){
            tempScore += DECENT_EFFECT;
        }
        break; 
    case STAT_CHANGE_CURSE:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_ATK] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL) && shouldSetUp){
            tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_DEF:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_DEF] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) && shouldSetUp)
        {
            tempScore += DECENT_EFFECT;
        }
        break;
    //add caveat where AI needs to be faster after speed control
    case STAT_CHANGE_SPEED:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPEED] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (speedBattler > speedBattlerAI && aiIsFaster){
            tempScore += DECENT_EFFECT;
            if(Random() % 100 < 50)
                tempScore += WEAK_EFFECT;
        }
        break;
    case STAT_CHANGE_ATK_DEF_SPEED:
    case STAT_CHANGE_ATK_SPEED:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_ATK] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (shouldSetUp){
            tempScore += DECENT_EFFECT;
            if(Random() % 100 < 50)
                tempScore += WEAK_EFFECT;
        }
        break;
    case STAT_CHANGE_SPATK_SPDEF_SPEED:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPATK] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (shouldSetUp){
            tempScore += DECENT_EFFECT;
            if(Random() % 100 < 50)
                tempScore += WEAK_EFFECT;
        }
        break;
    case STAT_CHANGE_SHELL_SMASH:
        if ((gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPATK] >= MAX_STAT_STAGE - 4) || (gBattleMons[battlerAtk].statStages[STAT_CHANGE_ATK] >= MAX_STAT_STAGE - 4) || (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPEED] >= MAX_STAT_STAGE - 4))
            return NO_INCREASE;
        if (shouldSetUp){
            tempScore += DECENT_EFFECT + WEAK_EFFECT;
            if(Random() % 100 < 50)
                tempScore += WEAK_EFFECT;
        }
        break;
    case STAT_CHANGE_ATK_SPEED_2:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_ATK] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (shouldSetUp){
            tempScore += DECENT_EFFECT;
            if(Random() % 100 < 50)
                tempScore += WEAK_EFFECT;
        }
        break;
    case STAT_CHANGE_SPATK:
    case STAT_CHANGE_SPATK_2:
    case STAT_CHANGE_SPATK_SPDEF:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPATK] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL) && shouldSetUp)
            tempScore += DECENT_EFFECT;
        break;
    case STAT_CHANGE_SPDEF:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPDEF] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) && shouldSetUp)
        {
            tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_DEF_SPDEF:
        if ((gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPDEF] >= MAX_STAT_STAGE) && (gBattleMons[battlerAtk].statStages[STAT_CHANGE_DEF] >= MAX_STAT_STAGE))
            return NO_INCREASE;
        if ((HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) || HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL)) && shouldSetUp)
        {
            tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_CRIT_RATE:
        if (shouldSetUp)
        {
            tempScore += DECENT_EFFECT;
            if(abilityAI == ABILITY_SNIPER || abilityAI == ABILITY_SUPER_LUCK || holdEffectAI == HOLD_EFFECT_SCOPE_LENS)
                tempScore += WEAK_EFFECT;
        }
        break;
    //add caveat where if AI is faster and could live hit with defensive setup, its 80% to go for it
    case STAT_CHANGE_DEF_2:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_DEF] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_PHYSICAL) && shouldSetUp)
        {
            tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_SPEED_2:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPEED] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (speedBattler > speedBattlerAI && aiIsFaster){
            tempScore += DECENT_EFFECT;
            if(Random() % 100 < 50)
                tempScore += WEAK_EFFECT;
        }
        break;
    case STAT_CHANGE_SPDEF_2:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPDEF] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL) && shouldSetUp)
        {
            tempScore += DECENT_EFFECT;
        }
        break;
    case STAT_CHANGE_ACC:
        //if (gBattleMons[battlerAtk].statStages[STAT_ACC] <= 3) // Increase only if necessary
            tempScore += DECENT_EFFECT;
        break;
    case STAT_CHANGE_EVASION:
        if (gBattleMons[battlerAtk].statStages[STAT_CHANGE_SPDEF] >= MAX_STAT_STAGE)
            return NO_INCREASE;
        else
            tempScore += DECENT_EFFECT;
        break;
    }

    return tempScore;
}

u32 IncreaseStatUpScore(u32 battlerAtk, u32 battlerDef, u32 statId)
{
    return IncreaseStatUpScoreInternal(battlerAtk, battlerDef, statId, TRUE);
}

u32 IncreaseStatUpScoreContrary(u32 battlerAtk, u32 battlerDef, u32 statId)
{
    return IncreaseStatUpScoreInternal(battlerAtk, battlerDef, statId, FALSE);
}

void IncreasePoisonScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (AI_CanPoison(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], move, AI_DATA->partnerMove) && AI_DATA->hpPercents[battlerDef] > 20)
    {
        ADJUST_SCORE_PTR(WEAK_EFFECT);
        if(Random() % 100 < 60)
            ADJUST_SCORE_PTR(WEAK_EFFECT);

        if ((HasMoveEffect(battlerAtk, EFFECT_PROTECT) || AI_DATA->abilities[battlerAtk] == ABILITY_MERCILESS) || (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_POISON)))
            ADJUST_SCORE_PTR(WEAK_EFFECT);    // stall tactic
    }
}

void IncreaseBurnScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if(AI_DATA->abilities[battlerDef] == ABILITY_GUTS)
        return;

    if (AI_CanBurn(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, AI_DATA->partnerMove))
    {
        ADJUST_SCORE_PTR(WEAK_EFFECT); // burning is good
        if (gMovesInfo[GetBestDmgMoveFromBattler(battlerDef, battlerAtk)].category == DAMAGE_CATEGORY_PHYSICAL && Random() % 100 < 60)
                ADJUST_SCORE_PTR(WEAK_EFFECT);

        if ((HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_BURN)))
                ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
}

void IncreaseParalyzeScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (AI_CanParalyze(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], move, AI_DATA->partnerMove))
    {
        ADJUST_SCORE_PTR(WEAK_EFFECT);
        u32 atkSpeed = AI_DATA->speedStats[battlerAtk];
        u32 defSpeed = AI_DATA->speedStats[battlerDef];

        if (((defSpeed > atkSpeed && defSpeed / 4 < atkSpeed) // You'll go first after paralyzing foe
          || HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_PARALYSIS)))
            ADJUST_SCORE_PTR(DECENT_EFFECT);
    }
}

void IncreaseSleepScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (AI_CanPutToSleep(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], move, AI_DATA->partnerMove))
        ADJUST_SCORE_PTR(WEAK_EFFECT);
        if(Random() % 100 < 60)
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    else
        return;

    if ((HasMoveEffect(battlerAtk, EFFECT_DREAM_EATER) || HasMoveEffect(battlerAtk, EFFECT_NIGHTMARE))
      && !(HasMoveEffect(battlerDef, EFFECT_SNORE) || HasMoveEffect(battlerDef, EFFECT_SLEEP_TALK))){
        ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
    else if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_SLEEP)
      || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_SLEEP))
        ADJUST_SCORE_PTR(WEAK_EFFECT);
}

void IncreaseConfusionScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if ((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return;

    if (AI_CanConfuse(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, AI_DATA->partnerMove))
    {
        ADJUST_SCORE_PTR(WEAK_EFFECT);
        if(Random() % 100 < 60)
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
}

void IncreaseFrostbiteScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if ((AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_TRY_TO_FAINT) && CanAIFaintTarget(battlerAtk, battlerDef, 0))
        return;

    if (AI_CanGiveFrostbite(battlerAtk, battlerDef, AI_DATA->abilities[battlerDef], BATTLE_PARTNER(battlerAtk), move, AI_DATA->partnerMove))
    {
        ADJUST_SCORE_PTR(WEAK_EFFECT); // frostbite is good
        if (HasMoveWithCategory(battlerDef, DAMAGE_CATEGORY_SPECIAL))
        {
            if (CanTargetFaintAi(battlerDef, battlerAtk))
                ADJUST_SCORE_PTR(DECENT_EFFECT); // frostbiting the target to stay alive is cool
        }

        if (HasMoveEffectANDArg(battlerAtk, EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_FROSTBITE)
          || HasMoveEffectANDArg(BATTLE_PARTNER(battlerAtk), EFFECT_DOUBLE_POWER_ON_ARG_STATUS, STATUS1_FROSTBITE))
            ADJUST_SCORE_PTR(WEAK_EFFECT);
    }
}

u32 IncreaseFollowMeScore(u32 battlerAtk, u32 battlerDef){

    u32 tempScore = NO_INCREASE;

    if(!IsDoubleBattle())
        return NO_INCREASE;

    u32 battlerPartner = BATTLE_PARTNER(battlerAtk);

    u8 i;

    u16 *moves = GetMovesArray(battlerDef);

    if(gBattleMons[battlerPartner].hp == 0)
        return NO_INCREASE;

    u32 maxRedirectedDmg = 0;

    if(!CanTargetFaintAi(battlerDef, battlerPartner))
        return NO_INCREASE;

    if(gMovesInfo[GetBestDmgMoveFromBattler(battlerAtk, battlerPartner)].target == MOVE_TARGET_FOES_AND_ALLY || gMovesInfo[GetBestDmgMoveFromBattler(battlerAtk, battlerPartner)].target == MOVE_TARGET_BOTH)
        return NO_INCREASE;

    for(i = 0; i < MAX_MON_MOVES; i++){
        if(CanIndexMoveFaintTarget(battlerDef, battlerPartner, i, 1)){
            if(CanIndexMoveFaintTarget(battlerDef, battlerAtk, i, 1)){
                return NO_INCREASE;
            }

            if(AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > maxRedirectedDmg){
                maxRedirectedDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
            }
        }
    }

    tempScore += DECENT_EFFECT;
    if(maxRedirectedDmg*2 < gBattleMons[battlerAtk].hp)
        tempScore += DECENT_EFFECT;

    return tempScore;
}

u32 IncreaseMagnetRiseScore(u32 battlerAtk, u32 battlerDef){

    u32 tempScore = NO_INCREASE;

    u8 i;

    u16 *moves = GetMovesArray(battlerDef);

    //if best dmg move isnt ground type, no increase
    if(gMovesInfo[GetBestDmgMoveFromBattler(battlerDef, battlerAtk)].type != TYPE_GROUND || gMovesInfo[GetBestDmgMoveFromBattler(battlerDef, battlerAtk)].ignoreTypeIfFlyingAndUngrounded)
        return NO_INCREASE;

    u32 maxGroundDmg = 0;
    u32 maxNonGroundDmg = 0;

    for(i = 0; i < MAX_MON_MOVES; i++){
        if(gMovesInfo[moves[i]].type != TYPE_GROUND || gMovesInfo[moves[i]].ignoreTypeIfFlyingAndUngrounded){
            //returns no increase if a non ground move can faint user
            if(CanIndexMoveFaintTarget(battlerDef, battlerAtk, i, 0))
                return NO_INCREASE;
            else if (AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > maxNonGroundDmg)
                maxNonGroundDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
        } else {
            if (AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected > maxGroundDmg)
                maxGroundDmg = AI_DATA->simulatedDmg[battlerDef][battlerAtk][i].expected;
        }
    }

    if(AI_DATA->speedStats[battlerAtk] >= AI_DATA->speedStats[battlerDef]){
        tempScore += 3;
    } else if (maxGroundDmg + maxNonGroundDmg >= gBattleMons[battlerAtk].hp){
        return NO_INCREASE;
    } else {
        tempScore += 3;
    }

    return tempScore;
}

u32 IncreaseStatLoweringScore(u32 battlerAtk, u32 battlerDef, u32 statId, u32 stages){

    u32 tempScore = NO_INCREASE;
    u16 *moves = GetMovesArray(battlerDef);
    u32 bestDmg = GetBestDmgFromBattler(battlerDef, battlerAtk);
    u32 bestDmgMove = GetBestDmgMoveFromBattler(battlerDef, battlerAtk);

    u32 playerSpeedAfterDrop = GetSpeedStatAfterBoost(battlerDef, AI_DATA->speedStats[battlerDef], stages, FALSE);

    if (AI_DATA->holdEffects[battlerDef] == HOLD_EFFECT_CLEAR_AMULET
         || AI_DATA->abilities[battlerDef] == ABILITY_CLEAR_BODY
         || AI_DATA->abilities[battlerDef] == ABILITY_WHITE_SMOKE
         || AI_DATA->abilities[battlerDef] == ABILITY_FULL_METAL_BODY)
            return NO_INCREASE;

    if(statId == STAT_CHANGE_ATK && AI_DATA->abilities[battlerDef] == ABILITY_HYPER_CUTTER)
        return NO_INCREASE;

    if(statId == STAT_CHANGE_DEF && AI_DATA->abilities[battlerDef] == ABILITY_BIG_PECKS)
        return NO_INCREASE;

    if(statId == STAT_CHANGE_ACC && (AI_DATA->abilities[battlerDef] == ABILITY_ILLUMINATE || AI_DATA->abilities[battlerDef] == ABILITY_KEEN_EYE || AI_DATA->abilities[battlerDef] == ABILITY_NO_GUARD))
        return NO_INCREASE;

    switch (statId)
    {
    case STAT_CHANGE_ATK:
        if (gBattleMons[battlerDef].statStages[STAT_ATK] <= MIN_STAT_STAGE)
            return NO_INCREASE;
        if(bestDmg*3 < gBattleMons[battlerAtk].hp)
            return NO_INCREASE;
        if(gMovesInfo[bestDmgMove].category == DAMAGE_CATEGORY_SPECIAL)
            return NO_INCREASE;
        if(bestDmg*2 > gBattleMons[battlerAtk].hp && AI_DATA->speedStats[battlerDef] > AI_DATA->speedStats[battlerAtk])
            return NO_INCREASE;
        tempScore += WEAK_EFFECT;
        if(stages >= 2 && Random() % 100 < 50)
            tempScore += WEAK_EFFECT;
        break;
    case STAT_CHANGE_DEF:
        //score of +1, 50% score of +2 if lowering stages by 2 or more
        if (gBattleMons[battlerDef].statStages[STAT_DEF] <= MIN_STAT_STAGE)
            return NO_INCREASE;
        tempScore += WEAK_EFFECT;
        if(stages >= 2 && Random() % 100 < 50)
            tempScore += WEAK_EFFECT;
        break;
    case STAT_CHANGE_SPEED:
        if (gBattleMons[battlerDef].statStages[STAT_SPEED] <= MIN_STAT_STAGE)
            return NO_INCREASE;
        if(AI_DATA->speedStats[battlerAtk] >= AI_DATA->speedStats[battlerDef])
            return NO_INCREASE;
        if(AI_DATA->speedStats[battlerAtk] < playerSpeedAfterDrop)
            return NO_INCREASE;
        tempScore += DECENT_EFFECT;
        tempScore += WEAK_EFFECT;
        break;
    case STAT_CHANGE_SPATK:
        if (gBattleMons[battlerDef].statStages[STAT_SPATK] <= MIN_STAT_STAGE)
            return NO_INCREASE;
        if(bestDmg*3 < gBattleMons[battlerAtk].hp)
            return NO_INCREASE;
        if(gMovesInfo[bestDmgMove].category == DAMAGE_CATEGORY_PHYSICAL)
            return NO_INCREASE;
        if(bestDmg*2 > gBattleMons[battlerAtk].hp && AI_DATA->speedStats[battlerDef] > AI_DATA->speedStats[battlerAtk])
            return NO_INCREASE;
        tempScore += WEAK_EFFECT;
        if(stages >= 2 && Random() % 100 < 50)
            tempScore += WEAK_EFFECT;
        break;
    case STAT_CHANGE_SPDEF:
        //score of +1, 50% score of +2 if lowering stages by 2 or more
        if (gBattleMons[battlerDef].statStages[STAT_SPDEF] <= MIN_STAT_STAGE)
            return NO_INCREASE;
        tempScore += WEAK_EFFECT;
        if(stages >= 2 && Random() % 100 < 50)
            tempScore += WEAK_EFFECT;
        break;
    case STAT_CHANGE_ACC:
        if (gBattleMons[battlerDef].statStages[STAT_ACC] <= MIN_STAT_STAGE)
            return NO_INCREASE;
        tempScore += WEAK_EFFECT;
        if(stages >= 2 && Random() % 100 < 50)
            tempScore += WEAK_EFFECT;
        break;
    }

    return tempScore;
}

bool32 AI_MoveMakesContact(u32 ability, u32 holdEffect, u32 move)
{
    if (gMovesInfo[move].makesContact
      && ability != ABILITY_LONG_REACH
      && holdEffect != HOLD_EFFECT_PROTECTIVE_PADS)
        return TRUE;
    return FALSE;
}

//TODO - this could use some more sophisticated logic
bool32 ShouldUseZMove(u32 battlerAtk, u32 battlerDef, u32 chosenMove)
{
    // simple logic. just upgrades chosen move to z move if possible, unless regular move would kill opponent
    if ((gBattleTypeFlags & BATTLE_TYPE_DOUBLE) && battlerDef == BATTLE_PARTNER(battlerAtk))
        return FALSE;   // don't use z move on partner
    if (HasTrainerUsedGimmick(battlerAtk, GIMMICK_Z_MOVE))
        return FALSE;   // can't use z move twice

    if (IsViableZMove(battlerAtk, chosenMove))
    {
        u8 effectiveness;
        u32 zMove = GetUsableZMove(battlerAtk, chosenMove);
        struct SimulatedDamage dmg;

        if (gBattleMons[battlerDef].ability == ABILITY_DISGUISE
            && !gMovesInfo[zMove].ignoresTargetAbility
            && (gBattleMons[battlerDef].species == SPECIES_MIMIKYU_DISGUISED || gBattleMons[battlerDef].species == SPECIES_MIMIKYU_TOTEM_DISGUISED))
            return FALSE; // Don't waste a Z-Move busting disguise
        if (gBattleMons[battlerDef].ability == ABILITY_ICE_FACE
            && !gMovesInfo[zMove].ignoresTargetAbility
            && gBattleMons[battlerDef].species == SPECIES_EISCUE_ICE_FACE && IS_MOVE_PHYSICAL(chosenMove))
            return FALSE; // Don't waste a Z-Move busting Ice Face

        if (IS_MOVE_STATUS(chosenMove) && !IS_MOVE_STATUS(zMove))
            return FALSE;
        else if (!IS_MOVE_STATUS(chosenMove) && IS_MOVE_STATUS(zMove))
            return FALSE;

        dmg = AI_CalcDamageSaveBattlers(chosenMove, battlerAtk, battlerDef, &effectiveness, FALSE, DMG_ROLL_DEFAULT);

        if (!IS_MOVE_STATUS(chosenMove) && dmg.minimum >= gBattleMons[battlerDef].hp)
            return FALSE;   // don't waste damaging z move if can otherwise faint target

        return TRUE;
    }

    return FALSE;
}

bool32 AI_IsBattlerAsleepOrComatose(u32 battlerId)
{
    return (gBattleMons[battlerId].status1 & STATUS1_SLEEP) || AI_DATA->abilities[battlerId] == ABILITY_COMATOSE;
}

s32 AI_TryToClearStats(u32 battlerAtk, u32 battlerDef, bool32 isDoubleBattle)
{
    if (isDoubleBattle)
        return min(CountPositiveStatStages(battlerDef) + CountPositiveStatStages(BATTLE_PARTNER(battlerDef)), 7);
    else
        return min(CountPositiveStatStages(battlerDef), 4);
}

bool32 AI_ShouldCopyStatChanges(u32 battlerAtk, u32 battlerDef)
{
    u8 i;
    // Want to copy positive stat changes
    for (i = STAT_ATK; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battlerDef].statStages[i] > gBattleMons[battlerAtk].statStages[i])
        {
            switch (i)
            {
            case STAT_ATK:
                return (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_PHYSICAL));
            case STAT_SPATK:
                return (HasMoveWithCategory(battlerAtk, DAMAGE_CATEGORY_SPECIAL));
            case STAT_ACC:
            case STAT_EVASION:
            case STAT_SPEED:
                return TRUE;
            case STAT_DEF:
            case STAT_SPDEF:
                return (AI_THINKING_STRUCT->aiFlags[battlerAtk] & AI_FLAG_STALL);
            }
        }
    }

    return FALSE;
}

//TODO - track entire opponent party data to determine hazard effectiveness
bool32 AI_ShouldSetUpHazards(u32 battlerAtk, u32 battlerDef, struct AiLogicData *aiData)
{
    if (aiData->abilities[battlerDef] == ABILITY_MAGIC_BOUNCE
     || CountUsablePartyMons(battlerDef) == 0)
        return FALSE;

    return TRUE;
}

void IncreaseTidyUpScore(u32 battlerAtk, u32 battlerDef, u32 move, s32 *score)
{
    if (gSideStatuses[GetBattlerSide(battlerAtk)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerAtk) != 0)
        ADJUST_SCORE_PTR(DECENT_EFFECT);
    if (gSideStatuses[GetBattlerSide(battlerDef)] & SIDE_STATUS_HAZARDS_ANY && CountUsablePartyMons(battlerDef) != 0)
        ADJUST_SCORE_PTR(-2);

    if (gBattleMons[battlerAtk].status2 & STATUS2_SUBSTITUTE && AI_IsFaster(battlerAtk, battlerDef, move))
        ADJUST_SCORE_PTR(-10);
    if (gBattleMons[battlerDef].status2 & STATUS2_SUBSTITUTE)
        ADJUST_SCORE_PTR(DECENT_EFFECT);

    if (gStatuses3[battlerAtk] & STATUS3_LEECHSEED)
        ADJUST_SCORE_PTR(DECENT_EFFECT);
    if (gStatuses3[battlerDef] & STATUS3_LEECHSEED)
        ADJUST_SCORE_PTR(-2);
}

bool32 AI_ShouldSpicyExtract(u32 battlerAtk, u32 battlerAtkPartner, u32 move, struct AiLogicData *aiData)
{
    u32 preventsStatLoss;
    u32 partnerAbility;
    u32 partnerHoldEffect = aiData->holdEffects[battlerAtkPartner];

    if (DoesBattlerIgnoreAbilityChecks(aiData->abilities[battlerAtk], move))
        partnerAbility = ABILITY_NONE;
    else
        partnerAbility = aiData->abilities[battlerAtkPartner];

    if (gBattleMons[battlerAtkPartner].statStages[STAT_ATK] == MAX_STAT_STAGE
     || partnerAbility == ABILITY_CONTRARY
     || partnerAbility == ABILITY_GOOD_AS_GOLD)
        return FALSE;

    preventsStatLoss = (partnerAbility == ABILITY_CLEAR_BODY
                     || partnerAbility == ABILITY_FULL_METAL_BODY
                     || partnerAbility == ABILITY_WHITE_SMOKE
                     || partnerHoldEffect == HOLD_EFFECT_CLEAR_AMULET);

    switch (gMovesInfo[aiData->partnerMove].effect)
    {
    case EFFECT_DEFENSE_UP:
    case EFFECT_DEFENSE_UP_2:
    case EFFECT_DEFENSE_UP_3:
    case EFFECT_BULK_UP:
    case EFFECT_STOCKPILE:
        if (!preventsStatLoss)
            return FALSE;
    }

    return (preventsStatLoss
         && AI_IsFaster(battlerAtk, battlerAtkPartner, TRUE)
         && HasMoveWithCategory(battlerAtkPartner, DAMAGE_CATEGORY_PHYSICAL));
}

//looks at slot 1 for player and AI
u32 GetDoublesTargeting(u32 battlerAtk, u32 battlerDef){
    u32 result;

    u32 aiPartner = BATTLE_PARTNER(battlerAtk);
    u32 playerPartner = BATTLE_PARTNER(battlerDef);

    u32 speedBattlerAI, speedBattlerAIPartner;
    u32 holdEffectAI = AI_DATA->holdEffects[battlerAtk];
    u32 holdEffectAIPartner = AI_DATA->holdEffects[aiPartner];
    u32 abilityAI = AI_DATA->abilities[battlerAtk];
    u32 abilityAIPartner = AI_DATA->abilities[aiPartner];

    speedBattlerAI = GetBattlerTotalSpeedStatArgs(battlerAtk, abilityAI, holdEffectAI);
    speedBattlerAIPartner   = GetBattlerTotalSpeedStatArgs(aiPartner, abilityAIPartner, holdEffectAIPartner);

    bool32 aiHasKillSlot1 = (NoOfHitsForTargetToFaintAI(battlerAtk, battlerDef) <= 1);
    bool32 aiHasKillSlot2 = (NoOfHitsForTargetToFaintAI(battlerAtk, playerPartner) <= 1);
    bool32 aiPartnerHasKillSlot1 = (NoOfHitsForTargetToFaintAI(aiPartner, battlerDef) <= 1);
    bool32 aiPartnerHasKillSlot2 = (NoOfHitsForTargetToFaintAI(aiPartner, playerPartner) <= 1);

    bool32 aiFasterThanPartner = (speedBattlerAI > speedBattlerAIPartner);

    //if any slot has a dead mon return default targeting
    if(gBattleMons[battlerAtk].hp == 0 || gBattleMons[battlerDef].hp == 0 || gBattleMons[aiPartner].hp == 0 || gBattleMons[playerPartner].hp == 0){
        result = DEFAULT_TARGETING;
        return result;
    }

    //no kills seen, return default targeting
    if(!aiHasKillSlot1 && !aiHasKillSlot2){
        if(!aiPartnerHasKillSlot1 && !aiPartnerHasKillSlot2){
            result = DEFAULT_TARGETING;
            return result;
        //only slot 1 has a kill on slot 2
        } else if (aiPartnerHasKillSlot1 && !aiPartnerHasKillSlot2){
            result = PARALLEL_TARGETING;
            return result;
        //only slot 2 has a kill on player slot 2
        } else if (!aiPartnerHasKillSlot1 && aiPartnerHasKillSlot2){
            result = DIAGONAL_TARGETING;
            return result;
        } else{
            result = RANDOM_TARGETING;
            return result;
        }
    } else if (aiHasKillSlot1 && !aiHasKillSlot2){
        if(aiPartnerHasKillSlot1 && !aiPartnerHasKillSlot2){
            //if both mons only see kill on slot 1, the faster mon targets slot 1 and the slower one targets slot 2
            if(aiFasterThanPartner){
                result = DIAGONAL_TARGETING;
                return result;
            } else {
                result = PARALLEL_TARGETING;
                return result;
            }
            //otherwise, ai slot 1 only seeing a kill on slot 1 returns diagonal targeting, regardless of if slot 2 sees both kills or no kills
        } else {
            result = DIAGONAL_TARGETING;
            return result;
        }
    } else if (!aiHasKillSlot1 && aiHasKillSlot2){
        if(!aiPartnerHasKillSlot1 && aiPartnerHasKillSlot2){
            //if both mons only see kill on slot 2, the faster mon targets slot 2 and the slower one targets slot 1
            if(aiFasterThanPartner){
                result = PARALLEL_TARGETING;
                return result;
            } else {
                result = DIAGONAL_TARGETING;
                return result;
            }
            //otherwise, ai slot 1 only seeing a kill on slot 2 returns parallel targeting, regardless of if slot 2 sees both kills or no kills
        } else {
            result = PARALLEL_TARGETING;
            return result;
        }
    //ai slot 1 has a kill on both player mons
    } else {
        //slot 2 has kill on neither
        if(!aiPartnerHasKillSlot1 && !aiPartnerHasKillSlot2){
            result = RANDOM_TARGETING;
            return result;
        //slot 2 only has kill on slot 2
        } else if(!aiPartnerHasKillSlot1 && aiPartnerHasKillSlot2){
            result = DEFAULT_TARGETING;
            return result;
        //slot 2 only has kill on slot 1
        } else if(aiPartnerHasKillSlot1 && !aiPartnerHasKillSlot2){
            result = PARALLEL_TARGETING;
            return result;
        //both AI mons see kill on both player mons
        } else {
            result = RANDOM_TARGETING;
            return result;
        }
    }
}
