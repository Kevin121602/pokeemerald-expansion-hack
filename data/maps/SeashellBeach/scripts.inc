SeashellBeach_MapScripts::
	.byte 0


SeashellBeach_EventScript_Josh::
# 4 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_JOSH, SeashellBeach_Text_JoshIntro, SeashellBeach_Text_JoshDefeat
# 5 "data/maps/SeashellBeach/scripts.pory"
	msgbox SeashellBeach_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end


# 21 "data/maps/SeashellBeach/scripts.pory"

# 22 "data/maps/SeashellBeach/scripts.pory"
Route107_MapScripts::
# 23 "data/maps/SeashellBeach/scripts.pory"
	.byte 0
# 24 "data/maps/SeashellBeach/scripts.pory"

# 25 "data/maps/SeashellBeach/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 26 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 27 "data/maps/SeashellBeach/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/SeashellBeach/scripts.pory"
	end
# 29 "data/maps/SeashellBeach/scripts.pory"

# 30 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Darrin::
# 31 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_DARRIN, Route107_Text_DarrinIntro, Route107_Text_DarrinDefeated
# 32 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_DarrinPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/SeashellBeach/scripts.pory"
	end
# 34 "data/maps/SeashellBeach/scripts.pory"

# 35 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Tony::
# 36 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_TONY_1, Route107_Text_TonyIntro, Route107_Text_TonyDefeated, Route107_EventScript_TonyRegisterMatchCallAfterBattle
# 37 "data/maps/SeashellBeach/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 38 "data/maps/SeashellBeach/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route107_EventScript_TonyRematch
# 39 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_TonyPostBattle, MSGBOX_DEFAULT
# 40 "data/maps/SeashellBeach/scripts.pory"
	release
# 41 "data/maps/SeashellBeach/scripts.pory"
	end
# 42 "data/maps/SeashellBeach/scripts.pory"

# 43 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_TonyRegisterMatchCallAfterBattle::
# 44 "data/maps/SeashellBeach/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 45 "data/maps/SeashellBeach/scripts.pory"
	waitmovement 0
# 46 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_TonyRegister, MSGBOX_DEFAULT
# 47 "data/maps/SeashellBeach/scripts.pory"
	register_matchcall TRAINER_TONY_1
# 48 "data/maps/SeashellBeach/scripts.pory"
	release
# 49 "data/maps/SeashellBeach/scripts.pory"
	end
# 50 "data/maps/SeashellBeach/scripts.pory"

# 51 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_TonyRematch::
# 52 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_rematch TRAINER_TONY_1, Route107_Text_TonyRematchIntro, Route107_Text_TonyRematchDefeated
# 53 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_TonyRematchPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SeashellBeach/scripts.pory"
	end
# 55 "data/maps/SeashellBeach/scripts.pory"

# 56 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Denise::
# 57 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_DENISE, Route107_Text_DeniseIntro, Route107_Text_DeniseDefeated
# 58 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_DenisePostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SeashellBeach/scripts.pory"
	end
# 60 "data/maps/SeashellBeach/scripts.pory"

# 61 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Beth::
# 62 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_BETH, Route107_Text_BethIntro, Route107_Text_BethDefeated
# 63 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/SeashellBeach/scripts.pory"
	end
# 65 "data/maps/SeashellBeach/scripts.pory"

# 66 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Lisa::
# 67 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_LisaIntro, Route107_Text_LisaDefeated, Route107_Text_LisaNotEnoughPokemon
# 68 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/SeashellBeach/scripts.pory"
	end
# 70 "data/maps/SeashellBeach/scripts.pory"

# 71 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Ray::
# 72 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_double TRAINER_LISA_AND_RAY, Route107_Text_RayIntro, Route107_Text_RayDefeated, Route107_Text_RayNotEnoughPokemon
# 73 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/SeashellBeach/scripts.pory"
	end
# 75 "data/maps/SeashellBeach/scripts.pory"

# 76 "data/maps/SeashellBeach/scripts.pory"
Route107_EventScript_Camron::
# 77 "data/maps/SeashellBeach/scripts.pory"
	trainerbattle_single TRAINER_CAMRON, Route107_Text_CamronIntro, Route107_Text_CamronDefeated
# 78 "data/maps/SeashellBeach/scripts.pory"
	msgbox Route107_Text_CamronPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/SeashellBeach/scripts.pory"
	end

SeashellBeach_Text_JoshIntro::
# 9 "data/maps/SeashellBeach/scripts.pory"
	.string "Don't take us Youngsters lightly! I'll\n"
	.string "show you why we're better!$"

SeashellBeach_Text_JoshDefeat::
# 13 "data/maps/SeashellBeach/scripts.pory"
	.string "You were too good for me…$"

SeashellBeach_Text_JoshPostBattle::
# 17 "data/maps/SeashellBeach/scripts.pory"
	.string "You haven't seen anything of the Normal\n"
	.string "type's terrifying power!$"
