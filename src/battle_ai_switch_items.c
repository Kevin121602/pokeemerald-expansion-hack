#include "global.h"
#include "battle.h"
#include "constants/battle_ai.h"
#include "battle_ai_main.h"
#include "battle_ai_util.h"
#include "battle_util.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_main.h"
#include "constants/hold_effects.h"
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
static bool32 HasSuperEffectiveMoveAgainstOpponents(u32 battler, bool32 noRng);
static bool32 FindMonWithFlagsAndSuperEffective(u32 battler, u16 flags, u32 moduloPercent);
static bool32 ShouldUseItem(u32 battler);
static bool32 AiExpectsToFaintPlayer(u32 battler);
static bool32 AI_ShouldHeal(u32 battler, u32 healAmount);
static bool32 AI_OpponentCanFaintAiWithMod(u32 battler, u32 healAmount);
static u32 GetSwitchinHazardsDamage(u32 battler, struct BattlePokemon *battleMon);
static bool32 CanAbilityTrapOpponent(u16 ability, u32 opponent);
static bool32 AI_ShouldSwitchIfBadMoves(u32 battler, bool32 emitResult);
static bool32 AI_SwitchMonIfSuitable(u32 battler, bool32 doubleBattle);
static u32 GetSwitchinHitsToKO(s32 damageTaken, u32 battler);
static s32 GetMaxDamagePlayerCouldDealToSwitchin(u32 battler, u32 opposingBattler, struct BattlePokemon battleMon);
static s32 GetMaxDamageMovePlayerCouldUseOnSwitchin(u32 battler, u32 opposingBattler, struct BattlePokemon battleMon);

void InitializeSwitchinCandidate(struct Pokemon *mon)
{
    PokemonToBattleMon(mon, &AI_DATA->switchinCandidate.battleMon);
    AI_DATA->switchinCandidate.hypotheticalStatus = FALSE;
}

static bool32 IsAceMon(u32 battler, u32 monPartyId)
{
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_ACE_POKEMON
            && !(gBattleStruct->forcedSwitch & (1u << battler))
            && monPartyId == CalculateEnemyPartyCountInSide(battler)-1)
        return TRUE;
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_DOUBLE_ACE_POKEMON
            && !(gBattleStruct->forcedSwitch & (1u << battler))
            && (monPartyId == CalculateEnemyPartyCount()-1 || monPartyId == CalculateEnemyPartyCount()-2))
        return TRUE;
    return FALSE;
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

// Note that as many return statements as possible are INTENTIONALLY put after all of the loops;
// the function can take a max of about 0.06s to run, and this prevents the player from identifying
// whether the mon will switch or not by seeing how long the delay is before they select a move
static bool32 ShouldSwitchIfHasBadOdds(u32 battler)
{
    //Variable initialization
    u8 opposingPosition, atkType1, atkType2, defType1, defType2, effectiveness;
    s32 i, damageDealt = 0, maxDamageDealt = 0, damageTaken = 0, maxDamageTaken = 0;
    u32 aiMove, playerMove, aiBestMove = MOVE_NONE, aiAbility = AI_DATA->abilities[battler], opposingBattler, weather = AI_GetWeather(AI_DATA);
    bool32 getsOneShot = FALSE, hasStatusMove = FALSE, hasSuperEffectiveMove = FALSE;
    u16 typeEffectiveness = UQ_4_12(1.0), aiMoveEffect; //baseline typing damage

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // Double Battles aren't included in AI_FLAG_SMART_MON_CHOICE. Defaults to regular switch in logic
    if (IsDoubleBattle())
        return FALSE;

    opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    opposingBattler = GetBattlerAtPosition(opposingPosition);

    // Gets types of player (opposingBattler) and computer (battler)
    atkType1 = gBattleMons[opposingBattler].types[0];
    atkType2 = gBattleMons[opposingBattler].types[1];
    defType1 = gBattleMons[battler].types[0];
    defType2 = gBattleMons[battler].types[1];

    // Check AI moves for damage dealt
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        aiMove = gBattleMons[battler].moves[i];
        aiMoveEffect = gMovesInfo[aiMove].effect;
        if (aiMove != MOVE_NONE)
        {
            // Check if mon has an "important" status move
            if (aiMoveEffect == EFFECT_REFLECT || aiMoveEffect == EFFECT_LIGHT_SCREEN
            || aiMoveEffect == EFFECT_SPIKES || aiMoveEffect == EFFECT_TOXIC_SPIKES || aiMoveEffect == EFFECT_STEALTH_ROCK || aiMoveEffect == EFFECT_STICKY_WEB || aiMoveEffect == EFFECT_LEECH_SEED
            || aiMoveEffect == EFFECT_EXPLOSION
            || aiMoveEffect == EFFECT_SLEEP || aiMoveEffect == EFFECT_YAWN || aiMoveEffect == EFFECT_TOXIC || aiMoveEffect == EFFECT_WILL_O_WISP || aiMoveEffect == EFFECT_PARALYZE
            || aiMoveEffect == EFFECT_TRICK || aiMoveEffect == EFFECT_TRICK_ROOM || aiMoveEffect== EFFECT_WONDER_ROOM || aiMoveEffect ==  EFFECT_PSYCHO_SHIFT || aiMoveEffect == EFFECT_FIRST_TURN_ONLY
            )
            {
                hasStatusMove = TRUE;
            }

            // Only check damage if it's a damaging move
            if (!IS_MOVE_STATUS(aiMove))
            {
                // Check if mon has a super effective move
                if (AI_GetMoveEffectiveness(aiMove, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
                    hasSuperEffectiveMove = TRUE;

                // Get maximum damage mon can deal
                damageDealt = AI_DATA->simulatedDmg[battler][opposingBattler][i].expected;
                if(damageDealt > maxDamageDealt)
                {
                    maxDamageDealt = damageDealt;
                    aiBestMove = aiMove;
                }

            }
        }
    }

    // Calculate type advantage
    typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType1, defType1)));
    if (atkType2 != atkType1)
        typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType2, defType1)));
    if (defType2 != defType1)
    {
        typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType1, defType2)));
        if (atkType2 != atkType1)
            typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType2, defType2)));
    }

    // Get max damage mon could take
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE && !IS_MOVE_STATUS(playerMove))
        {
            damageTaken = AI_CalcDamage(playerMove, opposingBattler, battler, &effectiveness, FALSE, weather, DMG_ROLL_HIGHEST).expected;
            if (damageTaken > maxDamageTaken)
                maxDamageTaken = damageTaken;
        }
    }

    // Check if mon gets one shot
    if(maxDamageTaken > gBattleMons[battler].hp)
    {
        getsOneShot = TRUE;
    }

    // Check if current mon can outspeed and KO in spite of bad matchup, and don't switch out if it can
    if(damageDealt > gBattleMons[opposingBattler].hp)
    {
        if (AI_IsFaster(battler, opposingBattler, aiBestMove))
            return FALSE;
    }

    // If we don't have any other viable options, don't switch out
    if (AI_DATA->mostSuitableMonId[battler] == PARTY_SIZE)
        return FALSE;

    // Start assessing whether or not mon has bad odds
    // Jump straight to switching out in cases where mon gets OHKO'd
    if (((getsOneShot && gBattleMons[opposingBattler].speed > gBattleMons[battler].speed) // If the player OHKOs and outspeeds OR OHKOs, doesn't outspeed but isn't 2HKO'd
            || (getsOneShot && gBattleMons[opposingBattler].speed <= gBattleMons[battler].speed && maxDamageDealt < gBattleMons[opposingBattler].hp / 2))
        && (gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2 // And the current mon has at least 1/2 their HP, or 1/4 HP and Regenerator
            || (aiAbility == ABILITY_REGENERATOR
            && gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 4)))
    {
        // 50% chance to stay in regardless
        if (RandomPercentage(RNG_AI_SWITCH_HASBADODDS, 50))
            return FALSE;

        // Switch mon out
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }

    // General bad type matchups have more wiggle room
    if (typeEffectiveness >= UQ_4_12(2.0)) // If the player has at least a 2x type advantage
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
            if (RandomPercentage(RNG_AI_SWITCH_HASBADODDS, 50))
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

