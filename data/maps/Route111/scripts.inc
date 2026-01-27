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
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 43, TRAINER_MARLEY_ROUTE_111, Route111_Text_MarleyIntro, Route111_Text_MarleyDefeat, Route111_EventScript_MarleyDefeated, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
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
	goto_if_lt VAR_TEMP_1, 65, Route111_EventScript_SetSandstorm
# 139 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 140 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 141 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 142 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 143 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DP_ROUTE228_DAY
# 144 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 145 "data/maps/Route111/scripts.pory"
	return
# 146 "data/maps/Route111/scripts.pory"

# 147 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 148 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 149 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 150 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 151 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 152 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 153 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 154 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 155 "data/maps/Route111/scripts.pory"
	end
# 156 "data/maps/Route111/scripts.pory"

# 157 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 158 "data/maps/Route111/scripts.pory"
	return
# 159 "data/maps/Route111/scripts.pory"

# 160 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 161 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 162 "data/maps/Route111/scripts.pory"
	return
# 163 "data/maps/Route111/scripts.pory"

# 164 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 165 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 166 "data/maps/Route111/scripts.pory"
	.2byte 0
# 167 "data/maps/Route111/scripts.pory"

# 168 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 169 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 170 "data/maps/Route111/scripts.pory"
	end
# 171 "data/maps/Route111/scripts.pory"

# 172 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 173 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 174 "data/maps/Route111/scripts.pory"
	.2byte 0
# 175 "data/maps/Route111/scripts.pory"

# 176 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 177 "data/maps/Route111/scripts.pory"
	lockall
# 178 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 179 "data/maps/Route111/scripts.pory"
	waitstate
# 180 "data/maps/Route111/scripts.pory"
	delay 24
# 181 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 182 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 183 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 184 "data/maps/Route111/scripts.pory"
	waitstate
# 185 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 186 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 187 "data/maps/Route111/scripts.pory"
	delay 16
# 188 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 189 "data/maps/Route111/scripts.pory"
	delay 16
# 190 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 191 "data/maps/Route111/scripts.pory"
	waitstate
# 192 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 193 "data/maps/Route111/scripts.pory"
	waitstate
# 194 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 195 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 196 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 197 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 198 "data/maps/Route111/scripts.pory"
	releaseall
# 199 "data/maps/Route111/scripts.pory"
	end
# 200 "data/maps/Route111/scripts.pory"

# 201 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 202 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 203 "data/maps/Route111/scripts.pory"
	releaseall
# 204 "data/maps/Route111/scripts.pory"
	end
# 205 "data/maps/Route111/scripts.pory"

# 206 "data/maps/Route111/scripts.pory"
@ Unused
# 207 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 208 "data/maps/Route111/scripts.pory"
	lock_anim
# 209 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 210 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 211 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 212 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 213 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 214 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 215 "data/maps/Route111/scripts.pory"
	step_end
# 216 "data/maps/Route111/scripts.pory"

# 217 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 218 "data/maps/Route111/scripts.pory"
	lock
# 219 "data/maps/Route111/scripts.pory"
	faceplayer
# 220 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 221 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 222 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 223 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 224 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 225 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 226 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 227 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 228 "data/maps/Route111/scripts.pory"
	release
# 229 "data/maps/Route111/scripts.pory"
	end
# 230 "data/maps/Route111/scripts.pory"

# 231 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 232 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 233 "data/maps/Route111/scripts.pory"
	release
# 234 "data/maps/Route111/scripts.pory"
	end
# 235 "data/maps/Route111/scripts.pory"

# 236 "data/maps/Route111/scripts.pory"
@ Unused
# 237 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 238 "data/maps/Route111/scripts.pory"
	lockall
# 239 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 240 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 241 "data/maps/Route111/scripts.pory"
	end
# 242 "data/maps/Route111/scripts.pory"

# 243 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 244 "data/maps/Route111/scripts.pory"
	lockall
# 245 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 246 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 247 "data/maps/Route111/scripts.pory"
	end
# 248 "data/maps/Route111/scripts.pory"

# 249 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 250 "data/maps/Route111/scripts.pory"
	lockall
# 251 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 252 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 253 "data/maps/Route111/scripts.pory"
	end
# 254 "data/maps/Route111/scripts.pory"

