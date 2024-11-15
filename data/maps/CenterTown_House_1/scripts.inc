CenterTownHouse1_MapScripts::
	.byte 0


CenterTown_House_1_HeartScales::
# 4 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 5 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HEART_SCALES, CenterTown_House_1_HeartScales_2
CenterTown_House_1_HeartScales_1:
# 10 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox CenterTown_House_1_HeartScales_Text_1
# 11 "data/maps/CenterTown_House_1/scripts.pory"
	release
	return

CenterTown_House_1_HeartScales_2:
# 6 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox CenterTown_House_1_HeartScales_Text_0
# 7 "data/maps/CenterTown_House_1/scripts.pory"
	giveitem ITEM_HEART_SCALE, 2
# 8 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_RECEIVED_HEART_SCALES
	goto CenterTown_House_1_HeartScales_1


# 14 "data/maps/CenterTown_House_1/scripts.pory"

# 15 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_MOM, 1
# 16 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 17 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_RIVAL, 7
# 18 "data/maps/CenterTown_House_1/scripts.pory"

# 19 "data/maps/CenterTown_House_1/scripts.pory"
CenterTown_House_1_MapScripts::
# 20 "data/maps/CenterTown_House_1/scripts.pory"
	.byte 0
# 21 "data/maps/CenterTown_House_1/scripts.pory"

# 22 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 23 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 24 "data/maps/CenterTown_House_1/scripts.pory"

# 25 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 26 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 27 "data/maps/CenterTown_House_1/scripts.pory"

# 28 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 29 "data/maps/CenterTown_House_1/scripts.pory"
	checkplayergender
# 30 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 31 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 32 "data/maps/CenterTown_House_1/scripts.pory"

# 33 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 34 "data/maps/CenterTown_House_1/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 35 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 36 "data/maps/CenterTown_House_1/scripts.pory"

# 37 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 38 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 39 "data/maps/CenterTown_House_1/scripts.pory"

# 40 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 41 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 42 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 43 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 44 "data/maps/CenterTown_House_1/scripts.pory"

# 45 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 46 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 47 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 49 "data/maps/CenterTown_House_1/scripts.pory"

# 50 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 51 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 52 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 53 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 54 "data/maps/CenterTown_House_1/scripts.pory"

# 55 "data/maps/CenterTown_House_1/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 56 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 57 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 58 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 59 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 60 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 61 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 62 "data/maps/CenterTown_House_1/scripts.pory"
	.2byte 0
# 63 "data/maps/CenterTown_House_1/scripts.pory"

# 64 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 65 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 66 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 67 "data/maps/CenterTown_House_1/scripts.pory"
	closemessage
# 68 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 69 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 70 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 71 "data/maps/CenterTown_House_1/scripts.pory"
	waitstate
# 72 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 73 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 74 "data/maps/CenterTown_House_1/scripts.pory"

# 75 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 76 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 77 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 78 "data/maps/CenterTown_House_1/scripts.pory"

# 79 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 80 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 81 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 82 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 83 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 84 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 85 "data/maps/CenterTown_House_1/scripts.pory"

# 86 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 87 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 88 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 89 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 90 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 91 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 92 "data/maps/CenterTown_House_1/scripts.pory"

# 93 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 94 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 95 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_PIN
# 96 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 97 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 98 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 99 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 100 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 101 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 102 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 103 "data/maps/CenterTown_House_1/scripts.pory"
	special GetRivalSonDaughterString
# 104 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 105 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 106 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 107 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 108 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 109 "data/maps/CenterTown_House_1/scripts.pory"

# 110 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 111 "data/maps/CenterTown_House_1/scripts.pory"
	walk_down
# 112 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 113 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 114 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 115 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 116 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 117 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 118 "data/maps/CenterTown_House_1/scripts.pory"

# 119 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 120 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 121 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 122 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 123 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 124 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 125 "data/maps/CenterTown_House_1/scripts.pory"
	special GetRivalSonDaughterString
# 126 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 127 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 128 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 129 "data/maps/CenterTown_House_1/scripts.pory"

# 130 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 131 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 132 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 133 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 134 "data/maps/CenterTown_House_1/scripts.pory"

# 135 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 136 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 137 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 138 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 139 "data/maps/CenterTown_House_1/scripts.pory"

