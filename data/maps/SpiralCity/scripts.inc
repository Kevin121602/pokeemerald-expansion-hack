SpiralCity_MapScripts::
# 2 "data/maps/SpiralCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SpiralCity_OnTransition
	.byte 0


SpiralCity_EventScript_Movement0::
# 8 "data/maps/SpiralCity/scripts.pory"
	lock
# 9 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement0
# 10 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 11 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement1::
# 15 "data/maps/SpiralCity/scripts.pory"
	lock
# 16 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement1
# 17 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 18 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement2::
# 22 "data/maps/SpiralCity/scripts.pory"
	lock
# 23 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement2
# 24 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 25 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement3::
# 29 "data/maps/SpiralCity/scripts.pory"
	lock
# 30 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement3
# 31 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 32 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement4::
# 36 "data/maps/SpiralCity/scripts.pory"
	lock
# 37 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement4
# 38 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 39 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement5::
# 43 "data/maps/SpiralCity/scripts.pory"
	lock
# 44 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement5
# 45 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 46 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement6::
# 50 "data/maps/SpiralCity/scripts.pory"
	lock
# 51 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement6
# 52 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement7::
# 57 "data/maps/SpiralCity/scripts.pory"
	lock
# 58 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement7
# 59 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Movement8::
# 64 "data/maps/SpiralCity/scripts.pory"
	lock
# 65 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMovement8
# 66 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/SpiralCity/scripts.pory"
	goto SpiralCity_EventScript_Scientist
	return


SpiralCity_EventScript_Scientist::
# 71 "data/maps/SpiralCity/scripts.pory"
	msgbox SpiralCity_EventScript_Scientist_Text_0
# 72 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, ITEM_RESEARCH_NOTES
# 73 "data/maps/SpiralCity/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 74 "data/maps/SpiralCity/scripts.pory"
	msgbox SpiralCity_EventScript_Scientist_Text_1
# 75 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 76 "data/maps/SpiralCity/scripts.pory"
	applymovement 2, ScientistMovement
# 77 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 1
# 79 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_SPIRAL_CITY_SCIENTIST
# 80 "data/maps/SpiralCity/scripts.pory"
	removeobject 2
# 81 "data/maps/SpiralCity/scripts.pory"
	releaseall
	end


SpiralCity_OnTransition::
# 86 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_VISITED_SPIRAL_CITY
	end


# 90 "data/maps/SpiralCity/scripts.pory"
PlayerMovement0:
# 91 "data/maps/SpiralCity/scripts.pory"
	face_right
# 92 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 92 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 92 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 92 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 93 "data/maps/SpiralCity/scripts.pory"
	face_up
# 94 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 94 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 94 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/SpiralCity/scripts.pory"
PlayerMovement1:
# 98 "data/maps/SpiralCity/scripts.pory"
	face_right
# 99 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 99 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 99 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 100 "data/maps/SpiralCity/scripts.pory"
	face_up
# 101 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 101 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 101 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 104 "data/maps/SpiralCity/scripts.pory"
PlayerMovement2:
# 105 "data/maps/SpiralCity/scripts.pory"
	face_right
# 106 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 106 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 107 "data/maps/SpiralCity/scripts.pory"
	face_up
# 108 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 108 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 108 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 111 "data/maps/SpiralCity/scripts.pory"
PlayerMovement3:
# 112 "data/maps/SpiralCity/scripts.pory"
	face_right
# 113 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 114 "data/maps/SpiralCity/scripts.pory"
	face_up
# 115 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 115 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 115 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 118 "data/maps/SpiralCity/scripts.pory"
PlayerMovement4:
# 119 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 119 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 119 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 122 "data/maps/SpiralCity/scripts.pory"
PlayerMovement5:
# 123 "data/maps/SpiralCity/scripts.pory"
	face_left
# 124 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 125 "data/maps/SpiralCity/scripts.pory"
	face_up
# 126 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 126 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 126 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 129 "data/maps/SpiralCity/scripts.pory"
PlayerMovement6:
# 130 "data/maps/SpiralCity/scripts.pory"
	face_left
# 131 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 131 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 132 "data/maps/SpiralCity/scripts.pory"
	face_up
# 133 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 133 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 133 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/SpiralCity/scripts.pory"
PlayerMovement7:
# 137 "data/maps/SpiralCity/scripts.pory"
	face_left
# 138 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 138 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 138 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 139 "data/maps/SpiralCity/scripts.pory"
	face_up
# 140 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 140 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 140 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/SpiralCity/scripts.pory"
PlayerMovement8:
# 144 "data/maps/SpiralCity/scripts.pory"
	face_left
# 145 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 145 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 145 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 145 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 146 "data/maps/SpiralCity/scripts.pory"
	face_up
# 147 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 147 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 147 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

# 150 "data/maps/SpiralCity/scripts.pory"
ScientistMovement:
# 151 "data/maps/SpiralCity/scripts.pory"
	face_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 152 "data/maps/SpiralCity/scripts.pory"
	walk_up
	step_end

SpiralCity_EventScript_Guide::
# 156 "data/maps/SpiralCity/scripts.pory"
	lock
# 157 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 158 "data/maps/SpiralCity/scripts.pory"
	msgbox GuideText
# 159 "data/maps/SpiralCity/scripts.pory"
	release
	return


SpiralCity_EventScript_Everstone::
# 169 "data/maps/SpiralCity/scripts.pory"
	lock
# 170 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 171 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_EVERSTONE, SpiralCity_EventScript_Everstone_2
SpiralCity_EventScript_Everstone_1:
# 174 "data/maps/SpiralCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EVERSTONE, SpiralCity_EventScript_Everstone_5
SpiralCity_EventScript_Everstone_4:
# 179 "data/maps/SpiralCity/scripts.pory"
	release
	return

SpiralCity_EventScript_Everstone_2:
# 172 "data/maps/SpiralCity/scripts.pory"
	msgbox SpiralCity_EventScript_Everstone_Text_0
	goto SpiralCity_EventScript_Everstone_1

