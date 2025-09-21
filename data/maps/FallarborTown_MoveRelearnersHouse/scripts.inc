FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner::
# 2 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	lock
# 3 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	faceplayer
# 4 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_set FLAG_RECIEVED_MOON_STONE, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2
# 7 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	showmoneybox 0, 0
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_1, MSGBOX_YESNO
# 13 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 14 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_6
# 17 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case YES, FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_7
FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1:
# 29 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	release
	end

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_2:
# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_0
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_6:
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_2
# 16 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	hidemoneybox
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_7:
# 18 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removemoney 200
# 19 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	updatemoneybox
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_3
# 24 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	hidemoneybox
# 25 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	giveitem ITEM_MOON_STONE
# 26 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	setflag FLAG_RECIEVED_MOON_STONE
	goto FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_1


# 33 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 34 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
.set LOCALID_MOVE_RELEARNER, 1
# 35 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 36 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_MapScripts::
# 37 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.byte 0
# 38 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 39 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_AskTeachMove::
# 40 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 41 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 42 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove, MSGBOX_YESNO
# 43 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	case NO, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 45 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 46 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 47 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 48 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon::
# 49 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	@ msgbox FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon, MSGBOX_DEFAULT
# 50 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special ChooseMonForMoveRelearner
# 51 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 52 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 53 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special IsSelectedMonEgg
# 54 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 55 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
# 56 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
# 57 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 58 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 59 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove::
# 60 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove, MSGBOX_DEFAULT
# 61 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	special TeachMoveRelearnerMove
# 62 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	waitstate
# 63 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 64 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale, MSGBOX_DEFAULT
# 65 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 66 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale
# 67 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 68 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 69 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon::
# 70 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
# 71 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 72 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 73 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 74 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg::
# 75 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	msgbox FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg, MSGBOX_DEFAULT
# 76 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMon
# 77 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 78 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 79 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_EventScript_ComeBackWithHeartScale::
# 80 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	@ msgbox FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale, MSGBOX_DEFAULT
# 81 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	releaseall
# 82 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	end
# 83 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 84 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ImTheMoveTutor:
# 85 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm the MOVE TUTOR.\p"
# 86 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I know all the moves that Pokémon\n"
# 87 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "learn--every one of them--and I can\l"
# 88 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "teach Pokémon those moves.\p"
# 89 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach a move to a Pokémon\n"
# 90 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "of yours if you'd like.\p"
# 91 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'll do it for a HEART SCALE.\n"
# 92 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I'm collecting those now.$"
# 93 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 94 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ThatsAHeartScaleWantMeToTeachMove:
# 95 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Oh! That's it! That's an honest to\n"
# 96 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "goodness HEART SCALE!\p"
# 97 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Let me guess, you want me to teach\n"
# 98 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "a move?$"
# 99 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 100 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TutorWhichMon:
# 101 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which Pokémon needs tutoring?$"
# 102 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 103 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_TeachWhichMove:
# 104 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Which move should be taught?$"
# 105 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 106 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_DontHaveMoveToTeachPokemon:
# 107 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "This Pokémon has no moves it can learn.$"
# 108 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 109 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 110 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_HandedOverHeartScale:
# 111 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "{PLAYER} spent one Heart Scale.$"
# 112 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 113 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_ComeBackWithHeartScale:
# 114 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "If your Pokémon need to learn a move,\n"
# 115 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "come back with a HEART SCALE.$"
# 116 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"

# 117 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
FallarborTown_MoveRelearnersHouse_Text_CantTeachEgg:
# 118 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Hunh? There isn't a single move that\n"
# 119 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I can teach an EGG.$"

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_0:
# 5 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I have nothing else to sell…$"

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_1:
# 8 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "I used to be the Move Relearner.\p"
	.string "But now that relearning moves can be\n"
	.string "done anywhere, I'm out of a job…\p"
	.string "Would you like to buy this Moon Stone\n"
	.string "for ¥200 to help me out?$"

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_2:
# 15 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "That's a shame…$"

FallarborTown_MoveRelearnersHouse_EventScript_MoveRelearner_Text_3:
# 20 "data/maps/FallarborTown_MoveRelearnersHouse/scripts.pory"
	.string "Perfect!\p"
	.string "Use this Moon Stone wisely, you won't\n"
	.string "be able to get another one until you\l"
	.string "reach Lavaridge Town.$"