static bool32 FindMonThatHitsWonderGuard(u32 battler)
{
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    s32 i, j;
    s32 firstId;
    s32 lastId; // + 1
    struct Pokemon *party = NULL;
    u16 move;

    if (IsDoubleBattle())
        return FALSE;

    if (AI_DATA->abilities[opposingBattler] != ABILITY_WONDER_GUARD)
        return FALSE;

    // Check if Pokémon has a super effective move.
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        move = gBattleMons[battler].moves[i];
        if (move != MOVE_NONE)
        {
            if (AI_GetMoveEffectiveness(move, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
                return FALSE;
        }
    }

    // Get party information.
    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    // Find a Pokémon in the party that has a super effective move.
    for (i = firstId; i < lastId; i++)
    {
        if (!IsValidForBattle(&party[i]))
            continue;
        if (i == gBattlerPartyIndexes[battler])
            continue;
        if (IsAceMon(battler, i))
            continue;

        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
            if (move != MOVE_NONE)
            {
                // Found a mon
                if (AI_GetMoveEffectiveness(move, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
                    return SetSwitchinAndSwitch(battler, i);
            }
        }
    }

    return FALSE; // There is not a single Pokémon in the party that has a super effective move against a mon with Wonder Guard.
}

static bool32 FindMonThatAbsorbsOpponentsMove(u32 battler)
{
    return FALSE;
}

static bool32 ShouldSwitchIfOpponentChargingOrInvulnerable(u32 battler)
{
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    u32 incomingMove = AI_DATA->lastUsedMove[opposingBattler];
    bool32 isOpposingBattlerChargingOrInvulnerable = (IsSemiInvulnerable(opposingBattler, incomingMove) || IsTwoTurnNotSemiInvulnerableMove(opposingBattler, incomingMove));

    if (IsDoubleBattle() || !(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    if (isOpposingBattlerChargingOrInvulnerable && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE)
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);

    return FALSE;
}

static bool32 ShouldSwitchIfTrapperInParty(u32 battler)
{
    s32 firstId;
    s32 lastId;
    struct Pokemon *party;
    s32 i;
    u16 monAbility;
    s32 opposingBattler =  GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
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

        if (CanAbilityTrapOpponent(monAbility, opposingBattler))
        {
            // If mon in slot i is the most suitable switchin candidate, then it's a trapper than wins 1v1
            if (i == AI_DATA->mostSuitableMonId[battler])
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
    }
    return FALSE;
}

static bool32 ShouldSwitchIfGameStatePrompt(u32 battler, bool32 emitResult, u32 switchinCandidate)
{
    bool32 switchMon = TRUE;
    bool32 monIdChosen = TRUE; // Id of the mon to switch into.
    u16 monAbility = AI_DATA->abilities[battler];
    u16 holdEffect = AI_DATA->holdEffects[battler];
    u8 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u8 opposingBattler = GetBattlerAtPosition(opposingPosition);
    s32 i;
    struct Pokemon *party;

    //Perish Song
    if (gStatuses3[battler] & STATUS3_PERISH_SONG
        && gDisableStructs[battler].perishSongTimer == 0
        && monAbility != ABILITY_SOUNDPROOF)
        switchMon = TRUE;
    else
    {
        switchMon = FALSE;
    }

    if (switchMon)
    {
        gBattleStruct->AI_monToSwitchIntoId[battler] = switchinCandidate;
        if (emitResult)
            BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

static bool32 AI_SwitchMonIfSuitable(u32 battler, bool32 doubleBattle)
{
    u32 monToSwitchId = AI_DATA->mostSuitableMonId[battler];
    if (monToSwitchId != PARTY_SIZE && IsValidForBattle(&GetBattlerParty(battler)[monToSwitchId]))
    {
        gBattleMoveDamage = monToSwitchId;
        // Never Switches out in Doubles
        if (doubleBattle)
        {
            return FALSE;
        }
        AI_DATA->shouldSwitch |= 1u << battler;
        AI_DATA->monToSwitchInId[battler] = monToSwitchId;
        return TRUE;
    }
    return FALSE;
}

static bool32 AI_ShouldSwitchIfBadMoves(u32 battler, bool32 emitResult)
{
    u32 i, j;
    bool32 switchMon = FALSE;
    bool32 monIdChosen = FALSE; // Id of the mon to switch into.
    bool32 doubleBattle = FALSE;
    //causes crashes, fix later
    // If can switch.
    if (CountUsablePartyMons(battler) > 0
        && !IsBattlerTrapped(battler, TRUE)
        && !(gBattleTypeFlags & (BATTLE_TYPE_ARENA | BATTLE_TYPE_PALACE))
        && !(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING))
    {
        // Consider switching if all moves are worthless to use.
        if (gBattleMons[battler].hp >= gBattleMons[battler].maxHP / 2) // Mon has more than 50% of its HP
        {
            s32 cap = 100;
            for (i = 0; i < MAX_MON_MOVES; i++)
            {
                if (AI_THINKING_STRUCT->score[i] > cap)
                    break;
            }

                if (i == MAX_MON_MOVES && AI_SwitchMonIfSuitable(battler, doubleBattle))
                    switchMon = TRUE;

        }

    }
    if (switchMon)
    {
        if (!monIdChosen)
            gBattleStruct->AI_monToSwitchIntoId[battler] = PARTY_SIZE;
        if (emitResult)
            BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_SWITCH, 0);
        return TRUE;
    }
    else
        return FALSE;
}

static bool32 ShouldSwitchIfAbilityBenefit(u32 battler)
{
    return FALSE;
}

static bool32 HasSuperEffectiveMoveAgainstOpponents(u32 battler, bool32 noRng)
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
            if (move == MOVE_NONE)
                continue;

            if (AI_GetMoveEffectiveness(move, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
            {
                if (noRng)
                    return TRUE;
                if (Random() % 10 != 0)
                    return TRUE;
            }
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
            if (move == MOVE_NONE)
                continue;

            if (AI_GetMoveEffectiveness(move, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
            {
                if (noRng)
                    return TRUE;
                if (Random() % 10 != 0)
                    return TRUE;
            }
        }
    }

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

    return (buffedStatsValue > 3);
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
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING)
        return FALSE;

    if (gLastLandedMoves[battler] == MOVE_NONE)
        return FALSE;
    if (gLastLandedMoves[battler] == MOVE_UNAVAILABLE)
        return FALSE;
    if (gLastHitBy[battler] == 0xFF)
        return FALSE;
    if (IS_MOVE_STATUS(gLastLandedMoves[battler]))
        return FALSE;

    if (IsDoubleBattle())
    {
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)))))
            battlerIn2 = battler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)));
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
        u16 species, monAbility;

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
        CalcPartyMonTypeEffectivenessMultiplier(gLastLandedMoves[battler], species, monAbility);
        if (gMoveResultFlags & flags)
        {
            battlerIn1 = gLastHitBy[battler];

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                move = GetMonData(&party[i], MON_DATA_MOVE1 + j);
                if (move == 0)
                    continue;

                if (AI_GetMoveEffectiveness(move, battler, battlerIn1) >= AI_EFFECTIVENESS_x2 && RandomPercentage(RNG_AI_SWITCH_SE_DEFENSIVE, percentChance))
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
    u32 ability = AI_DATA->abilities[battler], aiMove;
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
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));

    // Only use this if AI_FLAG_SMART_SWITCHING is set for the trainer
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
        return FALSE;

    // If not Encore'd don't switch
    if (encoredMove == MOVE_NONE)
        return FALSE;

    // Switch out if status move
    if (gMovesInfo[encoredMove].category == DAMAGE_CATEGORY_STATUS)
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);

    // Stay in if effective move
    else if (AI_GetMoveEffectiveness(encoredMove, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
        return FALSE;

    // Switch out 50% of the time otherwise
    else if (RandomPercentage(RNG_AI_SWITCH_ENCORE, 50) && AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE)
        return SetSwitchinAndSwitch(battler, PARTY_SIZE);

    return FALSE;
}

static bool32 ShouldSwitchIfBadChoiceLock(u32 battler)
{
    u32 holdEffect = GetBattlerHoldEffect(battler, FALSE);

    if (HOLD_EFFECT_CHOICE(holdEffect) && IsBattlerItemEnabled(battler))
    {
        if (gMovesInfo[gLastUsedMove].category == DAMAGE_CATEGORY_STATUS)
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
    if (!(AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SMART_SWITCHING))
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
            if (AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE && RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, 50))
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
        // If at -3 or worse, switch out regardless
        else if (attackingStage < DEFAULT_STAT_STAGE - 2)
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
            if (AI_DATA->mostSuitableMonId[battler] != PARTY_SIZE && RandomPercentage(RNG_AI_SWITCH_STATS_LOWERED, 50))
                return SetSwitchinAndSwitch(battler, PARTY_SIZE);
        }
        // If at -3 or worse, switch out regardless
        else if (spAttackingStage < DEFAULT_STAT_STAGE - 2)
            return SetSwitchinAndSwitch(battler, PARTY_SIZE);
    }
    return FALSE;
}

