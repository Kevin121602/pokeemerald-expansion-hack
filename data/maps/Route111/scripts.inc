# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 3 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 4 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 5 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 7 "data/maps/Route111/scripts.pory"

# 8 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 9 "data/maps/Route111/scripts.pory"

# 10 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 11 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 13 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 14 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 15 "data/maps/Route111/scripts.pory"
	.byte 0
# 16 "data/maps/Route111/scripts.pory"

# 17 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 18 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 19 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 20 "data/maps/Route111/scripts.pory"
	end
# 21 "data/maps/Route111/scripts.pory"

# 22 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 23 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 25 "data/maps/Route111/scripts.pory"
	return
# 26 "data/maps/Route111/scripts.pory"

# 27 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 28 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 47 "data/maps/Route111/scripts.pory"
	return
# 48 "data/maps/Route111/scripts.pory"

# 49 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 50 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 51 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 52 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 53 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 54 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 55 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 56 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 57 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 58 "data/maps/Route111/scripts.pory"
	end
# 59 "data/maps/Route111/scripts.pory"

# 60 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 61 "data/maps/Route111/scripts.pory"
	checkplayergender
# 62 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 63 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 64 "data/maps/Route111/scripts.pory"
	return
# 65 "data/maps/Route111/scripts.pory"

# 66 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 67 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 68 "data/maps/Route111/scripts.pory"
	return
# 69 "data/maps/Route111/scripts.pory"

# 70 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 71 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 72 "data/maps/Route111/scripts.pory"
	return
# 73 "data/maps/Route111/scripts.pory"

# 74 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 75 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 76 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 77 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 78 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 79 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 80 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 81 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 82 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 83 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 84 "data/maps/Route111/scripts.pory"
	return
# 85 "data/maps/Route111/scripts.pory"

# 86 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 87 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 88 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 89 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 90 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 91 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 92 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 93 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 94 "data/maps/Route111/scripts.pory"
	end
# 95 "data/maps/Route111/scripts.pory"

# 96 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 97 "data/maps/Route111/scripts.pory"
	return
# 98 "data/maps/Route111/scripts.pory"

# 99 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 100 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 101 "data/maps/Route111/scripts.pory"
	return
# 102 "data/maps/Route111/scripts.pory"

# 103 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 104 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 105 "data/maps/Route111/scripts.pory"
	.2byte 0
# 106 "data/maps/Route111/scripts.pory"

# 107 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 108 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 109 "data/maps/Route111/scripts.pory"
	end
# 110 "data/maps/Route111/scripts.pory"

# 111 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 112 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 113 "data/maps/Route111/scripts.pory"
	.2byte 0
# 114 "data/maps/Route111/scripts.pory"

# 115 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 116 "data/maps/Route111/scripts.pory"
	lockall
# 117 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 118 "data/maps/Route111/scripts.pory"
	waitstate
# 119 "data/maps/Route111/scripts.pory"
	delay 24
# 120 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 121 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 122 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 123 "data/maps/Route111/scripts.pory"
	waitstate
# 124 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 125 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 126 "data/maps/Route111/scripts.pory"
	delay 16
# 127 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 128 "data/maps/Route111/scripts.pory"
	delay 16
# 129 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 130 "data/maps/Route111/scripts.pory"
	waitstate
# 131 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 132 "data/maps/Route111/scripts.pory"
	waitstate
# 133 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 134 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 135 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 136 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 137 "data/maps/Route111/scripts.pory"
	releaseall
# 138 "data/maps/Route111/scripts.pory"
	end
# 139 "data/maps/Route111/scripts.pory"

# 140 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 141 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 142 "data/maps/Route111/scripts.pory"
	releaseall
# 143 "data/maps/Route111/scripts.pory"
	end
# 144 "data/maps/Route111/scripts.pory"

# 145 "data/maps/Route111/scripts.pory"
@ Unused
# 146 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 147 "data/maps/Route111/scripts.pory"
	lock_anim
# 148 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 149 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 150 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 151 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 152 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 153 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 154 "data/maps/Route111/scripts.pory"
	step_end
