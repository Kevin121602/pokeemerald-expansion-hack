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


# 15 "data/maps/CenterTown_House_1/scripts.pory"

# 16 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_MOM, 1
# 17 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 18 "data/maps/CenterTown_House_1/scripts.pory"
.set LOCALID_RIVAL, 7
# 19 "data/maps/CenterTown_House_1/scripts.pory"

# 20 "data/maps/CenterTown_House_1/scripts.pory"
CenterTown_House_1_MapScripts::
# 21 "data/maps/CenterTown_House_1/scripts.pory"
	.byte 0
# 22 "data/maps/CenterTown_House_1/scripts.pory"

# 23 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad:
# 24 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 25 "data/maps/CenterTown_House_1/scripts.pory"

# 26 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes::
# 27 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 28 "data/maps/CenterTown_House_1/scripts.pory"

# 29 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual::
# 30 "data/maps/CenterTown_House_1/scripts.pory"
	checkplayergender
# 31 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 32 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 33 "data/maps/CenterTown_House_1/scripts.pory"

# 34 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual::
# 35 "data/maps/CenterTown_House_1/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 36 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 37 "data/maps/CenterTown_House_1/scripts.pory"

# 38 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition:
# 39 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 40 "data/maps/CenterTown_House_1/scripts.pory"

# 41 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs::
# 42 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 43 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 45 "data/maps/CenterTown_House_1/scripts.pory"

# 46 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV::
# 47 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 48 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 49 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 50 "data/maps/CenterTown_House_1/scripts.pory"

# 51 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor::
# 52 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 53 "data/maps/CenterTown_House_1/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 55 "data/maps/CenterTown_House_1/scripts.pory"

# 56 "data/maps/CenterTown_House_1/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 57 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame:
# 58 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 59 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 60 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 61 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 62 "data/maps/CenterTown_House_1/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 63 "data/maps/CenterTown_House_1/scripts.pory"
	.2byte 0
# 64 "data/maps/CenterTown_House_1/scripts.pory"

# 65 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock::
# 66 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 67 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 68 "data/maps/CenterTown_House_1/scripts.pory"
	closemessage
# 69 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 70 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 71 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 72 "data/maps/CenterTown_House_1/scripts.pory"
	waitstate
# 73 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 74 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 75 "data/maps/CenterTown_House_1/scripts.pory"

# 76 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs:
# 77 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 78 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 79 "data/maps/CenterTown_House_1/scripts.pory"

# 80 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn::
# 81 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 82 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 83 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 84 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 85 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 86 "data/maps/CenterTown_House_1/scripts.pory"

# 87 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport::
# 88 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 89 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 90 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 91 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 92 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 93 "data/maps/CenterTown_House_1/scripts.pory"

# 94 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor::
# 95 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 96 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_PIN
# 97 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 98 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 99 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 100 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 101 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 102 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 103 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 104 "data/maps/CenterTown_House_1/scripts.pory"
	special GetRivalSonDaughterString
# 105 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 106 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 107 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 108 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 109 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 110 "data/maps/CenterTown_House_1/scripts.pory"

# 111 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach:
# 112 "data/maps/CenterTown_House_1/scripts.pory"
	walk_down
# 113 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 114 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 115 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 116 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 117 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 118 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 119 "data/maps/CenterTown_House_1/scripts.pory"

# 120 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom::
# 121 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 122 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 123 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 124 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 125 "data/maps/CenterTown_House_1/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, RivalsHouse_1F_EventScript_RivalTooBusy
# 126 "data/maps/CenterTown_House_1/scripts.pory"
	special GetRivalSonDaughterString
# 127 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 128 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 129 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 130 "data/maps/CenterTown_House_1/scripts.pory"

# 131 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy::
# 132 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 133 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 134 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 135 "data/maps/CenterTown_House_1/scripts.pory"

# 136 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103::
# 137 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 138 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 139 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 140 "data/maps/CenterTown_House_1/scripts.pory"

# 141 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften::
# 142 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 143 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 144 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 145 "data/maps/CenterTown_House_1/scripts.pory"

# 146 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling::
# 147 "data/maps/CenterTown_House_1/scripts.pory"
	lock
# 148 "data/maps/CenterTown_House_1/scripts.pory"
	faceplayer
# 149 "data/maps/CenterTown_House_1/scripts.pory"
	special GetPlayerBigGuyGirlString
# 150 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 151 "data/maps/CenterTown_House_1/scripts.pory"
	release
# 152 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 153 "data/maps/CenterTown_House_1/scripts.pory"

# 154 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom::
# 155 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 156 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 157 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 158 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterRight
# 159 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 160 "data/maps/CenterTown_House_1/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 161 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 162 "data/maps/CenterTown_House_1/scripts.pory"

# 163 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0::
# 164 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 165 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 0
# 166 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 167 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 168 "data/maps/CenterTown_House_1/scripts.pory"

# 169 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1::
# 170 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 171 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 1
# 172 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 173 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 174 "data/maps/CenterTown_House_1/scripts.pory"

