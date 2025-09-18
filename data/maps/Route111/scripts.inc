Route111_EventScript_MarleyTriggered::
# 4 "data/maps/Route111/scripts.pory"
	lock
# 5 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 6 "data/maps/Route111/scripts.pory"
	applymovement 43, Common_Movement_ExclamationMark
# 7 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 8 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 9 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Marley
# 11 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_Marley::
# 16 "data/maps/Route111/scripts.pory"
	lock
# 17 "data/maps/Route111/scripts.pory"
	faceplayer
# 18 "data/maps/Route111/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 19 "data/maps/Route111/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_MARLEY_ROUTE_111, 43, Route111_Text_MarleyIntro, Route111_EventScript_MarleyDefeat, Route111_EventScript_MarleyDefeated
# 20 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Marley_Text_0
# 24 "data/maps/Route111/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 25 "data/maps/Route111/scripts.pory"
	release
	end


# 43 "data/maps/Route111/scripts.pory"
Route111_Movement_FaceUp:
# 44 "data/maps/Route111/scripts.pory"
	face_up
# 45 "data/maps/Route111/scripts.pory"
	step_end

Route111_EventScript_MarleyDefeated::
# 49 "data/maps/Route111/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 50 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Marley_Text_0
# 54 "data/maps/Route111/scripts.pory"
	setflag FLAG_DEFEATED_MARLEY
# 55 "data/maps/Route111/scripts.pory"
	setvar VAR_STAT_TRAINERS_STATE, 3
# 56 "data/maps/Route111/scripts.pory"
	release
	end


# 60 "data/maps/Route111/scripts.pory"

# 61 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 62 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 63 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 64 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 65 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 66 "data/maps/Route111/scripts.pory"

# 67 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 68 "data/maps/Route111/scripts.pory"

# 69 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 70 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 71 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 72 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 73 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 74 "data/maps/Route111/scripts.pory"
	.byte 0
# 75 "data/maps/Route111/scripts.pory"

# 76 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 77 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 78 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 79 "data/maps/Route111/scripts.pory"
	end
# 80 "data/maps/Route111/scripts.pory"

# 81 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 82 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 83 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 84 "data/maps/Route111/scripts.pory"
	return
# 85 "data/maps/Route111/scripts.pory"

# 86 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 87 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 88 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 89 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 90 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 91 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 92 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 93 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 94 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 95 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 96 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 97 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 98 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 99 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 100 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 101 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 102 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 103 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 104 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 105 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 106 "data/maps/Route111/scripts.pory"
	return
# 107 "data/maps/Route111/scripts.pory"

# 108 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 109 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 110 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 111 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 112 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 113 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 114 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 115 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 116 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 117 "data/maps/Route111/scripts.pory"
	end
# 118 "data/maps/Route111/scripts.pory"

# 119 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 120 "data/maps/Route111/scripts.pory"
	checkplayergender
# 121 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 122 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 123 "data/maps/Route111/scripts.pory"
	return
# 124 "data/maps/Route111/scripts.pory"

# 125 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 126 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 127 "data/maps/Route111/scripts.pory"
	return
# 128 "data/maps/Route111/scripts.pory"

# 129 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 130 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 131 "data/maps/Route111/scripts.pory"
	return
# 132 "data/maps/Route111/scripts.pory"

# 133 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 134 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 135 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 136 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 137 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 138 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 139 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 140 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 141 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 142 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 143 "data/maps/Route111/scripts.pory"
	return
# 144 "data/maps/Route111/scripts.pory"

# 145 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 146 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 147 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 148 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 149 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 150 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 151 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 152 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 153 "data/maps/Route111/scripts.pory"
	end
# 154 "data/maps/Route111/scripts.pory"

# 155 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 156 "data/maps/Route111/scripts.pory"
	return
# 157 "data/maps/Route111/scripts.pory"