bool32 ShouldSwitchIfOutspedAndKOd(u32 battler, bool32 emitResult){
    bool32 switchMon = FALSE;
    bool32 monIdChosen = FALSE; // Id of the mon to switch into.
    bool32 faster = FALSE;
    u8 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u8 opposingBattler = GetBattlerAtPosition(opposingPosition);
    u32 battlerMove = 0, playerMove = 0, hitsToKOBattler, hitsToKOPlayer, maxHitsToKO = 0;
    s32 battlerAbility = gBattleMons[battler].ability;
    s32 battlerHoldEffect = ItemId_GetHoldEffect(gBattleMons[battler].item);
    s32 playerMonAbility = gBattleMons[opposingBattler].ability;
    s32 playerMonHoldEffect = ItemId_GetHoldEffect(gBattleMons[opposingBattler].item);
    u32 battlerSpeed = GetSwitchInSpeedStatArgs(gBattleMons[battler], battler, battlerAbility, battlerHoldEffect);
    u32 playerMonSpeed = GetSwitchInSpeedStatArgs(gBattleMons[opposingBattler], opposingBattler, playerMonAbility, playerMonHoldEffect);
    s32 battlerMovePriority = 0, playerMovePriority = 0, maxDamageDealt = 0, damageDealt = 0;
    u8 i = 0, j = 0;
    u32 bestBattlerMove = 0, bestPlayerMove = 0;
    u32 bestHitsToKOPlayer = INT_MAX, bestHitsToKOBattler = INT_MAX;
    struct Pokemon *party;
    struct SimulatedDamage dmg;
    u8 effectiveness;

    // Get best move for AI to use on player
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        battlerMove = gBattleMons[battler].moves[i];
        battlerMovePriority = gMovesInfo[battlerMove].priority;

        if (battlerMove != MOVE_NONE && gMovesInfo[battlerMove].power != 0 && gMovesInfo[battlerMove].effect != EFFECT_EXPLOSION)
        {
            dmg = AI_CalcDamageSaveBattlers(battlerMove, battler, opposingBattler, &effectiveness, FALSE, DMG_ROLL_LOWEST);
            damageDealt = dmg.expected;
            hitsToKOPlayer = GetNoOfHitsToKO(damageDealt, gBattleMons[opposingBattler].hp);
            //continues if move does 0 damage
            if(hitsToKOPlayer == 0){
                continue;
            }

            //sets hits to 2 if would ohko but blocked by sash or sturdy
            if(hitsToKOPlayer == 1 && MonHasInTactFocusSashSturdy(opposingBattler, battler, playerMonHoldEffect, playerMonAbility, battlerMove)){
                hitsToKOPlayer++;
            }

            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            if(hitsToKOPlayer < bestHitsToKOPlayer){
                bestHitsToKOPlayer = hitsToKOPlayer;
                bestBattlerMove = gBattleMons[battler].moves[i];
            } else if (hitsToKOPlayer == bestHitsToKOPlayer && battlerMovePriority > gMovesInfo[bestBattlerMove].priority){
                bestBattlerMove = gBattleMons[battler].moves[i];
            }
        }
    }

    // Get best move for player to use on AI battler
    for (j = 0; j < MAX_MON_MOVES; j++)
    {
        playerMove = gBattleMons[opposingBattler].moves[j];
        playerMovePriority = gMovesInfo[playerMove].priority;

        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && gMovesInfo[playerMove].effect != EFFECT_EXPLOSION)
        {
            dmg = AI_CalcDamageSaveBattlers(playerMove, opposingBattler, battler, &effectiveness, FALSE, DMG_ROLL_LOWEST);
            damageDealt = dmg.expected;
            hitsToKOBattler = GetNoOfHitsToKO(damageDealt, gBattleMons[battler].hp);
            //continues if move does 0 damage
            if(hitsToKOBattler == 0){
                continue;
            }

            //sets hits to 2 if would ohko but blocked by sash or sturdy
            if(hitsToKOBattler == 1 && MonHasInTactFocusSashSturdy(battler, opposingBattler, battlerHoldEffect, battlerAbility, playerMove)){
                hitsToKOBattler++;
            }

            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            if(hitsToKOBattler < bestHitsToKOBattler){
                bestHitsToKOBattler = hitsToKOBattler;
                bestPlayerMove = playerMove;
            } else if (hitsToKOBattler == bestHitsToKOBattler && playerMovePriority > gMovesInfo[bestPlayerMove].priority){
                bestPlayerMove = playerMove;
            }
        }
    }

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
    //If mon has raised relevant stats and isnt at full hp, this function returns True

    u8 i;
    u32 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u32 opposingBattler = GetBattlerAtPosition(opposingPosition);

    bool8 anyStatIsRaised = FALSE;
    for(i = 0; i < STAT_EVASION; i ++){
        if(gBattleMons[battler].statStages[i] > DEFAULT_STAT_STAGE){
            anyStatIsRaised = TRUE;
        }
    }

    if(!anyStatIsRaised){
        return FALSE;
    }

    if(gBattleMons[battler].hp == gBattleMons[battler].maxHP){
        return FALSE;
    }

    //if ai mon has raised its speed, would be slower without the boosts but is faster with them
    if(gBattleMons[battler].statStages[STAT_SPEED] > DEFAULT_STAT_STAGE && (gBattleMons[battler].speed < AI_DATA->speedStats[opposingBattler])
        && (AI_DATA->speedStats[battler] >= AI_DATA->speedStats[opposingBattler])){
        return TRUE;
    }

    if(AI_DATA->abilities[opposingBattler] == ABILITY_UNAWARE){
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

    if(gBattleMons[battler].statStages[STAT_EVASION] > DEFAULT_STAT_STAGE && AI_DATA->abilities[opposingBattler] != ABILITY_NO_GUARD){
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
    u32 bestCandidate;
    u32 bestMonSwitchScore = 0;
    u32 opposingPosition = BATTLE_OPPOSITE(GetBattlerPosition(battler));
    u32 opposingBattler = GetBattlerAtPosition(opposingPosition);
    bool32 faster = FALSE;
    u32 playerMove = 0, battlerMove = 0, hitsToKOPlayer = 0, hitsToKOBattler = 0;
    s32 battlerAbility = AI_DATA->abilities[battler];
    s32 battlerHoldEffect = AI_DATA->holdEffects[battler];
    s32 playerAbility = AI_DATA->abilities[opposingBattler];
    s32 playerHoldEffect = AI_DATA->holdEffects[opposingBattler];
    u32 battlerSpeed = AI_DATA->speedStats[battler];
    u32 playerSpeed = AI_DATA->speedStats[opposingBattler];
    s32 battlerMovePriority = 0, playerMovePriority = 0, maxDamageDealt = 0, damageDealt = 0;
    u32 bestBattlerMove = 0, bestPlayerMove = 0;
    u32 bestHitsToKOPlayer = INT_MAX, bestHitsToKOBattler = INT_MAX;
    u8 j, k, l;
    s32 dmg, bestDmg = 0;
    u32 aiHighestDmg = MAX_MON_MOVES;

    bool32 canFakeOut = FALSE;
    bool32 willSetHazards = FALSE;
    bool32 willDestinyBond = FALSE;
    //bool32 hasViableStatus = FALSE;
    bool32 hasNoGoodMoves = TRUE;

    bool32 canPivot = FALSE;
    bool32 canEjectPack = FALSE;
    bool32 canTeleport = FALSE;

    bool32 shouldSwitchLiberal = FALSE;
    bool32 shouldSwitchStandard = FALSE;

    bool32 shouldPivot = FALSE;
    bool32 shouldEjectPack = FALSE;
    bool32 shouldTeleport = FALSE;

    u8 pivot = 0;
    u8 teleport = 0;
    u8 ejectPack = 0;

    if (gBattleMons[battler].status2 & (STATUS2_WRAPPED | STATUS2_ESCAPE_PREVENTION))
        return FALSE;
    if (gStatuses3[battler] & STATUS3_ROOTED)
        return FALSE;
    if (IsAbilityPreventingEscape(battler))
        return FALSE;
    if(gBattleMons[battler].hp*5 <= gBattleMons[battler].maxHP)
        return FALSE;
    if(!CanMonSurviveHazardSwitchin(battler))
        return FALSE;
    //if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
    //    return FALSE;

    // Sequence Switching AI never switches mid-battle
    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING){
        return FALSE;
    }

    availableToSwitch = 0;

    if (IsDoubleBattle())
    {
        return FALSE;
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

    //only used for perish song
    //if (ShouldSwitchIfGameStatePrompt(battler, emitResult, bestCandidate)){
    //    return TRUE;
    //}

    if (gStatuses3[battler] & STATUS3_PERISH_SONG
        && gDisableStructs[battler].perishSongTimer == 0
        && battlerAbility != ABILITY_SOUNDPROOF){
            shouldSwitchLiberal = TRUE;
    }

    //if(bestMonSwitchScore < 10){
    //    return FALSE;
    //}

    
    // Get best move for AI to use on player
    for (j = 0; j < MAX_MON_MOVES; j++)
    {
        battlerMove = gBattleMons[battler].moves[j];
        battlerMovePriority = GetMovePriority(battler, battlerMove);

        if (battlerMove != MOVE_NONE && gMovesInfo[battlerMove].power != 0 && gMovesInfo[battlerMove].effect != EFFECT_EXPLOSION 
            && AI_THINKING_STRUCT->score[j] >= 100)
        {
            dmg = AI_DATA->simulatedDmg[battler][opposingBattler][j].expected;
            if (gMovesInfo[battlerMove].effect == EFFECT_HIT_ESCAPE){
                canPivot = TRUE;
                pivot = j;
            }
            if(battlerHoldEffect == HOLD_EFFECT_EJECT_PACK && MoveActivatesEjectPack(battlerMove)){
                canEjectPack = TRUE;
                ejectPack = j;
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

            //sets hits to 2 if would ohko but blocked by sash or sturdy
            if(hitsToKOPlayer == 1 && MonHasInTactFocusSashSturdy(opposingBattler, battler, playerHoldEffect, playerAbility, battlerMove)){
                hitsToKOPlayer++;
            }

            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            if(hitsToKOPlayer < bestHitsToKOPlayer){
                bestHitsToKOPlayer = hitsToKOPlayer;
                bestBattlerMove = battlerMove;
            } else if (hitsToKOPlayer == bestHitsToKOPlayer && battlerMovePriority > GetMovePriority(battler, bestBattlerMove)){
                bestBattlerMove = battlerMove;
            }
        }
    }

    // Get best move for player to use on AI battler
    for (k = 0; k < MAX_MON_MOVES; k++)
    {
        playerMove = gBattleMons[opposingBattler].moves[k];
        playerMovePriority = GetMovePriority(opposingBattler, playerMove);

        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && gMovesInfo[playerMove].effect != EFFECT_EXPLOSION && !DoesSubstituteBlockMove(opposingBattler, battler, playerMove))
        {
            dmg = AI_DATA->simulatedDmg[opposingBattler][battler][k].expected;
            hitsToKOBattler = GetNoOfHitsToKO(dmg, gBattleMons[battler].hp);
            //continues if move does 0 damage
            if(hitsToKOBattler == 0){
                continue;
            }

            //sets hits to 2 if would ohko but blocked by sash or sturdy
            if(hitsToKOBattler == 1 && MonHasInTactFocusSashSturdy(battler, opposingBattler, battlerHoldEffect, battlerAbility, playerMove)){
                hitsToKOBattler++;
            }

            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            if(hitsToKOBattler < bestHitsToKOBattler){
                bestHitsToKOBattler = hitsToKOBattler;
                bestPlayerMove = playerMove;
            } else if (hitsToKOBattler == bestHitsToKOBattler && playerMovePriority > GetMovePriority(opposingBattler, bestPlayerMove)){
                bestPlayerMove = playerMove;
            }
        }
    }

    //faster bool represents whether or not the AI is faster
    if(GetMovePriority(battler, bestBattlerMove) > GetMovePriority(opposingBattler, bestPlayerMove)){
        faster = TRUE;
    } else if (GetMovePriority(opposingBattler, bestPlayerMove) > GetMovePriority(battler, bestBattlerMove)){
        faster = FALSE;
    } else if (battlerSpeed >= playerSpeed){
        //move prios are tied
        faster = TRUE;
    }

    for(l= 0; l < MAX_MON_MOVES; l++){
        if (AI_THINKING_STRUCT->score[l] > 100){
            hasNoGoodMoves = FALSE;
        }
        if (gBattleMons[battler].moves[l] == MOVE_FAKE_OUT && AI_THINKING_STRUCT->score[l] >= 105){
            canFakeOut = TRUE;
        }
        if (gMovesInfo[gBattleMons[battler].moves[l]].effect == EFFECT_TELEPORT && AI_THINKING_STRUCT->score[l] >= 100){
            canTeleport = TRUE;
            teleport = l;
        }
        if (gMovesInfo[gBattleMons[battler].moves[l]].effect == EFFECT_DESTINY_BOND && AI_THINKING_STRUCT->score[l] >= 105){
            willDestinyBond = TRUE;
        }
        if (IsHazardMoveEffect(gMovesInfo[gBattleMons[battler].moves[l]].effect) && AI_THINKING_STRUCT->score[l] >= 105){
            willSetHazards = TRUE;
        }
        //if(l != aiHighestDmg && AI_THINKING_STRUCT->score[l] > 100){
        //    hasViableStatus = TRUE;
        //}
    }

    //all moves scored under 100
    if(hasNoGoodMoves){
        shouldSwitchLiberal = TRUE;
    }

    if(battlerAbility == ABILITY_NATURAL_CURE && gBattleMons[battler].status1 & STATUS1_ANY){
        if(canPivot && (battlerSpeed >= playerSpeed)){
                //BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (pivot) | (opposingBattler << 8));
                //OpponentBufferExecCompleted(battler);
                //AI_THINKING_STRUCT->score[pivot] = 120;
                shouldPivot = TRUE;
                //gBattleStruct->aiMoveOrAction[battler] = pivot;
                //return FALSE;
        } else {
            shouldSwitchStandard = TRUE;
        }
    }

    //player kills ai, more conditions for slow kill than fast kill
    if (bestHitsToKOBattler == 1 && !canFakeOut)
    {
        if(!faster){
            shouldSwitchStandard = TRUE;
        } else if (faster && !willSetHazards && !willDestinyBond && (bestHitsToKOPlayer != 1 /*&& !(gBattleMons[battler].status1 & STATUS1_SLEEP)*/) && !MonHasRelevantStatsRaised(battler)){
            if(canPivot){
                //BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (pivot) | (opposingBattler << 8));
                //OpponentBufferExecCompleted(battler);
                //AI_THINKING_STRUCT->score[pivot] = 120;
                shouldPivot = TRUE;
                //gBattleStruct->aiMoveOrAction[battler] = pivot;
                //return FALSE;
            }
            if(canEjectPack){
                //BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (ejectPack) | (opposingBattler << 8));
                //OpponentBufferExecCompleted(battler);
                //AI_THINKING_STRUCT->score[ejectPack] = 120;
                shouldEjectPack = TRUE;
                //gBattleStruct->aiMoveOrAction[battler] = ejectPack;
                //return FALSE;
            } else {
                shouldSwitchStandard = TRUE;
            }
        }
    }

    //AI cant 3hko player, player at least 3hkos in return, and AI has no viable status moves
    if(bestHitsToKOPlayer > 3 && bestHitsToKOBattler <= 3 && (AI_DATA->hasViableStatus == FALSE) && !MonHasRelevantStatsRaised(battler)){
        if(canPivot && (battlerSpeed >= playerSpeed)){
                //BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (pivot) | (opposingBattler << 8));
                //OpponentBufferExecCompleted(battler);
                //AI_THINKING_STRUCT->score[pivot] = 120;
                //gBattleStruct->aiMoveOrAction[battler] = pivot;
                //return FALSE;
                shouldPivot = TRUE;
        } else if (canTeleport){
                //BtlController_EmitTwoReturnValues(battler, BUFFER_B, 10, (teleport) | (opposingBattler << 8));
                //OpponentBufferExecCompleted(battler);
                //AI_THINKING_STRUCT->score[teleport] = 120;
                //gBattleStruct->aiMoveOrAction[battler] = teleport;
                //return FALSE;
                shouldTeleport = TRUE;
        } else {
                shouldSwitchStandard = TRUE;
        }
    }

    if (shouldPivot){
        bestCandidate = GetMostSuitableMonToSwitchInto(battler, FALSE);

        InitializeSwitchinCandidate(&party[bestCandidate]);

        bestMonSwitchScore = GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, opposingBattler, FALSE);

        if(bestMonSwitchScore < 10){
            return FALSE;
        } else {
            gBattleStruct->aiMoveOrAction[battler] = pivot;
            return FALSE;
        }
    } else if (shouldEjectPack){
        bestCandidate = GetMostSuitableMonToSwitchInto(battler, FALSE);

        InitializeSwitchinCandidate(&party[bestCandidate]);

        bestMonSwitchScore = GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, opposingBattler, FALSE);

        if(bestMonSwitchScore < 10){
            return FALSE;
        } else {
            gBattleStruct->aiMoveOrAction[battler] = ejectPack;
            return FALSE;
        }
    } else if (shouldTeleport){
        bestCandidate = GetMostSuitableMonToSwitchInto(battler, FALSE);

        InitializeSwitchinCandidate(&party[bestCandidate]);

        bestMonSwitchScore = GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, opposingBattler, FALSE);

        if(bestMonSwitchScore < 10){
            return FALSE;
        } else {
            gBattleStruct->aiMoveOrAction[battler] = teleport;
            return FALSE;
        }
    } else if(shouldSwitchLiberal){
        bestCandidate = GetMostSuitableMonToSwitchInto(battler, FALSE);

        InitializeSwitchinCandidate(&party[bestCandidate]);

        bestMonSwitchScore = GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, opposingBattler, FALSE);

        if(bestMonSwitchScore <= 3){
            return FALSE;
        } else {
                gBattleStruct->AI_monToSwitchIntoId[battler] = bestCandidate;
                //if (emitResult)
                    BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_SWITCH, 0);
                return TRUE;
        }
    } else if (shouldSwitchStandard){
        bestCandidate = GetMostSuitableMonToSwitchInto(battler, FALSE);

        InitializeSwitchinCandidate(&party[bestCandidate]);

        bestMonSwitchScore = GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, opposingBattler, FALSE);

        if(bestMonSwitchScore < 10){
            return FALSE;
        } else {
                gBattleStruct->AI_monToSwitchIntoId[battler] = bestCandidate;
                //if (emitResult)
                    BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_SWITCH, 0);
                return TRUE;
        }
    } else {
        return FALSE;
    }

    return FALSE;
}

