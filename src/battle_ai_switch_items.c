#include "global.h"
#include "battle.h"
#include "constants/battle_ai.h"
#include "battle_ai_main.h"
#include "battle_ai_util.h"
#include "battle_util.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_main.h"
#include "battle_setup.h"
#include "data.h"
#include "item.h"
#include "party_menu.h"
#include "pokemon.h"
#include "random.h"
#include "util.h"
#include "constants/abilities.h"
#include "constants/item_effects.h"
#include "constants/battle_move_effects.h"
#include "constants/items.h"
#include "constants/moves.h"

// this file's functions
static bool32 CanUseSuperEffectiveMoveAgainstOpponents(u32 battler);
static bool32 FindMonWithFlagsAndSuperEffective(u32 battler, u16 flags, u32 moduloPercent);
static bool32 ShouldUseItem(u32 battler);
static bool32 AiExpectsToFaintPlayer(u32 battler);
static bool32 AI_ShouldHeal(u32 battler, u32 healAmount);
static bool32 AI_OpponentCanFaintAiWithMod(u32 battler, u32 healAmount);
static u32 GetSwitchinHazardsDamage(u32 battler, struct BattlePokemon *battleMon);
static bool32 CanAbilityTrapOpponent(enum Ability ability, u32 opponent);
static bool32 AI_ShouldSwitchIfBadMoves(u32 battler, bool32 emitResult);
static bool32 AI_SwitchMonIfSuitable(u32 battler, bool32 doubleBattle);
static u32 GetSwitchinHitsToKO(s32 damageTaken, u32 battler);
static s32 GetMaxDamagePlayerCouldDealToSwitchin(u32 battler, u32 opposingBattler, struct BattlePokemon battleMon);
static s32 GetMaxDamageMovePlayerCouldUseOnSwitchin(u32 battler, u32 opposingBattler, struct BattlePokemon battleMon);
static u32 GetHPHealAmount(u8 itemEffectParam, struct Pokemon *mon);
static u32 GetBattleMonTypeMatchup(struct BattlePokemon opposingBattleMon, struct BattlePokemon battleMon);

void InitializeSwitchinCandidate(struct Pokemon *mon)
{
    PokemonToBattleMon(mon, &gAiLogicData->switchinCandidate.battleMon);
    gAiLogicData->switchinCandidate.hypotheticalStatus = FALSE;
}

u32 GetSwitchChance(enum ShouldSwitchScenario shouldSwitchScenario)
{
    // Modify these cases if you want unique behaviour based on other data (trainer class, difficulty, etc.)
    switch(shouldSwitchScenario)
    {
        case SHOULD_SWITCH_WONDER_GUARD:
            return SHOULD_SWITCH_WONDER_GUARD_PERCENTAGE;
        case SHOULD_SWITCH_ABSORBS_MOVE:
            return SHOULD_SWITCH_ABSORBS_MOVE_PERCENTAGE;
        case SHOULD_SWITCH_TRAPPER:
            return SHOULD_SWITCH_TRAPPER_PERCENTAGE;
        case SHOULD_SWITCH_FREE_TURN:
            return SHOULD_SWITCH_FREE_TURN_PERCENTAGE;
        case SHOULD_SWITCH_TRUANT:
            return SHOULD_SWITCH_TRUANT_PERCENTAGE;
        case SHOULD_SWITCH_ALL_MOVES_BAD:
            return SHOULD_SWITCH_ALL_MOVES_BAD_PERCENTAGE;
        case SHOULD_SWITCH_PERISH_SONG:
            return SHOULD_SWITCH_PERISH_SONG_PERCENTAGE;
        case SHOULD_SWITCH_YAWN:
            return SHOULD_SWITCH_YAWN_PERCENTAGE;
        case SHOULD_SWITCH_BADLY_POISONED:
            return SHOULD_SWITCH_BADLY_POISONED_PERCENTAGE;
        case SHOULD_SWITCH_BADLY_POISONED_STATS_RAISED:
            return SHOULD_SWITCH_BADLY_POISONED_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_CURSED:
            return SHOULD_SWITCH_CURSED_PERCENTAGE;
        case SHOULD_SWITCH_CURSED_STATS_RAISED:
            return SHOULD_SWITCH_CURSED_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_NIGHTMARE:
            return SHOULD_SWITCH_NIGHTMARE_PERCENTAGE;
        case SHOULD_SWITCH_NIGHTMARE_STATS_RAISED:
            return SHOULD_SWITCH_NIGHTMARE_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_SEEDED:
            return SHOULD_SWITCH_SEEDED_PERCENTAGE;
        case SHOULD_SWITCH_SEEDED_STATS_RAISED:
            return SHOULD_SWITCH_SEEDED_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_INFATUATION:
            return SHOULD_SWITCH_INFATUATION_PERCENTAGE;
        case SHOULD_SWITCH_HASBADODDS:
            return SHOULD_SWITCH_HASBADODDS_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_STRONG:
            return SHOULD_SWITCH_NATURAL_CURE_STRONG_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_STRONG_STATS_RAISED:
            return SHOULD_SWITCH_NATURAL_CURE_STRONG_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_WEAK:
            return SHOULD_SWITCH_NATURAL_CURE_WEAK_PERCENTAGE;
        case SHOULD_SWITCH_NATURAL_CURE_WEAK_STATS_RAISED:
            return SHOULD_SWITCH_NATURAL_CURE_WEAK_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_REGENERATOR:
            return SHOULD_SWITCH_REGENERATOR_PERCENTAGE;
        case SHOULD_SWITCH_REGENERATOR_STATS_RAISED:
            return SHOULD_SWITCH_REGENERATOR_STATS_RAISED_PERCENTAGE;
        case SHOULD_SWITCH_ENCORE_STATUS:
            return SHOULD_SWITCH_ENCORE_STATUS_PERCENTAGE;
        case SHOULD_SWITCH_ENCORE_DAMAGE:
            return SHOULD_SWITCH_ENCORE_DAMAGE_PERCENTAGE;
        case SHOULD_SWITCH_CHOICE_LOCKED:
            return SHOULD_SWITCH_CHOICE_LOCKED_PERCENTAGE;
        case SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO:
            return SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO_PERCENTAGE;
        case SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS:
            return SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS_PERCENTAGE;
        case SHOULD_SWITCH_ALL_SCORES_BAD:
            return SHOULD_SWITCH_ALL_SCORES_BAD_PERCENTAGE;
        default:
            return 100;
    }
}

static bool32 IsAceMon(u32 battler, u32 monPartyId)
{
    if (gAiThinkingStruct->aiFlags[battler] & AI_FLAG_ACE_POKEMON
            && !gBattleStruct->battlerState[battler].forcedSwitch
            && monPartyId == CalculateEnemyPartyCountInSide(battler)-1)
        return TRUE;
    if (gAiThinkingStruct->aiFlags[battler] & AI_FLAG_DOUBLE_ACE_POKEMON
            && !gBattleStruct->battlerState[battler].forcedSwitch
            && (monPartyId == CalculateEnemyPartyCount()-1 || monPartyId == CalculateEnemyPartyCount()-2))
        return TRUE;
    return FALSE;
}

static bool32 AreStatsRaised(u32 battler)
{
    u8 buffedStatsValue = 0;
    s32 i;

    for (i = 0; i < NUM_BATTLE_STATS; i++)
    {
        if (gBattleMons[battler].statStages[i] > DEFAULT_STAT_STAGE)
            buffedStatsValue += gBattleMons[battler].statStages[i] - DEFAULT_STAT_STAGE;
    }

    return (buffedStatsValue > STAY_IN_STATS_RAISED);
}

void GetAIPartyIndexes(u32 battler, s32 *firstId, s32 *lastId)
{
    if (BATTLE_TWO_VS_ONE_OPPONENT && (battler & BIT_SIDE) == B_SIDE_OPPONENT)
    {
        *firstId = 0, *lastId = PARTY_SIZE;
    }
    else if (gBattleTypeFlags & (BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_INGAME_PARTNER | BATTLE_TYPE_TOWER_LINK_MULTI))
    {
        if ((battler & BIT_FLANK) == B_FLANK_LEFT)
            *firstId = 0, *lastId = PARTY_SIZE / 2;
        else
            *firstId = PARTY_SIZE / 2, *lastId = PARTY_SIZE;
    }
    else
    {
        *firstId = 0, *lastId = PARTY_SIZE;
    }
}

static inline bool32 SetSwitchinAndSwitch(u32 battler, u32 switchinId)
{
    gBattleStruct->AI_monToSwitchIntoId[battler] = switchinId;
    return TRUE;
}

static bool32 AI_DoesChoiceEffectBlockMove(u32 battler, u32 move)
{
    // Choice locked into something else
    if (gAiLogicData->lastUsedMove[battler] != MOVE_NONE && gAiLogicData->lastUsedMove[battler] != move
    && (IsHoldEffectChoice(GetBattlerHoldEffect(battler) && IsBattlerItemEnabled(battler))
        || gBattleMons[battler].ability == ABILITY_GORILLA_TACTICS))
        return TRUE;
    return FALSE;
}

static inline bool32 CanBattlerWin1v1(u32 hitsToKOAI, u32 hitsToKOPlayer, bool32 isBattlerFirst)
{
    // Player's best move deals 0 damage
    if (hitsToKOAI == 0 && hitsToKOPlayer > 0)
        return TRUE;

    // AI's best move deals 0 damage
    if (hitsToKOPlayer == 0 && hitsToKOAI > 0)
        return FALSE;

    // Neither mon can damage the other
    if (hitsToKOPlayer == 0 && hitsToKOAI == 0)
        return FALSE;

    // Different KO thresholds depending on who goes first
    if (isBattlerFirst)
    {
        if (hitsToKOAI >= hitsToKOPlayer)
            return TRUE;
    }
    else
    {
        if (hitsToKOAI > hitsToKOPlayer)
            return TRUE;
    }
    return FALSE;
}

// Note that as many return statements as possible are INTENTIONALLY put after all of the loops;
// the function can take a max of about 0.06s to run, and this prevents the player from identifying
// whether the mon will switch or not by seeing how long the delay is before they select a move
static bool32 ShouldSwitchIfHasBadOdds(u32 battler)
{
    //Variable initialization
    u8 opposingPosition;
    s32 i, damageDealt = 0, maxDamageDealt = 0, damageTaken = 0, maxDamageTaken = 0, maxDamageTakenPriority = 0;
    u32 aiMove, playerMove, bestPlayerPriorityMove = MOVE_NONE, bestPlayerMove = MOVE_NONE, expectedMove = MOVE_NONE, aiAbility = gAiLogicData->abilities[battler], opposingBattler;
    bool32 getsOneShot = FALSE, hasStatusMove = FALSE, hasSuperEffectiveMove = FALSE;
    u32 typeMatchup;
    enum BattleMoveEffects aiMoveEffect;
    u32 hitsToKoAI = 0, hitsToKoAIPriority = 0, hitsToKoPlayer = 0;
    bool32 canBattlerWin1v1 = FALSE, isBattlerFirst, isBattlerFirstPriority;

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // Double Battles aren't included in AI_FLAG_SMART_MON_CHOICE. Defaults to regular switch in logic
    if (IsDoubleBattle())
        return FALSE;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    opposingBattler = GetBattlerAtPosition(opposingPosition);
    u16 *playerMoves = GetMovesArray(opposingBattler);

    // Get max damage mon could take
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = SMART_SWITCHING_OMNISCIENT ? gBattleMons[opposingBattler].moves[i] : playerMoves[i];
        if (playerMove != MOVE_NONE && !IsBattleMoveStatus(playerMove) && GetMoveEffect(playerMove) != EFFECT_FOCUS_PUNCH && gBattleMons[opposingBattler].pp[i] > 0)
        {
            damageTaken = AI_GetDamage(opposingBattler, battler, i, AI_DEFENDING, gAiLogicData);
            if (damageTaken > maxDamageTaken && !AI_DoesChoiceEffectBlockMove(opposingBattler, playerMove))
            {
                maxDamageTaken = damageTaken;
                bestPlayerMove = playerMove;
            }
            if (GetBattleMovePriority(opposingBattler, gAiLogicData->abilities[opposingBattler], playerMove) > 0 && damageTaken > maxDamageTakenPriority && !AI_DoesChoiceEffectBlockMove(opposingBattler, playerMove))
            {
                maxDamageTakenPriority = damageTaken;
                bestPlayerPriorityMove = playerMove;
            }
        }
    }

    hitsToKoAI = GetNoOfHitsToKOBattlerDmg(maxDamageTaken, battler);
    hitsToKoAIPriority = GetNoOfHitsToKOBattlerDmg(maxDamageTakenPriority, battler);
    expectedMove = gAiThinkingStruct->aiFlags[battler] & AI_FLAG_PREDICT_MOVE ? GetIncomingMove(battler, opposingBattler, gAiLogicData) : bestPlayerMove;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battler].moves[i];
        aiMoveEffect = GetMoveEffect(aiMove);
        if (aiMove != MOVE_NONE && gBattleMons[battler].pp[i] > 0)
        {
            u32 nonVolatileStatus = GetMoveNonVolatileStatus(aiMove);
            // Check if mon has an "important" status move
            if (aiMoveEffect == EFFECT_REFLECT || aiMoveEffect == EFFECT_LIGHT_SCREEN
            || aiMoveEffect == EFFECT_SPIKES || aiMoveEffect == EFFECT_TOXIC_SPIKES || aiMoveEffect == EFFECT_STEALTH_ROCK || aiMoveEffect == EFFECT_STICKY_WEB || aiMoveEffect == EFFECT_LEECH_SEED
            || aiMoveEffect == EFFECT_EXPLOSION || aiMoveEffect == EFFECT_MISTY_EXPLOSION
            || nonVolatileStatus == MOVE_EFFECT_SLEEP
            || nonVolatileStatus == MOVE_EFFECT_TOXIC
            || nonVolatileStatus == MOVE_EFFECT_PARALYSIS
            || nonVolatileStatus == MOVE_EFFECT_BURN
            || aiMoveEffect == EFFECT_YAWN
            || aiMoveEffect == EFFECT_TRICK || aiMoveEffect == EFFECT_TRICK_ROOM || aiMoveEffect== EFFECT_WONDER_ROOM || aiMoveEffect ==  EFFECT_PSYCHO_SHIFT || aiMoveEffect == EFFECT_FIRST_TURN_ONLY
            )
            {
                hasStatusMove = TRUE;
            }

            // Only check damage if it's a damaging move
            if (!IsBattleMoveStatus(aiMove) && !AI_DoesChoiceEffectBlockMove(battler, aiMove))
            {
                // Check if mon has a super effective move
                if (gAiLogicData->effectiveness[battler][opposingBattler][i] >= UQ_4_12(2.0))
                    hasSuperEffectiveMove = TRUE;

                // Get maximum damage mon can deal
                damageDealt = AI_GetDamage(battler, opposingBattler, i, AI_ATTACKING, gAiLogicData);
                if (damageDealt > maxDamageDealt)
                    maxDamageDealt = damageDealt;
                if (!canBattlerWin1v1 ) // Once we can win a 1v1 we don't need to track this, but want to run the rest of the function to keep the runtime the same regardless of when we find the winning move
                {
                    hitsToKoPlayer = GetNoOfHitsToKOBattlerDmg(damageDealt, opposingBattler);
                    isBattlerFirst = AI_IsFaster(battler, opposingBattler, aiMove, expectedMove, CONSIDER_PRIORITY);
                    isBattlerFirstPriority = AI_IsFaster(battler, opposingBattler, aiMove, bestPlayerPriorityMove, CONSIDER_PRIORITY);
                    canBattlerWin1v1 = CanBattlerWin1v1(hitsToKoAI, hitsToKoPlayer, isBattlerFirst) && CanBattlerWin1v1(hitsToKoAIPriority, hitsToKoPlayer, isBattlerFirstPriority);
                }
            }
        }
    }

    // Calculate type advantage
    typeMatchup = GetBattleMonTypeMatchup(gBattleMons[opposingBattler], gBattleMons[battler]);

    // Check if mon gets one shot
    if (maxDamageTaken > gBattleMons[battler].hp
        && !(gItemsInfo[gBattleMons[battler].item].holdEffect == HOLD_EFFECT_FOCUS_SASH || (!IsMoldBreakerTypeAbility(opposingBattler, gAiLogicData->abilities[opposingBattler]) && B_STURDY >= GEN_5 && aiAbility == ABILITY_STURDY)))
    {
        getsOneShot = TRUE;
    }

    // Check if current mon can 1v1 in spite of bad matchup, and don't switch out if it can
    if (canBattlerWin1v1)
        return FALSE;

    // If we don't have any other viable options, don't switch out
    if (gAiLogicData->mostSuitableMonId[battler] == PARTY_SIZE)
        return FALSE;

    // Start assessing whether or not mon has bad odds
    // Jump straight to switching out in cases where mon gets OHKO'd
    if ((getsOneShot && !canBattlerWin1v1) && (gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2 // And the current mon has at least 1/2 their HP, or 1/4 HP and Regenerator
            || (aiAbility == ABILITY_REGENERATOR && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 4)))
    {
        // 50% chance to stay in regardless
        if (RandomPercentage(RNG_AI_SWITCH_HASBADODDS, (100 - GetSwitchChance(SHOULD_SWITCH_HASBADODDS))) && !gAiLogicData->aiPredictionInProgress)
            return FALSE;

        // Switch mon out
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }

    // General bad type matchups have more wiggle room
    if (typeMatchup > UQ_4_12(2.0)) // If the player has favourable offensive matchup (2.0 is neutral, this must be worse)
    {
        if (!hasSuperEffectiveMove // If the AI doesn't have a super effective move
        && (gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2 // And the current mon has at least 1/2 their HP, or 1/4 HP and Regenerator
            || (aiAbility == ABILITY_REGENERATOR
            && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 4)))
        {
            // Then check if they have an important status move, which is worth using even in a bad matchup
            if (hasStatusMove)
                return FALSE;

            // 50% chance to stay in regardless
            if (RandomPercentage(RNG_AI_SWITCH_HASBADODDS, (100 - GetSwitchChance(SHOULD_SWITCH_HASBADODDS))) && !gAiLogicData->aiPredictionInProgress)
                return FALSE;

            // Switch mon out
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
    }
    return FALSE;
}