# 158 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 159 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 160 "data/maps/Route111/scripts.pory"
	return
# 161 "data/maps/Route111/scripts.pory"

# 162 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 163 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 164 "data/maps/Route111/scripts.pory"
	.2byte 0
# 165 "data/maps/Route111/scripts.pory"

# 166 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 167 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 168 "data/maps/Route111/scripts.pory"
	end
# 169 "data/maps/Route111/scripts.pory"

# 170 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 171 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 172 "data/maps/Route111/scripts.pory"
	.2byte 0
# 173 "data/maps/Route111/scripts.pory"

# 174 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 175 "data/maps/Route111/scripts.pory"
	lockall
# 176 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 177 "data/maps/Route111/scripts.pory"
	waitstate
# 178 "data/maps/Route111/scripts.pory"
	delay 24
# 179 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 180 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 181 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 182 "data/maps/Route111/scripts.pory"
	waitstate
# 183 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 184 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 185 "data/maps/Route111/scripts.pory"
	delay 16
# 186 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 187 "data/maps/Route111/scripts.pory"
	delay 16
# 188 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 189 "data/maps/Route111/scripts.pory"
	waitstate
# 190 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 191 "data/maps/Route111/scripts.pory"
	waitstate
# 192 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 193 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 194 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 195 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 196 "data/maps/Route111/scripts.pory"
	releaseall
# 197 "data/maps/Route111/scripts.pory"
	end
# 198 "data/maps/Route111/scripts.pory"

# 199 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 200 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 201 "data/maps/Route111/scripts.pory"
	releaseall
# 202 "data/maps/Route111/scripts.pory"
	end
# 203 "data/maps/Route111/scripts.pory"

# 204 "data/maps/Route111/scripts.pory"
@ Unused
# 205 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 206 "data/maps/Route111/scripts.pory"
	lock_anim
# 207 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 208 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 209 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 211 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 212 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 213 "data/maps/Route111/scripts.pory"
	step_end
# 214 "data/maps/Route111/scripts.pory"

# 215 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 216 "data/maps/Route111/scripts.pory"
	lock
# 217 "data/maps/Route111/scripts.pory"
	faceplayer
# 218 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 219 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 220 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 221 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 222 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 223 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 224 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 225 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 226 "data/maps/Route111/scripts.pory"
	release
# 227 "data/maps/Route111/scripts.pory"
	end
# 228 "data/maps/Route111/scripts.pory"

# 229 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 230 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 231 "data/maps/Route111/scripts.pory"
	release
# 232 "data/maps/Route111/scripts.pory"
	end
# 233 "data/maps/Route111/scripts.pory"

# 234 "data/maps/Route111/scripts.pory"
@ Unused
# 235 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 236 "data/maps/Route111/scripts.pory"
	lockall
# 237 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 238 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 239 "data/maps/Route111/scripts.pory"
	end
# 240 "data/maps/Route111/scripts.pory"

# 241 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 242 "data/maps/Route111/scripts.pory"
	lockall
# 243 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 244 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 245 "data/maps/Route111/scripts.pory"
	end
# 246 "data/maps/Route111/scripts.pory"

# 247 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 248 "data/maps/Route111/scripts.pory"
	lockall
# 249 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 250 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 251 "data/maps/Route111/scripts.pory"
	end
# 252 "data/maps/Route111/scripts.pory"

# 253 "data/maps/Route111/scripts.pory"
@ Unused
# 254 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 255 "data/maps/Route111/scripts.pory"
	lockall
# 256 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 257 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 258 "data/maps/Route111/scripts.pory"
	end
# 259 "data/maps/Route111/scripts.pory"

# 260 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 261 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 262 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 263 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 264 "data/maps/Route111/scripts.pory"
	releaseall
# 265 "data/maps/Route111/scripts.pory"
	end
# 266 "data/maps/Route111/scripts.pory"

# 267 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 268 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 269 "data/maps/Route111/scripts.pory"
	closemessage