bool32 IsSwitchinValid(u32 battler)
{
    // Edge case: See if partner already chose to switch into the same mon
    if (IsDoubleBattle())
    {
        u32 partner = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerAtPosition(battler)));
        if (gBattleStruct->AI_monToSwitchIntoId[battler] == PARTY_SIZE) // Generic switch
        {
            if ((AI_DATA->shouldSwitch & (1u << partner)) && AI_DATA->monToSwitchInId[partner] == AI_DATA->mostSuitableMonId[battler])
            {
                return FALSE;
            }
        }
        else // Override switch
        {
            if ((AI_DATA->shouldSwitch & (1u << partner)) && AI_DATA->monToSwitchInId[partner] == gBattleStruct->AI_monToSwitchIntoId[battler])
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
        if (AI_DATA->shouldSwitch & (1u << battler) && IsSwitchinValid(battler))
        {
            BtlController_EmitTwoReturnValues(battler, 1, B_ACTION_SWITCH, 0);
            if (gBattleStruct->AI_monToSwitchIntoId[battler] == PARTY_SIZE)
            {
                s32 monToSwitchId = AI_DATA->mostSuitableMonId[battler];
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

            *(gBattleStruct->monToSwitchIntoId + battler) = gBattleStruct->AI_monToSwitchIntoId[battler];
            AI_DATA->monToSwitchInId[battler] = gBattleStruct->AI_monToSwitchIntoId[battler];
            return;
        }
        else if (ShouldUseItem(battler))
        {
            return;
        }
    }

    BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_USE_MOVE, BATTLE_OPPOSITE(battler) << 8);
}