static bool32 ShouldSwitchIfTruant(u32 battler)
{
    return FALSE;
}

static bool32 ShouldSwitchIfWonderGuard(u32 battler)
{
    return FALSE;
}

static bool32 FindMonThatAbsorbsOpponentsMove(u32 battler)
{
    return FALSE;
}

static bool32 ShouldSwitchIfOpponentChargingOrInvulnerable(u32 battler)
{
    u32 opposingBattler = GetOppositeBattler(battler);
    u32 incomingMove = GetIncomingMove(battler, opposingBattler, gAiLogicData);

    bool32 isOpposingBattlerChargingOrInvulnerable = !BreaksThroughSemiInvulnerablity(opposingBattler, incomingMove) || IsTwoTurnNotSemiInvulnerableMove(opposingBattler, incomingMove);

    if (IsDoubleBattle() || !(gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // In a world with a unified ShouldSwitch function, also want to check whether we already win 1v1 and if we do don't switch; not worth doubling the HasBadOdds computation for now
    if (isOpposingBattlerChargingOrInvulnerable && gAiLogicData->mostSuitableMonId[battler] != PARTY_SIZE && RandomPercentage(RNG_AI_SWITCH_FREE_TURN, GetSwitchChance(SHOULD_SWITCH_FREE_TURN)))
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);

    return FALSE;
}

static bool32 ShouldSwitchIfTrapperInParty(u32 battler)
{
    s32 firstId;
    s32 lastId;
    struct Pokemon *party;
    s32 i;
    enum Ability monAbility;
    s32 opposingBattler =  GetOppositeBattler(battler);

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // Check if current mon has an ability that traps opponent
    if (CanAbilityTrapOpponent(gBattleMons[battler].ability, opposingBattler))
        return FALSE;

    // Check party for mon with ability that traps opponent
    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    for (i = firstId; i < lastId; i++)
    {
        if (IsAceMon(battler, i))
            return FALSE;

        monAbility = GetMonAbility(&party[i]);

        if (CanAbilityTrapOpponent(monAbility, opposingBattler) || (CanAbilityTrapOpponent(gAiLogicData->abilities[opposingBattler], opposingBattler) && monAbility == ABILITY_TRACE))
        {
            // If mon in slot i is the most suitable switchin candidate, then it's a trapper than wins 1v1
            if (i == gAiLogicData->mostSuitableMonId[battler] && RandomPercentage(RNG_AI_SWITCH_TRAPPER, GetSwitchChance(SHOULD_SWITCH_TRAPPER)))
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
    }
    return FALSE;
}

static bool32 ShouldSwitchIfGameStatePrompt(u32 battler, bool32 emitResult, u32 switchinCandidate)
{
    return FALSE;
}

static bool32 AI_SwitchMonIfSuitable(u32 battler, bool32 doubleBattle)
{
    return FALSE;
}

static bool32 AI_ShouldSwitchIfBadMoves(u32 battler, bool32 emitResult)
{
    return FALSE;
}

static bool32 ShouldSwitchIfAbilityBenefit(u32 battler)
{
    return FALSE;
}

static bool32 CanUseSuperEffectiveMoveAgainstOpponents(u32 battler)
{
    s32 i;
    u16 move;

    u32 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u32 opposingBattler = GetBattlerAtPosition(opposingPosition);

    if (!(gAbsentBattlerFlags & (1u << opposingBattler)))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[battler].moves[i];
            if (move == MOVE_NONE || AI_DoesChoiceEffectBlockMove(battler, move))
                continue;

            if (gAiLogicData->effectiveness[battler][opposingBattler][i] >= UQ_4_12(2.0))
                return TRUE;
        }
    }
    if (!IsDoubleBattle())
        return FALSE;

    opposingBattler = GetBattlerAtPosition(BATTLE_PARTNER(opposingPosition));

    if (!(gAbsentBattlerFlags & (1u << opposingBattler)))
    {
        for (i = 0; i < MAX_MON_MOVES; i++)
        {
            move = gBattleMons[battler].moves[i];
            if (move == MOVE_NONE || AI_DoesChoiceEffectBlockMove(battler, move))
                continue;

            if (gAiLogicData->effectiveness[battler][opposingBattler][i] >= UQ_4_12(2.0))
                return TRUE;
        }
    }

    return FALSE;
}

static bool32 FindMonWithFlagsAndSuperEffective(u32 battler, u16 flags, u32 percentChance)
{
    u32 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i, j;
    u16 move;

    // Similar functionality handled more thoroughly by ShouldSwitchIfHasBadOdds
    if (gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SMART_SWITCHING)
        return FALSE;

    if (gLastLandedMoves[battler] == MOVE_NONE)
        return FALSE;
    if (gLastLandedMoves[battler] == MOVE_UNAVAILABLE)
        return FALSE;
    if (gLastHitBy[battler] == 0xFF)
        return FALSE;
    if (IsBattleMoveStatus(gLastLandedMoves[battler]))
        return FALSE;

    if (IsDoubleBattle())
    {
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << GetPartnerBattler(battler)))
            battlerIn2 = battler;
        else
            battlerIn2 = GetPartnerBattler(battler);
    }
    else
    {
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    for (i = firstId; i < lastId; i++)
    {
        u16 species;
        enum Ability monAbility;
        uq4_12_t typeMultiplier;
        u16 moveFlags = 0;

        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn1])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn2])
            continue;
        if (IsAceMon(battler, i))
            continue;

        species = GetMonData(&party[i], MON_DATA_SPECIES_OR_EGG);
        monAbility = GetMonAbility(&party[i]);
        typeMultiplier = CalcPartyMonTypeEffectivenessMultiplier(gLastLandedMoves[battler], species, monAbility);
        UpdateMoveResultFlags(typeMultiplier, &moveFlags);
        if (moveFlags & flags)
        {
            battlerIn1 = gLastHitBy[battler];

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
                if (move == MOVE_NONE)
                    continue;

                if (AI_GetMoveEffectiveness(move, battler, battlerIn1) >= UQ_4_12(2.0) && (RandomPercentage(RNG_AI_SWITCH_SE_DEFENSIVE, percentChance) || gAiLogicData->aiPredictionInProgress))
                    return SetSwitchinAndSwitch(battler, i);
            }
        }
    }

    return FALSE;
}

static bool32 CanMonSurviveHazardSwitchin(u32 battler)
{
    u32 battlerIn1, battlerIn2;
    u32 hazardDamage = 0, battlerHp = gBattleMons[battler].hp;
    enum Ability ability = gAiLogicData->abilities[battler], aiMove;
    s32 firstId, lastId, i, j;
    struct Pokemon *party;

    if (ability == ABILITY_REGENERATOR)
        battlerHp = (battlerHp * 133) / 100; // Account for Regenerator healing

    hazardDamage = GetSwitchinHazardsDamage(battler, &gBattleMons[battler]);

    // Battler will faint to hazards, check to see if another mon can clear them
    if (hazardDamage >= battlerHp)
    {
        return FALSE;
    }
    return TRUE;
}

static bool32 ShouldSwitchIfEncored(u32 battler)
{
    u32 encoredMove = gDisableStructs[battler].encoredMove;
    u32 opposingBattler = GetOppositeBattler(battler);

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // If not Encore'd don't switch
    if (encoredMove == MOVE_NONE)
        return FALSE;

    // Switch out if status move
    if (GetMoveCategory(encoredMove) == DAMAGE_CATEGORY_STATUS && RandomPercentage(RNG_AI_SWITCH_ENCORE, GetSwitchChance(SHOULD_SWITCH_ENCORE_STATUS)))
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);

    // Stay in if effective move
    else if (gAiLogicData->effectiveness[battler][opposingBattler][GetIndexInMoveArray(battler, encoredMove)] >= UQ_4_12(2.0))
        return FALSE;

    // Switch out 50% of the time otherwise
    else if ((RandomPercentage(RNG_AI_SWITCH_ENCORE, GetSwitchChance(SHOULD_SWITCH_ENCORE_DAMAGE)) || gAiLogicData->aiPredictionInProgress) && gAiLogicData->mostSuitableMonId[battler] != PARTY_SIZE)
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);

    return FALSE;
}

static bool32 ShouldSwitchIfBadChoiceLock(u32 battler)
{
    enum HoldEffect holdEffect = GetBattlerHoldEffect(battler);
    u32 lastUsedMove = gAiLogicData->lastUsedMove[battler];
    u32 opposingBattler = GetOppositeBattler(battler);
    bool32 moveAffectsTarget = TRUE;

    if (lastUsedMove != MOVE_NONE && (AI_GetMoveEffectiveness(lastUsedMove, battler, opposingBattler) == UQ_4_12(0.0)
        || CanAbilityAbsorbMove(battler, opposingBattler, gAiLogicData->abilities[opposingBattler], lastUsedMove, CheckDynamicMoveType(GetBattlerMon(battler), lastUsedMove, battler, MON_IN_BATTLE), AI_CHECK)
        || CanAbilityBlockMove(battler, opposingBattler, gAiLogicData->abilities[battler], gAiLogicData->abilities[opposingBattler], lastUsedMove, AI_CHECK)))
        moveAffectsTarget = FALSE;

    if (IsHoldEffectChoice(holdEffect) && IsBattlerItemEnabled(battler))
    {
        if ((GetMoveCategory(lastUsedMove) == DAMAGE_CATEGORY_STATUS || !moveAffectsTarget) && RandomPercentage(RNG_AI_SWITCH_CHOICE_LOCKED, GetSwitchChance(SHOULD_SWITCH_CHOICE_LOCKED)))
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }

    return FALSE;
}

// AI should switch if it's become setup fodder and has something better to switch to
static bool32 ShouldSwitchIfAttackingStatsLowered(u32 battler)
{
    s8 attackingStage = gBattleMons[battler].statStages[STAT_ATK];
    s8 spAttackingStage = gBattleMons[battler].statStages[STAT_SPATK];

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // Physical attacker
    if (gBattleMons[battler].attack > gBattleMons[battler].spAttack)
    {
        // Don't switch if attack isn't below -1
        if (attackingStage > DEFAULT_STAT_STAGE - 2)
            return FALSE;
        // 50% chance if attack at -2 and have a good candidate mon
        else if (attackingStage == DEFAULT_STAT_STAGE - 2)
        {
            if (gAiLogicData->mostSuitableMonId[battler] != PARTY_SIZE && (RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, GetSwitchChance(SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO)) || gAiLogicData->aiPredictionInProgress))
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
        // If at -3 or worse, switch out regardless
        else if ((attackingStage < DEFAULT_STAT_STAGE - 2) && RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, GetSwitchChance(SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS)))
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }

    // Special attacker
    else
    {
        // Don't switch if attack isn't below -1
        if (spAttackingStage > DEFAULT_STAT_STAGE - 2)
            return FALSE;
        // 50% chance if attack at -2 and have a good candidate mon
        else if (spAttackingStage == DEFAULT_STAT_STAGE - 2)
        {
            if (gAiLogicData->mostSuitableMonId[battler] != PARTY_SIZE && (RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, GetSwitchChance(SHOULD_SWITCH_ATTACKING_STAT_MINUS_TWO)) || gAiLogicData->aiPredictionInProgress))
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
        // If at -3 or worse, switch out regardless
        else if ((spAttackingStage < DEFAULT_STAT_STAGE - 2) && RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, GetSwitchChance(SHOULD_SWITCH_ATTACKING_STAT_MINUS_THREE_PLUS)))
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }
    return FALSE;
}

bool32 ShouldSwitchIfOutspedAndKOd(u32 battler, bool32 emitResult){
    return FALSE;
}

bool32 ShouldSwitchIfFasterButKOd(u32 battler, bool32 emitResult){
    return FALSE;
}

bool32 ShouldSwitchIfBadMatchup(u32 battler, bool32 emitResult){
    return FALSE;
}

bool32 ShouldSwitchIfStatusedNaturalCure(u32 battler, bool32 emitResult){
    return FALSE;
}