# 270 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 271 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 272 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 273 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 274 "data/maps/Route111/scripts.pory"
	releaseall
# 275 "data/maps/Route111/scripts.pory"
	end
# 276 "data/maps/Route111/scripts.pory"

# 277 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 278 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 279 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route111/scripts.pory"
	return
# 281 "data/maps/Route111/scripts.pory"

# 282 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 283 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 284 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 285 "data/maps/Route111/scripts.pory"
	return
# 286 "data/maps/Route111/scripts.pory"

# 287 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 288 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 289 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route111/scripts.pory"
	return
# 291 "data/maps/Route111/scripts.pory"

# 292 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 293 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 294 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route111/scripts.pory"
	return
# 296 "data/maps/Route111/scripts.pory"

# 297 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 298 "data/maps/Route111/scripts.pory"
	walk_up
# 299 "data/maps/Route111/scripts.pory"
	step_end
# 300 "data/maps/Route111/scripts.pory"

# 301 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 302 "data/maps/Route111/scripts.pory"
	walk_down
# 303 "data/maps/Route111/scripts.pory"
	step_end
# 304 "data/maps/Route111/scripts.pory"

# 305 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 306 "data/maps/Route111/scripts.pory"
	walk_left
# 307 "data/maps/Route111/scripts.pory"
	step_end
# 308 "data/maps/Route111/scripts.pory"

# 309 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 310 "data/maps/Route111/scripts.pory"
	walk_right
# 311 "data/maps/Route111/scripts.pory"
	step_end
# 312 "data/maps/Route111/scripts.pory"

# 313 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 314 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 315 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 316 "data/maps/Route111/scripts.pory"
	doweather
# 317 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 318 "data/maps/Route111/scripts.pory"
	end
# 319 "data/maps/Route111/scripts.pory"

# 320 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 321 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 322 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DESERT
# 323 "data/maps/Route111/scripts.pory"
	doweather
# 324 "data/maps/Route111/scripts.pory"
	end
# 325 "data/maps/Route111/scripts.pory"

# 326 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 327 "data/maps/Route111/scripts.pory"
	lock
# 328 "data/maps/Route111/scripts.pory"
	faceplayer
# 329 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 330 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 331 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 332 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 333 "data/maps/Route111/scripts.pory"
	release
# 334 "data/maps/Route111/scripts.pory"
	end
# 335 "data/maps/Route111/scripts.pory"

# 336 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 337 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 338 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 339 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 341 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 342 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 343 "data/maps/Route111/scripts.pory"
	closemessage
# 344 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 345 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 346 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 347 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 348 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 349 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 350 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 351 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 352 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 353 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 354 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 355 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 356 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 357 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 358 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 359 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 360 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 361 "data/maps/Route111/scripts.pory"
	closemessage
# 362 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 363 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 364 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 365 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 366 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 367 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 369 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 370 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 371 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 372 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 373 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 374 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 375 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 376 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 377 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 378 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 379 "data/maps/Route111/scripts.pory"
	closemessage
# 380 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 381 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 383 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 384 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 385 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 386 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 387 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 388 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 389 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 390 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 391 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 392 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 393 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 394 "data/maps/Route111/scripts.pory"
	closemessage
# 395 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 396 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 398 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 399 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 401 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 402 "data/maps/Route111/scripts.pory"
	release
# 403 "data/maps/Route111/scripts.pory"
	end
# 404 "data/maps/Route111/scripts.pory"

# 405 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 406 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 407 "data/maps/Route111/scripts.pory"
	waitdooranim
# 408 "data/maps/Route111/scripts.pory"
	return
# 409 "data/maps/Route111/scripts.pory"

# 410 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 411 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 412 "data/maps/Route111/scripts.pory"
	waitdooranim
# 413 "data/maps/Route111/scripts.pory"
	return
# 414 "data/maps/Route111/scripts.pory"

