RouteOne_MapScripts::
	.byte 0


RouteOne_LevelCapTest::
# 4 "data/maps/RouteOne/scripts.pory"
	lock
# 5 "data/maps/RouteOne/scripts.pory"
	faceplayer
# 6 "data/maps/RouteOne/scripts.pory"
	msgbox RouteOne_LevelCapTest_Text_0, MSGBOX_YESNO
# 7 "data/maps/RouteOne/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RouteOne_LevelCapTest_2
RouteOne_LevelCapTest_1:
# 13 "data/maps/RouteOne/scripts.pory"
	release
	return

RouteOne_LevelCapTest_2:
# 8 "data/maps/RouteOne/scripts.pory"
	special ChoosePartyMon
# 9 "data/maps/RouteOne/scripts.pory"
	waitstate
# 10 "data/maps/RouteOne/scripts.pory"
	special IncreaseLevelCap
# 11 "data/maps/RouteOne/scripts.pory"
	msgbox RouteOne_LevelCapTest_Text_1
	goto RouteOne_LevelCapTest_1


# 16 "data/maps/RouteOne/scripts.pory"

# 17 "data/maps/RouteOne/scripts.pory"
.set LOCALID_BIRCH, 2
# 18 "data/maps/RouteOne/scripts.pory"
.set LOCALID_ZIGZAGOON, 4
# 19 "data/maps/RouteOne/scripts.pory"

# 20 "data/maps/RouteOne/scripts.pory"
Route101_MapScripts::
# 21 "data/maps/RouteOne/scripts.pory"
	.byte 0
# 22 "data/maps/RouteOne/scripts.pory"

# 23 "data/maps/RouteOne/scripts.pory"
Route101_OnTransition:
# 24 "data/maps/RouteOne/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 25 "data/maps/RouteOne/scripts.pory"
	end
# 26 "data/maps/RouteOne/scripts.pory"

# 27 "data/maps/RouteOne/scripts.pory"
Route101_OnFrame:
# 28 "data/maps/RouteOne/scripts.pory"
	.2byte 0
# 29 "data/maps/RouteOne/scripts.pory"

# 30 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_HideMapNamePopup::
# 31 "data/maps/RouteOne/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 32 "data/maps/RouteOne/scripts.pory"
	setvar VAR_ROUTE101_STATE, 1
# 33 "data/maps/RouteOne/scripts.pory"
	end
# 34 "data/maps/RouteOne/scripts.pory"

# 35 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_StartBirchRescue::
# 36 "data/maps/RouteOne/scripts.pory"
	lockall
# 37 "data/maps/RouteOne/scripts.pory"
	playbgm MUS_HELP, TRUE
# 38 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_HelpMe, MSGBOX_DEFAULT
# 39 "data/maps/RouteOne/scripts.pory"
	closemessage
# 40 "data/maps/RouteOne/scripts.pory"
	setobjectxy LOCALID_BIRCH, 0, 15
# 41 "data/maps/RouteOne/scripts.pory"
	setobjectxy LOCALID_ZIGZAGOON, 0, 16
# 42 "data/maps/RouteOne/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_EnterScene
# 43 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunAway1
# 44 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChase1
# 45 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 46 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonChaseInCircles
# 47 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchRunInCircles
# 48 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 49 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 50 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 51 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_ZIGZAGOON, Route101_Movement_ZigzagoonFaceBirch
# 52 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchFaceZigzagoon
# 53 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 54 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_PleaseHelp, MSGBOX_DEFAULT
# 55 "data/maps/RouteOne/scripts.pory"
	closemessage
# 56 "data/maps/RouteOne/scripts.pory"
	setvar VAR_ROUTE101_STATE, 2
# 57 "data/maps/RouteOne/scripts.pory"
	releaseall
# 58 "data/maps/RouteOne/scripts.pory"
	end
# 59 "data/maps/RouteOne/scripts.pory"

# 60 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_PreventExitSouth::
# 61 "data/maps/RouteOne/scripts.pory"
	lockall
# 62 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 63 "data/maps/RouteOne/scripts.pory"
	closemessage
# 64 "data/maps/RouteOne/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitSouth
# 65 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 66 "data/maps/RouteOne/scripts.pory"
	releaseall
# 67 "data/maps/RouteOne/scripts.pory"
	end
# 68 "data/maps/RouteOne/scripts.pory"

# 69 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_PreventExitWest::
# 70 "data/maps/RouteOne/scripts.pory"
	lockall
# 71 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 72 "data/maps/RouteOne/scripts.pory"
	closemessage
# 73 "data/maps/RouteOne/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitWest
# 74 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 75 "data/maps/RouteOne/scripts.pory"
	releaseall