static bool32 MonHasRelevantStatsRaised(u32 battler)
{
    //If mon has raised relevant stats this function returns True

    u8 i;
    u32 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u32 opposingBattler = GetBattlerAtPosition(opposingPosition);
    

    u32 battlerSpeed = GetBattlerTotalSpeedStat(battler, gBattleMons[battler].ability, GetItemHoldEffect(gBattleMons[battler].item));
    u32 playerSpeed = GetBattlerTotalSpeedStat(opposingBattler, gBattleMons[opposingBattler].ability, GetItemHoldEffect(gBattleMons[opposingBattler].item));

    bool8 anyStatIsRaised = FALSE;
    for(i = 0; i < STAT_EVASION; i ++){
        if(gBattleMons[battler].statStages[i] > DEFAULT_STAT_STAGE){
            anyStatIsRaised = TRUE;
        }
    }

    //if ai has used speed swap, gained speed from it, and is faster than player while being slower without it
    if(gDisableStructs[battler].speedSwap && gBattleMons[battler].speed > gDisableStructs[battler].originalSpeed
        && battlerSpeed >= playerSpeed){
            if(gDisableStructs[opposingBattler].speedSwap){
                if(gDisableStructs[battler].originalSpeed < gDisableStructs[opposingBattler].originalSpeed)
                    return TRUE;
            }
            else{
                if(gDisableStructs[battler].originalSpeed < playerSpeed)
                    return TRUE;
            }
    }

    if(!anyStatIsRaised)
        return FALSE;

    //if ai mon has raised its speed, would be slower without the boosts but is faster with them
    if(gBattleMons[battler].statStages[STAT_SPEED] > DEFAULT_STAT_STAGE && (gBattleMons[battler].speed < gAiLogicData->speedStats[opposingBattler])
        && (gAiLogicData->speedStats[battler] >= gAiLogicData->speedStats[opposingBattler])){
        return TRUE;
    }

    if(gAiLogicData->abilities[opposingBattler] == ABILITY_UNAWARE){
        return FALSE;
    }

    if(gBattleMons[battler].statStages[STAT_ATK] > DEFAULT_STAT_STAGE && HasMoveWithCategory(battler, DAMAGE_CATEGORY_PHYSICAL)){
        return TRUE;
    }

    if(gBattleMons[battler].statStages[STAT_SPATK] > DEFAULT_STAT_STAGE && HasMoveWithCategory(battler, DAMAGE_CATEGORY_SPECIAL)){
        return TRUE;
    }

    if(gBattleMons[battler].statStages[STAT_DEF] > DEFAULT_STAT_STAGE && HasMoveWithCategory(opposingBattler, DAMAGE_CATEGORY_PHYSICAL)){
        return TRUE;
    }

    if(gBattleMons[battler].statStages[STAT_SPDEF] > DEFAULT_STAT_STAGE && HasMoveWithCategory(opposingBattler, DAMAGE_CATEGORY_SPECIAL)){
        return TRUE;
    }

    if(gBattleMons[battler].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE && gAiLogicData->abilities[opposingBattler] != ABILITY_NO_GUARD){
        return TRUE;
    }

    return FALSE;
}

static bool32 MoveActivatesEjectPack(u32 move){
    u8 i;

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
                    if ((gMovesInfo[move].additionalEffects[i].self))
                        return TRUE;
                    break;
                default:
                    return FALSE;
            }
        }

    return FALSE;
}
    
static bool32 HasGoodSubstituteMove(u32 battler)
{
    int i;
    u32 aiMove, aiMoveEffect, opposingBattler = GetOppositeBattler(battler);
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battler].moves[i];
        aiMoveEffect = GetMoveEffect(aiMove);
        if (IsSubstituteEffect(aiMoveEffect))
        {
            if (IncreaseSubstituteMoveScore(battler, opposingBattler, aiMove) > 0)
                return TRUE;
        }
    }
    return FALSE;
}

bool32 ShouldSwitch(u32 battler)
{
    u32 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;
    s32 availableToSwitch;
    bool32 hasAceMon = FALSE;
    struct MostSuitableCandidate bestCandidate = {0};
    u32 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u32 opposingBattler = GetBattlerAtPosition(opposingPosition);
    bool32 aiIsFaster = FALSE;
    u32 playerMove = 0, battlerMove = 0, hitsToKOPlayer = 0, hitsToKOBattler = 0;
    s32 battlerAbility = AI_DecideKnownAbilityForTurn(battler);
    s32 battlerHoldEffect = AI_DecideHoldEffectForTurn(battler);
    s32 playerAbility = AI_DecideKnownAbilityForTurn(opposingBattler);
    s32 playerHoldEffect = AI_DecideHoldEffectForTurn(opposingBattler);
    u32 battlerSpeed = GetBattlerTotalSpeedStat(battler, battlerAbility, battlerHoldEffect);
    u32 playerSpeed = GetBattlerTotalSpeedStat(opposingBattler, playerAbility, playerHoldEffect);
    s32 battlerMovePriority = 0, playerMovePriority = 0, maxDamageDealt = 0, damageDealt = 0;
    u32 bestBattlerMove = 0, bestPlayerMove = 0;
    u32 bestHitsToKOPlayer = INT_MAX, bestHitsToKOBattler = INT_MAX;
    u8 j, k, l;
    s32 dmg, bestDmg = 0;
    u32 aiHighestDmg = MAX_MON_MOVES;
    struct AiLogicData *aiData = gAiLogicData;

    bool32 canFakeOut = FALSE;
    bool32 willSetHazards = FALSE;
    bool32 willDestinyBond = FALSE;
    bool32 battlerCanKOPlayerMon = FALSE;
    bool32 willHeal = FALSE;
    bool32 hasNoGoodMoves = TRUE;

    bool32 canPivot = FALSE;
    bool32 canTeleport = FALSE;
    bool32 canBatonPass = FALSE;

    u8 pivot = MAX_MON_MOVES;
    u8 teleport = MAX_MON_MOVES;
    u8 batonPass = MAX_MON_MOVES;

    if(!CanMonSurviveHazardSwitchin(battler))
        return FALSE;

    // Sequence Switching AI never switches mid-battle
    if (gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING)
        return FALSE;

    availableToSwitch = 0;

    //make second function for switching in doubles that checks all 3 score sets
    //will only be used for encored into ineffectual moves or perish song
    if (IsDoubleBattle())
    {
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << GetPartnerBattler(battler)))
            battlerIn2 = battler;
        else
            battlerIn2 = GetPartnerBattler(battler);

        opposingBattler = BATTLE_OPPOSITE(battlerIn1);
        if (gAbsentBattlerFlags & (1u << opposingBattler))
            opposingBattler ^= BIT_FLANK;
    }
    else
    {
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn1])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn2])
            continue;
        if (IsAceMon(battler, i))
            continue;

        availableToSwitch++;
    }

    if (availableToSwitch == 0)
    {
        return FALSE;
    }

    //gets most suitable candidate for mid turn switching
    bestCandidate = GetMostSuitableMonToSwitchInto(battler, FALSE);
    InitializeSwitchinCandidate(&party[bestCandidate.mon]);

    if(IsDoubleBattle()){
        if(bestCandidate.score < (SCORE_DEFAULT + SCORE_DEFAULT)){
            return FALSE;
        }
        else if (gBattleMons[battler].volatiles.wrapped
                    || gBattleMons[battler].volatiles.escapePrevention
                    || gBattleMons[battler].volatiles.root
                    || IsAbilityPreventingEscape(battler)){
            return FALSE;
        } 
        else if (gBattleMons[battler].volatiles.perishSong
        && gDisableStructs[battler].perishSongTimer == 0
        && battlerAbility != ABILITY_SOUNDPROOF){
            gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
            return TRUE;
        }
        else if(gAiLogicData->hasViableMoveDoubles)
            return FALSE;
        else{
            gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
            return TRUE;
        }
    }

    //returns false if score -5 or lower, wont switch even if all moves have negative score or will faint to perish song
    if(bestCandidate.score <= SCORE_FASTER_BUT_KOD)
        return FALSE;

    if (gBattleMons[battler].volatiles.perishSong
        && gDisableStructs[battler].perishSongTimer == 0
        && battlerAbility != ABILITY_SOUNDPROOF){
            gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
            return TRUE;
    }

    for(l= 0; l < MAX_MON_MOVES; l++){
        if (gAiThinkingStruct->score[l] >= 100){
            hasNoGoodMoves = FALSE;
        }
        if (gMovesInfo[gBattleMons[battler].moves[l]].effect == EFFECT_TELEPORT && gAiThinkingStruct->score[l] >= 100 && !IsBattlerIncapacitated(battler, battlerAbility)){
            canTeleport = TRUE;
            teleport = l;
        }
        if (gMovesInfo[gBattleMons[battler].moves[l]].effect == EFFECT_PARTING_SHOT && gAiThinkingStruct->score[l] >= 100 && !IsBattlerIncapacitated(battler, battlerAbility)){
            canPivot = TRUE;
            pivot = l;
        }
        if (gMovesInfo[gBattleMons[battler].moves[l]].effect == EFFECT_BATON_PASS && gAiThinkingStruct->score[l] >= 100){
            canBatonPass = TRUE;
            batonPass = l;
        }
    }

    if (gBattleMons[battler].moves[gAiBattleData->chosenMoveIndex[battler]] == MOVE_FAKE_OUT)
        canFakeOut = TRUE;
    
    if (gMovesInfo[gBattleMons[battler].moves[gAiBattleData->chosenMoveIndex[battler]]].effect == EFFECT_DESTINY_BOND)
        willDestinyBond = TRUE;
        
    if (IsHazardMove(gBattleMons[battler].moves[gAiBattleData->chosenMoveIndex[battler]]) && AI_ShouldSetUpHazards(battler, opposingBattler, gBattleMons[battler].moves[gAiBattleData->chosenMoveIndex[battler]], aiData))
        willSetHazards = TRUE;

    if (IsHealingMove(gBattleMons[battler].moves[gAiBattleData->chosenMoveIndex[battler]]))
        willHeal = TRUE;

    if(hasNoGoodMoves){
        gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
        return TRUE;
    }
    
    // Get best move for AI to use on player
    for (j = 0; j < MAX_MON_MOVES; j++)
    {
        battlerMove = gBattleMons[battler].moves[j];
        battlerMovePriority = GetBattleMovePriority(battler, battlerAbility, battlerMove);

        if (battlerMove != MOVE_NONE && gMovesInfo[battlerMove].power != 0 && gAiThinkingStruct->score[j] >= 100)
        {
            //finds highest damage pivot move in the case of AI pokemon having multiple
            dmg = gAiLogicData->simulatedDmg[battler][opposingBattler][j].minimum;
            if (gMovesInfo[battlerMove].effect == EFFECT_HIT_ESCAPE && !IsBattlerIncapacitated(battler, battlerAbility)){
                canPivot = TRUE;
                if(pivot == MAX_MON_MOVES || dmg > gAiLogicData->simulatedDmg[battler][opposingBattler][pivot].minimum )
                    pivot = j;
            }
            if(dmg > bestDmg){
                aiHighestDmg = j;
                bestDmg = dmg;
            }
            hitsToKOPlayer = GetNoOfHitsToKO(dmg, gBattleMons[opposingBattler].hp);
            //continues if move does 0 damage
            if(hitsToKOPlayer == 0){
                continue;
            }

            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            if(hitsToKOPlayer < bestHitsToKOPlayer){
                bestHitsToKOPlayer = hitsToKOPlayer;
                bestBattlerMove = battlerMove;
            } else if (hitsToKOPlayer == bestHitsToKOPlayer && battlerMovePriority > GetBattleMovePriority(battler, battlerAbility, bestBattlerMove)){
                bestBattlerMove = battlerMove;
            }
        }
    }

    // Get best move for player to use on AI battler
    for (k = 0; k < MAX_MON_MOVES; k++)
    {
        playerMove = gBattleMons[opposingBattler].moves[k];
        playerMovePriority = GetBattleMovePriority(opposingBattler, playerAbility, playerMove);

        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && !DoesSubstituteBlockMove(opposingBattler, battler, playerMove))
        {
            dmg = gAiLogicData->simulatedDmg[opposingBattler][battler][k].minimum;
            hitsToKOBattler = GetNoOfHitsToKO(dmg, gBattleMons[battler].hp);
            //continues if move does 0 damage
            if(hitsToKOBattler == 0){
                continue;
            }

            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            if(hitsToKOBattler < bestHitsToKOBattler){
                bestHitsToKOBattler = hitsToKOBattler;
                bestPlayerMove = playerMove;
            } else if (hitsToKOBattler == bestHitsToKOBattler && playerMovePriority > GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove)){
                bestPlayerMove = playerMove;
            }
        }
    }

    if(AnyStatIsRaised(battler) && canBatonPass && (GetBattleMovePriority(battler, battlerAbility, gBattleMons[battler].moves[batonPass]) > GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove) || battlerSpeed >= playerSpeed)){
        gAiBattleData->chosenMoveIndex[battler] = batonPass;
        return FALSE;
    }

    if(gBattleMons[battler].hp*5 <= gBattleMons[battler].maxHP)
        return FALSE;

    //all other switch functions require a score of +2, return false here if none found
    if(bestCandidate.score < SCORE_SLOW_THREATEN)
        return FALSE;

    //represents whether or not the AI is faster
    if(GetBattleMovePriority(battler, battlerAbility, gBattleMons[battler].moves[gAiBattleData->chosenMoveIndex[battler]]) > GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove)){
        aiIsFaster = TRUE;
    } else if (GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove) > GetBattleMovePriority(battler, battlerAbility, gBattleMons[battler].moves[gAiBattleData->chosenMoveIndex[battler]])){
        aiIsFaster = FALSE;
    } else if (battlerSpeed >= playerSpeed){
        //move prios are tied
        aiIsFaster = TRUE;
    }

    //reverse faster value if trick room on field
    if(gFieldStatuses & STATUS_FIELD_TRICK_ROOM){
        if(aiIsFaster){
            aiIsFaster = FALSE;
        } else {
            aiIsFaster = TRUE;
        }
    }

    if(gAiLogicData->simulatedDmg[battler][opposingBattler][gAiBattleData->chosenMoveIndex[battler]].minimum >= gBattleMons[opposingBattler].hp)
        battlerCanKOPlayerMon = TRUE;

    if(battlerAbility == ABILITY_NATURAL_CURE && gBattleMons[battler].status1 & STATUS1_ANY && !battlerCanKOPlayerMon){
        if(canPivot){
            gAiBattleData->chosenMoveIndex[battler] = pivot;
            return FALSE;
        } else if (gBattleMons[battler].volatiles.wrapped
                    || gBattleMons[battler].volatiles.escapePrevention
                    || gBattleMons[battler].volatiles.root
                    || IsAbilityPreventingEscape(battler)){
            return FALSE;
        } else {
            gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
            return TRUE;
        }
    }

    //player kills ai, more conditions for slow kill than fast kill
    if (bestHitsToKOBattler == 1 && !canFakeOut)
    {
        if(!aiIsFaster){
            gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
            return TRUE;
        } else if (aiIsFaster && !willSetHazards && !willHeal && !willDestinyBond && !battlerCanKOPlayerMon && !MonHasRelevantStatsRaised(battler)){
            if(canPivot){
                gAiBattleData->chosenMoveIndex[battler] = pivot;
                return FALSE;
            } else if (gBattleMons[battler].volatiles.wrapped
                    || gBattleMons[battler].volatiles.escapePrevention
                    || gBattleMons[battler].volatiles.root
                    || IsAbilityPreventingEscape(battler)){
                return FALSE;
            } else {
                gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
                return TRUE;
            }
        }
    }

    //AI cant 3hko player, player at least 3hkos in return, and AI has no viable status moves
    if(bestHitsToKOPlayer > 3 && bestHitsToKOBattler <= 3 && !gAiLogicData->hasViableStatus && !MonHasRelevantStatsRaised(battler)){
        if(canPivot){
                gAiBattleData->chosenMoveIndex[battler] = pivot;
                return FALSE;
        } else if (canTeleport){
                gAiBattleData->chosenMoveIndex[battler] = teleport;
                return FALSE;
        } else if (gBattleMons[battler].volatiles.wrapped
                    || gBattleMons[battler].volatiles.escapePrevention
                    || gBattleMons[battler].volatiles.root
                    || IsAbilityPreventingEscape(battler)){
                return FALSE;
        } else {
                gAiLogicData->mostSuitableMonId[battler] = bestCandidate.mon;
                return TRUE;
        }
    }

    return FALSE;
}

bool32 ShouldSwitchIfAllScoresBad(u32 battler)
{
    u32 i, score, opposingBattler = GetOppositeBattler(battler);
    if (!(gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        score = gAiBattleData->finalScore[battler][opposingBattler][i];
        if (score > AI_BAD_SCORE_THRESHOLD)
            return FALSE;
    }
    if (RandomPercentage(RNG_AI_SWITCH_ALL_SCORES_BAD, GetSwitchChance(SHOULD_SWITCH_ALL_SCORES_BAD)))
        return TRUE;
    return FALSE;
}

bool32 ShouldStayInToUseMove(u32 battler)
{
    u32 i, aiMove, opposingBattler = GetOppositeBattler(battler);
    enum BattleMoveEffects aiMoveEffect;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battler].moves[i];
        aiMoveEffect = GetMoveEffect(aiMove);
        if (aiMoveEffect == EFFECT_REVIVAL_BLESSING || IsSwitchOutEffect(aiMoveEffect))
        {
            if (gAiBattleData->finalScore[battler][opposingBattler][i] > AI_GOOD_SCORE_THRESHOLD)
                return TRUE;
        }
    }
    return FALSE;
}

