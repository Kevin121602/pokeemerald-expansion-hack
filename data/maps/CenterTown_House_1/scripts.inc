CenterTownHouse1_MapScripts::
	.byte 0


CenterTown_House_1_HeartScales::
# 4 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 5 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 6 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HEART_SCALES, CenterTown_House_1_HeartScales_2
CenterTown_House_1_HeartScales_1:
# 11 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox CenterTown_House_1_HeartScales_Text_1
# 12 "data/maps/CenterTown_House_1/scripts.pory"
	release
	return

CenterTown_House_1_HeartScales_2:
# 7 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox CenterTown_House_1_HeartScales_Text_0
# 8 "data/maps/CenterTown_House_1/scripts.pory"
	giveitem ITEM_HEART_SCALE, 2
# 9 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_RECEIVED_HEART_SCALES
	goto CenterTown_House_1_HeartScales_1


CenterTown_House_1_Test::
# 16 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 17 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 18 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_DISABLE_EXP, CenterTown_House_1_Test_2
CenterTown_House_1_Test_1:
# 21 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_unset FLAG_DISABLE_EXP, CenterTown_House_1_Test_5
CenterTown_House_1_Test_4:
# 24 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_UNUSED_0x021, CenterTown_House_1_Test_8
CenterTown_House_1_Test_7:
# 28 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, CenterTown_House_1_Test_11
CenterTown_House_1_Test_10:
# 32 "data/maps/CenterTown_House_1/scripts.pory"
	release
	return

CenterTown_House_1_Test_2:
# 19 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_UNUSED_0x021
	goto CenterTown_House_1_Test_1

CenterTown_House_1_Test_5:
# 22 "data/maps/CenterTown_House_1/scripts.pory"
	clearflag FLAG_UNUSED_0x021
	goto CenterTown_House_1_Test_4

CenterTown_House_1_Test_8:
# 25 "data/maps/CenterTown_House_1/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 26 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox CenterTown_House_1_Test_Text_0
	goto CenterTown_House_1_Test_7

CenterTown_House_1_Test_11:
# 29 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 30 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox CenterTown_House_1_Test_Text_1
	goto CenterTown_House_1_Test_10


# 36 "data/maps/CenterTown_House_1/scripts.pory"

# 37 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_MOM, 1
# 38 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 39 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_RIVAL, 7
# 40 "data/maps/CenterTown_House_1/scripts.pory"

# 41 "data/maps/CenterTown_House_1/scripts.pory"
CenterTown_House_1_MapScripts::
# 42 "data/maps/CenterTown_House_1/scripts.pory"
	.byte 0
# 43 "data/maps/CenterTown_House_1/scripts.pory"

# 44 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 45 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 46 "data/maps/CenterTown_House_1/scripts.pory"

# 47 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 48 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 49 "data/maps/CenterTown_House_1/scripts.pory"

# 50 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 51 "data/maps/CenterTown_House_1/scripts.pory"
	checkplayergender
# 52 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 53 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 54 "data/maps/CenterTown_House_1/scripts.pory"

# 55 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 56 "data/maps/CenterTown_House_1/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 57 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 58 "data/maps/CenterTown_House_1/scripts.pory"

# 59 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 60 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 61 "data/maps/CenterTown_House_1/scripts.pory"

# 62 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 63 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 64 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 65 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 66 "data/maps/CenterTown_House_1/scripts.pory"

# 67 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 68 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 69 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 70 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 71 "data/maps/CenterTown_House_1/scripts.pory"

# 72 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 73 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 74 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 75 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 76 "data/maps/CenterTown_House_1/scripts.pory"

# 77 "data/maps/CenterTown_House_1/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 78 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 79 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 80 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 81 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 82 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 83 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 84 "data/maps/CenterTown_House_1/scripts.pory"
	.2byte 0
# 85 "data/maps/CenterTown_House_1/scripts.pory"

# 86 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 87 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 88 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 89 "data/maps/CenterTown_House_1/scripts.pory"
	closemessage
# 90 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 91 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 92 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 93 "data/maps/CenterTown_House_1/scripts.pory"
	waitstate
# 94 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 95 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 96 "data/maps/CenterTown_House_1/scripts.pory"

# 97 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 98 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 99 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 100 "data/maps/CenterTown_House_1/scripts.pory"

# 101 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 102 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 103 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 104 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 105 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 106 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 107 "data/maps/CenterTown_House_1/scripts.pory"

# 108 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 109 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 110 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 111 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 112 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 113 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 114 "data/maps/CenterTown_House_1/scripts.pory"

# 115 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 116 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 117 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_PIN
# 118 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 119 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 120 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 121 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 122 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 124 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 125 "data/maps/CenterTown_House_1/scripts.pory"
	special GetRivalSonDaughterString