# 155 "data/maps/Route111/scripts.pory"

# 156 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 157 "data/maps/Route111/scripts.pory"
	lock
# 158 "data/maps/Route111/scripts.pory"
	faceplayer
# 159 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 160 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 161 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 162 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 163 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 164 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 165 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 166 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 167 "data/maps/Route111/scripts.pory"
	release
# 168 "data/maps/Route111/scripts.pory"
	end
# 169 "data/maps/Route111/scripts.pory"

# 170 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 171 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 172 "data/maps/Route111/scripts.pory"
	release
# 173 "data/maps/Route111/scripts.pory"
	end
# 174 "data/maps/Route111/scripts.pory"

# 175 "data/maps/Route111/scripts.pory"
@ Unused
# 176 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 177 "data/maps/Route111/scripts.pory"
	lockall
# 178 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 179 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 180 "data/maps/Route111/scripts.pory"
	end
# 181 "data/maps/Route111/scripts.pory"

# 182 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 183 "data/maps/Route111/scripts.pory"
	lockall
# 184 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 185 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 186 "data/maps/Route111/scripts.pory"
	end
# 187 "data/maps/Route111/scripts.pory"

# 188 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 189 "data/maps/Route111/scripts.pory"
	lockall
# 190 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 191 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 192 "data/maps/Route111/scripts.pory"
	end
# 193 "data/maps/Route111/scripts.pory"

# 194 "data/maps/Route111/scripts.pory"
@ Unused
# 195 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 196 "data/maps/Route111/scripts.pory"
	lockall
# 197 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 198 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 199 "data/maps/Route111/scripts.pory"
	end
# 200 "data/maps/Route111/scripts.pory"

# 201 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 202 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 203 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 204 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 205 "data/maps/Route111/scripts.pory"
	releaseall
# 206 "data/maps/Route111/scripts.pory"
	end
# 207 "data/maps/Route111/scripts.pory"

# 208 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 209 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 210 "data/maps/Route111/scripts.pory"
	closemessage
# 211 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 212 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 213 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 214 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 215 "data/maps/Route111/scripts.pory"
	releaseall
# 216 "data/maps/Route111/scripts.pory"
	end
# 217 "data/maps/Route111/scripts.pory"

# 218 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 219 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 220 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 221 "data/maps/Route111/scripts.pory"
	return
# 222 "data/maps/Route111/scripts.pory"

# 223 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 224 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 225 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 226 "data/maps/Route111/scripts.pory"
	return
# 227 "data/maps/Route111/scripts.pory"

# 228 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 229 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 230 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 231 "data/maps/Route111/scripts.pory"
	return
# 232 "data/maps/Route111/scripts.pory"

# 233 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 234 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 235 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 236 "data/maps/Route111/scripts.pory"
	return
# 237 "data/maps/Route111/scripts.pory"

# 238 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 239 "data/maps/Route111/scripts.pory"
	walk_up
# 240 "data/maps/Route111/scripts.pory"
	step_end
# 241 "data/maps/Route111/scripts.pory"

# 242 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 243 "data/maps/Route111/scripts.pory"
	walk_down
# 244 "data/maps/Route111/scripts.pory"
	step_end
# 245 "data/maps/Route111/scripts.pory"

# 246 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 247 "data/maps/Route111/scripts.pory"
	walk_left
# 248 "data/maps/Route111/scripts.pory"
	step_end
# 249 "data/maps/Route111/scripts.pory"

# 250 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 251 "data/maps/Route111/scripts.pory"
	walk_right
# 252 "data/maps/Route111/scripts.pory"
	step_end
# 253 "data/maps/Route111/scripts.pory"

# 254 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 255 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 256 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 257 "data/maps/Route111/scripts.pory"
	doweather
# 258 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 259 "data/maps/Route111/scripts.pory"
	end
# 260 "data/maps/Route111/scripts.pory"

# 261 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 262 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 263 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 264 "data/maps/Route111/scripts.pory"
	doweather