# 415 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 416 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 417 "data/maps/Route111/scripts.pory"
	walk_up
# 418 "data/maps/Route111/scripts.pory"
	step_end
# 419 "data/maps/Route111/scripts.pory"

# 420 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 421 "data/maps/Route111/scripts.pory"
	walk_down
# 422 "data/maps/Route111/scripts.pory"
	step_end
# 423 "data/maps/Route111/scripts.pory"

# 424 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 425 "data/maps/Route111/scripts.pory"
	delay_16
# 426 "data/maps/Route111/scripts.pory"
	delay_16
# 427 "data/maps/Route111/scripts.pory"
	delay_16
# 428 "data/maps/Route111/scripts.pory"
	step_end
# 429 "data/maps/Route111/scripts.pory"

# 430 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 431 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 432 "data/maps/Route111/scripts.pory"
	end
# 433 "data/maps/Route111/scripts.pory"

# 434 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 435 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 436 "data/maps/Route111/scripts.pory"
	end
# 437 "data/maps/Route111/scripts.pory"

# 438 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 439 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 440 "data/maps/Route111/scripts.pory"
	end
# 441 "data/maps/Route111/scripts.pory"

# 442 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 443 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 444 "data/maps/Route111/scripts.pory"
	end
# 445 "data/maps/Route111/scripts.pory"

# 446 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 447 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 448 "data/maps/Route111/scripts.pory"
	end
# 449 "data/maps/Route111/scripts.pory"

# 450 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 451 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 452 "data/maps/Route111/scripts.pory"
	end
# 453 "data/maps/Route111/scripts.pory"

# 454 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 455 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 456 "data/maps/Route111/scripts.pory"
	end
# 457 "data/maps/Route111/scripts.pory"

# 458 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 459 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 460 "data/maps/Route111/scripts.pory"
	end
# 461 "data/maps/Route111/scripts.pory"

# 462 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 463 "data/maps/Route111/scripts.pory"
	lock
# 464 "data/maps/Route111/scripts.pory"
	faceplayer
# 465 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 466 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 467 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 468 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 469 "data/maps/Route111/scripts.pory"
	release
# 470 "data/maps/Route111/scripts.pory"
	end
# 471 "data/maps/Route111/scripts.pory"

# 472 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 473 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 474 "data/maps/Route111/scripts.pory"
	release
# 475 "data/maps/Route111/scripts.pory"
	end
# 476 "data/maps/Route111/scripts.pory"

# 477 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 478 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 479 "data/maps/Route111/scripts.pory"
	release
# 480 "data/maps/Route111/scripts.pory"
	end
# 481 "data/maps/Route111/scripts.pory"

# 482 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 483 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 484 "data/maps/Route111/scripts.pory"
	release
# 485 "data/maps/Route111/scripts.pory"
	end
# 486 "data/maps/Route111/scripts.pory"

# 487 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 488 "data/maps/Route111/scripts.pory"
	lockall
# 489 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 490 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 491 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 492 "data/maps/Route111/scripts.pory"
	closemessage
# 493 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 494 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route111/scripts.pory"
	releaseall
# 496 "data/maps/Route111/scripts.pory"
	end
# 497 "data/maps/Route111/scripts.pory"

# 498 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 499 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 500 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 501 "data/maps/Route111/scripts.pory"
	end
# 502 "data/maps/Route111/scripts.pory"

# 503 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 504 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 505 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/Route111/scripts.pory"
	end
# 507 "data/maps/Route111/scripts.pory"

# 508 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 509 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 510 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 511 "data/maps/Route111/scripts.pory"
	end
# 512 "data/maps/Route111/scripts.pory"

# 513 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 514 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 515 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/Route111/scripts.pory"
	end
# 517 "data/maps/Route111/scripts.pory"

# 518 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 519 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat
# 520 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 521 "data/maps/Route111/scripts.pory"
	release
