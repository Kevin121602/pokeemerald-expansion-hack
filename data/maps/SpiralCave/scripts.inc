SpiralCave_MapScripts::
	.byte 0


SpiralCave_EventScript_Wally::
# 4 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_single TRAINER_WALLY_MAUVILLE, SpiralCave_Text_WallyIntro, SpiralCave_Text_WallyDefeat
# 5 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end


# 21 "data/maps/SpiralCave/scripts.pory"

# 22 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_MapScripts::
# 23 "data/maps/SpiralCave/scripts.pory"
	.byte 0
# 24 "data/maps/SpiralCave/scripts.pory"

# 25 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 26 "data/maps/SpiralCave/scripts.pory"
	lock
# 27 "data/maps/SpiralCave/scripts.pory"
	faceplayer
# 28 "data/maps/SpiralCave/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 29 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 30 "data/maps/SpiralCave/scripts.pory"
	giveitem ITEM_HM_FLASH
# 31 "data/maps/SpiralCave/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 32 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 33 "data/maps/SpiralCave/scripts.pory"
	release
# 34 "data/maps/SpiralCave/scripts.pory"
	end
# 35 "data/maps/SpiralCave/scripts.pory"

# 36 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 37 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 38 "data/maps/SpiralCave/scripts.pory"
	release
# 39 "data/maps/SpiralCave/scripts.pory"
	end
# 40 "data/maps/SpiralCave/scripts.pory"

# 41 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 42 "data/maps/SpiralCave/scripts.pory"
	.string "Hey, you.\n"
# 43 "data/maps/SpiralCave/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 44 "data/maps/SpiralCave/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 45 "data/maps/SpiralCave/scripts.pory"
	.string "That guy who came by earlier…\n"
# 46 "data/maps/SpiralCave/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 47 "data/maps/SpiralCave/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 48 "data/maps/SpiralCave/scripts.pory"
	.string "to be all right, but…\p"
# 49 "data/maps/SpiralCave/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 50 "data/maps/SpiralCave/scripts.pory"
	.string "that we meet is our motto.\p"
# 51 "data/maps/SpiralCave/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 52 "data/maps/SpiralCave/scripts.pory"

# 53 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 54 "data/maps/SpiralCave/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 55 "data/maps/SpiralCave/scripts.pory"
	.string "a POKéMON and use it.\p"
# 56 "data/maps/SpiralCave/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 57 "data/maps/SpiralCave/scripts.pory"
	.string "of caves.\p"
# 58 "data/maps/SpiralCave/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 59 "data/maps/SpiralCave/scripts.pory"
	.string "from DEWFORD's POKéMON GYM.$"

SpiralCave_Text_WallyIntro::
# 9 "data/maps/SpiralCave/scripts.pory"
	.string "Did you just become a Trainer? We're\n"
	.string "both beginners!$"

SpiralCave_Text_WallyDefeat::
# 13 "data/maps/SpiralCave/scripts.pory"
	.string "I called you because I thought I could\n"
	.string "beat you…$"

SpiralCave_Text_WallyPostBattle::
# 17 "data/maps/SpiralCave/scripts.pory"
	.string "I haven't won once yet… I wish I would\n"
	.string "win soon…$"
