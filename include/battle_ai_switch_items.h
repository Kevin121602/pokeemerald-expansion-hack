#ifndef GUARD_BATTLE_AI_SWITCH_ITEMS_H
#define GUARD_BATTLE_AI_SWITCH_ITEMS_H

void GetAIPartyIndexes(u32 battlerId, s32 *firstId, s32 *lastId);
void AI_TrySwitchOrUseItem(u32 battler);
u32 GetMostSuitableMonToSwitchInto(u32 battler, bool32 switchAfterMonKOd);
bool32 ShouldSwitch(u32 battler, bool32 emitResult);
u32 GetSwitchInSpeedStatArgs(struct BattlePokemon battleMon, u32 battler, u32 ability, u32 holdEffect);
u32 GetMonSwitchScore(struct BattlePokemon battleMon, u32 battler, u32 opposingBattler, bool32 switchAfterMonKOd);

#endif // GUARD_BATTLE_AI_SWITCH_ITEMS_H
