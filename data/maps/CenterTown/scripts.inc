# 1 "data/maps/CenterTown/scripts.pory"

# 2 "data/maps/CenterTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/CenterTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/CenterTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/CenterTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 6 "data/maps/CenterTown/scripts.pory"

# 7 "data/maps/CenterTown/scripts.pory"
CenterTown_MapScripts::
# 8 "data/maps/CenterTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/CenterTown/scripts.pory"
	.byte 0
# 10 "data/maps/CenterTown/scripts.pory"

# 11 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 12 "data/maps/CenterTown/scripts.pory"
	@ 1: Met Rival
# 13 "data/maps/CenterTown/scripts.pory"
	@ 2: Saving Birch
# 14 "data/maps/CenterTown/scripts.pory"
	@ 3: Received Pokedex
# 15 "data/maps/CenterTown/scripts.pory"
	@ 4: Received Running Shoes
# 16 "data/maps/CenterTown/scripts.pory"

# 17 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 18 "data/maps/CenterTown/scripts.pory"
	@ 1: In truck male
# 19 "data/maps/CenterTown/scripts.pory"
	@ 2: In truck female
# 20 "data/maps/CenterTown/scripts.pory"
	@ 3: Entered house
# 21 "data/maps/CenterTown/scripts.pory"
	@ 4: Told to go set clock
# 22 "data/maps/CenterTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 23 "data/maps/CenterTown/scripts.pory"
	@ 6: Set clock
# 24 "data/maps/CenterTown/scripts.pory"
	@ 7: Told to go meet rival
# 25 "data/maps/CenterTown/scripts.pory"

# 26 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 27 "data/maps/CenterTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 28 "data/maps/CenterTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 29 "data/maps/CenterTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 30 "data/maps/CenterTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 31 "data/maps/CenterTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 32 "data/maps/CenterTown/scripts.pory"
	@ 5: Exited house after above event
# 33 "data/maps/CenterTown/scripts.pory"

# 34 "data/maps/CenterTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 35 "data/maps/CenterTown/scripts.pory"
	@ 1: Never occurs
# 36 "data/maps/CenterTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 37 "data/maps/CenterTown/scripts.pory"
	@ 3: Met Rival
# 38 "data/maps/CenterTown/scripts.pory"
	@ 4: Received Pokedex
# 39 "data/maps/CenterTown/scripts.pory"

# 40 "data/maps/CenterTown/scripts.pory"

# 41 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnTransition:
# 42 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_VISITED_CENTER_TOWN
# 43 "data/maps/CenterTown/scripts.pory"
	end
# 44 "data/maps/CenterTown/scripts.pory"

# 45 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 46 "data/maps/CenterTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 47 "data/maps/CenterTown/scripts.pory"
	return
# 48 "data/maps/CenterTown/scripts.pory"

# 49 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 50 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 51 "data/maps/CenterTown/scripts.pory"
	return
# 52 "data/maps/CenterTown/scripts.pory"

# 53 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 54 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 55 "data/maps/CenterTown/scripts.pory"
	return
# 56 "data/maps/CenterTown/scripts.pory"

# 57 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 58 "data/maps/CenterTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 59 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 60 "data/maps/CenterTown/scripts.pory"
	return
# 61 "data/maps/CenterTown/scripts.pory"

# 62 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 63 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 64 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 65 "data/maps/CenterTown/scripts.pory"
	return
# 66 "data/maps/CenterTown/scripts.pory"

# 67 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 68 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 69 "data/maps/CenterTown/scripts.pory"
	return
# 70 "data/maps/CenterTown/scripts.pory"

# 71 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 72 "data/maps/CenterTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 73 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 74 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 75 "data/maps/CenterTown/scripts.pory"
	return
# 76 "data/maps/CenterTown/scripts.pory"

# 77 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 78 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 79 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 80 "data/maps/CenterTown/scripts.pory"
	return
# 81 "data/maps/CenterTown/scripts.pory"

# 82 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 83 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 84 "data/maps/CenterTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 85 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 86 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 87 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 88 "data/maps/CenterTown/scripts.pory"
	return
# 89 "data/maps/CenterTown/scripts.pory"

# 90 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 91 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 92 "data/maps/CenterTown/scripts.pory"
	return
# 93 "data/maps/CenterTown/scripts.pory"

# 94 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 95 "data/maps/CenterTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 96 "data/maps/CenterTown/scripts.pory"
	return
# 97 "data/maps/CenterTown/scripts.pory"

# 98 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnFrame:
# 99 "data/maps/CenterTown/scripts.pory"
	.2byte 0
# 100 "data/maps/CenterTown/scripts.pory"

# 101 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 102 "data/maps/CenterTown/scripts.pory"
	lockall
# 103 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8004, 5
# 104 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8005, 8
# 105 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 106 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 107 "data/maps/CenterTown/scripts.pory"
	warpsilent MAP_CENTER_TOWN_PLAYERS_HOUSE_1F, 8, 8
# 108 "data/maps/CenterTown/scripts.pory"
	waitstate
# 109 "data/maps/CenterTown/scripts.pory"
	releaseall
# 110 "data/maps/CenterTown/scripts.pory"
	end
