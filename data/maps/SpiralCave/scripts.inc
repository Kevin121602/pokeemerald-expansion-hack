# 1 "data/maps/SpiralCave/scripts.pory"

# 2 "data/maps/SpiralCave/scripts.pory"
SpiralCave_MapScripts::
# 3 "data/maps/SpiralCave/scripts.pory"
	.byte 0
# 4 "data/maps/SpiralCave/scripts.pory"

# 5 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 6 "data/maps/SpiralCave/scripts.pory"
	lock
# 7 "data/maps/SpiralCave/scripts.pory"
	faceplayer
# 8 "data/maps/SpiralCave/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 9 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/SpiralCave/scripts.pory"
	giveitem ITEM_HM_FLASH
# 11 "data/maps/SpiralCave/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 12 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/SpiralCave/scripts.pory"
	release
# 14 "data/maps/SpiralCave/scripts.pory"
	end
# 15 "data/maps/SpiralCave/scripts.pory"

# 16 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 17 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 18 "data/maps/SpiralCave/scripts.pory"
	release
# 19 "data/maps/SpiralCave/scripts.pory"
	end
# 20 "data/maps/SpiralCave/scripts.pory"

# 21 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 22 "data/maps/SpiralCave/scripts.pory"
	.string "Hey, you.\n"
# 23 "data/maps/SpiralCave/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 24 "data/maps/SpiralCave/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 25 "data/maps/SpiralCave/scripts.pory"
	.string "That guy who came by earlier…\n"
# 26 "data/maps/SpiralCave/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 27 "data/maps/SpiralCave/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 28 "data/maps/SpiralCave/scripts.pory"
	.string "to be all right, but…\p"
# 29 "data/maps/SpiralCave/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 30 "data/maps/SpiralCave/scripts.pory"
	.string "that we meet is our motto.\p"
# 31 "data/maps/SpiralCave/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 32 "data/maps/SpiralCave/scripts.pory"

# 33 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 34 "data/maps/SpiralCave/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 35 "data/maps/SpiralCave/scripts.pory"
	.string "a POKéMON and use it.\p"
# 36 "data/maps/SpiralCave/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 37 "data/maps/SpiralCave/scripts.pory"
	.string "of caves.\p"
# 38 "data/maps/SpiralCave/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 39 "data/maps/SpiralCave/scripts.pory"
	.string "from DEWFORD's POKéMON GYM.$"
