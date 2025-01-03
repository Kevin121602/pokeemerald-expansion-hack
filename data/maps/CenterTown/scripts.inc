CenterTown_MapScripts::
# 2 "data/maps/CenterTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CenterTown_OnTransition
	.byte 0


CenterTown_OnTransition::
# 6 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_VISITED_CENTER_TOWN
	end


CenterTown_SuperRod::
# 11 "data/maps/CenterTown/scripts.pory"
	lock
# 12 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 13 "data/maps/CenterTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, CenterTown_SuperRod_2
CenterTown_SuperRod_1:
# 18 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, CenterTown_SuperRod_5
CenterTown_SuperRod_4:
# 21 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 22 "data/maps/CenterTown/scripts.pory"
	release
	return

CenterTown_SuperRod_2:
# 14 "data/maps/CenterTown/scripts.pory"
	msgbox CenterTown_SuperRod_Text_0
# 15 "data/maps/CenterTown/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 16 "data/maps/CenterTown/scripts.pory"
	msgbox CenterTown_SuperRod_Text_1
	goto CenterTown_SuperRod_1

CenterTown_SuperRod_5:
# 19 "data/maps/CenterTown/scripts.pory"
	msgbox CenterTown_SuperRod_Text_2
	goto CenterTown_SuperRod_4


# 25 "data/maps/CenterTown/scripts.pory"

# 26 "data/maps/CenterTown/scripts.pory"
.set LOCALID_TWIN, 1
# 27 "data/maps/CenterTown/scripts.pory"
.set LOCALID_MOM, 4
# 28 "data/maps/CenterTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 29 "data/maps/CenterTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 30 "data/maps/CenterTown/scripts.pory"

# 31 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 32 "data/maps/CenterTown/scripts.pory"
	@ 1: Met Rival
# 33 "data/maps/CenterTown/scripts.pory"
	@ 2: Saving Birch
# 34 "data/maps/CenterTown/scripts.pory"
	@ 3: Received Pokedex
# 35 "data/maps/CenterTown/scripts.pory"
	@ 4: Received Running Shoes
# 36 "data/maps/CenterTown/scripts.pory"

# 37 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_CENTER_INTRO_STATE
# 38 "data/maps/CenterTown/scripts.pory"
	@ 1: In truck male
# 39 "data/maps/CenterTown/scripts.pory"
	@ 2: In truck female
# 40 "data/maps/CenterTown/scripts.pory"
	@ 3: Entered house
# 41 "data/maps/CenterTown/scripts.pory"
	@ 4: Told to go set clock
# 42 "data/maps/CenterTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 43 "data/maps/CenterTown/scripts.pory"
	@ 6: Set clock
# 44 "data/maps/CenterTown/scripts.pory"
	@ 7: Told to go meet rival
# 45 "data/maps/CenterTown/scripts.pory"

# 46 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 47 "data/maps/CenterTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 48 "data/maps/CenterTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 49 "data/maps/CenterTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 50 "data/maps/CenterTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 51 "data/maps/CenterTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 52 "data/maps/CenterTown/scripts.pory"
	@ 5: Exited house after above event
# 53 "data/maps/CenterTown/scripts.pory"

# 54 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 55 "data/maps/CenterTown/scripts.pory"
	@ 1: Never occurs
# 56 "data/maps/CenterTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 57 "data/maps/CenterTown/scripts.pory"
	@ 3: Met Rival
# 58 "data/maps/CenterTown/scripts.pory"
	@ 4: Received Pokedex
# 59 "data/maps/CenterTown/scripts.pory"

# 60 "data/maps/CenterTown/scripts.pory"

# 61 "data/maps/CenterTown/scripts.pory"

# 62 "data/maps/CenterTown/scripts.pory"
LittlerootTown_MapScripts::
# 63 "data/maps/CenterTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 64 "data/maps/CenterTown/scripts.pory"
	.byte 0
# 65 "data/maps/CenterTown/scripts.pory"

# 66 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnTransition:
# 67 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_VISITED_CENTER_TOWN
# 68 "data/maps/CenterTown/scripts.pory"
	end
# 69 "data/maps/CenterTown/scripts.pory"

# 70 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 71 "data/maps/CenterTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 72 "data/maps/CenterTown/scripts.pory"
	return
# 73 "data/maps/CenterTown/scripts.pory"

# 74 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 75 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/CenterTown/scripts.pory"
	return
# 77 "data/maps/CenterTown/scripts.pory"

# 78 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 79 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 80 "data/maps/CenterTown/scripts.pory"
	return
# 81 "data/maps/CenterTown/scripts.pory"

# 82 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 83 "data/maps/CenterTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 84 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 85 "data/maps/CenterTown/scripts.pory"
	return
# 86 "data/maps/CenterTown/scripts.pory"

# 87 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 88 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 89 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 90 "data/maps/CenterTown/scripts.pory"
	return
# 91 "data/maps/CenterTown/scripts.pory"

# 92 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 93 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 94 "data/maps/CenterTown/scripts.pory"
	return
# 95 "data/maps/CenterTown/scripts.pory"

# 96 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 97 "data/maps/CenterTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 98 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 99 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 100 "data/maps/CenterTown/scripts.pory"
	return
# 101 "data/maps/CenterTown/scripts.pory"

# 102 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 103 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 104 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 105 "data/maps/CenterTown/scripts.pory"
	return
