# 1 "data/maps/Route101/scripts.pory"

# 2 "data/maps/Route101/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/Route101/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 4 "data/maps/Route101/scripts.pory"

# 5 "data/maps/Route101/scripts.pory"
Route101_MapScripts::
# 6 "data/maps/Route101/scripts.pory"
	.byte 0
# 7 "data/maps/Route101/scripts.pory"

# 8 "data/maps/Route101/scripts.pory"
Route101_OnTransition:
# 9 "data/maps/Route101/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 10 "data/maps/Route101/scripts.pory"
	end
# 11 "data/maps/Route101/scripts.pory"

# 12 "data/maps/Route101/scripts.pory"
Route101_OnFrame:
# 13 "data/maps/Route101/scripts.pory"
	map_script_2 VAR_ROUTE101_STATE, 0, Route101_EventScript_HideMapNamePopup
# 14 "data/maps/Route101/scripts.pory"
	.2byte 0
# 15 "data/maps/Route101/scripts.pory"

# 16 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 17 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 18 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 19 "data/maps/Route101/scripts.pory"
	end
# 20 "data/maps/Route101/scripts.pory"

# 21 "data/maps/Route101/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 22 "data/maps/Route101/scripts.pory"
	lockall
# 23 "data/maps/Route101/scripts.pory"
	playbgm MUS_HELP, TRUE
# 24 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 25 "data/maps/Route101/scripts.pory"
	closemessage
# 26 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 27 "data/maps/Route101/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 28 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 29 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 30 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 31 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 33 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 34 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 35 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 36 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 38 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 39 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 41 "data/maps/Route101/scripts.pory"
	closemessage
# 42 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 43 "data/maps/Route101/scripts.pory"
	releaseall
# 44 "data/maps/Route101/scripts.pory"
	end
# 45 "data/maps/Route101/scripts.pory"

# 46 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 47 "data/maps/Route101/scripts.pory"
	lockall
# 48 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 49 "data/maps/Route101/scripts.pory"
	closemessage
# 50 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 51 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route101/scripts.pory"
	releaseall
# 53 "data/maps/Route101/scripts.pory"
	end
# 54 "data/maps/Route101/scripts.pory"

# 55 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitWest::
# 56 "data/maps/Route101/scripts.pory"
	lockall
# 57 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 58 "data/maps/Route101/scripts.pory"
	closemessage
# 59 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 60 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route101/scripts.pory"
	releaseall
# 62 "data/maps/Route101/scripts.pory"
	end
# 63 "data/maps/Route101/scripts.pory"

# 64 "data/maps/Route101/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 65 "data/maps/Route101/scripts.pory"
	lockall
# 66 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 67 "data/maps/Route101/scripts.pory"
	closemessage
# 68 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 69 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route101/scripts.pory"
	releaseall
# 71 "data/maps/Route101/scripts.pory"
	end
# 72 "data/maps/Route101/scripts.pory"

# 73 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitSouth:
# 74 "data/maps/Route101/scripts.pory"
	walk_up
# 75 "data/maps/Route101/scripts.pory"
	step_end
# 76 "data/maps/Route101/scripts.pory"

# 77 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitWest:
# 78 "data/maps/Route101/scripts.pory"
	walk_right
# 79 "data/maps/Route101/scripts.pory"
	step_end
# 80 "data/maps/Route101/scripts.pory"

# 81 "data/maps/Route101/scripts.pory"
Route101_Movement_PreventExitNorth:
# 82 "data/maps/Route101/scripts.pory"
	walk_down
# 83 "data/maps/Route101/scripts.pory"
	step_end
# 84 "data/maps/Route101/scripts.pory"

# 85 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 86 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 87 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 88 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 89 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 90 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 91 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 92 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 94 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 95 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 96 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 97 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 98 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 99 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 100 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 101 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 102 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 103 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 104 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 105 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 106 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 107 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 108 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 109 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 110 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 111 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 112 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 113 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 114 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 115 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 116 "data/maps/Route101/scripts.pory"
	step_end
# 117 "data/maps/Route101/scripts.pory"

# 118 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 119 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 120 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 121 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 122 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 123 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 124 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 125 "data/maps/Route101/scripts.pory"
	step_end
# 126 "data/maps/Route101/scripts.pory"