# 265 "data/maps/Route111/scripts.pory"
	end
# 266 "data/maps/Route111/scripts.pory"

# 267 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 268 "data/maps/Route111/scripts.pory"
	lock
# 269 "data/maps/Route111/scripts.pory"
	faceplayer
# 270 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 271 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 272 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 273 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 274 "data/maps/Route111/scripts.pory"
	release
# 275 "data/maps/Route111/scripts.pory"
	end
# 276 "data/maps/Route111/scripts.pory"

# 277 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 278 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 279 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 280 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 281 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 283 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 284 "data/maps/Route111/scripts.pory"
	closemessage
# 285 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 286 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 288 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 289 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 290 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 291 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 292 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 293 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 294 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 296 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 297 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 298 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 299 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 300 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 301 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 302 "data/maps/Route111/scripts.pory"
	closemessage
# 303 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 304 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 306 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 307 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 308 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 310 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 311 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 312 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 313 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 314 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 315 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 316 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 317 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 318 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 319 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 320 "data/maps/Route111/scripts.pory"
	closemessage
# 321 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 322 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 323 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 324 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 325 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 326 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 327 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 328 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 329 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 330 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 332 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 333 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 334 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 335 "data/maps/Route111/scripts.pory"
	closemessage
# 336 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 337 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 338 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 339 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 340 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 341 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 342 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 343 "data/maps/Route111/scripts.pory"
	release
# 344 "data/maps/Route111/scripts.pory"
	end
# 345 "data/maps/Route111/scripts.pory"

# 346 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 347 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 348 "data/maps/Route111/scripts.pory"
	waitdooranim
# 349 "data/maps/Route111/scripts.pory"
	return
# 350 "data/maps/Route111/scripts.pory"

# 351 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 352 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 353 "data/maps/Route111/scripts.pory"
	waitdooranim
# 354 "data/maps/Route111/scripts.pory"
	return
# 355 "data/maps/Route111/scripts.pory"

# 356 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 357 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 358 "data/maps/Route111/scripts.pory"
	walk_up
# 359 "data/maps/Route111/scripts.pory"
	step_end
# 360 "data/maps/Route111/scripts.pory"

# 361 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 362 "data/maps/Route111/scripts.pory"
	walk_down
# 363 "data/maps/Route111/scripts.pory"
	step_end
# 364 "data/maps/Route111/scripts.pory"

# 365 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 366 "data/maps/Route111/scripts.pory"
	delay_16
# 367 "data/maps/Route111/scripts.pory"
	delay_16
# 368 "data/maps/Route111/scripts.pory"
	delay_16
# 369 "data/maps/Route111/scripts.pory"
	step_end
# 370 "data/maps/Route111/scripts.pory"

# 371 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 372 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 373 "data/maps/Route111/scripts.pory"
	end
# 374 "data/maps/Route111/scripts.pory"

# 375 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 376 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 377 "data/maps/Route111/scripts.pory"
	end
# 378 "data/maps/Route111/scripts.pory"

# 379 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 380 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 381 "data/maps/Route111/scripts.pory"
	end
# 382 "data/maps/Route111/scripts.pory"

# 383 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 384 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 385 "data/maps/Route111/scripts.pory"
	end
# 386 "data/maps/Route111/scripts.pory"

# 387 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 388 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 389 "data/maps/Route111/scripts.pory"
	end
# 390 "data/maps/Route111/scripts.pory"

# 391 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 392 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 393 "data/maps/Route111/scripts.pory"
	end
# 394 "data/maps/Route111/scripts.pory"

# 395 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 396 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 397 "data/maps/Route111/scripts.pory"
	end
# 398 "data/maps/Route111/scripts.pory"

# 399 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 400 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 401 "data/maps/Route111/scripts.pory"
	end
# 402 "data/maps/Route111/scripts.pory"

# 403 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 404 "data/maps/Route111/scripts.pory"
	lock
# 405 "data/maps/Route111/scripts.pory"
	faceplayer
# 406 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 407 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 408 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 409 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 410 "data/maps/Route111/scripts.pory"
	release
