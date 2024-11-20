# 1 "data/maps/RouteFour/scripts.pory"

# 2 "data/maps/RouteFour/scripts.pory"
RouteFour_MapScripts::
# 3 "data/maps/RouteFour/scripts.pory"
	.byte 0
# 4 "data/maps/RouteFour/scripts.pory"

# 5 "data/maps/RouteFour/scripts.pory"
Route113_EventScript_Madeline::
# 6 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat
# 7 "data/maps/RouteFour/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 8 "data/maps/RouteFour/scripts.pory"
	release
# 9 "data/maps/RouteFour/scripts.pory"
	end
# 10 "data/maps/RouteFour/scripts.pory"
	
# 11 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_TrainerTipsSign::
# 12 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
# 13 "data/maps/RouteFour/scripts.pory"
	end
# 14 "data/maps/RouteFour/scripts.pory"

# 15 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Douglas::
# 16 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_DOUGLAS, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
# 17 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/RouteFour/scripts.pory"
	end
# 19 "data/maps/RouteFour/scripts.pory"

# 20 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Kyla::
# 21 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_KYLA, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
# 22 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/RouteFour/scripts.pory"
	end
# 24 "data/maps/RouteFour/scripts.pory"

# 25 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Elliot::
# 26 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_ELLIOT_1, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated, Route106_EventScript_ElliotRegisterMatchCallAfterBattle
# 27 "data/maps/RouteFour/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 28 "data/maps/RouteFour/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route106_EventScript_ElliotRematch
# 29 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
# 30 "data/maps/RouteFour/scripts.pory"
	release
# 31 "data/maps/RouteFour/scripts.pory"
	end
# 32 "data/maps/RouteFour/scripts.pory"

# 33 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
# 34 "data/maps/RouteFour/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 35 "data/maps/RouteFour/scripts.pory"
	waitmovement 0
# 36 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
# 37 "data/maps/RouteFour/scripts.pory"
	register_matchcall TRAINER_ELLIOT_1
# 38 "data/maps/RouteFour/scripts.pory"
	release
# 39 "data/maps/RouteFour/scripts.pory"
	end
# 40 "data/maps/RouteFour/scripts.pory"

# 41 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_ElliotRematch::
# 42 "data/maps/RouteFour/scripts.pory"
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
# 43 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/RouteFour/scripts.pory"
	end
# 45 "data/maps/RouteFour/scripts.pory"

# 46 "data/maps/RouteFour/scripts.pory"
Route106_EventScript_Ned::
# 47 "data/maps/RouteFour/scripts.pory"
	trainerbattle_single TRAINER_NED, Route106_Text_NedIntro, Route106_Text_NedDefeated
# 48 "data/maps/RouteFour/scripts.pory"
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/RouteFour/scripts.pory"
	end
# 50 "data/maps/RouteFour/scripts.pory"

# 51 "data/maps/RouteFour/scripts.pory"
Route106_Text_TrainerTips:
# 52 "data/maps/RouteFour/scripts.pory"
	.string "TRAINER TIPS\p"
# 53 "data/maps/RouteFour/scripts.pory"
	.string "Advice on catching POKéMON with a ROD:\n"
# 54 "data/maps/RouteFour/scripts.pory"
	.string "Press the A Button if you get a bite.$"
