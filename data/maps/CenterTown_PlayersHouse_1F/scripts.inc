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
	giveitem ITEM_POKE_BALL, 99
# 58 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 59 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_1
# 60 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 61 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 62 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 63 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_2
# 64 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	givemon SPECIES_SPINDA, 5
# 65 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 66 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_3
# 67 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 68 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 69 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call NicknamePartyMon
# 70 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_4
# 71 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 72 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 73 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 74 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return


NicknamePartyMon::
# 78 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 79 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 80 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 81 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


CenterTown_PlayersHouse_1F_MomPokeballs::
# 86 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lock
# 87 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 88 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_0, MSGBOX_YESNO
# 89 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 90 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CenterTown_PlayersHouse_1F_MomPokeballs_2
CenterTown_PlayersHouse_1F_MomPokeballs_1:
# 93 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_1
# 94 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return

CenterTown_PlayersHouse_1F_MomPokeballs_2:
# 91 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 99
	goto CenterTown_PlayersHouse_1F_MomPokeballs_1


# 99 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 100 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 101 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 102 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 103 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 104 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
CenterTown_PlayersHouse_1F_MapScripts::
# 105 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 106 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 107 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 108 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 109 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 110 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 111 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 112 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 113 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 114 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 115 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 116 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 117 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 118 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 119 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 120 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 121 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 122 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 123 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 124 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 125 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 126 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 127 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 128 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 129 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 130 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 131 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 132 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 133 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 134 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 135 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 136 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 137 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 138 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 139 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 140 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 141 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 142 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 143 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 144 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 145 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 146 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte 0
# 147 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 148 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 149 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 150 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 151 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 152 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 153 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 154 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 155 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	warp MAP_CENTER_TOWN_PLAYERS_HOUSE_2F, 7, 1
# 156 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitstate
# 157 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 158 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 159 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 160 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 161 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 162 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 163 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 164 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 165 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 166 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 167 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 168 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 169 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 170 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 171 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 172 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 173 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 174 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 175 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 176 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 177 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 178 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 179 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 180 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 181 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 182 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 183 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 184 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 185 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 186 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 187 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 188 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 189 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 190 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 191 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 192 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 193 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 194 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 195 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 196 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 197 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 198 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 199 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 200 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 201 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 202 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 203 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 204 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 205 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 206 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 207 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 208 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 210 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 211 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 212 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 213 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 214 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 215 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 216 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 217 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 218 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 219 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 220 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 221 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 222 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 223 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 224 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 225 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 226 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 227 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 228 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 229 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 230 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 231 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 232 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 233 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 10
# 234 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 235 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 236 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 237 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 238 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 239 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 240 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 241 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 242 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 243 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 244 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 245 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 246 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 247 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 248 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 249 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 250 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 251 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 252 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 253 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 254 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 255 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 256 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 257 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 258 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 259 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 260 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 261 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 262 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 263 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 264 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 265 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 266 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 267 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 268 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 269 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 270 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 271 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 272 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 273 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 274 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 275 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 276 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 277 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 278 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 279 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 280 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 281 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 282 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 283 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 284 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 285 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 286 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 287 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 288 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 289 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 290 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 291 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 292 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 293 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 294 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 295 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 296 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 297 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 298 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 299 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 300 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 301 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 302 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 303 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 304 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 305 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 306 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 309 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 310 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 311 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 312 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 313 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 314 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 315 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 316 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 317 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 318 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 319 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 320 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 321 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 322 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 323 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 324 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 325 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 326 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 327 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 328 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 329 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 330 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 331 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 332 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 333 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 334 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 335 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 336 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 337 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 338 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 339 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 340 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 341 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 342 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 343 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 344 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 345 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 346 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 347 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 348 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 349 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 350 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 351 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 352 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 353 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 354 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 355 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 356 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 357 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
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
	walk_in_place_faster_left
# 364 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 365 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 366 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 367 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 368 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 369 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 370 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 371 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 372 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 373 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 374 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 375 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 376 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 377 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 378 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 379 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 380 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 381 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 382 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 383 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 384 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 385 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 386 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 387 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 388 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "our move here.\l"
# 389 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 390 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 391 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 392 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 393 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 394 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "very own room?$"
# 395 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 396 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 397 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 398 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 399 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 400 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 401 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 402 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 403 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 404 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 405 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 406 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 407 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 408 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 409 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 410 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 411 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Too bad.$"
# 412 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 413 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 414 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 415 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 416 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 417 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 418 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 419 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 420 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 421 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 422 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 423 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 424 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 425 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 426 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 427 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 428 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 429 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 430 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 431 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 432 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 433 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 434 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 435 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 436 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 437 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 438 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 439 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 440 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 441 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 442 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 443 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 444 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 445 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 446 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 447 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 448 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "your mom?\p"
# 449 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "… … …$"
# 450 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 451 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 452 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 453 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 454 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 455 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 456 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 457 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 458 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 459 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 460 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 461 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 462 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 463 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 464 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 465 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 466 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 467 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 468 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 469 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Better get going!$"
# 470 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 471 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 472 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 473 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 474 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 475 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 476 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 477 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "the road running!”$"
# 478 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 479 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 480 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 481 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 482 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 483 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 484 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 485 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 486 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 487 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 488 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 489 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 490 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 491 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 492 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 493 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 494 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 495 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 496 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 497 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 498 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 499 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 500 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 501 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 502 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 503 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 504 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 505 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 506 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 507 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 508 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 509 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 510 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 511 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "news flash!\p"
# 512 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 513 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 514 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 515 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 516 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 517 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 518 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "movie program.$"
# 519 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 520 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 521 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 522 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 523 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 524 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 525 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 526 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 527 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

CenterTown_PlayersHouse_1F_MomItems_Text_0:
# 55 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Good luck, {PLAYER}! You'll need\n"
	.string "these items before you go.$"

CenterTown_PlayersHouse_1F_MomItems_Text_1:
# 59 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
	.string "Running Shoes!$"

CenterTown_PlayersHouse_1F_MomItems_Text_2:
# 63 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Here, take this Pokémon with you, it's\n"
	.string "the mascot of this island!$"

CenterTown_PlayersHouse_1F_MomItems_Text_3:
# 66 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER} recieved Spinda!$"

CenterTown_PlayersHouse_1F_MomItems_Text_4:
# 70 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Our next door neighbours have a gift\n"
	.string "for you, pay them a visit before you\l"
	.string "leave. Come back home if you need any\l"
	.string "more Pokéballs or money, and stop by\l"
	.string "Professor Birch's lab if you have any\l"
	.string "questions!$"

NicknamePartyMon_Text_0:
# 78 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Give this Pokémon a nickname?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_0:
# 88 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Do you need more Pokéballs?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_1:
# 93 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Good luck, dear!$"