# 111 "data/maps/CenterTown/scripts.pory"

# 112 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 113 "data/maps/CenterTown/scripts.pory"
	lockall
# 114 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8004, 14
# 115 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8005, 8
# 116 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 117 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 118 "data/maps/CenterTown/scripts.pory"
	waitstate
# 119 "data/maps/CenterTown/scripts.pory"
	releaseall
# 120 "data/maps/CenterTown/scripts.pory"
	end
# 121 "data/maps/CenterTown/scripts.pory"

# 122 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 123 "data/maps/CenterTown/scripts.pory"
	delay 15
# 124 "data/maps/CenterTown/scripts.pory"
	playse SE_LEDGE
# 125 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 126 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 128 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 129 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_MOM
# 130 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 131 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 132 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 133 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 134 "data/maps/CenterTown/scripts.pory"
	delay 10
# 135 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 136 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 138 "data/maps/CenterTown/scripts.pory"
	closemessage
# 139 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 140 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 141 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 143 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 144 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 145 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 146 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 148 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 149 "data/maps/CenterTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 150 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 151 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 152 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 153 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 154 "data/maps/CenterTown/scripts.pory"
	return
# 155 "data/maps/CenterTown/scripts.pory"

# 156 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 157 "data/maps/CenterTown/scripts.pory"
	walk_down
# 158 "data/maps/CenterTown/scripts.pory"
	step_end
# 159 "data/maps/CenterTown/scripts.pory"

# 160 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 161 "data/maps/CenterTown/scripts.pory"
	walk_down
# 162 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_left
# 163 "data/maps/CenterTown/scripts.pory"
	step_end
# 164 "data/maps/CenterTown/scripts.pory"

# 165 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 166 "data/maps/CenterTown/scripts.pory"
	delay_16
# 167 "data/maps/CenterTown/scripts.pory"
	delay_8
# 168 "data/maps/CenterTown/scripts.pory"
	walk_up
# 169 "data/maps/CenterTown/scripts.pory"
	step_end
# 170 "data/maps/CenterTown/scripts.pory"

# 171 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 172 "data/maps/CenterTown/scripts.pory"
	walk_up
# 173 "data/maps/CenterTown/scripts.pory"
	set_invisible
# 174 "data/maps/CenterTown/scripts.pory"
	step_end
# 175 "data/maps/CenterTown/scripts.pory"

# 176 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 177 "data/maps/CenterTown/scripts.pory"
	delay_16
# 178 "data/maps/CenterTown/scripts.pory"
	delay_8
# 179 "data/maps/CenterTown/scripts.pory"
	walk_right
# 180 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 181 "data/maps/CenterTown/scripts.pory"
	step_end
# 182 "data/maps/CenterTown/scripts.pory"

# 183 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 184 "data/maps/CenterTown/scripts.pory"
	walk_up
# 185 "data/maps/CenterTown/scripts.pory"
	walk_up
# 186 "data/maps/CenterTown/scripts.pory"
	step_end
# 187 "data/maps/CenterTown/scripts.pory"

# 188 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 189 "data/maps/CenterTown/scripts.pory"
	jump_right
# 190 "data/maps/CenterTown/scripts.pory"
	delay_16
# 191 "data/maps/CenterTown/scripts.pory"
	delay_16
# 192 "data/maps/CenterTown/scripts.pory"
	delay_16
# 193 "data/maps/CenterTown/scripts.pory"
	step_end
# 194 "data/maps/CenterTown/scripts.pory"

# 195 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 196 "data/maps/CenterTown/scripts.pory"
	lockall
# 197 "data/maps/CenterTown/scripts.pory"
	playse SE_PIN
# 198 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 199 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/CenterTown/scripts.pory"
	delay 80
# 201 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 202 "data/maps/CenterTown/scripts.pory"
	closemessage
# 203 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 204 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 205 "data/maps/CenterTown/scripts.pory"
	delay 20
# 206 "data/maps/CenterTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 207 "data/maps/CenterTown/scripts.pory"
	warp MAP_CENTER_TOWN_LAB, 6, 5
# 208 "data/maps/CenterTown/scripts.pory"
	waitstate
# 209 "data/maps/CenterTown/scripts.pory"
	releaseall
# 210 "data/maps/CenterTown/scripts.pory"
	end
# 211 "data/maps/CenterTown/scripts.pory"

# 212 "data/maps/CenterTown/scripts.pory"
LittlerootTown_OnWarp:
# 213 "data/maps/CenterTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 214 "data/maps/CenterTown/scripts.pory"
	.2byte 0
# 215 "data/maps/CenterTown/scripts.pory"

# 216 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 217 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_BIRCH
# 218 "data/maps/CenterTown/scripts.pory"
	addobject LOCALID_RIVAL
# 219 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 220 "data/maps/CenterTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 221 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 222 "data/maps/CenterTown/scripts.pory"
	end
# 223 "data/maps/CenterTown/scripts.pory"

# 224 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 225 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 226 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 227 "data/maps/CenterTown/scripts.pory"
	end
# 228 "data/maps/CenterTown/scripts.pory"

