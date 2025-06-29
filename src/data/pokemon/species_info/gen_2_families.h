#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen2[] =
{
#endif

#if P_FAMILY_CHIKORITA
    [SPECIES_CHIKORITA] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 49,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chikorita"),
        .cryId = CRY_CHIKORITA,
        .natDexNum = NATIONAL_DEX_CHIKORITA,
        .categoryName = _("Leaf"),
        .height = 9,
        .weight = 64,
        .description = COMPOUND_STRING(
            "It waves its leaf around to keep foes\n"
            "at bay. However, a sweet fragrance also\n"
            "wafts from the leaf, creating a friendly\n"
            "atmosphere that becalms the battlers."),
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chikorita,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Chikorita,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Chikorita,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Chikorita,
        .shinyPalette = gMonShinyPalette_Chikorita,
        .iconSprite = gMonIcon_Chikorita,
        .iconPalIndex = 1,
        FOOTPRINT(Chikorita)
        OVERWORLD(
            sPicTable_Chikorita,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Chikorita,
            gShinyOverworldPalette_Chikorita
        )
        .levelUpLearnset = sChikoritaLevelUpLearnset,
        .teachableLearnset = sChikoritaTeachableLearnset,
        .eggMoveLearnset = sChikoritaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 16, SPECIES_BAYLEEF}),
    },

    [SPECIES_BAYLEEF] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 63,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 141,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Bayleef"),
        .cryId = CRY_BAYLEEF,
        .natDexNum = NATIONAL_DEX_BAYLEEF,
        .categoryName = _("Leaf"),
        .height = 12,
        .weight = 158,
        .description = COMPOUND_STRING(
            "A Bayleef's neck is ringed by curled-up\n"
            "leaves. Inside each leaf is a small tree\n"
            "shoot. The fragrance of this shoot\n"
            "makes people peppy."),
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bayleef,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Bayleef,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Bayleef,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Bayleef,
        .shinyPalette = gMonShinyPalette_Bayleef,
        .iconSprite = gMonIcon_Bayleef,
        .iconPalIndex = 1,
        FOOTPRINT(Bayleef)
        OVERWORLD(
            sPicTable_Bayleef,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bayleef,
            gShinyOverworldPalette_Bayleef
        )
        .levelUpLearnset = sBayleefLevelUpLearnset,
        .teachableLearnset = sBayleefTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 32, SPECIES_MEGANIUM}),
    },

    [SPECIES_MEGANIUM] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 100,
        .baseSpeed     = 80,
        .baseSpAttack  = 83,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 263,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 236,
    #else
        .expYield = 208,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_GRASS),
        .abilities = { ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Meganium"),
        .cryId = CRY_MEGANIUM,
        .natDexNum = NATIONAL_DEX_MEGANIUM,
        .categoryName = _("Herb"),
        .height = 18,
        .weight = 1005,
        .description = COMPOUND_STRING(
            "The fragrance of a Meganium's flower\n"
            "soothes and calms emotions. In battle,\n"
            "it gives off more of its becalming scent\n"
            "to blunt the foe's fighting spirit."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Meganium,
        .frontPicFemale = gMonFrontPic_MeganiumF,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Meganium,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Meganium,
        .backPicFemale = gMonBackPic_MeganiumF,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Meganium,
        .shinyPalette = gMonShinyPalette_Meganium,
        .iconSprite = gMonIcon_Meganium,
        .iconPalIndex = 1,
        FOOTPRINT(Meganium)
        OVERWORLD(
            sPicTable_Meganium,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Meganium,
            gShinyOverworldPalette_Meganium
        )
        .levelUpLearnset = sMeganiumLevelUpLearnset,
        .teachableLearnset = sMeganiumTeachableLearnset,
    },
#endif //P_FAMILY_CHIKORITA

#if P_FAMILY_CYNDAQUIL
    [SPECIES_CYNDAQUIL] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 62 : 65,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cyndaquil"),
        .cryId = CRY_CYNDAQUIL,
        .natDexNum = NATIONAL_DEX_CYNDAQUIL,
        .categoryName = _("Fire Mouse"),
        .height = 5,
        .weight = 79,
        .description = COMPOUND_STRING(
            "It flares flames from its back to protect\n"
            "itself. The fire burns vigorously if the\n"
            "Pokémon is angry. When it is tired,\n"
            "it sputters with incomplete combustion."),
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cyndaquil,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Cyndaquil,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Cyndaquil,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Cyndaquil,
        .shinyPalette = gMonShinyPalette_Cyndaquil,
        .iconSprite = gMonIcon_Cyndaquil,
        .iconPalIndex = 3,
        FOOTPRINT(Cyndaquil)
        OVERWORLD(
            sPicTable_Cyndaquil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cyndaquil,
            gShinyOverworldPalette_Cyndaquil
        )
        .levelUpLearnset = sCyndaquilLevelUpLearnset,
        .teachableLearnset = sCyndaquilTeachableLearnset,
        .eggMoveLearnset = sCyndaquilEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_QUILAVA}),
    },

    [SPECIES_QUILAVA] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Quilava"),
        .cryId = CRY_QUILAVA,
        .natDexNum = NATIONAL_DEX_QUILAVA,
        .categoryName = _("Volcano"),
        .height = 9,
        .weight = 190,
        .description = COMPOUND_STRING(
            "It intimidates foes with intense gusts of\n"
            "flames and superheated air. Its quick\n"
            "nimbleness lets it dodge attacks even\n"
            "while scorching an enemy."),
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quilava,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Quilava,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Quilava,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Quilava,
        .shinyPalette = gMonShinyPalette_Quilava,
        .iconSprite = gMonIcon_Quilava,
        .iconPalIndex = 3,
        FOOTPRINT(Quilava)
        OVERWORLD(
            sPicTable_Quilava,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Quilava,
            gShinyOverworldPalette_Quilava
        )
        .levelUpLearnset = sQuilavaLevelUpLearnset,
        .teachableLearnset = sQuilavaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 36, SPECIES_TYPHLOSION},
                                {EVO_ITEM, ITEM_DUSK_STONE, SPECIES_TYPHLOSION_HISUIAN}),
    },

#if P_UPDATED_EXP_YIELDS >= GEN_8
    #define TYPHLOSION_EXP_YIELD 267
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define TYPHLOSION_EXP_YIELD 240
#else
    #define TYPHLOSION_EXP_YIELD 209
#endif

    [SPECIES_TYPHLOSION] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 45,
        .expYield = TYPHLOSION_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Typhlosion"),
        .cryId = CRY_TYPHLOSION,
        .natDexNum = NATIONAL_DEX_TYPHLOSION,
        .categoryName = _("Volcano"),
        .height = 17,
        .weight = 795,
        .description = COMPOUND_STRING(
            "It can hide behind a shimmering heat haze\n"
            "that it creates using its intense flames.\n"
            "Typhlosion create blazing explosive\n"
            "blasts that burn everything to cinders."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Typhlosion,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Typhlosion,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Typhlosion,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Typhlosion,
        .shinyPalette = gMonShinyPalette_Typhlosion,
        .iconSprite = gMonIcon_Typhlosion,
        .iconPalIndex = 3,
        FOOTPRINT(Typhlosion)
        OVERWORLD(
            sPicTable_Typhlosion,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Typhlosion,
            gShinyOverworldPalette_Typhlosion
        )
        .levelUpLearnset = sTyphlosionLevelUpLearnset,
        .teachableLearnset = sTyphlosionTeachableLearnset,
        .formSpeciesIdTable = sTyphlosionFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_TYPHLOSION_HISUIAN] =
    {
        .baseHP        = 73,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 95,
        .baseSpAttack  = 119,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_FIRE, TYPE_GHOST),
        .catchRate = 45,
        .expYield = TYPHLOSION_EXP_YIELD,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_BLAZE, ABILITY_NONE, ABILITY_FRISK },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Typhlosion"),
        .cryId = CRY_TYPHLOSION,
        .natDexNum = NATIONAL_DEX_TYPHLOSION,
        .categoryName = _("Ghost Flame"),
        .height = 16,
        .weight = 698,
        .description = COMPOUND_STRING(
            "Said to purify lost, forsaken souls with\n"
            "its flames and guide them to the afterlife.\n"
            "It's believed its form was influenced by\n"
            "the energy of Mt. Coronet in ancient times."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_TyphlosionHisuian,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TyphlosionHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TyphlosionHisuian,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 2,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_TyphlosionHisuian,
        .shinyPalette = gMonShinyPalette_TyphlosionHisuian,
        .iconSprite = gMonIcon_TyphlosionHisuian,
        .iconPalIndex = 1,
        FOOTPRINT(Typhlosion)
        OVERWORLD(
            sPicTable_TyphlosionHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_TyphlosionHisuian,
            gShinyOverworldPalette_TyphlosionHisuian
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sTyphlosionHisuianLevelUpLearnset,
        .teachableLearnset = sTyphlosionHisuianTeachableLearnset,
        .formSpeciesIdTable = sTyphlosionFormSpeciesIdTable,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_CYNDAQUIL

#if P_FAMILY_TOTODILE
    [SPECIES_TOTODILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 64,
        .baseSpeed     = 43,
        .baseSpAttack  = 44,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 63 : 66,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_TORRENT },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Totodile"),
        .cryId = CRY_TOTODILE,
        .natDexNum = NATIONAL_DEX_TOTODILE,
        .categoryName = _("Big Jaw"),
        .height = 6,
        .weight = 95,
        .description = COMPOUND_STRING(
            "Despite its small body, Totodile's jaws\n"
            "are very powerful. While it may think it is\n"
            "just playfully nipping, its bite has enough\n"
            "strength to cause serious injury."),
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Totodile,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Totodile,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Totodile,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Totodile,
        .shinyPalette = gMonShinyPalette_Totodile,
        .iconSprite = gMonIcon_Totodile,
        .iconPalIndex = 0,
        FOOTPRINT(Totodile)
        OVERWORLD(
            sPicTable_Totodile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Totodile,
            gShinyOverworldPalette_Totodile
        )
        .levelUpLearnset = sTotodileLevelUpLearnset,
        .teachableLearnset = sTotodileTeachableLearnset,
        .eggMoveLearnset = sTotodileEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_CROCONAW}),
    },

    [SPECIES_CROCONAW] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 59,
        .baseSpDefense = 63,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 143,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_TORRENT },
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .speciesName = _("Croconaw"),
        .cryId = CRY_CROCONAW,
        .natDexNum = NATIONAL_DEX_CROCONAW,
        .categoryName = _("Big Jaw"),
        .height = 11,
        .weight = 250,
        .description = COMPOUND_STRING(
            "Once its jaws clamp down on its foe, it will\n"
            "absolutely not let go. Because the tips of\n"
            "its fangs are forked back like fishhooks,\n"
            "they become irremovably embedded."),
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Croconaw,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Croconaw,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Croconaw,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Croconaw,
        .shinyPalette = gMonShinyPalette_Croconaw,
        .iconSprite = gMonIcon_Croconaw,
        .iconPalIndex = 0,
        FOOTPRINT(Croconaw)
        OVERWORLD(
            sPicTable_Croconaw,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Croconaw,
            gShinyOverworldPalette_Croconaw
        )
        .levelUpLearnset = sCroconawLevelUpLearnset,
        .teachableLearnset = sCroconawTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_FERALIGATR}),
    },

    [SPECIES_FERALIGATR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 79,
        .baseSpDefense = 83,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 210,
    #endif
        .evYield_Attack = 2,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_TORRENT },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Feraligatr"),
        .cryId = CRY_FERALIGATR,
        .natDexNum = NATIONAL_DEX_FERALIGATR,
        .categoryName = _("Big Jaw"),
        .height = 23,
        .weight = 888,
        .description = COMPOUND_STRING(
            "It opens its huge mouth to intimidate\n"
            "enemies. In battle, it runs using its thick\n"
            "and powerful hind legs to charge the\n"
            "foe with incredible speed."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Feraligatr,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Feraligatr,
        .frontAnimId = ANIM_H_SHAKE,
        .frontAnimDelay = 5,
        .backPic = gMonBackPic_Feraligatr,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Feraligatr,
        .shinyPalette = gMonShinyPalette_Feraligatr,
        .iconSprite = gMonIcon_Feraligatr,
        .iconPalIndex = 0,
        FOOTPRINT(Feraligatr)
        OVERWORLD(
            sPicTable_Feraligatr,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Feraligatr,
            gShinyOverworldPalette_Feraligatr
        )
        .levelUpLearnset = sFeraligatrLevelUpLearnset,
        .teachableLearnset = sFeraligatrTeachableLearnset,
    },
#endif //P_FAMILY_TOTODILE

#if P_FAMILY_SENTRET
    [SPECIES_SENTRET] =
    {
        .baseHP        = 35,
        .baseAttack    = 46,
        .baseDefense   = 34,
        .baseSpeed     = 20,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 43 : 57,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sentret"),
        .cryId = CRY_SENTRET,
        .natDexNum = NATIONAL_DEX_SENTRET,
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 60,
        .description = COMPOUND_STRING(
            "They take turns standing guard when it\n"
            "is time to sleep. The sentry awakens the\n"
            "others if it senses danger. If one becomes\n"
            "separated, it turns sleepless with fear."),
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sentret,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Sentret,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sentret,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Sentret,
        .shinyPalette = gMonShinyPalette_Sentret,
        .iconSprite = gMonIcon_Sentret,
        .iconPalIndex = 2,
        FOOTPRINT(Sentret)
        OVERWORLD(
            sPicTable_Sentret,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sentret,
            gShinyOverworldPalette_Sentret
        )
        .levelUpLearnset = sSentretLevelUpLearnset,
        .teachableLearnset = sSentretTeachableLearnset,
        .eggMoveLearnset = sSentretEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FURRET}),
    },

    [SPECIES_FURRET] =
    {
        .baseHP        = 85,
        .baseAttack    = 76,
        .baseDefense   = 64,
        .baseSpeed     = 90,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 145 : 116,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Furret"),
        .cryId = CRY_FURRET,
        .natDexNum = NATIONAL_DEX_FURRET,
        .categoryName = _("Long Body"),
        .height = 18,
        .weight = 325,
        .description = COMPOUND_STRING(
            "A Furret has a very slim build. When under\n"
            "attack, it can squirm through narrow\n"
            "spaces and get away. In spite of its short\n"
            "limbs, it is very nimble and fleet."),
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Furret,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Furret,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Furret,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Furret,
        .shinyPalette = gMonShinyPalette_Furret,
        .iconSprite = gMonIcon_Furret,
        .iconPalIndex = 2,
        FOOTPRINT(Furret)
        OVERWORLD(
            sPicTable_Furret,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Furret,
            gShinyOverworldPalette_Furret
        )
        .levelUpLearnset = sFurretLevelUpLearnset,
        .teachableLearnset = sFurretTeachableLearnset,
    },
#endif //P_FAMILY_SENTRET

#if P_FAMILY_HOOTHOOT
    [SPECIES_HOOTHOOT] =
    {
        .baseHP        = 60,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 36,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 58,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INSOMNIA, ABILITY_TINTED_LENS, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Hoothoot"),
        .cryId = CRY_HOOTHOOT,
        .natDexNum = NATIONAL_DEX_HOOTHOOT,
        .categoryName = _("Owl"),
        .height = 7,
        .weight = 212,
        .description = COMPOUND_STRING(
            "It has an internal organ that senses\n"
            "the earth's rotation. Using this special\n"
            "organ, a Hoothoot begins hooting at\n"
            "precisely the same time every day."),
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hoothoot,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Hoothoot,
        .frontAnimId = ANIM_V_SLIDE_SLOW,
        .backPic = gMonBackPic_Hoothoot,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Hoothoot,
        .shinyPalette = gMonShinyPalette_Hoothoot,
        .iconSprite = gMonIcon_Hoothoot,
        .iconPalIndex = 2,
        FOOTPRINT(Hoothoot)
        OVERWORLD(
            sPicTable_Hoothoot,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Hoothoot,
            gShinyOverworldPalette_Hoothoot
        )
        .levelUpLearnset = sHoothootLevelUpLearnset,
        .teachableLearnset = sHoothootTeachableLearnset,
        .eggMoveLearnset = sHoothootEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_NOCTOWL}),
    },

    [SPECIES_NOCTOWL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 86 : 76,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 158,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 155,
    #else
        .expYield = 162,
    #endif
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INSOMNIA, ABILITY_TINTED_LENS, ABILITY_TINTED_LENS },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Noctowl"),
        .cryId = CRY_NOCTOWL,
        .natDexNum = NATIONAL_DEX_NOCTOWL,
        .categoryName = _("Owl"),
        .height = 16,
        .weight = 408,
        .description = COMPOUND_STRING(
            "It unfailingly catches prey in darkness.\n"
            "Noctowl owe their success to superior\n"
            "vision that allows them to see in minimal\n"
            "light, and to their supple and silent wings."),
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Noctowl,
        .frontPicSize = MON_COORDS_SIZE(40, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Noctowl,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Noctowl,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Noctowl,
        .shinyPalette = gMonShinyPalette_Noctowl,
        .iconSprite = gMonIcon_Noctowl,
        .iconPalIndex = 2,
        FOOTPRINT(Noctowl)
        OVERWORLD(
            sPicTable_Noctowl,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Noctowl,
            gShinyOverworldPalette_Noctowl
        )
        .levelUpLearnset = sNoctowlLevelUpLearnset,
        .teachableLearnset = sNoctowlTeachableLearnset,
    },
#endif //P_FAMILY_HOOTHOOT