# 126 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 127 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 128 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 129 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 130 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 131 "data/maps/CenterTown_House_1/scripts.pory"

# 132 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 133 "data/maps/CenterTown_House_1/scripts.pory"
	walk_down
# 134 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 135 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 136 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 137 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 138 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 139 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 140 "data/maps/CenterTown_House_1/scripts.pory"

# 141 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 142 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 143 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 144 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 145 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 146 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 147 "data/maps/CenterTown_House_1/scripts.pory"
	special GetRivalSonDaughterString
# 148 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 149 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 150 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 151 "data/maps/CenterTown_House_1/scripts.pory"

# 152 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 153 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 154 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 155 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 156 "data/maps/CenterTown_House_1/scripts.pory"

# 157 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 158 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 159 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 160 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 161 "data/maps/CenterTown_House_1/scripts.pory"

# 162 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 163 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 164 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 165 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 166 "data/maps/CenterTown_House_1/scripts.pory"

# 167 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 168 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 169 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 170 "data/maps/CenterTown_House_1/scripts.pory"
	special GetPlayerBigGuyGirlString
# 171 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 172 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 173 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 174 "data/maps/CenterTown_House_1/scripts.pory"

# 175 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 176 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 177 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 178 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 179 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 180 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 181 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 182 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 183 "data/maps/CenterTown_House_1/scripts.pory"

# 184 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 185 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 186 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 0
# 187 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 188 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 189 "data/maps/CenterTown_House_1/scripts.pory"

# 190 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 191 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 192 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 1
# 193 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 194 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 195 "data/maps/CenterTown_House_1/scripts.pory"

# 196 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 197 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 198 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 2
# 199 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 200 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 201 "data/maps/CenterTown_House_1/scripts.pory"

# 202 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 203 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_EXIT
# 204 "data/maps/CenterTown_House_1/scripts.pory"
	delay 10
# 205 "data/maps/CenterTown_House_1/scripts.pory"
	addobject LOCALID_RIVAL
# 206 "data/maps/CenterTown_House_1/scripts.pory"
	delay 30
# 207 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_PIN
# 208 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 209 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 210 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 211 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 212 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 213 "data/maps/CenterTown_House_1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 214 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 215 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 216 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 217 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 218 "data/maps/CenterTown_House_1/scripts.pory"
	closemessage
# 219 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 220 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 221 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 222 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_EXIT
# 223 "data/maps/CenterTown_House_1/scripts.pory"
	removeobject LOCALID_RIVAL
# 224 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 225 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 226 "data/maps/CenterTown_House_1/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 227 "data/maps/CenterTown_House_1/scripts.pory"
	delay 30
# 228 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 229 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 230 "data/maps/CenterTown_House_1/scripts.pory"
	savebgm MUS_DUMMY
# 231 "data/maps/CenterTown_House_1/scripts.pory"
	fadedefaultbgm
# 232 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 233 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 234 "data/maps/CenterTown_House_1/scripts.pory"

# 235 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 236 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 237 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 238 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 239 "data/maps/CenterTown_House_1/scripts.pory"

# 240 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 241 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 242 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 243 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 244 "data/maps/CenterTown_House_1/scripts.pory"

# 245 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 246 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 247 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 248 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 249 "data/maps/CenterTown_House_1/scripts.pory"

# 250 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 251 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 252 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 253 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 254 "data/maps/CenterTown_House_1/scripts.pory"

# 255 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 256 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 257 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 258 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 259 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 260 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 261 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 262 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 263 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 264 "data/maps/CenterTown_House_1/scripts.pory"

# 265 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 266 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 267 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 268 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 269 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 270 "data/maps/CenterTown_House_1/scripts.pory"

# 271 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 272 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 273 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 274 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 275 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 276 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 277 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 278 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 279 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 280 "data/maps/CenterTown_House_1/scripts.pory"

# 281 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 282 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 283 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 284 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 285 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 286 "data/maps/CenterTown_House_1/scripts.pory"

# 287 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 288 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 289 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 290 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 291 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 292 "data/maps/CenterTown_House_1/scripts.pory"

# 293 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 294 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 295 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 296 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 297 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 298 "data/maps/CenterTown_House_1/scripts.pory"

# 299 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 300 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 301 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 302 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 303 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 304 "data/maps/CenterTown_House_1/scripts.pory"

# 305 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 306 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 307 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 308 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 309 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 310 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 311 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 312 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 313 "data/maps/CenterTown_House_1/scripts.pory"

# 314 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 315 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 316 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 317 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 318 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 319 "data/maps/CenterTown_House_1/scripts.pory"

# 320 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 321 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 322 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 323 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 324 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 325 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 326 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 327 "data/maps/CenterTown_House_1/scripts.pory"