# 76 "data/maps/RouteOne/scripts.pory"
	end
# 77 "data/maps/RouteOne/scripts.pory"

# 78 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_PreventExitNorth::
# 79 "data/maps/RouteOne/scripts.pory"
	lockall
# 80 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_DontLeaveMe, MSGBOX_DEFAULT
# 81 "data/maps/RouteOne/scripts.pory"
	closemessage
# 82 "data/maps/RouteOne/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route101_Movement_PreventExitNorth
# 83 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 84 "data/maps/RouteOne/scripts.pory"
	releaseall
# 85 "data/maps/RouteOne/scripts.pory"
	end
# 86 "data/maps/RouteOne/scripts.pory"

# 87 "data/maps/RouteOne/scripts.pory"
Route101_Movement_PreventExitSouth:
# 88 "data/maps/RouteOne/scripts.pory"
	walk_up
# 89 "data/maps/RouteOne/scripts.pory"
	step_end
# 90 "data/maps/RouteOne/scripts.pory"

# 91 "data/maps/RouteOne/scripts.pory"
Route101_Movement_PreventExitWest:
# 92 "data/maps/RouteOne/scripts.pory"
	walk_right
# 93 "data/maps/RouteOne/scripts.pory"
	step_end
# 94 "data/maps/RouteOne/scripts.pory"

# 95 "data/maps/RouteOne/scripts.pory"
Route101_Movement_PreventExitNorth:
# 96 "data/maps/RouteOne/scripts.pory"
	walk_down
# 97 "data/maps/RouteOne/scripts.pory"
	step_end
# 98 "data/maps/RouteOne/scripts.pory"

# 99 "data/maps/RouteOne/scripts.pory"
Route101_Movement_ZigzagoonChaseInCircles:
# 100 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 101 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 102 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 103 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 104 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 105 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 106 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 107 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 108 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 109 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 110 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 111 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 112 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 113 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 114 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 115 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 116 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 117 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 118 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 119 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 120 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 121 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 122 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 123 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 124 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 125 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 126 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 127 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 128 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 129 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 130 "data/maps/RouteOne/scripts.pory"
	step_end
# 131 "data/maps/RouteOne/scripts.pory"

# 132 "data/maps/RouteOne/scripts.pory"
Route101_Movement_ZigzagoonChase1:
# 133 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 134 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 135 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 136 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 137 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 138 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 139 "data/maps/RouteOne/scripts.pory"
	step_end
# 140 "data/maps/RouteOne/scripts.pory"

# 141 "data/maps/RouteOne/scripts.pory"
@ Leftover data? This command is unused.
# 142 "data/maps/RouteOne/scripts.pory"
	step_end
# 143 "data/maps/RouteOne/scripts.pory"

# 144 "data/maps/RouteOne/scripts.pory"
Route101_Movement_ZigzagoonFaceBirch:
# 145 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_left
# 146 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_left
# 147 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_left
# 148 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_left
# 149 "data/maps/RouteOne/scripts.pory"
	step_end
# 150 "data/maps/RouteOne/scripts.pory"

# 151 "data/maps/RouteOne/scripts.pory"
Route101_Movement_EnterScene:
# 152 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 153 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 154 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 155 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 156 "data/maps/RouteOne/scripts.pory"
	walk_in_place_faster_left
# 157 "data/maps/RouteOne/scripts.pory"
	step_end
# 158 "data/maps/RouteOne/scripts.pory"

# 159 "data/maps/RouteOne/scripts.pory"
Route101_Movement_BirchRunInCircles:
# 160 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 161 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 162 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 163 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 164 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 165 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 166 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 167 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 168 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 169 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 170 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 171 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 172 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 173 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 174 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 175 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 176 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 177 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 178 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 179 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 180 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 181 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 182 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 183 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 184 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 185 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 186 "data/maps/RouteOne/scripts.pory"
	walk_fast_down
# 187 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 188 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 189 "data/maps/RouteOne/scripts.pory"
	walk_fast_left
# 190 "data/maps/RouteOne/scripts.pory"
	step_end
# 191 "data/maps/RouteOne/scripts.pory"

# 192 "data/maps/RouteOne/scripts.pory"
Route101_Movement_BirchRunAway1:
# 193 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 194 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 195 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 196 "data/maps/RouteOne/scripts.pory"
	walk_fast_right
# 197 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 198 "data/maps/RouteOne/scripts.pory"
	walk_fast_up
# 199 "data/maps/RouteOne/scripts.pory"
	step_end
# 200 "data/maps/RouteOne/scripts.pory"

# 201 "data/maps/RouteOne/scripts.pory"
@ Leftover data? This command is unused.
# 202 "data/maps/RouteOne/scripts.pory"
	step_end