#if P_FAMILY_LEDYBA
    [SPECIES_LEDYBA] =
    {
        .baseHP        = 40,
        .baseAttack    = 20,
        .baseDefense   = 30,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 53 : 54,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_RATTLED, ABILITY_NONE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ledyba"),
        .cryId = CRY_LEDYBA,
        .natDexNum = NATIONAL_DEX_LEDYBA,
        .categoryName = _("Five Star"),
        .height = 10,
        .weight = 108,
        .description = COMPOUND_STRING(
            "Ledyba communicate using a fluid that\n"
            "they secrete from where the legs join the\n"
            "body. They are said to convey feelings to\n"
            "others by altering the fluid's scent."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ledyba,
        .frontPicFemale = gMonFrontPic_LedybaF,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Ledyba,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Ledyba,
        .backPicFemale = gMonBackPic_LedybaF,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Ledyba,
        .shinyPalette = gMonShinyPalette_Ledyba,
        .iconSprite = gMonIcon_Ledyba,
        .iconPalIndex = 0,
        FOOTPRINT(Ledyba)
        OVERWORLD(
            sPicTable_Ledyba,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Ledyba,
            gShinyOverworldPalette_Ledyba
        )
        .levelUpLearnset = sLedybaLevelUpLearnset,
        .teachableLearnset = sLedybaTeachableLearnset,
        .eggMoveLearnset = sLedybaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_LEDIAN}),
    },

    [SPECIES_LEDIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 137 : 134,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_RATTLED, ABILITY_NONE, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ledian"),
        .cryId = CRY_LEDIAN,
        .natDexNum = NATIONAL_DEX_LEDIAN,
        .categoryName = _("Five Star"),
        .height = 14,
        .weight = 356,
        .description = COMPOUND_STRING(
            "It is said that in lands with clean air,\n"
            "where the stars fill the sky, there live\n"
            "many Ledian. For good reason, they use\n"
            "the light of the stars as energy."),
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ledian,
        .frontPicFemale = gMonFrontPic_LedianF,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Ledian,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 10,
        .backPic = gMonBackPic_Ledian,
        .backPicFemale = gMonBackPic_LedianF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Ledian,
        .shinyPalette = gMonShinyPalette_Ledian,
        .iconSprite = gMonIcon_Ledian,
        .iconPalIndex = 0,
        FOOTPRINT(Ledian)
        OVERWORLD(
            sPicTable_Ledian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ledian,
            gShinyOverworldPalette_Ledian
        )
        .levelUpLearnset = sLedianLevelUpLearnset,
        .teachableLearnset = sLedianTeachableLearnset,
    },
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_SPINARAK
    [SPECIES_SPINARAK] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 54,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SNIPER, ABILITY_INSOMNIA, ABILITY_SWARM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Spinarak"),
        .cryId = CRY_SPINARAK,
        .natDexNum = NATIONAL_DEX_SPINARAK,
        .categoryName = _("String Spit"),
        .height = 5,
        .weight = 85,
        .description = COMPOUND_STRING(
            "The web it spins can be considered its\n"
            "second nervous system. It is said that a\n"
            "Spinarak determines its prey by the tiny\n"
            "vibrations it feels through the web."),
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Spinarak,
        .frontPicSize = MON_COORDS_SIZE(48, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Spinarak,
        .frontAnimId = ANIM_CIRCLE_C_CLOCKWISE_SLOW,
        .backPic = gMonBackPic_Spinarak,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Spinarak,
        .shinyPalette = gMonShinyPalette_Spinarak,
        .iconSprite = gMonIcon_Spinarak,
        .iconPalIndex = 1,
        FOOTPRINT(Spinarak)
        OVERWORLD(
            sPicTable_Spinarak,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Spinarak,
            gShinyOverworldPalette_Spinarak
        )
        .levelUpLearnset = sSpinarakLevelUpLearnset,
        .teachableLearnset = sSpinarakTeachableLearnset,
        .eggMoveLearnset = sSpinarakEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_ARIADOS}),
    },

    [SPECIES_ARIADOS] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = P_UPDATED_STATS >= GEN_7 ? 70 : 60,
        .types = MON_TYPES(TYPE_BUG, TYPE_POISON),
        .catchRate = 90,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 140,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 137,
    #else
        .expYield = 134,
    #endif
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SNIPER, ABILITY_INSOMNIA, ABILITY_SWARM },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ariados"),
        .cryId = CRY_ARIADOS,
        .natDexNum = NATIONAL_DEX_ARIADOS,
        .categoryName = _("Long Leg"),
        .height = 11,
        .weight = 335,
        .description = COMPOUND_STRING(
            "Its feet are tipped with tiny hooked claws\n"
            "that enable it to scuttle on ceilings and\n"
            "vertical walls. It constricts its foe with\n"
            "thin and strong silk webbing."),
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ariados,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Ariados,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Ariados,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Ariados,
        .shinyPalette = gMonShinyPalette_Ariados,
        .iconSprite = gMonIcon_Ariados,
        .iconPalIndex = 0,
        FOOTPRINT(Ariados)
        OVERWORLD(
            sPicTable_Ariados,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_BUG,
            gOverworldPalette_Ariados,
            gShinyOverworldPalette_Ariados
        )
        .levelUpLearnset = sAriadosLevelUpLearnset,
        .teachableLearnset = sAriadosTeachableLearnset,
    },
#endif //P_FAMILY_SPINARAK

#if P_FAMILY_CHINCHOU
    [SPECIES_CHINCHOU] =
    {
        .baseHP        = 75,
        .baseAttack    = 38,
        .baseDefense   = 38,
        .baseSpeed     = 67,
        .baseSpAttack  = 56,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 90,
        .evYield_HP = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Chinchou"),
        .cryId = CRY_CHINCHOU,
        .natDexNum = NATIONAL_DEX_CHINCHOU,
        .categoryName = _("Angler"),
        .height = 5,
        .weight = 120,
        .description = COMPOUND_STRING(
            "When it senses danger, it discharges\n"
            "positive and negative electricity from its\n"
            "two antennae. It lives in depths beyond\n"
            "sunlight's reach."),
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Chinchou,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Chinchou,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Chinchou,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Chinchou,
        .shinyPalette = gMonShinyPalette_Chinchou,
        .iconSprite = gMonIcon_Chinchou,
        .iconPalIndex = 2,
        FOOTPRINT(Chinchou)
        OVERWORLD(
            sPicTable_Chinchou,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Chinchou,
            gShinyOverworldPalette_Chinchou
        )
        .levelUpLearnset = sChinchouLevelUpLearnset,
        .teachableLearnset = sChinchouTeachableLearnset,
        .eggMoveLearnset = sChinchouEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 27, SPECIES_LANTURN}),
    },

    [SPECIES_LANTURN] =
    {
        .baseHP        = 125,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 67,
        .baseSpAttack  = 76,
        .baseSpDefense = 76,
        .types = MON_TYPES(TYPE_WATER, TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 161 : 156,
        .evYield_HP = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lanturn"),
        .cryId = CRY_LANTURN,
        .natDexNum = NATIONAL_DEX_LANTURN,
        .categoryName = _("Light"),
        .height = 12,
        .weight = 225,
        .description = COMPOUND_STRING(
            "The light-emitting orbs on its back are\n"
            "very bright. They are formed from a part of\n"
            "its dorsal fin. This Pokémon illuminates\n"
            "the inky darkness of deep seas."),
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lanturn,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Lanturn,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .backPic = gMonBackPic_Lanturn,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Lanturn,
        .shinyPalette = gMonShinyPalette_Lanturn,
        .iconSprite = gMonIcon_Lanturn,
        .iconPalIndex = 0,
        FOOTPRINT(Lanturn)
        OVERWORLD(
            sPicTable_Lanturn,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Lanturn,
            gShinyOverworldPalette_Lanturn
        )
        .levelUpLearnset = sLanturnLevelUpLearnset,
        .teachableLearnset = sLanturnTeachableLearnset,
    },
#endif //P_FAMILY_CHINCHOU

#if P_FAMILY_TOGEPI
#define TOGEPI_FAMILY_TYPE (P_UPDATED_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL)

    [SPECIES_TOGEPI] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 65,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = MON_TYPES(TOGEPI_FAMILY_TYPE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 49 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SUPER_LUCK, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Togepi"),
        .cryId = CRY_TOGEPI,
        .natDexNum = NATIONAL_DEX_TOGEPI,
        .categoryName = _("Spike Ball"),
        .height = 3,
        .weight = 15,
        .description = COMPOUND_STRING(
            "As its energy, it uses the feelings of\n"
            "compassion and pleasure exuded by\n"
            "people and Pokémon. It stores up happy\n"
            "feelings in its shell, then shares them out."),
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Togepi,
        .frontPicSize = MON_COORDS_SIZE(24, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Togepi,
        .frontAnimId = ANIM_V_JUMPS_BIG,
        .backPic = gMonBackPic_Togepi,
        .backPicSize = MON_COORDS_SIZE(48, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Togepi,
        .shinyPalette = gMonShinyPalette_Togepi,
        .iconSprite = gMonIcon_Togepi,
        .iconPalIndex = 0,
        FOOTPRINT(Togepi)
        OVERWORLD(
            sPicTable_Togepi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Togepi,
            gShinyOverworldPalette_Togepi
        )
        .levelUpLearnset = sTogepiLevelUpLearnset,
        .teachableLearnset = sTogepiTeachableLearnset,
        .eggMoveLearnset = sTogepiEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_TOGETIC}),
    },

    [SPECIES_TOGETIC] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 105,
        .types = MON_TYPES(TOGEPI_FAMILY_TYPE, TYPE_FLYING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 114,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SUPER_LUCK, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Togetic"),
        .cryId = CRY_TOGETIC,
        .natDexNum = NATIONAL_DEX_TOGETIC,
        .categoryName = _("Happiness"),
        .height = 6,
        .weight = 32,
        .description = COMPOUND_STRING(
            "It is said to be a Pokémon that brings good\n"
            "fortune. When it spots someone who is pure\n"
            "of heart, a Togetic appears and shares its\n"
            "happiness with that person."),
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Togetic,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Togetic,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Togetic,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Togetic,
        .shinyPalette = gMonShinyPalette_Togetic,
        .iconSprite = gMonIcon_Togetic,
        .iconPalIndex = 0,
        FOOTPRINT(Togetic)
        OVERWORLD(
            sPicTable_Togetic,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Togetic,
            gShinyOverworldPalette_Togetic
        )
        .levelUpLearnset = sTogeticLevelUpLearnset,
        .teachableLearnset = sTogeticTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_TOGEKISS] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 120,
        .baseSpDefense = 115,
        .types = MON_TYPES(TOGEPI_FAMILY_TYPE, TYPE_FLYING),
        .catchRate = 30,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 273,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 245,
    #else
        .expYield = 220,
    #endif
        .evYield_SpAttack = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_SUPER_LUCK, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK },
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .speciesName = _("Togekiss"),
        .cryId = CRY_TOGEKISS,
        .natDexNum = NATIONAL_DEX_TOGEKISS,
        .categoryName = _("Jubilee"),
        .height = 15,
        .weight = 380,
        .description = COMPOUND_STRING(
            "As everyone knows, it visits peaceful\n"
            "regions, bringing them gifts of kindness\n"
            "and sweet blessings. It will never appear\n"
            "where there is strife."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Togekiss,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Togekiss,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 14,
        .backPic = gMonBackPic_Togekiss,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Togekiss,
        .shinyPalette = gMonShinyPalette_Togekiss,
        .iconSprite = gMonIcon_Togekiss,
        .iconPalIndex = 2,
        FOOTPRINT(Togekiss)
        OVERWORLD(
            sPicTable_Togekiss,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Togekiss,
            gShinyOverworldPalette_Togekiss
        )
        .levelUpLearnset = sTogekissLevelUpLearnset,
        .teachableLearnset = sTogekissTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI

#if P_FAMILY_NATU
    [SPECIES_NATU] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 64 : 73,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Natu"),
        .cryId = CRY_NATU,
        .natDexNum = NATIONAL_DEX_NATU,
        .categoryName = _("Tiny Bird"),
        .height = 2,
        .weight = 20,
        .description = COMPOUND_STRING(
            "It runs up short trees that grow on the\n"
            "savanna to peck at new shoots.\n"
            "A Natu's eyes look as if they are\n"
            "always observing something."),
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Natu,
        .frontPicSize = MON_COORDS_SIZE(32, 32),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Natu,
        .frontAnimId = ANIM_H_JUMPS,
        .frontAnimDelay = 30,
        .backPic = gMonBackPic_Natu,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Natu,
        .shinyPalette = gMonShinyPalette_Natu,
        .iconSprite = gMonIcon_Natu,
        .iconPalIndex = 1,
        FOOTPRINT(Natu)
        OVERWORLD(
            sPicTable_Natu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Natu,
            gShinyOverworldPalette_Natu
        )
        .levelUpLearnset = sNatuLevelUpLearnset,
        .teachableLearnset = sNatuTeachableLearnset,
        .eggMoveLearnset = sNatuEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 22, SPECIES_XATU}),
    },

    [SPECIES_XATU] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 165 : 171,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_MAGIC_BOUNCE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Xatu"),
        .cryId = CRY_XATU,
        .natDexNum = NATIONAL_DEX_XATU,
        .categoryName = _("Mystic"),
        .height = 15,
        .weight = 150,
        .description = COMPOUND_STRING(
            "It has the enigmatic power of foreseeing\n"
            "the future. Some people in different lands\n"
            "have long believed that Xatu are\n"
            "emissaries from another world."),
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Xatu,
        .frontPicFemale = gMonFrontPic_XatuF,
        .frontPicSize = MON_COORDS_SIZE(40, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Xatu,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Xatu,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Xatu,
        .shinyPalette = gMonShinyPalette_Xatu,
        .iconSprite = gMonIcon_Xatu,
        .iconPalIndex = 1,
        FOOTPRINT(Xatu)
        OVERWORLD(
            sPicTable_Xatu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Xatu,
            gShinyOverworldPalette_Xatu
        )
        .levelUpLearnset = sXatuLevelUpLearnset,
        .teachableLearnset = sXatuTeachableLearnset,
    },
#endif //P_FAMILY_NATU

#if P_FAMILY_MAREEP
    [SPECIES_MAREEP] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 56 : 59,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_PLUS, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Mareep"),
        .cryId = CRY_MAREEP,
        .natDexNum = NATIONAL_DEX_MAREEP,
        .categoryName = _("Wool"),
        .height = 6,
        .weight = 78,
        .description = COMPOUND_STRING(
            "Its fluffy wool rubs together and builds\n"
            "a static charge. The more energy is\n"
            "charged, the more brightly the lightbulb\n"
            "at the tip of its tail glows."),
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mareep,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Mareep,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 50,
        .backPic = gMonBackPic_Mareep,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Mareep,
        .shinyPalette = gMonShinyPalette_Mareep,
        .iconSprite = gMonIcon_Mareep,
        .iconPalIndex = 0,
        FOOTPRINT(Mareep)
        OVERWORLD(
            sPicTable_Mareep,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mareep,
            gShinyOverworldPalette_Mareep
        )
        .levelUpLearnset = sMareepLevelUpLearnset,
        .teachableLearnset = sMareepTeachableLearnset,
        .eggMoveLearnset = sMareepEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_FLAAFFY}),
    },

    [SPECIES_FLAAFFY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 128 : 117,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_PLUS, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Flaaffy"),
        .cryId = CRY_FLAAFFY,
        .natDexNum = NATIONAL_DEX_FLAAFFY,
        .categoryName = _("Wool"),
        .height = 8,
        .weight = 133,
        .description = COMPOUND_STRING(
            "Its fleece quality changes to generate\n"
            "strong static electricity with a small\n"
            "amount of wool. The bare, slick parts of its\n"
            "hide are shielded against electricity."),
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Flaaffy,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Flaaffy,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Flaaffy,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Flaaffy,
        .shinyPalette = gMonShinyPalette_Flaaffy,
        .iconSprite = gMonIcon_Flaaffy,
        .iconPalIndex = 0,
        FOOTPRINT(Flaaffy)
        OVERWORLD(
            sPicTable_Flaaffy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Flaaffy,
            gShinyOverworldPalette_Flaaffy
        )
        .levelUpLearnset = sFlaaffyLevelUpLearnset,
        .teachableLearnset = sFlaaffyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_AMPHAROS}),
    },

#define AMPHAROS_DEFENSE (P_UPDATED_STATS >= GEN_6 ? 85 : 75)

    [SPECIES_AMPHAROS] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = AMPHAROS_DEFENSE,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 255,
    #elif P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 230,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 225,
    #else
        .expYield = 194,
    #endif
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_STATIC, ABILITY_PLUS, ABILITY_PLUS },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ampharos"),
        .cryId = CRY_AMPHAROS,
        .natDexNum = NATIONAL_DEX_AMPHAROS,
        .categoryName = _("Light"),
        .height = 14,
        .weight = 615,
        .description = COMPOUND_STRING(
            "It gives off so much light that it can be\n"
            "seen even from space. People in the old\n"
            "days used its light to send signals back\n"
            "and forth with others far away."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ampharos,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Ampharos,
        .frontAnimId = ANIM_FLASH_YELLOW,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Ampharos,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Ampharos,
        .shinyPalette = gMonShinyPalette_Ampharos,
        .iconSprite = gMonIcon_Ampharos,
        .iconPalIndex = 0,
        FOOTPRINT(Ampharos)
        OVERWORLD(
            sPicTable_Ampharos,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ampharos,
            gShinyOverworldPalette_Ampharos
        )
        .levelUpLearnset = sAmpharosLevelUpLearnset,
        .teachableLearnset = sAmpharosTeachableLearnset,
        .formSpeciesIdTable = sAmpharosFormSpeciesIdTable,
        .formChangeTable = sAmpharosFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AMPHAROS_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = AMPHAROS_DEFENSE + 20,
        .baseSpeed     = 45,
        .baseSpAttack  = 165,
        .baseSpDefense = 110,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_DRAGON),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 305 : 275,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER, EGG_GROUP_FIELD),
        .abilities = { ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ampharos"),
        .cryId = CRY_AMPHAROS_MEGA,
        .natDexNum = NATIONAL_DEX_AMPHAROS,
        .categoryName = _("Light"),
        .height = 14,
        .weight = 615,
        .description = COMPOUND_STRING(
            "Massive amounts of energy intensely\n"
            "stimulated Ampharos's cells, apparently\n"
            "awakening its long-sleeping dragon's\n"
            "blood."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_AmpharosMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_AmpharosMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_AmpharosMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_AmpharosMega,
        .shinyPalette = gMonShinyPalette_AmpharosMega,
        .iconSprite = gMonIcon_AmpharosMega,
        .iconPalIndex = 0,
        FOOTPRINT(Ampharos)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sAmpharosLevelUpLearnset,
        .teachableLearnset = sAmpharosTeachableLearnset,
        .formSpeciesIdTable = sAmpharosFormSpeciesIdTable,
        .formChangeTable = sAmpharosFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_MAREEP

#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
    [SPECIES_AZURILL] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 40,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_NORMAL),
    #endif
        .catchRate = 150,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 38 : 33,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Azurill"),
        .cryId = CRY_AZURILL,
        .natDexNum = NATIONAL_DEX_AZURILL,
        .categoryName = _("Polka Dot"),
        .height = 2,
        .weight = 20,
        .description = COMPOUND_STRING(
            "Its tail, which is packed with nutrition,\n"
            "is very bouncy like a rubber ball. On sunny\n"
            "days they gather at the edge of water and\n"
            "splash about for fun."),
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Azurill,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Azurill,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Azurill,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Azurill,
        .shinyPalette = gMonShinyPalette_Azurill,
        .iconSprite = gMonIcon_Azurill,
        .iconPalIndex = 0,
        FOOTPRINT(Azurill)
        OVERWORLD(
            sPicTable_Azurill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Azurill,
            gShinyOverworldPalette_Azurill
        )
        .levelUpLearnset = sAzurillLevelUpLearnset,
        .teachableLearnset = sAzurillTeachableLearnset,
        .eggMoveLearnset = sAzurillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_MARILL}),
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_MARILL] =
    {
        .baseHP        = 70,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 50,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_WATER),
    #endif
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 88 : 58,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Marill"),
        .cryId = CRY_MARILL,
        .natDexNum = NATIONAL_DEX_MARILL,
        .categoryName = _("Aqua Mouse"),
        .height = 4,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Its body is covered with water-repellent\n"
            "fur. Because of the fur, it can swim\n"
            "through water at high speed without being\n"
            "slowed by the water's resistance."),
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Marill,
        .frontPicSize = MON_COORDS_SIZE(56, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Marill,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Marill,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Marill,
        .shinyPalette = gMonShinyPalette_Marill,
        .iconSprite = gMonIcon_Marill,
        .iconPalIndex = 0,
        FOOTPRINT(Marill)
        OVERWORLD(
            sPicTable_Marill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Marill,
            gShinyOverworldPalette_Marill
        )
        .levelUpLearnset = sMarillLevelUpLearnset,
        .teachableLearnset = sMarillTeachableLearnset,
        .eggMoveLearnset = sMarillEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 26, SPECIES_AZUMARILL}),
    },

    [SPECIES_AZUMARILL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_6 ? 60 : 50,
        .baseSpDefense = 80,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_WATER, TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_WATER),
    #endif
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 210,
    #elif P_UPDATED_EXP_YIELDS >= GEN_6
        .expYield = 189,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 185,
    #else
        .expYield = 153,
    #endif
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Azumarill"),
        .cryId = CRY_AZUMARILL,
        .natDexNum = NATIONAL_DEX_AZUMARILL,
        .categoryName = _("Aqua Rabbit"),
        .height = 8,
        .weight = 285,
        .description = COMPOUND_STRING(
            "It lives in water virtually all day long.\n"
            "Its body color and pattern act as\n"
            "camouflage that makes it tough for\n"
            "enemies to spot in water."),
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Azumarill,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Azumarill,
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_Azumarill,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Azumarill,
        .shinyPalette = gMonShinyPalette_Azumarill,
        .iconSprite = gMonIcon_Azumarill,
        .iconPalIndex = 0,
        FOOTPRINT(Azumarill)
        OVERWORLD(
            sPicTable_Azumarill,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Azumarill,
            gShinyOverworldPalette_Azumarill
        )
        .levelUpLearnset = sAzumarillLevelUpLearnset,
        .teachableLearnset = sAzumarillTeachableLearnset,
    },
