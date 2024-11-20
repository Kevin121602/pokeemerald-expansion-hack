# 1 "data/maps/SeashellBeach/scripts.pory"

# 2 "data/maps/SeashellBeach/scripts.pory"
SeashellBeach_MapScripts::
# 3 "data/maps/SeashellBeach/scripts.pory"
	.byte 0
# 4 "data/maps/SeashellBeach/scripts.pory"

# 5 "data/maps/SeashellBeach/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 6 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 7 "data/maps/SeashellBeach/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/SeashellBeach/scripts.pory"
	end
# 9 "data/maps/SeashellBeach/scripts.pory"

# 10 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Darrin::
# 11 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 12 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/SeashellBeach/scripts.pory"
	end
# 14 "data/maps/SeashellBeach/scripts.pory"

# 15 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Tony::
# 16 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 17 "data/maps/SeashellBeach/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/SeashellBeach/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
# 19 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 20 "data/maps/SeashellBeach/scripts.pory"
	release
# 21 "data/maps/SeashellBeach/scripts.pory"
	end
# 22 "data/maps/SeashellBeach/scripts.pory"

# 23 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 24 "data/maps/SeashellBeach/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 25 "data/maps/SeashellBeach/scripts.pory"
	waitmovement 0
# 26 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 27 "data/maps/SeashellBeach/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 28 "data/maps/SeashellBeach/scripts.pory"
	release
# 29 "data/maps/SeashellBeach/scripts.pory"
	end
# 30 "data/maps/SeashellBeach/scripts.pory"

# 31 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_TonyRematch::
# 32 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 33 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/SeashellBeach/scripts.pory"
	end
# 35 "data/maps/SeashellBeach/scripts.pory"

# 36 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Denise::
# 37 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 38 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/SeashellBeach/scripts.pory"
	end
# 40 "data/maps/SeashellBeach/scripts.pory"

# 41 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Beth::
# 42 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 43 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/SeashellBeach/scripts.pory"
	end
# 45 "data/maps/SeashellBeach/scripts.pory"

# 46 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Lisa::
# 47 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 48 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SeashellBeach/scripts.pory"
	end
# 50 "data/maps/SeashellBeach/scripts.pory"

# 51 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Ray::
# 52 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 53 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SeashellBeach/scripts.pory"
	end
# 55 "data/maps/SeashellBeach/scripts.pory"

# 56 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Camron::
# 57 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 58 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SeashellBeach/scripts.pory"
	end