SpiralCity_EventScript_Everstone_5:
# 175 "data/maps/SpiralCity/scripts.pory"
	msgbox EverstoneText
# 176 "data/maps/SpiralCity/scripts.pory"
	giveitem ITEM_EVERSTONE
# 177 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_RECEIVED_EVERSTONE
	goto SpiralCity_EventScript_Everstone_4


# 187 "data/maps/SpiralCity/scripts.pory"

# 188 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 189 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 190 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 191 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 192 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 193 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 194 "data/maps/SpiralCity/scripts.pory"

# 195 "data/maps/SpiralCity/scripts.pory"
RustboroCity_MapScripts::
# 196 "data/maps/SpiralCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 197 "data/maps/SpiralCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 198 "data/maps/SpiralCity/scripts.pory"
	.byte 0
# 199 "data/maps/SpiralCity/scripts.pory"

# 200 "data/maps/SpiralCity/scripts.pory"
RustboroCity_OnTransition:
# 201 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_VISITED_SPIRAL_CITY
# 202 "data/maps/SpiralCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 203 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_SPIRAL_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 204 "data/maps/SpiralCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 205 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_SPIRAL_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 206 "data/maps/SpiralCity/scripts.pory"
	end
# 207 "data/maps/SpiralCity/scripts.pory"

# 208 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 209 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 210 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 211 "data/maps/SpiralCity/scripts.pory"
	end
# 212 "data/maps/SpiralCity/scripts.pory"

# 213 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 214 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 215 "data/maps/SpiralCity/scripts.pory"
	end
# 216 "data/maps/SpiralCity/scripts.pory"

# 217 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 218 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 219 "data/maps/SpiralCity/scripts.pory"
	return
# 220 "data/maps/SpiralCity/scripts.pory"

# 221 "data/maps/SpiralCity/scripts.pory"
RustboroCity_OnFrame:
# 222 "data/maps/SpiralCity/scripts.pory"
	map_script_2 VAR_SPIRAL_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 223 "data/maps/SpiralCity/scripts.pory"
	.2byte 0
# 224 "data/maps/SpiralCity/scripts.pory"

# 225 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 226 "data/maps/SpiralCity/scripts.pory"
	lockall
# 227 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 228 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 229 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 230 "data/maps/SpiralCity/scripts.pory"
	playse SE_EXIT
# 231 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 232 "data/maps/SpiralCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 233 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 234 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 235 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 236 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 237 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 238 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 239 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 240 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 241 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 243 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 244 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 245 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 246 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 247 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 248 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 250 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 251 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 252 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 253 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 254 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 255 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 256 "data/maps/SpiralCity/scripts.pory"
	delay 20
# 257 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 258 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 260 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 261 "data/maps/SpiralCity/scripts.pory"
	delay 20
# 262 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 263 "data/maps/SpiralCity/scripts.pory"

# 264 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 265 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 266 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 267 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 268 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 269 "data/maps/SpiralCity/scripts.pory"

# 270 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 271 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 272 "data/maps/SpiralCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 273 "data/maps/SpiralCity/scripts.pory"
	waitstate
# 274 "data/maps/SpiralCity/scripts.pory"
	switch VAR_RESULT
# 275 "data/maps/SpiralCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 276 "data/maps/SpiralCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 277 "data/maps/SpiralCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 278 "data/maps/SpiralCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 279 "data/maps/SpiralCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 280 "data/maps/SpiralCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 281 "data/maps/SpiralCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 282 "data/maps/SpiralCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 283 "data/maps/SpiralCity/scripts.pory"
	special OpenPokenavForTutorial
# 284 "data/maps/SpiralCity/scripts.pory"
	waitstate
# 285 "data/maps/SpiralCity/scripts.pory"
	delay 20
# 286 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 287 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 288 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 289 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/SpiralCity/scripts.pory"
	playse SE_EXIT
# 291 "data/maps/SpiralCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 292 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 293 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 7
# 294 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 295 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 296 "data/maps/SpiralCity/scripts.pory"
	end
# 297 "data/maps/SpiralCity/scripts.pory"

# 298 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 299 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_down
# 300 "data/maps/SpiralCity/scripts.pory"
	step_end
# 301 "data/maps/SpiralCity/scripts.pory"

# 302 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 303 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 304 "data/maps/SpiralCity/scripts.pory"
	step_end
# 305 "data/maps/SpiralCity/scripts.pory"

# 306 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 307 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 308 "data/maps/SpiralCity/scripts.pory"
	delay_16
# 309 "data/maps/SpiralCity/scripts.pory"
	step_end
# 310 "data/maps/SpiralCity/scripts.pory"

# 311 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 312 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 313 "data/maps/SpiralCity/scripts.pory"
	delay_16
# 314 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 315 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 316 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 317 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 318 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_faster_up
# 319 "data/maps/SpiralCity/scripts.pory"
	delay_16
# 320 "data/maps/SpiralCity/scripts.pory"
	step_end
# 321 "data/maps/SpiralCity/scripts.pory"

# 322 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 323 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 324 "data/maps/SpiralCity/scripts.pory"
	step_end
# 325 "data/maps/SpiralCity/scripts.pory"

# 326 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 327 "data/maps/SpiralCity/scripts.pory"
	lock
# 328 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 329 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 330 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 331 "data/maps/SpiralCity/scripts.pory"
	release
# 332 "data/maps/SpiralCity/scripts.pory"
	end
# 333 "data/maps/SpiralCity/scripts.pory"

# 334 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 335 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 336 "data/maps/SpiralCity/scripts.pory"
	release
# 337 "data/maps/SpiralCity/scripts.pory"
	end
# 338 "data/maps/SpiralCity/scripts.pory"

# 339 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 340 "data/maps/SpiralCity/scripts.pory"
	lock
# 341 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 342 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 343 "data/maps/SpiralCity/scripts.pory"
	release
# 344 "data/maps/SpiralCity/scripts.pory"
	end
# 345 "data/maps/SpiralCity/scripts.pory"