void ModifySwitchAfterMoveScoring(u32 battler)
{
    u32 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party;
    s32 i;
    s32 availableToSwitch;

    if (gBattleMons[battler].volatiles.wrapped)
        return;
    if (gBattleMons[battler].volatiles.escapePrevention)
        return;
    if (gBattleMons[battler].volatiles.root)
        return;
    if (IsAbilityPreventingEscape(battler))
        return;
    if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
        return;

    // Sequence Switching AI never switches mid-battle
    if (gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING)
        return;

    availableToSwitch = 0;

    if (IsDoubleBattle())
    {
        u32 partner = BATTLE_PARTNER(battler);
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << partner))
            battlerIn2 = battler;
        else
            battlerIn2 = partner;
    }
    else
    {
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battlerIn1])
            continue;
        if (i == gBattlerPartyIndexes[battlerIn2])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn1])
            continue;
        if (i == gBattleStruct->monToSwitchIntoId[battlerIn2])
            continue;
        if (IsAceMon(battler, i))
            continue;

        availableToSwitch++;
    }

    if (availableToSwitch == 0)
        return;

    if (ShouldSwitchIfAllScoresBad(battler))
        gAiLogicData->shouldSwitch |= (1u << battler);
    else if (ShouldStayInToUseMove(battler))
        gAiLogicData->shouldSwitch &= ~(1u << battler);
}

bool32 IsSwitchinValid(u32 battler)
{
    // Edge case: See if partner already chose to switch into the same mon
    if (IsDoubleBattle())
    {
        u32 partner = BATTLE_PARTNER(battler);
        if (gBattleStruct->AI_monToSwitchIntoId[battler] == PARTY_SIZE) // Generic switch
        {
            if ((gAiLogicData->shouldSwitch & (1u << partner)) && gAiLogicData->monToSwitchInId[partner] == gAiLogicData->mostSuitableMonId[battler])
            {
                return FALSE;
            }
        }
        else // Override switch
        {
            if ((gAiLogicData->shouldSwitch & (1u << partner)) && gAiLogicData->monToSwitchInId[partner] == gBattleStruct->AI_monToSwitchIntoId[battler])
            {
                return FALSE;
            }
        }
    }
    return TRUE;
}

void AI_TrySwitchOrUseItem(u32 battler)
{
    struct Pokemon *party;
    u8 battlerIn1, battlerIn2;
    s32 firstId;
    s32 lastId; // + 1
    u8 battlerPosition = GetBattlerPosition(battler);
    party = GetBattlerParty(battler);

    if (gBattleTypeFlags & BATTLE_TYPE_TRAINER)
    {
        if (gAiLogicData->shouldSwitch & (1u << battler) && IsSwitchinValid(battler))
        {
            BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, B_ACTION_SWITCH, 0);
            SetAIUsingGimmick(battler, NO_GIMMICK);
            if (gBattleStruct->AI_monToSwitchIntoId[battler] == PARTY_SIZE)
            {
                s32 monToSwitchId = gAiLogicData->mostSuitableMonId[battler];
                if (monToSwitchId == PARTY_SIZE)
                {
                    if (!IsDoubleBattle())
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerPosition);
                        battlerIn2 = battlerIn1;
                    }
                    else
                    {
                        battlerIn1 = GetBattlerAtPosition(battlerPosition);
                        battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(battlerPosition));
                    }

                    GetAIPartyIndexes(battler, &firstId, &lastId);

                    for (monToSwitchId = (lastId-1); monToSwitchId >= firstId; monToSwitchId--)
                    {
                        if (!IsValidForBattle(&party[monToSwitchId]))
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn1])
                            continue;
                        if (monToSwitchId == gBattlerPartyIndexes[battlerIn2])
                            continue;
                        if (monToSwitchId == gBattleStruct->monToSwitchIntoId[battlerIn1])
                            continue;
                        if (monToSwitchId == gBattleStruct->monToSwitchIntoId[battlerIn2])
                            continue;
                        if (IsAceMon(battler, monToSwitchId))
                            continue;

                        break;
                    }
                }

                gBattleStruct->AI_monToSwitchIntoId[battler] = monToSwitchId;
            }

            gBattleStruct->monToSwitchIntoId[battler] = gBattleStruct->AI_monToSwitchIntoId[battler];
            gAiLogicData->monToSwitchInId[battler] = gBattleStruct->AI_monToSwitchIntoId[battler];
            return;
        }
        else if (ShouldUseItem(battler))
        {
            SetAIUsingGimmick(battler, NO_GIMMICK);
            return;
        }
    }

    BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, B_ACTION_USE_MOVE, BATTLE_OPPOSITE(battler) << 8);
}

u32 GetSwitchInSpeedStatArgs(struct BattlePokemon battleMon, u32 battler, u32 ability, u32 holdEffect){
    struct BattlePokemon *savedBattleMons = AllocSaveBattleMons();
    gBattleMons[battler] = battleMon;
    CalcPartyMonMegaStats(battleMon, battler);
    u32 speed = gBattleMons[battler].speed;

    // weather abilities
    if (HasWeatherEffect())
    {
        if (ability == ABILITY_SWIFT_SWIM       && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_RAIN)
            speed *= 2;
        else if (ability == ABILITY_CHLOROPHYLL && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_SUN)
            speed *= 2;
        else if (ability == ABILITY_SAND_RUSH   && gBattleWeather & B_WEATHER_SANDSTORM)
            speed *= 2;
        else if (ability == ABILITY_SLUSH_RUSH  && (gBattleWeather & B_WEATHER_SNOW))
            speed *= 2;
        else if (ability == ABILITY_FORECAST && (gBattleWeather & (B_WEATHER_HAIL | B_WEATHER_SNOW | B_WEATHER_RAIN | B_WEATHER_SUN)))
            speed = (speed * 150) / 100;
    }

    // other abilities
    if (ability == ABILITY_QUICK_FEET && battleMon.status1 & STATUS1_ANY)
        speed = (speed * 150) / 100;
    else if (ability == ABILITY_SURGE_SURFER && gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN)
        speed *= 2;
    else if (ability == ABILITY_SLOW_START)
        speed /= 2;

    // item effects
    if (holdEffect == HOLD_EFFECT_MACHO_BRACE || holdEffect == HOLD_EFFECT_POWER_ITEM)
        speed /= 2;
    else if (holdEffect == HOLD_EFFECT_IRON_BALL)
        speed /= 2;
    else if (holdEffect == HOLD_EFFECT_CHOICE_SCARF)
        speed = (speed * 150) / 100;
    else if (holdEffect == HOLD_EFFECT_QUICK_POWDER && battleMon.species)
        speed *= 2;

    // various effects
    if (gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_TAILWIND)
        speed *= 2;

    // paralysis drop
    if (battleMon.status1 & STATUS1_PARALYSIS && ability != ABILITY_QUICK_FEET)
        speed /= B_PARALYSIS_SPEED >= GEN_7 ? 2 : 4;

    if (gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_SWAMP)
        speed /= 4;

    FreeRestoreBattleMons(savedBattleMons);
    return speed;
}

// If there are two(or more) mons to choose from, always choose one that has baton pass
// as most often it can't do much on its own.
static u32 GetBestMonBatonPass(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, int aliveCount, u32 battler, u32 opposingBattler)
{
    int i, j, bits = 0;

    for (i = firstId; i < lastId; i++)
    {
        if (invalidMons & (1u << i))
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            if (GetMonData(&party[i], MON_DATA_MOVE1 + j, NULL) == MOVE_BATON_PASS)
            {
                bits |= 1u << i;
                break;
            }
        }
    }

    if ((aliveCount == 2 || (aliveCount > 2 && Random() % 3 == 0)) && bits)
    {
        do
        {
            i = (Random() % (lastId - firstId)) + firstId;
        } while (!(bits & (1 << i)));
        return i;
    }

    return PARTY_SIZE;
}

static u32 GetBestMonTypeMatchup(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 battler, u32 opposingBattler)
{
    int i, bits = 0;
    while (bits != 0x3F) // All mons were checked.
    {
        u32 bestResist = UQ_4_12(2.0);
        int bestMonId = PARTY_SIZE;
        // Find the mon whose type is the most suitable defensively.
        for (i = firstId; i < lastId; i++)
        {
            if (!((1u << i) & invalidMons) && !((1u << i) & bits))
            {
                InitializeSwitchinCandidate(&party[i]);

                u32 typeEffectiveness = GetBattleMonTypeMatchup(gBattleMons[opposingBattler], gAiLogicData->switchinCandidate.battleMon);
                if (typeEffectiveness < bestResist)
                {
                    bestResist = typeEffectiveness;
                    bestMonId = i;
                }
            }
        }

        // Ok, we know the mon has the right typing but does it have at least one super effective move?
        if (bestMonId != PARTY_SIZE)
        {
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                u32 move = GetMonData(&party[bestMonId], MON_DATA_MOVE1 + i);
                if (move != MOVE_NONE && AI_GetMoveEffectiveness(move, battler, opposingBattler) >= UQ_4_12(2.0))
                    break;
            }

            if (i != MAX_MON_MOVES)
                return bestMonId; // Has both the typing and at least one super effective move.

            bits |= (1u << bestMonId); // Sorry buddy, we want something better.
        }
        else
        {
            bits = 0x3F; // No viable mon to switch.
        }
    }

    return PARTY_SIZE;
}

static u32 GetBestMonDmg(struct Pokemon *party, int firstId, int lastId, u8 invalidMons, u32 battler, u32 opposingBattler)
{
    int i, j;
    int dmg, bestDmg = 0;
    int bestMonId = PARTY_SIZE;
    u32 aiMove;
    uq4_12_t effectiveness = UQ_4_12(1.0);

    // If we couldn't find the best mon in terms of typing, find the one that deals most damage.
    for (i = firstId; i < lastId; i++)
    {
        if ((1 << (i)) & invalidMons)
            continue;
        InitializeSwitchinCandidate(&party[i]);
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            aiMove = gAiLogicData->switchinCandidate.battleMon.moves[j];
            if (aiMove != MOVE_NONE && !IsBattleMoveStatus(aiMove))
            {
                aiMove = GetMonData(&party[i], MON_DATA_MOVE1 + j);
                dmg = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, gAiLogicData->switchinCandidate.battleMon, &effectiveness, AI_ATTACKING, FALSE, FALSE, FALSE);
                if (bestDmg < dmg)
                {
                    bestDmg = dmg;
                    bestMonId = i;
                }
            }
        }
    }

    return bestMonId;
}

static u32 GetFirstNonInvalidMon(u32 firstId, u32 lastId, u32 invalidMons)
{
    u32 chosenMonId = PARTY_SIZE;
    for (u32 i = (lastId-1); i > firstId; i--)
    {
        if (!((1 << i) & invalidMons))
        {
            // first non invalid mon found
            chosenMonId = i;
            break;
        }
    }
    return chosenMonId;
}

bool32 IsMonGrounded(enum HoldEffect heldItemEffect, enum Ability ability, enum Type type1, enum Type type2)
{
    // List that makes mon not grounded
    if (type1 == TYPE_FLYING || type2 == TYPE_FLYING || ability == ABILITY_LEVITATE
         || (heldItemEffect == HOLD_EFFECT_AIR_BALLOON && !(ability == ABILITY_KLUTZ || (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM))))
    {
        // List that overrides being off the ground
        if ((heldItemEffect == HOLD_EFFECT_IRON_BALL && !(ability == ABILITY_KLUTZ || (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM))) || (gFieldStatuses & STATUS_FIELD_GRAVITY) || (gFieldStatuses & STATUS_FIELD_MAGIC_ROOM))
            return TRUE;
        else
            return FALSE;
    }
    else
        return TRUE;
}

// Gets hazard damage
static u32 GetSwitchinHazardsDamage(u32 battler, struct BattlePokemon *battleMon)
{
    enum Type defType1 = battleMon->types[0], defType2 = battleMon->types[1];
    u8 tSpikesLayers;
    u16 heldItemEffect = GetItemHoldEffect(battleMon->item);
    u32 maxHP = battleMon->maxHP;
    enum Ability ability = battleMon->ability, status = battleMon->status1;
    u32 spikesDamage = 0, tSpikesDamage = 0, hazardDamage = 0;
    u32 side = GetBattlerSide(battler);

    // Check ways mon might avoid all hazards
    if (ability != ABILITY_MAGIC_GUARD || (heldItemEffect == HOLD_EFFECT_HEAVY_DUTY_BOOTS &&
        !((gFieldStatuses & STATUS_FIELD_MAGIC_ROOM) || ability == ABILITY_KLUTZ)))
    {
        // Stealth Rock
        if (IsHazardOnSide(side, HAZARDS_STEALTH_ROCK) && heldItemEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS)
            hazardDamage += GetStealthHazardDamageByTypesAndHP(TYPE_SIDE_HAZARD_POINTED_STONES, defType1, defType2, battleMon->maxHP);
        // G-Max Steelsurge
        if (IsHazardOnSide(side, HAZARDS_STEELSURGE) && heldItemEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS)
            hazardDamage += GetStealthHazardDamageByTypesAndHP(TYPE_SIDE_HAZARD_SHARP_STEEL, defType1, defType2, battleMon->maxHP);
        // Spikes
        if (IsHazardOnSide(side, HAZARDS_TOXIC_SPIKES) && IsMonGrounded(heldItemEffect, ability, defType1, defType2))
        {
            spikesDamage = maxHP / ((5 - gSideTimers[GetBattlerSide(battler)].spikesAmount) * 2);
            if (spikesDamage == 0)
                spikesDamage = 1;
            hazardDamage += spikesDamage;
        }

        if (IsHazardOnSide(side, HAZARDS_SPIKES) && (defType1 != TYPE_POISON && defType2 != TYPE_POISON
            && defType1 != TYPE_STEEL && defType2 != TYPE_STEEL
            && ability != ABILITY_IMMUNITY && ability != ABILITY_POISON_HEAL && ability != ABILITY_COMATOSE
            && status == 0
            && !(gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_SAFEGUARD)
            && !IsAbilityOnSide(battler, ABILITY_PASTEL_VEIL)
            && !IsBattlerTerrainAffected(battler, ability, gAiLogicData->holdEffects[battler], STATUS_FIELD_MISTY_TERRAIN)
            && !IsAbilityStatusProtected(battler, ability)
            && heldItemEffect != HOLD_EFFECT_CURE_PSN && heldItemEffect != HOLD_EFFECT_CURE_STATUS
            && IsMonGrounded(heldItemEffect, ability, defType1, defType2)))
        {
            tSpikesLayers = gSideTimers[GetBattlerSide(battler)].toxicSpikesAmount;
            if (tSpikesLayers == 1)
            {
                tSpikesDamage = maxHP / 8;
                if (tSpikesDamage == 0)
                    tSpikesDamage = 1;
            }
            else if (tSpikesLayers >= 2)
            {
                tSpikesDamage = maxHP / 16;
                if (tSpikesDamage == 0)
                    tSpikesDamage = 1;
            }
            hazardDamage += tSpikesDamage;
        }
    }
    return hazardDamage;
}

