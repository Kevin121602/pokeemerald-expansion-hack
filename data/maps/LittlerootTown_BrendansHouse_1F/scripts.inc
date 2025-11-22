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
	giveitem ITEM_RARE_CANDY
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL
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
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special EnableNationalPokedex
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_TEMP_10
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
	end

LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_2:
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto LittlerootTown_BrendansHouse_1F_EventScript_StartingItems_1


LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck::
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lock
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	faceplayer
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_set FLAG_TEMP_10, LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_2
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	showmoneybox 0, 0
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_1
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addmoney 999999
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	updatemoneybox
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_2
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmessage
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	hidemoneybox
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_TEMP_10
LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_1:
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	release
	end

LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_2:
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_0
	goto LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_1


# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement0:
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement1:
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
	step_end

# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
MomMovement2:
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	face_up
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
	step_end

# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ .set LOCALID_PLAYERS_HOUSE_1F_MOM, 1
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ LittlerootTown_BrendansHouse_1F_MapScripts::
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	@ .byte 0
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad:
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 8, 4
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 4, 5
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_PLAYERS_HOUSE_1F_MOM, 9, 8
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_PLAYERS_HOUSE_1F_MOM, MOVEMENT_TYPE_FACE_UP
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 7, 1
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs:
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_PLAYERS_HOUSE_1F_MOM
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_PLAYERS_HOUSE_1F_MOM
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
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
	step_end
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's Pokémon do all the work\n"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A Pokénav?\n"
# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the Pokénav.$"
# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG Gym.$"
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG Gym.\p"
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is Pokémon.\p"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon in flight.\p"
# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this Pokémon is\n"
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 549 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 550 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 551 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 552 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 553 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that Pokémon was?$"
# 554 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 555 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 556 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 557 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
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
	.string "for you, make sure to pay them a\l"
	.string "visit before you leave.\p"
	.string "Come back home if you need any more\n"
	.string "money, and stop by Professor Birch's\l"
	.string "lab if you have any questions.\p"
	.string "Good luck, {PLAYER}!$"

LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_0:
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Good luck, {PLAYER}!$"

LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_1:
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I hope things are going well, {PLAYER}.\p"
	.string "Here, I have some extra money for you!$"

LittlerootTown_BrendansHouse_1F_EventScript_GoodLuck_Text_2:
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Good luck!$"