# 106 "data/maps/CenterTown/scripts.pory"

# 107 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 108 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 109 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 110 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 111 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 112 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 113 "data/maps/CenterTown/scripts.pory"
	return
# 114 "data/maps/CenterTown/scripts.pory"

# 115 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 116 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 117 "data/maps/CenterTown/scripts.pory"
	return
# 118 "data/maps/CenterTown/scripts.pory"

# 119 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 120 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 121 "data/maps/CenterTown/scripts.pory"
	return
# 122 "data/maps/CenterTown/scripts.pory"

# 123 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnFrame:
# 124 "data/maps/CenterTown/scripts.pory"
	.2byte 0
# 125 "data/maps/CenterTown/scripts.pory"

# 126 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 127 "data/maps/CenterTown/scripts.pory"
	lockall
# 128 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8004, 5
# 129 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8005, 8
# 130 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 131 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 132 "data/maps/CenterTown/scripts.pory"
	warpsilent MAP_CENTER_TOWN_PLAYERS_HOUSE_1F, 8, 8
# 133 "data/maps/CenterTown/scripts.pory"
	waitstate
# 134 "data/maps/CenterTown/scripts.pory"
	releaseall
# 135 "data/maps/CenterTown/scripts.pory"
	end
# 136 "data/maps/CenterTown/scripts.pory"

# 137 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 138 "data/maps/CenterTown/scripts.pory"
	lockall
# 139 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8004, 14
# 140 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8005, 8
# 141 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 142 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 143 "data/maps/CenterTown/scripts.pory"
	waitstate
# 144 "data/maps/CenterTown/scripts.pory"
	releaseall
# 145 "data/maps/CenterTown/scripts.pory"
	end
# 146 "data/maps/CenterTown/scripts.pory"

# 147 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 148 "data/maps/CenterTown/scripts.pory"
	delay 15
# 149 "data/maps/CenterTown/scripts.pory"
	playse SE_LEDGE
# 150 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 151 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 153 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 154 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_MOM
# 155 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 156 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 158 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 159 "data/maps/CenterTown/scripts.pory"
	delay 10
# 160 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 161 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 163 "data/maps/CenterTown/scripts.pory"
	closemessage
# 164 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 165 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 166 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 168 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 169 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 170 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 171 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 172 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 173 "data/maps/CenterTown/scripts.pory"
	setvar VAR_CENTER_INTRO_STATE, 3
# 174 "data/maps/CenterTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 175 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 176 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 177 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 178 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 179 "data/maps/CenterTown/scripts.pory"
	return
# 180 "data/maps/CenterTown/scripts.pory"

# 181 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 182 "data/maps/CenterTown/scripts.pory"
	walk_down
# 183 "data/maps/CenterTown/scripts.pory"
	step_end
# 184 "data/maps/CenterTown/scripts.pory"

# 185 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 186 "data/maps/CenterTown/scripts.pory"
	walk_down
# 187 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_left
# 188 "data/maps/CenterTown/scripts.pory"
	step_end
# 189 "data/maps/CenterTown/scripts.pory"

# 190 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 191 "data/maps/CenterTown/scripts.pory"
	delay_16
# 192 "data/maps/CenterTown/scripts.pory"
	delay_8
# 193 "data/maps/CenterTown/scripts.pory"
	walk_up
# 194 "data/maps/CenterTown/scripts.pory"
	step_end
# 195 "data/maps/CenterTown/scripts.pory"

# 196 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 197 "data/maps/CenterTown/scripts.pory"
	walk_up
# 198 "data/maps/CenterTown/scripts.pory"
	set_invisible
# 199 "data/maps/CenterTown/scripts.pory"
	step_end
# 200 "data/maps/CenterTown/scripts.pory"

# 201 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 202 "data/maps/CenterTown/scripts.pory"
	delay_16
# 203 "data/maps/CenterTown/scripts.pory"
	delay_8
# 204 "data/maps/CenterTown/scripts.pory"
	walk_right
# 205 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 206 "data/maps/CenterTown/scripts.pory"
	step_end
# 207 "data/maps/CenterTown/scripts.pory"

# 208 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 209 "data/maps/CenterTown/scripts.pory"
	walk_up
# 210 "data/maps/CenterTown/scripts.pory"
	walk_up
# 211 "data/maps/CenterTown/scripts.pory"
	step_end
# 212 "data/maps/CenterTown/scripts.pory"

# 213 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 214 "data/maps/CenterTown/scripts.pory"
	jump_right
# 215 "data/maps/CenterTown/scripts.pory"
	delay_16
# 216 "data/maps/CenterTown/scripts.pory"
	delay_16
# 217 "data/maps/CenterTown/scripts.pory"
	delay_16
# 218 "data/maps/CenterTown/scripts.pory"
	step_end
# 219 "data/maps/CenterTown/scripts.pory"

# 220 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 221 "data/maps/CenterTown/scripts.pory"
	lockall
# 222 "data/maps/CenterTown/scripts.pory"
	playse SE_PIN
# 223 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 224 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 225 "data/maps/CenterTown/scripts.pory"
	delay 80
# 226 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 227 "data/maps/CenterTown/scripts.pory"
	closemessage
# 228 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 229 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 230 "data/maps/CenterTown/scripts.pory"
	delay 20