# 346 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 347 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 348 "data/maps/SpiralCity/scripts.pory"
	end
# 349 "data/maps/SpiralCity/scripts.pory"

# 350 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 351 "data/maps/SpiralCity/scripts.pory"
	lock
# 352 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 353 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 354 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 355 "data/maps/SpiralCity/scripts.pory"
	release
# 356 "data/maps/SpiralCity/scripts.pory"
	end
# 357 "data/maps/SpiralCity/scripts.pory"

# 358 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 359 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 360 "data/maps/SpiralCity/scripts.pory"
	release
# 361 "data/maps/SpiralCity/scripts.pory"
	end
# 362 "data/maps/SpiralCity/scripts.pory"

# 363 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 364 "data/maps/SpiralCity/scripts.pory"
	lock
# 365 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 366 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 367 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 368 "data/maps/SpiralCity/scripts.pory"
	release
# 369 "data/maps/SpiralCity/scripts.pory"
	end
# 370 "data/maps/SpiralCity/scripts.pory"

# 371 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 372 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 373 "data/maps/SpiralCity/scripts.pory"
	release
# 374 "data/maps/SpiralCity/scripts.pory"
	end
# 375 "data/maps/SpiralCity/scripts.pory"

# 376 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 377 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 378 "data/maps/SpiralCity/scripts.pory"
	end
# 379 "data/maps/SpiralCity/scripts.pory"

# 380 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 381 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 382 "data/maps/SpiralCity/scripts.pory"
	end
# 383 "data/maps/SpiralCity/scripts.pory"

# 384 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 385 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 386 "data/maps/SpiralCity/scripts.pory"
	end
# 387 "data/maps/SpiralCity/scripts.pory"

# 388 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 389 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 390 "data/maps/SpiralCity/scripts.pory"
	end
# 391 "data/maps/SpiralCity/scripts.pory"

# 392 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 393 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 394 "data/maps/SpiralCity/scripts.pory"
	end
# 395 "data/maps/SpiralCity/scripts.pory"

# 396 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 397 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 398 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 399 "data/maps/SpiralCity/scripts.pory"
	end
# 400 "data/maps/SpiralCity/scripts.pory"

# 401 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 402 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 403 "data/maps/SpiralCity/scripts.pory"
	end
# 404 "data/maps/SpiralCity/scripts.pory"

# 405 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 406 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 407 "data/maps/SpiralCity/scripts.pory"
	end
# 408 "data/maps/SpiralCity/scripts.pory"

# 409 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 410 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 411 "data/maps/SpiralCity/scripts.pory"
	end
# 412 "data/maps/SpiralCity/scripts.pory"

# 413 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 414 "data/maps/SpiralCity/scripts.pory"
	lock
# 415 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 416 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 417 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 418 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 419 "data/maps/SpiralCity/scripts.pory"
	release
# 420 "data/maps/SpiralCity/scripts.pory"
	end
# 421 "data/maps/SpiralCity/scripts.pory"

# 422 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 423 "data/maps/SpiralCity/scripts.pory"
	lock
# 424 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 425 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 426 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 427 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 428 "data/maps/SpiralCity/scripts.pory"
	release
# 429 "data/maps/SpiralCity/scripts.pory"
	end
# 430 "data/maps/SpiralCity/scripts.pory"

# 431 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 432 "data/maps/SpiralCity/scripts.pory"
	lock
# 433 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 434 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 435 "data/maps/SpiralCity/scripts.pory"
	release
# 436 "data/maps/SpiralCity/scripts.pory"
	end
# 437 "data/maps/SpiralCity/scripts.pory"

# 438 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 439 "data/maps/SpiralCity/scripts.pory"
	lockall
# 440 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 441 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 442 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 0
# 443 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 444 "data/maps/SpiralCity/scripts.pory"
	end
# 445 "data/maps/SpiralCity/scripts.pory"

# 446 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 447 "data/maps/SpiralCity/scripts.pory"
	lockall
# 448 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 449 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 450 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 1
# 451 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 452 "data/maps/SpiralCity/scripts.pory"
	end
# 453 "data/maps/SpiralCity/scripts.pory"

# 454 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 455 "data/maps/SpiralCity/scripts.pory"
	lockall
# 456 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 457 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 458 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 2
# 459 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 460 "data/maps/SpiralCity/scripts.pory"
	end
# 461 "data/maps/SpiralCity/scripts.pory"

# 462 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 463 "data/maps/SpiralCity/scripts.pory"
	lockall
# 464 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 465 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 466 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 3
# 467 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 468 "data/maps/SpiralCity/scripts.pory"
	end
# 469 "data/maps/SpiralCity/scripts.pory"

# 470 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 471 "data/maps/SpiralCity/scripts.pory"
	lockall
# 472 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 473 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 474 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 4
# 475 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 476 "data/maps/SpiralCity/scripts.pory"
	end
# 477 "data/maps/SpiralCity/scripts.pory"

# 478 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 479 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 480 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 481 "data/maps/SpiralCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 482 "data/maps/SpiralCity/scripts.pory"
	addobject LOCALID_GRUNT
# 483 "data/maps/SpiralCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 484 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 485 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 486 "data/maps/SpiralCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 487 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 488 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 489 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 490 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 491 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 492 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 493 "data/maps/SpiralCity/scripts.pory"
	fadedefaultbgm
# 494 "data/maps/SpiralCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 495 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 496 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 497 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 498 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 2
# 499 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 500 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 501 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 502 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 503 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 504 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 505 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 506 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 507 "data/maps/SpiralCity/scripts.pory"
	end
# 508 "data/maps/SpiralCity/scripts.pory"

# 509 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 510 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 511 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 512 "data/maps/SpiralCity/scripts.pory"
	return
# 513 "data/maps/SpiralCity/scripts.pory"

# 514 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 515 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 516 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 517 "data/maps/SpiralCity/scripts.pory"
	return
# 518 "data/maps/SpiralCity/scripts.pory"

