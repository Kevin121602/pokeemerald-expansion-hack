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
	playfanfare MUS_DP_OBTAIN_ITEM
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
	setmonmetlocation 0, 0xFF
# 66 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
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
	setrespawn HEAL_LOCATION_CENTER_TOWN
# 76 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return


NicknamePartyMon::
# 80 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 81 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 82 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 83 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


CenterTown_PlayersHouse_1F_MomPokeballs::
# 88 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lock
# 89 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 90 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_0, MSGBOX_YESNO
# 91 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 92 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CenterTown_PlayersHouse_1F_MomPokeballs_2
CenterTown_PlayersHouse_1F_MomPokeballs_1:
# 95 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_1
# 96 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return

CenterTown_PlayersHouse_1F_MomPokeballs_2:
# 93 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 99
	goto CenterTown_PlayersHouse_1F_MomPokeballs_1


# 101 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 102 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 103 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 104 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 105 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 106 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
CenterTown_PlayersHouse_1F_MapScripts::
# 107 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 108 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 109 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 110 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 111 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 112 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 113 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 114 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 115 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 116 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 117 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 118 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 119 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 120 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 121 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 122 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 123 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 124 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 125 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 126 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 127 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 128 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 129 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 130 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 131 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 132 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 133 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 134 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 135 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 136 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 137 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 138 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 139 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 140 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 141 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 142 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 143 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 144 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 145 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 146 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 147 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 148 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte 0
# 149 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 150 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 151 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 152 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 153 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 154 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 155 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 156 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 157 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	warp MAP_CENTER_TOWN_PLAYERS_HOUSE_2F, 7, 1
# 158 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitstate
# 159 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 160 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 161 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 162 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 163 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 164 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 165 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 166 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 167 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 168 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 169 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 170 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 171 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 172 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 173 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 174 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 175 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 176 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 177 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 178 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 179 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 180 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 181 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 182 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 183 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 184 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 185 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 186 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 187 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 188 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 189 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 190 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 191 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 192 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 193 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 194 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 195 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 196 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 197 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 198 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 199 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 200 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 201 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 202 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 203 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 204 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 205 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 206 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 207 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 208 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 209 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 210 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 211 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 212 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 213 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 214 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 215 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 216 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 217 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 218 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 219 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 220 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 221 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 222 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 223 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 224 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 225 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 226 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 227 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 228 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 229 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 230 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 231 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 232 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 233 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 234 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 235 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 10
# 236 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 237 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 238 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 239 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 240 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 241 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 242 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 243 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 244 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 245 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 246 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 247 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 248 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 249 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 250 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 251 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 252 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 253 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 254 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 255 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 256 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 257 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 258 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 259 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 260 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 261 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 262 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 263 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 264 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 265 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 266 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 267 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 268 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 269 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 270 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 271 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 272 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 273 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 274 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 275 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 276 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 277 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 278 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 279 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 280 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 281 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 282 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 283 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 284 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 285 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 286 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 287 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 288 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 289 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 290 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 291 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 292 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 293 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 294 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 295 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 296 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
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
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 303 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 304 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 305 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 306 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 307 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 309 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 310 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 311 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 312 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 313 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 314 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 315 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 316 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 317 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 318 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 319 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 320 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 321 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 322 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 323 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 324 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 325 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 326 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 327 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 328 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 329 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 330 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 331 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 332 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 333 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 334 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 335 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 336 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 337 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 338 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 339 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 340 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 341 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 342 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 343 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 344 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 345 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 346 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 347 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 348 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 349 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 350 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 351 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 352 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 353 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 354 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 355 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 356 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 357 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 358 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 359 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 360 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 361 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 362 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 363 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 364 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 365 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 366 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 367 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 368 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 369 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 370 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 371 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 372 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 373 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 374 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 376 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 377 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 378 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 379 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 380 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 381 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 382 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 383 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 384 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 385 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 386 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 387 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 388 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 389 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 390 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "our move here.\l"
# 391 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 392 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 393 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 394 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 395 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 396 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "very own room?$"
# 397 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 398 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 399 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 400 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 401 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 402 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 403 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 404 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 405 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 406 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 407 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 408 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 409 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 410 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 411 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 412 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 413 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Too bad.$"
# 414 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 415 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 416 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 417 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 418 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 419 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 420 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 421 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 422 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 423 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 424 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 425 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 426 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 427 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 428 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 429 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 430 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 431 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 432 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 433 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 434 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 435 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 436 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 437 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 438 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 439 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 440 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 441 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 442 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 443 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 444 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 445 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 446 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 447 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 448 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 449 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 450 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "your mom?\p"
# 451 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "… … …$"
# 452 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 453 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 454 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 455 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 456 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 457 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 458 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 459 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 460 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 461 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 462 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 463 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 464 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 465 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 466 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 467 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 468 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 469 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 470 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 471 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Better get going!$"
# 472 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 473 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 474 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 475 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 476 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 477 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 478 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 479 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "the road running!”$"
# 480 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 481 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 482 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 483 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 484 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 485 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 486 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 487 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 488 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 489 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 490 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 491 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 492 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 493 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 494 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 495 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 496 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 497 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 498 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 499 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 500 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 501 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 502 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 503 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 504 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 505 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 506 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 507 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 508 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 509 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 510 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 511 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 512 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 513 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "news flash!\p"
# 514 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 515 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 516 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 517 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 518 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 519 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 520 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "movie program.$"
# 521 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 522 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 523 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 524 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 525 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 526 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 527 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 528 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 529 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
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
# 80 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Give this Pokémon a nickname?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_0:
# 90 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Do you need more Pokéballs?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_1:
# 95 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Good luck, dear!$"