# 231 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 232 "data/maps/CenterTown/scripts.pory"
	warp MAP_CENTER_TOWN_LAB, 6, 5
# 233 "data/maps/CenterTown/scripts.pory"
	waitstate
# 234 "data/maps/CenterTown/scripts.pory"
	releaseall
# 235 "data/maps/CenterTown/scripts.pory"
	end
# 236 "data/maps/CenterTown/scripts.pory"

# 237 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnWarp:
# 238 "data/maps/CenterTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 239 "data/maps/CenterTown/scripts.pory"
	.2byte 0
# 240 "data/maps/CenterTown/scripts.pory"

# 241 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 242 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_BIRCH
# 243 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_RIVAL
# 244 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 245 "data/maps/CenterTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 246 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 247 "data/maps/CenterTown/scripts.pory"
	end
# 248 "data/maps/CenterTown/scripts.pory"

# 249 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 250 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 251 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 252 "data/maps/CenterTown/scripts.pory"
	end
# 253 "data/maps/CenterTown/scripts.pory"

# 254 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 255 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 256 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 257 "data/maps/CenterTown/scripts.pory"
	end
# 258 "data/maps/CenterTown/scripts.pory"

# 259 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 260 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 261 "data/maps/CenterTown/scripts.pory"
	end
# 262 "data/maps/CenterTown/scripts.pory"

# 263 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 264 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 265 "data/maps/CenterTown/scripts.pory"
	end
# 266 "data/maps/CenterTown/scripts.pory"

# 267 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 268 "data/maps/CenterTown/scripts.pory"
	lock
# 269 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 270 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 271 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 272 "data/maps/CenterTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 273 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 274 "data/maps/CenterTown/scripts.pory"
	release
# 275 "data/maps/CenterTown/scripts.pory"
	end
# 276 "data/maps/CenterTown/scripts.pory"

# 277 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 278 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 279 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 280 "data/maps/CenterTown/scripts.pory"
	closemessage
# 281 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 282 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 283 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 284 "data/maps/CenterTown/scripts.pory"
	release
# 285 "data/maps/CenterTown/scripts.pory"
	end
# 286 "data/maps/CenterTown/scripts.pory"

# 287 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 288 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 289 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 290 "data/maps/CenterTown/scripts.pory"
	release
# 291 "data/maps/CenterTown/scripts.pory"
	end
# 292 "data/maps/CenterTown/scripts.pory"

# 293 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 294 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 295 "data/maps/CenterTown/scripts.pory"
	release
# 296 "data/maps/CenterTown/scripts.pory"
	end
# 297 "data/maps/CenterTown/scripts.pory"

# 298 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 299 "data/maps/CenterTown/scripts.pory"
	lockall
# 300 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 301 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 302 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 303 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 304 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 305 "data/maps/CenterTown/scripts.pory"
	releaseall
# 306 "data/maps/CenterTown/scripts.pory"
	end
# 307 "data/maps/CenterTown/scripts.pory"

# 308 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 309 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 310 "data/maps/CenterTown/scripts.pory"
	closemessage
# 311 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 312 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 313 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 314 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 315 "data/maps/CenterTown/scripts.pory"
	closemessage
# 316 "data/maps/CenterTown/scripts.pory"
	return
# 317 "data/maps/CenterTown/scripts.pory"

# 318 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 319 "data/maps/CenterTown/scripts.pory"
	face_right
# 320 "data/maps/CenterTown/scripts.pory"
	delay_8
# 321 "data/maps/CenterTown/scripts.pory"
	disable_jump_landing_ground_effect
# 322 "data/maps/CenterTown/scripts.pory"
	jump_in_place_right
# 323 "data/maps/CenterTown/scripts.pory"
	delay_8
# 324 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 325 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 326 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 327 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 328 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 329 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 330 "data/maps/CenterTown/scripts.pory"
	walk_fast_left
# 331 "data/maps/CenterTown/scripts.pory"
	face_down
# 332 "data/maps/CenterTown/scripts.pory"
	step_end
# 333 "data/maps/CenterTown/scripts.pory"

# 334 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 335 "data/maps/CenterTown/scripts.pory"
	walk_down
# 336 "data/maps/CenterTown/scripts.pory"
	step_end
# 337 "data/maps/CenterTown/scripts.pory"

# 338 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 339 "data/maps/CenterTown/scripts.pory"
	walk_right
# 340 "data/maps/CenterTown/scripts.pory"
	walk_down
# 341 "data/maps/CenterTown/scripts.pory"
	walk_down
# 342 "data/maps/CenterTown/scripts.pory"
	walk_left
# 343 "data/maps/CenterTown/scripts.pory"
	walk_left
# 344 "data/maps/CenterTown/scripts.pory"
	walk_left
# 345 "data/maps/CenterTown/scripts.pory"
	walk_left
# 346 "data/maps/CenterTown/scripts.pory"
	walk_up
# 347 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_down
# 348 "data/maps/CenterTown/scripts.pory"
	step_end
# 349 "data/maps/CenterTown/scripts.pory"

# 350 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 351 "data/maps/CenterTown/scripts.pory"
	lock_facing_direction
# 352 "data/maps/CenterTown/scripts.pory"
	walk_down
# 353 "data/maps/CenterTown/scripts.pory"
	unlock_facing_direction
# 354 "data/maps/CenterTown/scripts.pory"
	step_end
