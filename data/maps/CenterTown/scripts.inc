CenterTown_MapScripts::
	.byte 0


CenterTown_SuperRod::
# 4 "data/maps/CenterTown/scripts.pory"
	lock
# 5 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 6 "data/maps/CenterTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, CenterTown_SuperRod_2
CenterTown_SuperRod_1:
# 11 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUPER_ROD, CenterTown_SuperRod_5
CenterTown_SuperRod_4:
# 14 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 15 "data/maps/CenterTown/scripts.pory"
	release
	return

CenterTown_SuperRod_2:
# 7 "data/maps/CenterTown/scripts.pory"
	msgbox CenterTown_SuperRod_Text_0
# 8 "data/maps/CenterTown/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 9 "data/maps/CenterTown/scripts.pory"
	msgbox CenterTown_SuperRod_Text_1
	goto CenterTown_SuperRod_1

CenterTown_SuperRod_5:
# 12 "data/maps/CenterTown/scripts.pory"
	msgbox CenterTown_SuperRod_Text_2
	goto CenterTown_SuperRod_4


# 18 "data/maps/CenterTown/scripts.pory"

# 19 "data/maps/CenterTown/scripts.pory"
.set LOCALID_TWIN, 1
# 20 "data/maps/CenterTown/scripts.pory"
.set LOCALID_MOM, 4
# 21 "data/maps/CenterTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 22 "data/maps/CenterTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 23 "data/maps/CenterTown/scripts.pory"

# 24 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 25 "data/maps/CenterTown/scripts.pory"
	@ 1: Met Rival
# 26 "data/maps/CenterTown/scripts.pory"
	@ 2: Saving Birch
# 27 "data/maps/CenterTown/scripts.pory"
	@ 3: Received Pokedex
# 28 "data/maps/CenterTown/scripts.pory"
	@ 4: Received Running Shoes
# 29 "data/maps/CenterTown/scripts.pory"

# 30 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_CENTER_INTRO_STATE
# 31 "data/maps/CenterTown/scripts.pory"
	@ 1: In truck male
# 32 "data/maps/CenterTown/scripts.pory"
	@ 2: In truck female
# 33 "data/maps/CenterTown/scripts.pory"
	@ 3: Entered house
# 34 "data/maps/CenterTown/scripts.pory"
	@ 4: Told to go set clock
# 35 "data/maps/CenterTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 36 "data/maps/CenterTown/scripts.pory"
	@ 6: Set clock
# 37 "data/maps/CenterTown/scripts.pory"
	@ 7: Told to go meet rival
# 38 "data/maps/CenterTown/scripts.pory"

# 39 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 40 "data/maps/CenterTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 41 "data/maps/CenterTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 42 "data/maps/CenterTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 43 "data/maps/CenterTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 44 "data/maps/CenterTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 45 "data/maps/CenterTown/scripts.pory"
	@ 5: Exited house after above event
# 46 "data/maps/CenterTown/scripts.pory"

# 47 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 48 "data/maps/CenterTown/scripts.pory"
	@ 1: Never occurs
# 49 "data/maps/CenterTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 50 "data/maps/CenterTown/scripts.pory"
	@ 3: Met Rival
# 51 "data/maps/CenterTown/scripts.pory"
	@ 4: Received Pokedex
# 52 "data/maps/CenterTown/scripts.pory"

# 53 "data/maps/CenterTown/scripts.pory"

# 54 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnTransition:
# 55 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_VISITED_CENTER_TOWN
# 56 "data/maps/CenterTown/scripts.pory"
	end
# 57 "data/maps/CenterTown/scripts.pory"

# 58 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 59 "data/maps/CenterTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 60 "data/maps/CenterTown/scripts.pory"
	return
# 61 "data/maps/CenterTown/scripts.pory"

# 62 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 63 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/CenterTown/scripts.pory"
	return
# 65 "data/maps/CenterTown/scripts.pory"

# 66 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 67 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 68 "data/maps/CenterTown/scripts.pory"
	return
# 69 "data/maps/CenterTown/scripts.pory"

# 70 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 71 "data/maps/CenterTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 72 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 73 "data/maps/CenterTown/scripts.pory"
	return
# 74 "data/maps/CenterTown/scripts.pory"

# 75 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 76 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 77 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 78 "data/maps/CenterTown/scripts.pory"
	return
# 79 "data/maps/CenterTown/scripts.pory"

# 80 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 81 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 82 "data/maps/CenterTown/scripts.pory"
	return
# 83 "data/maps/CenterTown/scripts.pory"

# 84 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 85 "data/maps/CenterTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 86 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 87 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 88 "data/maps/CenterTown/scripts.pory"
	return
# 89 "data/maps/CenterTown/scripts.pory"

# 90 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 91 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 92 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 93 "data/maps/CenterTown/scripts.pory"
	return
# 94 "data/maps/CenterTown/scripts.pory"

# 95 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 96 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 97 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 98 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 99 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 100 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 101 "data/maps/CenterTown/scripts.pory"
	return
# 102 "data/maps/CenterTown/scripts.pory"

# 103 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 104 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 105 "data/maps/CenterTown/scripts.pory"
	return
