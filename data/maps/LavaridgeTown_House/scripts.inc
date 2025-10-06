LavaridgeTown_House_EventScript_GalaricaItems::
# 2 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 3 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 4 "data/maps/LavaridgeTown_House/scripts.pory"
	goto_if_set FLAG_RECIEVED_GALARICA_ITEM, LavaridgeTown_House_EventScript_GalaricaItems_2
# 8 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_EventScript_GalaricaItems_Text_1
# 11 "data/maps/LavaridgeTown_House/scripts.pory"
	random 2
# 12 "data/maps/LavaridgeTown_House/scripts.pory"
	switch VAR_RESULT
# 13 "data/maps/LavaridgeTown_House/scripts.pory"
	case 0, LavaridgeTown_House_EventScript_GalaricaItems_7
# 15 "data/maps/LavaridgeTown_House/scripts.pory"
	case 1, LavaridgeTown_House_EventScript_GalaricaItems_8
LavaridgeTown_House_EventScript_GalaricaItems_5:
# 18 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_EventScript_GalaricaItems_Text_2
# 19 "data/maps/LavaridgeTown_House/scripts.pory"
	setflag FLAG_RECIEVED_GALARICA_ITEM
LavaridgeTown_House_EventScript_GalaricaItems_1:
# 21 "data/maps/LavaridgeTown_House/scripts.pory"
	release
	end

LavaridgeTown_House_EventScript_GalaricaItems_2:
# 5 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_EventScript_GalaricaItems_Text_0
	goto LavaridgeTown_House_EventScript_GalaricaItems_1

LavaridgeTown_House_EventScript_GalaricaItems_7:
# 14 "data/maps/LavaridgeTown_House/scripts.pory"
	giveitem ITEM_GALARICA_CUFF
	goto LavaridgeTown_House_EventScript_GalaricaItems_5

LavaridgeTown_House_EventScript_GalaricaItems_8:
# 16 "data/maps/LavaridgeTown_House/scripts.pory"
	giveitem ITEM_GALARICA_WREATH
	goto LavaridgeTown_House_EventScript_GalaricaItems_5


# 25 "data/maps/LavaridgeTown_House/scripts.pory"

# 26 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_MapScripts::
# 27 "data/maps/LavaridgeTown_House/scripts.pory"
	.byte 0
# 28 "data/maps/LavaridgeTown_House/scripts.pory"

# 29 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_OldMan::
# 30 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_WifeWarmingEggInHotSprings, MSGBOX_NPC
# 31 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 32 "data/maps/LavaridgeTown_House/scripts.pory"

# 33 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_EventScript_Zigzagoon::
# 34 "data/maps/LavaridgeTown_House/scripts.pory"
	lock
# 35 "data/maps/LavaridgeTown_House/scripts.pory"
	faceplayer
# 36 "data/maps/LavaridgeTown_House/scripts.pory"
	waitse
# 37 "data/maps/LavaridgeTown_House/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 38 "data/maps/LavaridgeTown_House/scripts.pory"
	msgbox LavaridgeTown_House_Text_Zigzagoon, MSGBOX_DEFAULT
# 39 "data/maps/LavaridgeTown_House/scripts.pory"
	waitmoncry
# 40 "data/maps/LavaridgeTown_House/scripts.pory"
	release
# 41 "data/maps/LavaridgeTown_House/scripts.pory"
	end
# 42 "data/maps/LavaridgeTown_House/scripts.pory"

# 43 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_WifeWarmingEggInHotSprings:
# 44 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "My wife knows a technique for stopping\n"
# 45 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "a foe's healing.$"
# 46 "data/maps/LavaridgeTown_House/scripts.pory"

# 47 "data/maps/LavaridgeTown_House/scripts.pory"
LavaridgeTown_House_Text_Zigzagoon:
# 48 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "Zigzagoon: Pshoo!$"

LavaridgeTown_House_EventScript_GalaricaItems_Text_0:
# 5 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "Where did I get these clothes?\n"
	.string "The Slateport market of course!$"

LavaridgeTown_House_EventScript_GalaricaItems_Text_1:
# 8 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "I just bought these accessories, now\n"
	.string "I'm worried about being overdressed.\p"
	.string "You should take one off my hands.$"

LavaridgeTown_House_EventScript_GalaricaItems_Text_2:
# 18 "data/maps/LavaridgeTown_House/scripts.pory"
	.string "Now I look dapper!$"