# 355 "data/maps/CenterTown/scripts.pory"

# 356 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 357 "data/maps/CenterTown/scripts.pory"
	lockall
# 358 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 359 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 360 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 361 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 362 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/CenterTown/scripts.pory"
	releaseall
# 364 "data/maps/CenterTown/scripts.pory"
	end
# 365 "data/maps/CenterTown/scripts.pory"

# 366 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 367 "data/maps/CenterTown/scripts.pory"
	face_right
# 368 "data/maps/CenterTown/scripts.pory"
	delay_8
# 369 "data/maps/CenterTown/scripts.pory"
	disable_jump_landing_ground_effect
# 370 "data/maps/CenterTown/scripts.pory"
	jump_in_place_right
# 371 "data/maps/CenterTown/scripts.pory"
	delay_8
# 372 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 373 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 374 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 375 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 376 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 377 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 378 "data/maps/CenterTown/scripts.pory"
	face_down
# 379 "data/maps/CenterTown/scripts.pory"
	step_end
# 380 "data/maps/CenterTown/scripts.pory"

# 381 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 382 "data/maps/CenterTown/scripts.pory"
	walk_left
# 383 "data/maps/CenterTown/scripts.pory"
	walk_down
# 384 "data/maps/CenterTown/scripts.pory"
	walk_left
# 385 "data/maps/CenterTown/scripts.pory"
	walk_left
# 386 "data/maps/CenterTown/scripts.pory"
	walk_left
# 387 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_down
# 388 "data/maps/CenterTown/scripts.pory"
	step_end
# 389 "data/maps/CenterTown/scripts.pory"

# 390 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 391 "data/maps/CenterTown/scripts.pory"
	lockall
# 392 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 393 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 394 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 395 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 396 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 397 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 398 "data/maps/CenterTown/scripts.pory"
	closemessage
# 399 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 400 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 401 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 402 "data/maps/CenterTown/scripts.pory"
	releaseall
# 403 "data/maps/CenterTown/scripts.pory"
	end
# 404 "data/maps/CenterTown/scripts.pory"

# 405 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 406 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 407 "data/maps/CenterTown/scripts.pory"
	end
# 408 "data/maps/CenterTown/scripts.pory"

# 409 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 410 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 411 "data/maps/CenterTown/scripts.pory"
	end
# 412 "data/maps/CenterTown/scripts.pory"

# 413 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 414 "data/maps/CenterTown/scripts.pory"
	lockall
# 415 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 416 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 417 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 418 "data/maps/CenterTown/scripts.pory"
	releaseall
# 419 "data/maps/CenterTown/scripts.pory"
	end
# 420 "data/maps/CenterTown/scripts.pory"

# 421 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 422 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 423 "data/maps/CenterTown/scripts.pory"
	return
# 424 "data/maps/CenterTown/scripts.pory"

# 425 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 426 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 427 "data/maps/CenterTown/scripts.pory"
	return
# 428 "data/maps/CenterTown/scripts.pory"

# 429 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 430 "data/maps/CenterTown/scripts.pory"
	lockall
# 431 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 432 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 433 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 434 "data/maps/CenterTown/scripts.pory"
	releaseall
# 435 "data/maps/CenterTown/scripts.pory"
	end
# 436 "data/maps/CenterTown/scripts.pory"

# 437 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 438 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 439 "data/maps/CenterTown/scripts.pory"
	return
# 440 "data/maps/CenterTown/scripts.pory"

# 441 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 442 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 443 "data/maps/CenterTown/scripts.pory"
	return
# 444 "data/maps/CenterTown/scripts.pory"

# 445 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 446 "data/maps/CenterTown/scripts.pory"
	lockall
# 447 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 0
# 448 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 449 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 450 "data/maps/CenterTown/scripts.pory"
	end
# 451 "data/maps/CenterTown/scripts.pory"

# 452 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 453 "data/maps/CenterTown/scripts.pory"
	lockall
# 454 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 1
# 455 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 456 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 457 "data/maps/CenterTown/scripts.pory"
	end
# 458 "data/maps/CenterTown/scripts.pory"

# 459 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 460 "data/maps/CenterTown/scripts.pory"
	lockall
# 461 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 2
# 462 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 463 "data/maps/CenterTown/scripts.pory"
	end
# 464 "data/maps/CenterTown/scripts.pory"

# 465 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 466 "data/maps/CenterTown/scripts.pory"
	lockall
# 467 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 3
# 468 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 469 "data/maps/CenterTown/scripts.pory"
	end
# 470 "data/maps/CenterTown/scripts.pory"

# 471 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 472 "data/maps/CenterTown/scripts.pory"
	lockall
# 473 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 4
# 474 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 475 "data/maps/CenterTown/scripts.pory"
	end
# 476 "data/maps/CenterTown/scripts.pory"

# 477 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 478 "data/maps/CenterTown/scripts.pory"
	lockall
# 479 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 5
# 480 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 481 "data/maps/CenterTown/scripts.pory"
	end
# 482 "data/maps/CenterTown/scripts.pory"

# 483 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 484 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 485 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 486 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 487 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 488 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 489 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 490 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 491 "data/maps/CenterTown/scripts.pory"
	closemessage
# 492 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 493 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 494 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 495 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 496 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 497 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 498 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 499 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 500 "data/maps/CenterTown/scripts.pory"
	end
