#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "level_caps.h"
#include "pokemon.h"


u32 GetCurrentLevelCap(void)
{
    static const u32 sLevelCapFlagMap[][2] =
    {
        {FLAG_DEFEATED_WOODS_GRUNT, 15}, //14
        {FLAG_DEFEATED_TUNNEL_GRUNT, 18}, //17
        {FLAG_BADGE01_GET, 20}, //19
        {FLAG_DEFEATED_RILEY, 24}, //23
        {FLAG_DEFEATED_CHERYL, 27}, //26
        {FLAG_DEFEATED_MARLEY, 30}, //29
        {FLAG_DEFEATED_MIRA, 32}, //31
        {FLAG_BADGE04_GET, 36}, // 35
        {FLAG_DEFEATED_PHOEBE, 42}, //41
        {FLAG_BADGE02_GET, 44}, //43
        {FLAG_DEFEATED_AQUA_GRUNTS_SLATEPORT, 46}, //45
        {FLAG_DEFEATED_SIDNEY, 49}, //48
        {FLAG_BADGE05_GET, 51}, //50
        {FLAG_DEFEATED_CLAIR, 53}, //52
        {FLAG_DEFEATED_BROCK, 56}, //55
        {FLAG_DEFEATED_BRUNO, 57}, //56
        {FLAG_DEFEATED_LANCE, 58}, //57
        {FLAG_DEFEATED_MAXIE, 60}, //59
        {FLAG_BADGE08_GET, 62}, //61
        {FLAG_DEFEATED_119_RIVAL, 65}, //64
        {FLAG_DEFEATED_SHELLY, 66}, //65
        {FLAG_DEFEATED_KOGA_JANINE, 68}, //67
        {FLAG_BADGE06_GET, 69}, //68
        {FLAG_DEFEATED_LILYCOVE_RIVAL, 70}, //69
        {FLAG_DEFEATED_MATT, 72}, //71
        {FLAG_DEFEATED_WHITNEY, 75}, //74
        {FLAG_DEFEATED_RED_GREEN_BLUE, 77}, //76
        {FLAG_BADGE07_GET, 79}, //78
        {FLAG_DEFEATED_CYRUS, 81}, //80
        {FLAG_DEFEATED_ARCHIE, 85}, //84
        {FLAG_DEFEATED_CLAIR_LANCE, 88}, //87
        {FLAG_DEFEATED_SPENSER, 90}, //89
        {FLAG_DEFEATED_110_RIVAL, 92}, //91
        {FLAG_BADGE03_GET, 94}, //93
        {FLAG_IS_CHAMPION, 100}, //99
    };

    u32 i;

    if (B_LEVEL_CAP_TYPE == LEVEL_CAP_FLAG_LIST)
    {
        for (i = 0; i < ARRAY_COUNT(sLevelCapFlagMap); i++)
        {
            if (!FlagGet(sLevelCapFlagMap[i][0]))
                return sLevelCapFlagMap[i][1];
        }
    }
    else if (B_LEVEL_CAP_TYPE == LEVEL_CAP_VARIABLE)
    {
        return VarGet(B_LEVEL_CAP_VARIABLE);
    }

    return MAX_LEVEL;
}

u32 GetIndividualLevelCap(u32 monLevelCap)
{
    u32 gameLevelcap = GetCurrentLevelCap();
    u32 levelCap = (monLevelCap + gameLevelcap);
    if(levelCap >= 101){
        return 101;
    }
    else {
        return levelCap;
    }
}

u32 GetSoftLevelCapExpValue(u32 level, u32 levelCap, u32 expValue)
{
    static const u32 sExpScalingDown[5] = { 4, 8, 16, 32, 64 };
    static const u32 sExpScalingUp[5]   = { 16, 8, 4, 2, 1 };

    u32 levelDifference;
    u32 currentLevelCap = GetIndividualLevelCap(levelCap);

    if (B_EXP_CAP_TYPE == EXP_CAP_NONE)
        return expValue;

    if (level < currentLevelCap)
    {
        if (B_LEVEL_CAP_EXP_UP)
        {
            levelDifference = currentLevelCap - level;
            if (levelDifference > ARRAY_COUNT(sExpScalingUp))
                return expValue + (expValue / sExpScalingUp[ARRAY_COUNT(sExpScalingUp) - 1]);
            else
                return expValue + (expValue / sExpScalingUp[levelDifference]);
        }
        else
        {
            return expValue;
        }
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_HARD)
    {
        return 0;
    }
    else if (B_EXP_CAP_TYPE == EXP_CAP_SOFT)
    {
        levelDifference = level - currentLevelCap;
        if (levelDifference > ARRAY_COUNT(sExpScalingDown))
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
    {
       return expValue;
    }
}