#endif //P_FAMILY_MARILL

#if P_FAMILY_SUDOWOODO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BONSLY] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 68,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bonsly"),
        .cryId = CRY_BONSLY,
        .natDexNum = NATIONAL_DEX_BONSLY,
        .categoryName = _("Bonsai"),
        .height = 5,
        .weight = 150,
        .description = COMPOUND_STRING(
            "Bonsly prefers an arid atmosphere.\n"
            "In order to adjust the level of fluids\n"
            "in its body, it exudes water from its eyes.\n"
            "This makes it appear to be crying."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Bonsly,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Bonsly,
        .frontAnimId = ANIM_BOUNCE_ROTATE_TO_SIDES,
        .backPic = gMonBackPic_Bonsly,
        .backPicSize = MON_COORDS_SIZE(40, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Bonsly,
        .shinyPalette = gMonShinyPalette_Bonsly,
        .iconSprite = gMonIcon_Bonsly,
        .iconPalIndex = 1,
        FOOTPRINT(Bonsly)
        OVERWORLD(
            sPicTable_Bonsly,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Bonsly,
            gShinyOverworldPalette_Bonsly
        )
        .levelUpLearnset = sBonslyLevelUpLearnset,
        .teachableLearnset = sBonslyTeachableLearnset,
        .eggMoveLearnset = sBonslyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_MIMIC, SPECIES_SUDOWOODO}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_SUDOWOODO] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_ROCK),
        .catchRate = 65,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 144 : 135,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sudowoodo"),
        .cryId = CRY_SUDOWOODO,
        .natDexNum = NATIONAL_DEX_SUDOWOODO,
        .categoryName = _("Imitation"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It mimics a tree to avoid being attacked\n"
            "by enemies. But since its forelegs\n"
            "remain green throughout the year, it is\n"
            "easily identified as a fake in the winter."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sudowoodo,
        .frontPicFemale = gMonFrontPic_SudowoodoF,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Sudowoodo,
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Sudowoodo,
        .backPicFemale = gMonBackPic_SudowoodoF,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Sudowoodo,
        .shinyPalette = gMonShinyPalette_Sudowoodo,
        .iconSprite = gMonIcon_Sudowoodo,
        .iconPalIndex = 1,
        FOOTPRINT(Sudowoodo)
        OVERWORLD(
            sPicTable_Sudowoodo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sudowoodo,
            gShinyOverworldPalette_Sudowoodo
        )
        .levelUpLearnset = sSudowoodoLevelUpLearnset,
        .teachableLearnset = sSudowoodoTeachableLearnset,
        .eggMoveLearnset = sSudowoodoEggMoveLearnset,
    },
#endif //P_FAMILY_SUDOWOODO

#if P_FAMILY_HOPPIP
    [SPECIES_HOPPIP] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 74,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_INFILTRATOR, ABILITY_LEAF_GUARD },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFILTRATOR },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hoppip"),
        .cryId = CRY_HOPPIP,
        .natDexNum = NATIONAL_DEX_HOPPIP,
        .categoryName = _("Cottonweed"),
        .height = 4,
        .weight = 5,
        .description = COMPOUND_STRING(
            "This Pokémon drifts and floats with the\n"
            "wind. If it senses the approach of strong\n"
            "winds, a Hoppip links leaves with others\n"
            "to prepare against being blown away."),
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Hoppip,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Hoppip,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Hoppip,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Hoppip,
        .shinyPalette = gMonShinyPalette_Hoppip,
        .iconSprite = gMonIcon_Hoppip,
        .iconPalIndex = 1,
        FOOTPRINT(Hoppip)
        OVERWORLD(
            sPicTable_Hoppip,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Hoppip,
            gShinyOverworldPalette_Hoppip
        )
        .levelUpLearnset = sHoppipLevelUpLearnset,
        .teachableLearnset = sHoppipTeachableLearnset,
        .eggMoveLearnset = sHoppipEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 14, SPECIES_SKIPLOOM}),
    },

    [SPECIES_SKIPLOOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 119 : 136,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_INFILTRATOR, ABILITY_LEAF_GUARD },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFILTRATOR },
    #endif
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Skiploom"),
        .cryId = CRY_SKIPLOOM,
        .natDexNum = NATIONAL_DEX_SKIPLOOM,
        .categoryName = _("Cottonweed"),
        .height = 6,
        .weight = 10,
        .description = COMPOUND_STRING(
            "It blossoms when the temperature rises\n"
            "above 64 degrees F. Because its flower's\n"
            "blooming changes with the temperature,\n"
            "it is sometimes used as a thermometer."),
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Skiploom,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Skiploom,
        .frontAnimId = ANIM_RISING_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Skiploom,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 4,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Skiploom,
        .shinyPalette = gMonShinyPalette_Skiploom,
        .iconSprite = gMonIcon_Skiploom,
        .iconPalIndex = 1,
        FOOTPRINT(Skiploom)
        OVERWORLD(
            sPicTable_Skiploom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Skiploom,
            gShinyOverworldPalette_Skiploom
        )
        .levelUpLearnset = sSkiploomLevelUpLearnset,
        .teachableLearnset = sSkiploomTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_JUMPLUFF}),
    },

    [SPECIES_JUMPLUFF] =
    {
        .baseHP        = 75,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 55,
        .baseSpDefense = P_UPDATED_STATS >= GEN_6 ? 95 : 85,
        .types = MON_TYPES(TYPE_GRASS, TYPE_FLYING),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 230,
    #elif P_UPDATED_EXP_YIELDS >= GEN_6
        .expYield = 207,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 203,
    #else
        .expYield = 176,
    #endif
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FAIRY, EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_INFILTRATOR, ABILITY_LEAF_GUARD },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_INFILTRATOR },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Jumpluff"),
        .cryId = CRY_JUMPLUFF,
        .natDexNum = NATIONAL_DEX_JUMPLUFF,
        .categoryName = _("Cottonweed"),
        .height = 8,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Jumpluff ride warm southern winds to\n"
            "cross the sea and fly to foreign lands.\n"
            "This Pokémon lands when it encounters\n"
            "cold air while it is floating."),
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Jumpluff,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Jumpluff,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE_SMALL,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Jumpluff,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Jumpluff,
        .shinyPalette = gMonShinyPalette_Jumpluff,
        .iconSprite = gMonIcon_Jumpluff,
        .iconPalIndex = 2,
        FOOTPRINT(Jumpluff)
        OVERWORLD(
            sPicTable_Jumpluff,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Jumpluff,
            gShinyOverworldPalette_Jumpluff
        )
        .levelUpLearnset = sJumpluffLevelUpLearnset,
        .teachableLearnset = sJumpluffTeachableLearnset,
    },
#endif //P_FAMILY_HOPPIP

#if P_FAMILY_AIPOM
    [SPECIES_AIPOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 72 : 94,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RUN_AWAY, ABILITY_NONE, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Aipom"),
        .cryId = CRY_AIPOM,
        .natDexNum = NATIONAL_DEX_AIPOM,
        .categoryName = _("Long Tail"),
        .height = 8,
        .weight = 115,
        .description = COMPOUND_STRING(
            "Its tail ends with a dexterous, handlike\n"
            "appendage. However, because it uses the\n"
            "tail so much, Aipom's real hands have\n"
            "become rather clumsy."),
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Aipom,
        .frontPicFemale = gMonFrontPic_AipomF,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Aipom,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Aipom,
        .backPicFemale = gMonBackPic_AipomF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Aipom,
        .shinyPalette = gMonShinyPalette_Aipom,
        .iconSprite = gMonIcon_Aipom,
        .iconPalIndex = 2,
        FOOTPRINT(Aipom)
        OVERWORLD(
            sPicTable_Aipom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Aipom,
            gShinyOverworldPalette_Aipom
        )
        .levelUpLearnset = sAipomLevelUpLearnset,
        .teachableLearnset = sAipomTeachableLearnset,
        .eggMoveLearnset = sAipomEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_DOUBLE_HIT, SPECIES_AMBIPOM}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_AMBIPOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 66,
        .baseSpeed     = 115,
        .baseSpAttack  = 60,
        .baseSpDefense = 66,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 169 : 186,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_TECHNICIAN, ABILITY_NONE, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Ambipom"),
        .cryId = CRY_AMBIPOM,
        .natDexNum = NATIONAL_DEX_AMBIPOM,
        .categoryName = _("Long Tail"),
        .height = 12,
        .weight = 203,
        .description = COMPOUND_STRING(
            "They live on large trees. Split into two,\n"
            "the tails are so adept at handling and\n"
            "doing things, Ambipom rarely uses\n"
            "its hands now."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ambipom,
        .frontPicFemale = gMonFrontPic_AmbipomF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Ambipom,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Ambipom,
        .backPicFemale = gMonBackPic_AmbipomF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Ambipom,
        .shinyPalette = gMonShinyPalette_Ambipom,
        .iconSprite = gMonIcon_Ambipom,
        .iconPalIndex = 2,
        FOOTPRINT(Ambipom)
        OVERWORLD(
            sPicTable_Ambipom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ambipom,
            gShinyOverworldPalette_Ambipom
        )
        .levelUpLearnset = sAmbipomLevelUpLearnset,
        .teachableLearnset = sAmbipomTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_AIPOM

#if P_FAMILY_SUNKERN
    [SPECIES_SUNKERN] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 235,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 36 : 52,
        .evYield_SpAttack = 1,
        .itemCommon = ITEM_SUN_STONE,
        .itemRare = ITEM_SUN_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EARLY_BIRD },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sunkern"),
        .cryId = CRY_SUNKERN,
        .natDexNum = NATIONAL_DEX_SUNKERN,
        .categoryName = _("Seed"),
        .height = 3,
        .weight = 18,
        .description = COMPOUND_STRING(
            "Sunkern try to minimize movement to\n"
            "conserve the nutrients they have stored\n"
            "in their bodies for evolution. They will\n"
            "not eat, subsisting only on morning dew."),
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sunkern,
        .frontPicSize = MON_COORDS_SIZE(32, 40),
        .frontPicYOffset = 17,
        .frontAnimFrames = sAnims_Sunkern,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Sunkern,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Sunkern,
        .shinyPalette = gMonShinyPalette_Sunkern,
        .iconSprite = gMonIcon_Sunkern,
        .iconPalIndex = 1,
        FOOTPRINT(Sunkern)
        OVERWORLD(
            sPicTable_Sunkern,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Sunkern,
            gShinyOverworldPalette_Sunkern
        )
        .levelUpLearnset = sSunkernLevelUpLearnset,
        .teachableLearnset = sSunkernTeachableLearnset,
        .eggMoveLearnset = sSunkernEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}),
    },

    [SPECIES_SUNFLORA] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GRASS),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 149 : 146,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_GRASS),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD },
    #else
        .abilities = { ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EARLY_BIRD },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sunflora"),
        .cryId = CRY_SUNFLORA,
        .natDexNum = NATIONAL_DEX_SUNFLORA,
        .categoryName = _("Sun"),
        .height = 8,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Sunflora convert solar energy into\n"
            "nutrition. They are highly active in the\n"
            "warm daytime but suddenly stop moving as\n"
            "soon as the sun sets."),
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sunflora,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sunflora,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sunflora,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Sunflora,
        .shinyPalette = gMonShinyPalette_Sunflora,
        .iconSprite = gMonIcon_Sunflora,
        .iconPalIndex = 1,
        FOOTPRINT(Sunflora)
        OVERWORLD(
            sPicTable_Sunflora,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sunflora,
            gShinyOverworldPalette_Sunflora
        )
        .levelUpLearnset = sSunfloraLevelUpLearnset,
        .teachableLearnset = sSunfloraTeachableLearnset,
    },
#endif //P_FAMILY_SUNKERN

#if P_FAMILY_YANMA
    [SPECIES_YANMA] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 78 : 147,
        .evYield_Speed = (P_UPDATED_EVS >= GEN_4) ? 1 : 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Yanma"),
        .cryId = CRY_YANMA,
        .natDexNum = NATIONAL_DEX_YANMA,
        .categoryName = _("Clear Wing"),
        .height = 12,
        .weight = 380,
        .description = COMPOUND_STRING(
            "It can see 360 degrees without moving\n"
            "its eyes. It is a great flier capable of\n"
            "making sudden stops and turning midair to\n"
            "quickly chase down targeted prey."),
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Yanma,
        .frontPicSize = MON_COORDS_SIZE(64, 40),
        .frontPicYOffset = 14,
        .frontAnimFrames = sAnims_Yanma,
        .frontAnimId = ANIM_FIGURE_8,
        .enemyMonElevation = 13,
        .backPic = gMonBackPic_Yanma,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Yanma,
        .shinyPalette = gMonShinyPalette_Yanma,
        .iconSprite = gMonIcon_Yanma,
        .iconPalIndex = 1,
        FOOTPRINT(Yanma)
        OVERWORLD(
            sPicTable_Yanma,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Yanma,
            gShinyOverworldPalette_Yanma
        )
        .levelUpLearnset = sYanmaLevelUpLearnset,
        .teachableLearnset = sYanmaTeachableLearnset,
        .eggMoveLearnset = sYanmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_YANMEGA}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_YANMEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 76,
        .baseDefense   = 86,
        .baseSpeed     = 95,
        .baseSpAttack  = 116,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_BUG, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 180 : 198,
        .evYield_Attack = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_TINTED_LENS, ABILITY_NONE, ABILITY_SPEED_BOOST },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Yanmega"),
        .cryId = CRY_YANMEGA,
        .natDexNum = NATIONAL_DEX_YANMEGA,
        .categoryName = _("Ogre Darner"),
        .height = 19,
        .weight = 515,
        .description = COMPOUND_STRING(
            "This six-legged Pokémon is easily capable\n"
            "of transporting an adult in flight. It is\n"
            "adept at biting apart foes while flying\n"
            "by at high speed."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Yanmega,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Yanmega,
        .frontAnimId = ANIM_H_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Yanmega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Yanmega,
        .shinyPalette = gMonShinyPalette_Yanmega,
        .iconSprite = gMonIcon_Yanmega,
        .iconPalIndex = 1,
        FOOTPRINT(Yanmega)
        OVERWORLD(
            sPicTable_Yanmega,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Yanmega,
            gShinyOverworldPalette_Yanmega
        )
        .levelUpLearnset = sYanmegaLevelUpLearnset,
        .teachableLearnset = sYanmegaTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA

#if P_FAMILY_WOOPER
    [SPECIES_WOOPER] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 52,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_UNAWARE, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wooper"),
        .cryId = CRY_WOOPER,
        .natDexNum = NATIONAL_DEX_WOOPER,
        .categoryName = _("Water Fish"),
        .height = 4,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Wooper usually live in water but come\n"
            "out onto land seeking food occasionally.\n"
            "On land, they coat their bodies with a\n"
            "gooey, toxic film."),
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wooper,
        .frontPicFemale = gMonFrontPic_WooperF,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicSizeFemale = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Wooper,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wooper,
        .backPicFemale = gMonBackPic_WooperF,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Wooper,
        .shinyPalette = gMonShinyPalette_Wooper,
        .iconSprite = gMonIcon_Wooper,
        .iconPalIndex = 0,
        FOOTPRINT(Wooper)
        OVERWORLD(
            sPicTable_Wooper,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wooper,
            gShinyOverworldPalette_Wooper
        )
        .levelUpLearnset = sWooperLevelUpLearnset,
        .teachableLearnset = sWooperTeachableLearnset,
        .eggMoveLearnset = sWooperEggMoveLearnset,
        .formSpeciesIdTable = sWooperFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_QUAGSIRE}),
    },

    [SPECIES_QUAGSIRE] =
    {
        .baseHP        = 95,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_WATER, TYPE_GROUND),
        .catchRate = 90,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 151 : 137,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_UNAWARE, ABILITY_NONE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Quagsire"),
        .cryId = CRY_QUAGSIRE,
        .natDexNum = NATIONAL_DEX_QUAGSIRE,
        .categoryName = _("Water Fish"),
        .height = 14,
        .weight = 750,
        .description = COMPOUND_STRING(
            "A Quagsire hunts by leaving its mouth wide\n"
            "open in water and waiting for its prey to\n"
            "blunder in. Because it doesn't move, it\n"
            "does not get very hungry."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Quagsire,
        .frontPicFemale = gMonFrontPic_QuagsireF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Quagsire,
        .frontAnimId = ANIM_H_STRETCH,
        .backPic = gMonBackPic_Quagsire,
        .backPicFemale = gMonBackPic_QuagsireF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Quagsire,
        .shinyPalette = gMonShinyPalette_Quagsire,
        .iconSprite = gMonIcon_Quagsire,
        .iconPalIndex = 0,
        FOOTPRINT(Quagsire)
        OVERWORLD(
            sPicTable_Quagsire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Quagsire,
            gShinyOverworldPalette_Quagsire
        )
        .levelUpLearnset = sQuagsireLevelUpLearnset,
        .teachableLearnset = sQuagsireTeachableLearnset,
    },