# 501 "data/maps/CenterTown/scripts.pory"

# 502 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 503 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8009, 5
# 504 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x800A, 8
# 505 "data/maps/CenterTown/scripts.pory"
	return
# 506 "data/maps/CenterTown/scripts.pory"

# 507 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 508 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8009, 14
# 509 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x800A, 8
# 510 "data/maps/CenterTown/scripts.pory"
	return
# 511 "data/maps/CenterTown/scripts.pory"

# 512 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 513 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 514 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 515 "data/maps/CenterTown/scripts.pory"
	return
# 516 "data/maps/CenterTown/scripts.pory"

# 517 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 518 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 519 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/CenterTown/scripts.pory"
	return
# 521 "data/maps/CenterTown/scripts.pory"

# 522 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 523 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 524 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 525 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 526 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 527 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 528 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 529 "data/maps/CenterTown/scripts.pory"
	return
# 530 "data/maps/CenterTown/scripts.pory"

# 531 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 532 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 533 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 534 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 535 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 536 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 537 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 538 "data/maps/CenterTown/scripts.pory"
	return
# 539 "data/maps/CenterTown/scripts.pory"

# 540 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 541 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 542 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 543 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 544 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 545 "data/maps/CenterTown/scripts.pory"
	return
# 546 "data/maps/CenterTown/scripts.pory"

# 547 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 548 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 549 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 550 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 551 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 552 "data/maps/CenterTown/scripts.pory"
	return
# 553 "data/maps/CenterTown/scripts.pory"

# 554 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 555 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 556 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 557 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 558 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/CenterTown/scripts.pory"
	return
# 560 "data/maps/CenterTown/scripts.pory"

# 561 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 562 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 563 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 565 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/CenterTown/scripts.pory"
	return
# 567 "data/maps/CenterTown/scripts.pory"

# 568 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 569 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 570 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 572 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/CenterTown/scripts.pory"
	return
# 574 "data/maps/CenterTown/scripts.pory"

# 575 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 576 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 577 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 579 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/CenterTown/scripts.pory"
	return
# 581 "data/maps/CenterTown/scripts.pory"

# 582 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 583 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 584 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 586 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/CenterTown/scripts.pory"
	return
# 588 "data/maps/CenterTown/scripts.pory"

# 589 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 590 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 591 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 592 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 593 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/CenterTown/scripts.pory"
	return
# 595 "data/maps/CenterTown/scripts.pory"

# 596 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 597 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 598 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 600 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/CenterTown/scripts.pory"
	return
# 602 "data/maps/CenterTown/scripts.pory"

# 603 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 604 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 605 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 607 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 608 "data/maps/CenterTown/scripts.pory"
	return
# 609 "data/maps/CenterTown/scripts.pory"

# 610 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 611 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 612 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 613 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 614 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 615 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 616 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 617 "data/maps/CenterTown/scripts.pory"
	return
# 618 "data/maps/CenterTown/scripts.pory"

# 619 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 620 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 621 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 622 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 623 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 624 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 625 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 626 "data/maps/CenterTown/scripts.pory"
	return
# 627 "data/maps/CenterTown/scripts.pory"

# 628 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 629 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 630 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 631 "data/maps/CenterTown/scripts.pory"
	return
# 632 "data/maps/CenterTown/scripts.pory"

# 633 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 634 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 635 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/CenterTown/scripts.pory"
	return
# 637 "data/maps/CenterTown/scripts.pory"

# 638 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 639 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 640 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 641 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 642 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 643 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 644 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 645 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 646 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 647 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 648 "data/maps/CenterTown/scripts.pory"
	return
# 649 "data/maps/CenterTown/scripts.pory"

# 650 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 651 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 652 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 654 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 655 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 656 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 657 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 658 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 659 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 660 "data/maps/CenterTown/scripts.pory"
	return
# 661 "data/maps/CenterTown/scripts.pory"

# 662 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 663 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 664 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 665 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 666 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 667 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 668 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 669 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 670 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 671 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 672 "data/maps/CenterTown/scripts.pory"
	return
# 673 "data/maps/CenterTown/scripts.pory"

# 674 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 675 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 676 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 677 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 678 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 679 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 680 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 681 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 682 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 683 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 684 "data/maps/CenterTown/scripts.pory"
	return
# 685 "data/maps/CenterTown/scripts.pory"

# 686 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 687 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 688 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 689 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 690 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 691 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 692 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 693 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 694 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 695 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 696 "data/maps/CenterTown/scripts.pory"
	return
# 697 "data/maps/CenterTown/scripts.pory"

# 698 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 699 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 700 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 701 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 702 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 703 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 704 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 706 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 707 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 708 "data/maps/CenterTown/scripts.pory"
	return
# 709 "data/maps/CenterTown/scripts.pory"

# 710 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 711 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 712 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 713 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 714 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 715 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 716 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 717 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 718 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 719 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 720 "data/maps/CenterTown/scripts.pory"
	return
# 721 "data/maps/CenterTown/scripts.pory"

# 722 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 723 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 724 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 725 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 726 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 727 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 728 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 729 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 730 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 731 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 732 "data/maps/CenterTown/scripts.pory"
	return
# 733 "data/maps/CenterTown/scripts.pory"

# 734 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 735 "data/maps/CenterTown/scripts.pory"
	walk_up
