CenterTownPlayersHouse1F_MapScripts::
	.byte 0


CenterTown_PlayersHouse_1F_MomItems0::
# 6 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lock
# 7 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMovement0
# 8 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 9 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto CenterTown_PlayersHouse_1F_MomItems
# 10 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end


CenterTown_PlayersHouse_1F_MomItems1::
# 15 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lock
# 16 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMovement1
# 17 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 18 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto CenterTown_PlayersHouse_1F_MomItems
# 19 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end


CenterTown_PlayersHouse_1F_MomItems2::
# 24 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lock
# 25 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement 1, MomMovement2
# 26 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto CenterTown_PlayersHouse_1F_MomItems
# 28 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
	end


# 32 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
MomMovement0:
# 33 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	face_up
# 34 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 34 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 34 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 35 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	face_right
# 36 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 39 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
MomMovement1:
# 40 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	face_up
# 41 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 41 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 42 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	face_right
# 43 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 43 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
	step_end

# 47 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
MomMovement2:
# 48 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	face_right
# 49 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 49 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 49 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 49 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 50 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	face_up
# 51 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 51 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

CenterTown_PlayersHouse_1F_MomItems::
# 55 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_0
# 56 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_RARE_CANDY, 999
# 57 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_FULL_RESTORE, 99
# 58 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_MASTER_BALL, 99
# 59 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_1
# 61 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 62 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 63 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 64 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_2
# 65 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	givemon SPECIES_SPINDA, 5
# 66 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_3
# 68 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 69 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 70 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call NicknamePartyMon
# 71 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_4
# 72 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 73 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 74 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 75 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return


NicknamePartyMon::
# 79 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 80 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 81 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 82 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


CenterTown_PlayersHouse_1F_MomPokeballs::
# 87 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lock
# 88 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 89 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_0
# 90 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_1
# 91 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 92 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	pokemart MomItems
# 93 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_2
# 94 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return


	.align 2
# 97 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
MomItems:
# 98 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 99 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 100 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 101 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 102 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte ITEM_MASTER_BALL
	.2byte ITEM_NONE

