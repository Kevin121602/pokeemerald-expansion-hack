RouteFour_MapScripts::
	.byte 0


RouteFour_EventScript_Madeline::
# 4 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, RouteFour_Text_MadelineIntro, RouteFour_Text_MadelineDefeat
# 5 "data/maps/RouteFour/scripts.pory"
	msgbox RouteFour_Text_MadelinePostBattle, MSGBOX_AUTOCLOSE
	end


# 21 "data/maps/RouteFour/scripts.pory"

# 22 "data/maps/RouteFour/scripts.pory"
Route106_MapScripts::
# 23 "data/maps/RouteFour/scripts.pory"
	.byte 0
# 24 "data/maps/RouteFour/scripts.pory"

# 25 "data/maps/RouteFour/scripts.pory"
Route113_EventScript_Madeline::
# 26 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat
# 27 "data/maps/RouteFour/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 28 "data/maps/RouteFour/scripts.pory"
	release
# 29 "data/maps/RouteFour/scripts.pory"
	end
# 30 "data/maps/RouteFour/scripts.pory"
	
# 31 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 32 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 33 "data/maps/RouteFour/scripts.pory"
	end
# 34 "data/maps/RouteFour/scripts.pory"

# 35 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Douglas::
# 36 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 37 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/RouteFour/scripts.pory"
	end
# 39 "data/maps/RouteFour/scripts.pory"

# 40 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Kyla::
# 41 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 42 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/RouteFour/scripts.pory"
	end
# 44 "data/maps/RouteFour/scripts.pory"

# 45 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Elliot::
# 46 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 47 "data/maps/RouteFour/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 48 "data/maps/RouteFour/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 49 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 50 "data/maps/RouteFour/scripts.pory"
	release
# 51 "data/maps/RouteFour/scripts.pory"
	end
# 52 "data/maps/RouteFour/scripts.pory"

# 53 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 54 "data/maps/RouteFour/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 55 "data/maps/RouteFour/scripts.pory"
	waitmovement 0
# 56 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 57 "data/maps/RouteFour/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 58 "data/maps/RouteFour/scripts.pory"
	release
# 59 "data/maps/RouteFour/scripts.pory"
	end
# 60 "data/maps/RouteFour/scripts.pory"

# 61 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_ElliotRematch::
# 62 "data/maps/RouteFour/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 63 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/RouteFour/scripts.pory"
	end
# 65 "data/maps/RouteFour/scripts.pory"

# 66 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Ned::
# 67 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 68 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/RouteFour/scripts.pory"
	end
# 70 "data/maps/RouteFour/scripts.pory"

# 71 "data/maps/RouteFour/scripts.pory"
Route106_Text_TrainerTips:
# 72 "data/maps/RouteFour/scripts.pory"
	.string "TRAINER TIPS\p"
# 73 "data/maps/RouteFour/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 74 "data/maps/RouteFour/scripts.pory"
	.string "Press the A Button if you get a bite.$"

RouteFour_Text_MadelineIntro::
# 9 "data/maps/RouteFour/scripts.pory"
	.string "I use this parasol to keep myself dry\n"
	.string "from the rain!$"

RouteFour_Text_MadelineDefeat::
# 13 "data/maps/RouteFour/scripts.pory"
	.string "Huff, huff… I am exhausted…$"

RouteFour_Text_MadelinePostBattle::
# 17 "data/maps/RouteFour/scripts.pory"
	.string "You're very good at this. I must say I'm\n"
	.string "impressed!$"