# 127 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 128 "data/maps/Route101/scripts.pory"
	step_end
# 129 "data/maps/Route101/scripts.pory"

# 130 "data/maps/Route101/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 131 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 132 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 133 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 134 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_left
# 135 "data/maps/Route101/scripts.pory"
	step_end
# 136 "data/maps/Route101/scripts.pory"

# 137 "data/maps/Route101/scripts.pory"
Route101_Movement_EnterScene:
# 138 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 139 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 140 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 141 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 142 "data/maps/Route101/scripts.pory"
	walk_in_place_faster_left
# 143 "data/maps/Route101/scripts.pory"
	step_end
# 144 "data/maps/Route101/scripts.pory"

# 145 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 146 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 147 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 148 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 149 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 150 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 151 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 152 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 153 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 154 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 155 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 156 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 157 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 158 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 159 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 160 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 161 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 162 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 163 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 164 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 165 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 166 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 167 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 168 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 171 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 172 "data/maps/Route101/scripts.pory"
	walk_fast_down
# 173 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 174 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 175 "data/maps/Route101/scripts.pory"
	walk_fast_left
# 176 "data/maps/Route101/scripts.pory"
	step_end
# 177 "data/maps/Route101/scripts.pory"

# 178 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchRunAway1:
# 179 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 180 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 181 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 182 "data/maps/Route101/scripts.pory"
	walk_fast_right
# 183 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 184 "data/maps/Route101/scripts.pory"
	walk_fast_up
# 185 "data/maps/Route101/scripts.pory"
	step_end
# 186 "data/maps/Route101/scripts.pory"

# 187 "data/maps/Route101/scripts.pory"
@ Leftover data? This command is unused.
# 188 "data/maps/Route101/scripts.pory"
	step_end
# 189 "data/maps/Route101/scripts.pory"

# 190 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 191 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 192 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 193 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 194 "data/maps/Route101/scripts.pory"
	walk_in_place_fast_right
# 195 "data/maps/Route101/scripts.pory"
	step_end
# 196 "data/maps/Route101/scripts.pory"

# 197 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused1:
# 198 "data/maps/Route101/scripts.pory"
	walk_up
# 199 "data/maps/Route101/scripts.pory"
	walk_up
# 200 "data/maps/Route101/scripts.pory"
	step_end
# 201 "data/maps/Route101/scripts.pory"

# 202 "data/maps/Route101/scripts.pory"
Route101_Movement_Unused2:
# 203 "data/maps/Route101/scripts.pory"
	walk_up
# 204 "data/maps/Route101/scripts.pory"
	walk_left
# 205 "data/maps/Route101/scripts.pory"
	walk_up
# 206 "data/maps/Route101/scripts.pory"
	step_end
# 207 "data/maps/Route101/scripts.pory"

# 208 "data/maps/Route101/scripts.pory"
Route101_EventScript_Youngster::
# 209 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 210 "data/maps/Route101/scripts.pory"
	end
# 211 "data/maps/Route101/scripts.pory"

# 212 "data/maps/Route101/scripts.pory"
Route101_EventScript_Boy::
# 213 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 214 "data/maps/Route101/scripts.pory"
	end
# 215 "data/maps/Route101/scripts.pory"

# 216 "data/maps/Route101/scripts.pory"
Route101_EventScript_RouteSign::
# 217 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 218 "data/maps/Route101/scripts.pory"
	end
# 219 "data/maps/Route101/scripts.pory"

# 220 "data/maps/Route101/scripts.pory"
Route101_EventScript_BirchsBag::
# 221 "data/maps/Route101/scripts.pory"
	lock
# 222 "data/maps/Route101/scripts.pory"
	faceplayer
# 223 "data/maps/Route101/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 224 "data/maps/Route101/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 225 "data/maps/Route101/scripts.pory"
	fadescreen FADE_TO_BLACK
# 226 "data/maps/Route101/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 227 "data/maps/Route101/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 228 "data/maps/Route101/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 229 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route101/scripts.pory"
	special ChooseStarter
# 231 "data/maps/Route101/scripts.pory"
	waitstate
# 232 "data/maps/Route101/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 233 "data/maps/Route101/scripts.pory"
	waitmovement 0