# 519 "data/maps/SpiralCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 520 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 521 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 522 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/SpiralCity/scripts.pory"
	return
# 524 "data/maps/SpiralCity/scripts.pory"

# 525 "data/maps/SpiralCity/scripts.pory"
@ Unused, see above
# 526 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 527 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 528 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/SpiralCity/scripts.pory"
	return
# 530 "data/maps/SpiralCity/scripts.pory"

# 531 "data/maps/SpiralCity/scripts.pory"
@ Unused, see above
# 532 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 533 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 534 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/SpiralCity/scripts.pory"
	return
# 536 "data/maps/SpiralCity/scripts.pory"

# 537 "data/maps/SpiralCity/scripts.pory"
@ Unused, see above
# 538 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 539 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 540 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/SpiralCity/scripts.pory"
	return
# 542 "data/maps/SpiralCity/scripts.pory"

# 543 "data/maps/SpiralCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 544 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 545 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 546 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 548 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/SpiralCity/scripts.pory"
	return
# 550 "data/maps/SpiralCity/scripts.pory"

# 551 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 552 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 553 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 554 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 555 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 556 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 557 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 558 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 559 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 560 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 561 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 562 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 563 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 564 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 565 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 566 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 567 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 568 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 569 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 570 "data/maps/SpiralCity/scripts.pory"
	step_end
# 571 "data/maps/SpiralCity/scripts.pory"

# 572 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 573 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 574 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 575 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 576 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 577 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 578 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 579 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 580 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 581 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 582 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 583 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 584 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 585 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 586 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 587 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 588 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 589 "data/maps/SpiralCity/scripts.pory"
	step_end
# 590 "data/maps/SpiralCity/scripts.pory"

# 591 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 592 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 593 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 594 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 595 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 596 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 597 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 598 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_faster_up
# 599 "data/maps/SpiralCity/scripts.pory"
	step_end
# 600 "data/maps/SpiralCity/scripts.pory"

# 601 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 602 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 603 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 604 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 605 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 606 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 607 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 608 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 609 "data/maps/SpiralCity/scripts.pory"
	step_end
# 610 "data/maps/SpiralCity/scripts.pory"

# 611 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 612 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 613 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 614 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 615 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 616 "data/maps/SpiralCity/scripts.pory"
	step_end
# 617 "data/maps/SpiralCity/scripts.pory"

# 618 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 619 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 620 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 621 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 622 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 623 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 624 "data/maps/SpiralCity/scripts.pory"
	step_end
# 625 "data/maps/SpiralCity/scripts.pory"

# 626 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 627 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 628 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 629 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 630 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 631 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 632 "data/maps/SpiralCity/scripts.pory"
	step_end
# 633 "data/maps/SpiralCity/scripts.pory"

# 634 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 635 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 636 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 637 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 638 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 639 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 640 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 641 "data/maps/SpiralCity/scripts.pory"
	step_end
# 642 "data/maps/SpiralCity/scripts.pory"

# 643 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 644 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 645 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 646 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 647 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 648 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 649 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 650 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 651 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_faster_down
# 652 "data/maps/SpiralCity/scripts.pory"
	step_end
# 653 "data/maps/SpiralCity/scripts.pory"

# 654 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 655 "data/maps/SpiralCity/scripts.pory"
	lock
# 656 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 657 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 658 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 659 "data/maps/SpiralCity/scripts.pory"
	release
# 660 "data/maps/SpiralCity/scripts.pory"
	end
# 661 "data/maps/SpiralCity/scripts.pory"

# 662 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 663 "data/maps/SpiralCity/scripts.pory"
	waitse
# 664 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 665 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 666 "data/maps/SpiralCity/scripts.pory"
	end
# 667 "data/maps/SpiralCity/scripts.pory"

# 668 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 669 "data/maps/SpiralCity/scripts.pory"
	lockall
# 670 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 671 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 672 "data/maps/SpiralCity/scripts.pory"
	end
# 673 "data/maps/SpiralCity/scripts.pory"

# 674 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 675 "data/maps/SpiralCity/scripts.pory"
	lockall
# 676 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 677 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 678 "data/maps/SpiralCity/scripts.pory"
	end
# 679 "data/maps/SpiralCity/scripts.pory"

# 680 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 681 "data/maps/SpiralCity/scripts.pory"
	lockall
# 682 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 683 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 684 "data/maps/SpiralCity/scripts.pory"
	end
# 685 "data/maps/SpiralCity/scripts.pory"

# 686 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 687 "data/maps/SpiralCity/scripts.pory"
	lockall
# 688 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 689 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 690 "data/maps/SpiralCity/scripts.pory"
	end
# 691 "data/maps/SpiralCity/scripts.pory"

# 692 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 693 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 694 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 695 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 696 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 697 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 698 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 3
# 699 "data/maps/SpiralCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 700 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 701 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 702 "data/maps/SpiralCity/scripts.pory"
	end
# 703 "data/maps/SpiralCity/scripts.pory"

# 704 "data/maps/SpiralCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 705 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 706 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 707 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 709 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 710 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 712 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 714 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/SpiralCity/scripts.pory"
	return
# 716 "data/maps/SpiralCity/scripts.pory"

# 717 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 718 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 719 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 721 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 722 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 723 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 724 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 726 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/SpiralCity/scripts.pory"
	return
# 728 "data/maps/SpiralCity/scripts.pory"

# 729 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 730 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 731 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 733 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 734 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 735 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 736 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 737 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 738 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/SpiralCity/scripts.pory"
	return
# 740 "data/maps/SpiralCity/scripts.pory"

# 741 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 742 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 743 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 745 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 746 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 748 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 749 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 750 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 751 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 752 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 753 "data/maps/SpiralCity/scripts.pory"
	return
# 754 "data/maps/SpiralCity/scripts.pory"

# 755 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 756 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 757 "data/maps/SpiralCity/scripts.pory"
	step_end
# 758 "data/maps/SpiralCity/scripts.pory"

# 759 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 760 "data/maps/SpiralCity/scripts.pory"
	lockall