#if P_PALDEAN_FORMS
    [SPECIES_WOOPER_PALDEAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 255,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 42 : 52,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_POINT, ABILITY_UNAWARE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Wooper"),
        .cryId = CRY_WOOPER,
        .natDexNum = NATIONAL_DEX_WOOPER,
        .categoryName = _("Poison Fish"),
        .height = 4,
        .weight = 110,
        .description = COMPOUND_STRING(
            "After losing a territorial struggle,\n"
            "Wooper began living on land.\n"
            "The Pokémon changed over time, developing\n"
            "a poisonous film to protect its body."),
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_WooperPaldean,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_WooperPaldean,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_WooperPaldean,
        .backPicSize = MON_COORDS_SIZE(64, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_WooperPaldean,
        .shinyPalette = gMonShinyPalette_WooperPaldean,
        .iconSprite = gMonIcon_WooperPaldean,
        .iconPalIndex = 2,
        FOOTPRINT(Wooper)
        OVERWORLD(
            sPicTable_WooperPaldean,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_WooperPaldean,
            gShinyOverworldPalette_WooperPaldean
        )
        .isPaldeanForm = TRUE,
        .levelUpLearnset = sWooperPaldeanLevelUpLearnset,
        .teachableLearnset = sWooperPaldeanTeachableLearnset,
        .eggMoveLearnset = sWooperPaldeanEggMoveLearnset,
        .formSpeciesIdTable = sWooperFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_CLODSIRE}),
    },

    [SPECIES_CLODSIRE] =
    {
        .baseHP        = 130,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_POISON, TYPE_GROUND),
        .catchRate = 90,
        .expYield = 151,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_POINT, ABILITY_UNAWARE, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Clodsire"),
        .cryId = CRY_CLODSIRE,
        .natDexNum = NATIONAL_DEX_CLODSIRE,
        .categoryName = _("Spiny Fish"),
        .height = 18,
        .weight = 2230,
        .description = COMPOUND_STRING(
            "When attacked, this Pokémon will\n"
            "retaliate by sticking thick spines out\n"
            "from its body. It's a risky move\n"
            "that puts everything on the line."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Clodsire,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Clodsire,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Clodsire,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 15,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Clodsire,
        .shinyPalette = gMonShinyPalette_Clodsire,
        .iconSprite = gMonIcon_Clodsire,
        .iconPalIndex = 0,
        FOOTPRINT(Clodsire)
        OVERWORLD(
            sPicTable_Clodsire,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Clodsire,
            gShinyOverworldPalette_Clodsire
        )
        .levelUpLearnset = sClodsireLevelUpLearnset,
        .teachableLearnset = sClodsireTeachableLearnset,
    },
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER

#if P_FAMILY_MURKROW
    [SPECIES_MURKROW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 42,
        .baseSpeed     = 91,
        .baseSpAttack  = 85,
        .baseSpDefense = 42,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 81 : 107,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_PRANKSTER },
    #else
        .abilities = { ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_PRANKSTER },
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Murkrow"),
        .cryId = CRY_MURKROW,
        .natDexNum = NATIONAL_DEX_MURKROW,
        .categoryName = _("Darkness"),
        .height = 5,
        .weight = 21,
        .description = COMPOUND_STRING(
            "Murkrow were feared as the alleged\n"
            "bearers of ill fortune. It shows strong\n"
            "interest in anything that sparkles. It will\n"
            "even try to steal rings from women."),
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Murkrow,
        .frontPicFemale = gMonFrontPic_MurkrowF,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 15,
        .frontAnimFrames = sAnims_Murkrow,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Murkrow,
        .backPicFemale = gMonBackPic_MurkrowF,
        .backPicSize = MON_COORDS_SIZE(40, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(40, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Murkrow,
        .shinyPalette = gMonShinyPalette_Murkrow,
        .iconSprite = gMonIcon_Murkrow,
        .iconPalIndex = 2,
        FOOTPRINT(Murkrow)
        OVERWORLD(
            sPicTable_Murkrow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Murkrow,
            gShinyOverworldPalette_Murkrow
        )
        .levelUpLearnset = sMurkrowLevelUpLearnset,
        .teachableLearnset = sMurkrowTeachableLearnset,
        .eggMoveLearnset = sMurkrowEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_HONCHKROW] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 52,
        .baseSpeed     = 71,
        .baseSpAttack  = 105,
        .baseSpDefense = 52,
        .types = MON_TYPES(TYPE_DARK, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 187,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Honchkrow"),
        .cryId = CRY_HONCHKROW,
        .natDexNum = NATIONAL_DEX_HONCHKROW,
        .categoryName = _("Big Boss"),
        .height = 9,
        .weight = 273,
        .description = COMPOUND_STRING(
            "Becoming active at night, it is known\n"
            "to swarm with numerous Murkrow in tow.\n"
            "It is said that it never forgives the\n"
            "mistakes of its cronies."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Honchkrow,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Honchkrow,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Honchkrow,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_STRETCH,
        .palette = gMonPalette_Honchkrow,
        .shinyPalette = gMonShinyPalette_Honchkrow,
        .iconSprite = gMonIcon_Honchkrow,
        .iconPalIndex = 2,
        FOOTPRINT(Honchkrow)
        OVERWORLD(
            sPicTable_Honchkrow,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Honchkrow,
            gShinyOverworldPalette_Honchkrow
        )
        .levelUpLearnset = sHonchkrowLevelUpLearnset,
        .teachableLearnset = sHonchkrowTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MURKROW

#if P_FAMILY_MISDREAVUS
    [SPECIES_MISDREAVUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 87 : 147,
        .evYield_SpAttack = (P_UPDATED_EVS >= GEN_4) ? 0 : 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Misdreavus"),
        .cryId = CRY_MISDREAVUS,
        .natDexNum = NATIONAL_DEX_MISDREAVUS,
        .categoryName = _("Screech"),
        .height = 7,
        .weight = 10,
        .description = COMPOUND_STRING(
            "A Misdreavus frightens people with a\n"
            "creepy, sobbing cry. It apparently uses\n"
            "its red spheres to absorb the fear of foes\n"
            "as its nutrition."),
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Misdreavus,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 13,
        .frontAnimFrames = sAnims_Misdreavus,
        .frontAnimId = ANIM_V_SLIDE_WOBBLE,
        .enemyMonElevation = 12,
        .backPic = gMonBackPic_Misdreavus,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_VIBRATE,
        .palette = gMonPalette_Misdreavus,
        .shinyPalette = gMonShinyPalette_Misdreavus,
        .iconSprite = gMonIcon_Misdreavus,
        .iconPalIndex = 0,
        FOOTPRINT(Misdreavus)
        OVERWORLD(
            sPicTable_Misdreavus,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Misdreavus,
            gShinyOverworldPalette_Misdreavus
        )
        .levelUpLearnset = sMisdreavusLevelUpLearnset,
        .teachableLearnset = sMisdreavusTeachableLearnset,
        .eggMoveLearnset = sMisdreavusEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DUSK_STONE, SPECIES_MISMAGIUS}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MISMAGIUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 173 : 187,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mismagius"),
        .cryId = CRY_MISMAGIUS,
        .natDexNum = NATIONAL_DEX_MISMAGIUS,
        .categoryName = _("Magical"),
        .height = 9,
        .weight = 44,
        .description = COMPOUND_STRING(
            "Its cries sound like incantations.\n"
            "Those hearing it are tormented by\n"
            "headaches and hallucinations.\n"
            "It appears where you least expect it."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mismagius,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Mismagius,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 3,
        .backPic = gMonBackPic_Mismagius,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Mismagius,
        .shinyPalette = gMonShinyPalette_Mismagius,
        .iconSprite = gMonIcon_Mismagius,
        .iconPalIndex = 2,
        FOOTPRINT(Mismagius)
        OVERWORLD(
            sPicTable_Mismagius,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mismagius,
            gShinyOverworldPalette_Mismagius
        )
        .levelUpLearnset = sMismagiusLevelUpLearnset,
        .teachableLearnset = sMismagiusTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MISDREAVUS

#if P_FAMILY_UNOWN
#define UNOWN_MISC_INFO(letter, _noFlip, frontWidth, frontHeight, backWidth, backHeight, backYOffset)   \
    {                                                                                                   \
        .baseHP        = 48,                                                                            \
        .baseAttack    = 72,                                                                            \
        .baseDefense   = 48,                                                                            \
        .baseSpeed     = 48,                                                                            \
        .baseSpAttack  = 72,                                                                            \
        .baseSpDefense = 48,                                                                            \
        .types = MON_TYPES(TYPE_PSYCHIC),                                                               \
        .catchRate = 225,                                                                               \
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 118 : 61,                                         \
        .evYield_Attack = 1,                                                                            \
        .evYield_SpAttack = 1,                                                                          \
        .genderRatio = MON_GENDERLESS,                                                                  \
        .eggCycles = 40,                                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                                               \
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),                                      \
        .abilities = { ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE },                                  \
        .bodyColor = BODY_COLOR_BLACK,                                                                  \
        .noFlip = _noFlip,                                                                              \
        .speciesName = _("Unown"),                                                                      \
        .cryId = CRY_UNOWN,                                                                             \
        .natDexNum = NATIONAL_DEX_UNOWN,                                                                \
        .categoryName = _("Symbol"),                                                                    \
        .height = 5,                                                                                    \
        .weight = 50,                                                                                   \
        .description = gUnownPokedexText,                                                               \
        .pokemonScale = 411,                                                                            \
        .pokemonOffset = 2,                                                                             \
        .trainerScale = 256,                                                                            \
        .trainerOffset = 0,                                                                             \
        .frontPic = gMonFrontPic_Unown ##letter,                                                        \
        .frontPicSize = MON_COORDS_SIZE(frontWidth, frontHeight),                                       \
        .frontPicYOffset = 16,                                                                          \
        .frontAnimFrames = sAnims_Unown,                                                                \
        .frontAnimId = ANIM_ZIGZAG_FAST,                                                                \
        .enemyMonElevation = 8,                                                                         \
        .backPic = gMonBackPic_Unown ##letter,                                                          \
        .backPicSize = MON_COORDS_SIZE(backWidth, backHeight),                                          \
        .backPicYOffset = backYOffset,                                                                  \
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,                                                    \
        .palette = gMonPalette_Unown,                                                                   \
        .shinyPalette = gMonShinyPalette_Unown,                                                         \
        .iconSprite = gMonIcon_Unown ##letter,                                                          \
        .iconPalIndex = 0,                                                                              \
        FOOTPRINT(Unown)                                                                                \
        OVERWORLD(                                                                                       \
            sPicTable_Unown ##letter,                                                                   \
            SIZE_32x32,                                                                                 \
            SHADOW_SIZE_M,                                                                              \
            TRACKS_NONE,                                                                                \
            gOverworldPalette_Unown,                                                                    \
            gShinyOverworldPalette_Unown,                                                               \
        )                                                                                               \
        .levelUpLearnset = sUnownLevelUpLearnset,                                                       \
        .teachableLearnset = sUnownTeachableLearnset,                                                   \
        .tmIlliterate = TRUE,                                                                           \
        .formSpeciesIdTable = sUnownFormSpeciesIdTable,                                                 \
    }

    [SPECIES_UNOWN]       = UNOWN_MISC_INFO(A,               FALSE, 24, 40, 24, 48,  8 ),
    [SPECIES_UNOWN_B]     = UNOWN_MISC_INFO(B,               TRUE,  24, 32, 40, 48,  9 ),
    [SPECIES_UNOWN_C]     = UNOWN_MISC_INFO(C,               TRUE,  32, 32, 48, 56,  6 ),
    [SPECIES_UNOWN_D]     = UNOWN_MISC_INFO(D,               TRUE,  32, 32, 40, 48,  8 ),
    [SPECIES_UNOWN_E]     = UNOWN_MISC_INFO(E,               TRUE,  32, 32, 40, 48, 10 ),
    [SPECIES_UNOWN_F]     = UNOWN_MISC_INFO(F,               TRUE,  32, 32, 48, 48, 10 ),
    [SPECIES_UNOWN_G]     = UNOWN_MISC_INFO(G,               TRUE,  24, 40, 40, 56,  5 ),
    [SPECIES_UNOWN_H]     = UNOWN_MISC_INFO(H,               TRUE,  32, 32, 48, 48,  8 ),
    [SPECIES_UNOWN_I]     = UNOWN_MISC_INFO(I,               FALSE, 24, 32, 24, 56,  7 ),
    [SPECIES_UNOWN_J]     = UNOWN_MISC_INFO(J,               TRUE,  24, 32, 32, 48,  9 ),
    [SPECIES_UNOWN_K]     = UNOWN_MISC_INFO(K,               TRUE,  32, 32, 40, 56,  7 ),
    [SPECIES_UNOWN_L]     = UNOWN_MISC_INFO(L,               TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_M]     = UNOWN_MISC_INFO(M,               FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_UNOWN_N]     = UNOWN_MISC_INFO(N,               TRUE,  32, 24, 48, 40, 13 ),
    [SPECIES_UNOWN_O]     = UNOWN_MISC_INFO(O,               FALSE, 32, 32, 48, 48,  8 ),
    [SPECIES_UNOWN_P]     = UNOWN_MISC_INFO(P,               TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_Q]     = UNOWN_MISC_INFO(Q,               TRUE,  32, 24, 40, 40, 15 ),
    [SPECIES_UNOWN_R]     = UNOWN_MISC_INFO(R,               TRUE,  24, 32, 32, 40, 12 ),
    [SPECIES_UNOWN_S]     = UNOWN_MISC_INFO(S,               TRUE,  32, 40, 40, 56,  4 ),
    [SPECIES_UNOWN_T]     = UNOWN_MISC_INFO(T,               FALSE, 24, 32, 32, 40, 13 ),
    [SPECIES_UNOWN_U]     = UNOWN_MISC_INFO(U,               FALSE, 32, 32, 48, 40, 13 ),
    [SPECIES_UNOWN_V]     = UNOWN_MISC_INFO(V,               TRUE,  32, 32, 40, 48, 11 ),
    [SPECIES_UNOWN_W]     = UNOWN_MISC_INFO(W,               FALSE, 32, 32, 40, 40, 13 ),
    [SPECIES_UNOWN_X]     = UNOWN_MISC_INFO(X,               FALSE, 24, 24, 40, 40, 15 ),
    [SPECIES_UNOWN_Y]     = UNOWN_MISC_INFO(Y,               FALSE, 24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_Z]     = UNOWN_MISC_INFO(Z,               TRUE,  24, 32, 32, 48, 10 ),
    [SPECIES_UNOWN_EMARK] = UNOWN_MISC_INFO(ExclamationMark, FALSE, 24, 40, 24, 56,  6 ),
    [SPECIES_UNOWN_QMARK] = UNOWN_MISC_INFO(QuestionMark,    TRUE,  24, 40, 32, 56,  6 ),
#endif //P_FAMILY_UNOWN

#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
    [SPECIES_WYNAUT] =
    {
        .baseHP        = 95,
        .baseAttack    = 23,
        .baseDefense   = 48,
        .baseSpeed     = 23,
        .baseSpAttack  = 23,
        .baseSpDefense = 48,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 125,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 52 : 44,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wynaut"),
        .cryId = CRY_WYNAUT,
        .natDexNum = NATIONAL_DEX_WYNAUT,
        .categoryName = _("Bright"),
        .height = 6,
        .weight = 140,
        .description = COMPOUND_STRING(
            "A Wynaut loves to eat sweet fruits.\n"
            "It cleverly picks fruits using its earlike\n"
            "arms. They gather in fruit gardens, drawn\n"
            "by the fragrance."),
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wynaut,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Wynaut,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .frontAnimDelay = 15,
        .backPic = gMonBackPic_Wynaut,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_Wynaut,
        .shinyPalette = gMonShinyPalette_Wynaut,
        .iconSprite = gMonIcon_Wynaut,
        .iconPalIndex = 0,
        FOOTPRINT(Wynaut)
        OVERWORLD(
            sPicTable_Wynaut,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wynaut,
            gShinyOverworldPalette_Wynaut
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWynautLevelUpLearnset,
        .teachableLearnset = sWynautTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 15, SPECIES_WOBBUFFET}),
    },
#endif //P_GEN_3_CROSS_EVOS

    [SPECIES_WOBBUFFET] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 142 : 177,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Wobbuffet"),
        .cryId = CRY_WOBBUFFET,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = COMPOUND_STRING(
            "Usually docile, a Wobbuffet strikes back\n"
            "ferociously if its black tail is attacked.\n"
            "It makes its lair in caves where it waits\n"
            "for nightfall."),
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Wobbuffet,
        .frontPicFemale = gMonFrontPic_WobbuffetF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Wobbuffet,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Wobbuffet,
        .backPicFemale = gMonBackPic_WobbuffetF,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Wobbuffet,
        .shinyPalette = gMonShinyPalette_Wobbuffet,
        .iconSprite = gMonIcon_Wobbuffet,
        .iconPalIndex = 0,
    #if P_CUSTOM_GENDER_DIFF_ICONS == TRUE
        .iconSpriteFemale = gMonIcon_WobbuffetF,
        .iconPalIndexFemale = 0,
    #endif
        FOOTPRINT(Wobbuffet)
        OVERWORLD(
            sPicTable_Wobbuffet,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wobbuffet,
            gShinyOverworldPalette_Wobbuffet
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sWobbuffetLevelUpLearnset,
        .teachableLearnset = sWobbuffetTeachableLearnset,
    },
#endif //P_FAMILY_WOBBUFFET

#if P_FAMILY_GIRAFARIG
    [SPECIES_GIRAFARIG] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 159 : 149,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Girafarig"),
        .cryId = CRY_GIRAFARIG,
        .natDexNum = NATIONAL_DEX_GIRAFARIG,
        .categoryName = _("Long Neck"),
        .height = 15,
        .weight = 415,
        .description = COMPOUND_STRING(
            "A Girafarig is an herbivore--it eats\n"
            "grass and tree shoots. While it is eating,\n"
            "its tail makes chewing and swallowing\n"
            "motions as if it were also eating."),
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Girafarig,
        .frontPicFemale = gMonFrontPic_GirafarigF,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Girafarig,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Girafarig,
        .backPicFemale = gMonBackPic_GirafarigF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Girafarig,
        .shinyPalette = gMonShinyPalette_Girafarig,
        .iconSprite = gMonIcon_Girafarig,
        .iconPalIndex = 1,
        FOOTPRINT(Girafarig)
        OVERWORLD(
            sPicTable_Girafarig,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Girafarig,
            gShinyOverworldPalette_Girafarig
        )
        .levelUpLearnset = sGirafarigLevelUpLearnset,
        .teachableLearnset = sGirafarigTeachableLearnset,
        .eggMoveLearnset = sGirafarigEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_TWIN_BEAM, SPECIES_FARIGIRAF}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_FARIGIRAF] =
    {
        .baseHP        = 120,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 260,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUD_CHEW, ABILITY_ARMOR_TAIL, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Farigiraf"),
        .cryId = CRY_FARIGIRAF,
        .natDexNum = NATIONAL_DEX_FARIGIRAF,
        .categoryName = _("Long Neck"),
        .height = 32,
        .weight = 1600,
        .description = COMPOUND_STRING(
            "Now that the brain waves from the\n"
            "head and tail are synced up, the\n"
            "psychic power of this Pokémon is 10\n"
            "times stronger than Girafarig's."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Farigiraf,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Farigiraf,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Farigiraf,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Farigiraf,
        .shinyPalette = gMonShinyPalette_Farigiraf,
        .iconSprite = gMonIcon_Farigiraf,
        .iconPalIndex = 0,
        FOOTPRINT(Farigiraf)
        OVERWORLD(
            sPicTable_Farigiraf,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Farigiraf,
            gShinyOverworldPalette_Farigiraf
        )
        .levelUpLearnset = sFarigirafLevelUpLearnset,
        .teachableLearnset = sFarigirafTeachableLearnset,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG

#if P_FAMILY_PINECO
    [SPECIES_PINECO] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 90,
        .baseSpeed     = 15,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_BUG),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 58 : 60,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pineco"),
        .cryId = CRY_PINECO,
        .natDexNum = NATIONAL_DEX_PINECO,
        .categoryName = _("Bagworm"),
        .height = 6,
        .weight = 72,
        .description = COMPOUND_STRING(
            "A Pineco hangs from a tree branch and\n"
            "waits for prey. While eating, if it is\n"
            "disturbed by someone shaking its tree, it\n"
            "falls on the ground and suddenly explodes."),
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pineco,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Pineco,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Pineco,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Pineco,
        .shinyPalette = gMonShinyPalette_Pineco,
        .iconSprite = gMonIcon_Pineco,
        .iconPalIndex = 0,
        FOOTPRINT(Pineco)
        OVERWORLD(
            sPicTable_Pineco,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Pineco,
            gShinyOverworldPalette_Pineco
        )
        .levelUpLearnset = sPinecoLevelUpLearnset,
        .teachableLearnset = sPinecoTeachableLearnset,
        .eggMoveLearnset = sPinecoEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 31, SPECIES_FORRETRESS}),
    },

    [SPECIES_FORRETRESS] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_BUG, TYPE_STEEL),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 118,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Forretress"),
        .cryId = CRY_FORRETRESS,
        .natDexNum = NATIONAL_DEX_FORRETRESS,
        .categoryName = _("Bagworm"),
        .height = 12,
        .weight = 1258,
        .description = COMPOUND_STRING(
            "It keeps itself inside its steel shell.\n"
            "The shell is opened when it is catching\n"
            "prey, but it is so quick that the shell's\n"
            "inside cannot be seen."),
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Forretress,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Forretress,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Forretress,
        .backPicSize = MON_COORDS_SIZE(64, 32),
        .backPicYOffset = 16,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Forretress,
        .shinyPalette = gMonShinyPalette_Forretress,
        .iconSprite = gMonIcon_Forretress,
        .iconPalIndex = 2,
        FOOTPRINT(Forretress)
        OVERWORLD(
            sPicTable_Forretress,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Forretress,
            gShinyOverworldPalette_Forretress
        )
        .levelUpLearnset = sForretressLevelUpLearnset,
        .teachableLearnset = sForretressTeachableLearnset,
    },