# 106 "data/maps/CenterTown/scripts.pory"

# 107 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 108 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 109 "data/maps/CenterTown/scripts.pory"
	return
# 110 "data/maps/CenterTown/scripts.pory"

# 111 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnFrame:
# 112 "data/maps/CenterTown/scripts.pory"
	.2byte 0
# 113 "data/maps/CenterTown/scripts.pory"

# 114 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 115 "data/maps/CenterTown/scripts.pory"
	lockall
# 116 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8004, 5
# 117 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8005, 8
# 118 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 119 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 120 "data/maps/CenterTown/scripts.pory"
	warpsilent MAP_CENTER_TOWN_PLAYERS_HOUSE_1F, 8, 8
# 121 "data/maps/CenterTown/scripts.pory"
	waitstate
# 122 "data/maps/CenterTown/scripts.pory"
	releaseall
# 123 "data/maps/CenterTown/scripts.pory"
	end
# 124 "data/maps/CenterTown/scripts.pory"

# 125 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 126 "data/maps/CenterTown/scripts.pory"
	lockall
# 127 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8004, 14
# 128 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8005, 8
# 129 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 130 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 131 "data/maps/CenterTown/scripts.pory"
	waitstate
# 132 "data/maps/CenterTown/scripts.pory"
	releaseall
# 133 "data/maps/CenterTown/scripts.pory"
	end
# 134 "data/maps/CenterTown/scripts.pory"

# 135 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 136 "data/maps/CenterTown/scripts.pory"
	delay 15
# 137 "data/maps/CenterTown/scripts.pory"
	playse SE_LEDGE
# 138 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 139 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 141 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 142 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_MOM
# 143 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 144 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 146 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 147 "data/maps/CenterTown/scripts.pory"
	delay 10
# 148 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 149 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 151 "data/maps/CenterTown/scripts.pory"
	closemessage
# 152 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 153 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 154 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 155 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 156 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 157 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 158 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 159 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 161 "data/maps/CenterTown/scripts.pory"
	setvar VAR_CENTER_INTRO_STATE, 3
# 162 "data/maps/CenterTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 163 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 164 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 165 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 166 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 167 "data/maps/CenterTown/scripts.pory"
	return
# 168 "data/maps/CenterTown/scripts.pory"

# 169 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 170 "data/maps/CenterTown/scripts.pory"
	walk_down
# 171 "data/maps/CenterTown/scripts.pory"
	step_end
# 172 "data/maps/CenterTown/scripts.pory"

# 173 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 174 "data/maps/CenterTown/scripts.pory"
	walk_down
# 175 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_left
# 176 "data/maps/CenterTown/scripts.pory"
	step_end
# 177 "data/maps/CenterTown/scripts.pory"

# 178 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 179 "data/maps/CenterTown/scripts.pory"
	delay_16
# 180 "data/maps/CenterTown/scripts.pory"
	delay_8
# 181 "data/maps/CenterTown/scripts.pory"
	walk_up
# 182 "data/maps/CenterTown/scripts.pory"
	step_end
# 183 "data/maps/CenterTown/scripts.pory"

# 184 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 185 "data/maps/CenterTown/scripts.pory"
	walk_up
# 186 "data/maps/CenterTown/scripts.pory"
	set_invisible
# 187 "data/maps/CenterTown/scripts.pory"
	step_end
# 188 "data/maps/CenterTown/scripts.pory"

# 189 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 190 "data/maps/CenterTown/scripts.pory"
	delay_16
# 191 "data/maps/CenterTown/scripts.pory"
	delay_8
# 192 "data/maps/CenterTown/scripts.pory"
	walk_right
# 193 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 194 "data/maps/CenterTown/scripts.pory"
	step_end
# 195 "data/maps/CenterTown/scripts.pory"

# 196 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 197 "data/maps/CenterTown/scripts.pory"
	walk_up
# 198 "data/maps/CenterTown/scripts.pory"
	walk_up
# 199 "data/maps/CenterTown/scripts.pory"
	step_end
# 200 "data/maps/CenterTown/scripts.pory"

# 201 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 202 "data/maps/CenterTown/scripts.pory"
	jump_right
# 203 "data/maps/CenterTown/scripts.pory"
	delay_16
# 204 "data/maps/CenterTown/scripts.pory"
	delay_16
# 205 "data/maps/CenterTown/scripts.pory"
	delay_16
# 206 "data/maps/CenterTown/scripts.pory"
	step_end
# 207 "data/maps/CenterTown/scripts.pory"

# 208 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 209 "data/maps/CenterTown/scripts.pory"
	lockall
# 210 "data/maps/CenterTown/scripts.pory"
	playse SE_PIN
# 211 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 212 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/CenterTown/scripts.pory"
	delay 80
# 214 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 215 "data/maps/CenterTown/scripts.pory"
	closemessage
# 216 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 217 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 218 "data/maps/CenterTown/scripts.pory"
	delay 20
# 219 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 220 "data/maps/CenterTown/scripts.pory"
	warp MAP_CENTER_TOWN_LAB, 6, 5
