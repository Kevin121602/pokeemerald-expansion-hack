LittlerootTown_MaysHouse_1F_MapScripts::
	.byte 0


LittlerootTown_MaysHouse_1F_EventScript_HeartScales::
# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HEART_SCALE, LittlerootTown_MaysHouse_1F_EventScript_HeartScales_2
LittlerootTown_MaysHouse_1F_EventScript_HeartScales_1:
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_HeartScales_Text_2
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_MaysHouse_1F_EventScript_HeartScales_2:
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_HeartScales_5
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_HeartScales_Text_1
LittlerootTown_MaysHouse_1F_EventScript_HeartScales_4:
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_HEART_SCALE
	goto LittlerootTown_MaysHouse_1F_EventScript_HeartScales_1

LittlerootTown_MaysHouse_1F_EventScript_HeartScales_5:
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox LittlerootTown_MaysHouse_1F_EventScript_HeartScales_Text_0
	goto LittlerootTown_MaysHouse_1F_EventScript_HeartScales_4


# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ .set LOCALID_PLAYERS_HOUSE_1F_MOM, 1
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@LittlerootTown_MaysHouse_1F_MapScripts::
# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	@map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	@map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	@map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	@.byte 0
# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 2, 4
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 6, 5
# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 1, 8
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 1, 1
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about Pokémon\n"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pokémon to notice that you came\l"
# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with Pokémon.\p"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm MAY.\n"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with Pokémon all over the world.\p"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild Pokémon!\p"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a Gym Leader's\l"
# 418 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's BRENDAN.\n"
# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a Pokémon?\p"
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild Pokémon.\p"
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 430 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own Pokémon?$"

LittlerootTown_MaysHouse_1F_EventScript_HeartScales_Text_0:
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh hi, {PLAYER}! {RIVAL} already\n"
	.string "left earlier, she left this as a gift for\l"
	.string "you.$"

LittlerootTown_MaysHouse_1F_EventScript_HeartScales_Text_1:
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh hi, {PLAYER}! {RIVAL} already\n"
	.string "left earlier, he left this as a gift for\l"
	.string "you.$"

LittlerootTown_MaysHouse_1F_EventScript_HeartScales_Text_2:
# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Heart Scales have a plethora of uses,\n"
	.string "you can spend them with the L menu!$"