# 175 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2::
# 176 "data/maps/CenterTown_House_1/scripts.pory"
	lockall
# 177 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_0x8008, 2
# 178 "data/maps/CenterTown_House_1/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 179 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 180 "data/maps/CenterTown_House_1/scripts.pory"

# 181 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival::
# 182 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_EXIT
# 183 "data/maps/CenterTown_House_1/scripts.pory"
	delay 10
# 184 "data/maps/CenterTown_House_1/scripts.pory"
	addobject LOCALID_RIVAL
# 185 "data/maps/CenterTown_House_1/scripts.pory"
	delay 30
# 186 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_PIN
# 187 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 188 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 189 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 190 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 191 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 192 "data/maps/CenterTown_House_1/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 193 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 194 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 195 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 196 "data/maps/CenterTown_House_1/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 197 "data/maps/CenterTown_House_1/scripts.pory"
	closemessage
# 198 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 199 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 200 "data/maps/CenterTown_House_1/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 201 "data/maps/CenterTown_House_1/scripts.pory"
	playse SE_EXIT
# 202 "data/maps/CenterTown_House_1/scripts.pory"
	removeobject LOCALID_RIVAL
# 203 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 204 "data/maps/CenterTown_House_1/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 205 "data/maps/CenterTown_House_1/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 206 "data/maps/CenterTown_House_1/scripts.pory"
	delay 30
# 207 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 208 "data/maps/CenterTown_House_1/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 209 "data/maps/CenterTown_House_1/scripts.pory"
	savebgm MUS_DUMMY
# 210 "data/maps/CenterTown_House_1/scripts.pory"
	fadedefaultbgm
# 211 "data/maps/CenterTown_House_1/scripts.pory"
	releaseall
# 212 "data/maps/CenterTown_House_1/scripts.pory"
	end
# 213 "data/maps/CenterTown_House_1/scripts.pory"

# 214 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay::
# 215 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 216 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 217 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 218 "data/maps/CenterTown_House_1/scripts.pory"

# 219 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0::
# 220 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 221 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 222 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 223 "data/maps/CenterTown_House_1/scripts.pory"

# 224 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1::
# 225 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 226 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 227 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 228 "data/maps/CenterTown_House_1/scripts.pory"

# 229 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2::
# 230 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 231 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 232 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 233 "data/maps/CenterTown_House_1/scripts.pory"

# 234 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0:
# 235 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 236 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 237 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 239 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 240 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 241 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 242 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 243 "data/maps/CenterTown_House_1/scripts.pory"

# 244 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1:
# 245 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 246 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 247 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 248 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 249 "data/maps/CenterTown_House_1/scripts.pory"

# 250 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2:
# 251 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 252 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 253 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 254 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 255 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 256 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 257 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 258 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 259 "data/maps/CenterTown_House_1/scripts.pory"

# 260 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0::
# 261 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 262 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 263 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 264 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 265 "data/maps/CenterTown_House_1/scripts.pory"

# 266 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1::
# 267 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 268 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 269 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 270 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 271 "data/maps/CenterTown_House_1/scripts.pory"

# 272 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2::
# 273 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 274 "data/maps/CenterTown_House_1/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 275 "data/maps/CenterTown_House_1/scripts.pory"
	waitmovement 0
# 276 "data/maps/CenterTown_House_1/scripts.pory"
	return
# 277 "data/maps/CenterTown_House_1/scripts.pory"

# 278 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0:
# 279 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 280 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 281 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 282 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 283 "data/maps/CenterTown_House_1/scripts.pory"

# 284 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1:
# 285 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 286 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 287 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 288 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 289 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 290 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 291 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 292 "data/maps/CenterTown_House_1/scripts.pory"

# 293 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2:
# 294 "data/maps/CenterTown_House_1/scripts.pory"
	delay_16
# 295 "data/maps/CenterTown_House_1/scripts.pory"
	delay_8
# 296 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 297 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 298 "data/maps/CenterTown_House_1/scripts.pory"

# 299 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0:
# 300 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 301 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 302 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 303 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 304 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 305 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 306 "data/maps/CenterTown_House_1/scripts.pory"

# 307 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1:
# 308 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_right
# 309 "data/maps/CenterTown_House_1/scripts.pory"
	walk_right
# 310 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 311 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 312 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 313 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 314 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 315 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 316 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 317 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 318 "data/maps/CenterTown_House_1/scripts.pory"

# 319 "data/maps/CenterTown_House_1/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2:
# 320 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_left
# 321 "data/maps/CenterTown_House_1/scripts.pory"
	walk_left
# 322 "data/maps/CenterTown_House_1/scripts.pory"
	walk_in_place_faster_up
# 323 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 324 "data/maps/CenterTown_House_1/scripts.pory"
	walk_up
# 325 "data/maps/CenterTown_House_1/scripts.pory"
	step_end
# 326 "data/maps/CenterTown_House_1/scripts.pory"

# 327 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor:
# 328 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 329 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … … …\n"
# 330 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … … …\p"
# 331 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 332 "data/maps/CenterTown_House_1/scripts.pory"
	.string "neighbor! Hi!\p"