# 229 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 230 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 231 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 232 "data/maps/CenterTown/scripts.pory"
	end
# 233 "data/maps/CenterTown/scripts.pory"

# 234 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 235 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 236 "data/maps/CenterTown/scripts.pory"
	end
# 237 "data/maps/CenterTown/scripts.pory"

# 238 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 239 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 240 "data/maps/CenterTown/scripts.pory"
	end
# 241 "data/maps/CenterTown/scripts.pory"

# 242 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 243 "data/maps/CenterTown/scripts.pory"
	lock
# 244 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 245 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 246 "data/maps/CenterTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 247 "data/maps/CenterTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 248 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 249 "data/maps/CenterTown/scripts.pory"
	release
# 250 "data/maps/CenterTown/scripts.pory"
	end
# 251 "data/maps/CenterTown/scripts.pory"

# 252 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 253 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 254 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 255 "data/maps/CenterTown/scripts.pory"
	closemessage
# 256 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 257 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 258 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 259 "data/maps/CenterTown/scripts.pory"
	release
# 260 "data/maps/CenterTown/scripts.pory"
	end
# 261 "data/maps/CenterTown/scripts.pory"

# 262 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 263 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 264 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 265 "data/maps/CenterTown/scripts.pory"
	release
# 266 "data/maps/CenterTown/scripts.pory"
	end
# 267 "data/maps/CenterTown/scripts.pory"

# 268 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 269 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 270 "data/maps/CenterTown/scripts.pory"
	release
# 271 "data/maps/CenterTown/scripts.pory"
	end
# 272 "data/maps/CenterTown/scripts.pory"

# 273 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 274 "data/maps/CenterTown/scripts.pory"
	lockall
# 275 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 276 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 277 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 278 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 279 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 280 "data/maps/CenterTown/scripts.pory"
	releaseall
# 281 "data/maps/CenterTown/scripts.pory"
	end
# 282 "data/maps/CenterTown/scripts.pory"

# 283 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 284 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 285 "data/maps/CenterTown/scripts.pory"
	closemessage
# 286 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 287 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 288 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 289 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 290 "data/maps/CenterTown/scripts.pory"
	closemessage
# 291 "data/maps/CenterTown/scripts.pory"
	return
# 292 "data/maps/CenterTown/scripts.pory"

# 293 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 294 "data/maps/CenterTown/scripts.pory"
	face_right
# 295 "data/maps/CenterTown/scripts.pory"
	delay_8
# 296 "data/maps/CenterTown/scripts.pory"
	disable_jump_landing_ground_effect
# 297 "data/maps/CenterTown/scripts.pory"
	jump_in_place_right
# 298 "data/maps/CenterTown/scripts.pory"
	delay_8
# 299 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 300 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 301 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 302 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 303 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 305 "data/maps/CenterTown/scripts.pory"
	walk_fast_left
# 306 "data/maps/CenterTown/scripts.pory"
	face_down
# 307 "data/maps/CenterTown/scripts.pory"
	step_end
# 308 "data/maps/CenterTown/scripts.pory"

# 309 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 310 "data/maps/CenterTown/scripts.pory"
	walk_down
# 311 "data/maps/CenterTown/scripts.pory"
	step_end
# 312 "data/maps/CenterTown/scripts.pory"

# 313 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 314 "data/maps/CenterTown/scripts.pory"
	walk_right
# 315 "data/maps/CenterTown/scripts.pory"
	walk_down
# 316 "data/maps/CenterTown/scripts.pory"
	walk_down
# 317 "data/maps/CenterTown/scripts.pory"
	walk_left
# 318 "data/maps/CenterTown/scripts.pory"
	walk_left
# 319 "data/maps/CenterTown/scripts.pory"
	walk_left
# 320 "data/maps/CenterTown/scripts.pory"
	walk_left
# 321 "data/maps/CenterTown/scripts.pory"
	walk_up
# 322 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_down
# 323 "data/maps/CenterTown/scripts.pory"
	step_end
# 324 "data/maps/CenterTown/scripts.pory"

# 325 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 326 "data/maps/CenterTown/scripts.pory"
	lock_facing_direction
# 327 "data/maps/CenterTown/scripts.pory"
	walk_down
# 328 "data/maps/CenterTown/scripts.pory"
	unlock_facing_direction
# 329 "data/maps/CenterTown/scripts.pory"
	step_end
# 330 "data/maps/CenterTown/scripts.pory"

# 331 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 332 "data/maps/CenterTown/scripts.pory"
	lockall
# 333 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 334 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 335 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 336 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 337 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 338 "data/maps/CenterTown/scripts.pory"
	releaseall
# 339 "data/maps/CenterTown/scripts.pory"
	end
# 340 "data/maps/CenterTown/scripts.pory"

# 341 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 342 "data/maps/CenterTown/scripts.pory"
	face_right
# 343 "data/maps/CenterTown/scripts.pory"
	delay_8
# 344 "data/maps/CenterTown/scripts.pory"
	disable_jump_landing_ground_effect
# 345 "data/maps/CenterTown/scripts.pory"
	jump_in_place_right
# 346 "data/maps/CenterTown/scripts.pory"
	delay_8