# 221 "data/maps/CenterTown/scripts.pory"
	waitstate
# 222 "data/maps/CenterTown/scripts.pory"
	releaseall
# 223 "data/maps/CenterTown/scripts.pory"
	end
# 224 "data/maps/CenterTown/scripts.pory"

# 225 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnWarp:
# 226 "data/maps/CenterTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 227 "data/maps/CenterTown/scripts.pory"
	.2byte 0
# 228 "data/maps/CenterTown/scripts.pory"

# 229 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 230 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_BIRCH
# 231 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_RIVAL
# 232 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 233 "data/maps/CenterTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 234 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 235 "data/maps/CenterTown/scripts.pory"
	end
# 236 "data/maps/CenterTown/scripts.pory"

# 237 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 238 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 239 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 240 "data/maps/CenterTown/scripts.pory"
	end
# 241 "data/maps/CenterTown/scripts.pory"

# 242 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 243 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 244 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 245 "data/maps/CenterTown/scripts.pory"
	end
# 246 "data/maps/CenterTown/scripts.pory"

# 247 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 248 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 249 "data/maps/CenterTown/scripts.pory"
	end
# 250 "data/maps/CenterTown/scripts.pory"

# 251 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 252 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 253 "data/maps/CenterTown/scripts.pory"
	end
# 254 "data/maps/CenterTown/scripts.pory"

# 255 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 256 "data/maps/CenterTown/scripts.pory"
	lock
# 257 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 258 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 259 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 260 "data/maps/CenterTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 261 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 262 "data/maps/CenterTown/scripts.pory"
	release
# 263 "data/maps/CenterTown/scripts.pory"
	end
# 264 "data/maps/CenterTown/scripts.pory"

# 265 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 266 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 267 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 268 "data/maps/CenterTown/scripts.pory"
	closemessage
# 269 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 270 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 272 "data/maps/CenterTown/scripts.pory"
	release
# 273 "data/maps/CenterTown/scripts.pory"
	end
# 274 "data/maps/CenterTown/scripts.pory"

# 275 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 276 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 277 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 278 "data/maps/CenterTown/scripts.pory"
	release
# 279 "data/maps/CenterTown/scripts.pory"
	end
# 280 "data/maps/CenterTown/scripts.pory"

# 281 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 282 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 283 "data/maps/CenterTown/scripts.pory"
	release
# 284 "data/maps/CenterTown/scripts.pory"
	end
# 285 "data/maps/CenterTown/scripts.pory"

# 286 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 287 "data/maps/CenterTown/scripts.pory"
	lockall
# 288 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 289 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 291 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 292 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 293 "data/maps/CenterTown/scripts.pory"
	releaseall
# 294 "data/maps/CenterTown/scripts.pory"
	end
# 295 "data/maps/CenterTown/scripts.pory"

# 296 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 297 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 298 "data/maps/CenterTown/scripts.pory"
	closemessage
# 299 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 300 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 301 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 302 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 303 "data/maps/CenterTown/scripts.pory"
	closemessage
# 304 "data/maps/CenterTown/scripts.pory"
	return
# 305 "data/maps/CenterTown/scripts.pory"

# 306 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 307 "data/maps/CenterTown/scripts.pory"
	face_right
# 308 "data/maps/CenterTown/scripts.pory"
	delay_8
# 309 "data/maps/CenterTown/scripts.pory"
	disable_jump_landing_ground_effect
# 310 "data/maps/CenterTown/scripts.pory"
	jump_in_place_right
# 311 "data/maps/CenterTown/scripts.pory"
	delay_8
# 312 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 313 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 314 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 315 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 317 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 318 "data/maps/CenterTown/scripts.pory"
	walk_fast_left
# 319 "data/maps/CenterTown/scripts.pory"
	face_down
# 320 "data/maps/CenterTown/scripts.pory"
	step_end
# 321 "data/maps/CenterTown/scripts.pory"

# 322 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 323 "data/maps/CenterTown/scripts.pory"
	walk_down
# 324 "data/maps/CenterTown/scripts.pory"
	step_end
# 325 "data/maps/CenterTown/scripts.pory"

# 326 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 327 "data/maps/CenterTown/scripts.pory"
	walk_right
# 328 "data/maps/CenterTown/scripts.pory"
	walk_down
# 329 "data/maps/CenterTown/scripts.pory"
	walk_down
# 330 "data/maps/CenterTown/scripts.pory"
	walk_left
# 331 "data/maps/CenterTown/scripts.pory"
	walk_left
# 332 "data/maps/CenterTown/scripts.pory"
	walk_left
# 333 "data/maps/CenterTown/scripts.pory"
	walk_left
# 334 "data/maps/CenterTown/scripts.pory"
	walk_up
# 335 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_down
# 336 "data/maps/CenterTown/scripts.pory"
	step_end
# 337 "data/maps/CenterTown/scripts.pory"

# 338 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 339 "data/maps/CenterTown/scripts.pory"
	lock_facing_direction
# 340 "data/maps/CenterTown/scripts.pory"
	walk_down
# 341 "data/maps/CenterTown/scripts.pory"
	unlock_facing_direction