# 255 "data/maps/Route111/scripts.pory"
@ Unused
# 256 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 257 "data/maps/Route111/scripts.pory"
	lockall
# 258 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 259 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 260 "data/maps/Route111/scripts.pory"
	end
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 263 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 264 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 265 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 266 "data/maps/Route111/scripts.pory"
	releaseall
# 267 "data/maps/Route111/scripts.pory"
	end
# 268 "data/maps/Route111/scripts.pory"

# 269 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 270 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 271 "data/maps/Route111/scripts.pory"
	closemessage
# 272 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 273 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 274 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 275 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 276 "data/maps/Route111/scripts.pory"
	releaseall
# 277 "data/maps/Route111/scripts.pory"
	end
# 278 "data/maps/Route111/scripts.pory"

# 279 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 280 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 281 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route111/scripts.pory"
	return
# 283 "data/maps/Route111/scripts.pory"

# 284 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 285 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 286 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route111/scripts.pory"
	return
# 288 "data/maps/Route111/scripts.pory"

# 289 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 290 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 291 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 292 "data/maps/Route111/scripts.pory"
	return
# 293 "data/maps/Route111/scripts.pory"

# 294 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 295 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 296 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 297 "data/maps/Route111/scripts.pory"
	return
# 298 "data/maps/Route111/scripts.pory"

# 299 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 300 "data/maps/Route111/scripts.pory"
	walk_up
# 301 "data/maps/Route111/scripts.pory"
	step_end
# 302 "data/maps/Route111/scripts.pory"

# 303 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 304 "data/maps/Route111/scripts.pory"
	walk_down
# 305 "data/maps/Route111/scripts.pory"
	step_end
# 306 "data/maps/Route111/scripts.pory"

# 307 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 308 "data/maps/Route111/scripts.pory"
	walk_left
# 309 "data/maps/Route111/scripts.pory"
	step_end
# 310 "data/maps/Route111/scripts.pory"

# 311 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 312 "data/maps/Route111/scripts.pory"
	walk_right
# 313 "data/maps/Route111/scripts.pory"
	step_end
# 314 "data/maps/Route111/scripts.pory"

# 315 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 316 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 317 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DP_ROUTE210_DAY
# 318 "data/maps/Route111/scripts.pory"
	doweather
# 319 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 320 "data/maps/Route111/scripts.pory"
	end
# 321 "data/maps/Route111/scripts.pory"

# 322 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 323 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 324 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DP_ROUTE228_DAY
# 325 "data/maps/Route111/scripts.pory"
	doweather
# 326 "data/maps/Route111/scripts.pory"
	end
# 327 "data/maps/Route111/scripts.pory"

# 328 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 329 "data/maps/Route111/scripts.pory"
	lock
# 330 "data/maps/Route111/scripts.pory"
	faceplayer
# 331 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 332 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 333 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 334 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 335 "data/maps/Route111/scripts.pory"
	release
# 336 "data/maps/Route111/scripts.pory"
	end
# 337 "data/maps/Route111/scripts.pory"

# 338 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 339 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 340 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 341 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 342 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 343 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 344 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 345 "data/maps/Route111/scripts.pory"
	closemessage
# 346 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 347 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 349 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 350 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 351 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 352 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 353 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 354 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 355 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 356 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 357 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 358 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 359 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 360 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 361 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 362 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 363 "data/maps/Route111/scripts.pory"
	closemessage
# 364 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 365 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 366 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 367 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 368 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 369 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 370 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 371 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 372 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 373 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 374 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 375 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 376 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 377 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 378 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 379 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 380 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 381 "data/maps/Route111/scripts.pory"
	closemessage
# 382 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 383 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 384 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 385 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 386 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 387 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 389 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 390 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 391 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 393 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 394 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 395 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 396 "data/maps/Route111/scripts.pory"
	closemessage
# 397 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 398 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 400 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 401 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 402 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 403 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 404 "data/maps/Route111/scripts.pory"
	release
# 405 "data/maps/Route111/scripts.pory"
	end
# 406 "data/maps/Route111/scripts.pory"

# 407 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 408 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 409 "data/maps/Route111/scripts.pory"
	waitdooranim
# 410 "data/maps/Route111/scripts.pory"
	return