# 140 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 141 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 142 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 143 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 144 "data/maps/CenterTown_House_1/scripts.pory"

# 145 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 146 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 147 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 148 "data/maps/CenterTown_House_1/scripts.pory"
	special GetPlayerBigGuyGirlString
# 149 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 150 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 151 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 152 "data/maps/CenterTown_House_1/scripts.pory"

# 153 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 154 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 155 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 156 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 157 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 158 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 159 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 160 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 161 "data/maps/CenterTown_House_1/scripts.pory"

# 162 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 163 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 164 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 0
# 165 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 166 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 167 "data/maps/CenterTown_House_1/scripts.pory"

# 168 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 169 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 170 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 1
# 171 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 172 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 173 "data/maps/CenterTown_House_1/scripts.pory"

# 174 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 175 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 176 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 2
# 177 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 178 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 179 "data/maps/CenterTown_House_1/scripts.pory"

# 180 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 181 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_EXIT
# 182 "data/maps/CenterTown_House_1/scripts.pory"
	delay 10
# 183 "data/maps/CenterTown_House_1/scripts.pory"
	addobject LOCALID_RIVAL
# 184 "data/maps/CenterTown_House_1/scripts.pory"
	delay 30
# 185 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_PIN
# 186 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 187 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 188 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 189 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 190 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 191 "data/maps/CenterTown_House_1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 192 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 193 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 194 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 195 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 196 "data/maps/CenterTown_House_1/scripts.pory"
	closemessage
# 197 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 198 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 199 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 200 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_EXIT
# 201 "data/maps/CenterTown_House_1/scripts.pory"
	removeobject LOCALID_RIVAL
# 202 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 203 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 204 "data/maps/CenterTown_House_1/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 205 "data/maps/CenterTown_House_1/scripts.pory"
	delay 30
# 206 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 207 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 208 "data/maps/CenterTown_House_1/scripts.pory"
	savebgm MUS_DUMMY
# 209 "data/maps/CenterTown_House_1/scripts.pory"
	fadedefaultbgm
# 210 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 211 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 212 "data/maps/CenterTown_House_1/scripts.pory"

# 213 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 214 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 215 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 216 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 217 "data/maps/CenterTown_House_1/scripts.pory"

# 218 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 219 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 220 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 221 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 222 "data/maps/CenterTown_House_1/scripts.pory"

# 223 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 224 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 225 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 226 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 227 "data/maps/CenterTown_House_1/scripts.pory"

# 228 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 229 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 230 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 231 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 232 "data/maps/CenterTown_House_1/scripts.pory"

# 233 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 234 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 235 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 236 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 237 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 238 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 239 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 240 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 241 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 242 "data/maps/CenterTown_House_1/scripts.pory"

# 243 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 244 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 245 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 246 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 247 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 248 "data/maps/CenterTown_House_1/scripts.pory"

# 249 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 250 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 251 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 252 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 253 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 254 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 255 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 256 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 257 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 258 "data/maps/CenterTown_House_1/scripts.pory"

# 259 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 260 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 261 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 262 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 263 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 264 "data/maps/CenterTown_House_1/scripts.pory"

# 265 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 266 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 267 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 268 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 269 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 270 "data/maps/CenterTown_House_1/scripts.pory"

# 271 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 272 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 273 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 274 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 275 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 276 "data/maps/CenterTown_House_1/scripts.pory"

# 277 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 278 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 279 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 280 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 281 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 282 "data/maps/CenterTown_House_1/scripts.pory"

# 283 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 284 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 285 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 286 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 287 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 288 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 289 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 290 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 291 "data/maps/CenterTown_House_1/scripts.pory"

# 292 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 293 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 294 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 295 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 296 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 297 "data/maps/CenterTown_House_1/scripts.pory"

# 298 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 299 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 300 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 301 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 302 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 303 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 304 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 305 "data/maps/CenterTown_House_1/scripts.pory"

# 306 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 307 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 308 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 309 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 310 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 311 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 312 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 313 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 314 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 315 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 316 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 317 "data/maps/CenterTown_House_1/scripts.pory"

# 318 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 319 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 320 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 321 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 322 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 323 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 324 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 325 "data/maps/CenterTown_House_1/scripts.pory"