# 342 "data/maps/CenterTown/scripts.pory"
	step_end
# 343 "data/maps/CenterTown/scripts.pory"

# 344 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 345 "data/maps/CenterTown/scripts.pory"
	lockall
# 346 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 347 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 348 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 349 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 350 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 351 "data/maps/CenterTown/scripts.pory"
	releaseall
# 352 "data/maps/CenterTown/scripts.pory"
	end
# 353 "data/maps/CenterTown/scripts.pory"

# 354 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 355 "data/maps/CenterTown/scripts.pory"
	face_right
# 356 "data/maps/CenterTown/scripts.pory"
	delay_8
# 357 "data/maps/CenterTown/scripts.pory"
	disable_jump_landing_ground_effect
# 358 "data/maps/CenterTown/scripts.pory"
	jump_in_place_right
# 359 "data/maps/CenterTown/scripts.pory"
	delay_8
# 360 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 361 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 362 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 363 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 364 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 365 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 366 "data/maps/CenterTown/scripts.pory"
	face_down
# 367 "data/maps/CenterTown/scripts.pory"
	step_end
# 368 "data/maps/CenterTown/scripts.pory"

# 369 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 370 "data/maps/CenterTown/scripts.pory"
	walk_left
# 371 "data/maps/CenterTown/scripts.pory"
	walk_down
# 372 "data/maps/CenterTown/scripts.pory"
	walk_left
# 373 "data/maps/CenterTown/scripts.pory"
	walk_left
# 374 "data/maps/CenterTown/scripts.pory"
	walk_left
# 375 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_down
# 376 "data/maps/CenterTown/scripts.pory"
	step_end
# 377 "data/maps/CenterTown/scripts.pory"

# 378 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 379 "data/maps/CenterTown/scripts.pory"
	lockall
# 380 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 381 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 383 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 385 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 386 "data/maps/CenterTown/scripts.pory"
	closemessage
# 387 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 388 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 390 "data/maps/CenterTown/scripts.pory"
	releaseall
# 391 "data/maps/CenterTown/scripts.pory"
	end
# 392 "data/maps/CenterTown/scripts.pory"

# 393 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 394 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 395 "data/maps/CenterTown/scripts.pory"
	end
# 396 "data/maps/CenterTown/scripts.pory"

# 397 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 398 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 399 "data/maps/CenterTown/scripts.pory"
	end
# 400 "data/maps/CenterTown/scripts.pory"

# 401 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 402 "data/maps/CenterTown/scripts.pory"
	lockall
# 403 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 404 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 405 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 406 "data/maps/CenterTown/scripts.pory"
	releaseall
# 407 "data/maps/CenterTown/scripts.pory"
	end
# 408 "data/maps/CenterTown/scripts.pory"

# 409 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 410 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 411 "data/maps/CenterTown/scripts.pory"
	return
# 412 "data/maps/CenterTown/scripts.pory"

# 413 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 414 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 415 "data/maps/CenterTown/scripts.pory"
	return
# 416 "data/maps/CenterTown/scripts.pory"

# 417 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 418 "data/maps/CenterTown/scripts.pory"
	lockall
# 419 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 420 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 421 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 422 "data/maps/CenterTown/scripts.pory"
	releaseall
# 423 "data/maps/CenterTown/scripts.pory"
	end
# 424 "data/maps/CenterTown/scripts.pory"

# 425 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 426 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 427 "data/maps/CenterTown/scripts.pory"
	return
# 428 "data/maps/CenterTown/scripts.pory"

# 429 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 430 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 431 "data/maps/CenterTown/scripts.pory"
	return
# 432 "data/maps/CenterTown/scripts.pory"

# 433 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 434 "data/maps/CenterTown/scripts.pory"
	lockall
# 435 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 0
# 436 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 437 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 438 "data/maps/CenterTown/scripts.pory"
	end
# 439 "data/maps/CenterTown/scripts.pory"

# 440 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 441 "data/maps/CenterTown/scripts.pory"
	lockall
# 442 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 1
# 443 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 444 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 445 "data/maps/CenterTown/scripts.pory"
	end
# 446 "data/maps/CenterTown/scripts.pory"

# 447 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 448 "data/maps/CenterTown/scripts.pory"
	lockall
# 449 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 2
# 450 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 451 "data/maps/CenterTown/scripts.pory"
	end
# 452 "data/maps/CenterTown/scripts.pory"

# 453 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 454 "data/maps/CenterTown/scripts.pory"
	lockall
# 455 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 3
# 456 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 457 "data/maps/CenterTown/scripts.pory"
	end
# 458 "data/maps/CenterTown/scripts.pory"

# 459 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 460 "data/maps/CenterTown/scripts.pory"
	lockall
# 461 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 4
# 462 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 463 "data/maps/CenterTown/scripts.pory"
	end
# 464 "data/maps/CenterTown/scripts.pory"

# 465 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 466 "data/maps/CenterTown/scripts.pory"
	lockall
# 467 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 5
# 468 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 469 "data/maps/CenterTown/scripts.pory"
	end
# 470 "data/maps/CenterTown/scripts.pory"