u32 GetSwitchInSpeedStatArgs(struct BattlePokemon battleMon, u32 battler, u32 ability, u32 holdEffect){
    u32 speed = battleMon.speed;

    // weather abilities
    if (WEATHER_HAS_EFFECT)
    {
        if (ability == ABILITY_SWIFT_SWIM       && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_RAIN)
            speed *= 2;
        else if (ability == ABILITY_CHLOROPHYLL && holdEffect != HOLD_EFFECT_UTILITY_UMBRELLA && gBattleWeather & B_WEATHER_SUN)
            speed *= 2;
        else if (ability == ABILITY_SAND_RUSH   && gBattleWeather & B_WEATHER_SANDSTORM)
            speed *= 2;
        else if (ability == ABILITY_SLUSH_RUSH  && (gBattleWeather & (B_WEATHER_HAIL | B_WEATHER_SNOW)))
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
        uq4_12_t bestResist = UQ_4_12(1.0);
        int bestMonId = PARTY_SIZE;
        // Find the mon whose type is the most suitable defensively.
        for (i = firstId; i < lastId; i++)
        {
            if (!((1u << i) & invalidMons) && !((1u << i) & bits))
            {
                u16 species = GetMonData(&party[i], MON_DATA_SPECIES);
                uq4_12_t typeEffectiveness = UQ_4_12(1.0);

                u8 atkType1 = gBattleMons[opposingBattler].types[0];
                u8 atkType2 = gBattleMons[opposingBattler].types[1];
                u8 defType1 = gSpeciesInfo[species].types[0];
                u8 defType2 = gSpeciesInfo[species].types[1];

                typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType1, defType1)));
                if (atkType2 != atkType1)
                    typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType2, defType1)));
                if (defType2 != defType1)
                {
                    typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType1, defType2)));
                    if (atkType2 != atkType1)
                        typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType2, defType2)));
                }
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
                if (move != MOVE_NONE && AI_GetMoveEffectiveness(move, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
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
    u32 rollType = GetDmgRollType(battler);

    u32 aiMove;

    gMoveResultFlags = 0;
    // If we couldn't find the best mon in terms of typing, find the one that deals most damage.
    for (i = firstId; i < lastId; i++)
    {
        if ((1 << (i)) & invalidMons)
            continue;
        InitializeSwitchinCandidate(&party[i]);
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            aiMove = AI_DATA->switchinCandidate.battleMon.moves[j];
            if (aiMove != MOVE_NONE && !IS_MOVE_STATUS(aiMove))
            {
                aiMove = GetMonData(&party[i], MON_DATA_MOVE1 + j);
                if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_CONSERVATIVE)
                    dmg = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, AI_DATA->switchinCandidate.battleMon, TRUE, DMG_ROLL_LOWEST);
                else
                    dmg = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, AI_DATA->switchinCandidate.battleMon, TRUE, DMG_ROLL_LOWEST);
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

bool32 IsMonGrounded(u16 heldItemEffect, u32 ability, u8 type1, u8 type2)
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
    u8 defType1 = battleMon->types[0], defType2 = battleMon->types[1], tSpikesLayers;
    u16 heldItemEffect = ItemId_GetHoldEffect(battleMon->item);
    u32 maxHP = battleMon->maxHP, ability = battleMon->ability, status = battleMon->status1;
    u32 spikesDamage = 0, tSpikesDamage = 0, hazardDamage = 0;
    u32 hazardFlags = gSideStatuses[GetBattlerSide(battler)] & (SIDE_STATUS_SPIKES | SIDE_STATUS_STEALTH_ROCK | SIDE_STATUS_STICKY_WEB | SIDE_STATUS_TOXIC_SPIKES | SIDE_STATUS_SAFEGUARD);

    // Check ways mon might avoid all hazards
    if (ability != ABILITY_MAGIC_GUARD || (heldItemEffect == HOLD_EFFECT_HEAVY_DUTY_BOOTS &&
        !((gFieldStatuses & STATUS_FIELD_MAGIC_ROOM) || ability == ABILITY_KLUTZ)))
    {
        // Stealth Rock
        if ((hazardFlags & SIDE_STATUS_STEALTH_ROCK) && heldItemEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS)
            hazardDamage += GetStealthHazardDamageByTypesAndHP(gMovesInfo[MOVE_STEALTH_ROCK].type, defType1, defType2, battleMon->maxHP);
        // G-Max Steelsurge
        if ((hazardFlags & SIDE_STATUS_STEELSURGE) && heldItemEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS)
            hazardDamage += GetStealthHazardDamageByTypesAndHP(gMovesInfo[MOVE_G_MAX_STEELSURGE].type, defType1, defType2, battleMon->maxHP);
        // Spikes
        if ((hazardFlags & SIDE_STATUS_SPIKES) && IsMonGrounded(heldItemEffect, ability, defType1, defType2))
        {
            spikesDamage = maxHP / ((5 - gSideTimers[GetBattlerSide(battler)].spikesAmount) * 2);
            if (spikesDamage == 0)
                spikesDamage = 1;
            hazardDamage += spikesDamage;
        }

        if ((hazardFlags & SIDE_STATUS_TOXIC_SPIKES) && (defType1 != TYPE_POISON && defType2 != TYPE_POISON
            && defType1 != TYPE_STEEL && defType2 != TYPE_STEEL
            && ability != ABILITY_IMMUNITY && ability != ABILITY_POISON_HEAL && ability != ABILITY_COMATOSE
            && status == 0
            && !(hazardFlags & SIDE_STATUS_SAFEGUARD)
            && !(IsAbilityOnSide(battler, ABILITY_PASTEL_VEIL))
            && !(IsBattlerTerrainAffected(battler, STATUS_FIELD_MISTY_TERRAIN))
            && !(IsAbilityStatusProtected(battler))
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
    s32 weatherImpact = 0, maxHP = AI_DATA->switchinCandidate.battleMon.maxHP, ability = AI_DATA->switchinCandidate.battleMon.ability;
    u32 holdEffect = ItemId_GetHoldEffect(AI_DATA->switchinCandidate.battleMon.item);

    if (WEATHER_HAS_EFFECT)
    {
        // Damage
        if (holdEffect != HOLD_EFFECT_SAFETY_GOGGLES && ability != ABILITY_MAGIC_GUARD && ability != ABILITY_OVERCOAT)
        {
            if ((gBattleWeather & B_WEATHER_HAIL)
             && (AI_DATA->switchinCandidate.battleMon.types[0] != TYPE_ICE || AI_DATA->switchinCandidate.battleMon.types[1] != TYPE_ICE)
             && ability != ABILITY_SNOW_CLOAK && ability != ABILITY_ICE_BODY)
            {
                weatherImpact = maxHP / 16;
                if (weatherImpact == 0)
                    weatherImpact = 1;
            }
            else if ((gBattleWeather & B_WEATHER_SANDSTORM)
                && (AI_DATA->switchinCandidate.battleMon.types[0] != TYPE_GROUND && AI_DATA->switchinCandidate.battleMon.types[1] != TYPE_GROUND
                && AI_DATA->switchinCandidate.battleMon.types[0] != TYPE_ROCK && AI_DATA->switchinCandidate.battleMon.types[1] != TYPE_ROCK
                && AI_DATA->switchinCandidate.battleMon.types[0] != TYPE_STEEL && AI_DATA->switchinCandidate.battleMon.types[1] != TYPE_STEEL
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
    u32 recurringHealing = 0, maxHP = AI_DATA->switchinCandidate.battleMon.maxHP, ability = AI_DATA->switchinCandidate.battleMon.ability;
    u32 holdEffect = ItemId_GetHoldEffect(AI_DATA->switchinCandidate.battleMon.item);

    // Items
    if (ability != ABILITY_KLUTZ)
    {
        if (holdEffect == HOLD_EFFECT_BLACK_SLUDGE && (AI_DATA->switchinCandidate.battleMon.types[0] == TYPE_POISON || AI_DATA->switchinCandidate.battleMon.types[1] == TYPE_POISON))
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
    if (ability == ABILITY_POISON_HEAL && (AI_DATA->switchinCandidate.battleMon.status1 & STATUS1_POISON))
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
    u32 passiveDamage = 0, maxHP = AI_DATA->switchinCandidate.battleMon.maxHP, ability = AI_DATA->switchinCandidate.battleMon.ability;
    u32 holdEffect = ItemId_GetHoldEffect(AI_DATA->switchinCandidate.battleMon.item);

    // Items
    if (ability != ABILITY_MAGIC_GUARD && ability != ABILITY_KLUTZ)
    {
        if (holdEffect == HOLD_EFFECT_BLACK_SLUDGE && AI_DATA->switchinCandidate.battleMon.types[0] != TYPE_POISON && AI_DATA->switchinCandidate.battleMon.types[1] != TYPE_POISON)
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
            if(passiveDamage == 0)
                passiveDamage = 1;
        }
    }
    return passiveDamage;
}

// Gets one turn of status damage
static u32 GetSwitchinStatusDamage(u32 battler)
{
    u8 defType1 = AI_DATA->switchinCandidate.battleMon.types[0], defType2 = AI_DATA->switchinCandidate.battleMon.types[1];
    u8 tSpikesLayers = gSideTimers[GetBattlerSide(battler)].toxicSpikesAmount;
    u16 heldItemEffect = ItemId_GetHoldEffect(AI_DATA->switchinCandidate.battleMon.item);
    u32 status = AI_DATA->switchinCandidate.battleMon.status1, ability = AI_DATA->switchinCandidate.battleMon.ability, maxHP = AI_DATA->switchinCandidate.battleMon.maxHP;
    u32 statusDamage = 0;

    // Status condition damage
    if ((status != 0) && AI_DATA->switchinCandidate.battleMon.ability != ABILITY_MAGIC_GUARD)
    {
        if (status & STATUS1_BURN)
        {
            if (B_BURN_DAMAGE >= GEN_7)
                statusDamage = maxHP / 16;
            else
                statusDamage = maxHP / 8;
            if(ability == ABILITY_HEATPROOF)
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
                AI_DATA->switchinCandidate.battleMon.status1 += STATUS1_TOXIC_TURN(1);
            statusDamage = maxHP / 16;
            if (statusDamage == 0)
                statusDamage = 1;
            statusDamage *= AI_DATA->switchinCandidate.battleMon.status1 & STATUS1_TOXIC_COUNTER >> 8;
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
            AI_DATA->switchinCandidate.battleMon.status1 = STATUS1_POISON; // Assign "hypothetical" status to the switchin candidate so we can get the damage it would take from TSpikes
            AI_DATA->switchinCandidate.hypotheticalStatus = TRUE;
        }
        if (tSpikesLayers == 2)
        {
            AI_DATA->switchinCandidate.battleMon.status1 = STATUS1_TOXIC_POISON; // Assign "hypothetical" status to the switchin candidate so we can get the damage it would take from TSpikes
            AI_DATA->switchinCandidate.battleMon.status1 += STATUS1_TOXIC_TURN(1);
            AI_DATA->switchinCandidate.hypotheticalStatus = TRUE;
        }
    }
    return statusDamage;
}

// Gets number of hits to KO factoring in hazards, healing held items, status, and weather
static u32 GetSwitchinHitsToKO(s32 damageTaken, u32 battler)
{
    u32 startingHP = AI_DATA->switchinCandidate.battleMon.hp - GetSwitchinHazardsDamage(battler, &AI_DATA->switchinCandidate.battleMon);
    s32 weatherImpact = GetSwitchinWeatherImpact(); // Signed to handle both damage and healing in the same value
    u32 recurringDamage = GetSwitchinRecurringDamage();
    u32 recurringHealing = GetSwitchinRecurringHealing();
    u32 statusDamage = GetSwitchinStatusDamage(battler);
    u32 hitsToKO = 0, singleUseItemHeal = 0;
    u16 maxHP = AI_DATA->switchinCandidate.battleMon.maxHP, item = AI_DATA->switchinCandidate.battleMon.item, heldItemEffect = ItemId_GetHoldEffect(item);
    u8 weatherDuration = gWishFutureKnock.weatherDuration, holdEffectParam = ItemId_GetHoldEffectParam(item);
    u32 opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
    u32 opposingAbility = gBattleMons[opposingBattler].ability, ability = AI_DATA->switchinCandidate.battleMon.ability;
    bool32 usedSingleUseHealingItem = FALSE, opponentCanBreakMold = IsMoldBreakerTypeAbility(opposingBattler, opposingAbility);
    s32 currentHP = startingHP;

    // No damage being dealt
    if ((damageTaken + statusDamage + recurringDamage <= recurringHealing) || damageTaken + statusDamage + recurringDamage == 0)
        return startingHP;

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
        if (damageTaken >= maxHP && currentHP == maxHP && (heldItemEffect == HOLD_EFFECT_FOCUS_SASH || (!opponentCanBreakMold && B_STURDY >= GEN_5 && ability == ABILITY_STURDY)))
            currentHP = 1;

        // If mon is still alive, apply weather impact first, as it might KO the mon before it can heal with its item (order is weather -> item -> status)
        if (currentHP != 0)
            currentHP = currentHP - weatherImpact;

        // Check if we're at a single use healing item threshold
        if (AI_DATA->switchinCandidate.battleMon.ability != ABILITY_KLUTZ && usedSingleUseHealingItem == FALSE
         && !(opposingAbility == ABILITY_UNNERVE && GetPocketByItemId(item) == POCKET_BERRIES))
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
        if (currentHP >= 0)
            currentHP = currentHP + recurringHealing - recurringDamage - statusDamage;

        // Recalculate toxic damage if needed
        if (AI_DATA->switchinCandidate.battleMon.status1 & STATUS1_TOXIC_POISON)
            statusDamage = GetSwitchinStatusDamage(battler);

        // Reduce weather duration
        if (weatherDuration != 0)
            weatherDuration--;

        hitsToKO++;
    }

    // Disguise will always add an extra hit to KO
    if (opponentCanBreakMold && AI_DATA->switchinCandidate.battleMon.species == SPECIES_MIMIKYU_DISGUISED)
        hitsToKO++;

    // If mon had a hypothetical status from TSpikes, clear it
    if (AI_DATA->switchinCandidate.hypotheticalStatus == TRUE)
    {
        AI_DATA->switchinCandidate.battleMon.status1 = 0;
        AI_DATA->switchinCandidate.hypotheticalStatus = FALSE;
    }
    return hitsToKO;
}

static u16 GetSwitchinTypeMatchup(u32 opposingBattler, struct BattlePokemon battleMon)
{

    // Check type matchup
    u16 typeEffectiveness = UQ_4_12(1.0);
    u8 atkType1 = gSpeciesInfo[gBattleMons[opposingBattler].species].types[0], atkType2 = gSpeciesInfo[gBattleMons[opposingBattler].species].types[1],
    defType1 = battleMon.types[0], defType2 = battleMon.types[1];

    // Multiply type effectiveness by a factor depending on type matchup
    typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType1, defType1)));
    if (atkType2 != atkType1)
        typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType2, defType1)));
    if (defType2 != defType1)
    {
        typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType1, defType2)));
        if (atkType2 != atkType1)
            typeEffectiveness = uq4_12_multiply(typeEffectiveness, (GetTypeModifier(atkType2, defType2)));
    }
    return typeEffectiveness;
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
    else if (ability == ABILITY_PRANKSTER && IS_MOVE_STATUS(move))
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
    u32 switchScore = 0;
    bool32 fastTrapper = FALSE, slowTrapper = FALSE, fastRevengeKiller = FALSE, slowRevengeKiller = FALSE;
    bool32 fastThreaten = FALSE, slowThreaten = FALSE, faster = FALSE, slowKilled = FALSE, fastKilled = FALSE;
    u32 aiMove = 0, playerMove = 0, hitsToKOAI, hitsToKOPlayer;
    s32 playerAbility = gBattleMons[opposingBattler].ability;
    s32 playerHoldEffect = ItemId_GetHoldEffect(gBattleMons[opposingBattler].item);
    s32 aiMonAbility = battleMon.ability;
    s32 aiMonHoldEffect = ItemId_GetHoldEffect(battleMon.item);
    u32 playerMonSpeed = GetBattlerTotalSpeedStatArgs(opposingBattler, playerAbility, playerHoldEffect);
    u32 aiMonSpeed = GetSwitchInSpeedStatArgs(battleMon, battler, aiMonAbility, aiMonHoldEffect);
    s32 aiMovePriority = 0, playerMovePriority = 0, maxDamageDealt = 0, damageDealt = 0;
    u8 i = 0, j = 0;
    u32 bestPlayerMove = 0, bestAIMove = 0;
    u32 bestHitsToKOAI = INT_MAX, bestHitsToKOPlayer = INT_MAX;
    s32 highestDmgtoSwitchIn = 0;
    bool32 canDieOnSwitch = FALSE;
    bool32 takesOverAThirdOnSwitch = FALSE;
    bool32 takesOverAThirdFromHazards = FALSE;
    u32 hazardDamage = 0;
    s32 calcHP = battleMon.hp;
    s32 bestPlayerDmg = 0;
    s32 bestAIDmg = 0;

    //always returns 10 if species is ditto
    if(battleMon.species == SPECIES_DITTO && switchAfterMonKOd){
        switchScore = 10;
        return switchScore;
    }


    hazardDamage = GetSwitchinHazardsDamage(battler, &battleMon);

    if(!switchAfterMonKOd){
       highestDmgtoSwitchIn = GetMaxDamagePlayerCouldDealToSwitchin(battler, opposingBattler, battleMon);
       if(highestDmgtoSwitchIn >= battleMon.hp){
            canDieOnSwitch = TRUE;
       } else if (highestDmgtoSwitchIn*3 >= battleMon.hp){
            takesOverAThirdOnSwitch = TRUE;
       }

       calcHP = (battleMon.hp - highestDmgtoSwitchIn);
       
       if (hazardDamage*3 >= calcHP){
            takesOverAThirdFromHazards = TRUE;
       }

       if(aiMonHoldEffect == HOLD_EFFECT_FOCUS_SASH || aiMonHoldEffect == HOLD_EFFECT_AIR_BALLOON || (aiMonHoldEffect == HOLD_EFFECT_RESIST_BERRY 
        && HasDamagingMoveOfType(opposingBattler, ItemId_GetHoldEffectParam(battleMon.item)))){
            aiMonHoldEffect == HOLD_EFFECT_NONE;
       }
    }

    if(hazardDamage > calcHP)
        calcHP = 0;
    else
        calcHP -= hazardDamage;

    if((gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_STICKY_WEB) && aiMonHoldEffect != HOLD_EFFECT_RESTORE_STATS
        && aiMonHoldEffect != HOLD_EFFECT_HEAVY_DUTY_BOOTS && aiMonHoldEffect != HOLD_EFFECT_CLEAR_AMULET && IsPartyMonGrounded(battleMon, battler, aiMonHoldEffect)
        && aiMonAbility != ABILITY_CLEAR_BODY && aiMonAbility != ABILITY_WHITE_SMOKE && aiMonAbility != ABILITY_FULL_METAL_BODY
        && !(gSideStatuses[GetBattlerSide(battler)] & SIDE_STATUS_MIST)){
        aiMonSpeed *= 2;
        aiMonSpeed /= 3;
    }

    if(!switchAfterMonKOd && aiMonAbility == ABILITY_MULTISCALE){
        aiMonAbility ==  ABILITY_NONE;
    }

    if(!switchAfterMonKOd && aiMonAbility == ABILITY_STURDY){
        aiMonAbility ==  ABILITY_NONE;
    }

    // Get best move for player to use on switch in candidate
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        playerMovePriority = GetMovePriority(opposingBattler, playerMove);

        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && gMovesInfo[playerMove].effect != EFFECT_EXPLOSION)
        {
            damageDealt = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, FALSE, DMG_ROLL_LOWEST);
            if(CalcPartyMonTypeEffectivenessMultiplier(playerMove, battleMon.species, aiMonAbility) == UQ_4_12(0.0) && !IsMoldBreakerTypeAbility(battler, playerAbility)){
                damageDealt = 0;
            }
            hitsToKOAI = GetNoOfHitsToKO(damageDealt, calcHP);

            //continues if move does 0 damage
            if(damageDealt == 0){
                continue;
            }

            //sets hits to 2 if would ohko but blocked by sash or sturdy
            if(hitsToKOAI == 1 && PartyMonHasInTactFocusSashSturdy(battler, opposingBattler, playerMove, aiMonHoldEffect, aiMonAbility, battleMon, TRUE) && (battleMon.hp == battleMon.maxHP)){
                hitsToKOAI++;
            }

            //look at only damage if moves dont kill, if moves do kill break ties with priority
            if(hitsToKOAI > 1){
                if(hitsToKOAI <= bestHitsToKOAI && damageDealt > bestPlayerDmg){
                    bestPlayerDmg = damageDealt;
                    bestHitsToKOAI = hitsToKOAI;
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                } else if (hitsToKOAI <= bestHitsToKOAI && damageDealt == bestPlayerDmg && playerMovePriority > GetMovePriority(opposingBattler, bestPlayerMove)){
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                }
            } else {
                if(hitsToKOAI < bestHitsToKOAI){
                    bestPlayerDmg = damageDealt;
                    bestHitsToKOAI = hitsToKOAI;
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                } else if (hitsToKOAI == bestHitsToKOAI && playerMovePriority > GetMovePriority(opposingBattler, bestPlayerMove)){
                    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
                }
            }
            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            //if(hitsToKOAI < bestHitsToKOAI){
            //    bestHitsToKOAI = hitsToKOAI;
            //    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
            //} else if (hitsToKOAI == bestHitsToKOAI && playerMovePriority > gMovesInfo[bestPlayerMove].priority){
            //    bestPlayerMove = gBattleMons[opposingBattler].moves[i];
            //}
        }
    }

    // Get best move for candidate to use on player
    for (j = 0; j < MAX_MON_MOVES; j++)
    {
        aiMove = battleMon.moves[j];
        aiMovePriority = GetPartyMovePriority(battleMon, aiMove, aiMonAbility);

        if (aiMove != MOVE_NONE && gMovesInfo[aiMove].power != 0 && gMovesInfo[aiMove].effect != EFFECT_EXPLOSION)
        {
            damageDealt = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, battleMon, TRUE, DMG_ROLL_LOWEST);
            if(gMovesInfo[aiMove].effect == EFFECT_RETALIATE && switchAfterMonKOd)
                damageDealt *= 2;
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
            //gets best move based on hits to KO, if hits to KO are tied, best move is based on highest prio
            //if(hitsToKOPlayer < bestHitsToKOPlayer){
            //    bestHitsToKOPlayer = hitsToKOPlayer;
            //    bestAIMove = aiMove;
            //} else if (hitsToKOPlayer == bestHitsToKOPlayer && aiMovePriority > gMovesInfo[bestAIMove].priority){
            //    bestAIMove = aiMove;
            //}

            //if ai has pursuit kill, set pursuit to best move then break for loop
            //if(hitsToKOPlayer == 1 && aiMove == MOVE_PURSUIT){
            //    bestAIMove = aiMove;
            //    break;
            //}
        }
    }

    //faster bool represents whether or not the AI is faster
    if(GetPartyMovePriority(battleMon, bestAIMove, aiMonAbility) > GetMovePriority(opposingBattler, bestPlayerMove)){
        faster = TRUE;
    } else if (GetMovePriority(opposingBattler, bestPlayerMove) > GetPartyMovePriority(battleMon, bestAIMove, aiMonAbility)){
        faster = FALSE;
    } else if (aiMonSpeed >= playerMonSpeed){
        //move prios are tied
        faster = TRUE;
    }

    //reverse faster value if trick room on field
    if(gFieldStatuses & STATUS_FIELD_TRICK_ROOM){
        if(faster){
            faster = FALSE;
        } else {
            faster = TRUE;
        }
    }

    if(bestHitsToKOAI == 1)
    {
        if(faster){
            slowKilled = TRUE;
        } else {
            fastKilled = TRUE;
        }
    }

    if((battleMon.species == SPECIES_WOBBUFFET || battleMon.species == SPECIES_WYNAUT) && !fastKilled && switchAfterMonKOd){
        switchScore = 10;
        return switchScore;
    }

    if(bestHitsToKOPlayer == 1)
    {
        if(faster){
            fastRevengeKiller = TRUE;
            if ((CanAbilityTrapOpponent(battleMon.ability, opposingBattler) && gBattleMons[opposingBattler].item != ITEM_SHED_SHELL) || bestAIMove == MOVE_PURSUIT){
                fastTrapper = TRUE;
            }
        } else {
            slowRevengeKiller = TRUE;
            if ((CanAbilityTrapOpponent(battleMon.ability, opposingBattler) && gBattleMons[opposingBattler].item != ITEM_SHED_SHELL) || bestAIMove == MOVE_PURSUIT){
                slowTrapper = TRUE;
            }
        }
    }

    if((bestHitsToKOPlayer <= bestHitsToKOAI) && faster){
        fastThreaten = TRUE;
    }

    if((bestHitsToKOPlayer < bestHitsToKOAI) && !faster){
        slowThreaten = TRUE;
    }

    if (fastKilled == TRUE)                 return 0;
    if(!switchAfterMonKOd){
        if(canDieOnSwitch == TRUE)                              return 0;
        else if (slowKilled == TRUE)                            return 3;
        else if(takesOverAThirdOnSwitch == TRUE && !faster)     return 8;
        else if(takesOverAThirdOnSwitch == TRUE)                return 9;
        else if(takesOverAThirdFromHazards == TRUE && !faster)  return 8;
        else if(takesOverAThirdFromHazards == TRUE)             return 9;
        else if(battleMon.species == SPECIES_WOBBUFFET || battleMon.species == SPECIES_WYNAUT)
            return 10;
    }
    if (fastTrapper == TRUE)                return 15;
    else if (slowTrapper == TRUE)           return 14;
    else if (fastRevengeKiller == TRUE)     return 13;
    else if (slowKilled == TRUE)            return 3;
    else if (slowRevengeKiller == TRUE)     return 12;
    else if (fastThreaten == TRUE)          return 11;
    else if (slowThreaten == TRUE)          return 10;
    else if (faster == TRUE)                return 9;
    else                                    return 8;

    return switchScore;
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
    s32 damageTaken = 0, maxDamageTaken = 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && gMovesInfo[playerMove].effect != EFFECT_EXPLOSION)
        {
            damageTaken = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, FALSE, DMG_ROLL_LOWEST);
            if(CalcPartyMonTypeEffectivenessMultiplier(playerMove, battleMon.species, battleMon.ability) == UQ_4_12(0.0) && !IsMoldBreakerTypeAbility(opposingBattler, gBattleMons[opposingBattler].ability)){
                damageTaken = 0;
            }
            if (damageTaken >= battleMon.hp && PartyMonHasInTactFocusSashSturdy(battler, opposingBattler, playerMove, ItemId_GetHoldEffect(gBattleMons[battler].item), GetBattlerAbility(battler), battleMon, TRUE) && battleMon.hp == battleMon.maxHP){
                damageTaken = (battleMon.hp - 1);
            }
            if (damageTaken > maxDamageTaken)
                maxDamageTaken = damageTaken;
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

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        playerMove = gBattleMons[opposingBattler].moves[i];
        if (playerMove != MOVE_NONE && gMovesInfo[playerMove].power != 0 && gMovesInfo[playerMove].effect != EFFECT_EXPLOSION)
        {
            damageTaken = AI_CalcPartyMonDamage(playerMove, opposingBattler, battler, battleMon, FALSE, DMG_ROLL_LOWEST);
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

static bool32 CanAbilityTrapOpponent(u16 ability, u32 opponent)
{
    if ((B_GHOSTS_ESCAPE >= GEN_6 && IS_BATTLER_OF_TYPE(opponent, TYPE_GHOST)))
        return FALSE;
    else if (ability == ABILITY_SHADOW_TAG)
    {
        if (B_SHADOW_TAG_ESCAPE >= GEN_4 && AI_DATA->abilities[opponent] == ABILITY_SHADOW_TAG) // Check if ability exists in species
            return FALSE;
        else
            return TRUE;
    }
    else if (ability == ABILITY_ARENA_TRAP && IsBattlerGrounded(opponent))
        return TRUE;
    else if (ability == ABILITY_MAGNET_PULL && IS_BATTLER_OF_TYPE(opponent, TYPE_STEEL))
        return TRUE;
    else
        return FALSE;
}

static inline bool32 IsFreeSwitch(bool32 isSwitchAfterKO, u32 battlerSwitchingOut, u32 opposingBattler)
{
    bool32 movedSecond = GetBattlerTurnOrderNum(battlerSwitchingOut) > GetBattlerTurnOrderNum(opposingBattler) ? TRUE : FALSE;

    // Switch out effects
    if (!IsDoubleBattle()) // Not handling doubles' additional complexity
    {
        if (IsSwitchOutEffect(gMovesInfo[gLastUsedMove].effect) && movedSecond)
            return TRUE;
        if (AI_DATA->ejectButtonSwitch)
            return TRUE;
        if (AI_DATA->ejectPackSwitch)
        {
            // If faster, not a free switch; likely lowered own stats
            if (!movedSecond)
                return FALSE;
            // Otherwise, free switch
            return TRUE;
        }
    }

    // Post KO check has to be last because the GetMostSuitableMonToSwitchInto call in OpponentHandleChoosePokemon assumes a KO rather than a forced switch choice
    if (isSwitchAfterKO)
        return TRUE;
    else
        return FALSE;
}

static inline bool32 CanSwitchinWin1v1(u32 hitsToKOAI, u32 hitsToKOPlayer, bool32 isSwitchinFirst, bool32 isFreeSwitch)
{
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
static u32 GetBestMonIntegrated(struct Pokemon *party, int firstId, int lastId, u32 battler, u32 opposingBattler, u32 battlerIn1, u32 battlerIn2, bool32 isSwitchAfterKO)
{
    int switchScore = 0;
    int revengeKillerId = PARTY_SIZE, slowRevengeKillerId = PARTY_SIZE, fastThreatenId = PARTY_SIZE, slowThreatenId = PARTY_SIZE, damageMonId = PARTY_SIZE;
    int batonPassId = PARTY_SIZE, typeMatchupId = PARTY_SIZE, typeMatchupEffectiveId = PARTY_SIZE, defensiveMonId = PARTY_SIZE, aceMonId = PARTY_SIZE, trapperId = PARTY_SIZE;
    int i, j, aliveCount = 0, bits = 0, aceMonCount = 0;
    s32 defensiveMonHitKOThreshold = 3; // 3HKO threshold that candidate defensive mons must exceed
    s32 playerMonHP = gBattleMons[opposingBattler].hp, maxDamageDealt = 0, damageDealt = 0;
    u32 aiMove, hitsToKOAI, maxHitsToKO = 0;
    u16 bestResist = UQ_4_12(1.0), bestResistEffective = UQ_4_12(1.0), typeMatchup;
    bool32 isFreeSwitch = IsFreeSwitch(isSwitchAfterKO, battlerIn1, opposingBattler), isSwitchinFirst, canSwitchinWin1v1;

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
        // Save Ace Pokemon for last
        else if (IsAceMon(battler, i))
        {
            aceMonId = i;
            aceMonCount++;
            continue;
        }
        else
            aliveCount++;

        InitializeSwitchinCandidate(&party[i]);

        // Get max number of hits for player to KO AI mon
        hitsToKOAI = GetSwitchinHitsToKO(GetMaxDamagePlayerCouldDealToSwitchin(battler, opposingBattler, AI_DATA->switchinCandidate.battleMon), battler);
        typeMatchup = GetSwitchinTypeMatchup(opposingBattler, AI_DATA->switchinCandidate.battleMon);

        // Track max hits to KO and set defensive mon
        if(hitsToKOAI > maxHitsToKO)
        {
            maxHitsToKO = hitsToKOAI;
            if(maxHitsToKO > defensiveMonHitKOThreshold)
                defensiveMonId = i;
        }

        // Check through current mon's moves
        for (j = 0; j < MAX_MON_MOVES; j++)
        {
            aiMove = AI_DATA->switchinCandidate.battleMon.moves[j];

            if (aiMove != MOVE_NONE && !IS_MOVE_STATUS(aiMove))
            {
                if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_CONSERVATIVE)
                    damageDealt = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, AI_DATA->switchinCandidate.battleMon, TRUE, DMG_ROLL_LOWEST);
                else
                    damageDealt = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, AI_DATA->switchinCandidate.battleMon, TRUE, DMG_ROLL_DEFAULT);
            }

            // Offensive switchin decisions are based on which whether switchin moves first and whether it can win a 1v1
            isSwitchinFirst = AI_WhoStrikesFirstPartyMon(battler, opposingBattler, AI_DATA->switchinCandidate.battleMon, aiMove);
            canSwitchinWin1v1 = CanSwitchinWin1v1(hitsToKOAI, GetNoOfHitsToKOBattlerDmg(damageDealt, opposingBattler), isSwitchinFirst, isFreeSwitch);

            // Check for Baton Pass; hitsToKO requirements mean mon can boost and BP without dying whether it's slower or not
            if (aiMove == MOVE_BATON_PASS)
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

            // Check for mon with resistance and super effective move for best type matchup mon with effective move
            if (aiMove != MOVE_NONE && !IS_MOVE_STATUS(aiMove))
            {
                if (typeMatchup < bestResistEffective)
                {
                    if (AI_GetMoveEffectiveness(aiMove, battler, opposingBattler) >= AI_EFFECTIVENESS_x2)
                    {
                        if (canSwitchinWin1v1)
                        {
                            bestResistEffective = typeMatchup;
                            typeMatchupEffectiveId = i;
                        }
                    }
                }

                // If a self destruction move doesn't OHKO, don't factor it into revenge killing
                if (gMovesInfo[aiMove].effect == EFFECT_EXPLOSION && damageDealt < playerMonHP)
                    continue;

                // Check that mon isn't one shot and set best damage mon
                if (damageDealt > maxDamageDealt)
                {
                    if((isFreeSwitch && hitsToKOAI > 1) || hitsToKOAI > 2) // This is a "default", we have uniquely low standards
                    {
                        maxDamageDealt = damageDealt;
                        damageMonId = i;
                    }
                }

                // Check if current mon can revenge kill in some capacity
                // If AI mon can one shot
                if (damageDealt > playerMonHP)
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
                if (damageDealt > playerMonHP / 2)
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
                if (CanAbilityTrapOpponent(AI_DATA->switchinCandidate.battleMon.ability, opposingBattler)
                    && CountUsablePartyMons(opposingBattler) > 0
                    && canSwitchinWin1v1)
                    trapperId = i;
            }
        }
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
    }
    // If ace mon is the last available Pokemon and U-Turn/Volt Switch was used - switch to the mon.
    if (aceMonId != PARTY_SIZE && CountUsablePartyMons(battler) <= aceMonCount && IsSwitchOutEffect(gMovesInfo[gLastUsedMove].effect))
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