# 203 "data/maps/RouteOne/scripts.pory"

# 204 "data/maps/RouteOne/scripts.pory"
Route101_Movement_BirchFaceZigzagoon:
# 205 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_right
# 206 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_right
# 207 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_right
# 208 "data/maps/RouteOne/scripts.pory"
	walk_in_place_fast_right
# 209 "data/maps/RouteOne/scripts.pory"
	step_end
# 210 "data/maps/RouteOne/scripts.pory"

# 211 "data/maps/RouteOne/scripts.pory"
Route101_Movement_Unused1:
# 212 "data/maps/RouteOne/scripts.pory"
	walk_up
# 213 "data/maps/RouteOne/scripts.pory"
	walk_up
# 214 "data/maps/RouteOne/scripts.pory"
	step_end
# 215 "data/maps/RouteOne/scripts.pory"

# 216 "data/maps/RouteOne/scripts.pory"
Route101_Movement_Unused2:
# 217 "data/maps/RouteOne/scripts.pory"
	walk_up
# 218 "data/maps/RouteOne/scripts.pory"
	walk_left
# 219 "data/maps/RouteOne/scripts.pory"
	walk_up
# 220 "data/maps/RouteOne/scripts.pory"
	step_end
# 221 "data/maps/RouteOne/scripts.pory"

# 222 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_Youngster::
# 223 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_TakeTiredPokemonToPokeCenter, MSGBOX_NPC
# 224 "data/maps/RouteOne/scripts.pory"
	end
# 225 "data/maps/RouteOne/scripts.pory"

# 226 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_Boy::
# 227 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_WildPokemonInTallGrass, MSGBOX_NPC
# 228 "data/maps/RouteOne/scripts.pory"
	end
# 229 "data/maps/RouteOne/scripts.pory"

# 230 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_RouteSign::
# 231 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_RouteSign, MSGBOX_SIGN
# 232 "data/maps/RouteOne/scripts.pory"
	end
# 233 "data/maps/RouteOne/scripts.pory"

# 234 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_BirchsBag::
# 235 "data/maps/RouteOne/scripts.pory"
	lock
# 236 "data/maps/RouteOne/scripts.pory"
	faceplayer
# 237 "data/maps/RouteOne/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 238 "data/maps/RouteOne/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 239 "data/maps/RouteOne/scripts.pory"
	fadescreen FADE_TO_BLACK
# 240 "data/maps/RouteOne/scripts.pory"
	removeobject LOCALID_ZIGZAGOON
# 241 "data/maps/RouteOne/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 6, 13
# 242 "data/maps/RouteOne/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 243 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 244 "data/maps/RouteOne/scripts.pory"
	special ChooseStarter
# 245 "data/maps/RouteOne/scripts.pory"
	waitstate
# 246 "data/maps/RouteOne/scripts.pory"
	applymovement LOCALID_BIRCH, Route101_Movement_BirchApproachPlayer
# 247 "data/maps/RouteOne/scripts.pory"
	waitmovement 0
# 248 "data/maps/RouteOne/scripts.pory"
	msgbox Route101_Text_YouSavedMe, MSGBOX_DEFAULT
# 249 "data/maps/RouteOne/scripts.pory"
	special HealPlayerParty
# 250 "data/maps/RouteOne/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 251 "data/maps/RouteOne/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH
# 252 "data/maps/RouteOne/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 253 "data/maps/RouteOne/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 2
# 254 "data/maps/RouteOne/scripts.pory"
	setvar VAR_ROUTE101_STATE, 3
# 255 "data/maps/RouteOne/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 256 "data/maps/RouteOne/scripts.pory"
	checkplayergender
# 257 "data/maps/RouteOne/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route101_EventScript_HideMayInBedroom
# 258 "data/maps/RouteOne/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route101_EventScript_HideBrendanInBedroom
# 259 "data/maps/RouteOne/scripts.pory"
	warp MAP_CENTER_TOWN_LAB, 6, 5
# 260 "data/maps/RouteOne/scripts.pory"
	waitstate
# 261 "data/maps/RouteOne/scripts.pory"
	release
# 262 "data/maps/RouteOne/scripts.pory"
	end
# 263 "data/maps/RouteOne/scripts.pory"

# 264 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_HideMayInBedroom::
# 265 "data/maps/RouteOne/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 266 "data/maps/RouteOne/scripts.pory"
	return
# 267 "data/maps/RouteOne/scripts.pory"

# 268 "data/maps/RouteOne/scripts.pory"
Route101_EventScript_HideBrendanInBedroom::
# 269 "data/maps/RouteOne/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 270 "data/maps/RouteOne/scripts.pory"
	return
