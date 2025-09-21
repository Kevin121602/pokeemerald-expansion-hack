LittlerootTown_BrendansHouse_1F_MapScripts::
	.byte 0


LittlerootTown_BrendansHouse_1F_EventScript_MomTriggerLeft::
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, MomMovement0
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems
# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_1F_EventScript_MomTriggerCenter::
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, MomMovement1
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_1F_EventScript_MomTriggerRight::
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement 1, MomMovement2
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


LittlerootTown_BrendansHouse_1F_EventScript_StartingItems::
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_0
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 99
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_1
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	givemon SPECIES_SPINDA, 5
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_2
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmessage
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitfanfare
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_3, MSGBOX_YESNO
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_2
LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_1:
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmonmetlocation 0, 0xFF
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_4
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special EnableNationalPokedex
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_2:
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_1


LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs::
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs_Text_0
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 99
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement0:
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement1:
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement2:
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ .set LOCALID_MOM, 1
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ LittlerootTown_BrendansHouse_1F_MapScripts::
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ .byte 0
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's Pokémon do all the work\n"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A Pokénav?\n"
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the Pokénav.$"
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is Pokémon.\p"
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon in flight.\p"
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this Pokémon is\n"
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that Pokémon was?$"
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown Pokémon.$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_0:
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Good morning, {PLAYER}! I have some\n"
	.string "things to give you before you leave.$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_1:
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You'll need a Pokémon as well, luckily\n"
	.string "your father left a Spinda for you!$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_2:
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER} recieved Spinda!$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_3:
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Give this Pokémon a nickname?$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_4:
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Our next door neighbours have a gift\n"
	.string "for you.\p"
	.string "Make sure to pay them a visit before\n"
	.string "you leave.\p"
	.string "Come back home if you need any more\n"
	.string "Pokéballs or money,\p"
	.string "and stop by Professor Birch's lab\n"
	.string "if you have any questions.\p"
	.string "Good luck, {PLAYER}!$"

LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs_Text_0:
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hello, {PLAYER}! I have some more\n"
	.string "Pokéballs for you!$"