# 107 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 108 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 109 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 110 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 111 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 112 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
CenterTown_PlayersHouse_1F_MapScripts::
# 113 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 114 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 115 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 116 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 117 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 118 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 119 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 120 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 121 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 122 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 123 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 124 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 125 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 126 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 127 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 128 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 129 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 130 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 131 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 132 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 133 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 134 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 135 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 136 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 137 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 138 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 139 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 140 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 141 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 142 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 143 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 144 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 145 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 146 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 147 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 148 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 149 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 150 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 151 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 152 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 153 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 154 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte 0
# 155 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 156 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 157 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 158 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 159 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 160 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 161 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 162 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 163 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	warp MAP_CENTER_TOWN_PLAYERS_HOUSE_2F, 7, 1
# 164 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitstate
# 165 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 166 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 167 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 168 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 169 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 170 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 171 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 172 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 173 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 174 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 175 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 176 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 177 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 178 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 179 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 180 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 181 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 182 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 183 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 184 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 185 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 186 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 187 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 188 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 189 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 190 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 192 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 193 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 194 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 195 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 197 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 198 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 199 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 200 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 201 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 202 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 203 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 204 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 205 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 206 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 207 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 208 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 209 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 210 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 211 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 212 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 213 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 214 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 215 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 216 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 217 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 218 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 219 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 220 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 221 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 222 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 223 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 224 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 225 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 226 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 227 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 228 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 229 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 230 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 231 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 232 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 233 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 234 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 235 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 236 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 237 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 238 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 239 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 240 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 241 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 10
# 242 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 243 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 244 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 245 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 246 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 247 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 248 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 249 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 250 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 251 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 252 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 253 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 254 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 255 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 256 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 257 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 258 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 259 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 260 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 261 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 262 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 263 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 264 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 265 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 266 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 267 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 268 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 269 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 270 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 271 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 272 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 273 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 274 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 275 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 276 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 277 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 278 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 279 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 280 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 281 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 282 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 283 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 284 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 285 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 286 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 287 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 288 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 289 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 290 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 291 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 292 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 293 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 294 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 295 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 296 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 297 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 298 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 299 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 301 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 302 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 303 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 304 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 305 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 306 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 307 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 308 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 309 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 310 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 311 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 312 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 313 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 314 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 315 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 316 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 317 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 318 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 319 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 320 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 321 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 322 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 323 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 324 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 325 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 326 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 327 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 328 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 329 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 330 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 331 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 332 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 333 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 334 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 335 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 336 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 337 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 338 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 339 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 340 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 341 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 342 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 343 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 344 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 345 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 346 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 347 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 348 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 349 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 350 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 351 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 352 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 353 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 354 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 355 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 356 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 357 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 358 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 359 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 360 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 362 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 363 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 364 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 365 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 366 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 367 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 368 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 369 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 370 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 371 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 372 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 373 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 374 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 375 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 376 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 377 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 378 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 379 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 380 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 381 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 382 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 383 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 384 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 385 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 386 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 387 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 388 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 389 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 390 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 391 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 392 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 393 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 394 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 395 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 396 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "our move here.\l"
# 397 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 398 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 399 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 400 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 401 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 402 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "very own room?$"
# 403 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 404 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 405 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 406 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 407 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 408 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 409 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 410 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 411 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 412 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 413 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 414 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 415 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 416 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 417 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 418 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 419 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Too bad.$"
# 420 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 421 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 422 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 423 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 424 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 425 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 426 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 427 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 428 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 429 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 430 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 431 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 432 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 433 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 434 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 435 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 436 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 437 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 438 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 439 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 440 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 441 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 442 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 443 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 444 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 445 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 446 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 447 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 448 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 449 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 450 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 451 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 452 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 453 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 454 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 455 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 456 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "your mom?\p"
# 457 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "… … …$"
# 458 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 459 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 460 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 461 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 462 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 463 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 464 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 465 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 466 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 467 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 468 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 469 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 470 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 471 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 472 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 473 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 474 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 475 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 476 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 477 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Better get going!$"
# 478 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 479 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 480 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 481 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 482 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 483 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 484 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 485 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "the road running!”$"
# 486 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 487 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 488 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 489 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 490 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 491 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 492 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 493 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 494 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 495 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 496 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 497 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 498 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 499 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 500 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 501 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 502 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 503 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 504 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 505 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 506 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 507 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 508 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 509 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 510 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 511 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 512 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 513 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 514 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 515 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 516 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 517 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 518 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 519 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "news flash!\p"
# 520 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 521 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 522 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 523 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 524 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 525 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 526 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "movie program.$"
# 527 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 528 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 529 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 530 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 531 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 532 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 533 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 534 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 535 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

CenterTown_PlayersHouse_1F_MomItems_Text_0:
# 55 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Good luck, {PLAYER}! You'll need\n"
	.string "these items before you go.$"

CenterTown_PlayersHouse_1F_MomItems_Text_1:
# 60 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "Running Shoes!$"

CenterTown_PlayersHouse_1F_MomItems_Text_2:
# 64 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Here, take this Pokémon with you, it's\n"
	.string "the mascot of this island!$"

CenterTown_PlayersHouse_1F_MomItems_Text_3:
# 67 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER} recieved Spinda!$"

CenterTown_PlayersHouse_1F_MomItems_Text_4:
# 71 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Our next door neighbours have a gift\n"
	.string "for you, pay them a visit before you\l"
	.string "leave. Come back home if you need any\l"
	.string "more Pokéballs or money, and stop by\l"
	.string "Professor Birch's lab if you have any\l"
	.string "questions!$"

NicknamePartyMon_Text_0:
# 79 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Give this Pokémon a nickname?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_0:
# 89 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Here's some more money, {PLAYER}!$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_1:
# 90 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Do you need more Pokéballs?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_2:
# 93 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Good luck, dear!$"
