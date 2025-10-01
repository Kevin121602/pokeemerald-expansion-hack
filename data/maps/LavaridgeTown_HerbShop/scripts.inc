# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts::
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk::
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart:
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WATER_STONE
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MOON_STONE
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SUN_STONE
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ICE_STONE
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM::
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan::
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_FAIRY_FEATHER, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_FAIRY_FEATHER
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_FAIRY_FEATHER
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the Stone Emporium, home\n"
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "of glistening Evolution Stones!$"
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at stones\n"
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in Lavaridge?\p"
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal:
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That Fairy Feather I gave you, it's\n"
# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a prized possession.\p"
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a Pokémon.\p"
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of Fairy\n"
# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "type moves.$"
# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Stones evolve a variety of Pokemon.\n"
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But those Pokémon will learn fewer\l"
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves once they evolve!$"