# 333 "data/maps/CenterTown_House_1/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 334 "data/maps/CenterTown_House_1/scripts.pory"
	.string "age as you.\p"
# 335 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 336 "data/maps/CenterTown_House_1/scripts.pory"
	.string "a new friend.\p"
# 337 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 338 "data/maps/CenterTown_House_1/scripts.pory"

# 339 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather:
# 340 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Like child, like father.\p"
# 341 "data/maps/CenterTown_House_1/scripts.pory"
	.string "My husband is as wild about POKéMON\n"
# 342 "data/maps/CenterTown_House_1/scripts.pory"
	.string "as our child.\p"
# 343 "data/maps/CenterTown_House_1/scripts.pory"
	.string "If he's not at his LAB, he's likely\n"
# 344 "data/maps/CenterTown_House_1/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 345 "data/maps/CenterTown_House_1/scripts.pory"

# 346 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit:
# 347 "data/maps/CenterTown_House_1/scripts.pory"
	.string "That {RIVAL}!\p"
# 348 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I guess our child is too busy with\n"
# 349 "data/maps/CenterTown_House_1/scripts.pory"
	.string "POKéMON to notice that you came\l"
# 350 "data/maps/CenterTown_House_1/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 351 "data/maps/CenterTown_House_1/scripts.pory"

# 352 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103:
# 353 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, {RIVAL} went out to ROUTE 103\n"
# 354 "data/maps/CenterTown_House_1/scripts.pory"
	.string "just a little while ago.\p"
# 355 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Like father, like child.\n"
# 356 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 357 "data/maps/CenterTown_House_1/scripts.pory"

# 358 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften:
# 359 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 360 "data/maps/CenterTown_House_1/scripts.pory"
	.string "travel with POKéMON.\p"
# 361 "data/maps/CenterTown_House_1/scripts.pory"
	.string "But you should go home every so often\n"
# 362 "data/maps/CenterTown_House_1/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 363 "data/maps/CenterTown_House_1/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 364 "data/maps/CenterTown_House_1/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 365 "data/maps/CenterTown_House_1/scripts.pory"

# 366 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou:
# 367 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Huh?\n"
# 368 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Who… Who are you?\p"
# 369 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … …\n"
# 370 "data/maps/CenterTown_House_1/scripts.pory"
	.string "… … … … … … … …\p"
# 371 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 372 "data/maps/CenterTown_House_1/scripts.pory"
	.string "So your move was today.\p"
# 373 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Um… I'm MAY.\n"
# 374 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Glad to meet you!\p"
# 375 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I…\n"
# 376 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 377 "data/maps/CenterTown_House_1/scripts.pory"
	.string "with POKéMON all over the world.\p"
# 378 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 379 "data/maps/CenterTown_House_1/scripts.pory"
	.string "my dad, PROF. BIRCH.\p"
# 380 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 381 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 382 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 383 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 384 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Eheheh…\p"
# 385 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 386 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 387 "data/maps/CenterTown_House_1/scripts.pory"
	.string "some wild POKéMON!\p"
# 388 "data/maps/CenterTown_House_1/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 389 "data/maps/CenterTown_House_1/scripts.pory"

# 390 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou:
# 391 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Hey!\n"
# 392 "data/maps/CenterTown_House_1/scripts.pory"
	.string "You…\p"
# 393 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Who are you?\p"
# 394 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 395 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Moved in next door, right?\p"
# 396 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 397 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Dad, PROF. BIRCH, said that our new\n"
# 398 "data/maps/CenterTown_House_1/scripts.pory"
	.string "next-door neighbor is a GYM LEADER's\l"
# 399 "data/maps/CenterTown_House_1/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 400 "data/maps/CenterTown_House_1/scripts.pory"
	.string "My name's BRENDAN.\n"
# 401 "data/maps/CenterTown_House_1/scripts.pory"
	.string "So, hi, neighbor!\p"
# 402 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 403 "data/maps/CenterTown_House_1/scripts.pory"
	.string "a POKéMON?\p"
# 404 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 405 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 406 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 407 "data/maps/CenterTown_House_1/scripts.pory"
	.string "some wild POKéMON.\p"
# 408 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Some other time, okay?$"
# 409 "data/maps/CenterTown_House_1/scripts.pory"

# 410 "data/maps/CenterTown_House_1/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon:
# 411 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Hi, neighbor!\p"
# 412 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Do you already have your\n"
# 413 "data/maps/CenterTown_House_1/scripts.pory"
	.string "own POKéMON?$"

CenterTown_House_1_HeartScales_Text_0:
# 7 "data/maps/CenterTown_House_1/scripts.pory"
	.string "I'm rooting for you, {PLAYER}, take\n"
	.string "these!$"

CenterTown_House_1_HeartScales_Text_1:
# 11 "data/maps/CenterTown_House_1/scripts.pory"
	.string "Heart Scales have a plethora of uses,\n"
	.string "you can spend them with the L menu.$"