# 411 "data/maps/Route111/scripts.pory"

# 412 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 413 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 414 "data/maps/Route111/scripts.pory"
	waitdooranim
# 415 "data/maps/Route111/scripts.pory"
	return
# 416 "data/maps/Route111/scripts.pory"

# 417 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 418 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 419 "data/maps/Route111/scripts.pory"
	walk_up
# 420 "data/maps/Route111/scripts.pory"
	step_end
# 421 "data/maps/Route111/scripts.pory"

# 422 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 423 "data/maps/Route111/scripts.pory"
	walk_down
# 424 "data/maps/Route111/scripts.pory"
	step_end
# 425 "data/maps/Route111/scripts.pory"

# 426 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 427 "data/maps/Route111/scripts.pory"
	delay_16
# 428 "data/maps/Route111/scripts.pory"
	delay_16
# 429 "data/maps/Route111/scripts.pory"
	delay_16
# 430 "data/maps/Route111/scripts.pory"
	step_end
# 431 "data/maps/Route111/scripts.pory"

# 432 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 433 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 434 "data/maps/Route111/scripts.pory"
	end
# 435 "data/maps/Route111/scripts.pory"

# 436 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 437 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 438 "data/maps/Route111/scripts.pory"
	end
# 439 "data/maps/Route111/scripts.pory"

# 440 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 441 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 442 "data/maps/Route111/scripts.pory"
	end
# 443 "data/maps/Route111/scripts.pory"

# 444 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 445 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 446 "data/maps/Route111/scripts.pory"
	end
# 447 "data/maps/Route111/scripts.pory"

# 448 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 449 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 450 "data/maps/Route111/scripts.pory"
	end
# 451 "data/maps/Route111/scripts.pory"

# 452 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 453 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 454 "data/maps/Route111/scripts.pory"
	end
# 455 "data/maps/Route111/scripts.pory"

# 456 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 457 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 458 "data/maps/Route111/scripts.pory"
	end
# 459 "data/maps/Route111/scripts.pory"

# 460 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 461 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 462 "data/maps/Route111/scripts.pory"
	end
# 463 "data/maps/Route111/scripts.pory"

# 464 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 465 "data/maps/Route111/scripts.pory"
	lock
# 466 "data/maps/Route111/scripts.pory"
	faceplayer
# 467 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 468 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 469 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 470 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 471 "data/maps/Route111/scripts.pory"
	release
# 472 "data/maps/Route111/scripts.pory"
	end
# 473 "data/maps/Route111/scripts.pory"

# 474 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 475 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 476 "data/maps/Route111/scripts.pory"
	release
# 477 "data/maps/Route111/scripts.pory"
	end
# 478 "data/maps/Route111/scripts.pory"

# 479 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 480 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 481 "data/maps/Route111/scripts.pory"
	release
# 482 "data/maps/Route111/scripts.pory"
	end
# 483 "data/maps/Route111/scripts.pory"

# 484 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 485 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 486 "data/maps/Route111/scripts.pory"
	release
# 487 "data/maps/Route111/scripts.pory"
	end
# 488 "data/maps/Route111/scripts.pory"

# 489 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 490 "data/maps/Route111/scripts.pory"
	lockall
# 491 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 492 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 493 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 494 "data/maps/Route111/scripts.pory"
	closemessage
# 495 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 496 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 497 "data/maps/Route111/scripts.pory"
	releaseall
# 498 "data/maps/Route111/scripts.pory"
	end
# 499 "data/maps/Route111/scripts.pory"

# 500 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 501 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 502 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route111/scripts.pory"
	end
# 504 "data/maps/Route111/scripts.pory"

# 505 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 506 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 507 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 511 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 512 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route111/scripts.pory"
	end
# 514 "data/maps/Route111/scripts.pory"

# 515 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 516 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 517 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/Route111/scripts.pory"
	end
# 519 "data/maps/Route111/scripts.pory"

# 520 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 521 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat
# 522 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 523 "data/maps/Route111/scripts.pory"
	release
# 524 "data/maps/Route111/scripts.pory"
	end
# 525 "data/maps/Route111/scripts.pory"

# 526 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 527 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 528 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 529 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 530 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 531 "data/maps/Route111/scripts.pory"
	release
# 532 "data/maps/Route111/scripts.pory"
	end
