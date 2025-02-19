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
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special EnableNationalPokedex
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_2:
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_1


LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs::
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs_Text_0
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 99
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement0:
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement1:
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement2:
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ .set LOCALID_MOM, 1
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ LittlerootTown_BrendansHouse_1F_MapScripts::
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ .byte 0
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
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
	walk_in_place_faster_left
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"

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
	.string "for you, pay them a visit before you\l"
	.string "leave. Come back home if you need any\l"
	.string "more Pokéballs or money, and stop by\l"
	.string "Professor Birch's lab if you have any\l"
	.string "questions. Good luck, {PLAYER}!$"

LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs_Text_0:
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hello, {PLAYER}! I have some more\n"
	.string "Pokéballs for you!$"
