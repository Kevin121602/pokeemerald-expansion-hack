# 1 "data/maps/RouteTwo/scripts.pory"

# 2 "data/maps/RouteTwo/scripts.pory"
RouteTwo_MapScripts::
# 3 "data/maps/RouteTwo/scripts.pory"
	.byte 0
# 4 "data/maps/RouteTwo/scripts.pory"

# 5 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_LittleBoy::
# 6 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 7 "data/maps/RouteTwo/scripts.pory"
	end
# 8 "data/maps/RouteTwo/scripts.pory"

# 9 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 10 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 11 "data/maps/RouteTwo/scripts.pory"
	end
# 12 "data/maps/RouteTwo/scripts.pory"

# 13 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 14 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 15 "data/maps/RouteTwo/scripts.pory"
	end
# 16 "data/maps/RouteTwo/scripts.pory"

# 17 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Boy::
# 18 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 19 "data/maps/RouteTwo/scripts.pory"
	end
# 20 "data/maps/RouteTwo/scripts.pory"

# 21 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Calvin::
# 22 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated,
# 23 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 24 "data/maps/RouteTwo/scripts.pory"
	release
# 25 "data/maps/RouteTwo/scripts.pory"
	end
# 26 "data/maps/RouteTwo/scripts.pory"

# 27 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 28 "data/maps/RouteTwo/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 29 "data/maps/RouteTwo/scripts.pory"
	waitmovement 0
# 30 "data/maps/RouteTwo/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 31 "data/maps/RouteTwo/scripts.pory"
	release
# 32 "data/maps/RouteTwo/scripts.pory"
	end
# 33 "data/maps/RouteTwo/scripts.pory"

# 34 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 35 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 36 "data/maps/RouteTwo/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 37 "data/maps/RouteTwo/scripts.pory"
	release
# 38 "data/maps/RouteTwo/scripts.pory"
	end
# 39 "data/maps/RouteTwo/scripts.pory"

# 40 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 41 "data/maps/RouteTwo/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 42 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 43 "data/maps/RouteTwo/scripts.pory"
	release
# 44 "data/maps/RouteTwo/scripts.pory"
	end
# 45 "data/maps/RouteTwo/scripts.pory"

# 46 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRegister::
# 47 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 48 "data/maps/RouteTwo/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 49 "data/maps/RouteTwo/scripts.pory"
	release
# 50 "data/maps/RouteTwo/scripts.pory"
	end
# 51 "data/maps/RouteTwo/scripts.pory"

# 52 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRematch::
# 53 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 54 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/RouteTwo/scripts.pory"
	end
# 56 "data/maps/RouteTwo/scripts.pory"

# 57 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Rick::
# 58 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 59 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/RouteTwo/scripts.pory"
	end
# 61 "data/maps/RouteTwo/scripts.pory"

# 62 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Tiana::
# 63 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 64 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/RouteTwo/scripts.pory"
	end
# 66 "data/maps/RouteTwo/scripts.pory"

# 67 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Allen::
# 68 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 69 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/RouteTwo/scripts.pory"
	end
# 71 "data/maps/RouteTwo/scripts.pory"

# 72 "data/maps/RouteTwo/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 73 "data/maps/RouteTwo/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 74 "data/maps/RouteTwo/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 75 "data/maps/RouteTwo/scripts.pory"
	.string "don't they?\p"
# 76 "data/maps/RouteTwo/scripts.pory"
	.string "Please watch me and see if I can\n"
# 77 "data/maps/RouteTwo/scripts.pory"
	.string "catch one properly.\p"
# 78 "data/maps/RouteTwo/scripts.pory"
	.string "…Whoa!$"
# 79 "data/maps/RouteTwo/scripts.pory"

# 80 "data/maps/RouteTwo/scripts.pory"
Route102_Text_WallyIDidIt:
# 81 "data/maps/RouteTwo/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 82 "data/maps/RouteTwo/scripts.pory"
	.string "My POKéMON!$"
# 83 "data/maps/RouteTwo/scripts.pory"

# 84 "data/maps/RouteTwo/scripts.pory"
Route102_Text_LetsGoBack:
# 85 "data/maps/RouteTwo/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 86 "data/maps/RouteTwo/scripts.pory"
	.string "Let's go back to the GYM!$"
# 87 "data/maps/RouteTwo/scripts.pory"

# 88 "data/maps/RouteTwo/scripts.pory"
Route102_Text_ImNotVeryTall:
# 89 "data/maps/RouteTwo/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 90 "data/maps/RouteTwo/scripts.pory"
	.string "into tall grass.\p"
# 91 "data/maps/RouteTwo/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 92 "data/maps/RouteTwo/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 93 "data/maps/RouteTwo/scripts.pory"
	.string "Fwatchoo!$"
# 94 "data/maps/RouteTwo/scripts.pory"

# 95 "data/maps/RouteTwo/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 96 "data/maps/RouteTwo/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 97 "data/maps/RouteTwo/scripts.pory"
	.string "POKéMON!$"
# 98 "data/maps/RouteTwo/scripts.pory"

# 99 "data/maps/RouteTwo/scripts.pory"
Route102_Text_RouteSignOldale:
# 100 "data/maps/RouteTwo/scripts.pory"
	.string "ROUTE 102\n"
# 101 "data/maps/RouteTwo/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 102 "data/maps/RouteTwo/scripts.pory"

# 103 "data/maps/RouteTwo/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 104 "data/maps/RouteTwo/scripts.pory"
	.string "ROUTE 102\n"
# 105 "data/maps/RouteTwo/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"
