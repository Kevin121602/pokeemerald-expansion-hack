# 1 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
@.equ LOCALID_JACE, 1
# 3 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
@.equ LOCALID_KEEGAN, 2
# 4 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
@.equ LOCALID_JEFF, 3
# 5 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
@.equ LOCALID_ELI, 4
# 6 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
.set LOCALID_DANIELLE, 5
# 7 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 8 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_MapScripts::
# 9 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_B1F_OnTransition
# 10 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	.byte 0
# 11 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 12 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_OnTransition:
# 13 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	call LavaridgeTown_Gym_B1F_EventScript_SetTrainerTempVars
# 14 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	call LavaridgeTown_Gym_B1F_EventScript_CheckBuryTrainers
# 15 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	end
# 16 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 17 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 18 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetTrainerTempVars::
# 19 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 0
# 20 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 0
# 21 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 0
# 22 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_A, 0
# 23 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_EventScript_SetJaceTempVar
# 24 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_7, 1
# 25 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetJaceTempVar::
# 26 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JACE, LavaridgeTown_Gym_B1F_EventScript_SetJeffTempVar
# 27 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_8, 1
# 28 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetJeffTempVar::
# 29 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JEFF, LavaridgeTown_Gym_B1F_EventScript_SetEliTempVar
# 30 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_9, 1
# 31 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetEliTempVar::
# 32 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_ELI, LavaridgeTown_Gym_B1F_EventScript_SetDanielleTempVar
# 33 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 34 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_SetDanielleTempVar::
# 35 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_B1F_EventScript_EndSetTrainerTempVars
# 36 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 37 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_EndSetTrainerTempVars::
# 38 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
# 39 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"

# 40 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryTrainers::
# 41 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_EventScript_CheckBuryJace
# 42 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_KEEGAN, MOVEMENT_TYPE_BURIED
# 43 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryJace::
# 44 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JACE, LavaridgeTown_Gym_B1F_EventScript_CheckBuryJeff
# 45 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JACE, MOVEMENT_TYPE_BURIED
# 46 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryJeff::
# 47 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_JEFF, LavaridgeTown_Gym_B1F_EventScript_CheckBuryEli
# 48 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_JEFF, MOVEMENT_TYPE_BURIED
# 49 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryEli::
# 50 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_ELI, LavaridgeTown_Gym_B1F_EventScript_CheckBuryDanielle
# 51 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_ELI, MOVEMENT_TYPE_BURIED
# 52 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_CheckBuryDanielle::
# 53 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_B1F_EventScript_EndCheckBuryTrainers
# 54 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
# 55 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_EndCheckBuryTrainers::
# 56 "data/maps/LavaridgeTown_Gym_B1F/scripts.pory"
	return