# 411 "data/maps/Route111/scripts.pory"
	end
# 412 "data/maps/Route111/scripts.pory"

# 413 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 414 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 415 "data/maps/Route111/scripts.pory"
	release
# 416 "data/maps/Route111/scripts.pory"
	end
# 417 "data/maps/Route111/scripts.pory"

# 418 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 419 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 420 "data/maps/Route111/scripts.pory"
	release
# 421 "data/maps/Route111/scripts.pory"
	end
# 422 "data/maps/Route111/scripts.pory"

# 423 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 424 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 425 "data/maps/Route111/scripts.pory"
	release
# 426 "data/maps/Route111/scripts.pory"
	end
# 427 "data/maps/Route111/scripts.pory"

# 428 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 429 "data/maps/Route111/scripts.pory"
	lockall
# 430 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 431 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 432 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 433 "data/maps/Route111/scripts.pory"
	closemessage
# 434 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 435 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 436 "data/maps/Route111/scripts.pory"
	releaseall
# 437 "data/maps/Route111/scripts.pory"
	end
# 438 "data/maps/Route111/scripts.pory"

# 439 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 440 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 441 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/Route111/scripts.pory"
	end
# 443 "data/maps/Route111/scripts.pory"

# 444 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 445 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 446 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 447 "data/maps/Route111/scripts.pory"
	end
# 448 "data/maps/Route111/scripts.pory"

# 449 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 450 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 451 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 452 "data/maps/Route111/scripts.pory"
	end
# 453 "data/maps/Route111/scripts.pory"

# 454 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 455 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 456 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 457 "data/maps/Route111/scripts.pory"
	end
# 458 "data/maps/Route111/scripts.pory"

# 459 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 460 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 461 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 462 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchDusty
# 463 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 464 "data/maps/Route111/scripts.pory"
	release
# 465 "data/maps/Route111/scripts.pory"
	end
# 466 "data/maps/Route111/scripts.pory"

# 467 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 468 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 469 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 470 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 471 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 472 "data/maps/Route111/scripts.pory"
	release
# 473 "data/maps/Route111/scripts.pory"
	end
# 474 "data/maps/Route111/scripts.pory"

# 475 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 476 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 477 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 478 "data/maps/Route111/scripts.pory"
	end
# 479 "data/maps/Route111/scripts.pory"

# 480 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 481 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 482 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 483 "data/maps/Route111/scripts.pory"
	end
# 484 "data/maps/Route111/scripts.pory"

# 485 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 486 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 487 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 488 "data/maps/Route111/scripts.pory"
	end
# 489 "data/maps/Route111/scripts.pory"

# 490 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 491 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 492 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 493 "data/maps/Route111/scripts.pory"
	end
# 494 "data/maps/Route111/scripts.pory"

# 495 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 496 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 497 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 498 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchWilton
# 499 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 500 "data/maps/Route111/scripts.pory"
	release
# 501 "data/maps/Route111/scripts.pory"
	end
# 502 "data/maps/Route111/scripts.pory"

# 503 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 504 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 505 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 506 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 507 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 508 "data/maps/Route111/scripts.pory"
	release
# 509 "data/maps/Route111/scripts.pory"
	end
# 510 "data/maps/Route111/scripts.pory"

# 511 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 512 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 513 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 514 "data/maps/Route111/scripts.pory"
	end
# 515 "data/maps/Route111/scripts.pory"

# 516 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 517 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 518 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 519 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route111_EventScript_RematchBrooke
# 520 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 521 "data/maps/Route111/scripts.pory"
	release
# 522 "data/maps/Route111/scripts.pory"
	end
# 523 "data/maps/Route111/scripts.pory"

# 524 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 525 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 526 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 528 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 529 "data/maps/Route111/scripts.pory"
	release
# 530 "data/maps/Route111/scripts.pory"
	end
# 531 "data/maps/Route111/scripts.pory"

# 532 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 533 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 534 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route111/scripts.pory"
	end
# 536 "data/maps/Route111/scripts.pory"