# 522 "data/maps/Route111/scripts.pory"
	end
# 523 "data/maps/Route111/scripts.pory"

# 524 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 525 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 526 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 528 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 529 "data/maps/Route111/scripts.pory"
	release
# 530 "data/maps/Route111/scripts.pory"
	end
# 531 "data/maps/Route111/scripts.pory"

# 532 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 533 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 534 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route111/scripts.pory"
	end
# 536 "data/maps/Route111/scripts.pory"

# 537 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 538 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 539 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 540 "data/maps/Route111/scripts.pory"
	end
# 541 "data/maps/Route111/scripts.pory"

# 542 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 543 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 544 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 545 "data/maps/Route111/scripts.pory"
	end
# 546 "data/maps/Route111/scripts.pory"

# 547 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 548 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 549 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 550 "data/maps/Route111/scripts.pory"
	end
# 551 "data/maps/Route111/scripts.pory"

# 552 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 553 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat
# 554 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 555 "data/maps/Route111/scripts.pory"
	release
# 556 "data/maps/Route111/scripts.pory"
	end
# 557 "data/maps/Route111/scripts.pory"

# 558 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 559 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 560 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 561 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 562 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 563 "data/maps/Route111/scripts.pory"
	release
# 564 "data/maps/Route111/scripts.pory"
	end
# 565 "data/maps/Route111/scripts.pory"

# 566 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 567 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 568 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 569 "data/maps/Route111/scripts.pory"
	end
# 570 "data/maps/Route111/scripts.pory"

# 571 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 572 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat
# 573 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 574 "data/maps/Route111/scripts.pory"
	release
# 575 "data/maps/Route111/scripts.pory"
	end
# 576 "data/maps/Route111/scripts.pory"

# 577 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 578 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 579 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 580 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 581 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 582 "data/maps/Route111/scripts.pory"
	release
# 583 "data/maps/Route111/scripts.pory"
	end
# 584 "data/maps/Route111/scripts.pory"

# 585 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 586 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 587 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 588 "data/maps/Route111/scripts.pory"
	end
# 589 "data/maps/Route111/scripts.pory"

# 590 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 591 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 592 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 593 "data/maps/Route111/scripts.pory"
	end
# 594 "data/maps/Route111/scripts.pory"

# 595 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 596 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 597 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 598 "data/maps/Route111/scripts.pory"
	end
# 599 "data/maps/Route111/scripts.pory"

# 600 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 601 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 602 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 603 "data/maps/Route111/scripts.pory"
	end
# 604 "data/maps/Route111/scripts.pory"

# 605 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 606 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 607 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 608 "data/maps/Route111/scripts.pory"
	end
# 609 "data/maps/Route111/scripts.pory"

# 610 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 611 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 612 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 613 "data/maps/Route111/scripts.pory"
	end
# 614 "data/maps/Route111/scripts.pory"

# 615 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 616 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 617 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 618 "data/maps/Route111/scripts.pory"
	end
# 619 "data/maps/Route111/scripts.pory"

# 620 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 621 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 622 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 623 "data/maps/Route111/scripts.pory"
	end
# 624 "data/maps/Route111/scripts.pory"

# 625 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 626 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 627 "data/maps/Route111/scripts.pory"
	end
# 628 "data/maps/Route111/scripts.pory"

# 629 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 630 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 631 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 632 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 633 "data/maps/Route111/scripts.pory"
	.string "POKéMON battles?$"
# 634 "data/maps/Route111/scripts.pory"

# 635 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 636 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 637 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 638 "data/maps/Route111/scripts.pory"

# 639 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 640 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 641 "data/maps/Route111/scripts.pory"

# 642 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 643 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 644 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 645 "data/maps/Route111/scripts.pory"

# 646 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 647 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 648 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 649 "data/maps/Route111/scripts.pory"

