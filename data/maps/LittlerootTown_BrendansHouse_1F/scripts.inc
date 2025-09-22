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
	release
	end


LittlerootTown_BrendansHouse_1F_EventScript_StartingItems::
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_0
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_1
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	givemon SPECIES_SPINDA, 5
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_2
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmessage
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitfanfare
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_3, MSGBOX_YESNO
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_2
LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_1:
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmonmetlocation 0, 0xFF
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_4
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special EnableNationalPokedex
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_2:
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_1


LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck::
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_0
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end


# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement0:
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement1:
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement2:
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ .set LOCALID_MOM, 1
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ LittlerootTown_BrendansHouse_1F_MapScripts::
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ .byte 0
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
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
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's Pokémon do all the work\n"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A Pokénav?\n"
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the Pokénav.$"
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG Gym.$"
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG Gym.\p"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is Pokémon.\p"
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon in flight.\p"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this Pokémon is\n"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that Pokémon was?$"
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown Pokémon.$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_0:
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Good morning, {PLAYER}! I have some\n"
	.string "things to give you before you leave.$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_1:
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You'll need a Pokémon as well, luckily\n"
	.string "your father left a Spinda for you!$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_2:
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER} recieved Spinda!$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_3:
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Give this Pokémon a nickname?$"

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_Text_4:
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Our next door neighbours have a gift\n"
	.string "for you.\p"
	.string "Make sure to pay them a visit before\n"
	.string "you leave.\p"
	.string "Come back home if you need any more\n"
	.string "Pokéballs or money,\p"
	.string "and stop by Professor Birch's lab\n"
	.string "if you have any questions.\p"
	.string "Good luck, {PLAYER}!$"

LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_0:
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Good luck, {PLAYER}!$"