# 537 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 538 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 539 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 540 "data/maps/Route111/scripts.pory"
	end
# 541 "data/maps/Route111/scripts.pory"

# 542 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 543 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 544 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/Route111/scripts.pory"
	end
# 546 "data/maps/Route111/scripts.pory"

# 547 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 548 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 549 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route111/scripts.pory"
	end
# 551 "data/maps/Route111/scripts.pory"

# 552 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 553 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 554 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 555 "data/maps/Route111/scripts.pory"
	end
# 556 "data/maps/Route111/scripts.pory"

# 557 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 558 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 559 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 560 "data/maps/Route111/scripts.pory"
	end
# 561 "data/maps/Route111/scripts.pory"

# 562 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 563 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 564 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 565 "data/maps/Route111/scripts.pory"
	end
# 566 "data/maps/Route111/scripts.pory"

# 567 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 568 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 569 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 570 "data/maps/Route111/scripts.pory"
	end
# 571 "data/maps/Route111/scripts.pory"

# 572 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 573 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 574 "data/maps/Route111/scripts.pory"
	end
# 575 "data/maps/Route111/scripts.pory"

# 576 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 577 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 578 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 579 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 580 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 581 "data/maps/Route111/scripts.pory"

# 582 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 583 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 584 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 585 "data/maps/Route111/scripts.pory"

# 586 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 587 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 588 "data/maps/Route111/scripts.pory"

# 589 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 590 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 591 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 592 "data/maps/Route111/scripts.pory"

# 593 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 594 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 595 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 596 "data/maps/Route111/scripts.pory"

# 597 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 598 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 599 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 600 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 601 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 602 "data/maps/Route111/scripts.pory"

# 603 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 604 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 605 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 606 "data/maps/Route111/scripts.pory"

# 607 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 608 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 609 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 610 "data/maps/Route111/scripts.pory"

# 611 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 612 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 613 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 614 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 615 "data/maps/Route111/scripts.pory"

# 616 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 617 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 618 "data/maps/Route111/scripts.pory"

# 619 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 620 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 621 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 622 "data/maps/Route111/scripts.pory"

# 623 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 624 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 625 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 626 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 627 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 628 "data/maps/Route111/scripts.pory"

# 629 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 630 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 631 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 632 "data/maps/Route111/scripts.pory"

# 633 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 634 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 635 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 636 "data/maps/Route111/scripts.pory"

# 637 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 638 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 639 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 640 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 641 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 642 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 643 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 644 "data/maps/Route111/scripts.pory"

# 645 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 646 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 647 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 648 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 649 "data/maps/Route111/scripts.pory"

# 650 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 651 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 652 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 653 "data/maps/Route111/scripts.pory"

# 654 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 655 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 656 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 657 "data/maps/Route111/scripts.pory"

# 658 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 659 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 660 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 661 "data/maps/Route111/scripts.pory"

# 662 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 663 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 664 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 665 "data/maps/Route111/scripts.pory"

# 666 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 667 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 668 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 669 "data/maps/Route111/scripts.pory"

# 670 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 671 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 672 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 673 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 674 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 675 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 676 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 677 "data/maps/Route111/scripts.pory"

# 678 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 679 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 680 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 681 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 682 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 683 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 684 "data/maps/Route111/scripts.pory"

# 685 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 686 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 687 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 688 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 689 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 690 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 691 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 692 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 693 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 694 "data/maps/Route111/scripts.pory"

# 695 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 696 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 697 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 698 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 699 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 700 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 701 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 702 "data/maps/Route111/scripts.pory"

# 703 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 704 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 705 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 706 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 707 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 708 "data/maps/Route111/scripts.pory"

# 709 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 710 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 711 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 712 "data/maps/Route111/scripts.pory"

# 713 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 714 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 715 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 716 "data/maps/Route111/scripts.pory"

# 717 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 718 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 719 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 720 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 721 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 722 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 723 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 724 "data/maps/Route111/scripts.pory"

# 725 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 726 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 727 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 728 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"