# 347 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 348 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 349 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 350 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 351 "data/maps/CenterTown/scripts.pory"
	walk_fast_up
# 352 "data/maps/CenterTown/scripts.pory"
	walk_fast_right
# 353 "data/maps/CenterTown/scripts.pory"
	face_down
# 354 "data/maps/CenterTown/scripts.pory"
	step_end
# 355 "data/maps/CenterTown/scripts.pory"

# 356 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 357 "data/maps/CenterTown/scripts.pory"
	walk_left
# 358 "data/maps/CenterTown/scripts.pory"
	walk_down
# 359 "data/maps/CenterTown/scripts.pory"
	walk_left
# 360 "data/maps/CenterTown/scripts.pory"
	walk_left
# 361 "data/maps/CenterTown/scripts.pory"
	walk_left
# 362 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_down
# 363 "data/maps/CenterTown/scripts.pory"
	step_end
# 364 "data/maps/CenterTown/scripts.pory"

# 365 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 366 "data/maps/CenterTown/scripts.pory"
	lockall
# 367 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 368 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 369 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 370 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 371 "data/maps/CenterTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 372 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 373 "data/maps/CenterTown/scripts.pory"
	closemessage
# 374 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 375 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 376 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 377 "data/maps/CenterTown/scripts.pory"
	releaseall
# 378 "data/maps/CenterTown/scripts.pory"
	end
# 379 "data/maps/CenterTown/scripts.pory"

# 380 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 381 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 382 "data/maps/CenterTown/scripts.pory"
	end
# 383 "data/maps/CenterTown/scripts.pory"

# 384 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 385 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 386 "data/maps/CenterTown/scripts.pory"
	end
# 387 "data/maps/CenterTown/scripts.pory"

# 388 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 389 "data/maps/CenterTown/scripts.pory"
	lockall
# 390 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 391 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 392 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 393 "data/maps/CenterTown/scripts.pory"
	releaseall
# 394 "data/maps/CenterTown/scripts.pory"
	end
# 395 "data/maps/CenterTown/scripts.pory"

# 396 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 397 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 398 "data/maps/CenterTown/scripts.pory"
	return
# 399 "data/maps/CenterTown/scripts.pory"

# 400 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 401 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 402 "data/maps/CenterTown/scripts.pory"
	return
# 403 "data/maps/CenterTown/scripts.pory"

# 404 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 405 "data/maps/CenterTown/scripts.pory"
	lockall
# 406 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 407 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 408 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 409 "data/maps/CenterTown/scripts.pory"
	releaseall
# 410 "data/maps/CenterTown/scripts.pory"
	end
# 411 "data/maps/CenterTown/scripts.pory"

# 412 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 413 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 414 "data/maps/CenterTown/scripts.pory"
	return
# 415 "data/maps/CenterTown/scripts.pory"

# 416 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 417 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 418 "data/maps/CenterTown/scripts.pory"
	return
# 419 "data/maps/CenterTown/scripts.pory"

# 420 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 421 "data/maps/CenterTown/scripts.pory"
	lockall
# 422 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 0
# 423 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 424 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 425 "data/maps/CenterTown/scripts.pory"
	end
# 426 "data/maps/CenterTown/scripts.pory"

# 427 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 428 "data/maps/CenterTown/scripts.pory"
	lockall
# 429 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 1
# 430 "data/maps/CenterTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 431 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 432 "data/maps/CenterTown/scripts.pory"
	end
# 433 "data/maps/CenterTown/scripts.pory"

# 434 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 435 "data/maps/CenterTown/scripts.pory"
	lockall
# 436 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 2
# 437 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 438 "data/maps/CenterTown/scripts.pory"
	end
# 439 "data/maps/CenterTown/scripts.pory"

# 440 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 441 "data/maps/CenterTown/scripts.pory"
	lockall
# 442 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 3
# 443 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 444 "data/maps/CenterTown/scripts.pory"
	end
# 445 "data/maps/CenterTown/scripts.pory"

# 446 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 447 "data/maps/CenterTown/scripts.pory"
	lockall
# 448 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 4
# 449 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 450 "data/maps/CenterTown/scripts.pory"
	end
# 451 "data/maps/CenterTown/scripts.pory"

# 452 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 453 "data/maps/CenterTown/scripts.pory"
	lockall
# 454 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8008, 5
# 455 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 456 "data/maps/CenterTown/scripts.pory"
	end
# 457 "data/maps/CenterTown/scripts.pory"

# 458 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 459 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 460 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 461 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 462 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 463 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 464 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 465 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 466 "data/maps/CenterTown/scripts.pory"
	closemessage
# 467 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 468 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 469 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 470 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 471 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 472 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 473 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 474 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 475 "data/maps/CenterTown/scripts.pory"
	end
# 476 "data/maps/CenterTown/scripts.pory"

# 477 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 478 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8009, 5
# 479 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x800A, 8
# 480 "data/maps/CenterTown/scripts.pory"
	return
# 481 "data/maps/CenterTown/scripts.pory"

# 482 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 483 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x8009, 14
# 484 "data/maps/CenterTown/scripts.pory"
	setvar VAR_0x800A, 8
