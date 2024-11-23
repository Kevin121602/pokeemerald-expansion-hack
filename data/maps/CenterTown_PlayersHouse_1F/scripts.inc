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
	setflag FLAG_DISABLE_EXP
# 64 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 65 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_2
# 66 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	givemon SPECIES_SPINDA, 5
# 67 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_3
# 69 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 70 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 71 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call NicknamePartyMon
# 72 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomItems_Text_4
# 73 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 74 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 75 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 76 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CENTER_TOWN
# 77 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return


NicknamePartyMon::
# 81 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 82 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 83 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 84 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


CenterTown_PlayersHouse_1F_MomPokeballs::
# 89 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lock
# 90 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 91 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_0, MSGBOX_YESNO
# 92 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 93 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CenterTown_PlayersHouse_1F_MomPokeballs_2
CenterTown_PlayersHouse_1F_MomPokeballs_1:
# 96 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox CenterTown_PlayersHouse_1F_MomPokeballs_Text_1
# 97 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	release
	return

CenterTown_PlayersHouse_1F_MomPokeballs_2:
# 94 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 99
	goto CenterTown_PlayersHouse_1F_MomPokeballs_1


# 102 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 103 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 104 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 105 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 106 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 107 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
CenterTown_PlayersHouse_1F_MapScripts::
# 108 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 109 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 110 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 111 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 112 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 113 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 114 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 115 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 116 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 117 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 118 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 119 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 120 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 121 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 122 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 123 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 124 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 125 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 126 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 127 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 128 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 129 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 130 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 131 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 132 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 133 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 134 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 135 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 136 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 137 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 138 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 139 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 140 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 141 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 142 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 143 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 144 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 145 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 146 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 147 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 148 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 149 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.2byte 0
# 150 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 151 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 152 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 153 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 154 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 155 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 156 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 157 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 158 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	warp MAP_CENTER_TOWN_PLAYERS_HOUSE_2F, 7, 1
# 159 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitstate
# 160 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 161 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 162 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 163 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 164 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 165 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 166 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 167 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 168 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 169 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 170 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 171 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 172 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 173 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 174 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 175 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 176 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 177 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 178 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 179 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 180 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 181 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 182 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 183 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 184 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 185 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 186 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 187 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 188 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 189 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 190 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 191 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 192 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 193 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 194 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 195 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 196 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 197 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 198 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 199 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 200 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 201 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 202 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 203 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 204 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 205 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 206 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 207 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 208 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 209 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 210 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 211 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 212 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 213 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 214 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 215 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 216 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 217 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 218 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 219 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 220 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 221 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 222 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 223 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 224 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 225 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 226 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 227 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 228 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 229 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	lockall
# 230 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 231 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 232 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 233 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 234 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 235 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 236 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 10
# 237 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 238 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 239 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 240 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 241 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 242 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 243 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 244 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 245 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 246 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 247 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 248 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 249 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 250 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 251 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 252 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 253 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 254 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	playse SE_EXIT
# 255 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 256 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 257 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 258 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 259 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay 30
# 260 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 261 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 262 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 263 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 264 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 265 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	end
# 266 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 267 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 268 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 269 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 270 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 271 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 272 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 273 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 274 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 275 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 276 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 277 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 278 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 279 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 280 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 281 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 282 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 283 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 284 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 285 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 286 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 287 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 288 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 289 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 290 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 291 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 292 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 293 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 294 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 295 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 296 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 297 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 298 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 299 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 301 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 302 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 303 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 304 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 305 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 306 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 307 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 308 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 309 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 310 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 311 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 312 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 313 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 314 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 315 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 316 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 317 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 318 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 319 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 320 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 321 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 322 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 323 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 324 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 325 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 326 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 327 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 328 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 329 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	return
# 330 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 331 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 332 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 333 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 334 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 335 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 336 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 337 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 338 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 339 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 340 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 341 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 342 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 343 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 344 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 345 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 346 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 347 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_16
# 348 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	delay_8
# 349 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 350 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 351 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 352 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 353 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 354 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 355 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 356 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 357 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 358 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 359 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 360 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 361 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 362 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 363 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 364 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 365 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 366 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 367 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 368 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 369 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 370 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 371 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 372 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 373 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 374 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 375 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 376 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 377 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 378 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	step_end
# 379 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 380 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 381 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 382 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 383 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 384 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 385 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 386 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 387 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 388 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 389 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 390 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 391 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "our move here.\l"
# 392 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 393 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 394 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 395 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 396 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 397 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "very own room?$"
# 398 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 399 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 400 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 401 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 402 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 403 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 404 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 405 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 406 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 407 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 408 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 409 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 410 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 411 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 412 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 413 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 414 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Too bad.$"
# 415 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 416 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 417 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 418 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 419 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 420 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 421 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 422 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 423 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 424 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 425 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 426 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 427 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 428 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 429 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 430 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 431 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 432 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 433 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 434 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 435 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 436 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 437 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 438 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 439 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 440 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 441 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 442 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 443 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 444 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 445 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 446 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 447 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 448 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 449 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 450 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 451 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "your mom?\p"
# 452 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "… … …$"
# 453 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 454 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 455 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 456 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 457 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 458 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 459 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 460 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 461 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 462 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 463 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 464 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 465 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 466 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 467 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 468 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 469 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 470 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 471 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 472 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Better get going!$"
# 473 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 474 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 475 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 476 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 477 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 478 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 479 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 480 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "the road running!”$"
# 481 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 482 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 483 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 484 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 485 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 486 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 487 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 488 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 489 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 490 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 491 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 492 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 493 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 494 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 495 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 496 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 497 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 498 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 499 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 500 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 501 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 502 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 503 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 504 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 505 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 506 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 507 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 508 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 509 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 510 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 511 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 512 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 513 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 514 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "news flash!\p"
# 515 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 516 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 517 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 518 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 519 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 520 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 521 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "movie program.$"
# 522 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 523 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 524 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 525 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 526 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 527 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"

# 528 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 529 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 530 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
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
# 65 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Here, take this Pokémon with you, it's\n"
	.string "the mascot of this island!$"

CenterTown_PlayersHouse_1F_MomItems_Text_3:
# 68 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER} recieved Spinda!$"

CenterTown_PlayersHouse_1F_MomItems_Text_4:
# 72 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Our next door neighbours have a gift\n"
	.string "for you, pay them a visit before you\l"
	.string "leave. Come back home if you need any\l"
	.string "more Pokéballs or money, and stop by\l"
	.string "Professor Birch's lab if you have any\l"
	.string "questions!$"

NicknamePartyMon_Text_0:
# 81 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Give this Pokémon a nickname?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_0:
# 91 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Do you need more Pokéballs?$"

CenterTown_PlayersHouse_1F_MomPokeballs_Text_1:
# 96 "data/maps/CenterTown_PlayersHouse_1F/scripts.pory"
	.string "Good luck, dear!$"
