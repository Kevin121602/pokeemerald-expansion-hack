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
	setflag FLAG_HIDE_TRICK_HOUSE_APPRENTICE
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special EnableNationalPokedex
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_2:
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_1


LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs::
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs_Text_0
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 99
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement0:
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement1:
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement2:
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ .set LOCALID_MOM, 1
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ LittlerootTown_BrendansHouse_1F_MapScripts::
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ .byte 0
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 549 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
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
	.string "for you.\p"
	.string "Make sure to pay them a visit before\n"
	.string "you leave.\p"
	.string "Come back home if you need any more\n"
	.string "Pokéballs or money,\p"
	.string "and stop by Professor Birch's lab\n"
	.string "if you have any questions.\p"
	.string "Good luck, {PLAYER}!$"

LittlerootTown_BrendansHouse_1F_EventScript_Pokeballs_Text_0:
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hello, {PLAYER}! I have some more\n"
	.string "Pokéballs for you!$"