# 471 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 472 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 473 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 474 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 475 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 476 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 477 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 478 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 479 "data/maps/CenterTown/scripts.pory"
	closemessage
# 480 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 481 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 482 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 483 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 484 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 485 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 486 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 487 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 488 "data/maps/CenterTown/scripts.pory"
	end
# 489 "data/maps/CenterTown/scripts.pory"

# 490 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 491 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8009, 5
# 492 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x800A, 8
# 493 "data/maps/CenterTown/scripts.pory"
	return
# 494 "data/maps/CenterTown/scripts.pory"

# 495 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 496 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8009, 14
# 497 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x800A, 8
# 498 "data/maps/CenterTown/scripts.pory"
	return
# 499 "data/maps/CenterTown/scripts.pory"

# 500 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 501 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 502 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 503 "data/maps/CenterTown/scripts.pory"
	return
# 504 "data/maps/CenterTown/scripts.pory"

# 505 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 506 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 507 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 508 "data/maps/CenterTown/scripts.pory"
	return
# 509 "data/maps/CenterTown/scripts.pory"

# 510 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 511 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 512 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 513 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 514 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 515 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 516 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 517 "data/maps/CenterTown/scripts.pory"
	return
# 518 "data/maps/CenterTown/scripts.pory"

# 519 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 520 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 521 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 522 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 523 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 524 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 525 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 526 "data/maps/CenterTown/scripts.pory"
	return
# 527 "data/maps/CenterTown/scripts.pory"

# 528 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 529 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 530 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 531 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 532 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 533 "data/maps/CenterTown/scripts.pory"
	return
# 534 "data/maps/CenterTown/scripts.pory"

# 535 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 536 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 537 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 538 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 539 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 540 "data/maps/CenterTown/scripts.pory"
	return
# 541 "data/maps/CenterTown/scripts.pory"

# 542 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 543 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 544 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 545 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 546 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/CenterTown/scripts.pory"
	return
# 548 "data/maps/CenterTown/scripts.pory"

# 549 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 550 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 551 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 552 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 553 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 554 "data/maps/CenterTown/scripts.pory"
	return
# 555 "data/maps/CenterTown/scripts.pory"

# 556 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 557 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 558 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 560 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 561 "data/maps/CenterTown/scripts.pory"
	return
# 562 "data/maps/CenterTown/scripts.pory"

# 563 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 564 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 565 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 567 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 568 "data/maps/CenterTown/scripts.pory"
	return
# 569 "data/maps/CenterTown/scripts.pory"

# 570 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 571 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 572 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 574 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 575 "data/maps/CenterTown/scripts.pory"
	return
# 576 "data/maps/CenterTown/scripts.pory"

# 577 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 578 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 579 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 581 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/CenterTown/scripts.pory"
	return
# 583 "data/maps/CenterTown/scripts.pory"

# 584 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 585 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 586 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 588 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 589 "data/maps/CenterTown/scripts.pory"
	return
# 590 "data/maps/CenterTown/scripts.pory"

# 591 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 592 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 593 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 595 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 596 "data/maps/CenterTown/scripts.pory"
	return
# 597 "data/maps/CenterTown/scripts.pory"

# 598 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 599 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 600 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 601 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 602 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 603 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 604 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 605 "data/maps/CenterTown/scripts.pory"
	return
# 606 "data/maps/CenterTown/scripts.pory"

# 607 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 608 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 609 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 610 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 611 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 612 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 613 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 614 "data/maps/CenterTown/scripts.pory"
	return
# 615 "data/maps/CenterTown/scripts.pory"

# 616 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 617 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 618 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 619 "data/maps/CenterTown/scripts.pory"
	return
# 620 "data/maps/CenterTown/scripts.pory"

# 621 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 622 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 623 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 624 "data/maps/CenterTown/scripts.pory"
	return
# 625 "data/maps/CenterTown/scripts.pory"

# 626 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 627 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 628 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 630 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 631 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 632 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 633 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 634 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 635 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 636 "data/maps/CenterTown/scripts.pory"
	return
# 637 "data/maps/CenterTown/scripts.pory"

# 638 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 639 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
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
LittlerootTown_EventScript_MomReturnHomeMale4::
# 651 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
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
LittlerootTown_EventScript_MomReturnHomeMale5::
# 663 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
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
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 675 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
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
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 687 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
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
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 699 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
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
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 711 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
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
LittlerootTown_Movement_MomApproachPlayer0:
# 723 "data/maps/CenterTown/scripts.pory"
	walk_up
# 724 "data/maps/CenterTown/scripts.pory"
	walk_up
# 725 "data/maps/CenterTown/scripts.pory"
	walk_up
# 726 "data/maps/CenterTown/scripts.pory"
	walk_up
# 727 "data/maps/CenterTown/scripts.pory"
	walk_up
# 728 "data/maps/CenterTown/scripts.pory"
	walk_up
# 729 "data/maps/CenterTown/scripts.pory"
	step_end
# 730 "data/maps/CenterTown/scripts.pory"

# 731 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 732 "data/maps/CenterTown/scripts.pory"
	walk_up
# 733 "data/maps/CenterTown/scripts.pory"
	walk_up