# 485 "data/maps/CenterTown/scripts.pory"
	return
# 486 "data/maps/CenterTown/scripts.pory"

# 487 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 488 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 489 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 490 "data/maps/CenterTown/scripts.pory"
	return
# 491 "data/maps/CenterTown/scripts.pory"

# 492 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 493 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 494 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 495 "data/maps/CenterTown/scripts.pory"
	return
# 496 "data/maps/CenterTown/scripts.pory"

# 497 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 498 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 499 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 500 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 501 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 502 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 503 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 504 "data/maps/CenterTown/scripts.pory"
	return
# 505 "data/maps/CenterTown/scripts.pory"

# 506 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 507 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 508 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 509 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 510 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 511 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 512 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 513 "data/maps/CenterTown/scripts.pory"
	return
# 514 "data/maps/CenterTown/scripts.pory"

# 515 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 516 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 517 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 519 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/CenterTown/scripts.pory"
	return
# 521 "data/maps/CenterTown/scripts.pory"

# 522 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 523 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 524 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 526 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 527 "data/maps/CenterTown/scripts.pory"
	return
# 528 "data/maps/CenterTown/scripts.pory"

# 529 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 530 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 531 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 533 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 534 "data/maps/CenterTown/scripts.pory"
	return
# 535 "data/maps/CenterTown/scripts.pory"

# 536 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 537 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 538 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 540 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 541 "data/maps/CenterTown/scripts.pory"
	return
# 542 "data/maps/CenterTown/scripts.pory"

# 543 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 544 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 545 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 547 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/CenterTown/scripts.pory"
	return
# 549 "data/maps/CenterTown/scripts.pory"

# 550 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 551 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 552 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 554 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/CenterTown/scripts.pory"
	return
# 556 "data/maps/CenterTown/scripts.pory"

# 557 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 558 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 559 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 561 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/CenterTown/scripts.pory"
	return
# 563 "data/maps/CenterTown/scripts.pory"

# 564 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 565 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 566 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 568 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/CenterTown/scripts.pory"
	return
# 570 "data/maps/CenterTown/scripts.pory"

# 571 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 572 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 573 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 575 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/CenterTown/scripts.pory"
	return
# 577 "data/maps/CenterTown/scripts.pory"

# 578 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 579 "data/maps/CenterTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 580 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 582 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/CenterTown/scripts.pory"
	return
# 584 "data/maps/CenterTown/scripts.pory"

# 585 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 586 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 587 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 588 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 589 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 590 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 591 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 592 "data/maps/CenterTown/scripts.pory"
	return
# 593 "data/maps/CenterTown/scripts.pory"

# 594 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 595 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 596 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 597 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 598 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 599 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 600 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 601 "data/maps/CenterTown/scripts.pory"
	return
# 602 "data/maps/CenterTown/scripts.pory"

# 603 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 604 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 605 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/CenterTown/scripts.pory"
	return
# 607 "data/maps/CenterTown/scripts.pory"

# 608 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 609 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 610 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 611 "data/maps/CenterTown/scripts.pory"
	return
# 612 "data/maps/CenterTown/scripts.pory"

# 613 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 614 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 615 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 616 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 617 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 618 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 619 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 620 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 621 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 622 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 623 "data/maps/CenterTown/scripts.pory"
	return
# 624 "data/maps/CenterTown/scripts.pory"

# 625 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 626 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 627 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 629 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 630 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 631 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 632 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 633 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 634 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 635 "data/maps/CenterTown/scripts.pory"
	return
# 636 "data/maps/CenterTown/scripts.pory"

# 637 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 638 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 639 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 640 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 641 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 642 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 643 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 644 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 645 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 646 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 647 "data/maps/CenterTown/scripts.pory"
	return
# 648 "data/maps/CenterTown/scripts.pory"

# 649 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 650 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 651 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 652 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 653 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 654 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 655 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 656 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 657 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 658 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 659 "data/maps/CenterTown/scripts.pory"
	return
# 660 "data/maps/CenterTown/scripts.pory"

# 661 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 662 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 663 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 664 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 665 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 666 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 667 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 668 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 669 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 670 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 671 "data/maps/CenterTown/scripts.pory"
	return
# 672 "data/maps/CenterTown/scripts.pory"

# 673 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 674 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 675 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 677 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 678 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 679 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 680 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 681 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 682 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 683 "data/maps/CenterTown/scripts.pory"
	return
# 684 "data/maps/CenterTown/scripts.pory"

# 685 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 686 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 687 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 688 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 689 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 690 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 691 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 693 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 694 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 695 "data/maps/CenterTown/scripts.pory"
	return
# 696 "data/maps/CenterTown/scripts.pory"

# 697 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 698 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 699 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 700 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 701 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 702 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 703 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 704 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 705 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 706 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 707 "data/maps/CenterTown/scripts.pory"
	return
# 708 "data/maps/CenterTown/scripts.pory"

# 709 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 710 "data/maps/CenterTown/scripts.pory"
	walk_up
# 711 "data/maps/CenterTown/scripts.pory"
	walk_up
# 712 "data/maps/CenterTown/scripts.pory"
	walk_up
