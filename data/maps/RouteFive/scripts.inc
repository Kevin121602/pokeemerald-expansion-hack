RouteFive_MapScripts::
	.byte 0


RouteFive_EventScript_Haley::
# 4 "data/maps/RouteFive/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, RouteFive_Text_HaleyIntro, RouteFive_Text_HaleyDefeat
# 5 "data/maps/RouteFive/scripts.pory"
	msgbox RouteFive_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
	end


# 21 "data/maps/RouteFive/scripts.pory"

# 22 "data/maps/RouteFive/scripts.pory"
Route108_MapScripts::
# 23 "data/maps/RouteFive/scripts.pory"
	.byte 0
# 24 "data/maps/RouteFive/scripts.pory"

# 25 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_Jerome::
# 26 "data/maps/RouteFive/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
# 27 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/RouteFive/scripts.pory"
	end
# 29 "data/maps/RouteFive/scripts.pory"

# 30 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_Matthew::
# 31 "data/maps/RouteFive/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 32 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/RouteFive/scripts.pory"
	end
# 34 "data/maps/RouteFive/scripts.pory"

# 35 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_Tara::
# 36 "data/maps/RouteFive/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 37 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/RouteFive/scripts.pory"
	end
# 39 "data/maps/RouteFive/scripts.pory"

# 40 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_Missy::
# 41 "data/maps/RouteFive/scripts.pory"
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
# 42 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/RouteFive/scripts.pory"
	end
# 44 "data/maps/RouteFive/scripts.pory"

# 45 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_Carolina::
# 46 "data/maps/RouteFive/scripts.pory"
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
# 47 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/RouteFive/scripts.pory"
	end
# 49 "data/maps/RouteFive/scripts.pory"

# 50 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_Cory::
# 51 "data/maps/RouteFive/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
# 52 "data/maps/RouteFive/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 53 "data/maps/RouteFive/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
# 54 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 55 "data/maps/RouteFive/scripts.pory"
	release
# 56 "data/maps/RouteFive/scripts.pory"
	end
# 57 "data/maps/RouteFive/scripts.pory"

# 58 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 59 "data/maps/RouteFive/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 60 "data/maps/RouteFive/scripts.pory"
	waitmovement 0
# 61 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 62 "data/maps/RouteFive/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 63 "data/maps/RouteFive/scripts.pory"
	release
# 64 "data/maps/RouteFive/scripts.pory"
	end
# 65 "data/maps/RouteFive/scripts.pory"

# 66 "data/maps/RouteFive/scripts.pory"
Route108_EventScript_CoryRematch::
# 67 "data/maps/RouteFive/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 68 "data/maps/RouteFive/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/RouteFive/scripts.pory"
	end

RouteFive_Text_HaleyIntro::
# 9 "data/maps/RouteFive/scripts.pory"
	.string "Should I… Or shouldn't I? Okay, sure, I\n"
	.string "will battle!$"

RouteFive_Text_HaleyDefeat::
# 13 "data/maps/RouteFive/scripts.pory"
	.string "I shouldn't have battled…$"

RouteFive_Text_HaleyPostBattle::
# 17 "data/maps/RouteFive/scripts.pory"
	.string "If you're faced with a decision and you\n"
	.string "let someone else choose for you, you\l"
	.string "will regret it, however things turn out.$"