// Gets damage / healing from weather
static s32 GetSwitchinWeatherImpact(void)
{
    s32 weatherImpact = 0, maxHP = gAiLogicData->switchinCandidate.battleMon.maxHP;
    enum Ability ability = gAiLogicData->switchinCandidate.battleMon.ability;
    enum HoldEffect holdEffect = GetItemHoldEffect(gAiLogicData->switchinCandidate.battleMon.item);

    if (HasWeatherEffect())
    {
        // Damage
        if (holdEffect != HOLD_EFFECT_SAFETY_GOGGLES && ability != ABILITY_MAGIC_GUARD && ability != ABILITY_OVERCOAT)
        {
            if ((gBattleWeather & B_WEATHER_HAIL)
             && (gAiLogicData->switchinCandidate.battleMon.types[0] != TYPE_ICE || gAiLogicData->switchinCandidate.battleMon.types[1] != TYPE_ICE)
             && ability != ABILITY_SNOW_CLOAK && ability != ABILITY_ICE_BODY)
            {
                weatherImpact = maxHP / 16;
                if (weatherImpact == 0)
                    weatherImpact = 1;
            }
            else if ((gBattleWeather & B_WEATHER_SANDSTORM)
                && (gAiLogicData->switchinCandidate.battleMon.types[0] != TYPE_GROUND && gAiLogicData->switchinCandidate.battleMon.types[1] != TYPE_GROUND
                && gAiLogicData->switchinCandidate.battleMon.types[0] != TYPE_ROCK && gAiLogicData->switchinCandidate.battleMon.types[1] != TYPE_ROCK
                && gAiLogicData->switchinCandidate.battleMon.types[0] != TYPE_STEEL && gAiLogicData->switchinCandidate.battleMon.types[1] != TYPE_STEEL
                && ability != ABILITY_SAND_VEIL && ability != ABILITY_SAND_RUSH && ability != ABILITY_SAND_FORCE))
            {
                weatherImpact = maxHP / 16;
                if (weatherImpact == 0)
                    weatherImpact = 1;
            }
        }
        if ((gBattleWeather & B_WEATHER_SUN) && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA
         && (ability == ABILITY_SOLAR_POWER || ability == ABILITY_DRY_SKIN))
        {
            weatherImpact = maxHP / 8;
            if (weatherImpact == 0)
                weatherImpact = 1;
        }

        // Healing
        if (gBattleWeather & B_WEATHER_RAIN && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA)
        {
            if (ability == ABILITY_DRY_SKIN)
            {
                weatherImpact = -(maxHP / 8);
                if (weatherImpact == 0)
                    weatherImpact = -1;
            }
            else if (ability == ABILITY_RAIN_DISH)
            {
                weatherImpact = -(maxHP / 16);
                if (weatherImpact == 0)
                    weatherImpact = -1;
            }
        }
        if (((gBattleWeather & B_WEATHER_HAIL) || (gBattleWeather & B_WEATHER_SNOW)) && ability == ABILITY_ICE_BODY)
        {
            weatherImpact = -(maxHP / 16);
            if (weatherImpact == 0)
                weatherImpact = -1;
        }
    }
    return weatherImpact;
}

// Gets one turn of recurring healing
static u32 GetSwitchinRecurringHealing(void)
{
    u32 recurringHealing = 0, maxHP = gAiLogicData->switchinCandidate.battleMon.maxHP;
    enum Ability ability = gAiLogicData->switchinCandidate.battleMon.ability;
    enum HoldEffect holdEffect = GetItemHoldEffect(gAiLogicData->switchinCandidate.battleMon.item);

    // Items
    if (ability != ABILITY_KLUTZ)
    {
        if (holdEffect == HOLD_EFFECT_BLACK_SLUDGE && (gAiLogicData->switchinCandidate.battleMon.types[0] == TYPE_POISON || gAiLogicData->switchinCandidate.battleMon.types[1] == TYPE_POISON))
        {
            recurringHealing = maxHP / 16;
            if (recurringHealing == 0)
                recurringHealing = 1;
        }
        else if (holdEffect == HOLD_EFFECT_LEFTOVERS)
        {
            recurringHealing = maxHP / 16;
            if (recurringHealing == 0)
                recurringHealing = 1;
        }
    } // Intentionally omitting Shell Bell for its inconsistency

    // Abilities
    if (ability == ABILITY_POISON_HEAL && (gAiLogicData->switchinCandidate.battleMon.status1 & STATUS1_POISON))
    {
        u32 healing = maxHP / 8;
        if (healing == 0)
            healing = 1;
        recurringHealing += healing;
    }
    return recurringHealing;
}

// Gets one turn of recurring damage
static u32 GetSwitchinRecurringDamage(void)
{
    u32 passiveDamage = 0, maxHP = gAiLogicData->switchinCandidate.battleMon.maxHP;
    enum Ability ability = gAiLogicData->switchinCandidate.battleMon.ability;
    enum HoldEffect holdEffect = GetItemHoldEffect(gAiLogicData->switchinCandidate.battleMon.item);

    // Items
    if (ability != ABILITY_MAGIC_GUARD && ability != ABILITY_KLUTZ)
    {
        if (holdEffect == HOLD_EFFECT_BLACK_SLUDGE && gAiLogicData->switchinCandidate.battleMon.types[0] != TYPE_POISON && gAiLogicData->switchinCandidate.battleMon.types[1] != TYPE_POISON)
        {
            passiveDamage = maxHP / 8;
            if (passiveDamage == 0)
                passiveDamage = 1;
        }
        else if (holdEffect == HOLD_EFFECT_LIFE_ORB && ability != ABILITY_SHEER_FORCE)
        {
            passiveDamage = maxHP / 10;
            if (passiveDamage == 0)
                passiveDamage = 1;
        }
        else if (holdEffect == HOLD_EFFECT_STICKY_BARB)
        {
            passiveDamage = maxHP / 8;
            if (passiveDamage == 0)
                passiveDamage = 1;
        }
    }
    return passiveDamage;
}

// Gets one turn of status damage
static u32 GetSwitchinStatusDamage(u32 battler)
{
    enum Type defType1 = gAiLogicData->switchinCandidate.battleMon.types[0], defType2 = gAiLogicData->switchinCandidate.battleMon.types[1];
    u8 tSpikesLayers = gSideTimers[GetBattlerSide(battler)].toxicSpikesAmount;
    u16 heldItemEffect = GetItemHoldEffect(gAiLogicData->switchinCandidate.battleMon.item);
    u32 status = gAiLogicData->switchinCandidate.battleMon.status1;
    enum Ability ability = gAiLogicData->switchinCandidate.battleMon.ability, maxHP = gAiLogicData->switchinCandidate.battleMon.maxHP;
    u32 statusDamage = 0;

    // Status condition damage
    if ((status != 0) && gAiLogicData->switchinCandidate.battleMon.ability != ABILITY_MAGIC_GUARD)
    {
        if (status & STATUS1_BURN)
        {
            if (B_BURN_DAMAGE >= GEN_7)
                statusDamage = maxHP / 16;
            else
                statusDamage = maxHP / 8;
            if (ability == ABILITY_HEATPROOF)
                statusDamage = statusDamage / 2;
            if (statusDamage == 0)
                statusDamage = 1;
        }
        else if (status & STATUS1_FROSTBITE)
        {
            if (B_BURN_DAMAGE >= GEN_7)
                statusDamage = maxHP / 16;
            else
                statusDamage = maxHP / 8;
            if (statusDamage == 0)
                statusDamage = 1;
        }
        else if ((status & STATUS1_POISON) && ability != ABILITY_POISON_HEAL)
        {
            statusDamage = maxHP / 8;
            if (statusDamage == 0)
                statusDamage = 1;
        }
        else if ((status & STATUS1_TOXIC_POISON) && ability != ABILITY_POISON_HEAL)
        {
            if ((status & STATUS1_TOXIC_COUNTER) != STATUS1_TOXIC_TURN(15)) // not 16 turns
                gAiLogicData->switchinCandidate.battleMon.status1 += STATUS1_TOXIC_TURN(1);
            statusDamage = maxHP / 16;
            if (statusDamage == 0)
                statusDamage = 1;
            statusDamage *= gAiLogicData->switchinCandidate.battleMon.status1 & STATUS1_TOXIC_COUNTER >> 8;
        }
    }

    // Apply hypothetical poisoning from Toxic Spikes, which means the first turn of damage already added in GetSwitchinHazardsDamage
    // Do this last to skip one iteration of Poison / Toxic damage, and start counting Toxic damage one turn later.
    if (tSpikesLayers != 0 && (defType1 != TYPE_POISON && defType2 != TYPE_POISON
        && ability != ABILITY_IMMUNITY && ability != ABILITY_POISON_HEAL
        && status == 0
        && !(heldItemEffect == HOLD_EFFECT_HEAVY_DUTY_BOOTS
            && (((gFieldStatuses & STATUS_FIELD_MAGIC_ROOM) || ability == ABILITY_KLUTZ)))
        && heldItemEffect != HOLD_EFFECT_CURE_PSN && heldItemEffect != HOLD_EFFECT_CURE_STATUS
        && IsMonGrounded(heldItemEffect, ability, defType1, defType2)))
    {
        if (tSpikesLayers == 1)
        {
            gAiLogicData->switchinCandidate.battleMon.status1 = STATUS1_POISON; // Assign "hypothetical" status to the switchin candidate so we can get the damage it would take from TSpikes
            gAiLogicData->switchinCandidate.hypotheticalStatus = TRUE;
        }
        if (tSpikesLayers == 2)
        {
            gAiLogicData->switchinCandidate.battleMon.status1 = STATUS1_TOXIC_POISON; // Assign "hypothetical" status to the switchin candidate so we can get the damage it would take from TSpikes
            gAiLogicData->switchinCandidate.battleMon.status1 += STATUS1_TOXIC_TURN(1);
            gAiLogicData->switchinCandidate.hypotheticalStatus = TRUE;
        }
    }
    return statusDamage;
}

// Gets number of hits to KO factoring in hazards, healing held items, status, and weather
static u32 GetSwitchinHitsToKO(s32 damageTaken, u32 battler)
{
    u32 startingHP = gAiLogicData->switchinCandidate.battleMon.hp - GetSwitchinHazardsDamage(battler, &gAiLogicData->switchinCandidate.battleMon);
    s32 weatherImpact = GetSwitchinWeatherImpact(); // Signed to handle both damage and healing in the same value
    u32 recurringDamage = GetSwitchinRecurringDamage();
    u32 recurringHealing = GetSwitchinRecurringHealing();
    u32 statusDamage = GetSwitchinStatusDamage(battler);
    u32 hitsToKO = 0;
    u16 maxHP = gAiLogicData->switchinCandidate.battleMon.maxHP, item = gAiLogicData->switchinCandidate.battleMon.item, heldItemEffect = GetItemHoldEffect(item);
    u8 weatherDuration = gWishFutureKnock.weatherDuration, holdEffectParam = GetItemHoldEffectParam(item);
    u32 opposingBattler = GetOppositeBattler(battler);
    enum Ability opposingAbility = gAiLogicData->abilities[opposingBattler], ability = gAiLogicData->switchinCandidate.battleMon.ability;
    bool32 usedSingleUseHealingItem = FALSE, opponentCanBreakMold = IsMoldBreakerTypeAbility(opposingBattler, opposingAbility);
    s32 currentHP = startingHP, singleUseItemHeal = 0;

    // No damage being dealt
    if ((damageTaken + statusDamage + recurringDamage <= recurringHealing) || damageTaken + statusDamage + recurringDamage == 0)
        return hitsToKO;

    // Mon fainted to hazards
    if (startingHP == 0)
        return 1;

    // Find hits to KO
    while (currentHP > 0)
    {
        // Remove weather damage when it would run out
        if (weatherImpact != 0 && weatherDuration == 0)
            weatherImpact = 0;

        // Take attack damage for the turn
        currentHP = currentHP - damageTaken;

        // One shot prevention effects
        if (damageTaken >= maxHP && startingHP == maxHP && (heldItemEffect == HOLD_EFFECT_FOCUS_SASH || (!opponentCanBreakMold && B_STURDY >= GEN_5 && ability == ABILITY_STURDY)) && hitsToKO < 1)
            currentHP = 1;

        // If mon is still alive, apply weather impact first, as it might KO the mon before it can heal with its item (order is weather -> item -> status)
        if (currentHP > 0)
            currentHP = currentHP - weatherImpact;

        // Check if we're at a single use healing item threshold
        if (currentHP > 0 && gAiLogicData->switchinCandidate.battleMon.ability != ABILITY_KLUTZ && usedSingleUseHealingItem == FALSE
         && !(opposingAbility == ABILITY_UNNERVE && GetItemPocket(item) == POCKET_BERRIES))
        {
            switch (heldItemEffect)
            {
            case HOLD_EFFECT_RESTORE_HP:
                if (currentHP < maxHP / 2)
                    singleUseItemHeal = holdEffectParam;
                break;
            case HOLD_EFFECT_RESTORE_PCT_HP:
                if (currentHP < maxHP / 2)
                {
                    singleUseItemHeal = maxHP / holdEffectParam;
                    if (singleUseItemHeal == 0)
                        singleUseItemHeal = 1;
                }
                break;
            case HOLD_EFFECT_CONFUSE_SPICY:
            case HOLD_EFFECT_CONFUSE_DRY:
            case HOLD_EFFECT_CONFUSE_SWEET:
            case HOLD_EFFECT_CONFUSE_BITTER:
            case HOLD_EFFECT_CONFUSE_SOUR:
                if (currentHP < maxHP / CONFUSE_BERRY_HP_FRACTION)
                {
                    singleUseItemHeal = maxHP / holdEffectParam;
                    if (singleUseItemHeal == 0)
                        singleUseItemHeal = 1;
                }
                break;
            }

            // If we used one, apply it without overcapping our maxHP
            if (singleUseItemHeal > 0)
            {
                if ((currentHP + singleUseItemHeal) > maxHP)
                    currentHP = maxHP;
                else
                    currentHP = currentHP + singleUseItemHeal;
                usedSingleUseHealingItem = TRUE;
            }
        }

        // Healing from items occurs before status so we can do the rest in one line
        if (currentHP > 0)
            currentHP = currentHP + recurringHealing - recurringDamage - statusDamage;

        // Recalculate toxic damage if needed
        if (gAiLogicData->switchinCandidate.battleMon.status1 & STATUS1_TOXIC_POISON)
            statusDamage = GetSwitchinStatusDamage(battler);

        // Reduce weather duration
        if (weatherDuration != 0)
            weatherDuration--;

        hitsToKO++;
    }

    // Disguise will always add an extra hit to KO
    if (!opponentCanBreakMold && gAiLogicData->switchinCandidate.battleMon.species == SPECIES_MIMIKYU_DISGUISED)
        hitsToKO++;

    // If mon had a hypothetical status from TSpikes, clear it
    if (gAiLogicData->switchinCandidate.hypotheticalStatus == TRUE)
    {
        gAiLogicData->switchinCandidate.battleMon.status1 = 0;
        gAiLogicData->switchinCandidate.hypotheticalStatus = FALSE;
    }
    return hitsToKO;
}

static u32 GetBattleMonTypeMatchup(struct BattlePokemon opposingBattleMon, struct BattlePokemon battleMon)
{
    // Check type matchup
    u32 typeEffectiveness1 = UQ_4_12(1.0), typeEffectiveness2 = UQ_4_12(1.0);
    enum Type atkType1 = opposingBattleMon.types[0], atkType2 = opposingBattleMon.types[1];
    enum Type defType1 = battleMon.types[0], defType2 = battleMon.types[1];

    // Add each independent defensive type matchup together
    typeEffectiveness1 = uq4_12_multiply(typeEffectiveness1, (GetTypeModifier(atkType1, defType1)));
    if (defType2 != defType1)
        typeEffectiveness1 = uq4_12_multiply(typeEffectiveness1, (GetTypeModifier(atkType1, defType2)));
    if (typeEffectiveness1 == 0) // Immunity
        typeEffectiveness1 = UQ_4_12(0.1);

    if (atkType2 != atkType1)
    {
        typeEffectiveness2 = uq4_12_multiply(typeEffectiveness2, (GetTypeModifier(atkType2, defType1)));
        if (defType2 != defType1)
            typeEffectiveness2 = uq4_12_multiply(typeEffectiveness2, (GetTypeModifier(atkType2, defType2)));
        if (typeEffectiveness2 == 0) // Immunity
            typeEffectiveness2 = UQ_4_12(0.1);
    }
    else
    {
        typeEffectiveness2 = typeEffectiveness1;
    }

    return typeEffectiveness1 + typeEffectiveness2;
}