#endif //P_FAMILY_PINECO

#if P_FAMILY_DUNSPARCE
    [SPECIES_DUNSPARCE] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 190,
    #if P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 145,
    #elif P_UPDATED_EXP_YIELDS >= GEN_4
        .expYield = 125,
    #else
        .expYield = 75,
    #endif
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RATTLED, ABILITY_SERENE_GRACE, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dunsparce"),
        .cryId = CRY_DUNSPARCE,
        .natDexNum = NATIONAL_DEX_DUNSPARCE,
        .categoryName = _("Land Snake"),
        .height = 15,
        .weight = 140,
        .description = COMPOUND_STRING(
            "Its drill-tipped tail is used to burrow into\n"
            "the ground backwards. This Pokémon is\n"
            "known to make its nest in complex shapes\n"
            "deep under the ground."),
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Dunsparce,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Dunsparce,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Dunsparce,
        .backPicSize = MON_COORDS_SIZE(56, 32),
        .backPicYOffset = 17,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Dunsparce,
        .shinyPalette = gMonShinyPalette_Dunsparce,
        .iconSprite = gMonIcon_Dunsparce,
        .iconPalIndex = 0,
        FOOTPRINT(Dunsparce)
        OVERWORLD(
            sPicTable_Dunsparce,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Dunsparce,
            gShinyOverworldPalette_Dunsparce
        )
        .levelUpLearnset = sDunsparceLevelUpLearnset,
        .teachableLearnset = sDunsparceTeachableLearnset,
        .eggMoveLearnset = sDunsparceEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE_TWO_SEGMENT, MOVE_HYPER_DRILL, SPECIES_DUDUNSPARCE_TWO_SEGMENT},
                                {EVO_MOVE_THREE_SEGMENT, MOVE_HYPER_DRILL, SPECIES_DUDUNSPARCE_THREE_SEGMENT}),
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DUDUNSPARCE_TWO_SEGMENT] =
    {
        .baseHP        = 125,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RATTLED, ABILITY_SERENE_GRACE, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Dudunsprce", "Dudunsparce"),
        .cryId = CRY_DUDUNSPARCE,
        .natDexNum = NATIONAL_DEX_DUDUNSPARCE,
        .categoryName = _("Land Snake"),
        .height = 36,
        .weight = 392,
        .description = COMPOUND_STRING(
            "This Pokémon uses its hard tail to\n"
            "make its nest by boring holes into\n"
            "bedrock deep underground. The nest\n"
            "can reach lengths of over six miles."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DudunsparceTwoSegment,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Dudunsparce,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceTwoSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceTwoSegment,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Dudunsparce,
            gShinyOverworldPalette_Dudunsparce
        )
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .formSpeciesIdTable = sDudunsparceFormSpeciesIdTable,
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] =
    {
        .baseHP        = 125,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_RATTLED, ABILITY_SERENE_GRACE, ABILITY_SERENE_GRACE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = HANDLE_EXPANDED_SPECIES_NAME("Dudunsprce", "Dudunsparce"),
        .cryId = CRY_DUDUNSPARCE,
        .natDexNum = NATIONAL_DEX_DUDUNSPARCE,
        .categoryName = _("Land Snake"),
        .height = 45,
        .weight = 474,
        .description = COMPOUND_STRING(
            "A recent study uncovered that the\n"
            "number of segments a Dudunsparce's\n"
            "body has is determined by the\n"
            "Pokémon's genes."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_DudunsparceThreeSegment,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Dudunsparce,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_DudunsparceThreeSegment,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Dudunsparce,
        .shinyPalette = gMonShinyPalette_Dudunsparce,
        .iconSprite = gMonIcon_Dudunsparce,
        .iconPalIndex = 0,
        FOOTPRINT(Dudunsparce)
        OVERWORLD(
            sPicTable_DudunsparceThreeSegment,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_DudunsparceThreeSegment,
            gShinyOverworldPalette_DudunsparceThreeSegment
        )
        .levelUpLearnset = sDudunsparceLevelUpLearnset,
        .teachableLearnset = sDudunsparceTeachableLearnset,
        .formSpeciesIdTable = sDudunsparceFormSpeciesIdTable,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_GLIGAR
    [SPECIES_GLIGAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 105,
        .baseSpeed     = 85,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 86 : 108,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gligar"),
        .cryId = CRY_GLIGAR,
        .natDexNum = NATIONAL_DEX_GLIGAR,
        .categoryName = _("Fly Scorpion"),
        .height = 11,
        .weight = 648,
        .description = COMPOUND_STRING(
            "It glides without making a single sound.\n"
            "It grasps the face of its foe using its\n"
            "hind and large front claws, then stabs\n"
            "with its poison barb."),
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Gligar,
        .frontPicFemale = gMonFrontPic_GligarF,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Gligar,
        .frontAnimId = ANIM_SHRINK_GROW,
        .enemyMonElevation = 8,
        .backPic = gMonBackPic_Gligar,
        .backPicFemale = gMonBackPic_GligarF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Gligar,
        .shinyPalette = gMonShinyPalette_Gligar,
        .iconSprite = gMonIcon_Gligar,
        .iconPalIndex = 0,
        FOOTPRINT(Gligar)
        OVERWORLD(
            sPicTable_Gligar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Gligar,
            gShinyOverworldPalette_Gligar
        )
        .levelUpLearnset = sGligarLevelUpLearnset,
        .teachableLearnset = sGligarTeachableLearnset,
        .eggMoveLearnset = sGligarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_GLISCOR}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_GLISCOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_GROUND, TYPE_FLYING),
        .catchRate = 30,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 192,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_HYPER_CUTTER, ABILITY_NONE, ABILITY_POISON_HEAL },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gliscor"),
        .cryId = CRY_GLISCOR,
        .natDexNum = NATIONAL_DEX_GLISCOR,
        .categoryName = _("Fang Scorp"),
        .height = 20,
        .weight = 425,
        .description = COMPOUND_STRING(
            "Gliscor observes prey while hanging\n"
            "upside down from branches. Its flight is\n"
            "soundless. When the chance presents\n"
            "itself, it swoops!"),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
        .frontPic = gMonFrontPic_Gliscor,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Gliscor,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_Gliscor,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_V_STRETCH,
        .palette = gMonPalette_Gliscor,
        .shinyPalette = gMonShinyPalette_Gliscor,
        .iconSprite = gMonIcon_Gliscor,
        .iconPalIndex = 2,
        FOOTPRINT(Gliscor)
        OVERWORLD(
            sPicTable_Gliscor,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Gliscor,
            gShinyOverworldPalette_Gliscor
        )
        .levelUpLearnset = sGliscorLevelUpLearnset,
        .teachableLearnset = sGliscorTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR

#if P_FAMILY_SNUBBULL
    [SPECIES_SNUBBULL] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_NORMAL),
    #endif
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 63,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Snubbull"),
        .cryId = CRY_SNUBBULL,
        .natDexNum = NATIONAL_DEX_SNUBBULL,
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 78,
        .description = COMPOUND_STRING(
            "By baring its fangs and making a scary\n"
            "face, it sends smaller Pokémon scurrying\n"
            "in terror. The Snubbull does seem a\n"
            "little sad at making its foes flee."),
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Snubbull,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Snubbull,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Snubbull,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Snubbull,
        .shinyPalette = gMonShinyPalette_Snubbull,
        .iconSprite = gMonIcon_Snubbull,
        .iconPalIndex = 0,
        FOOTPRINT(Snubbull)
        OVERWORLD(
            sPicTable_Snubbull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Snubbull,
            gShinyOverworldPalette_Snubbull
        )
        .levelUpLearnset = sSnubbullLevelUpLearnset,
        .teachableLearnset = sSnubbullTeachableLearnset,
        .eggMoveLearnset = sSnubbullEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 23, SPECIES_GRANBULL}),
    },

    [SPECIES_GRANBULL] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
    #if P_UPDATED_TYPES >= GEN_6
        .types = MON_TYPES(TYPE_FAIRY),
    #else
        .types = MON_TYPES(TYPE_NORMAL),
    #endif
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 178,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_RATTLED },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RATTLED },
    #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Granbull"),
        .cryId = CRY_GRANBULL,
        .natDexNum = NATIONAL_DEX_GRANBULL,
        .categoryName = _("Fairy"),
        .height = 14,
        .weight = 487,
        .description = COMPOUND_STRING(
            "It has a particularly well-developed lower\n"
            "jaw. The huge fangs are heavy, causing\n"
            "it to tilt its head. Unless it is startled,\n"
            "it will not try to bite."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Granbull,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Granbull,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Granbull,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Granbull,
        .shinyPalette = gMonShinyPalette_Granbull,
        .iconSprite = gMonIcon_Granbull,
        .iconPalIndex = 2,
        FOOTPRINT(Granbull)
        OVERWORLD(
            sPicTable_Granbull,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Granbull,
            gShinyOverworldPalette_Granbull
        )
        .levelUpLearnset = sGranbullLevelUpLearnset,
        .teachableLearnset = sGranbullTeachableLearnset,
    },
#endif //P_FAMILY_SNUBBULL

#if P_FAMILY_QWILFISH

#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define QWILFISH_EXP_YIELD 88
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define QWILFISH_EXP_YIELD 86
#else
    #define QWILFISH_EXP_YIELD 100
#endif

    [SPECIES_QWILFISH] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 85 : 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_WATER, TYPE_POISON),
        .catchRate = 45,
        .expYield = QWILFISH_EXP_YIELD,
        .evYield_Attack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SWIFT_SWIM, ABILITY_POISON_POINT },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Qwilfish"),
        .cryId = CRY_QWILFISH,
        .natDexNum = NATIONAL_DEX_QWILFISH,
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 39,
        .description = COMPOUND_STRING(
            "A Qwilfish uses the pressure of water\n"
            "it swallows to shoot toxic quills all at\n"
            "once from all over its body. It finds\n"
            "swimming to be somewhat challenging."),
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Qwilfish,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Qwilfish,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 39,
        .backPic = gMonBackPic_Qwilfish,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_GROW_STUTTER,
        .palette = gMonPalette_Qwilfish,
        .shinyPalette = gMonShinyPalette_Qwilfish,
        .iconSprite = gMonIcon_Qwilfish,
        .iconPalIndex = 0,
        FOOTPRINT(Qwilfish)
        OVERWORLD(
            sPicTable_Qwilfish,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Qwilfish,
            gShinyOverworldPalette_Qwilfish
        )
        .levelUpLearnset = sQwilfishLevelUpLearnset,
        .teachableLearnset = sQwilfishTeachableLearnset,
        .eggMoveLearnset = sQwilfishEggMoveLearnset,
        .formSpeciesIdTable = sQwilfishFormSpeciesIdTable,
    },

#if P_HISUIAN_FORMS
    [SPECIES_QWILFISH_HISUIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = P_UPDATED_STATS >= GEN_7 ? 85 : 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .catchRate = 45,
        .expYield = QWILFISH_EXP_YIELD,
        .evYield_Attack = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SWIFT_SWIM, ABILITY_POISON_POINT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Qwilfish"),
        .cryId = CRY_QWILFISH,
        .natDexNum = NATIONAL_DEX_QWILFISH,
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 39,
        .description = COMPOUND_STRING(
            "A form of Qwilfish from the distant past.\n"
            "Fishers detest this troublesome Pokémon\n"
            "because it sprays poison from its spines,\n"
            "getting it everywhere."),
        .pokemonScale = 430,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_QwilfishHisuian,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_QwilfishHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 9,
        .backPic = gMonBackPic_QwilfishHisuian,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_QwilfishHisuian,
        .shinyPalette = gMonShinyPalette_QwilfishHisuian,
        .iconSprite = gMonIcon_QwilfishHisuian,
        .iconPalIndex = 1,
        FOOTPRINT(Qwilfish)
        OVERWORLD(
            sPicTable_QwilfishHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_QwilfishHisuian,
            gShinyOverworldPalette_QwilfishHisuian
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sQwilfishHisuianLevelUpLearnset,
        .teachableLearnset = sQwilfishHisuianTeachableLearnset,
        .formSpeciesIdTable = sQwilfishFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_BARB_BARRAGE, SPECIES_OVERQWIL}),
    },

    [SPECIES_OVERQWIL] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_DARK, TYPE_POISON),
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SWIFT_SWIM, ABILITY_POISON_POINT },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Overqwil"),
        .cryId = CRY_OVERQWIL,
        .natDexNum = NATIONAL_DEX_OVERQWIL,
        .categoryName = _("Pin Cluster"),
        .height = 25,
        .weight = 605,
        .description = COMPOUND_STRING(
            "Its lancelike spikes and savage\n"
            "temperament have earned it the\n"
            "nickname “Sea Fiend”.\n"
            "It slurps up poison to nourish itself."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Overqwil,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Overqwil,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Overqwil,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 11,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Overqwil,
        .shinyPalette = gMonShinyPalette_Overqwil,
        .iconSprite = gMonIcon_Overqwil,
        .iconPalIndex = 2,
        FOOTPRINT(Overqwil)
        OVERWORLD(
            sPicTable_Overqwil,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Overqwil,
            gShinyOverworldPalette_Overqwil
        )
        .levelUpLearnset = sOverqwilLevelUpLearnset,
        .teachableLearnset = sOverqwilTeachableLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH

#if P_FAMILY_SHUCKLE
    [SPECIES_SHUCKLE] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 230,
        .baseSpeed     = 5,
        .baseSpAttack  = 10,
        .baseSpDefense = 230,
        .types = MON_TYPES(TYPE_BUG, TYPE_ROCK),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 177 : 80,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_BERRY_JUICE,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_STURDY, ABILITY_GLUTTONY, ABILITY_CONTRARY },
    #else
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_CONTRARY },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Shuckle"),
        .cryId = CRY_SHUCKLE,
        .natDexNum = NATIONAL_DEX_SHUCKLE,
        .categoryName = _("Mold"),
        .height = 6,
        .weight = 205,
        .description = COMPOUND_STRING(
            "A Shuckle hides under rocks, keeping its\n"
            "body concealed inside its shell while\n"
            "eating stored berries. The berries mix with\n"
            "its body fluids to become a juice."),
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Shuckle,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Shuckle,
        .frontAnimId = ANIM_SWING_CONCAVE,
        .backPic = gMonBackPic_Shuckle,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Shuckle,
        .shinyPalette = gMonShinyPalette_Shuckle,
        .iconSprite = gMonIcon_Shuckle,
        .iconPalIndex = 1,
        FOOTPRINT(Shuckle)
        OVERWORLD(
            sPicTable_Shuckle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Shuckle,
            gShinyOverworldPalette_Shuckle
        )
        .levelUpLearnset = sShuckleLevelUpLearnset,
        .teachableLearnset = sShuckleTeachableLearnset,
        .eggMoveLearnset = sShuckleEggMoveLearnset,
    },
#endif //P_FAMILY_SHUCKLE