# 761 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 762 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 763 "data/maps/SpiralCity/scripts.pory"
	end
# 764 "data/maps/SpiralCity/scripts.pory"

# 765 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 766 "data/maps/SpiralCity/scripts.pory"
	lockall
# 767 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 768 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 769 "data/maps/SpiralCity/scripts.pory"
	end
# 770 "data/maps/SpiralCity/scripts.pory"

# 771 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 772 "data/maps/SpiralCity/scripts.pory"
	lockall
# 773 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 774 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 775 "data/maps/SpiralCity/scripts.pory"
	end
# 776 "data/maps/SpiralCity/scripts.pory"

# 777 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 778 "data/maps/SpiralCity/scripts.pory"
	lockall
# 779 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 780 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 781 "data/maps/SpiralCity/scripts.pory"
	end
# 782 "data/maps/SpiralCity/scripts.pory"

# 783 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 784 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 785 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 786 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 787 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 788 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 789 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 790 "data/maps/SpiralCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 791 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 792 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 793 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 794 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 795 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 796 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 5
# 797 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 798 "data/maps/SpiralCity/scripts.pory"
	waitstate
# 799 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 800 "data/maps/SpiralCity/scripts.pory"
	end
# 801 "data/maps/SpiralCity/scripts.pory"

# 802 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 803 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 804 "data/maps/SpiralCity/scripts.pory"
	return
# 805 "data/maps/SpiralCity/scripts.pory"

# 806 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 807 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 808 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 810 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 811 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 813 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 815 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/SpiralCity/scripts.pory"
	return
# 817 "data/maps/SpiralCity/scripts.pory"

# 818 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 819 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 820 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 821 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 822 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 823 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 825 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 827 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/SpiralCity/scripts.pory"
	return
# 829 "data/maps/SpiralCity/scripts.pory"

# 830 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 831 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 832 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 833 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 834 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 835 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 837 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 839 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 840 "data/maps/SpiralCity/scripts.pory"
	return
# 841 "data/maps/SpiralCity/scripts.pory"

# 842 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 843 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 844 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 845 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 846 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 847 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 848 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 849 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 850 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 851 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 853 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 854 "data/maps/SpiralCity/scripts.pory"
	return
# 855 "data/maps/SpiralCity/scripts.pory"

# 856 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 857 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 858 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 859 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 860 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 861 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 862 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 863 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 864 "data/maps/SpiralCity/scripts.pory"
	return
# 865 "data/maps/SpiralCity/scripts.pory"

# 866 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 867 "data/maps/SpiralCity/scripts.pory"
	lockall
# 868 "data/maps/SpiralCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 869 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 870 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 871 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 872 "data/maps/SpiralCity/scripts.pory"

# 873 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 874 "data/maps/SpiralCity/scripts.pory"
	checkplayergender
# 875 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 876 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 877 "data/maps/SpiralCity/scripts.pory"
	return
# 878 "data/maps/SpiralCity/scripts.pory"

# 879 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 880 "data/maps/SpiralCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 881 "data/maps/SpiralCity/scripts.pory"
	return
# 882 "data/maps/SpiralCity/scripts.pory"

# 883 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 884 "data/maps/SpiralCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 885 "data/maps/SpiralCity/scripts.pory"
	return
# 886 "data/maps/SpiralCity/scripts.pory"

# 887 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 888 "data/maps/SpiralCity/scripts.pory"
	lockall
# 889 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 890 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 891 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 892 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 893 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 894 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 895 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 896 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 897 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 898 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 899 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 900 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 901 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 902 "data/maps/SpiralCity/scripts.pory"

# 903 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 904 "data/maps/SpiralCity/scripts.pory"
	lockall
# 905 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 906 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 907 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 908 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 909 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 910 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 911 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 912 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 914 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 915 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 916 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 917 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 918 "data/maps/SpiralCity/scripts.pory"

# 919 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 920 "data/maps/SpiralCity/scripts.pory"
	lockall
# 921 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 922 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 923 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 924 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 925 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 926 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 927 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 928 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 929 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 930 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 931 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 932 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 933 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 934 "data/maps/SpiralCity/scripts.pory"

# 935 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 936 "data/maps/SpiralCity/scripts.pory"
	lockall
# 937 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 938 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 939 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 940 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 941 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 942 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 943 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 944 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 945 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 946 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 947 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 948 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 949 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 950 "data/maps/SpiralCity/scripts.pory"

# 951 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 952 "data/maps/SpiralCity/scripts.pory"
	lockall
# 953 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 954 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 955 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 956 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 957 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 958 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 959 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 960 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 961 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 962 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 963 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 964 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 965 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 966 "data/maps/SpiralCity/scripts.pory"

# 967 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 968 "data/maps/SpiralCity/scripts.pory"
	lockall
# 969 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 970 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 971 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 972 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 973 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 974 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 975 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 976 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 977 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 978 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 979 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 980 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 981 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 982 "data/maps/SpiralCity/scripts.pory"

# 983 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 984 "data/maps/SpiralCity/scripts.pory"
	lockall
# 985 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 986 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 987 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 988 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 989 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 990 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 991 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 992 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 993 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 994 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 995 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 996 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 997 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 998 "data/maps/SpiralCity/scripts.pory"

# 999 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 1000 "data/maps/SpiralCity/scripts.pory"
	lockall
# 1001 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 1002 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 1003 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 1004 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 1005 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 1006 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 1007 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 1008 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 1009 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 1010 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 1011 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1012 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 1013 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 1014 "data/maps/SpiralCity/scripts.pory"

# 1015 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 1016 "data/maps/SpiralCity/scripts.pory"
	checkplayergender
# 1017 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 1018 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 1019 "data/maps/SpiralCity/scripts.pory"
	end
# 1020 "data/maps/SpiralCity/scripts.pory"

# 1021 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 1022 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 1023 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 1024 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1025 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 1026 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 1027 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 1028 "data/maps/SpiralCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1029 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 1030 "data/maps/SpiralCity/scripts.pory"
	waitfanfare