bool32 IsPartyMonGrounded(struct BattlePokemon battleMon, u32 battler, s32 holdEffect)
{

    if (holdEffect == HOLD_EFFECT_IRON_BALL)
        return TRUE;
    else if (gFieldStatuses & STATUS_FIELD_GRAVITY)
        return TRUE;
    else if (holdEffect == HOLD_EFFECT_AIR_BALLOON)
        return FALSE;
    else if (battleMon.ability == ABILITY_LEVITATE)
        return FALSE;
    else if (battleMon.types[0] == TYPE_FLYING)
        return FALSE;
    else if (battleMon.types[1] == TYPE_FLYING)
        return FALSE;
    else
        return TRUE;
}

s8 GetPartyMovePriority(struct BattlePokemon battleMon, u16 move, u16 ability)
{
    s8 priority;

    priority = gMovesInfo[move].priority;

    if (ability == ABILITY_GALE_WINGS
        && (B_GALE_WINGS < GEN_7 || battleMon.hp == battleMon.maxHP)
        && gMovesInfo[move].type == TYPE_FLYING)
    {
        priority++;
    }
    else if (ability == ABILITY_PRANKSTER && IsBattleMoveStatus(move))
    {
        priority++;
    }
    else if (ability == ABILITY_RUN_AWAY && (gMovesInfo[move].effect == EFFECT_HIT_ESCAPE || gMovesInfo[move].effect == EFFECT_PARTING_SHOT))
    {
        priority++;
    }
    else if (gMovesInfo[move].effect == EFFECT_GRASSY_GLIDE && gFieldStatuses & STATUS_FIELD_GRASSY_TERRAIN/* && IsBattlerGrounded(battler)*/)
    {
        priority++;
    }
    else if (ability == ABILITY_TRIAGE && IsHealingMove(move))
        priority += 3;

    return priority;
}

u32 GetMonSwitchScore(struct BattlePokemon battleMon, u32 battler, u32 opposingBattler, bool32 switchAfterMonKOd)
{
    bool32 slowKilled = FALSE;
    bool32 aiIsFaster = FALSE;
    u32 aiMove = 0, playerMove = 0, hitsToKOAI, hitsToKOPlayer;
    s32 playerAbility = gBattleMons[opposingBattler].ability;
    s32 playerHoldEffect = GetItemHoldEffect(gBattleMons[opposingBattler].item);
    s32 aiMonAbility = battleMon.ability;
    s32 aiMonHoldEffect = GetItemHoldEffect(battleMon.item);
    u32 playerMonSpeed = GetBattlerTotalSpeedStat(opposingBattler, playerAbility, playerHoldEffect);
    u32 aiMonSpeed = GetSwitchInSpeedStatArgs(battleMon, battler, aiMonAbility, aiMonHoldEffect);
    s32 aiMovePriority = 0, playerMovePriority = 0, maxDamageDealt = 0, damageDealt = 0;
    u8 i = 0, j = 0;
    u32 bestPlayerMove = 0, bestAIMove = 0;
    u32 bestHitsToKOAI = INT_MAX, bestHitsToKOPlayer = INT_MAX;
    s32 highestDmgtoSwitchIn = 0;
    bool32 takesOverAThirdOnSwitch = FALSE;
    u32 hazardDamage = 0;
    u16 calcHP = battleMon.hp;
    s32 bestPlayerDmg = 0;
    s32 bestAIDmg = 0;
    bool32 ignoreItem = FALSE;
    bool32 ignoreAbility = FALSE;
    uq4_12_t effectiveness = UQ_4_12(1.0);

    //always returns 10 if species is ditto
    if(battleMon.species == SPECIES_DITTO && switchAfterMonKOd){
        return SCORE_SPECIAL_CASE;
    }

    hazardDamage = GetSwitchinHazardsDamage(battler, &battleMon);

    //gets highest damage player could deal to switch in for mid-battle switches
    if(!switchAfterMonKOd){
        //adds hazard damage to highest damage on switchin and tests whether or not ai mon could take over a third on the switch
        highestDmgtoSwitchIn = GetMaxDamagePlayerCouldDealToSwitchin(battler, opposingBattler, battleMon);
        if(highestDmgtoSwitchIn + hazardDamage >= battleMon.hp){
            return SCORE_SLOWER_AND_KOD;
        } else if ((highestDmgtoSwitchIn + hazardDamage)*3 >= battleMon.hp){
            takesOverAThirdOnSwitch = TRUE;
        }

        //if can take direct damage on switch, ignore air balloon
        calcHP = (battleMon.hp - highestDmgtoSwitchIn);
        if(calcHP < battleMon.hp && (aiMonHoldEffect == HOLD_EFFECT_AIR_BALLOON)){
            aiMonHoldEffect == HOLD_EFFECT_NONE;
            ignoreItem = TRUE;
        }
    }

    //subtracts hazard damage from hp arg, if hp is 0 pokemon will get score of 0
    calcHP -= hazardDamage;
    if(calcHP == 0){
        return SCORE_SLOWER_AND_KOD;
    }

    //checks sticky web and applies prospective speed drop
    if(IsHazardOnSide(GetBattlerSide(battler), HAZARDS_STICKY_WEB) && aiMonHoldEffect != HOLD_EFFECT_WHITE_HERB
        && aiMonHoldEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS && aiMonHoldEffect != HOLD_EFFECT_CLEAR_AMULET && IsPartyMonGrounded(battleMon, battler, aiMonHoldEffect)
        && aiMonAbility != ABILITY_CLEAR_BODY && aiMonAbility != ABILITY_WHITE_SMOKE && aiMonAbility != ABILITY_FULL_METAL_BODY
        && !(gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_MIST)){
        aiMonSpeed *= 2;
        aiMonSpeed /= 3;
    }

    //ignore multiscale if switch in candidate takes damage on switch from player or hazards
    if(calcHP < battleMon.hp && aiMonAbility == ABILITY_MULTISCALE){
        ignoreAbility = TRUE;
    }

    //ignore sturdy if switch in candidate takes damage on switch from player or hazards
    if(calcHP < battleMon.hp && aiMonAbility == ABILITY_STURDY){
        aiMonAbility ==  ABILITY_NONE;
        ignoreAbility = TRUE;
    }

    //ignore focus sash if switch in candidate takes damage on switch from player or hazards
    if(calcHP < battleMon.hp && aiMonHoldEffect == HOLD_EFFECT_FOCUS_SASH){
        ignoreItem = TRUE;
        aiMonHoldEffect == HOLD_EFFECT_NONE;
    }

    // Get best move for player to use on switch in candidate
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        playerMovePriority = GetBattleMovePriority(opposingBattler, playerAbility, playerMove);

        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && gMovesInfo[playerMove].effect != EFFECT_EXPLOSION && gMovesInfo[playerMove].effect != EFFECT_MISTY_EXPLOSION)
        {
            
            damageDealt = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, &effectiveness, AI_DEFENDING, ignoreItem, ignoreAbility, FALSE);
            if(CalcPartyMonTypeEffectivenessMultiplier(playerMove, battleMon.species, aiMonAbility) == UQ_4_12(0.0) && !IsMoldBreakerTypeAbility(battler, playerAbility)){
                damageDealt = 0;
            }
            hitsToKOAI = GetNoOfHitsToKO(damageDealt, calcHP);

            //continues if move does 0 damage
            if(damageDealt == 0){
                continue;
            }

            //sets hits to 2 if would ohko but blocked by sash or sturdy
            if(hitsToKOAI == 1 && PartyMonHasInTactFocusSashSturdy(battler, opposingBattler, playerMove, aiMonHoldEffect, aiMonAbility, battleMon, TRUE)){
                hitsToKOAI++;
            }

            //look at only damage if moves dont kill, if moves do kill break ties with priority
            if(hitsToKOAI > 1){
                if(hitsToKOAI <= bestHitsToKOAI && damageDealt > bestPlayerDmg){
                    bestPlayerDmg = damageDealt;
                    bestHitsToKOAI = hitsToKOAI;
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                } else if (hitsToKOAI <= bestHitsToKOAI && damageDealt == bestPlayerDmg && playerMovePriority > GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove)){
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                }
            } else {
                if(hitsToKOAI < bestHitsToKOAI){
                    bestPlayerDmg = damageDealt;
                    bestHitsToKOAI = hitsToKOAI;
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                } else if (hitsToKOAI == bestHitsToKOAI && playerMovePriority > GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove)){
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                }
            }
        }
    }

    // Get best move for candidate to use on player
    for (j = 0; j < MAX_MON_MOVES; j++)
    {
        aiMove = battleMon.moves[j];
        aiMovePriority = GetPartyMovePriority(battleMon, aiMove, aiMonAbility);

        if (aiMove != MOVE_NONE && gMovesInfo[aiMove].power != 0 && gMovesInfo[aiMove].effect != EFFECT_EXPLOSION && gMovesInfo[aiMove].effect != EFFECT_MISTY_EXPLOSION)
        {
            damageDealt = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, battleMon, &effectiveness, AI_ATTACKING, FALSE, FALSE, FALSE);
            hitsToKOPlayer = GetNoOfHitsToKOBattlerDmg(damageDealt, opposingBattler);

            //continues if move does 0 damage
            if(damageDealt == 0){
                continue;
            }

            //sets hits to 2 if would ohko but blocked by sash or sturdy
            if(hitsToKOPlayer == 1 && PartyMonHasInTactFocusSashSturdy(opposingBattler, battler, aiMove, playerHoldEffect, playerAbility, battleMon, FALSE) && (gBattleMons[opposingBattler].hp == gBattleMons[opposingBattler].maxHP)){
                hitsToKOPlayer++;
            }

            if(hitsToKOPlayer > 1){
                if(hitsToKOPlayer <= bestHitsToKOPlayer && damageDealt > bestAIDmg){
                    bestAIDmg = damageDealt;
                    bestHitsToKOPlayer = hitsToKOPlayer;
                    bestAIMove = aiMove;
                }
            } else {
                if(hitsToKOPlayer < bestHitsToKOPlayer){
                    bestAIDmg = damageDealt;
                    bestHitsToKOPlayer = hitsToKOPlayer;
                    bestAIMove = aiMove;
                } else if (hitsToKOPlayer == bestHitsToKOPlayer && aiMovePriority > GetPartyMovePriority(battleMon, bestAIMove, aiMonAbility)){
                    bestAIMove = aiMove;
                }
                if(aiMove == MOVE_PURSUIT){
                    bestAIMove = aiMove;
                    break;
                }
            }
        }
    }

    //whether or not ai is faster
    if(GetPartyMovePriority(battleMon, bestAIMove, aiMonAbility) > GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove)){
        aiIsFaster = TRUE;
    } else if (GetBattleMovePriority(opposingBattler, playerAbility, bestPlayerMove) > GetPartyMovePriority(battleMon, bestAIMove, aiMonAbility)){
        aiIsFaster = FALSE;
    } else if (aiMonSpeed >= playerMonSpeed){
        //move prios are tied
        aiIsFaster = TRUE;
    }

    //reverse faster value if trick room on field
    if(gFieldStatuses & STATUS_FIELD_TRICK_ROOM){
        if(aiIsFaster){
            aiIsFaster = FALSE;
        } else {
            aiIsFaster = TRUE;
        }
    }

    //return min score if slower and KO'd, if is faster and KO'd there are still more checks to be done
    if(bestHitsToKOAI == 1)
    {
        if(aiIsFaster){
            slowKilled = TRUE;
        } else {
            return SCORE_SLOWER_AND_KOD;
        }
    }

    if(!switchAfterMonKOd){
        if (slowKilled && bestHitsToKOPlayer > 1)               return SCORE_FASTER_BUT_KOD;
        else if(takesOverAThirdOnSwitch == TRUE && !aiIsFaster) return SCORE_DEFAULT;
        else if(takesOverAThirdOnSwitch == TRUE)                return SCORE_FASTER;
    }

    //no need to check if player can fast kill wobb or wobb takes over a third, function would have already returned in that case
    if((battleMon.species == SPECIES_WOBBUFFET || battleMon.species == SPECIES_WYNAUT)){
        return SCORE_SPECIAL_CASE;
    }

    if(bestHitsToKOPlayer == 1)
    {
        if(aiIsFaster){
            if ((CanAbilityTrapOpponent(battleMon.ability, opposingBattler) && gBattleMons[opposingBattler].item != ITEM_SHED_SHELL) || bestAIMove == MOVE_PURSUIT)
                return SCORE_FAST_TRAPPING_KO;
            else 
                return SCORE_FAST_KO;
        } else {
            if ((CanAbilityTrapOpponent(battleMon.ability, opposingBattler) && gBattleMons[opposingBattler].item != ITEM_SHED_SHELL) || bestAIMove == MOVE_PURSUIT)
                return SCORE_SLOW_TRAPPING_KO;
            else 
                return SCORE_SLOW_KO;
        }
    }

    if(slowKilled)
        return SCORE_FASTER_BUT_KOD;

    if((bestHitsToKOPlayer <= bestHitsToKOAI) && aiIsFaster)
        return SCORE_FAST_THREATEN;

    if((bestHitsToKOPlayer < bestHitsToKOAI) && !aiIsFaster)
        return SCORE_SLOW_THREATEN;

    if(aiIsFaster)
        return SCORE_FASTER;

    return SCORE_DEFAULT;
}

static int GetRandomSwitchinWithBatonPass(int aliveCount, int bits, int firstId, int lastId, int currentMonId)
{
    // Breakout early if there aren't any Baton Pass mons to save computation time
    if (bits == 0)
        return PARTY_SIZE;

    // GetBestMonBatonPass randomly chooses between all mons that met Baton Pass check
    if ((aliveCount == 2 || (aliveCount > 2 && Random() % 3 == 0)) && bits)
    {
        do
        {
            return (Random() % (lastId - firstId)) + firstId;
        } while (!(bits & (1 << (currentMonId))));
    }

    // Catch any other cases (such as only one mon alive and it has Baton Pass)
    else
        return PARTY_SIZE;
}

static s32 GetMaxDamagePlayerCouldDealToSwitchin(u32 battler, u32 opposingBattler, struct BattlePokemon battleMon)
{
    int i = 0;
    u32 playerMove;
    u16 *playerMoves = GetMovesArray(opposingBattler);
    s32 damageTaken = 0, maxDamageTaken = 0;
    uq4_12_t effectiveness = UQ_4_12(1.0);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE && !IsBattleMoveStatus(playerMove) && GetMoveEffect(playerMove) != EFFECT_EXPLOSION && GetMoveEffect(playerMove) != EFFECT_MISTY_EXPLOSION)
        {
            damageTaken = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, &effectiveness, AI_DEFENDING, FALSE, FALSE, TRUE);
            if(CalcPartyMonTypeEffectivenessMultiplier(playerMove, battleMon.species, battleMon.ability) == UQ_4_12(0.0) && !IsMoldBreakerTypeAbility(opposingBattler, gBattleMons[opposingBattler].ability)){
                damageTaken = 0;
            }
            if (playerMove == gBattleStruct->choicedMove[opposingBattler]) // If player is choiced, only care about the choice locked move
            {
                damageTaken = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, &effectiveness, AI_DEFENDING, FALSE, FALSE, TRUE);
                if(CalcPartyMonTypeEffectivenessMultiplier(playerMove, battleMon.species, battleMon.ability) == UQ_4_12(0.0) && !IsMoldBreakerTypeAbility(opposingBattler, gBattleMons[opposingBattler].ability)){
                    damageTaken = 0;
                }
                return damageTaken;
            }
            if (damageTaken > maxDamageTaken)
            {
                maxDamageTaken = damageTaken;
            }
        }
    }
    return maxDamageTaken;
}