# 533 "data/maps/Route111/scripts.pory"

# 534 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 535 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 536 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 537 "data/maps/Route111/scripts.pory"
	end
# 538 "data/maps/Route111/scripts.pory"

# 539 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 540 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 541 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 542 "data/maps/Route111/scripts.pory"
	end
# 543 "data/maps/Route111/scripts.pory"

# 544 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 545 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 546 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 547 "data/maps/Route111/scripts.pory"
	end
# 548 "data/maps/Route111/scripts.pory"

# 549 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 550 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 551 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 552 "data/maps/Route111/scripts.pory"
	end
# 553 "data/maps/Route111/scripts.pory"

# 554 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 555 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat
# 556 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 557 "data/maps/Route111/scripts.pory"
	release
# 558 "data/maps/Route111/scripts.pory"
	end
# 559 "data/maps/Route111/scripts.pory"

# 560 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 561 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 562 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 563 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 564 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 565 "data/maps/Route111/scripts.pory"
	release
# 566 "data/maps/Route111/scripts.pory"
	end
# 567 "data/maps/Route111/scripts.pory"

# 568 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 569 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 570 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 571 "data/maps/Route111/scripts.pory"
	end
# 572 "data/maps/Route111/scripts.pory"

# 573 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 574 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat
# 575 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 576 "data/maps/Route111/scripts.pory"
	release
# 577 "data/maps/Route111/scripts.pory"
	end
# 578 "data/maps/Route111/scripts.pory"

# 579 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 580 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 581 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 582 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 583 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 584 "data/maps/Route111/scripts.pory"
	release
# 585 "data/maps/Route111/scripts.pory"
	end
# 586 "data/maps/Route111/scripts.pory"

# 587 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 588 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 589 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 590 "data/maps/Route111/scripts.pory"
	end
# 591 "data/maps/Route111/scripts.pory"

# 592 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 593 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 594 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 595 "data/maps/Route111/scripts.pory"
	end
# 596 "data/maps/Route111/scripts.pory"

# 597 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 598 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 599 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 600 "data/maps/Route111/scripts.pory"
	end
# 601 "data/maps/Route111/scripts.pory"

# 602 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 603 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 604 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 605 "data/maps/Route111/scripts.pory"
	end
# 606 "data/maps/Route111/scripts.pory"

# 607 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 608 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 609 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 610 "data/maps/Route111/scripts.pory"
	end
# 611 "data/maps/Route111/scripts.pory"

# 612 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 613 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 614 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 615 "data/maps/Route111/scripts.pory"
	end
# 616 "data/maps/Route111/scripts.pory"

# 617 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 618 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 619 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 620 "data/maps/Route111/scripts.pory"
	end
# 621 "data/maps/Route111/scripts.pory"

# 622 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 623 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 624 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 625 "data/maps/Route111/scripts.pory"
	end
# 626 "data/maps/Route111/scripts.pory"

# 627 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 628 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 629 "data/maps/Route111/scripts.pory"
	end
# 630 "data/maps/Route111/scripts.pory"

# 631 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 632 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 633 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 634 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 635 "data/maps/Route111/scripts.pory"
	.string "Pokémon battles?$"
# 636 "data/maps/Route111/scripts.pory"

# 637 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 638 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 639 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 640 "data/maps/Route111/scripts.pory"

# 641 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 642 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 643 "data/maps/Route111/scripts.pory"

# 644 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 645 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 646 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 647 "data/maps/Route111/scripts.pory"

# 648 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 649 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 650 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong TRAINER!$"
# 651 "data/maps/Route111/scripts.pory"

# 652 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 653 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 654 "data/maps/Route111/scripts.pory"
	.string "You must be quite the TRAINER to beat\n"
# 655 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 656 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 657 "data/maps/Route111/scripts.pory"

# 658 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 659 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 660 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 661 "data/maps/Route111/scripts.pory"

# 662 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 663 "data/maps/Route111/scripts.pory"
	.string "There's a strong TRAINER here!\n"
# 664 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 665 "data/maps/Route111/scripts.pory"

# 666 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 667 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 668 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 669 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 670 "data/maps/Route111/scripts.pory"

# 671 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 672 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 673 "data/maps/Route111/scripts.pory"

