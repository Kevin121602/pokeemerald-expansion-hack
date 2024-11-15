# 1 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 2 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 4 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
CenterTown_PlayersHouse_2F_MapScripts::
# 5 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 6 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 7 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 9 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition:
# 10 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 11 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 12 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos::
# 13 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 14 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto_if_ge VAR_BIRCH_LAB_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 15 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 16 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 17 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos::
# 18 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	checkplayergender
# 19 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 20 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	@ Odd that the MaysHouse equivalent was used below instead
# 21 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_MaysHouse_2F_EventScript_Ret
# 22 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 23 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 24 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 25 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 26 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret::
# 27 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 28 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 29 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan::
# 30 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	checkplayergender
# 31 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 32 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 33 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 34 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan::
# 35 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 36 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 37 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 38 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp:
# 39 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 40 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.2byte 0
# 41 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 42 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor::
# 43 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	checkplayergender
# 44 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SecretBase_EventScript_InitDecorations
# 45 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 46 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 47 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall::
# 48 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	lockall
# 49 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 2, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 50 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 51 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 52 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 53 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 54 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan::
# 55 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay 10
# 56 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 57 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 58 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 59 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 60 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 61 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 62 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 63 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay 10
# 65 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 66 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 67 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 68 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 69 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 70 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 71 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 72 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 73 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 74 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 75 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 76 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 77 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 78 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 79 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth::
# 80 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 81 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 83 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 84 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 85 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 86 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 87 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 88 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 89 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 90 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 91 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth::
# 92 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 93 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 94 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 95 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 96 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 97 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 98 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 99 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 100 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 102 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 103 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest::
# 104 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 105 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 107 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 108 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 109 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 110 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 111 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 112 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 114 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 115 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast::
# 116 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 117 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 119 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 120 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 121 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 122 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 123 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 124 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	return
# 125 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 126 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters:
# 127 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_down
# 128 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_down
# 129 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 130 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 131 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 132 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth:
# 133 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 134 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 135 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_down
# 136 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_down
# 137 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 138 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 139 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 140 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth:
# 141 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_up
# 142 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_up
# 143 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_up
# 144 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 145 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 146 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 147 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 148 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 150 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 151 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth:
# 152 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 153 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 154 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 155 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 156 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 157 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 158 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 159 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 160 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 161 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth:
# 162 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 163 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 164 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 165 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 166 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 167 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth:
# 168 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_up
# 169 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 170 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 171 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 172 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 173 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 174 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 175 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 176 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth:
# 177 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 178 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 179 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 180 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 181 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 182 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 183 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 184 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest:
# 185 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 186 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 187 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_down
# 188 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 189 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 190 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 191 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest:
# 192 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_up
# 193 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_up
# 194 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 195 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 196 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 197 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 198 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 199 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 200 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 201 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 202 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest:
# 203 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_8
# 204 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 205 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 206 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 207 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 208 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 209 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 210 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 211 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast:
# 212 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 213 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 216 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 217 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_down
# 218 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 219 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 220 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast:
# 221 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_up
# 222 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 223 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_left
# 224 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_up
# 225 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 226 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 227 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 228 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast:
# 229 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 230 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	delay_16
# 231 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	walk_in_place_faster_left
# 232 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	step_end
# 233 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 234 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC::
# 235 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	lockall
# 236 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	checkplayergender
# 237 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 238 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 239 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC::
# 240 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 241 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 242 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 243 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 244 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 245 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 246 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 247 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 248 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 249 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC::
# 250 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_BRENDANS_HOUSE
# 251 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 252 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 253 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 254 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 255 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 256 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC::
# 257 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 258 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 259 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 260 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 261 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook::
# 262 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 263 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 264 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 265 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube::
# 266 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 267 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	end
# 268 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 269 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped:
# 270 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 271 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 272 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 273 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom:
# 274 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "MOM: {PLAYER}, how do you like your\n"
# 275 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "new room?\p"
# 276 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 277 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 278 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 279 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "POKéMON movers are so convenient!\p"
# 280 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 281 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 282 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 283 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook:
# 284 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 285 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 1\n"
# 286 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "Open the MENU with START.\p"
# 287 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "ADVENTURE RULE NO. 2\n"
# 288 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "Record your progress with SAVE.\p"
# 289 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 290 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 291 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap:
# 292 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 293 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "HOENN region map.$"
# 294 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"

# 295 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube:
# 296 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 297 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 298 "data/maps/CenterTown_PlayersHouse_2F/scripts.pory"
	.string "serve as the Controller.$"