# 713 "data/maps/CenterTown/scripts.pory"
	walk_up
# 714 "data/maps/CenterTown/scripts.pory"
	walk_up
# 715 "data/maps/CenterTown/scripts.pory"
	walk_up
# 716 "data/maps/CenterTown/scripts.pory"
	step_end
# 717 "data/maps/CenterTown/scripts.pory"

# 718 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 719 "data/maps/CenterTown/scripts.pory"
	walk_up
# 720 "data/maps/CenterTown/scripts.pory"
	walk_up
# 721 "data/maps/CenterTown/scripts.pory"
	walk_up
# 722 "data/maps/CenterTown/scripts.pory"
	walk_up
# 723 "data/maps/CenterTown/scripts.pory"
	walk_up
# 724 "data/maps/CenterTown/scripts.pory"
	walk_up
# 725 "data/maps/CenterTown/scripts.pory"
	step_end
# 726 "data/maps/CenterTown/scripts.pory"

# 727 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 728 "data/maps/CenterTown/scripts.pory"
	walk_right
# 729 "data/maps/CenterTown/scripts.pory"
	walk_right
# 730 "data/maps/CenterTown/scripts.pory"
	walk_right
# 731 "data/maps/CenterTown/scripts.pory"
	walk_right
# 732 "data/maps/CenterTown/scripts.pory"
	step_end
# 733 "data/maps/CenterTown/scripts.pory"

# 734 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 735 "data/maps/CenterTown/scripts.pory"
	walk_right
# 736 "data/maps/CenterTown/scripts.pory"
	walk_right
# 737 "data/maps/CenterTown/scripts.pory"
	walk_right
# 738 "data/maps/CenterTown/scripts.pory"
	walk_right
# 739 "data/maps/CenterTown/scripts.pory"
	walk_right
# 740 "data/maps/CenterTown/scripts.pory"
	step_end
# 741 "data/maps/CenterTown/scripts.pory"

# 742 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 743 "data/maps/CenterTown/scripts.pory"
	walk_right
# 744 "data/maps/CenterTown/scripts.pory"
	walk_right
# 745 "data/maps/CenterTown/scripts.pory"
	step_end
# 746 "data/maps/CenterTown/scripts.pory"

# 747 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 748 "data/maps/CenterTown/scripts.pory"
	walk_right
# 749 "data/maps/CenterTown/scripts.pory"
	walk_right
# 750 "data/maps/CenterTown/scripts.pory"
	walk_right
# 751 "data/maps/CenterTown/scripts.pory"
	step_end
# 752 "data/maps/CenterTown/scripts.pory"

# 753 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 754 "data/maps/CenterTown/scripts.pory"
	walk_left
# 755 "data/maps/CenterTown/scripts.pory"
	walk_left
# 756 "data/maps/CenterTown/scripts.pory"
	walk_left
# 757 "data/maps/CenterTown/scripts.pory"
	step_end
# 758 "data/maps/CenterTown/scripts.pory"

# 759 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 760 "data/maps/CenterTown/scripts.pory"
	walk_left
# 761 "data/maps/CenterTown/scripts.pory"
	walk_left
# 762 "data/maps/CenterTown/scripts.pory"
	step_end
# 763 "data/maps/CenterTown/scripts.pory"

# 764 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 765 "data/maps/CenterTown/scripts.pory"
	walk_left
# 766 "data/maps/CenterTown/scripts.pory"
	walk_left
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
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 773 "data/maps/CenterTown/scripts.pory"
	walk_left
# 774 "data/maps/CenterTown/scripts.pory"
	walk_left
# 775 "data/maps/CenterTown/scripts.pory"
	walk_left
# 776 "data/maps/CenterTown/scripts.pory"
	walk_left
# 777 "data/maps/CenterTown/scripts.pory"
	step_end
# 778 "data/maps/CenterTown/scripts.pory"

# 779 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 780 "data/maps/CenterTown/scripts.pory"
	walk_down
# 781 "data/maps/CenterTown/scripts.pory"
	walk_down
# 782 "data/maps/CenterTown/scripts.pory"
	walk_down
# 783 "data/maps/CenterTown/scripts.pory"
	walk_down
# 784 "data/maps/CenterTown/scripts.pory"
	walk_down
# 785 "data/maps/CenterTown/scripts.pory"
	step_end
# 786 "data/maps/CenterTown/scripts.pory"

# 787 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 788 "data/maps/CenterTown/scripts.pory"
	walk_down
# 789 "data/maps/CenterTown/scripts.pory"
	walk_down
# 790 "data/maps/CenterTown/scripts.pory"
	walk_down
# 791 "data/maps/CenterTown/scripts.pory"
	walk_down
# 792 "data/maps/CenterTown/scripts.pory"
	walk_down
# 793 "data/maps/CenterTown/scripts.pory"
	step_end
# 794 "data/maps/CenterTown/scripts.pory"

# 795 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 796 "data/maps/CenterTown/scripts.pory"
	walk_left
# 797 "data/maps/CenterTown/scripts.pory"
	walk_left
# 798 "data/maps/CenterTown/scripts.pory"
	walk_left
# 799 "data/maps/CenterTown/scripts.pory"
	walk_left