u32 GetMostSuitableMonToSwitchInto(u32 battler, bool32 switchAfterMonKOd)
{
    u32 opposingBattler = 0;
    u32 bestMonId = PARTY_SIZE;
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

    //if (*(gBattleStruct->monToSwitchIntoId + battler) != PARTY_SIZE)
    //    return *(gBattleStruct->monToSwitchIntoId + battler);
    //if (gBattleTypeFlags & BATTLE_TYPE_ARENA)
    //    return gBattlerPartyIndexes[battler] + 1;

    if (IsDoubleBattle())
    {
        battlerIn1 = battler;
        if (gAbsentBattlerFlags & (1u << GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)))))
            battlerIn2 = battler;
        else
            battlerIn2 = GetBattlerAtPosition(BATTLE_PARTNER(GetBattlerPosition(battler)));

        opposingBattler = BATTLE_OPPOSITE(battlerIn1);
        if (gAbsentBattlerFlags & (1u << opposingBattler))
            opposingBattler ^= BIT_FLANK;

    } else {
        opposingBattler = GetBattlerAtPosition(BATTLE_OPPOSITE(GetBattlerPosition(battler)));
        battlerIn1 = battler;
        battlerIn2 = battler;
    }

    GetAIPartyIndexes(battler, &firstId, &lastId);
    party = GetBattlerParty(battler);

    if (AI_THINKING_STRUCT->aiFlags[battler] & AI_FLAG_SEQUENCE_SWITCHING)
    {
        bestMonId = GetNextMonInParty(party, firstId, lastId, battlerIn1, battlerIn2);
        return bestMonId;
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

            switchScore = GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, BATTLE_OPPOSITE(battlerIn1), switchAfterMonKOd) + GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, BATTLE_OPPOSITE(battlerIn2), switchAfterMonKOd);
            if(switchScore > highestSwitchScore){
                highestSwitchScore = switchScore;
                bestMonId = i;
            }
        }

        return bestMonId;
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

        switchScore = GetMonSwitchScore(AI_DATA->switchinCandidate.battleMon, battler, opposingBattler, switchAfterMonKOd);
        if(currentMonArray[0] == switchScore){
            currentMonArray[numberOfBestMons] = switchScore;
            consideredMonArray[numberOfBestMons++] = i;
        }
        if(currentMonArray[0] < switchScore){
            numberOfBestMons = 1;
            consideredMonArray[0] = i;
            currentMonArray[0] = switchScore;
        }
    }

    u8 bestCandidate = 0;
    int bestDamage = 0;
    int damageDealt = 0;

    if(currentMonArray[0] >= 12){
        return consideredMonArray[Random() % numberOfBestMons];
    } else if (currentMonArray[0] >= 1){
        //finds mon with highest damage roll on player
        for(i = 0; i < numberOfBestMons; i++){

            InitializeSwitchinCandidate(&party[consideredMonArray[i]]);

            for (j = 0; j < MAX_MON_MOVES; j++)
            {
                aiMove = AI_DATA->switchinCandidate.battleMon.moves[j];

                if (aiMove != MOVE_NONE && gMovesInfo[aiMove].power != 0 && gMovesInfo[aiMove].effect != EFFECT_EXPLOSION)
                {
                    aiMove = GetMonData(&party[consideredMonArray[i]], MON_DATA_MOVE1 + j);
                    damageDealt = AI_CalcPartyMonDamage(aiMove, battler, opposingBattler, AI_DATA->switchinCandidate.battleMon, TRUE, DMG_ROLL_LOWEST);
                    if(gMovesInfo[aiMove].effect == EFFECT_RETALIATE && switchAfterMonKOd)
                        damageDealt *= 2;
                    if(damageDealt > bestDamage){
                        bestDamage = damageDealt;
                        bestCandidate = i;
                    }
                }
            }
        }

        return consideredMonArray[bestCandidate];
    } else {
        return consideredMonArray[0];
    }
}