# 328 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 329 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 330 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 331 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 332 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 333 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 334 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 335 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 336 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 337 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 338 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 339 "data/maps/CenterTown_House_1/scripts.pory"

# 340 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 341 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 342 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 343 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 344 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 345 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 346 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 347 "data/maps/CenterTown_House_1/scripts.pory"

# 348 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 349 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 350 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … … …\n"
# 351 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … … …\p"
# 352 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 353 "data/maps/CenterTown_House_1/scripts.pory"
	.string "neighbor! Hi!\p"
# 354 "data/maps/CenterTown_House_1/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 355 "data/maps/CenterTown_House_1/scripts.pory"
	.string "age as you.\p"
# 356 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 357 "data/maps/CenterTown_House_1/scripts.pory"
	.string "a new friend.\p"
# 358 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 359 "data/maps/CenterTown_House_1/scripts.pory"

# 360 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 361 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Like child, like father.\p"
# 362 "data/maps/CenterTown_House_1/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 363 "data/maps/CenterTown_House_1/scripts.pory"
	.string "as our child.\p"
# 364 "data/maps/CenterTown_House_1/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 365 "data/maps/CenterTown_House_1/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 366 "data/maps/CenterTown_House_1/scripts.pory"

# 367 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 368 "data/maps/CenterTown_House_1/scripts.pory"
	.string "That {RIVAL}!\p"
# 369 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I guess our child is too busy with\n"
# 370 "data/maps/CenterTown_House_1/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 371 "data/maps/CenterTown_House_1/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 372 "data/maps/CenterTown_House_1/scripts.pory"

# 373 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 374 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 375 "data/maps/CenterTown_House_1/scripts.pory"
	.string "just a little while ago.\p"
# 376 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Like father, like child.\n"
# 377 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 378 "data/maps/CenterTown_House_1/scripts.pory"

# 379 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 380 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 381 "data/maps/CenterTown_House_1/scripts.pory"
	.string "travel with POKéMON.\p"
# 382 "data/maps/CenterTown_House_1/scripts.pory"
	.string "But you should go home every so often\n"
# 383 "data/maps/CenterTown_House_1/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 384 "data/maps/CenterTown_House_1/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 385 "data/maps/CenterTown_House_1/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 386 "data/maps/CenterTown_House_1/scripts.pory"

# 387 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 388 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Huh?\n"
# 389 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Who… Who are you?\p"
# 390 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … …\n"
# 391 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … …\p"
# 392 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 393 "data/maps/CenterTown_House_1/scripts.pory"
	.string "So your move was today.\p"
# 394 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Um… I'm MAY.\n"
# 395 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Glad to meet you!\p"
# 396 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I…\n"
# 397 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 398 "data/maps/CenterTown_House_1/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 399 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 400 "data/maps/CenterTown_House_1/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 401 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 402 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 403 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 404 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 405 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Eheheh…\p"
# 406 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 407 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 408 "data/maps/CenterTown_House_1/scripts.pory"
	.string "some wild POKéMON!\p"
# 409 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 410 "data/maps/CenterTown_House_1/scripts.pory"

# 411 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 412 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Hey!\n"
# 413 "data/maps/CenterTown_House_1/scripts.pory"
	.string "You…\p"
# 414 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Who are you?\p"
# 415 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 416 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Moved in next door, right?\p"
# 417 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 418 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 419 "data/maps/CenterTown_House_1/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 420 "data/maps/CenterTown_House_1/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 421 "data/maps/CenterTown_House_1/scripts.pory"
	.string "My name's BRENDAN.\n"
# 422 "data/maps/CenterTown_House_1/scripts.pory"
	.string "So, hi, neighbor!\p"
# 423 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 424 "data/maps/CenterTown_House_1/scripts.pory"
	.string "a POKéMON?\p"
# 425 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 426 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 427 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 428 "data/maps/CenterTown_House_1/scripts.pory"
	.string "some wild POKéMON.\p"
# 429 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Some other time, okay?$"
# 430 "data/maps/CenterTown_House_1/scripts.pory"

# 431 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 432 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Hi, neighbor!\p"
# 433 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Do you already have your\n"
# 434 "data/maps/CenterTown_House_1/scripts.pory"
	.string "own POKéMON?$"

CenterTown_House_1_HeartScales_Text_0:
# 7 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I'm rooting for you, {PLAYER}, take\n"
	.string "these!$"

CenterTown_House_1_HeartScales_Text_1:
# 11 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Heart Scales have a plethora of uses,\n"
	.string "you can spend them with the L menu.$"

CenterTown_House_1_Test_Text_0:
# 26 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Exp Enabled$"

CenterTown_House_1_Test_Text_1:
# 30 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Exp Disabled$"
