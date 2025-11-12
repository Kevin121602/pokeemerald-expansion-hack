#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "caps.h"
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
        {FLAG_DEFEATED_MIRA, 33}, //32
        {FLAG_BADGE04_GET, 36}, // 35
        {FLAG_DEFEATED_PHOEBE, 42}, //41
        {FLAG_BADGE02_GET, 46}, //45
        {FLAG_DEFEATED_AQUA_GRUNTS_SLATEPORT, 51}, //50
        {FLAG_DEFEATED_SIDNEY, 54}, //53
        {FLAG_BADGE05_GET, 55}, //54
        {FLAG_DEFEATED_CLAIR, 57}, //56
        {FLAG_DEFEATED_BROCK, 59}, //58
        {FLAG_DEFEATED_BRUNO, 60}, //59
        {FLAG_DEFEATED_LANCE, 61}, //60
        {FLAG_DEFEATED_MAXIE, 63}, //62
        {FLAG_BADGE08_GET, 65}, //64
        {FLAG_DEFEATED_119_RIVAL, 68}, //67
        {FLAG_DEFEATED_SHELLY, 69}, //68
        {FLAG_DEFEATED_KOGA_JANINE, 71}, //70
        {FLAG_BADGE06_GET, 72}, //71
        {FLAG_DEFEATED_LILYCOVE_RIVAL, 73}, //72
        {FLAG_DEFEATED_MATT, 75}, //74
        {FLAG_DEFEATED_WHITNEY, 78}, //77
        {FLAG_DEFEATED_RED_GREEN_BLUE, 80}, //79
        {FLAG_BADGE07_GET, 81}, //80
        {FLAG_DEFEATED_CYRUS, 83}, //82
        {FLAG_DEFEATED_ARCHIE, 86}, //85
        {FLAG_DEFEATED_CLAIR_LANCE, 89}, //88
        {FLAG_DEFEATED_SPENSER, 91}, //90
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
            if (levelDifference > ARRAY_COUNT(sExpScalingUp) - 1)
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
        if (levelDifference > ARRAY_COUNT(sExpScalingDown) - 1)
            return expValue / sExpScalingDown[ARRAY_COUNT(sExpScalingDown) - 1];
        else
            return expValue / sExpScalingDown[levelDifference];
    }
    else
    {
       return expValue;
    }
}

u32 GetCurrentEVCap(void)
{
    static const u16 sEvCapFlagMap[][2] = {
        // Define EV caps for each milestone
        {FLAG_BADGE01_GET, MAX_TOTAL_EVS *  1 / 17},
        {FLAG_BADGE02_GET, MAX_TOTAL_EVS *  3 / 17},
        {FLAG_BADGE03_GET, MAX_TOTAL_EVS *  5 / 17},
        {FLAG_BADGE04_GET, MAX_TOTAL_EVS *  7 / 17},
        {FLAG_BADGE05_GET, MAX_TOTAL_EVS *  9 / 17},
        {FLAG_BADGE06_GET, MAX_TOTAL_EVS * 11 / 17},
        {FLAG_BADGE07_GET, MAX_TOTAL_EVS * 13 / 17},
        {FLAG_BADGE08_GET, MAX_TOTAL_EVS * 15 / 17},
        {FLAG_IS_CHAMPION, MAX_TOTAL_EVS},
    };

    if (B_EV_CAP_TYPE == EV_CAP_FLAG_LIST)
    {
        for (u32 evCap = 0; evCap < ARRAY_COUNT(sEvCapFlagMap); evCap++)
        {
            if (!FlagGet(sEvCapFlagMap[evCap][0]))
                return sEvCapFlagMap[evCap][1];
        }
    }
    else if (B_EV_CAP_TYPE == EV_CAP_VARIABLE)
    {
        return VarGet(B_EV_CAP_VARIABLE);
    }
    else if (B_EV_CAP_TYPE == EV_CAP_NO_GAIN)
    {
        return 0;
    }

    return MAX_TOTAL_EVS;
}