#if P_FAMILY_HERACROSS
    [SPECIES_HERACROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 200,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_GUTS, ABILITY_MOXIE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Heracross"),
        .cryId = CRY_HERACROSS,
        .natDexNum = NATIONAL_DEX_HERACROSS,
        .categoryName = _("Single Horn"),
        .height = 15,
        .weight = 540,
        .description = COMPOUND_STRING(
            "They gather in forests seeking the sweet\n"
            "sap of trees. It is completely clad in a\n"
            "steel-hard shell. It is proud of its horn,\n"
            "which it uses to fling foes."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Heracross,
        .frontPicFemale = gMonFrontPic_HeracrossF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Heracross,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Heracross,
        .backPicFemale = gMonBackPic_HeracrossF,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Heracross,
        .shinyPalette = gMonShinyPalette_Heracross,
        .iconSprite = gMonIcon_Heracross,
        .iconPalIndex = 0,
        FOOTPRINT(Heracross)
        OVERWORLD(
            sPicTable_Heracross,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Heracross,
            gShinyOverworldPalette_Heracross
        )
        .levelUpLearnset = sHeracrossLevelUpLearnset,
        .teachableLearnset = sHeracrossTeachableLearnset,
        .eggMoveLearnset = sHeracrossEggMoveLearnset,
        .formSpeciesIdTable = sHeracrossFormSpeciesIdTable,
        .formChangeTable = sHeracrossFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HERACROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 185,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 105,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG),
        .abilities = { ABILITY_SKILL_LINK, ABILITY_SKILL_LINK, ABILITY_SKILL_LINK },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Heracross"),
        .cryId = CRY_HERACROSS_MEGA,
        .natDexNum = NATIONAL_DEX_HERACROSS,
        .categoryName = _("Single Horn"),
        .height = 17,
        .weight = 625,
        .description = COMPOUND_STRING(
            "A tremendous influx of energy builds it up,\n"
            "but when Mega Evolution ends, Heracross\n"
            "is bothered by terrible soreness in its\n"
            "muscles."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HeracrossMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HeracrossMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HeracrossMega,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_HeracrossMega,
        .shinyPalette = gMonShinyPalette_HeracrossMega,
        .iconSprite = gMonIcon_HeracrossMega,
        .iconPalIndex = 0,
        FOOTPRINT(Heracross)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sHeracrossLevelUpLearnset,
        .teachableLearnset = sHeracrossTeachableLearnset,
        .eggMoveLearnset = sHeracrossEggMoveLearnset,
        .formSpeciesIdTable = sHeracrossFormSpeciesIdTable,
        .formChangeTable = sHeracrossFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HERACROSS

#if P_FAMILY_SNEASEL
    [SPECIES_SNEASEL] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 35,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_DARK, TYPE_ICE),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 86 : 132,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .speciesName = _("Sneasel"),
        .cryId = CRY_SNEASEL,
        .natDexNum = NATIONAL_DEX_SNEASEL,
        .categoryName = _("Sharp Claw"),
        .height = 9,
        .weight = 280,
        .description = COMPOUND_STRING(
            "A Sneasel scales trees by punching its\n"
            "hooked claws into the bark. It seeks out\n"
            "unguarded nests and steals eggs for food\n"
            "while the parents are away."),
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sneasel,
        .frontPicFemale = gMonFrontPic_SneaselF,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Sneasel,
        .frontAnimId = ANIM_H_JUMPS,
        .backPic = gMonBackPic_Sneasel,
        .backPicFemale = gMonBackPic_SneaselF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Sneasel,
        .shinyPalette = gMonShinyPalette_Sneasel,
        .iconSprite = gMonIcon_Sneasel,
        .iconPalIndex = 0,
        FOOTPRINT(Sneasel)
        OVERWORLD(
            sPicTable_Sneasel,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sneasel,
            gShinyOverworldPalette_Sneasel
        )
        .levelUpLearnset = sSneaselLevelUpLearnset,
        .teachableLearnset = sSneaselTeachableLearnset,
        .eggMoveLearnset = sSneaselEggMoveLearnset,
        .formSpeciesIdTable = sSneaselFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_WEAVILE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_WEAVILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 125,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_DARK, TYPE_ICE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 179 : 199,
        .evYield_Attack = 1,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_PICKPOCKET },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Weavile"),
        .cryId = CRY_WEAVILE,
        .natDexNum = NATIONAL_DEX_WEAVILE,
        .categoryName = _("Sharp Claw"),
        .height = 11,
        .weight = 340,
        .description = COMPOUND_STRING(
            "They travel in groups of four or five,\n"
            "leaving signs for one another on trees\n"
            "and rocks. They bring down their prey\n"
            "with coordinated attacks."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Weavile,
        .frontPicFemale = gMonFrontPic_WeavileF,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Weavile,
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Weavile,
        .backPicFemale = gMonBackPic_WeavileF,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Weavile,
        .shinyPalette = gMonShinyPalette_Weavile,
        .iconSprite = gMonIcon_Weavile,
        .iconPalIndex = 0,
        FOOTPRINT(Weavile)
        OVERWORLD(
            sPicTable_Weavile,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Weavile,
            gShinyOverworldPalette_Weavile
        )
        .levelUpLearnset = sWeavileLevelUpLearnset,
        .teachableLearnset = sWeavileTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS

#if P_HISUIAN_FORMS
    [SPECIES_SNEASEL_HISUIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 35,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_POISON),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 86 : 132,
        .evYield_Speed = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE },
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .speciesName = _("Sneasel"),
        .cryId = CRY_SNEASEL,
        .natDexNum = NATIONAL_DEX_SNEASEL,
        .categoryName = _("Sharp Claw"),
        .height = 9,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Its sturdy, curved claws are ideal for\n"
            "traversing precipitous cliffs. From the\n"
            "tips of these claws drips a venom that\n"
            "infiltrates the nerves of any prey caught."),
        .pokemonScale = 413,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_SneaselHisuian,
        .frontPicFemale = gMonFrontPic_SneaselHisuianF,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SneaselHisuian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_SneaselHisuian,
        .backPicFemale = gMonBackPic_SneaselHisuianF,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 3,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_SneaselHisuian,
        .shinyPalette = gMonShinyPalette_SneaselHisuian,
        .iconSprite = gMonIcon_SneaselHisuian,
        .iconPalIndex = 0,
        FOOTPRINT(Sneasel)
        OVERWORLD(
            sPicTable_SneaselHisuian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_SneaselHisuian,
            gShinyOverworldPalette_SneaselHisuian
        )
        .isHisuianForm = TRUE,
        .levelUpLearnset = sSneaselHisuianLevelUpLearnset,
        .teachableLearnset = sSneaselHisuianTeachableLearnset,
        .formSpeciesIdTable = sSneaselFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 42, SPECIES_SNEASLER}),
    },

    [SPECIES_SNEASLER] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_POISON),
        .catchRate = 20,
        .expYield = 102,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_POISON_TOUCH, ABILITY_UNBURDEN, ABILITY_POISON_TOUCH },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sneasler"),
        .cryId = CRY_SNEASLER,
        .natDexNum = NATIONAL_DEX_SNEASLER,
        .categoryName = _("Free Climb"),
        .height = 13,
        .weight = 430,
        .description = COMPOUND_STRING(
            "Because of its wicked poison and daunting\n"
            "physical prowess, no other species could\n"
            "hope to best it on frozen highlands. It\n"
            "prefers solitude and doesn't form packs."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Sneasler,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Sneasler,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Sneasler,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 6,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Sneasler,
        .shinyPalette = gMonShinyPalette_Sneasler,
        .iconSprite = gMonIcon_Sneasler,
        .iconPalIndex = 2,
        FOOTPRINT(Sneasler)
        OVERWORLD(
            sPicTable_Sneasler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Sneasler,
            gShinyOverworldPalette_Sneasler
        )
        .levelUpLearnset = sSneaslerLevelUpLearnset,
        .teachableLearnset = sSneaslerTeachableLearnset,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_SNEASEL

#if P_FAMILY_TEDDIURSA
    [SPECIES_TEDDIURSA] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 124,
        .evYield_Attack = 1,
        .itemCommon = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_QUICK_FEET, ABILITY_QUICK_FEET, ABILITY_HONEY_GATHER },
    #else
        .abilities = { ABILITY_PICKUP, ABILITY_NONE, ABILITY_HONEY_GATHER },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .speciesName = _("Teddiursa"),
        .cryId = CRY_TEDDIURSA,
        .natDexNum = NATIONAL_DEX_TEDDIURSA,
        .categoryName = _("Little Bear"),
        .height = 6,
        .weight = 88,
        .description = COMPOUND_STRING(
            "It licks its palms that are sweetened by\n"
            "being soaked in honey. A Teddiursa makes\n"
            "its own honey by blending fruits and pollen\n"
            "collected by Beedrill."),
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Teddiursa,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Teddiursa,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Teddiursa,
        .backPicSize = MON_COORDS_SIZE(48, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Teddiursa,
        .shinyPalette = gMonShinyPalette_Teddiursa,
        .iconSprite = gMonIcon_Teddiursa,
        .iconPalIndex = 0,
        FOOTPRINT(Teddiursa)
        OVERWORLD(
            sPicTable_Teddiursa,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Teddiursa,
            gShinyOverworldPalette_Teddiursa
        )
        .levelUpLearnset = sTeddiursaLevelUpLearnset,
        .teachableLearnset = sTeddiursaTeachableLearnset,
        .eggMoveLearnset = sTeddiursaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_URSARING}),
    },

    [SPECIES_URSARING] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 189,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_GUTS, ABILITY_QUICK_FEET, ABILITY_UNNERVE },
    #else
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_UNNERVE },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ursaring"),
        .cryId = CRY_URSARING,
        .natDexNum = NATIONAL_DEX_URSARING,
        .categoryName = _("Hibernator"),
        .height = 18,
        .weight = 1258,
        .description = COMPOUND_STRING(
            "In forests, it is said that there are many\n"
            "streams and towering trees where an\n"
            "Ursaring gathers food. It walks through\n"
            "its forest collecting food every day."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ursaring,
        .frontPicFemale = gMonFrontPic_UrsaringF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Ursaring,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Ursaring,
        .backPicFemale = gMonBackPic_UrsaringF,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicSizeFemale = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Ursaring,
        .shinyPalette = gMonShinyPalette_Ursaring,
        .iconSprite = gMonIcon_Ursaring,
        .iconPalIndex = 2,
        FOOTPRINT(Ursaring)
        OVERWORLD(
            sPicTable_Ursaring,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ursaring,
            gShinyOverworldPalette_Ursaring
        )
        .levelUpLearnset = sUrsaringLevelUpLearnset,
        .teachableLearnset = sUrsaringTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 50, SPECIES_URSALUNA}),
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_URSALUNA] =
    {
        .baseHP        = 130,
        .baseAttack    = 140,
        .baseDefense   = 105,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_GROUND, TYPE_NORMAL),
        .catchRate = 20,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_GUTS, ABILITY_UNNERVE, ABILITY_BULLETPROOF },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ursaluna"),
        .cryId = CRY_URSALUNA,
        .natDexNum = NATIONAL_DEX_URSALUNA,
        .categoryName = _("Peat"),
        .height = 24,
        .weight = 2900,
        .description = COMPOUND_STRING(
            "Swampy terrain gives Ursaluna its burly\n"
            "physique and newfound capacity to\n"
            "manipulate peat at will."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Ursaluna,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Ursaluna,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Ursaluna,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Ursaluna,
        .shinyPalette = gMonShinyPalette_Ursaluna,
        .iconSprite = gMonIcon_Ursaluna,
        .iconPalIndex = 2,
        FOOTPRINT(Ursaluna)
        OVERWORLD(
            sPicTable_Ursaluna,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Ursaluna,
            gShinyOverworldPalette_Ursaluna
        )
        .levelUpLearnset = sUrsalunaLevelUpLearnset,
        .teachableLearnset = sUrsalunaTeachableLearnset,
        .formSpeciesIdTable = sUrsalunaFormSpeciesIdTable,
    },

    [SPECIES_URSALUNA_BLOODMOON] =
    {
        .baseHP        = 113,
        .baseAttack    = 70,
        .baseDefense   = 120,
        .baseSpeed     = 52,
        .baseSpAttack  = 135,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_GROUND, TYPE_NORMAL),
        .catchRate = 5,
        .expYield = 275,
        .evYield_SpAttack = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_MINDS_EYE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Ursaluna"),
        .cryId = CRY_URSALUNA,
        .natDexNum = NATIONAL_DEX_URSALUNA,
        .categoryName = _("Peat"),
        .height = 27,
        .weight = 3330,
        .description = COMPOUND_STRING(
            "It crossed the sea and drifted\n"
            "ashore in a new land. Surviving in this\n"
            "place led it to take on a unique\n"
            "appearance and gain special powers."),
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 369,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_UrsalunaBloodmoon,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_UrsalunaBloodmoon,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_UrsalunaBloodmoon,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 9,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_UrsalunaBloodmoon,
        .shinyPalette = gMonShinyPalette_UrsalunaBloodmoon,
        .iconSprite = gMonIcon_UrsalunaBloodmoon,
        .iconPalIndex = 2,
        FOOTPRINT(Ursaluna)
        .levelUpLearnset = sUrsalunaBloodmoonLevelUpLearnset,
        .teachableLearnset = sUrsalunaBloodmoonTeachableLearnset,
        .formSpeciesIdTable = sUrsalunaFormSpeciesIdTable,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_TEDDIURSA

#if P_FAMILY_SLUGMA
    [SPECIES_SLUGMA] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 78,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Slugma"),
        .cryId = CRY_SLUGMA,
        .natDexNum = NATIONAL_DEX_SLUGMA,
        .categoryName = _("Lava"),
        .height = 7,
        .weight = 350,
        .description = COMPOUND_STRING(
            "It is a species of Pokémon that lives in\n"
            "volcanic areas. If its body cools, its skin\n"
            "hardens and immobilizes it. To avoid that,\n"
            "it sleeps near magma."),
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Slugma,
        .frontPicSize = MON_COORDS_SIZE(32, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Slugma,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Slugma,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Slugma,
        .shinyPalette = gMonShinyPalette_Slugma,
        .iconSprite = gMonIcon_Slugma,
        .iconPalIndex = 0,
        FOOTPRINT(Slugma)
        OVERWORLD(
            sPicTable_Slugma,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Slugma,
            gShinyOverworldPalette_Slugma
        )
        .levelUpLearnset = sSlugmaLevelUpLearnset,
        .teachableLearnset = sSlugmaTeachableLearnset,
        .eggMoveLearnset = sSlugmaEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 18, SPECIES_MAGCARGO}),
    },

    [SPECIES_MAGCARGO] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 60 : 50,
        .baseAttack    = 50,
        .baseDefense   = 120,
        .baseSpeed     = 30,
        .baseSpAttack  = P_UPDATED_STATS >= GEN_7 ? 90 : 80,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 75,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 151,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 144,
    #else
        .expYield = 154,
    #endif
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .speciesName = _("Magcargo"),
        .cryId = CRY_MAGCARGO,
        .natDexNum = NATIONAL_DEX_MAGCARGO,
        .categoryName = _("Lava"),
        .height = 8,
        .weight = 550,
        .description = COMPOUND_STRING(
            "The shell on its back is made of hardened\n"
            "magma. Tens of thousands of years spent\n"
            "living in volcanic craters have turned\n"
            "Magcargo's bodies into magma."),
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Magcargo,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Magcargo,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Magcargo,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Magcargo,
        .shinyPalette = gMonShinyPalette_Magcargo,
        .iconSprite = gMonIcon_Magcargo,
        .iconPalIndex = 0,
        FOOTPRINT(Magcargo)
        OVERWORLD(
            sPicTable_Magcargo,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Magcargo,
            gShinyOverworldPalette_Magcargo
        )
        .levelUpLearnset = sMagcargoLevelUpLearnset,
        .teachableLearnset = sMagcargoTeachableLearnset,
    },
#endif //P_FAMILY_SLUGMA

#if P_FAMILY_SWINUB
    [SPECIES_SWINUB] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = MON_TYPES(TYPE_ICE, TYPE_GROUND),
        .catchRate = 225,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 50 : 78,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_THICK_FAT, ABILITY_SNOW_CLOAK },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_THICK_FAT },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Swinub"),
        .cryId = CRY_SWINUB,
        .natDexNum = NATIONAL_DEX_SWINUB,
        .categoryName = _("Pig"),
        .height = 4,
        .weight = 65,
        .description = COMPOUND_STRING(
            "It roots for food by rubbing its snout\n"
            "against the ground. Its favorite food is a\n"
            "mushroom that grows under dried grass.\n"
            "It occasionally roots out hot springs."),
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Swinub,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 18,
        .frontAnimFrames = sAnims_Swinub,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Swinub,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 15,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Swinub,
        .shinyPalette = gMonShinyPalette_Swinub,
        .iconSprite = gMonIcon_Swinub,
        .iconPalIndex = 2,
        FOOTPRINT(Swinub)
        OVERWORLD(
            sPicTable_Swinub,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Swinub,
            gShinyOverworldPalette_Swinub
        )
        .levelUpLearnset = sSwinubLevelUpLearnset,
        .teachableLearnset = sSwinubTeachableLearnset,
        .eggMoveLearnset = sSwinubEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_PILOSWINE}),
    },

    [SPECIES_PILOSWINE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_GROUND),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 158 : 160,
        .evYield_HP = 1,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_THICK_FAT, ABILITY_SNOW_CLOAK },
    #else
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_NONE, ABILITY_THICK_FAT },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Piloswine"),
        .cryId = CRY_PILOSWINE,
        .natDexNum = NATIONAL_DEX_PILOSWINE,
        .categoryName = _("Swine"),
        .height = 11,
        .weight = 558,
        .description = COMPOUND_STRING(
            "A Piloswine is covered by a thick coat\n"
            "of long hair for enduring freezing cold.\n"
            "It uses its tusks to dig up food that has\n"
            "been buried under ice."),
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Piloswine,
        .frontPicFemale = gMonFrontPic_PiloswineF,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Piloswine,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Piloswine,
        .backPicFemale = gMonBackPic_PiloswineF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SHAKE,
        .palette = gMonPalette_Piloswine,
        .shinyPalette = gMonShinyPalette_Piloswine,
        .iconSprite = gMonIcon_Piloswine,
        .iconPalIndex = 2,
        FOOTPRINT(Piloswine)
        OVERWORLD(
            sPicTable_Piloswine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Piloswine,
            gShinyOverworldPalette_Piloswine
        )
        .levelUpLearnset = sPiloswineLevelUpLearnset,
        .teachableLearnset = sPiloswineTeachableLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_MAMOSWINE}),
    },

#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAMOSWINE] =
    {
        .baseHP        = 110,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_ICE, TYPE_GROUND),
        .catchRate = 50,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 265,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 239,
    #else
        .expYield = 207,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_OBLIVIOUS, ABILITY_THICK_FAT, ABILITY_SNOW_CLOAK },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mamoswine"),
        .cryId = CRY_MAMOSWINE,
        .natDexNum = NATIONAL_DEX_MAMOSWINE,
        .categoryName = _("Twin Tusk"),
        .height = 25,
        .weight = 2910,
        .description = COMPOUND_STRING(
            "A frozen Mamoswine was dug from ice\n"
            "dating back 10,000 years. It woke up to\n"
            "much amazement. This Pokémon has been\n"
            "around for a long, long, long time."),
        .pokemonScale = 257,
        .pokemonOffset = 6,
        .trainerScale = 423,
        .trainerOffset = 8,
        .frontPic = gMonFrontPic_Mamoswine,
        .frontPicFemale = gMonFrontPic_MamoswineF,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = sAnims_Mamoswine,
        .frontAnimId = ANIM_BACK_AND_LUNGE,
        .backPic = gMonBackPic_Mamoswine,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Mamoswine,
        .shinyPalette = gMonShinyPalette_Mamoswine,
        .iconSprite = gMonIcon_Mamoswine,
        .iconPalIndex = 2,
        FOOTPRINT(Mamoswine)
        OVERWORLD(
            sPicTable_Mamoswine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mamoswine,
            gShinyOverworldPalette_Mamoswine
        )
        .levelUpLearnset = sMamoswineLevelUpLearnset,
        .teachableLearnset = sMamoswineTeachableLearnset,
    },
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB

#if P_FAMILY_CORSOLA
#if P_UPDATED_EXP_YIELDS >= GEN_7
    #define CORSOLA_EXP_YIELD 144
#elif P_UPDATED_EXP_YIELDS >= GEN_5
    #define CORSOLA_EXP_YIELD 133
#else
    #define CORSOLA_EXP_YIELD 113