# 650 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 651 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 652 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 653 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 654 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 655 "data/maps/Route111/scripts.pory"

# 656 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 657 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 658 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 659 "data/maps/Route111/scripts.pory"

# 660 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 661 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 662 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 663 "data/maps/Route111/scripts.pory"

# 664 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 665 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 666 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 667 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 668 "data/maps/Route111/scripts.pory"

# 669 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 670 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 671 "data/maps/Route111/scripts.pory"

# 672 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 673 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 674 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 675 "data/maps/Route111/scripts.pory"

# 676 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 677 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 678 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 679 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 680 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 681 "data/maps/Route111/scripts.pory"

# 682 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 683 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 684 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 685 "data/maps/Route111/scripts.pory"

# 686 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 687 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 688 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 689 "data/maps/Route111/scripts.pory"

# 690 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 691 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your POKéMON some\n"
# 692 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 693 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 694 "data/maps/Route111/scripts.pory"
	.string "I've heard the POKéMON LEAGUE's\n"
# 695 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 696 "data/maps/Route111/scripts.pory"
	.string "any GYM LEADER.$"
# 697 "data/maps/Route111/scripts.pory"

# 698 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 699 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 700 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 701 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 702 "data/maps/Route111/scripts.pory"

# 703 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 704 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 705 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 706 "data/maps/Route111/scripts.pory"

# 707 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 708 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 709 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 710 "data/maps/Route111/scripts.pory"

# 711 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 712 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 713 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 112$"
# 714 "data/maps/Route111/scripts.pory"

# 715 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 716 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111\n"
# 717 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 113$"
# 718 "data/maps/Route111/scripts.pory"

# 719 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 720 "data/maps/Route111/scripts.pory"
	.string "OLD LADY'S REST STOP\n"
# 721 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 722 "data/maps/Route111/scripts.pory"

# 723 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 724 "data/maps/Route111/scripts.pory"
	.string "TRAINER TIPS\p"
# 725 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a POKéMON's\n"
# 726 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 727 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 728 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 729 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 730 "data/maps/Route111/scripts.pory"

# 731 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 732 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 733 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 734 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 735 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 736 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 737 "data/maps/Route111/scripts.pory"

# 738 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 739 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 740 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 741 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 742 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 743 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 744 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 745 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 746 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 747 "data/maps/Route111/scripts.pory"

# 748 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 749 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 750 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 751 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 752 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 753 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 754 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 755 "data/maps/Route111/scripts.pory"

# 756 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 757 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 758 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 759 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 760 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 761 "data/maps/Route111/scripts.pory"

# 762 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 763 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 764 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 765 "data/maps/Route111/scripts.pory"

# 766 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 767 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 768 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 769 "data/maps/Route111/scripts.pory"

# 770 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 771 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 772 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 773 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 774 "data/maps/Route111/scripts.pory"
	.string "ROUTE 111!\p"
# 775 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 776 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 777 "data/maps/Route111/scripts.pory"

# 778 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 779 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 780 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 781 "data/maps/Route111/scripts.pory"
	.string "TRAINERS!”$"

Route111_EventScript_Marley_Text_0:
# 20 "data/maps/Route111/scripts.pory"
	.string "You're so strong,\n"
	.string "it makes me feel happy!\p"
	.string "I really enjoyed our battle.\n"
	.string "Next time, I won't lose!$"

Route111_Text_MarleyIntro::
# 29 "data/maps/Route111/scripts.pory"
	.string "I'm Marley. …You are?\p"
	.string "{PLAYER}. I see…\n"
	.string "Riley and Cheryl told me about you.\p"
	.string "I don't like to chat, I prefer to let my\n"
	.string "Pokémon and their blazing Speed stat do\l"
	.string "all the talking for me!\p"
	.string "Are you ready?$"

Route111_EventScript_MarleyDefeat::
# 39 "data/maps/Route111/scripts.pory"
	.string "I got left in the dust…$"