# 1031 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 1032 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 1033 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1034 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 8
# 1035 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1036 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8008, 0
# 1037 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 1038 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 1039 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 1040 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1041 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 1042 "data/maps/SpiralCity/scripts.pory"
	end
# 1043 "data/maps/SpiralCity/scripts.pory"

# 1044 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 1045 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8008, 1
# 1046 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 1047 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 1048 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 1049 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 1050 "data/maps/SpiralCity/scripts.pory"
	end
# 1051 "data/maps/SpiralCity/scripts.pory"

# 1052 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 1053 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 1054 "data/maps/SpiralCity/scripts.pory"
	switch VAR_STARTER_MON
# 1055 "data/maps/SpiralCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 1056 "data/maps/SpiralCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 1057 "data/maps/SpiralCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 1058 "data/maps/SpiralCity/scripts.pory"
	end
# 1059 "data/maps/SpiralCity/scripts.pory"

# 1060 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 1061 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 1062 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1063 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 1064 "data/maps/SpiralCity/scripts.pory"
	end
# 1065 "data/maps/SpiralCity/scripts.pory"

# 1066 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 1067 "data/maps/SpiralCity/scripts.pory"
	savebgm MUS_DUMMY
# 1068 "data/maps/SpiralCity/scripts.pory"
	fadedefaultbgm
# 1069 "data/maps/SpiralCity/scripts.pory"
	return
# 1070 "data/maps/SpiralCity/scripts.pory"

# 1071 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 1072 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 1073 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1074 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1075 "data/maps/SpiralCity/scripts.pory"
	end
# 1076 "data/maps/SpiralCity/scripts.pory"

# 1077 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 1078 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 1079 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1080 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1081 "data/maps/SpiralCity/scripts.pory"
	end
# 1082 "data/maps/SpiralCity/scripts.pory"

# 1083 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 1084 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 1085 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1086 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 1087 "data/maps/SpiralCity/scripts.pory"
	end
# 1088 "data/maps/SpiralCity/scripts.pory"

# 1089 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 1090 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 1091 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 1092 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 1093 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 1094 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 1095 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 1096 "data/maps/SpiralCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1097 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 1098 "data/maps/SpiralCity/scripts.pory"
	waitfanfare
# 1099 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 1100 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 1101 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 1102 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 8
# 1103 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1104 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 1105 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1106 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1107 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1108 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 1109 "data/maps/SpiralCity/scripts.pory"
	end
# 1110 "data/maps/SpiralCity/scripts.pory"

# 1111 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 1112 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 1113 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1114 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1115 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 1116 "data/maps/SpiralCity/scripts.pory"
	end
# 1117 "data/maps/SpiralCity/scripts.pory"

# 1118 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 1119 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 1120 "data/maps/SpiralCity/scripts.pory"
	switch VAR_STARTER_MON
# 1121 "data/maps/SpiralCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 1122 "data/maps/SpiralCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 1123 "data/maps/SpiralCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 1124 "data/maps/SpiralCity/scripts.pory"
	end
# 1125 "data/maps/SpiralCity/scripts.pory"

# 1126 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 1127 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 1128 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1129 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 1130 "data/maps/SpiralCity/scripts.pory"
	end
# 1131 "data/maps/SpiralCity/scripts.pory"

# 1132 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1133 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1134 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1135 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1136 "data/maps/SpiralCity/scripts.pory"
	end
# 1137 "data/maps/SpiralCity/scripts.pory"

# 1138 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1139 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1140 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1141 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1142 "data/maps/SpiralCity/scripts.pory"
	end
# 1143 "data/maps/SpiralCity/scripts.pory"

# 1144 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1145 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1146 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1147 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1148 "data/maps/SpiralCity/scripts.pory"
	end
# 1149 "data/maps/SpiralCity/scripts.pory"

# 1150 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1151 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1152 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1153 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1154 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1155 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1156 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1157 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1158 "data/maps/SpiralCity/scripts.pory"

# 1159 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1160 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1161 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1162 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1163 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1164 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1165 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1166 "data/maps/SpiralCity/scripts.pory"

# 1167 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1168 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1169 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1170 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1171 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1172 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1173 "data/maps/SpiralCity/scripts.pory"

# 1174 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1175 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1176 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 1177 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1178 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1179 "data/maps/SpiralCity/scripts.pory"

# 1180 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1181 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1182 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1183 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1184 "data/maps/SpiralCity/scripts.pory"

# 1185 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1186 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1187 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1188 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1189 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1190 "data/maps/SpiralCity/scripts.pory"

# 1191 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1192 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1193 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1194 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1195 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1196 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1197 "data/maps/SpiralCity/scripts.pory"

# 1198 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1199 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1200 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1201 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1202 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1203 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1204 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1205 "data/maps/SpiralCity/scripts.pory"

# 1206 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1207 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1208 "data/maps/SpiralCity/scripts.pory"
	end
# 1209 "data/maps/SpiralCity/scripts.pory"

# 1210 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1211 "data/maps/SpiralCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1212 "data/maps/SpiralCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1213 "data/maps/SpiralCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1214 "data/maps/SpiralCity/scripts.pory"
	.string "convenient products.$"
# 1215 "data/maps/SpiralCity/scripts.pory"

# 1216 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1217 "data/maps/SpiralCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1218 "data/maps/SpiralCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1219 "data/maps/SpiralCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1220 "data/maps/SpiralCity/scripts.pory"

# 1221 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1222 "data/maps/SpiralCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1223 "data/maps/SpiralCity/scripts.pory"
	.string "challenge?\p"
# 1224 "data/maps/SpiralCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1225 "data/maps/SpiralCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1226 "data/maps/SpiralCity/scripts.pory"
	.string "realize what is required of them.$"
# 1227 "data/maps/SpiralCity/scripts.pory"

# 1228 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1229 "data/maps/SpiralCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1230 "data/maps/SpiralCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1231 "data/maps/SpiralCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1232 "data/maps/SpiralCity/scripts.pory"