# 734 "data/maps/CenterTown/scripts.pory"
	walk_up
# 735 "data/maps/CenterTown/scripts.pory"
	walk_up
# 736 "data/maps/CenterTown/scripts.pory"
	walk_up
# 737 "data/maps/CenterTown/scripts.pory"
	walk_up
# 738 "data/maps/CenterTown/scripts.pory"
	step_end
# 739 "data/maps/CenterTown/scripts.pory"

# 740 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 741 "data/maps/CenterTown/scripts.pory"
	walk_right
# 742 "data/maps/CenterTown/scripts.pory"
	walk_right
# 743 "data/maps/CenterTown/scripts.pory"
	walk_right
# 744 "data/maps/CenterTown/scripts.pory"
	walk_right
# 745 "data/maps/CenterTown/scripts.pory"
	step_end
# 746 "data/maps/CenterTown/scripts.pory"

# 747 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 748 "data/maps/CenterTown/scripts.pory"
	walk_right
# 749 "data/maps/CenterTown/scripts.pory"
	walk_right
# 750 "data/maps/CenterTown/scripts.pory"
	walk_right
# 751 "data/maps/CenterTown/scripts.pory"
	walk_right
# 752 "data/maps/CenterTown/scripts.pory"
	walk_right
# 753 "data/maps/CenterTown/scripts.pory"
	step_end
# 754 "data/maps/CenterTown/scripts.pory"

# 755 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 756 "data/maps/CenterTown/scripts.pory"
	walk_right
# 757 "data/maps/CenterTown/scripts.pory"
	walk_right
# 758 "data/maps/CenterTown/scripts.pory"
	step_end
# 759 "data/maps/CenterTown/scripts.pory"

# 760 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 761 "data/maps/CenterTown/scripts.pory"
	walk_right
# 762 "data/maps/CenterTown/scripts.pory"
	walk_right
# 763 "data/maps/CenterTown/scripts.pory"
	walk_right
# 764 "data/maps/CenterTown/scripts.pory"
	step_end
# 765 "data/maps/CenterTown/scripts.pory"

# 766 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 767 "data/maps/CenterTown/scripts.pory"
	walk_left
# 768 "data/maps/CenterTown/scripts.pory"
	walk_left
# 769 "data/maps/CenterTown/scripts.pory"
	walk_left
# 770 "data/maps/CenterTown/scripts.pory"
	step_end
# 771 "data/maps/CenterTown/scripts.pory"

# 772 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 773 "data/maps/CenterTown/scripts.pory"
	walk_left
# 774 "data/maps/CenterTown/scripts.pory"
	walk_left
# 775 "data/maps/CenterTown/scripts.pory"
	step_end
# 776 "data/maps/CenterTown/scripts.pory"

# 777 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 778 "data/maps/CenterTown/scripts.pory"
	walk_left
# 779 "data/maps/CenterTown/scripts.pory"
	walk_left
# 780 "data/maps/CenterTown/scripts.pory"
	walk_left
# 781 "data/maps/CenterTown/scripts.pory"
	walk_left
# 782 "data/maps/CenterTown/scripts.pory"
	walk_left
# 783 "data/maps/CenterTown/scripts.pory"
	step_end
# 784 "data/maps/CenterTown/scripts.pory"

# 785 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 786 "data/maps/CenterTown/scripts.pory"
	walk_left
# 787 "data/maps/CenterTown/scripts.pory"
	walk_left
# 788 "data/maps/CenterTown/scripts.pory"
	walk_left
# 789 "data/maps/CenterTown/scripts.pory"
	walk_left
# 790 "data/maps/CenterTown/scripts.pory"
	step_end
# 791 "data/maps/CenterTown/scripts.pory"

# 792 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 793 "data/maps/CenterTown/scripts.pory"
	walk_down
# 794 "data/maps/CenterTown/scripts.pory"
	walk_down
# 795 "data/maps/CenterTown/scripts.pory"
	walk_down
# 796 "data/maps/CenterTown/scripts.pory"
	walk_down
# 797 "data/maps/CenterTown/scripts.pory"
	walk_down
# 798 "data/maps/CenterTown/scripts.pory"
	step_end
# 799 "data/maps/CenterTown/scripts.pory"

# 800 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 801 "data/maps/CenterTown/scripts.pory"
	walk_down
# 802 "data/maps/CenterTown/scripts.pory"
	walk_down
# 803 "data/maps/CenterTown/scripts.pory"
	walk_down
# 804 "data/maps/CenterTown/scripts.pory"
	walk_down
# 805 "data/maps/CenterTown/scripts.pory"
	walk_down
# 806 "data/maps/CenterTown/scripts.pory"
	step_end
# 807 "data/maps/CenterTown/scripts.pory"

# 808 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 809 "data/maps/CenterTown/scripts.pory"
	walk_left
# 810 "data/maps/CenterTown/scripts.pory"
	walk_left
# 811 "data/maps/CenterTown/scripts.pory"
	walk_left
# 812 "data/maps/CenterTown/scripts.pory"
	walk_left
# 813 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 814 "data/maps/CenterTown/scripts.pory"
	step_end