# 326 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 327 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 328 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … … …\n"
# 329 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … … …\p"
# 330 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 331 "data/maps/CenterTown_House_1/scripts.pory"
	.string "neighbor! Hi!\p"
# 332 "data/maps/CenterTown_House_1/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 333 "data/maps/CenterTown_House_1/scripts.pory"
	.string "age as you.\p"
# 334 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 335 "data/maps/CenterTown_House_1/scripts.pory"
	.string "a new friend.\p"
# 336 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 337 "data/maps/CenterTown_House_1/scripts.pory"

# 338 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 339 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Like child, like father.\p"
# 340 "data/maps/CenterTown_House_1/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 341 "data/maps/CenterTown_House_1/scripts.pory"
	.string "as our child.\p"
# 342 "data/maps/CenterTown_House_1/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 343 "data/maps/CenterTown_House_1/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 344 "data/maps/CenterTown_House_1/scripts.pory"

# 345 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 346 "data/maps/CenterTown_House_1/scripts.pory"
	.string "That {RIVAL}!\p"
# 347 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I guess our child is too busy with\n"
# 348 "data/maps/CenterTown_House_1/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 349 "data/maps/CenterTown_House_1/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 350 "data/maps/CenterTown_House_1/scripts.pory"

# 351 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 352 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 353 "data/maps/CenterTown_House_1/scripts.pory"
	.string "just a little while ago.\p"
# 354 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Like father, like child.\n"
# 355 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 356 "data/maps/CenterTown_House_1/scripts.pory"

# 357 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 358 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 359 "data/maps/CenterTown_House_1/scripts.pory"
	.string "travel with POKéMON.\p"
# 360 "data/maps/CenterTown_House_1/scripts.pory"
	.string "But you should go home every so often\n"
# 361 "data/maps/CenterTown_House_1/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 362 "data/maps/CenterTown_House_1/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 363 "data/maps/CenterTown_House_1/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 364 "data/maps/CenterTown_House_1/scripts.pory"

# 365 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 366 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Huh?\n"
# 367 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Who… Who are you?\p"
# 368 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … …\n"
# 369 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … …\p"
# 370 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 371 "data/maps/CenterTown_House_1/scripts.pory"
	.string "So your move was today.\p"
# 372 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Um… I'm MAY.\n"
# 373 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Glad to meet you!\p"
# 374 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I…\n"
# 375 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 376 "data/maps/CenterTown_House_1/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 377 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 378 "data/maps/CenterTown_House_1/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 379 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 380 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 381 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 382 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 383 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Eheheh…\p"
# 384 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 385 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 386 "data/maps/CenterTown_House_1/scripts.pory"
	.string "some wild POKéMON!\p"
# 387 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 388 "data/maps/CenterTown_House_1/scripts.pory"

# 389 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 390 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Hey!\n"
# 391 "data/maps/CenterTown_House_1/scripts.pory"
	.string "You…\p"
# 392 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Who are you?\p"
# 393 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 394 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Moved in next door, right?\p"
# 395 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 396 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 397 "data/maps/CenterTown_House_1/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 398 "data/maps/CenterTown_House_1/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 399 "data/maps/CenterTown_House_1/scripts.pory"
	.string "My name's BRENDAN.\n"
# 400 "data/maps/CenterTown_House_1/scripts.pory"
	.string "So, hi, neighbor!\p"
# 401 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 402 "data/maps/CenterTown_House_1/scripts.pory"
	.string "a POKéMON?\p"
# 403 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 404 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 405 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 406 "data/maps/CenterTown_House_1/scripts.pory"
	.string "some wild POKéMON.\p"
# 407 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Some other time, okay?$"
# 408 "data/maps/CenterTown_House_1/scripts.pory"

# 409 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 410 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Hi, neighbor!\p"
# 411 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Do you already have your\n"
# 412 "data/maps/CenterTown_House_1/scripts.pory"
	.string "own POKéMON?$"

CenterTown_House_1_HeartScales_Text_0:
# 6 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I'm rooting for you, {PLAYER}, take\n"
	.string "these!$"

CenterTown_House_1_HeartScales_Text_1:
# 10 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Heart Scales have a plethora of uses,\n"
	.string "you can spend them with the L menu.$"