# 800 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 801 "data/maps/CenterTown/scripts.pory"
	step_end
# 802 "data/maps/CenterTown/scripts.pory"

# 803 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 804 "data/maps/CenterTown/scripts.pory"
	walk_left
# 805 "data/maps/CenterTown/scripts.pory"
	walk_left
# 806 "data/maps/CenterTown/scripts.pory"
	walk_left
# 807 "data/maps/CenterTown/scripts.pory"
	walk_left
# 808 "data/maps/CenterTown/scripts.pory"
	walk_left
# 809 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 810 "data/maps/CenterTown/scripts.pory"
	step_end
# 811 "data/maps/CenterTown/scripts.pory"

# 812 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 813 "data/maps/CenterTown/scripts.pory"
	walk_left
# 814 "data/maps/CenterTown/scripts.pory"
	walk_left
# 815 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 816 "data/maps/CenterTown/scripts.pory"
	step_end
# 817 "data/maps/CenterTown/scripts.pory"

# 818 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
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
LittlerootTown_Movement_MomReturnHomeFemale2:
# 826 "data/maps/CenterTown/scripts.pory"
	walk_right
# 827 "data/maps/CenterTown/scripts.pory"
	walk_right
# 828 "data/maps/CenterTown/scripts.pory"
	walk_right
# 829 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 830 "data/maps/CenterTown/scripts.pory"
	step_end
# 831 "data/maps/CenterTown/scripts.pory"

# 832 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 833 "data/maps/CenterTown/scripts.pory"
	walk_right
# 834 "data/maps/CenterTown/scripts.pory"
	walk_right
# 835 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 836 "data/maps/CenterTown/scripts.pory"
	step_end
# 837 "data/maps/CenterTown/scripts.pory"

# 838 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 839 "data/maps/CenterTown/scripts.pory"
	walk_right
# 840 "data/maps/CenterTown/scripts.pory"
	walk_right
# 841 "data/maps/CenterTown/scripts.pory"
	walk_right
# 842 "data/maps/CenterTown/scripts.pory"
	walk_right
# 843 "data/maps/CenterTown/scripts.pory"
	walk_right
# 844 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 845 "data/maps/CenterTown/scripts.pory"
	step_end
# 846 "data/maps/CenterTown/scripts.pory"

# 847 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 848 "data/maps/CenterTown/scripts.pory"
	walk_right
# 849 "data/maps/CenterTown/scripts.pory"
	walk_right
# 850 "data/maps/CenterTown/scripts.pory"
	walk_right
# 851 "data/maps/CenterTown/scripts.pory"
	walk_right
# 852 "data/maps/CenterTown/scripts.pory"
	walk_in_place_faster_up
# 853 "data/maps/CenterTown/scripts.pory"
	step_end
# 854 "data/maps/CenterTown/scripts.pory"

# 855 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 856 "data/maps/CenterTown/scripts.pory"
	walk_up
# 857 "data/maps/CenterTown/scripts.pory"
	step_end
# 858 "data/maps/CenterTown/scripts.pory"

# 859 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 860 "data/maps/CenterTown/scripts.pory"
	lock
# 861 "data/maps/CenterTown/scripts.pory"
	faceplayer
# 862 "data/maps/CenterTown/scripts.pory"
	checkplayergender
# 863 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 864 "data/maps/CenterTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 865 "data/maps/CenterTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 866 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 867 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 868 "data/maps/CenterTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 869 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 870 "data/maps/CenterTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 871 "data/maps/CenterTown/scripts.pory"
	waitmovement 0
# 872 "data/maps/CenterTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_CENTER_TOWN
# 873 "data/maps/CenterTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 874 "data/maps/CenterTown/scripts.pory"
	waitdooranim
# 875 "data/maps/CenterTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 876 "data/maps/CenterTown/scripts.pory"
	end
# 877 "data/maps/CenterTown/scripts.pory"

# 878 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 879 "data/maps/CenterTown/scripts.pory"
	removeobject LOCALID_MOM
# 880 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 881 "data/maps/CenterTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 882 "data/maps/CenterTown/scripts.pory"
	release
# 883 "data/maps/CenterTown/scripts.pory"
	end
# 884 "data/maps/CenterTown/scripts.pory"

# 885 "data/maps/CenterTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 886 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 887 "data/maps/CenterTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 888 "data/maps/CenterTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 889 "data/maps/CenterTown/scripts.pory"
	waitfanfare
# 890 "data/maps/CenterTown/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 891 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 892 "data/maps/CenterTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 893 "data/maps/CenterTown/scripts.pory"
	closemessage
# 894 "data/maps/CenterTown/scripts.pory"
	delay 30
# 895 "data/maps/CenterTown/scripts.pory"
	return
# 896 "data/maps/CenterTown/scripts.pory"

# 897 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 898 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 899 "data/maps/CenterTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 900 "data/maps/CenterTown/scripts.pory"
	.string "in the moving truck.\p"
# 901 "data/maps/CenterTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 902 "data/maps/CenterTown/scripts.pory"
	.string "How do you like it?\n"
# 903 "data/maps/CenterTown/scripts.pory"
	.string "This is our new home!\p"