# 736 "data/maps/CenterTown/scripts.pory"
	walk_up
# 737 "data/maps/CenterTown/scripts.pory"
	walk_up
# 738 "data/maps/CenterTown/scripts.pory"
	walk_up
# 739 "data/maps/CenterTown/scripts.pory"
	walk_up
# 740 "data/maps/CenterTown/scripts.pory"
	walk_up
# 741 "data/maps/CenterTown/scripts.pory"
	step_end
# 742 "data/maps/CenterTown/scripts.pory"

# 743 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 744 "data/maps/CenterTown/scripts.pory"
	walk_up
# 745 "data/maps/CenterTown/scripts.pory"
	walk_up
# 746 "data/maps/CenterTown/scripts.pory"
	walk_up
# 747 "data/maps/CenterTown/scripts.pory"
	walk_up
# 748 "data/maps/CenterTown/scripts.pory"
	walk_up
# 749 "data/maps/CenterTown/scripts.pory"
	walk_up
# 750 "data/maps/CenterTown/scripts.pory"
	step_end
# 751 "data/maps/CenterTown/scripts.pory"

# 752 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 753 "data/maps/CenterTown/scripts.pory"
	walk_right
# 754 "data/maps/CenterTown/scripts.pory"
	walk_right
# 755 "data/maps/CenterTown/scripts.pory"
	walk_right
# 756 "data/maps/CenterTown/scripts.pory"
	walk_right
# 757 "data/maps/CenterTown/scripts.pory"
	step_end
# 758 "data/maps/CenterTown/scripts.pory"

# 759 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 760 "data/maps/CenterTown/scripts.pory"
	walk_right
# 761 "data/maps/CenterTown/scripts.pory"
	walk_right
# 762 "data/maps/CenterTown/scripts.pory"
	walk_right
# 763 "data/maps/CenterTown/scripts.pory"
	walk_right
# 764 "data/maps/CenterTown/scripts.pory"
	walk_right
# 765 "data/maps/CenterTown/scripts.pory"
	step_end
# 766 "data/maps/CenterTown/scripts.pory"

# 767 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 768 "data/maps/CenterTown/scripts.pory"
	walk_right
# 769 "data/maps/CenterTown/scripts.pory"
	walk_right
# 770 "data/maps/CenterTown/scripts.pory"
	step_end
# 771 "data/maps/CenterTown/scripts.pory"

# 772 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 773 "data/maps/CenterTown/scripts.pory"
	walk_right
# 774 "data/maps/CenterTown/scripts.pory"
	walk_right
# 775 "data/maps/CenterTown/scripts.pory"
	walk_right
# 776 "data/maps/CenterTown/scripts.pory"
	step_end
# 777 "data/maps/CenterTown/scripts.pory"

# 778 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 779 "data/maps/CenterTown/scripts.pory"
	walk_left
# 780 "data/maps/CenterTown/scripts.pory"
	walk_left
# 781 "data/maps/CenterTown/scripts.pory"
	walk_left
# 782 "data/maps/CenterTown/scripts.pory"
	step_end
# 783 "data/maps/CenterTown/scripts.pory"

# 784 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 785 "data/maps/CenterTown/scripts.pory"
	walk_left
# 786 "data/maps/CenterTown/scripts.pory"
	walk_left
# 787 "data/maps/CenterTown/scripts.pory"
	step_end
# 788 "data/maps/CenterTown/scripts.pory"

# 789 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 790 "data/maps/CenterTown/scripts.pory"
	walk_left
# 791 "data/maps/CenterTown/scripts.pory"
	walk_left
# 792 "data/maps/CenterTown/scripts.pory"
	walk_left
# 793 "data/maps/CenterTown/scripts.pory"
	walk_left
# 794 "data/maps/CenterTown/scripts.pory"
	walk_left
# 795 "data/maps/CenterTown/scripts.pory"
	step_end
# 796 "data/maps/CenterTown/scripts.pory"

# 797 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 798 "data/maps/CenterTown/scripts.pory"
	walk_left
# 799 "data/maps/CenterTown/scripts.pory"
	walk_left
# 800 "data/maps/CenterTown/scripts.pory"
	walk_left
# 801 "data/maps/CenterTown/scripts.pory"
	walk_left
# 802 "data/maps/CenterTown/scripts.pory"
	step_end
# 803 "data/maps/CenterTown/scripts.pory"

# 804 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 805 "data/maps/CenterTown/scripts.pory"
	walk_down
# 806 "data/maps/CenterTown/scripts.pory"
	walk_down
# 807 "data/maps/CenterTown/scripts.pory"
	walk_down
# 808 "data/maps/CenterTown/scripts.pory"
	walk_down
# 809 "data/maps/CenterTown/scripts.pory"
	walk_down
# 810 "data/maps/CenterTown/scripts.pory"
	step_end
# 811 "data/maps/CenterTown/scripts.pory"

# 812 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 813 "data/maps/CenterTown/scripts.pory"
	walk_down
# 814 "data/maps/CenterTown/scripts.pory"
	walk_down
# 815 "data/maps/CenterTown/scripts.pory"
	walk_down
# 816 "data/maps/CenterTown/scripts.pory"
	walk_down
# 817 "data/maps/CenterTown/scripts.pory"
	walk_down
# 818 "data/maps/CenterTown/scripts.pory"
	step_end