# 271 "data/maps/RouteOne/scripts.pory"

# 272 "data/maps/RouteOne/scripts.pory"
Route101_Movement_BirchApproachPlayer:
# 273 "data/maps/RouteOne/scripts.pory"
	walk_right
# 274 "data/maps/RouteOne/scripts.pory"
	step_end
# 275 "data/maps/RouteOne/scripts.pory"

# 276 "data/maps/RouteOne/scripts.pory"
Route101_Text_HelpMe:
# 277 "data/maps/RouteOne/scripts.pory"
	.string "H-help me!$"
# 278 "data/maps/RouteOne/scripts.pory"

# 279 "data/maps/RouteOne/scripts.pory"
Route101_Text_PleaseHelp:
# 280 "data/maps/RouteOne/scripts.pory"
	.string "Hello! You over there!\n"
# 281 "data/maps/RouteOne/scripts.pory"
	.string "Please! Help!\p"
# 282 "data/maps/RouteOne/scripts.pory"
	.string "In my BAG!\n"
# 283 "data/maps/RouteOne/scripts.pory"
	.string "There's a POKé BALL!$"
# 284 "data/maps/RouteOne/scripts.pory"

# 285 "data/maps/RouteOne/scripts.pory"
Route101_Text_DontLeaveMe:
# 286 "data/maps/RouteOne/scripts.pory"
	.string "Wh-Where are you going?!\n"
# 287 "data/maps/RouteOne/scripts.pory"
	.string "Don't leave me like this!$"
# 288 "data/maps/RouteOne/scripts.pory"

# 289 "data/maps/RouteOne/scripts.pory"
Route101_Text_YouSavedMe:
# 290 "data/maps/RouteOne/scripts.pory"
	.string "PROF. BIRCH: Whew…\p"
# 291 "data/maps/RouteOne/scripts.pory"
	.string "I was in the tall grass studying wild\n"
# 292 "data/maps/RouteOne/scripts.pory"
	.string "POKéMON when I was jumped.\p"
# 293 "data/maps/RouteOne/scripts.pory"
	.string "You saved me.\n"
# 294 "data/maps/RouteOne/scripts.pory"
	.string "Thanks a lot!\p"
# 295 "data/maps/RouteOne/scripts.pory"
	.string "Oh?\p"
# 296 "data/maps/RouteOne/scripts.pory"
	.string "Hi, you're {PLAYER}{KUN}!\p"
# 297 "data/maps/RouteOne/scripts.pory"
	.string "This is not the place to chat, so come\n"
# 298 "data/maps/RouteOne/scripts.pory"
	.string "by my POKéMON LAB later, okay?$"
# 299 "data/maps/RouteOne/scripts.pory"

# 300 "data/maps/RouteOne/scripts.pory"
Route101_Text_TakeTiredPokemonToPokeCenter:
# 301 "data/maps/RouteOne/scripts.pory"
	.string "If POKéMON get tired, take them to\n"
# 302 "data/maps/RouteOne/scripts.pory"
	.string "a POKéMON CENTER.\p"
# 303 "data/maps/RouteOne/scripts.pory"
	.string "There's a POKéMON CENTER in OLDALE\n"
# 304 "data/maps/RouteOne/scripts.pory"
	.string "TOWN right close by.$"
# 305 "data/maps/RouteOne/scripts.pory"

# 306 "data/maps/RouteOne/scripts.pory"
Route101_Text_WildPokemonInTallGrass:
# 307 "data/maps/RouteOne/scripts.pory"
	.string "Wild POKéMON will jump out at you in\n"
# 308 "data/maps/RouteOne/scripts.pory"
	.string "tall grass.\p"
# 309 "data/maps/RouteOne/scripts.pory"
	.string "If you want to catch POKéMON, you have\n"
# 310 "data/maps/RouteOne/scripts.pory"
	.string "to go into the tall grass and search.$"
# 311 "data/maps/RouteOne/scripts.pory"

# 312 "data/maps/RouteOne/scripts.pory"
Route101_Text_RouteSign:
# 313 "data/maps/RouteOne/scripts.pory"
	.string "ROUTE 101\n"
# 314 "data/maps/RouteOne/scripts.pory"
	.string "{UP_ARROW} OLDALE TOWN$"

RouteOne_LevelCapTest_Text_0:
# 6 "data/maps/RouteOne/scripts.pory"
	.string "Increase a Pokémon's level cap?$"

RouteOne_LevelCapTest_Text_1:
# 11 "data/maps/RouteOne/scripts.pory"
	.string "This Pokémon has had its level cap\n"
	.string "increased by {STR_VAR_1}.$"