static s32 GetMaxPriorityDamagePlayerCouldDealToSwitchin(u32 battler, u32 opposingBattler, struct BattlePokemon battleMon, u32 *bestPlayerPriorityMove)
{
    int i = 0;
    u32 playerMove;
    u16 *playerMoves = GetMovesArray(opposingBattler);
    s32 damageTaken = 0, maxDamageTaken = 0;
    uq4_12_t effectiveness = UQ_4_12(1.0);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        // If player is choiced into a non-priority move, AI understands that it can't deal priority damage
        if (gBattleStruct->choicedMove[opposingBattler] !=MOVE_NONE && GetMovePriority(gBattleStruct->choicedMove[opposingBattler]) < 1)
            break;
        playerMove = SMART_SWITCHING_OMNISCIENT ? gBattleMons[opposingBattler].moves[i] : playerMoves[i];
        if (GetBattleMovePriority(opposingBattler, gAiLogicData->abilities[opposingBattler], playerMove) > 0
            && playerMove != MOVE_NONE && !IsBattleMoveStatus(playerMove) && GetMoveEffect(playerMove) != EFFECT_FOCUS_PUNCH && gBattleMons[opposingBattler].pp[i] > 0)
        {
            damageTaken = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, &effectiveness, AI_DEFENDING, FALSE, FALSE, TRUE);
            if (playerMove == gBattleStruct->choicedMove[opposingBattler]) // If player is choiced, only care about the choice locked move
            {
                *bestPlayerPriorityMove = playerMove;
                return damageTaken;
            }
            if (damageTaken > maxDamageTaken)
            {
                maxDamageTaken = damageTaken;
                *bestPlayerPriorityMove = playerMove;
            }
        }
    }
    return maxDamageTaken;
}

static s32 GetMaxDamageMovePlayerCouldUseOnSwitchin(u32 battler, u32 opposingBattler, struct BattlePokemon battleMon)
{
    int i = 0;
    u32 playerMove;
    u32 bestMove = MAX_MON_MOVES;
    s32 damageTaken = 0, maxDamageTaken = 0;
    uq4_12_t effectiveness = UQ_4_12(1.0);

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && gMovesInfo[playerMove].effect != EFFECT_EXPLOSION && gMovesInfo[playerMove].effect != EFFECT_MISTY_EXPLOSION)
        {
            damageTaken = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, &effectiveness, AI_DEFENDING, FALSE, FALSE, TRUE);
            //if (damageTaken >= battleMon.hp && PartyMonHasInTactFocusSashSturdy(battler, opposingBattler, playerMove, ItemId_GetHoldEffect(gBattleMons[battler].item), GetBattlerAbility(battler), battleMon, TRUE)){
            //    damageTaken = (battleMon.hp - 1);
            //}
            if(CalcPartyMonTypeEffectivenessMultiplier(playerMove, battleMon.species, battleMon.ability) == UQ_4_12(0.0) && !IsMoldBreakerTypeAbility(battler, gBattleMons[battler].ability)){
                damageTaken = 0;
            }
            else if (damageTaken > maxDamageTaken){
                maxDamageTaken = damageTaken;
                bestMove = playerMove;
            }
        }
    }
    return bestMove;
}

static bool32 CanAbilityTrapOpponent(enum Ability ability, u32 opponent)
{
    if ((B_GHOSTS_ESCAPE >= GEN_6 && IS_BATTLER_OF_TYPE(opponent, TYPE_GHOST)))
        return FALSE;
    else if (ability == ABILITY_SHADOW_TAG)
    {
        if (B_SHADOW_TAG_ESCAPE >= GEN_4 && gAiLogicData->abilities[opponent] == ABILITY_SHADOW_TAG) // Check if ability exists in species
            return FALSE;
        else
            return TRUE;
    }
    else if (ability == ABILITY_ARENA_TRAP && IsBattlerGrounded(opponent, gAiLogicData->abilities[opponent], gAiLogicData->holdEffects[opponent]))
        return TRUE;
    else if (ability == ABILITY_MAGNET_PULL && IS_BATTLER_OF_TYPE(opponent, TYPE_STEEL))
        return TRUE;
    else
        return FALSE;
}

static inline bool32 IsFreeSwitch(enum SwitchType switchType, u32 battlerSwitchingOut, u32 opposingBattler)
{
    bool32 movedSecond = GetBattlerTurnOrderNum(battlerSwitchingOut) > GetBattlerTurnOrderNum(opposingBattler) ? TRUE : FALSE;

    // Switch out effects
    if (!IsDoubleBattle()) // Not handling doubles' additional complexity
    {
        if (IsSwitchOutEffect(GetMoveEffect(gCurrentMove)) && movedSecond)
            return TRUE;
        if (gAiLogicData->ejectButtonSwitch)
            return TRUE;
        if (gAiLogicData->ejectPackSwitch)
        {
            enum Ability opposingAbility = GetBattlerAbilityIgnoreMoldBreaker(opposingBattler);
            // If faster, not a free switch; likely lowered own stats
            if (!movedSecond && opposingAbility != ABILITY_INTIMIDATE && opposingAbility != ABILITY_SUPERSWEET_SYRUP) // Intimidate triggers switches before turn starts
                return FALSE;
            // Otherwise, free switch
            return TRUE;
        }
    }

    // Post KO check has to be last because the GetMostSuitableMonToSwitchInto call in OpponentHandleChoosePokemon assumes a KO rather than a forced switch choice
    if (switchType == SWITCH_AFTER_KO)
        return TRUE;
    else
        return FALSE;
}

static inline bool32 CanSwitchinWin1v1(u32 hitsToKOAI, u32 hitsToKOPlayer, bool32 isSwitchinFirst, bool32 isFreeSwitch)
{
    // Player's best move deals 0 damage
    if (hitsToKOAI == 0 && hitsToKOPlayer > 0)
        return TRUE;

    // AI's best move deals 0 damage
    if (hitsToKOPlayer == 0 && hitsToKOAI > 0)
        return FALSE;

    // Neither mon can damage the other
    if (hitsToKOPlayer == 0 && hitsToKOAI == 0)
        return FALSE;

    // Free switch, need to outspeed or take 1 extra hit
    if (isFreeSwitch)
    {
        if (hitsToKOAI > hitsToKOPlayer || (hitsToKOAI == hitsToKOPlayer && isSwitchinFirst))
            return TRUE;
    }
    // Mid battle switch, need to take 1 or 2 extra hits depending on speed
    if (hitsToKOAI > hitsToKOPlayer + 1 || (hitsToKOAI == hitsToKOPlayer + 1 && isSwitchinFirst))
        return TRUE;
    return FALSE;
}

// This function splits switching behaviour depending on whether the switch is free.
// Everything runs in the same loop to minimize computation time. This makes it harder to read, but hopefully the comments can guide you!
static u32 GetBestMonIntegrated(struct Pokemon *party, int firstId, int lastId, u32 battler, u32 opposingBattler, u32 battlerIn1, u32 battlerIn2, enum SwitchType switchType)
{
    int revengeKillerId = PARTY_SIZE, slowRevengeKillerId = PARTY_SIZE, fastThreatenId = PARTY_SIZE, slowThreatenId = PARTY_SIZE, damageMonId = PARTY_SIZE, generic1v1MonId = PARTY_SIZE;
    int batonPassId = PARTY_SIZE, typeMatchupId = PARTY_SIZE, typeMatchupEffectiveId = PARTY_SIZE, defensiveMonId = PARTY_SIZE, aceMonId = PARTY_SIZE, trapperId = PARTY_SIZE;
    int i, j, aliveCount = 0, bits = 0, aceMonCount = 0;
    s32 defensiveMonHitKOThreshold = 3; // 3HKO threshold that candidate defensive mons must exceed
    s32 playerMonHP = gBattleMons[opposingBattler].hp, maxDamageDealt = 0, damageDealt = 0, monMaxDamage = 0;
    u32 aiMove, hitsToKOAI, hitsToKOPlayer, hitsToKOAIPriority, bestPlayerMove = MOVE_NONE, bestPlayerPriorityMove = MOVE_NONE, maxHitsToKO = 0;
    u32 bestResist = UQ_4_12(2.0), bestResistEffective = UQ_4_12(2.0), typeMatchup; // 2.0 is the default "Neutral" matchup from GetBattleMonTypeMatchup
    bool32 isFreeSwitch = IsFreeSwitch(switchType, battlerIn1, opposingBattler), isSwitchinFirst, isSwitchinFirstPriority, canSwitchinWin1v1;
    u32 invalidMons = 0;
    uq4_12_t effectiveness = UQ_4_12(1.0);

    // Iterate through mons
    for (i = firstId; i < lastId; i++)
    {
        // Check mon validity
        if (!IsValidForBattle(&party[i])
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
            || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
        {
            invalidMons |= 1u << i;
            continue;
        }
        // Save Ace Pokemon for last
        else if (IsAceMon(battler, i))
        {
            aceMonId = i;
            aceMonCount++;
            invalidMons |= 1u << i;
            continue;
        }
        else
            aliveCount++;

        InitializeSwitchinCandidate(&party[i]);

        // While not really invalid per se, not really wise to switch into this mon
        if (gAiLogicData->switchinCandidate.battleMon.ability == ABILITY_TRUANT && IsTruantMonVulnerable(battler, opposingBattler))
            continue;

        // Get max number of hits for player to KO AI mon and type matchup for defensive switching
        hitsToKOAI = GetSwitchinHitsToKO(GetMaxDamagePlayerCouldDealToSwitchin(battler, opposingBattler, gAiLogicData->switchinCandidate.battleMon), battler);
        hitsToKOAIPriority = GetSwitchinHitsToKO(GetMaxPriorityDamagePlayerCouldDealToSwitchin(battler, opposingBattler, gAiLogicData->switchinCandidate.battleMon, &bestPlayerPriorityMove), battler);
        typeMatchup = GetBattleMonTypeMatchup(gBattleMons[opposingBattler], gAiLogicData->switchinCandidate.battleMon);

        monMaxDamage = 0;

        // Check through current mon's moves
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            // Check that move has PP remaining before running calcs
            if (gAiLogicData->switchinCandidate.battleMon.pp[j] < 1)
                continue;

            aiMove = gAiLogicData->switchinCandidate.battleMon.moves[j];
            damageDealt = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, gAiLogicData->switchinCandidate.battleMon, &effectiveness, AI_ATTACKING, FALSE, FALSE, FALSE);
            hitsToKOPlayer = GetNoOfHitsToKOBattlerDmg(damageDealt, opposingBattler);

            // Offensive switchin decisions are based on which whether switchin moves first and whether it can win a 1v1
            isSwitchinFirst = AI_IsPartyMonFaster(battler, opposingBattler, gAiLogicData->switchinCandidate.battleMon, aiMove, bestPlayerMove, CONSIDER_PRIORITY);
            isSwitchinFirstPriority = AI_IsPartyMonFaster(battler, opposingBattler, gAiLogicData->switchinCandidate.battleMon, aiMove, bestPlayerPriorityMove, CONSIDER_PRIORITY);
            canSwitchinWin1v1 = CanSwitchinWin1v1(hitsToKOAI, hitsToKOPlayer, isSwitchinFirst, isFreeSwitch) && CanSwitchinWin1v1(hitsToKOAIPriority, hitsToKOPlayer, isSwitchinFirstPriority, isFreeSwitch); // AI must successfully 1v1 with and without priority to be considered a good option

            // Check for Baton Pass; hitsToKO requirements mean mon can boost and BP without dying whether it's slower or not
            if (GetMoveEffect(aiMove) == EFFECT_BATON_PASS)
            {
                if ((isSwitchinFirst && hitsToKOAI > 1) || hitsToKOAI > 2) // Need to take an extra hit if slower
                    bits |= 1u << i;
            }

            // Check that good type matchups get at least two turns and set best type matchup mon
            if (typeMatchup < bestResist)
            {
                if (canSwitchinWin1v1)
                {
                    bestResist = typeMatchup;
                    typeMatchupId = i;
                }
            }

            // Track max hits to KO and set defensive mon
            if (hitsToKOAI > maxHitsToKO && (canSwitchinWin1v1 || gAiThinkingStruct->aiFlags[battler] & AI_FLAG_STALL))
            {
                maxHitsToKO = hitsToKOAI;
                if (maxHitsToKO > defensiveMonHitKOThreshold)
                    defensiveMonId = i;
            }

            if (canSwitchinWin1v1)
                generic1v1MonId = i;

            // Check for mon with resistance and super effective move for best type matchup mon with effective move
            if (aiMove != MOVE_NONE && !IsBattleMoveStatus(aiMove))
            {
                if (typeMatchup < bestResistEffective)
                {
                    if (effectiveness >= UQ_4_12(2.0))
                    {
                        if (canSwitchinWin1v1)
                        {
                            bestResistEffective = typeMatchup;
                            typeMatchupEffectiveId = i;
                        }
                    }
                }

                // If a self destruction move doesn't OHKO, don't factor it into revenge killing
                enum BattleMoveEffects aiEffect = GetMoveEffect(aiMove);
                if ((aiEffect == EFFECT_EXPLOSION || aiEffect == EFFECT_MISTY_EXPLOSION)
                    && damageDealt < playerMonHP)
                    continue;

                if (damageDealt > monMaxDamage)
                    monMaxDamage = damageDealt;
                // Check that mon isn't one shot and set best damage mon
                if (damageDealt > maxDamageDealt)
                {
                    if ((isFreeSwitch && hitsToKOAI > 1) || hitsToKOAI > 2) // This is a "default", we have uniquely low standards
                    {
                        maxDamageDealt = damageDealt;
                        damageMonId = i;
                    }
                }

                // Check if current mon can revenge kill in some capacity
                // If AI mon can one shot
                if (damageDealt >= playerMonHP)
                {
                    if (canSwitchinWin1v1)
                    {
                        if (isSwitchinFirst)
                            revengeKillerId = i;
                        else
                            slowRevengeKillerId = i;
                    }
                }

                // If AI mon can two shot
                if (damageDealt >= (playerMonHP / 2 + playerMonHP % 2)) // Modulo to handle odd numbers in non-decimal division
                {
                    if (canSwitchinWin1v1)
                    {
                        if (isSwitchinFirst)
                            fastThreatenId = i;
                        else
                            slowThreatenId = i;
                    }
                }

                // If mon can trap
                if ((CanAbilityTrapOpponent(gAiLogicData->switchinCandidate.battleMon.ability, opposingBattler)
                    || (CanAbilityTrapOpponent(gAiLogicData->abilities[opposingBattler], opposingBattler) && gAiLogicData->switchinCandidate.battleMon.ability == ABILITY_TRACE))
                    && CountUsablePartyMons(opposingBattler) > 0
                    && canSwitchinWin1v1)
                    trapperId = i;
            }
        }
        if (monMaxDamage == 0)
            invalidMons |= 1u << i;
    }

    batonPassId = GetRandomSwitchinWithBatonPass(aliveCount, bits, firstId, lastId, i);

    // Different switching priorities depending on switching mid battle vs switching after a KO or slow switch
    if (isFreeSwitch)
    {
        // Return Trapper > Revenge Killer > Type Matchup > Baton Pass > Best Damage
        if (trapperId != PARTY_SIZE)                    return trapperId;
        else if (revengeKillerId != PARTY_SIZE)         return revengeKillerId;
        else if (slowRevengeKillerId != PARTY_SIZE)     return slowRevengeKillerId;
        else if (fastThreatenId != PARTY_SIZE)          return fastThreatenId;
        else if (slowThreatenId != PARTY_SIZE)          return slowThreatenId;
        else if (typeMatchupEffectiveId != PARTY_SIZE)  return typeMatchupEffectiveId;
        else if (typeMatchupId != PARTY_SIZE)           return typeMatchupId;
        else if (batonPassId != PARTY_SIZE)             return batonPassId;
        else if (generic1v1MonId != PARTY_SIZE)         return generic1v1MonId;
        else if (damageMonId != PARTY_SIZE)             return damageMonId;
    }
    else
    {
        // Return Trapper > Type Matchup > Best Defensive > Baton Pass
        if (trapperId != PARTY_SIZE)                    return trapperId;
        else if (typeMatchupEffectiveId != PARTY_SIZE)  return typeMatchupEffectiveId;
        else if (typeMatchupId != PARTY_SIZE)           return typeMatchupId;
        else if (defensiveMonId != PARTY_SIZE)          return defensiveMonId;
        else if (batonPassId != PARTY_SIZE)             return batonPassId;
        else if (generic1v1MonId != PARTY_SIZE)         return generic1v1MonId;
    }

    if (switchType == SWITCH_MID_BATTLE_OPTIONAL)
        return PARTY_SIZE;

    // Fallback
    u32 bestMonId = GetFirstNonInvalidMon(firstId, lastId, invalidMons);
    if (bestMonId != PARTY_SIZE)
        return bestMonId;

    // If ace mon is the last available Pokemon and U-Turn/Volt Switch or Eject Pack/Button was used - switch to the mon.
    if (aceMonId != PARTY_SIZE && CountUsablePartyMons(battler) <= aceMonCount)
        return aceMonId;

    return PARTY_SIZE;
}

