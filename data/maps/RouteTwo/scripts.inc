RouteTwo_MapScripts::
	.byte 0


RouteTwo_EventScript_Joey::
# 4 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_JOEY, RouteTwo_Text_JoeyIntro, RouteTwo_Text_JoeyDefeated
# 5 "data/maps/RouteTwo/scripts.pory"
	msgbox RouteTwo_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/RouteTwo/scripts.pory"
	release
	end


# 22 "data/maps/RouteTwo/scripts.pory"

# 23 "data/maps/RouteTwo/scripts.pory"
Route102_MapScripts::
# 24 "data/maps/RouteTwo/scripts.pory"
	.byte 0
# 25 "data/maps/RouteTwo/scripts.pory"

# 26 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_LittleBoy::
# 27 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 28 "data/maps/RouteTwo/scripts.pory"
	end
# 29 "data/maps/RouteTwo/scripts.pory"

# 30 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 31 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 32 "data/maps/RouteTwo/scripts.pory"
	end
# 33 "data/maps/RouteTwo/scripts.pory"

# 34 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 35 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 36 "data/maps/RouteTwo/scripts.pory"
	end
# 37 "data/maps/RouteTwo/scripts.pory"

# 38 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Boy::
# 39 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 40 "data/maps/RouteTwo/scripts.pory"
	end
# 41 "data/maps/RouteTwo/scripts.pory"

# 42 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Calvin::
# 43 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated,
# 44 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 45 "data/maps/RouteTwo/scripts.pory"
	release
# 46 "data/maps/RouteTwo/scripts.pory"
	end
# 47 "data/maps/RouteTwo/scripts.pory"

# 48 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 49 "data/maps/RouteTwo/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 50 "data/maps/RouteTwo/scripts.pory"
	waitmovement 0
# 51 "data/maps/RouteTwo/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 52 "data/maps/RouteTwo/scripts.pory"
	release
# 53 "data/maps/RouteTwo/scripts.pory"
	end
# 54 "data/maps/RouteTwo/scripts.pory"

# 55 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 56 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 57 "data/maps/RouteTwo/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 58 "data/maps/RouteTwo/scripts.pory"
	release
# 59 "data/maps/RouteTwo/scripts.pory"
	end
# 60 "data/maps/RouteTwo/scripts.pory"

# 61 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 62 "data/maps/RouteTwo/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 63 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 64 "data/maps/RouteTwo/scripts.pory"
	release
# 65 "data/maps/RouteTwo/scripts.pory"
	end
# 66 "data/maps/RouteTwo/scripts.pory"

# 67 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRegister::
# 68 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 69 "data/maps/RouteTwo/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 70 "data/maps/RouteTwo/scripts.pory"
	release
# 71 "data/maps/RouteTwo/scripts.pory"
	end
# 72 "data/maps/RouteTwo/scripts.pory"

# 73 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_CalvinRematch::
# 74 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 75 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/RouteTwo/scripts.pory"
	end
# 77 "data/maps/RouteTwo/scripts.pory"

# 78 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Rick::
# 79 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 80 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/RouteTwo/scripts.pory"
	end
# 82 "data/maps/RouteTwo/scripts.pory"

# 83 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Tiana::
# 84 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 85 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/RouteTwo/scripts.pory"
	end
# 87 "data/maps/RouteTwo/scripts.pory"

# 88 "data/maps/RouteTwo/scripts.pory"
Route102_EventScript_Allen::
# 89 "data/maps/RouteTwo/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 90 "data/maps/RouteTwo/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/RouteTwo/scripts.pory"
	end
# 92 "data/maps/RouteTwo/scripts.pory"

# 93 "data/maps/RouteTwo/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 94 "data/maps/RouteTwo/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 95 "data/maps/RouteTwo/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 96 "data/maps/RouteTwo/scripts.pory"
	.string "don't they?\p"
# 97 "data/maps/RouteTwo/scripts.pory"
	.string "Please watch me and see if I can\n"
# 98 "data/maps/RouteTwo/scripts.pory"
	.string "catch one properly.\p"
# 99 "data/maps/RouteTwo/scripts.pory"
	.string "…Whoa!$"
# 100 "data/maps/RouteTwo/scripts.pory"

# 101 "data/maps/RouteTwo/scripts.pory"
Route102_Text_WallyIDidIt:
# 102 "data/maps/RouteTwo/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 103 "data/maps/RouteTwo/scripts.pory"
	.string "My POKéMON!$"
# 104 "data/maps/RouteTwo/scripts.pory"

# 105 "data/maps/RouteTwo/scripts.pory"
Route102_Text_LetsGoBack:
# 106 "data/maps/RouteTwo/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 107 "data/maps/RouteTwo/scripts.pory"
	.string "Let's go back to the GYM!$"
# 108 "data/maps/RouteTwo/scripts.pory"

# 109 "data/maps/RouteTwo/scripts.pory"
Route102_Text_ImNotVeryTall:
# 110 "data/maps/RouteTwo/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 111 "data/maps/RouteTwo/scripts.pory"
	.string "into tall grass.\p"
# 112 "data/maps/RouteTwo/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 113 "data/maps/RouteTwo/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 114 "data/maps/RouteTwo/scripts.pory"
	.string "Fwatchoo!$"
# 115 "data/maps/RouteTwo/scripts.pory"

# 116 "data/maps/RouteTwo/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 117 "data/maps/RouteTwo/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 118 "data/maps/RouteTwo/scripts.pory"
	.string "POKéMON!$"
# 119 "data/maps/RouteTwo/scripts.pory"

# 120 "data/maps/RouteTwo/scripts.pory"
Route102_Text_RouteSignOldale:
# 121 "data/maps/RouteTwo/scripts.pory"
	.string "ROUTE 102\n"
# 122 "data/maps/RouteTwo/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 123 "data/maps/RouteTwo/scripts.pory"

# 124 "data/maps/RouteTwo/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 125 "data/maps/RouteTwo/scripts.pory"
	.string "ROUTE 102\n"
# 126 "data/maps/RouteTwo/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

RouteTwo_Text_JoeyIntro::
# 10 "data/maps/RouteTwo/scripts.pory"
	.string "I have two top percentage Rattata's,\n"
	.string "You can't say no to my challenge!$"

RouteTwo_Text_JoeyDefeated::
# 14 "data/maps/RouteTwo/scripts.pory"
	.string "Arrgh, I lost… I should have trained\n"
	.string "mine more…$"

RouteTwo_Text_JoeyPostBattle::
# 18 "data/maps/RouteTwo/scripts.pory"
	.string "Listen, you. If you're strong, you\n"
	.string "should have told me before!$"