static bool32 AiExpectsToFaintPlayer(u32 battler)
{
    u8 target = gBattleStruct->aiChosenTarget[battler];

    if (gBattleStruct->aiMoveOrAction[battler] > 3)
        return FALSE; // AI not planning to use move

    if (GetBattlerSide(target) != GetBattlerSide(battler)
      && CanIndexMoveFaintTarget(battler, target, gBattleStruct->aiMoveOrAction[battler], 0)
      && AI_IsFaster(battler, target, GetAIChosenMove(battler)))
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

    if (IsAiVsAiBattle())
        return FALSE;

    // If teaming up with player and Pokemon is on the right, or Pokemon is currently held by Sky Drop
    if ((gBattleTypeFlags & BATTLE_TYPE_INGAME_PARTNER && GetBattlerPosition(battler) == B_POSITION_PLAYER_RIGHT)
       || gStatuses3[battler] & STATUS3_SKY_DROPPED)
        return FALSE;

    if (gStatuses3[battler] & STATUS3_EMBARGO)
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

        item = gBattleResources->battleHistory->trainerItems[i];
        if (item == ITEM_NONE)
            continue;
        itemEffects = ItemId_GetEffect(item);
        if (itemEffects == NULL)
            continue;

        switch (ItemId_GetBattleUsage(item))
        {
        case EFFECT_ITEM_HEAL_AND_CURE_STATUS:
            shouldUse = AI_ShouldHeal(battler, 0);
            break;
        case EFFECT_ITEM_RESTORE_HP:
            shouldUse = AI_ShouldHeal(battler, itemEffects[GetItemEffectParamOffset(battler, item, 4, ITEM4_HEAL_HP)]);
            break;
        case EFFECT_ITEM_CURE_STATUS:
            if (itemEffects[3] & ITEM3_SLEEP && gBattleMons[battler].status1 & STATUS1_SLEEP)
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_POISON && (gBattleMons[battler].status1 & STATUS1_POISON
                                               || gBattleMons[battler].status1 & STATUS1_TOXIC_POISON))
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_BURN && gBattleMons[battler].status1 & STATUS1_BURN)
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_FREEZE && (gBattleMons[battler].status1 & STATUS1_FREEZE || gBattleMons[battler].status1 & STATUS1_FROSTBITE))
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_PARALYSIS && gBattleMons[battler].status1 & STATUS1_PARALYSIS)
                shouldUse = TRUE;
            if (itemEffects[3] & ITEM3_CONFUSION && gBattleMons[battler].status2 & STATUS2_CONFUSION)
                shouldUse = TRUE;
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
                || gBattleMons[battler].status2 & STATUS2_FOCUS_ENERGY_ANY
                || AI_OpponentCanFaintAiWithMod(battler, 0))
                break;
            shouldUse = TRUE;
            break;
        case EFFECT_ITEM_SET_MIST:
            battlerSide = GetBattlerSide(battler);
            if (gDisableStructs[battler].isFirstTurn && gSideTimers[battlerSide].mistTimer == 0)
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
            BtlController_EmitTwoReturnValues(battler, BUFFER_B, B_ACTION_USE_ITEM, 0);
            gBattleStruct->chosenItem[battler] = item;
            gBattleResources->battleHistory->trainerItems[i] = 0;
            return shouldUse;
        }
    }

    return FALSE;
}

static bool32 AI_ShouldHeal(u32 battler, u32 healAmount)
{
    bool32 shouldHeal = FALSE;

    if (gBattleMons[battler].hp < gBattleMons[battler].maxHP / 4
     || gBattleMons[battler].hp == 0
     || (healAmount != 0 && gBattleMons[battler].maxHP - gBattleMons[battler].hp > healAmount))
    {
        // We have low enough HP to consider healing
        shouldHeal = !AI_OpponentCanFaintAiWithMod(battler, healAmount); // if target can kill us even after we heal, why bother
    }

    return shouldHeal;
}

static bool32 AI_OpponentCanFaintAiWithMod(u32 battler, u32 healAmount)
{
    u32 i;
    // Check special cases to NOT heal
    for (i = 0; i < gBattlersCount; i++)
    {
        if (GetBattlerSide(i) == B_SIDE_PLAYER && CanTargetFaintAiWithMod(i, battler, healAmount, 0))
        {
            // Target is expected to faint us
            return TRUE;
        }
    }
    return FALSE;
}