# 1233 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1234 "data/maps/SpiralCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1235 "data/maps/SpiralCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1236 "data/maps/SpiralCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1237 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1238 "data/maps/SpiralCity/scripts.pory"

# 1239 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1240 "data/maps/SpiralCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1241 "data/maps/SpiralCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1242 "data/maps/SpiralCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1243 "data/maps/SpiralCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1244 "data/maps/SpiralCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1245 "data/maps/SpiralCity/scripts.pory"

# 1246 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1247 "data/maps/SpiralCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1248 "data/maps/SpiralCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1249 "data/maps/SpiralCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1250 "data/maps/SpiralCity/scripts.pory"
	.string "so often.$"
# 1251 "data/maps/SpiralCity/scripts.pory"

# 1252 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1253 "data/maps/SpiralCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1254 "data/maps/SpiralCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1255 "data/maps/SpiralCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1256 "data/maps/SpiralCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1257 "data/maps/SpiralCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1258 "data/maps/SpiralCity/scripts.pory"
	.string "that PEEKO.$"
# 1259 "data/maps/SpiralCity/scripts.pory"

# 1260 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1261 "data/maps/SpiralCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1262 "data/maps/SpiralCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1263 "data/maps/SpiralCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1264 "data/maps/SpiralCity/scripts.pory"

# 1265 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1266 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1267 "data/maps/SpiralCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1268 "data/maps/SpiralCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1269 "data/maps/SpiralCity/scripts.pory"

# 1270 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1271 "data/maps/SpiralCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1272 "data/maps/SpiralCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1273 "data/maps/SpiralCity/scripts.pory"
	.string "the way it looks.$"
# 1274 "data/maps/SpiralCity/scripts.pory"

# 1275 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1276 "data/maps/SpiralCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1277 "data/maps/SpiralCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1278 "data/maps/SpiralCity/scripts.pory"

# 1279 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1280 "data/maps/SpiralCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1281 "data/maps/SpiralCity/scripts.pory"
	.string "someone grows fast.\p"
# 1282 "data/maps/SpiralCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1283 "data/maps/SpiralCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1284 "data/maps/SpiralCity/scripts.pory"

# 1285 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1286 "data/maps/SpiralCity/scripts.pory"
	.string "Get out!\n"
# 1287 "data/maps/SpiralCity/scripts.pory"
	.string "Out of the way!$"
# 1288 "data/maps/SpiralCity/scripts.pory"

# 1289 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1290 "data/maps/SpiralCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1291 "data/maps/SpiralCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1292 "data/maps/SpiralCity/scripts.pory"

# 1293 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1294 "data/maps/SpiralCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1295 "data/maps/SpiralCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1296 "data/maps/SpiralCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1297 "data/maps/SpiralCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1298 "data/maps/SpiralCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1299 "data/maps/SpiralCity/scripts.pory"
	.string "If I don't…\n"
# 1300 "data/maps/SpiralCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1301 "data/maps/SpiralCity/scripts.pory"

# 1302 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1303 "data/maps/SpiralCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1304 "data/maps/SpiralCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1305 "data/maps/SpiralCity/scripts.pory"

# 1306 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1307 "data/maps/SpiralCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1308 "data/maps/SpiralCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1309 "data/maps/SpiralCity/scripts.pory"
	.string "You did!\n"
# 1310 "data/maps/SpiralCity/scripts.pory"
	.string "You got them back!\p"
# 1311 "data/maps/SpiralCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1312 "data/maps/SpiralCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1313 "data/maps/SpiralCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1314 "data/maps/SpiralCity/scripts.pory"

# 1315 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1316 "data/maps/SpiralCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1317 "data/maps/SpiralCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1318 "data/maps/SpiralCity/scripts.pory"

# 1319 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1320 "data/maps/SpiralCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1321 "data/maps/SpiralCity/scripts.pory"
	.string "Please come with me!$"
# 1322 "data/maps/SpiralCity/scripts.pory"

# 1323 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1324 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1325 "data/maps/SpiralCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1326 "data/maps/SpiralCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1327 "data/maps/SpiralCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1328 "data/maps/SpiralCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1329 "data/maps/SpiralCity/scripts.pory"
	.string "… … … … … …$"
# 1330 "data/maps/SpiralCity/scripts.pory"

# 1331 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1332 "data/maps/SpiralCity/scripts.pory"
	.string "Registered MAY\n"
# 1333 "data/maps/SpiralCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1334 "data/maps/SpiralCity/scripts.pory"

# 1335 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1336 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1337 "data/maps/SpiralCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1338 "data/maps/SpiralCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1339 "data/maps/SpiralCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1340 "data/maps/SpiralCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1341 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1342 "data/maps/SpiralCity/scripts.pory"
	.string "So…\n"
# 1343 "data/maps/SpiralCity/scripts.pory"
	.string "How about a little battle?$"
# 1344 "data/maps/SpiralCity/scripts.pory"

# 1345 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1346 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1347 "data/maps/SpiralCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1348 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1349 "data/maps/SpiralCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1350 "data/maps/SpiralCity/scripts.pory"

# 1351 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1352 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1353 "data/maps/SpiralCity/scripts.pory"
	.string "How about a little battle here?$"
# 1354 "data/maps/SpiralCity/scripts.pory"

# 1355 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1356 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1357 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1358 "data/maps/SpiralCity/scripts.pory"

# 1359 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1360 "data/maps/SpiralCity/scripts.pory"
	.string "Yikes!\n"
# 1361 "data/maps/SpiralCity/scripts.pory"
	.string "You're better than I expected!$"
# 1362 "data/maps/SpiralCity/scripts.pory"

# 1363 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1364 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1365 "data/maps/SpiralCity/scripts.pory"
	.string "I just passed…\p"
# 1366 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1367 "data/maps/SpiralCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1368 "data/maps/SpiralCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1369 "data/maps/SpiralCity/scripts.pory"

# 1370 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1371 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1372 "data/maps/SpiralCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1373 "data/maps/SpiralCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1374 "data/maps/SpiralCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1375 "data/maps/SpiralCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1376 "data/maps/SpiralCity/scripts.pory"
	.string "… … … … … …$"