# 819 "data/maps/CenterTown/scripts.pory"

# 820 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 821 "data/maps/CenterTown/scripts.pory"
	walk_left
# 822 "data/maps/CenterTown/scripts.pory"
	walk_left
# 823 "data/maps/CenterTown/scripts.pory"
	walk_left
# 824 "data/maps/CenterTown/scripts.pory"
	walk_left
# 825 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 826 "data/maps/CenterTown/scripts.pory"
	step_end
# 827 "data/maps/CenterTown/scripts.pory"

# 828 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 829 "data/maps/CenterTown/scripts.pory"
	walk_left
# 830 "data/maps/CenterTown/scripts.pory"
	walk_left
# 831 "data/maps/CenterTown/scripts.pory"
	walk_left
# 832 "data/maps/CenterTown/scripts.pory"
	walk_left
# 833 "data/maps/CenterTown/scripts.pory"
	walk_left
# 834 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 835 "data/maps/CenterTown/scripts.pory"
	step_end
# 836 "data/maps/CenterTown/scripts.pory"

# 837 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 838 "data/maps/CenterTown/scripts.pory"
	walk_left
# 839 "data/maps/CenterTown/scripts.pory"
	walk_left
# 840 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 841 "data/maps/CenterTown/scripts.pory"
	step_end
# 842 "data/maps/CenterTown/scripts.pory"

# 843 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 844 "data/maps/CenterTown/scripts.pory"
	walk_left
# 845 "data/maps/CenterTown/scripts.pory"
	walk_left
# 846 "data/maps/CenterTown/scripts.pory"
	walk_left
# 847 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 848 "data/maps/CenterTown/scripts.pory"
	step_end
# 849 "data/maps/CenterTown/scripts.pory"

# 850 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 851 "data/maps/CenterTown/scripts.pory"
	walk_right
# 852 "data/maps/CenterTown/scripts.pory"
	walk_right
# 853 "data/maps/CenterTown/scripts.pory"
	walk_right
# 854 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 855 "data/maps/CenterTown/scripts.pory"
	step_end
# 856 "data/maps/CenterTown/scripts.pory"

# 857 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 858 "data/maps/CenterTown/scripts.pory"
	walk_right
# 859 "data/maps/CenterTown/scripts.pory"
	walk_right
# 860 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 861 "data/maps/CenterTown/scripts.pory"
	step_end
# 862 "data/maps/CenterTown/scripts.pory"

# 863 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 864 "data/maps/CenterTown/scripts.pory"
	walk_right
# 865 "data/maps/CenterTown/scripts.pory"
	walk_right
# 866 "data/maps/CenterTown/scripts.pory"
	walk_right
# 867 "data/maps/CenterTown/scripts.pory"
	walk_right
# 868 "data/maps/CenterTown/scripts.pory"
	walk_right
# 869 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 870 "data/maps/CenterTown/scripts.pory"
	step_end
# 871 "data/maps/CenterTown/scripts.pory"

# 872 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 873 "data/maps/CenterTown/scripts.pory"
	walk_right
# 874 "data/maps/CenterTown/scripts.pory"
	walk_right
# 875 "data/maps/CenterTown/scripts.pory"
	walk_right
# 876 "data/maps/CenterTown/scripts.pory"
	walk_right
# 877 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 878 "data/maps/CenterTown/scripts.pory"
	step_end
# 879 "data/maps/CenterTown/scripts.pory"

# 880 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 881 "data/maps/CenterTown/scripts.pory"
	walk_up
# 882 "data/maps/CenterTown/scripts.pory"
	step_end
# 883 "data/maps/CenterTown/scripts.pory"

# 884 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 885 "data/maps/CenterTown/scripts.pory"
	lock
# 886 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 887 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 888 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 889 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 890 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 891 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 892 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 893 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 894 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 895 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 896 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 897 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 898 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 899 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 900 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 901 "data/maps/CenterTown/scripts.pory"
	end
# 902 "data/maps/CenterTown/scripts.pory"

# 903 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 904 "data/maps/CenterTown/scripts.pory"
	removeobject LOCALID_MOM
# 905 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 906 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 907 "data/maps/CenterTown/scripts.pory"
	release
# 908 "data/maps/CenterTown/scripts.pory"
	end
# 909 "data/maps/CenterTown/scripts.pory"

# 910 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 911 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 912 "data/maps/CenterTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 913 "data/maps/CenterTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 914 "data/maps/CenterTown/scripts.pory"
	waitfanfare
# 915 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 916 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 917 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 918 "data/maps/CenterTown/scripts.pory"
	closemessage
# 919 "data/maps/CenterTown/scripts.pory"
	delay 30
# 920 "data/maps/CenterTown/scripts.pory"
	return
# 921 "data/maps/CenterTown/scripts.pory"

# 922 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 923 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 924 "data/maps/CenterTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 925 "data/maps/CenterTown/scripts.pory"
	.string "in the moving truck.\p"
# 926 "data/maps/CenterTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 927 "data/maps/CenterTown/scripts.pory"
	.string "How do you like it?\n"
# 928 "data/maps/CenterTown/scripts.pory"
	.string "This is our new home!\p"
# 929 "data/maps/CenterTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 930 "data/maps/CenterTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 931 "data/maps/CenterTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 932 "data/maps/CenterTown/scripts.pory"
	.string "Let's go inside.$"