# 815 "data/maps/CenterTown/scripts.pory"

# 816 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 817 "data/maps/CenterTown/scripts.pory"
	walk_left
# 818 "data/maps/CenterTown/scripts.pory"
	walk_left
# 819 "data/maps/CenterTown/scripts.pory"
	walk_left
# 820 "data/maps/CenterTown/scripts.pory"
	walk_left
# 821 "data/maps/CenterTown/scripts.pory"
	walk_left
# 822 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 823 "data/maps/CenterTown/scripts.pory"
	step_end
# 824 "data/maps/CenterTown/scripts.pory"

# 825 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 826 "data/maps/CenterTown/scripts.pory"
	walk_left
# 827 "data/maps/CenterTown/scripts.pory"
	walk_left
# 828 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 829 "data/maps/CenterTown/scripts.pory"
	step_end
# 830 "data/maps/CenterTown/scripts.pory"

# 831 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 832 "data/maps/CenterTown/scripts.pory"
	walk_left
# 833 "data/maps/CenterTown/scripts.pory"
	walk_left
# 834 "data/maps/CenterTown/scripts.pory"
	walk_left
# 835 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 836 "data/maps/CenterTown/scripts.pory"
	step_end
# 837 "data/maps/CenterTown/scripts.pory"

# 838 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 839 "data/maps/CenterTown/scripts.pory"
	walk_right
# 840 "data/maps/CenterTown/scripts.pory"
	walk_right
# 841 "data/maps/CenterTown/scripts.pory"
	walk_right
# 842 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 843 "data/maps/CenterTown/scripts.pory"
	step_end
# 844 "data/maps/CenterTown/scripts.pory"

# 845 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 846 "data/maps/CenterTown/scripts.pory"
	walk_right
# 847 "data/maps/CenterTown/scripts.pory"
	walk_right
# 848 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 849 "data/maps/CenterTown/scripts.pory"
	step_end
# 850 "data/maps/CenterTown/scripts.pory"

# 851 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 852 "data/maps/CenterTown/scripts.pory"
	walk_right
# 853 "data/maps/CenterTown/scripts.pory"
	walk_right
# 854 "data/maps/CenterTown/scripts.pory"
	walk_right
# 855 "data/maps/CenterTown/scripts.pory"
	walk_right
# 856 "data/maps/CenterTown/scripts.pory"
	walk_right
# 857 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 858 "data/maps/CenterTown/scripts.pory"
	step_end
# 859 "data/maps/CenterTown/scripts.pory"

# 860 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 861 "data/maps/CenterTown/scripts.pory"
	walk_right
# 862 "data/maps/CenterTown/scripts.pory"
	walk_right
# 863 "data/maps/CenterTown/scripts.pory"
	walk_right
# 864 "data/maps/CenterTown/scripts.pory"
	walk_right
# 865 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 866 "data/maps/CenterTown/scripts.pory"
	step_end
# 867 "data/maps/CenterTown/scripts.pory"

# 868 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 869 "data/maps/CenterTown/scripts.pory"
	walk_up
# 870 "data/maps/CenterTown/scripts.pory"
	step_end
# 871 "data/maps/CenterTown/scripts.pory"

# 872 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 873 "data/maps/CenterTown/scripts.pory"
	lock
# 874 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 875 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 876 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 877 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 878 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 879 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 880 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 881 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 882 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 883 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 884 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 885 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 886 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 887 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 888 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 889 "data/maps/CenterTown/scripts.pory"
	end
# 890 "data/maps/CenterTown/scripts.pory"

# 891 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 892 "data/maps/CenterTown/scripts.pory"
	removeobject LOCALID_MOM
# 893 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 894 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 895 "data/maps/CenterTown/scripts.pory"
	release
# 896 "data/maps/CenterTown/scripts.pory"
	end
# 897 "data/maps/CenterTown/scripts.pory"

# 898 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 899 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 900 "data/maps/CenterTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 901 "data/maps/CenterTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 902 "data/maps/CenterTown/scripts.pory"
	waitfanfare
# 903 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 904 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 905 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 906 "data/maps/CenterTown/scripts.pory"
	closemessage
# 907 "data/maps/CenterTown/scripts.pory"
	delay 30
# 908 "data/maps/CenterTown/scripts.pory"
	return
# 909 "data/maps/CenterTown/scripts.pory"

# 910 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 911 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 912 "data/maps/CenterTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 913 "data/maps/CenterTown/scripts.pory"
	.string "in the moving truck.\p"
# 914 "data/maps/CenterTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 915 "data/maps/CenterTown/scripts.pory"
	.string "How do you like it?\n"
# 916 "data/maps/CenterTown/scripts.pory"
	.string "This is our new home!\p"
# 917 "data/maps/CenterTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 918 "data/maps/CenterTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 919 "data/maps/CenterTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 920 "data/maps/CenterTown/scripts.pory"
	.string "Let's go inside.$"
# 921 "data/maps/CenterTown/scripts.pory"

# 922 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 923 "data/maps/CenterTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 924 "data/maps/CenterTown/scripts.pory"