# 1377 "data/maps/SpiralCity/scripts.pory"

# 1378 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1379 "data/maps/SpiralCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1380 "data/maps/SpiralCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1381 "data/maps/SpiralCity/scripts.pory"

# 1382 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1383 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1384 "data/maps/SpiralCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1385 "data/maps/SpiralCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1386 "data/maps/SpiralCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1387 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1388 "data/maps/SpiralCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1389 "data/maps/SpiralCity/scripts.pory"
	.string "Mine rules.\p"
# 1390 "data/maps/SpiralCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1391 "data/maps/SpiralCity/scripts.pory"
	.string "far you've progressed?$"
# 1392 "data/maps/SpiralCity/scripts.pory"

# 1393 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1394 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1395 "data/maps/SpiralCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1396 "data/maps/SpiralCity/scripts.pory"

# 1397 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1398 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1399 "data/maps/SpiralCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1400 "data/maps/SpiralCity/scripts.pory"

# 1401 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1402 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1403 "data/maps/SpiralCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1404 "data/maps/SpiralCity/scripts.pory"

# 1405 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1406 "data/maps/SpiralCity/scripts.pory"
	.string "Hmm…\n"
# 1407 "data/maps/SpiralCity/scripts.pory"
	.string "You're pretty good.$"
# 1408 "data/maps/SpiralCity/scripts.pory"

# 1409 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1410 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1411 "data/maps/SpiralCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1412 "data/maps/SpiralCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1413 "data/maps/SpiralCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1414 "data/maps/SpiralCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1415 "data/maps/SpiralCity/scripts.pory"

# 1416 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1417 "data/maps/SpiralCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1418 "data/maps/SpiralCity/scripts.pory"
	.string "completion!”\p"
# 1419 "data/maps/SpiralCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1420 "data/maps/SpiralCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1421 "data/maps/SpiralCity/scripts.pory"
	.string "across it in red paint…$"
# 1422 "data/maps/SpiralCity/scripts.pory"

# 1423 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1424 "data/maps/SpiralCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1425 "data/maps/SpiralCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1426 "data/maps/SpiralCity/scripts.pory"
	.string "it all.”$"
# 1427 "data/maps/SpiralCity/scripts.pory"

# 1428 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1429 "data/maps/SpiralCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1430 "data/maps/SpiralCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1431 "data/maps/SpiralCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1432 "data/maps/SpiralCity/scripts.pory"

# 1433 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1434 "data/maps/SpiralCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1435 "data/maps/SpiralCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1436 "data/maps/SpiralCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1437 "data/maps/SpiralCity/scripts.pory"

# 1438 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1439 "data/maps/SpiralCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1440 "data/maps/SpiralCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1441 "data/maps/SpiralCity/scripts.pory"
	.string "nature and science.”$"
# 1442 "data/maps/SpiralCity/scripts.pory"

# 1443 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1444 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1445 "data/maps/SpiralCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1446 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON!”$"
# 1447 "data/maps/SpiralCity/scripts.pory"

# 1448 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1449 "data/maps/SpiralCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1450 "data/maps/SpiralCity/scripts.pory"

# 1451 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1452 "data/maps/SpiralCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1453 "data/maps/SpiralCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1454 "data/maps/SpiralCity/scripts.pory"
	.string "And it turned out great!\p"
# 1455 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1456 "data/maps/SpiralCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1457 "data/maps/SpiralCity/scripts.pory"

# 1458 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1459 "data/maps/SpiralCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1460 "data/maps/SpiralCity/scripts.pory"
	.string "I added a new feature named\n"
# 1461 "data/maps/SpiralCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1462 "data/maps/SpiralCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1463 "data/maps/SpiralCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1464 "data/maps/SpiralCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1465 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1466 "data/maps/SpiralCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1467 "data/maps/SpiralCity/scripts.pory"
	.string "Test it out.\n"
# 1468 "data/maps/SpiralCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1469 "data/maps/SpiralCity/scripts.pory"

# 1470 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1471 "data/maps/SpiralCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1472 "data/maps/SpiralCity/scripts.pory"

# 1473 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1474 "data/maps/SpiralCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1475 "data/maps/SpiralCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1476 "data/maps/SpiralCity/scripts.pory"

# 1477 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1478 "data/maps/SpiralCity/scripts.pory"
	.string "Did you know this?\p"
# 1479 "data/maps/SpiralCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1480 "data/maps/SpiralCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1481 "data/maps/SpiralCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1482 "data/maps/SpiralCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1483 "data/maps/SpiralCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1484 "data/maps/SpiralCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1485 "data/maps/SpiralCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"

SpiralCity_EventScript_Scientist_Text_0:
# 71 "data/maps/SpiralCity/scripts.pory"
	.string "Ah, those are the Research Notes! May I\n"
	.string "have them back?$"

SpiralCity_EventScript_Scientist_Text_1:
# 74 "data/maps/SpiralCity/scripts.pory"
	.string "Please stop by our museum, we have\n"
	.string "something to give you.$"

SpiralCity_EventScript_Everstone_Text_0:
# 172 "data/maps/SpiralCity/scripts.pory"
	.string "You can avoid evolving a Pokémon with\n"
	.string "that Everstone!$"

GuideText::
# 162 "data/maps/SpiralCity/scripts.pory"
	.string "How's it going, champ to be? Beyond this\n"
	.string "entrance is where you'll fight your\l"
	.string "first Trial Leader!\p"
	.string "Inside this cave, all status moves go\n"
	.string "first, and Trial Leader Wally has\l"
	.string "crafted a team to perfectly take\l"
	.string "advantage of this.\p"
	.string "Make sure you're properly prepared!$"

EverstoneText::
# 182 "data/maps/SpiralCity/scripts.pory"
	.string "I can't decide if i should jump down\n"
	.string "that ledge, I'm so indecisive…\p"
	.string "Luckily this item helps me be\n"
	.string "indecisive!$"