#endif
#define CORSOLA_HP       (P_UPDATED_STATS >= GEN_7 ? 65 : 55)
#define CORSOLA_DEFENSES (P_UPDATED_STATS >= GEN_7 ? 95 : 85)

    [SPECIES_CORSOLA] =
    {
        .baseHP        = CORSOLA_HP,
        .baseAttack    = 55,
        .baseDefense   = CORSOLA_DEFENSES,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = CORSOLA_DEFENSES,
        .types = MON_TYPES(TYPE_WATER, TYPE_ROCK),
        .catchRate = 60,
        .expYield = CORSOLA_EXP_YIELD,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_REGENERATOR, ABILITY_NONE, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Corsola"),
        .cryId = CRY_CORSOLA,
        .natDexNum = NATIONAL_DEX_CORSOLA,
        .categoryName = _("Coral"),
        .height = 6,
        .weight = 50,
        .description = COMPOUND_STRING(
            "Corsola live in warm southern seas.\n"
            "If the sea becomes polluted, the beautiful\n"
            "coral stalks become discolored and crumble\n"
            "away in tatters."),
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Corsola,
        .frontPicSize = MON_COORDS_SIZE(48, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Corsola,
        .frontAnimId = ANIM_H_SLIDE,
        .backPic = gMonBackPic_Corsola,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Corsola,
        .shinyPalette = gMonShinyPalette_Corsola,
        .iconSprite = gMonIcon_Corsola,
        .iconPalIndex = 0,
        FOOTPRINT(Corsola)
        OVERWORLD(
            sPicTable_Corsola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Corsola,
            gShinyOverworldPalette_Corsola
        )
        .levelUpLearnset = sCorsolaLevelUpLearnset,
        .teachableLearnset = sCorsolaTeachableLearnset,
        .eggMoveLearnset = sCorsolaEggMoveLearnset,
        .formSpeciesIdTable = sCorsolaFormSpeciesIdTable,
    },

#if P_GALARIAN_FORMS
    [SPECIES_CORSOLA_GALARIAN] =
    {
        .baseHP        = CORSOLA_HP - 5,
        .baseAttack    = 55,
        .baseDefense   = CORSOLA_DEFENSES + 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = CORSOLA_DEFENSES + 5,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 60,
        .expYield = CORSOLA_EXP_YIELD,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_CURSED_BODY, ABILITY_NONE, ABILITY_WEAK_ARMOR },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Corsola"),
        .cryId = CRY_CORSOLA,
        .natDexNum = NATIONAL_DEX_CORSOLA,
        .categoryName = _("Coral"),
        .height = 6,
        .weight = 5,
        .description = COMPOUND_STRING(
            "Sudden climate change wiped out this\n"
            "ancient kind of Corsola. With its branches,\n"
            "it absorbs others' life-force. It curses\n"
            "those unaware that kick it by accident."),
        .pokemonScale = 410,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CorsolaGalarian,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_CorsolaGalarian,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CorsolaGalarian,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 8,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CorsolaGalarian,
        .shinyPalette = gMonShinyPalette_CorsolaGalarian,
        .iconSprite = gMonIcon_CorsolaGalarian,
        .iconPalIndex = 0,
        FOOTPRINT(Corsola)
        OVERWORLD(
            sPicTable_CorsolaGalarian,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_CorsolaGalarian,
            gShinyOverworldPalette_CorsolaGalarian
        )
        .isGalarianForm = TRUE,
        .levelUpLearnset = sCorsolaGalarianLevelUpLearnset,
        .teachableLearnset = sCorsolaGalarianTeachableLearnset,
        .eggMoveLearnset = sCorsolaGalarianEggMoveLearnset,
        .formSpeciesIdTable = sCorsolaFormSpeciesIdTable,
        .evolutions = EVOLUTION({EVO_LEVEL, 38, SPECIES_CURSOLA}),
    },

    [SPECIES_CURSOLA] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 145,
        .baseSpDefense = 130,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 30,
        .expYield = 179,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_3),
        .abilities = { ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_PERISH_BODY },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cursola"),
        .cryId = CRY_CURSOLA,
        .natDexNum = NATIONAL_DEX_CURSOLA,
        .categoryName = _("Coral"),
        .height = 10,
        .weight = 4,
        .description = COMPOUND_STRING(
            "Its shell is overflowing with its\n"
            "heightened otherworldly energy. The\n"
            "ectoplasm serves as protection for this\n"
            "Pokémon's core spirit."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Cursola,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Cursola,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Cursola,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 5,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Cursola,
        .shinyPalette = gMonShinyPalette_Cursola,
        .iconSprite = gMonIcon_Cursola,
        .iconPalIndex = 0,
        FOOTPRINT(Cursola)
        OVERWORLD(
            sPicTable_Cursola,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Cursola,
            gShinyOverworldPalette_Cursola
        )
        .levelUpLearnset = sCursolaLevelUpLearnset,
        .teachableLearnset = sCursolaTeachableLearnset,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA

#if P_FAMILY_REMORAID
    [SPECIES_REMORAID] =
    {
        .baseHP        = 35,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 35,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 190,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 78,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_HUSTLE, ABILITY_SNIPER, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_HUSTLE, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Remoraid"),
        .cryId = CRY_REMORAID,
        .natDexNum = NATIONAL_DEX_REMORAID,
        .categoryName = _("Jet"),
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING(
            "A Remoraid uses its abdominal muscles\n"
            "to forcefully expel swallowed water, then\n"
            "shoot down flying prey. When evolution\n"
            "approaches, it travels down rivers."),
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Remoraid,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Remoraid,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Remoraid,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Remoraid,
        .shinyPalette = gMonShinyPalette_Remoraid,
        .iconSprite = gMonIcon_Remoraid,
        .iconPalIndex = 0,
        FOOTPRINT(Remoraid)
        OVERWORLD(
            sPicTable_Remoraid,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Remoraid,
            gShinyOverworldPalette_Remoraid
        )
        .levelUpLearnset = sRemoraidLevelUpLearnset,
        .teachableLearnset = sRemoraidTeachableLearnset,
        .eggMoveLearnset = sRemoraidEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_OCTILLERY}),
    },

    [SPECIES_OCTILLERY] =
    {
        .baseHP        = 75,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 75,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 168 : 164,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_WATER_2),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_SNIPER, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Octillery"),
        .cryId = CRY_OCTILLERY,
        .natDexNum = NATIONAL_DEX_OCTILLERY,
        .categoryName = _("Jet"),
        .height = 9,
        .weight = 285,
        .description = COMPOUND_STRING(
            "It ensnares its foe with its suction-\n"
            "cupped tentacles before delivering the\n"
            "finishing blow. If the foe turns out to be\n"
            "too strong, it spews ink to escape."),
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Octillery,
        .frontPicFemale = gMonFrontPic_OctilleryF,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Octillery,
        .frontAnimId = ANIM_V_STRETCH,
        .frontAnimDelay = 20,
        .backPic = gMonBackPic_Octillery,
        .backPicFemale = gMonBackPic_OctilleryF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_SHRINK_GROW,
        .palette = gMonPalette_Octillery,
        .shinyPalette = gMonShinyPalette_Octillery,
        .iconSprite = gMonIcon_Octillery,
        .iconPalIndex = 0,
        FOOTPRINT(Octillery)
        OVERWORLD(
            sPicTable_Octillery,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SLITHER,
            gOverworldPalette_Octillery,
            gShinyOverworldPalette_Octillery
        )
        .levelUpLearnset = sOctilleryLevelUpLearnset,
        .teachableLearnset = sOctilleryTeachableLearnset,
    },
#endif //P_FAMILY_REMORAID

#if P_FAMILY_DELIBIRD
    [SPECIES_DELIBIRD] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_ICE, TYPE_FLYING),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 116 : 183,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1, EGG_GROUP_FIELD),
        .abilities = { ABILITY_VITAL_SPIRIT, ABILITY_NONE, ABILITY_HUSTLE },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Delibird"),
        .cryId = CRY_DELIBIRD,
        .natDexNum = NATIONAL_DEX_DELIBIRD,
        .categoryName = _("Delivery"),
        .height = 9,
        .weight = 160,
        .description = COMPOUND_STRING(
            "It carries food bundled up in its tail.\n"
            "There was a famous explorer who\n"
            "managed to scale Mt. Everest thanks\n"
            "to a Delibird sharing its food."),
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Delibird,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = sAnims_Delibird,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Delibird,
        .backPicSize = MON_COORDS_SIZE(56, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_TRIANGLE_DOWN,
        .palette = gMonPalette_Delibird,
        .shinyPalette = gMonShinyPalette_Delibird,
        .iconSprite = gMonIcon_Delibird,
        .iconPalIndex = 1,
        FOOTPRINT(Delibird)
        OVERWORLD(
            sPicTable_Delibird,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Delibird,
            gShinyOverworldPalette_Delibird
        )
        .levelUpLearnset = sDelibirdLevelUpLearnset,
        .teachableLearnset = sDelibirdTeachableLearnset,
        .eggMoveLearnset = sDelibirdEggMoveLearnset,
    },
#endif //P_FAMILY_DELIBIRD

#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MANTYKE] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 69 : 108,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Mantyke"),
        .cryId = CRY_MANTYKE,
        .natDexNum = NATIONAL_DEX_MANTYKE,
        .categoryName = _("Kite"),
        .height = 10,
        .weight = 650,
        .description = COMPOUND_STRING(
            "When it swims close to the surface\n"
            "of the ocean, people aboard ships are\n"
            "able to observe the pattern on its back.\n"
            "It often swims in a school of Remoraid."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Mantyke,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Mantyke,
        .frontAnimId = ANIM_TWIST_TWICE,
        .backPic = gMonBackPic_Mantyke,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_Mantyke,
        .shinyPalette = gMonShinyPalette_Mantyke,
        .iconSprite = gMonIcon_Mantyke,
        .iconPalIndex = 0,
        FOOTPRINT(Mantyke)
        OVERWORLD(
            sPicTable_Mantyke,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Mantyke,
            gShinyOverworldPalette_Mantyke
        )
        .levelUpLearnset = sMantykeLevelUpLearnset,
        .teachableLearnset = sMantykeTeachableLearnset,
        .eggMoveLearnset = sMantykeEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_MANTINE}),
    },
#endif //P_GEN_4_CROSS_EVOS

    [SPECIES_MANTINE] =
    {
        .baseHP        = P_UPDATED_STATS >= GEN_7 ? 85 : 65,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 140,
        .types = MON_TYPES(TYPE_WATER, TYPE_FLYING),
        .catchRate = 25,
    #if P_UPDATED_EXP_YIELDS >= GEN_7
        .expYield = 170,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 163,
    #else
        .expYield = 168,
    #endif
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_1),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_WATER_ABSORB },
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mantine"),
        .cryId = CRY_MANTINE,
        .natDexNum = NATIONAL_DEX_MANTINE,
        .categoryName = _("Kite"),
        .height = 21,
        .weight = 2200,
        .description = COMPOUND_STRING(
            "On sunny days, schools of Mantine can be\n"
            "seen elegantly leaping over the waves.\n"
            "It is not bothered by the Remoraid that\n"
            "hitches rides."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Mantine,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Mantine,
        .frontAnimId = ANIM_SWING_CONVEX,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Mantine,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Mantine,
        .shinyPalette = gMonShinyPalette_Mantine,
        .iconSprite = gMonIcon_Mantine,
        .iconPalIndex = 2,
        FOOTPRINT(Mantine)
        OVERWORLD(
            sPicTable_Mantine,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Mantine,
            gShinyOverworldPalette_Mantine
        )
        .levelUpLearnset = sMantineLevelUpLearnset,
        .teachableLearnset = sMantineTeachableLearnset,
        .eggMoveLearnset = sMantineEggMoveLearnset,
    },
#endif //P_FAMILY_MANTINE

#if P_FAMILY_SKARMORY
    [SPECIES_SKARMORY] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 140,
        .baseSpeed     = 70,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_STEEL, TYPE_FLYING),
        .catchRate = 25,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 168,
        .evYield_Defense = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING),
        .abilities = { ABILITY_KEEN_EYE, ABILITY_STURDY, ABILITY_STURDY },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Skarmory"),
        .cryId = CRY_SKARMORY,
        .natDexNum = NATIONAL_DEX_SKARMORY,
        .categoryName = _("Armor Bird"),
        .height = 17,
        .weight = 505,
        .description = COMPOUND_STRING(
            "A Pokémon that has a body and wings of\n"
            "steel. People in the past used feathers\n"
            "fallen from Skarmory to make swords and\n"
            "knives."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Skarmory,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_Skarmory,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Skarmory,
        .backPicSize = MON_COORDS_SIZE(48, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Skarmory,
        .shinyPalette = gMonShinyPalette_Skarmory,
        .iconSprite = gMonIcon_Skarmory,
        .iconPalIndex = 0,
        FOOTPRINT(Skarmory)
        OVERWORLD(
            sPicTable_Skarmory,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Skarmory,
            gShinyOverworldPalette_Skarmory
        )
        .levelUpLearnset = sSkarmoryLevelUpLearnset,
        .teachableLearnset = sSkarmoryTeachableLearnset,
        .eggMoveLearnset = sSkarmoryEggMoveLearnset,
    },
#endif //P_FAMILY_SKARMORY

#if P_FAMILY_HOUNDOUR
    [SPECIES_HOUNDOUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 114,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_UNNERVE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Houndour"),
        .cryId = CRY_HOUNDOUR,
        .natDexNum = NATIONAL_DEX_HOUNDOUR,
        .categoryName = _("Dark"),
        .height = 6,
        .weight = 108,
        .description = COMPOUND_STRING(
            "Houndour communicate with each other\n"
            "using a variety of cries to corner their\n"
            "prey. This Pokémon's remarkable teamwork\n"
            "is simply unparalleled."),
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Houndour,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Houndour,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Houndour,
        .backPicSize = MON_COORDS_SIZE(40, 48),
        .backPicYOffset = 10,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Houndour,
        .shinyPalette = gMonShinyPalette_Houndour,
        .iconSprite = gMonIcon_Houndour,
        .iconPalIndex = 0,
        FOOTPRINT(Houndour)
        OVERWORLD(
            sPicTable_Houndour,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Houndour,
            gShinyOverworldPalette_Houndour
        )
        .levelUpLearnset = sHoundourLevelUpLearnset,
        .teachableLearnset = sHoundourTeachableLearnset,
        .eggMoveLearnset = sHoundourEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 24, SPECIES_HOUNDOOM}),
    },

    [SPECIES_HOUNDOOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 204,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_UNNERVE, ABILITY_NONE, ABILITY_FLASH_FIRE },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Houndoom"),
        .cryId = CRY_HOUNDOOM,
        .natDexNum = NATIONAL_DEX_HOUNDOOM,
        .categoryName = _("Dark"),
        .height = 14,
        .weight = 350,
        .description = COMPOUND_STRING(
            "In a Houndoom pack, the one with its horns\n"
            "raked sharply back serves a leadership\n"
            "role. They choose their leader by fighting\n"
            "among themselves."),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Houndoom,
        .frontPicFemale = gMonFrontPic_HoundoomF,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Houndoom,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Houndoom,
        .backPicFemale = gMonBackPic_HoundoomF,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Houndoom,
        .shinyPalette = gMonShinyPalette_Houndoom,
        .iconSprite = gMonIcon_Houndoom,
        .iconPalIndex = 0,
        FOOTPRINT(Houndoom)
        OVERWORLD(
            sPicTable_Houndoom,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Houndoom,
            gShinyOverworldPalette_Houndoom
        )
        .levelUpLearnset = sHoundoomLevelUpLearnset,
        .teachableLearnset = sHoundoomTeachableLearnset,
        .formSpeciesIdTable = sHoundoomFormSpeciesIdTable,
        .formChangeTable = sHoundoomFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_HOUNDOOM_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 115,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_DARK, TYPE_FIRE),
        .catchRate = 45,
        .expYield = 210,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Houndoom"),
        .cryId = CRY_HOUNDOOM_MEGA,
        .natDexNum = NATIONAL_DEX_HOUNDOOM,
        .categoryName = _("Dark"),
        .height = 19,
        .weight = 495,
        .description = COMPOUND_STRING(
            "Its red claws and the tips of its tail are\n"
            "melting from high internal temperatures\n"
            "that are painful to Houndoom itself.\n"),
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_HoundoomMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HoundoomMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_HoundoomMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_HoundoomMega,
        .shinyPalette = gMonShinyPalette_HoundoomMega,
        .iconSprite = gMonIcon_HoundoomMega,
        .iconPalIndex = 0,
        FOOTPRINT(Houndoom)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sHoundoomLevelUpLearnset,
        .teachableLearnset = sHoundoomTeachableLearnset,
        .formSpeciesIdTable = sHoundoomFormSpeciesIdTable,
        .formChangeTable = sHoundoomFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_HOUNDOUR

#if P_FAMILY_PHANPY
    [SPECIES_PHANPY] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 120,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 66 : 124,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Phanpy"),
        .cryId = CRY_PHANPY,
        .natDexNum = NATIONAL_DEX_PHANPY,
        .categoryName = _("Long Nose"),
        .height = 5,
        .weight = 335,
        .description = COMPOUND_STRING(
            "Phanpy's big ears serve as broad fans.\n"
            "When it becomes hot, it flaps the ears\n"
            "busily to cool down. Even the young are\n"
            "very strong."),
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Phanpy,
        .frontPicSize = MON_COORDS_SIZE(40, 32),
        .frontPicYOffset = 16,
        .frontAnimFrames = sAnims_Phanpy,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Phanpy,
        .backPicSize = MON_COORDS_SIZE(56, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_JOLT_RIGHT,
        .palette = gMonPalette_Phanpy,
        .shinyPalette = gMonShinyPalette_Phanpy,
        .iconSprite = gMonIcon_Phanpy,
        .iconPalIndex = 0,
        FOOTPRINT(Phanpy)
        OVERWORLD(
            sPicTable_Phanpy,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Phanpy,
            gShinyOverworldPalette_Phanpy
        )
        .levelUpLearnset = sPhanpyLevelUpLearnset,
        .teachableLearnset = sPhanpyTeachableLearnset,
        .eggMoveLearnset = sPhanpyEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 25, SPECIES_DONPHAN}),
    },

    [SPECIES_DONPHAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 60,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 175 : 189,
        .evYield_Attack = 1,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Donphan"),
        .cryId = CRY_DONPHAN,
        .natDexNum = NATIONAL_DEX_DONPHAN,
        .categoryName = _("Armor"),
        .height = 11,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "A Donphan is so strong it can easily haul\n"
            "a dump truck. Its hide has toughened to a\n"
            "rock-hard state. An ordinary sort of\n"
            "attack won't even leave a scratch."),
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Donphan,
        .frontPicFemale = gMonFrontPic_DonphanF,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 9,
        .frontAnimFrames = sAnims_Donphan,
        .frontAnimId = ANIM_ROTATE_UP_SLAM_DOWN,
        .backPic = gMonBackPic_Donphan,
        .backPicFemale = gMonBackPic_DonphanF,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicSizeFemale = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Donphan,
        .shinyPalette = gMonShinyPalette_Donphan,
        .iconSprite = gMonIcon_Donphan,
        .iconPalIndex = 0,
        FOOTPRINT(Donphan)
        OVERWORLD(
            sPicTable_Donphan,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Donphan,
            gShinyOverworldPalette_Donphan
        )
        .levelUpLearnset = sDonphanLevelUpLearnset,
        .teachableLearnset = sDonphanTeachableLearnset,
    },
#endif //P_FAMILY_PHANPY