# 933 "data/maps/CenterTown/scripts.pory"

# 934 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 935 "data/maps/CenterTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 936 "data/maps/CenterTown/scripts.pory"

# 937 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 938 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 939 "data/maps/CenterTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 940 "data/maps/CenterTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 941 "data/maps/CenterTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 942 "data/maps/CenterTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 943 "data/maps/CenterTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 944 "data/maps/CenterTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 945 "data/maps/CenterTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 946 "data/maps/CenterTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 947 "data/maps/CenterTown/scripts.pory"

# 948 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 949 "data/maps/CenterTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 950 "data/maps/CenterTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 951 "data/maps/CenterTown/scripts.pory"

# 952 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 953 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 954 "data/maps/CenterTown/scripts.pory"
	.string "instructions.\p"
# 955 "data/maps/CenterTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 956 "data/maps/CenterTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 957 "data/maps/CenterTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 958 "data/maps/CenterTown/scripts.pory"
	.string "in the great outdoors!”$"
# 959 "data/maps/CenterTown/scripts.pory"

# 960 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 961 "data/maps/CenterTown/scripts.pory"
	.string "… … … … … … … …\n"
# 962 "data/maps/CenterTown/scripts.pory"
	.string "… … … … … … … …\p"
# 963 "data/maps/CenterTown/scripts.pory"
	.string "To think that you have your very own\n"
# 964 "data/maps/CenterTown/scripts.pory"
	.string "POKéMON now…\l"
# 965 "data/maps/CenterTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 966 "data/maps/CenterTown/scripts.pory"
	.string "…But please be careful.\n"
# 967 "data/maps/CenterTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 968 "data/maps/CenterTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 969 "data/maps/CenterTown/scripts.pory"

# 970 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 971 "data/maps/CenterTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 972 "data/maps/CenterTown/scripts.pory"
	.string "and POKéMON.\p"
# 973 "data/maps/CenterTown/scripts.pory"
	.string "The power of science is staggering!$"
# 974 "data/maps/CenterTown/scripts.pory"

# 975 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 976 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 977 "data/maps/CenterTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 978 "data/maps/CenterTown/scripts.pory"
	.string "the wild to do more research…\p"
# 979 "data/maps/CenterTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 980 "data/maps/CenterTown/scripts.pory"
	.string "at home?$"
# 981 "data/maps/CenterTown/scripts.pory"

# 982 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 983 "data/maps/CenterTown/scripts.pory"
	.string "Um, um, um!\p"
# 984 "data/maps/CenterTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 985 "data/maps/CenterTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 986 "data/maps/CenterTown/scripts.pory"

# 987 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 988 "data/maps/CenterTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 989 "data/maps/CenterTown/scripts.pory"
	.string "your own POKéMON.$"
# 990 "data/maps/CenterTown/scripts.pory"

# 991 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 992 "data/maps/CenterTown/scripts.pory"
	.string "Um, hi!\p"
# 993 "data/maps/CenterTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 994 "data/maps/CenterTown/scripts.pory"
	.string "I can hear their cries!\p"
# 995 "data/maps/CenterTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 996 "data/maps/CenterTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 997 "data/maps/CenterTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 998 "data/maps/CenterTown/scripts.pory"
	.string "for me?$"
# 999 "data/maps/CenterTown/scripts.pory"

# 1000 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 1001 "data/maps/CenterTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 1002 "data/maps/CenterTown/scripts.pory"
	.string "I'm so glad!$"
# 1003 "data/maps/CenterTown/scripts.pory"

# 1004 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 1005 "data/maps/CenterTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 1006 "data/maps/CenterTown/scripts.pory"
	.string "Good luck!$"
# 1007 "data/maps/CenterTown/scripts.pory"

# 1008 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 1009 "data/maps/CenterTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 1010 "data/maps/CenterTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1011 "data/maps/CenterTown/scripts.pory"

# 1012 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1013 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1014 "data/maps/CenterTown/scripts.pory"

# 1015 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1016 "data/maps/CenterTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1017 "data/maps/CenterTown/scripts.pory"

# 1018 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1019 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1020 "data/maps/CenterTown/scripts.pory"

# 1021 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1022 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1023 "data/maps/CenterTown/scripts.pory"
	.string "That was good work out there!\p"
# 1024 "data/maps/CenterTown/scripts.pory"
	.string "I knew there was something special\n"
# 1025 "data/maps/CenterTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1026 "data/maps/CenterTown/scripts.pory"
	.string "but I never expected this.\p"
# 1027 "data/maps/CenterTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1028 "data/maps/CenterTown/scripts.pory"
	.string "I gave you?\p"
# 1029 "data/maps/CenterTown/scripts.pory"
	.string "I have something to show you.\n"
# 1030 "data/maps/CenterTown/scripts.pory"
	.string "Let's go to my LAB.$"

CenterTown_SuperRod_Text_0:
# 14 "data/maps/CenterTown/scripts.pory"
	.string "Fishing has always been my passion, but\n"
	.string "I haven't caught anything decent in\l"
	.string "this pond...$"

CenterTown_SuperRod_Text_1:
# 16 "data/maps/CenterTown/scripts.pory"
	.string "Maybe you'll have better luck.$"

CenterTown_SuperRod_Text_2:
# 19 "data/maps/CenterTown/scripts.pory"
	.string "How are the fish biting?$"