# 234 "data/maps/Route101/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 235 "data/maps/Route101/scripts.pory"
	special HealPlayerParty
# 236 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 237 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 238 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 239 "data/maps/Route101/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 240 "data/maps/Route101/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 241 "data/maps/Route101/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 242 "data/maps/Route101/scripts.pory"
	checkplayergender
# 243 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 244 "data/maps/Route101/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 245 "data/maps/Route101/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 246 "data/maps/Route101/scripts.pory"
	waitstate
# 247 "data/maps/Route101/scripts.pory"
	release
# 248 "data/maps/Route101/scripts.pory"
	end
# 249 "data/maps/Route101/scripts.pory"

# 250 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 251 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 252 "data/maps/Route101/scripts.pory"
	return
# 253 "data/maps/Route101/scripts.pory"

# 254 "data/maps/Route101/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 255 "data/maps/Route101/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 256 "data/maps/Route101/scripts.pory"
	return
# 257 "data/maps/Route101/scripts.pory"

# 258 "data/maps/Route101/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 259 "data/maps/Route101/scripts.pory"
	walk_right
# 260 "data/maps/Route101/scripts.pory"
	step_end
# 261 "data/maps/Route101/scripts.pory"

# 262 "data/maps/Route101/scripts.pory"
Route101_Text_HelpMe:
# 263 "data/maps/Route101/scripts.pory"
	.string "H-help me!$"
# 264 "data/maps/Route101/scripts.pory"

# 265 "data/maps/Route101/scripts.pory"
Route101_Text_PleaseHelp:
# 266 "data/maps/Route101/scripts.pory"
	.string "Hello! You over there!\n"
# 267 "data/maps/Route101/scripts.pory"
	.string "Please! Help!\p"
# 268 "data/maps/Route101/scripts.pory"
	.string "In my BAG!\n"
# 269 "data/maps/Route101/scripts.pory"
	.string "There's a POKé BALL!$"
# 270 "data/maps/Route101/scripts.pory"

# 271 "data/maps/Route101/scripts.pory"
Route101_Text_DontLeaveMe:
# 272 "data/maps/Route101/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 273 "data/maps/Route101/scripts.pory"
	.string "Don't leave me like this!$"
# 274 "data/maps/Route101/scripts.pory"

# 275 "data/maps/Route101/scripts.pory"
Route101_Text_YouSavedMe:
# 276 "data/maps/Route101/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 277 "data/maps/Route101/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 278 "data/maps/Route101/scripts.pory"
	.string "Pokémon when I was jumped.\p"
# 279 "data/maps/Route101/scripts.pory"
	.string "You saved me.\n"
# 280 "data/maps/Route101/scripts.pory"
	.string "Thanks a lot!\p"
# 281 "data/maps/Route101/scripts.pory"
	.string "Oh?\p"
# 282 "data/maps/Route101/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 283 "data/maps/Route101/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 284 "data/maps/Route101/scripts.pory"
	.string "by my Pokémon LAB later, okay?$"
# 285 "data/maps/Route101/scripts.pory"

# 286 "data/maps/Route101/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 287 "data/maps/Route101/scripts.pory"
	.string "If Pokémon get tired, then use\n"
# 288 "data/maps/Route101/scripts.pory"
	.string "your Pokévial.\p"
# 289 "data/maps/Route101/scripts.pory"
	.string "You can use it as many times as\n"
# 290 "data/maps/Route101/scripts.pory"
	.string "you need!$"
# 291 "data/maps/Route101/scripts.pory"

# 292 "data/maps/Route101/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 293 "data/maps/Route101/scripts.pory"
	.string "Wild Pokémon will jump out at you in\n"
# 294 "data/maps/Route101/scripts.pory"
	.string "tall grass.\p"
# 295 "data/maps/Route101/scripts.pory"
	.string "If you want to catch Pokémon, you have\n"
# 296 "data/maps/Route101/scripts.pory"
	.string "to go into the tall grass and search.$"
# 297 "data/maps/Route101/scripts.pory"

# 298 "data/maps/Route101/scripts.pory"
Route101_Text_RouteSign:
# 299 "data/maps/Route101/scripts.pory"
	.string "Route 101\n"
# 300 "data/maps/Route101/scripts.pory"
	.string "{UP_ARROW} Oldale Town$"