static u32 GetNextMonInParty(struct Pokemon *party, int firstId, int lastId, u32 battlerIn1, u32 battlerIn2)
{
    u32 i;
    // Iterate through mons
    for (i = firstId; i < lastId; i++)
    {
        // Check mon validity
        if (!IsValidForBattle(&party[i])
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
            || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
        {
            continue;
        }
        return i;
    }
    return PARTY_SIZE;
}

struct MostSuitableCandidate GetMostSuitableMonToSwitchInto(u32 battler, bool32 switchAfterMonKOd)
{
    struct MostSuitableCandidate bestCandidate = {0};
    u32 opposingBattler = 0;
    u32 battlerIn1 = 0, battlerIn2 = 0;
    s32 firstId = 0;
    s32 lastId = 0; // + 1
    struct Pokemon *party;
    u32 numberOfBestMons = 1;
    u32 maxSwitchScore = 0;
    u32 switchScore = 0;
    u32 highestSwitchScore = 0;
    u8 consideredMonArray[PARTY_SIZE];
    u8 currentMonArray[PARTY_SIZE];
    int i;
    s32 j = 0;
    u32 aiMove = 0;
    u32 invalidMons = 0;
    uq4_12_t effectiveness = UQ_4_12(1.0);

    //if (*(gBattleStruct->monToSwitchIntoId + battler) != PARTY_SIZE)
    //    return *(gBattleStruct->monToSwitchIntoId + battler);
    //if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
    //    return gBattlerPartyIndexes[battler] + 1;

    if (IsDoubleBattle())
    {
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << GetPartnerBattler(battler)))
            battlerIn2 = battler;
        else
            battlerIn2 = GetPartnerBattler(battler);

        opposingBattler = BATTLE_OPPOSITE(battlerIn1);
        if (gAbsentBattlerFlags & (1u << opposingBattler))
            opposingBattler ^= BIT_FLANK;
    }
    else
    {
        opposingBattler = GetOppositeBattler(battler);
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    if (gAiThinkingStruct->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING)
    {
        bestCandidate.mon = GetNextMonInParty(party, firstId, lastId, battlerIn1, battlerIn2);
        return bestCandidate;
    }

    currentMonArray[0] = 0;
    consideredMonArray[0] = 0;

    if (gBattleTypeFlags & BATTLE_TYPE_DOUBLE)
    {
        for (i = (firstId); i < lastId; i++)
        {
            // Check mon validity
            if (!IsValidForBattle(&party[i])
                || gBattlerPartyIndexes[battlerIn1] == i
                || gBattlerPartyIndexes[battlerIn2] == i
                || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
                || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
            {
                invalidMons |= 1u << i;
                continue;
            }

            InitializeSwitchinCandidate(&party[i]);

            switchScore = GetMonSwitchScore(gAiLogicData->switchinCandidate.battleMon, battler, BATTLE_OPPOSITE(battlerIn1), switchAfterMonKOd) + GetMonSwitchScore(gAiLogicData->switchinCandidate.battleMon, battler, BATTLE_OPPOSITE(battlerIn2), switchAfterMonKOd);
            if(switchScore > highestSwitchScore){
                highestSwitchScore = switchScore;
                bestCandidate.mon = i;
                bestCandidate.score = highestSwitchScore;
            }
        }

        return bestCandidate;
    }

    for (i = (firstId); i < lastId; i++)
    {
        // Check mon validity
        if (!IsValidForBattle(&party[i])
            || gBattlerPartyIndexes[battlerIn1] == i
            || gBattlerPartyIndexes[battlerIn2] == i
            || i == gBattleStruct->monToSwitchIntoId[battlerIn1]
            || i == gBattleStruct->monToSwitchIntoId[battlerIn2])
        {
            invalidMons |= 1u << i;
            continue;
        }

        InitializeSwitchinCandidate(&party[i]);

        switchScore = GetMonSwitchScore(gAiLogicData->switchinCandidate.battleMon, battler, opposingBattler, switchAfterMonKOd);
        if(currentMonArray[0] == switchScore){
            currentMonArray[numberOfBestMons] = switchScore;
            consideredMonArray[numberOfBestMons++] = i;
        }
        if(currentMonArray[0] < switchScore){
            numberOfBestMons = 1;
            consideredMonArray[0] = i;
            currentMonArray[0] = switchScore;
            bestCandidate.score = switchScore;
        }
    }

    u8 bestMon = 0;
    u8 bestDamage = 0;
    u8 damageDealt = 0;

    if(currentMonArray[0] >= 12){
        bestCandidate.mon = consideredMonArray[Random() % numberOfBestMons];
        return bestCandidate;
    } else if (currentMonArray[0] >= 1){
        //finds mon with highest damage roll on player
        for(i = 0; i < numberOfBestMons; i++){

            InitializeSwitchinCandidate(&party[consideredMonArray[i]]);

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                aiMove = gAiLogicData->switchinCandidate.battleMon.moves[j];

                if (aiMove != MOVE_NONE && gMovesInfo[aiMove].power != 0 && gMovesInfo[aiMove].effect != EFFECT_EXPLOSION && gMovesInfo[aiMove].effect != EFFECT_MISTY_EXPLOSION)
                {
                    aiMove = GetMonData(&party[consideredMonArray[i]], MON_DATA_MOVE1 + j);
                    damageDealt = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, gAiLogicData->switchinCandidate.battleMon, &effectiveness, AI_ATTACKING, FALSE, FALSE, FALSE);
                    if(damageDealt > bestDamage){
                        bestDamage = damageDealt;
                        bestMon = i;
                    }
                }
            }
        }

        bestCandidate.mon = consideredMonArray[bestMon];
        return bestCandidate;
    } else {
        bestCandidate.mon = consideredMonArray[0];
        return bestCandidate;
    }
}

static bool32 AiExpectsToFaintPlayer(u32 battler)
{
    u8 target = gAiBattleData->chosenTarget[battler];

    if (gAiBattleData->actionFlee || gAiBattleData->choiceWatch)
        return FALSE; // AI not planning to use move

    if (!IsBattlerAlly(target, battler)
      && CanIndexMoveFaintTarget(battler, target, gAiBattleData->chosenMoveIndex[battler], AI_ATTACKING)
      && AI_IsFaster(battler, target, GetAIChosenMove(battler), GetIncomingMove(battler, target, gAiLogicData), CONSIDER_PRIORITY))
    {
        // We expect to faint the target and move first -> dont use an item
        return TRUE;
    }

    return FALSE;
}

static bool32 ShouldUseItem(u32 battler)
{
    struct Pokemon *party;
    s32 i;
    u8 validMons = 0;
    bool32 shouldUse = FALSE;
    u32 healAmount = 0;

    if (IsAiVsAiBattle())
        return FALSE;

    // If teaming up with player and Pokemon is on the right, or Pokemon is currently held by Sky Drop
    if ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && GetBattlerPosition(battler) == B_POSITION_PLAYER_RIGHT)
       || gBattleMons[battler].volatiles.semiInvulnerable == STATE_SKY_DROP)
        return FALSE;

    if (gBattleMons[battler].volatiles.embargo)
        return FALSE;

    if (AiExpectsToFaintPlayer(battler))
        return FALSE;

    party = GetBattlerParty(battler);

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (IsValidForBattle(&party[i]))
        {
            validMons++;
        }
    }

    for (i = 0; i < MAX_TRAINER_ITEMS; i++)
    {
        u16 item;
        const u8 *itemEffects;
        u8 battlerSide;

        item = gBattleHistory->trainerItems[i];
        if (item == ITEM_NONE)
            continue;
        itemEffects = GetItemEffect(item);
        if (itemEffects == NULL)
            continue;

        switch (GetItemBattleUsage(item))
        {
        case EFFECT_ITEM_HEAL_AND_CURE_STATUS:
            healAmount = GetHPHealAmount(itemEffects[GetItemEffectParamOffset(battler, item, 4, ITEM4_HEAL_HP)], GetBattlerMon(battler));
            shouldUse = AI_ShouldHeal(battler, healAmount);
            break;
        case EFFECT_ITEM_RESTORE_HP:
            healAmount = GetHPHealAmount(itemEffects[GetItemEffectParamOffset(battler, item, 4, ITEM4_HEAL_HP)], GetBattlerMon(battler));
            shouldUse = AI_ShouldHeal(battler, healAmount);
            break;
        case EFFECT_ITEM_CURE_STATUS:
            if ((itemEffects[3] & ITEM3_SLEEP && gBattleMons[battler].status1 & STATUS1_SLEEP)
             || (itemEffects[3] & ITEM3_POISON && gBattleMons[battler].status1 & STATUS1_PSN_ANY)
             || (itemEffects[3] & ITEM3_BURN && gBattleMons[battler].status1 & STATUS1_BURN)
             || (itemEffects[3] & ITEM3_FREEZE && gBattleMons[battler].status1 & STATUS1_ICY_ANY)
             || (itemEffects[3] & ITEM3_PARALYSIS && gBattleMons[battler].status1 & STATUS1_PARALYSIS)
             || (itemEffects[3] & ITEM3_CONFUSION && gBattleMons[battler].volatiles.confusionTurns > 0))
                shouldUse = ShouldCureStatusWithItem(battler, battler, gAiLogicData);
            break;
        case EFFECT_ITEM_INCREASE_STAT:
        case EFFECT_ITEM_INCREASE_ALL_STATS:
            if (!gDisableStructs[battler].isFirstTurn
                || AI_OpponentCanFaintAiWithMod(battler, 0))
                break;
            shouldUse = TRUE;
            break;
        case EFFECT_ITEM_SET_FOCUS_ENERGY:
            if (!gDisableStructs[battler].isFirstTurn
                || gBattleMons[battler].volatiles.dragonCheer
                || gBattleMons[battler].volatiles.focusEnergy
                || AI_OpponentCanFaintAiWithMod(battler, 0))
                break;
            shouldUse = TRUE;
            break;
        case EFFECT_ITEM_SET_MIST:
            battlerSide = GetBattlerSide(battler);
            if (gDisableStructs[battler].isFirstTurn && !(gSideStatuses[battlerSide] & SIDE_STATUS_MIST))
                shouldUse = TRUE;
            break;
        case EFFECT_ITEM_REVIVE:
            gBattleStruct->itemPartyIndex[battler] = GetFirstFaintedPartyIndex(battler);
            if (gBattleStruct->itemPartyIndex[battler] != PARTY_SIZE) // Revive if possible.
                shouldUse = TRUE;
            break;
        case EFFECT_ITEM_USE_POKE_FLUTE:
            if (gBattleMons[battler].status1 & STATUS1_SLEEP)
                shouldUse = TRUE;
            break;
        default:
            return FALSE;
        }
        if (shouldUse)
        {
            // Set selected party ID to current battler if none chosen.
            if (gBattleStruct->itemPartyIndex[battler] == PARTY_SIZE)
                gBattleStruct->itemPartyIndex[battler] = gBattlerPartyIndexes[battler];
            BtlController_EmitTwoReturnValues(battler, B_COMM_TO_ENGINE, B_ACTION_USE_ITEM, 0);
            gBattleStruct->chosenItem[battler] = item;
            gBattleHistory->trainerItems[i] = 0;
            return shouldUse;
        }
    }

    return FALSE;
}

static bool32 AI_ShouldHeal(u32 battler, u32 healAmount)
{
    bool32 shouldHeal = FALSE;
    u8 opponent;
    u32 maxDamage = 0;
    u32 dmg = 0;

    if (gBattleMons[battler].hp < gBattleMons[battler].maxHP / 4
     || gBattleMons[battler].hp == 0
     || (healAmount != 0 && gBattleMons[battler].maxHP - gBattleMons[battler].hp > healAmount))
    {
        // We have low enough HP to consider healing
        shouldHeal = !AI_OpponentCanFaintAiWithMod(battler, healAmount); // if target can kill us even after we heal, why bother
    }

    //calculate max expected damage from the opponent
    for (opponent = 0; opponent < gBattlersCount; opponent++)
    {
        if (IsOnPlayerSide(opponent))
        {
            dmg = GetBestDmgFromBattler(opponent, battler, AI_DEFENDING);

            if (dmg > maxDamage)
                maxDamage = dmg;
        }
    }

    // also heal if a 2HKO is outhealed
    if (AI_OpponentCanFaintAiWithMod(battler, 0)
      && !AI_OpponentCanFaintAiWithMod(battler, healAmount)
      && healAmount > 2*maxDamage)
        return TRUE;

    // also heal, if the expected damage is outhealed and it's the last remaining mon
    if (AI_OpponentCanFaintAiWithMod(battler, 0)
      && !AI_OpponentCanFaintAiWithMod(battler, healAmount)
      && CountUsablePartyMons(battler) == 0)
        return TRUE;

    return shouldHeal;
}

static bool32 AI_OpponentCanFaintAiWithMod(u32 battler, u32 healAmount)
{
    u32 i;
    // Check special cases to NOT heal
    for (i = 0; i < gBattlersCount; i++)
    {
        if (IsOnPlayerSide(i) && CanTargetFaintAiWithMod(i, battler, healAmount, 0))
        {
            // Target is expected to faint us
            return TRUE;
        }
    }
    return FALSE;
}

static u32 GetHPHealAmount(u8 itemEffectParam, struct Pokemon *mon)
{
    switch (itemEffectParam)
    {
    case ITEM6_HEAL_HP_FULL:
        itemEffectParam = GetMonData(mon, MON_DATA_MAX_HP, NULL) - GetMonData(mon, MON_DATA_HP, NULL);
        break;
    case ITEM6_HEAL_HP_HALF:
        itemEffectParam = GetMonData(mon, MON_DATA_MAX_HP, NULL) / 2;
        if (itemEffectParam == 0)
            itemEffectParam = 1;
        break;
    case ITEM6_HEAL_HP_LVL_UP:
        itemEffectParam = gBattleScripting.levelUpHP;
        break;
    case ITEM6_HEAL_HP_QUARTER:
        itemEffectParam = GetMonData(mon, MON_DATA_MAX_HP, NULL) / 4;
        if (itemEffectParam == 0)
            itemEffectParam = 1;
        break;
    }

    return itemEffectParam;
}