# 674 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 675 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 676 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 677 "data/maps/Route111/scripts.pory"

# 678 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 679 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 680 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 681 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 682 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 683 "data/maps/Route111/scripts.pory"

# 684 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 685 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 686 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 687 "data/maps/Route111/scripts.pory"

# 688 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 689 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 690 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 691 "data/maps/Route111/scripts.pory"

# 692 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 693 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your Pokémon some\n"
# 694 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 695 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 696 "data/maps/Route111/scripts.pory"
	.string "I've heard the Pokémon LEAGUE's\n"
# 697 "data/maps/Route111/scripts.pory"
	.string "ELITE FOUR are far stronger than\l"
# 698 "data/maps/Route111/scripts.pory"
	.string "any Gym Leader.$"
# 699 "data/maps/Route111/scripts.pory"

# 700 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 701 "data/maps/Route111/scripts.pory"
	.string "I challenged the WINSTRATE family,\n"
# 702 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 703 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 704 "data/maps/Route111/scripts.pory"

# 705 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 706 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 707 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} MAUVILLE CITY$"
# 708 "data/maps/Route111/scripts.pory"

# 709 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 710 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 711 "data/maps/Route111/scripts.pory"
	.string "THE WINSTRATE'S HOUSE$"
# 712 "data/maps/Route111/scripts.pory"

# 713 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 714 "data/maps/Route111/scripts.pory"
	.string "{UP_ARROW} Terra Cave\n"
# 715 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 112$"
# 716 "data/maps/Route111/scripts.pory"

# 717 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 718 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 719 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 113$"
# 720 "data/maps/Route111/scripts.pory"

# 721 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 722 "data/maps/Route111/scripts.pory"
	.string "Old Lady's Rest Stop\n"
# 723 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 724 "data/maps/Route111/scripts.pory"

# 725 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 726 "data/maps/Route111/scripts.pory"
	.string "Trainer Tips\p"
# 727 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a Pokémon's\n"
# 728 "data/maps/Route111/scripts.pory"
	.string "powerfulness is SP. ATK. It stands for\l"
# 729 "data/maps/Route111/scripts.pory"
	.string "“SPECIAL ATTACK.”\p"
# 730 "data/maps/Route111/scripts.pory"
	.string "Likewise, SP. DEF stands for “SPECIAL\n"
# 731 "data/maps/Route111/scripts.pory"
	.string "DEFENSE.”$"
# 732 "data/maps/Route111/scripts.pory"

# 733 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 734 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 735 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 736 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 737 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 738 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the MIRAGE TOWER.$"
# 739 "data/maps/Route111/scripts.pory"

# 740 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 741 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 742 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 743 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 744 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 745 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 746 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 747 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 748 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 749 "data/maps/Route111/scripts.pory"

# 750 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 751 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 752 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 753 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 754 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 755 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 756 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 757 "data/maps/Route111/scripts.pory"

# 758 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 759 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 760 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 761 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 762 "data/maps/Route111/scripts.pory"
	.string "the MIRAGE TOWER…$"
# 763 "data/maps/Route111/scripts.pory"

# 764 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 765 "data/maps/Route111/scripts.pory"
	.string "The CLAW FOSSIL disappeared into\n"
# 766 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 767 "data/maps/Route111/scripts.pory"

# 768 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 769 "data/maps/Route111/scripts.pory"
	.string "The ROOT FOSSIL disappeared into\n"
# 770 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 771 "data/maps/Route111/scripts.pory"

# 772 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 773 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 774 "data/maps/Route111/scripts.pory"
	.string "My uncle in MAUVILLE told me to take\n"
# 775 "data/maps/Route111/scripts.pory"
	.string "ROCK SMASH with me if I was going to\l"
# 776 "data/maps/Route111/scripts.pory"
	.string "Route 111!\p"
# 777 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 778 "data/maps/Route111/scripts.pory"
	.string "the bike shop in MAUVILLE.$"
# 779 "data/maps/Route111/scripts.pory"

# 780 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 781 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} TRAINER HILL ENTRANCE\p"
# 782 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 783 "data/maps/Route111/scripts.pory"
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

Route111_Text_MarleyDefeat::
# 39 "data/maps/Route111/scripts.pory"
	.string "I got left in the dust…$"
