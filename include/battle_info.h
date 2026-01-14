#ifndef GUARD_BATTLE_INFO_H
#define GUARD_BATTLE_INFO_H

#define TAG_HEALTHBAR_INFO_1 0xD791
#define TAG_HEALTHBAR_INFO_2 0xD792
#define TAG_HEALTHBAR_INFO_3 0xD793
#define TAG_HEALTHBAR_INFO_4 0xD794
#define TAG_HEALTHBAR_INFO_5 0xD795
#define TAG_HEALTHBAR_INFO_6 0xD796

#define SCREEN_PARTY    0
#define SCREEN_TIMERS   1
#define SCREEN_STATS    2

void CB2_BattleInfo(void);
void LoadBattleInfoAilmentGfx(void);

struct VolatileIndex
{
    u8 name[13];
    s32 id;
};

#endif // GUARD_BATTLE_INFO_H