# 904 "data/maps/CenterTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 905 "data/maps/CenterTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 906 "data/maps/CenterTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 907 "data/maps/CenterTown/scripts.pory"
	.string "Let's go inside.$"
# 908 "data/maps/CenterTown/scripts.pory"

# 909 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 910 "data/maps/CenterTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 911 "data/maps/CenterTown/scripts.pory"

# 912 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 913 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 914 "data/maps/CenterTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 915 "data/maps/CenterTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 916 "data/maps/CenterTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 917 "data/maps/CenterTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 918 "data/maps/CenterTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 919 "data/maps/CenterTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 920 "data/maps/CenterTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 921 "data/maps/CenterTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 922 "data/maps/CenterTown/scripts.pory"

# 923 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 924 "data/maps/CenterTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 925 "data/maps/CenterTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 926 "data/maps/CenterTown/scripts.pory"

# 927 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 928 "data/maps/CenterTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 929 "data/maps/CenterTown/scripts.pory"
	.string "instructions.\p"
# 930 "data/maps/CenterTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 931 "data/maps/CenterTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 932 "data/maps/CenterTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 933 "data/maps/CenterTown/scripts.pory"
	.string "in the great outdoors!”$"
# 934 "data/maps/CenterTown/scripts.pory"

# 935 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 936 "data/maps/CenterTown/scripts.pory"
	.string "… … … … … … … …\n"
# 937 "data/maps/CenterTown/scripts.pory"
	.string "… … … … … … … …\p"
# 938 "data/maps/CenterTown/scripts.pory"
	.string "To think that you have your very own\n"
# 939 "data/maps/CenterTown/scripts.pory"
	.string "POKéMON now…\l"
# 940 "data/maps/CenterTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 941 "data/maps/CenterTown/scripts.pory"
	.string "…But please be careful.\n"
# 942 "data/maps/CenterTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 943 "data/maps/CenterTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 944 "data/maps/CenterTown/scripts.pory"

# 945 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 946 "data/maps/CenterTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 947 "data/maps/CenterTown/scripts.pory"
	.string "and POKéMON.\p"
# 948 "data/maps/CenterTown/scripts.pory"
	.string "The power of science is staggering!$"
# 949 "data/maps/CenterTown/scripts.pory"

# 950 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 951 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 952 "data/maps/CenterTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 953 "data/maps/CenterTown/scripts.pory"
	.string "the wild to do more research…\p"
# 954 "data/maps/CenterTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 955 "data/maps/CenterTown/scripts.pory"
	.string "at home?$"
# 956 "data/maps/CenterTown/scripts.pory"

# 957 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 958 "data/maps/CenterTown/scripts.pory"
	.string "Um, um, um!\p"
# 959 "data/maps/CenterTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 960 "data/maps/CenterTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 961 "data/maps/CenterTown/scripts.pory"

# 962 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 963 "data/maps/CenterTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 964 "data/maps/CenterTown/scripts.pory"
	.string "your own POKéMON.$"
# 965 "data/maps/CenterTown/scripts.pory"

# 966 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 967 "data/maps/CenterTown/scripts.pory"
	.string "Um, hi!\p"
# 968 "data/maps/CenterTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 969 "data/maps/CenterTown/scripts.pory"
	.string "I can hear their cries!\p"
# 970 "data/maps/CenterTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 971 "data/maps/CenterTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 972 "data/maps/CenterTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 973 "data/maps/CenterTown/scripts.pory"
	.string "for me?$"
# 974 "data/maps/CenterTown/scripts.pory"

# 975 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 976 "data/maps/CenterTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 977 "data/maps/CenterTown/scripts.pory"
	.string "I'm so glad!$"
# 978 "data/maps/CenterTown/scripts.pory"

# 979 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 980 "data/maps/CenterTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 981 "data/maps/CenterTown/scripts.pory"
	.string "Good luck!$"
# 982 "data/maps/CenterTown/scripts.pory"

# 983 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 984 "data/maps/CenterTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 985 "data/maps/CenterTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 986 "data/maps/CenterTown/scripts.pory"

# 987 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 988 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH'S POKéMON LAB$"
# 989 "data/maps/CenterTown/scripts.pory"

# 990 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 991 "data/maps/CenterTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 992 "data/maps/CenterTown/scripts.pory"

# 993 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 994 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 995 "data/maps/CenterTown/scripts.pory"

# 996 "data/maps/CenterTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 997 "data/maps/CenterTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 998 "data/maps/CenterTown/scripts.pory"
	.string "That was good work out there!\p"
# 999 "data/maps/CenterTown/scripts.pory"
	.string "I knew there was something special\n"
# 1000 "data/maps/CenterTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1001 "data/maps/CenterTown/scripts.pory"
	.string "but I never expected this.\p"
# 1002 "data/maps/CenterTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1003 "data/maps/CenterTown/scripts.pory"
	.string "I gave you?\p"
# 1004 "data/maps/CenterTown/scripts.pory"
	.string "I have something to show you.\n"
# 1005 "data/maps/CenterTown/scripts.pory"
	.string "Let's go to my LAB.$"