# 925 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 926 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 927 "data/maps/CenterTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 928 "data/maps/CenterTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 929 "data/maps/CenterTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 930 "data/maps/CenterTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 931 "data/maps/CenterTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 932 "data/maps/CenterTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 933 "data/maps/CenterTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 934 "data/maps/CenterTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 935 "data/maps/CenterTown/scripts.pory"

# 936 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 937 "data/maps/CenterTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 938 "data/maps/CenterTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 939 "data/maps/CenterTown/scripts.pory"

# 940 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 941 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 942 "data/maps/CenterTown/scripts.pory"
	.string "instructions.\p"
# 943 "data/maps/CenterTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 944 "data/maps/CenterTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 945 "data/maps/CenterTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 946 "data/maps/CenterTown/scripts.pory"
	.string "in the great outdoors!”$"
# 947 "data/maps/CenterTown/scripts.pory"

# 948 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 949 "data/maps/CenterTown/scripts.pory"
	.string "… … … … … … … …\n"
# 950 "data/maps/CenterTown/scripts.pory"
	.string "… … … … … … … …\p"
# 951 "data/maps/CenterTown/scripts.pory"
	.string "To think that you have your very own\n"
# 952 "data/maps/CenterTown/scripts.pory"
	.string "POKéMON now…\l"
# 953 "data/maps/CenterTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 954 "data/maps/CenterTown/scripts.pory"
	.string "…But please be careful.\n"
# 955 "data/maps/CenterTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 956 "data/maps/CenterTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 957 "data/maps/CenterTown/scripts.pory"

# 958 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 959 "data/maps/CenterTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 960 "data/maps/CenterTown/scripts.pory"
	.string "and POKéMON.\p"
# 961 "data/maps/CenterTown/scripts.pory"
	.string "The power of science is staggering!$"
# 962 "data/maps/CenterTown/scripts.pory"

# 963 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 964 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 965 "data/maps/CenterTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 966 "data/maps/CenterTown/scripts.pory"
	.string "the wild to do more research…\p"
# 967 "data/maps/CenterTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 968 "data/maps/CenterTown/scripts.pory"
	.string "at home?$"
# 969 "data/maps/CenterTown/scripts.pory"

# 970 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 971 "data/maps/CenterTown/scripts.pory"
	.string "Um, um, um!\p"
# 972 "data/maps/CenterTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 973 "data/maps/CenterTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 974 "data/maps/CenterTown/scripts.pory"

# 975 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 976 "data/maps/CenterTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 977 "data/maps/CenterTown/scripts.pory"
	.string "your own POKéMON.$"
# 978 "data/maps/CenterTown/scripts.pory"

# 979 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 980 "data/maps/CenterTown/scripts.pory"
	.string "Um, hi!\p"
# 981 "data/maps/CenterTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 982 "data/maps/CenterTown/scripts.pory"
	.string "I can hear their cries!\p"
# 983 "data/maps/CenterTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 984 "data/maps/CenterTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 985 "data/maps/CenterTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 986 "data/maps/CenterTown/scripts.pory"
	.string "for me?$"
# 987 "data/maps/CenterTown/scripts.pory"

# 988 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 989 "data/maps/CenterTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 990 "data/maps/CenterTown/scripts.pory"
	.string "I'm so glad!$"
# 991 "data/maps/CenterTown/scripts.pory"

# 992 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 993 "data/maps/CenterTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 994 "data/maps/CenterTown/scripts.pory"
	.string "Good luck!$"
# 995 "data/maps/CenterTown/scripts.pory"

# 996 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 997 "data/maps/CenterTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 998 "data/maps/CenterTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 999 "data/maps/CenterTown/scripts.pory"

# 1000 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1001 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 1002 "data/maps/CenterTown/scripts.pory"

# 1003 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1004 "data/maps/CenterTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1005 "data/maps/CenterTown/scripts.pory"

# 1006 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1007 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1008 "data/maps/CenterTown/scripts.pory"

# 1009 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1010 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1011 "data/maps/CenterTown/scripts.pory"
	.string "That was good work out there!\p"
# 1012 "data/maps/CenterTown/scripts.pory"
	.string "I knew there was something special\n"
# 1013 "data/maps/CenterTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1014 "data/maps/CenterTown/scripts.pory"
	.string "but I never expected this.\p"
# 1015 "data/maps/CenterTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1016 "data/maps/CenterTown/scripts.pory"
	.string "I gave you?\p"
# 1017 "data/maps/CenterTown/scripts.pory"
	.string "I have something to show you.\n"
# 1018 "data/maps/CenterTown/scripts.pory"
	.string "Let's go to my LAB.$"

CenterTown_SuperRod_Text_0:
# 7 "data/maps/CenterTown/scripts.pory"
	.string "Fishing has always been my passion, but\n"
	.string "I haven't caught anything decent in\l"
	.string "this pond...$"

CenterTown_SuperRod_Text_1:
# 9 "data/maps/CenterTown/scripts.pory"
	.string "Maybe you'll have better luck.$"

CenterTown_SuperRod_Text_2:
# 12 "data/maps/CenterTown/scripts.pory"
	.string "How are the fish biting?$"