#if P_FAMILY_STANTLER
    [SPECIES_STANTLER] =
    {
        .baseHP        = 73,
        .baseAttack    = 95,
        .baseDefense   = 62,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 163 : 165,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_SAP_SIPPER },
    #else
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_SAP_SIPPER },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Stantler"),
        .cryId = CRY_STANTLER,
        .natDexNum = NATIONAL_DEX_STANTLER,
        .categoryName = _("Big Horn"),
        .height = 14,
        .weight = 712,
        .description = COMPOUND_STRING(
            "Stantler's magnificent antlers were\n"
            "once traded at high prices as works of art.\n"
            "As a result, this Pokémon was hunted\n"
            "close to extinction."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Stantler,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Stantler,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Stantler,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_DIP_RIGHT_SIDE,
        .palette = gMonPalette_Stantler,
        .shinyPalette = gMonShinyPalette_Stantler,
        .iconSprite = gMonIcon_Stantler,
        .iconPalIndex = 2,
        FOOTPRINT(Stantler)
        OVERWORLD(
            sPicTable_Stantler,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Stantler,
            gShinyOverworldPalette_Stantler
        )
        .levelUpLearnset = sStantlerLevelUpLearnset,
        .teachableLearnset = sStantlerTeachableLearnset,
        .eggMoveLearnset = sStantlerEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_MOVE, MOVE_PSYSHIELD_BASH, SPECIES_WYRDEER}),
    },

#if P_GEN_8_CROSS_EVOS
    [SPECIES_WYRDEER] =
    {
        .baseHP        = 103,
        .baseAttack    = 105,
        .baseDefense   = 72,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 263,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_SAP_SIPPER },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Wyrdeer"),
        .cryId = CRY_WYRDEER,
        .natDexNum = NATIONAL_DEX_WYRDEER,
        .categoryName = _("Big Horn"),
        .height = 18,
        .weight = 951,
        .description = COMPOUND_STRING(
            "The black orbs shine with an uncanny light\n"
            "when it is erecting invisible barriers.\n"
            "The fur shed from its beard retains heat\n"
            "and is useful for winter clothing."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Wyrdeer,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Wyrdeer,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Wyrdeer,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        //.backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_Wyrdeer,
        .shinyPalette = gMonShinyPalette_Wyrdeer,
        .iconSprite = gMonIcon_Wyrdeer,
        .iconPalIndex = 2,
        FOOTPRINT(Wyrdeer)
        OVERWORLD(
            sPicTable_Wyrdeer,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Wyrdeer,
            gShinyOverworldPalette_Wyrdeer
        )
        .levelUpLearnset = sWyrdeerLevelUpLearnset,
        .teachableLearnset = sWyrdeerTeachableLearnset,
    },
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER

#if P_FAMILY_SMEARGLE
    [SPECIES_SMEARGLE] =
    {
        .baseHP        = 55,
        .baseAttack    = 20,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 20,
        .baseSpDefense = 45,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 88 : 106,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_TECHNICIAN, ABILITY_MOODY },
    #else
        .abilities = { ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_MOODY },
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Smeargle"),
        .cryId = CRY_SMEARGLE,
        .natDexNum = NATIONAL_DEX_SMEARGLE,
        .categoryName = _("Painter"),
        .height = 12,
        .weight = 580,
        .description = COMPOUND_STRING(
            "A Smeargle marks its territory using a\n"
            "fluid that leaks out from the tip of its\n"
            "tail. About 5,000 different marks left by\n"
            "this Pokémon have been found."),
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Smeargle,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = sAnims_Smeargle,
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_Smeargle,
        .backPicSize = MON_COORDS_SIZE(56, 48),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Smeargle,
        .shinyPalette = gMonShinyPalette_Smeargle,
        .iconSprite = gMonIcon_Smeargle,
        .iconPalIndex = 1,
        FOOTPRINT(Smeargle)
        OVERWORLD(
            sPicTable_Smeargle,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Smeargle,
            gShinyOverworldPalette_Smeargle
        )
        .tmIlliterate = TRUE,
        .levelUpLearnset = sSmeargleLevelUpLearnset,
        .teachableLearnset = sSmeargleTeachableLearnset,
    },
#endif //P_FAMILY_SMEARGLE

#if P_FAMILY_MILTANK
    [SPECIES_MILTANK] =
    {
        .baseHP        = 95,
        .baseAttack    = 80,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 172 : 200,
        .evYield_Defense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
    #if P_UPDATED_ABILITIES >= GEN_4
        .abilities = { ABILITY_THICK_FAT, ABILITY_SCRAPPY, ABILITY_SAP_SIPPER },
    #else
        .abilities = { ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_SAP_SIPPER },
    #endif
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Miltank"),
        .cryId = CRY_MILTANK,
        .natDexNum = NATIONAL_DEX_MILTANK,
        .categoryName = _("Milk Cow"),
        .height = 12,
        .weight = 755,
        .description = COMPOUND_STRING(
            "It gives over five gallons of milk daily.\n"
            "Its sweet milk is enjoyed by children and\n"
            "grown-ups alike. People who can't drink\n"
            "milk turn it into yogurt and eat it instead."),
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Miltank,
        .frontPicSize = MON_COORDS_SIZE(64, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_Miltank,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Miltank,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_H_SLIDE,
        .palette = gMonPalette_Miltank,
        .shinyPalette = gMonShinyPalette_Miltank,
        .iconSprite = gMonIcon_Miltank,
        .iconPalIndex = 0,
        FOOTPRINT(Miltank)
        OVERWORLD(
            sPicTable_Miltank,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Miltank,
            gShinyOverworldPalette_Miltank
        )
        .levelUpLearnset = sMiltankLevelUpLearnset,
        .teachableLearnset = sMiltankTeachableLearnset,
        .eggMoveLearnset = sMiltankEggMoveLearnset,
    },
#endif //P_FAMILY_MILTANK

#if P_FAMILY_RAIKOU
    [SPECIES_RAIKOU] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 216,
    #endif
        .evYield_Speed = 2,
        .evYield_SpAttack = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_PRESSURE },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_VOLT_ABSORB },
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Raikou"),
        .cryId = CRY_RAIKOU,
        .natDexNum = NATIONAL_DEX_RAIKOU,
        .categoryName = _("Thunder"),
        .height = 19,
        .weight = 1780,
        .description = COMPOUND_STRING(
            "Raikou embodies the speed of lightning.\n"
            "Its roars send shock waves shuddering\n"
            "through the air and ground as if\n"
            "lightning bolts were crashing down."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Raikou,
        .frontPicSize = MON_COORDS_SIZE(64, 56),
        .frontPicYOffset = 5,
        .frontAnimFrames = sAnims_Raikou,
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Raikou,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .palette = gMonPalette_Raikou,
        .shinyPalette = gMonShinyPalette_Raikou,
        .iconSprite = gMonIcon_Raikou,
        .iconPalIndex = 2,
        FOOTPRINT(Raikou)
        OVERWORLD(
            sPicTable_Raikou,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Raikou,
            gShinyOverworldPalette_Raikou
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sRaikouLevelUpLearnset,
        .teachableLearnset = sRaikouTeachableLearnset,
    },
#endif //P_FAMILY_RAIKOU

#if P_FAMILY_ENTEI
    [SPECIES_ENTEI] =
    {
        .baseHP        = 115,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIRE),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 217,
    #endif
        .evYield_HP = 1,
        .evYield_Attack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_PRESSURE },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLASH_FIRE },
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Entei"),
        .cryId = CRY_ENTEI,
        .natDexNum = NATIONAL_DEX_ENTEI,
        .categoryName = _("Volcano"),
        .height = 21,
        .weight = 1980,
        .description = COMPOUND_STRING(
            "Entei embodies the passion of magma.\n"
            "It is thought to have been born in the\n"
            "eruption of a volcano. It blasts fire that\n"
            "consumes all that it touches."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Entei,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_Entei,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPic = gMonBackPic_Entei,
        .backPicSize = MON_COORDS_SIZE(64, 48),
        .backPicYOffset = 11,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_Entei,
        .shinyPalette = gMonShinyPalette_Entei,
        .iconSprite = gMonIcon_Entei,
        .iconPalIndex = 2,
        FOOTPRINT(Entei)
        OVERWORLD(
            sPicTable_Entei,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Entei,
            gShinyOverworldPalette_Entei
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sEnteiLevelUpLearnset,
        .teachableLearnset = sEnteiTeachableLearnset,
    },
#endif //P_FAMILY_ENTEI

#if P_FAMILY_SUICUNE
    [SPECIES_SUICUNE] =
    {
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 290,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 261,
    #else
        .expYield = 215,
    #endif
        .evYield_Defense = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = { ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_PRESSURE },
    #else
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_WATER_ABSORB },
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Suicune"),
        .cryId = CRY_SUICUNE,
        .natDexNum = NATIONAL_DEX_SUICUNE,
        .categoryName = _("Aurora"),
        .height = 20,
        .weight = 1870,
        .description = COMPOUND_STRING(
            "Suicune embodies the compassion of\n"
            "a pure spring of water. It runs across\n"
            "the land with gliding elegance. It has the\n"
            "power to purify dirty water."),
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Suicune,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimFrames = sAnims_Suicune,
        .frontAnimId = ANIM_V_SHAKE,
        .backPic = gMonBackPic_Suicune,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Suicune,
        .shinyPalette = gMonShinyPalette_Suicune,
        .iconSprite = gMonIcon_Suicune,
        .iconPalIndex = 2,
        FOOTPRINT(Suicune)
        OVERWORLD(
            sPicTable_Suicune,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Suicune,
            gShinyOverworldPalette_Suicune
        )
        .isLegendary = TRUE,
        .levelUpLearnset = sSuicuneLevelUpLearnset,
        .teachableLearnset = sSuicuneTeachableLearnset,
    },
#endif //P_FAMILY_SUICUNE

#if P_FAMILY_LARVITAR
    [SPECIES_LARVITAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 41,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_5) ? 60 : 67,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_GUTS, ABILITY_NONE, ABILITY_SAND_VEIL },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Larvitar"),
        .cryId = CRY_LARVITAR,
        .natDexNum = NATIONAL_DEX_LARVITAR,
        .categoryName = _("Rock Skin"),
        .height = 6,
        .weight = 720,
        .description = COMPOUND_STRING(
            "A Larvitar is born deep under the ground.\n"
            "It must eat its way through the soil above\n"
            "and reach the surface for it to see its\n"
            "parents' faces."),
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Larvitar,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = sAnims_Larvitar,
        .frontAnimId = ANIM_V_JUMPS_SMALL,
        .backPic = gMonBackPic_Larvitar,
        .backPicSize = MON_COORDS_SIZE(56, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Larvitar,
        .shinyPalette = gMonShinyPalette_Larvitar,
        .iconSprite = gMonIcon_Larvitar,
        .iconPalIndex = 1,
        FOOTPRINT(Larvitar)
        OVERWORLD(
            sPicTable_Larvitar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Larvitar,
            gShinyOverworldPalette_Larvitar
        )
        .levelUpLearnset = sLarvitarLevelUpLearnset,
        .teachableLearnset = sLarvitarTeachableLearnset,
        .eggMoveLearnset = sLarvitarEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_PUPITAR}),
    },

    [SPECIES_PUPITAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 84,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GROUND),
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pupitar"),
        .cryId = CRY_PUPITAR,
        .natDexNum = NATIONAL_DEX_PUPITAR,
        .categoryName = _("Hard Shell"),
        .height = 12,
        .weight = 1520,
        .description = COMPOUND_STRING(
            "A Pupitar creates a gas inside its body\n"
            "that it ejects under compression to propel\n"
            "itself like a jet. Its body can withstand\n"
            "a collision with solid steel."),
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Pupitar,
        .frontPicSize = MON_COORDS_SIZE(40, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = sAnims_Pupitar,
        .frontAnimId = ANIM_H_SHAKE,
        .backPic = gMonBackPic_Pupitar,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_V_SHAKE,
        .palette = gMonPalette_Pupitar,
        .shinyPalette = gMonShinyPalette_Pupitar,
        .iconSprite = gMonIcon_Pupitar,
        .iconPalIndex = 2,
        FOOTPRINT(Pupitar)
        OVERWORLD(
            sPicTable_Pupitar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_SPOT,
            gOverworldPalette_Pupitar,
            gShinyOverworldPalette_Pupitar
        )
        .levelUpLearnset = sPupitarLevelUpLearnset,
        .teachableLearnset = sPupitarTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 55, SPECIES_TYRANITAR}),
    },

    [SPECIES_TYRANITAR] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 61,
        .baseSpAttack  = 95,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DARK),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 218,
    #endif
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_UNNERVE, ABILITY_NONE, ABILITY_SAND_STREAM },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tyranitar"),
        .cryId = CRY_TYRANITAR,
        .natDexNum = NATIONAL_DEX_TYRANITAR,
        .categoryName = _("Armor"),
        .height = 20,
        .weight = 2020,
        .description = COMPOUND_STRING(
            "A Tyranitar is so overwhelmingly powerful,\n"
            "it can bring down a whole mountain to make\n"
            "its nest. It roams in mountains seeking\n"
            "new opponents to fight."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_Tyranitar,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Tyranitar,
        .frontAnimId = ANIM_V_SHAKE,
        .frontAnimDelay = 10,
        .backPic = gMonBackPic_Tyranitar,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 1,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Tyranitar,
        .shinyPalette = gMonShinyPalette_Tyranitar,
        .iconSprite = gMonIcon_Tyranitar,
        .iconPalIndex = 4,
        FOOTPRINT(Tyranitar)
        OVERWORLD(
            sPicTable_Tyranitar,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            gOverworldPalette_Tyranitar,
            gShinyOverworldPalette_Tyranitar
        )
        .levelUpLearnset = sTyranitarLevelUpLearnset,
        .teachableLearnset = sTyranitarTeachableLearnset,
        .formSpeciesIdTable = sTyranitarFormSpeciesIdTable,
        .formChangeTable = sTyranitarFormChangeTable,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_TYRANITAR_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 164,
        .baseDefense   = 150,
        .baseSpeed     = 71,
        .baseSpAttack  = 95,
        .baseSpDefense = 120,
        .types = MON_TYPES(TYPE_ROCK, TYPE_DARK),
        .catchRate = 45,
        .expYield = (P_UPDATED_EXP_YIELDS >= GEN_8) ? 350 : 315,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MONSTER),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tyranitar"),
        .cryId = CRY_TYRANITAR_MEGA,
        .natDexNum = NATIONAL_DEX_TYRANITAR,
        .categoryName = _("Armor"),
        .height = 25,
        .weight = 2550,
        .description = COMPOUND_STRING(
            "Due to the colossal power poured into it,\n"
            "this Pokémon's back split right open. Its\n"
            "destructive instincts are the only thing\n"
            "keeping it moving."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
        .frontPic = gMonFrontPic_TyranitarMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_TyranitarMega,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_TyranitarMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_TyranitarMega,
        .shinyPalette = gMonShinyPalette_TyranitarMega,
        .iconSprite = gMonIcon_TyranitarMega,
        .iconPalIndex = 1,
        FOOTPRINT(Tyranitar)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sTyranitarLevelUpLearnset,
        .teachableLearnset = sTyranitarTeachableLearnset,
        .formSpeciesIdTable = sTyranitarFormSpeciesIdTable,
        .formChangeTable = sTyranitarFormChangeTable,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_LARVITAR

#if P_FAMILY_LUGIA
    [SPECIES_LUGIA] =
    {
        .baseHP        = 106,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 110,
        .baseSpAttack  = 90,
        .baseSpDefense = 154,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FLYING),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_MULTISCALE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Lugia"),
        .cryId = CRY_LUGIA,
        .natDexNum = NATIONAL_DEX_LUGIA,
        .categoryName = _("Diving"),
        .height = 52,
        .weight = 2160,
        .description = COMPOUND_STRING(
            "Lugia is so powerful even a light\n"
            "fluttering of its wings can blow apart\n"
            "houses. As a result, it chooses to live out\n"
            "of sight deep under the sea."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
        .frontPic = gMonFrontPic_Lugia,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_Lugia,
        .frontAnimId = ANIM_GROW_IN_STAGES,
        .frontAnimDelay = 20,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_Lugia,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_BLUE,
        .palette = gMonPalette_Lugia,
        .shinyPalette = gMonShinyPalette_Lugia,
        .iconSprite = gMonIcon_Lugia,
        .iconPalIndex = 0,
        FOOTPRINT(Lugia)
        OVERWORLD(
            sPicTable_Lugia,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Lugia,
            gShinyOverworldPalette_Lugia
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sLugiaLevelUpLearnset,
        .teachableLearnset = sLugiaTeachableLearnset,
    },
#endif //P_FAMILY_LUGIA

#if P_FAMILY_HO_OH
    [SPECIES_HO_OH] =
    {
        .baseHP        = 106,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 154,
        .types = MON_TYPES(TYPE_FIRE, TYPE_FLYING),
        .catchRate = 3,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 340,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 306,
    #else
        .expYield = 220,
    #endif
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_SACRED_ASH,
        .itemRare   = ITEM_SACRED_ASH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRESSURE, ABILITY_NONE, ABILITY_REGENERATOR },
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Ho-Oh"),
        .cryId = CRY_HO_OH,
        .natDexNum = NATIONAL_DEX_HO_OH,
        .categoryName = _("Rainbow"),
        .height = 38,
        .weight = 1990,
        .description = COMPOUND_STRING(
            "Its feathers--which glow in seven colors\n"
            "depending on the angle at which they are\n"
            "struck by light--are thought to bring joy.\n"
            "It is said to live at the foot of a rainbow."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
        .frontPic = gMonFrontPic_HoOh,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_HoOh,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .enemyMonElevation = 6,
        .backPic = gMonBackPic_HoOh,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 2,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_RED,
        .palette = gMonPalette_HoOh,
        .shinyPalette = gMonShinyPalette_HoOh,
        .iconSprite = gMonIcon_HoOh,
        .iconPalIndex = 1,
        FOOTPRINT(HoOh)
        OVERWORLD(
            sPicTable_HoOh,
            SIZE_64x64,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_HoOh,
            gShinyOverworldPalette_HoOh
        )
        .isLegendary = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sHoOhLevelUpLearnset,
        .teachableLearnset = sHoOhTeachableLearnset,
    },
#endif //P_FAMILY_HO_OH

#if P_FAMILY_CELEBI
    [SPECIES_CELEBI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_GRASS),
        .catchRate = 45,
    #if P_UPDATED_EXP_YIELDS >= GEN_8
        .expYield = 300,
    #elif P_UPDATED_EXP_YIELDS >= GEN_5
        .expYield = 270,
    #else
        .expYield = 64,
    #endif
        .evYield_HP = 3,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Celebi"),
        .cryId = CRY_CELEBI,
        .natDexNum = NATIONAL_DEX_CELEBI,
        .categoryName = _("Time Travel"),
        .height = 6,
        .weight = 50,
        .description = COMPOUND_STRING(
            "This Pokémon came from the future by\n"
            "crossing over time. It is thought that so\n"
            "long as Celebi appears, a bright and\n"
            "shining future awaits us."),
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Celebi,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_Celebi,
        .frontAnimId = ANIM_H_SLIDE_WOBBLE,
        .enemyMonElevation = 15,
        .backPic = gMonBackPic_Celebi,
        .backPicSize = MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_SHAKE_GLOW_GREEN,
        .palette = gMonPalette_Celebi,
        .shinyPalette = gMonShinyPalette_Celebi,
        .iconSprite = gMonIcon_Celebi,
        .iconPalIndex = 1,
        FOOTPRINT(Celebi)
        OVERWORLD(
            sPicTable_Celebi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            gOverworldPalette_Celebi,
            gShinyOverworldPalette_Celebi
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sCelebiLevelUpLearnset,
        .teachableLearnset = sCelebiTeachableLearnset,
    },
#endif //P_FAMILY_CELEBI

#ifdef __INTELLISENSE__
};
#endif
