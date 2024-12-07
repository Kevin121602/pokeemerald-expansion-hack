RouteThree_MapScripts::
	.byte 0


RouteThree_EventScript_Billy::
# 4 "data/maps/RouteThree/scripts.pory"
	trainerbattle_single TRAINER_BILLY, RouteThree_Text_BillyIntro, RouteThree_Text_BillyDefeat
# 5 "data/maps/RouteThree/scripts.pory"
	msgbox RouteThree_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
	end


# 21 "data/maps/RouteThree/scripts.pory"

# 22 "data/maps/RouteThree/scripts.pory"
.set LOCALID_WALLY, 2
# 23 "data/maps/RouteThree/scripts.pory"
.set LOCALID_BOY, 3
# 24 "data/maps/RouteThree/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 25 "data/maps/RouteThree/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 26 "data/maps/RouteThree/scripts.pory"
.set LOCALID_SCOTT, 9
# 27 "data/maps/RouteThree/scripts.pory"

# 28 "data/maps/RouteThree/scripts.pory"
PetalburgCity_MapScripts::
# 29 "data/maps/RouteThree/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 30 "data/maps/RouteThree/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 31 "data/maps/RouteThree/scripts.pory"
	.byte 0
# 32 "data/maps/RouteThree/scripts.pory"

# 33 "data/maps/RouteThree/scripts.pory"
PetalburgCity_OnTransition:
# 34 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 35 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 36 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 37 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 38 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 39 "data/maps/RouteThree/scripts.pory"
	end
# 40 "data/maps/RouteThree/scripts.pory"

# 41 "data/maps/RouteThree/scripts.pory"
Route104_EventScript_Billy::
# 42 "data/maps/RouteThree/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 43 "data/maps/RouteThree/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/RouteThree/scripts.pory"
	end
# 45 "data/maps/RouteThree/scripts.pory"

# 46 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 47 "data/maps/RouteThree/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 48 "data/maps/RouteThree/scripts.pory"
	return
# 49 "data/maps/RouteThree/scripts.pory"

# 50 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 51 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 52 "data/maps/RouteThree/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 53 "data/maps/RouteThree/scripts.pory"
	return
# 54 "data/maps/RouteThree/scripts.pory"

# 55 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 56 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 57 "data/maps/RouteThree/scripts.pory"
	return
# 58 "data/maps/RouteThree/scripts.pory"

# 59 "data/maps/RouteThree/scripts.pory"
PetalburgCity_OnFrame:
# 60 "data/maps/RouteThree/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 61 "data/maps/RouteThree/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 62 "data/maps/RouteThree/scripts.pory"
	.2byte 0
# 63 "data/maps/RouteThree/scripts.pory"

# 64 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 65 "data/maps/RouteThree/scripts.pory"
	lockall
# 66 "data/maps/RouteThree/scripts.pory"
	special SavePlayerParty
# 67 "data/maps/RouteThree/scripts.pory"
	special LoadWallyZigzagoon
# 68 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 69 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 70 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 71 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 72 "data/maps/RouteThree/scripts.pory"
	special StartWallyTutorialBattle
# 73 "data/maps/RouteThree/scripts.pory"
	waitstate
# 74 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 75 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_ROUTE_THREE
# 76 "data/maps/RouteThree/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_ROUTE_THREE
# 77 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 78 "data/maps/RouteThree/scripts.pory"
	closemessage
# 79 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 80 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 81 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 82 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 83 "data/maps/RouteThree/scripts.pory"
	special LoadPlayerParty
# 84 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 85 "data/maps/RouteThree/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 86 "data/maps/RouteThree/scripts.pory"
	waitstate
# 87 "data/maps/RouteThree/scripts.pory"
	releaseall
# 88 "data/maps/RouteThree/scripts.pory"
	end
# 89 "data/maps/RouteThree/scripts.pory"

# 90 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 91 "data/maps/RouteThree/scripts.pory"
	lockall
# 92 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 93 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 94 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 95 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 96 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8004, 7
# 97 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8005, 5
# 98 "data/maps/RouteThree/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 99 "data/maps/RouteThree/scripts.pory"
	waitdooranim
# 100 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 101 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 102 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 103 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 104 "data/maps/RouteThree/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE_THREE
# 105 "data/maps/RouteThree/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 106 "data/maps/RouteThree/scripts.pory"
	waitdooranim
# 107 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 109 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 110 "data/maps/RouteThree/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 111 "data/maps/RouteThree/scripts.pory"
	waitstate
# 112 "data/maps/RouteThree/scripts.pory"
	releaseall
# 113 "data/maps/RouteThree/scripts.pory"
	end
# 114 "data/maps/RouteThree/scripts.pory"

# 115 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Boy::
# 116 "data/maps/RouteThree/scripts.pory"
	lock
# 117 "data/maps/RouteThree/scripts.pory"
	faceplayer
# 118 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 119 "data/maps/RouteThree/scripts.pory"
	closemessage
# 120 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 121 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 122 "data/maps/RouteThree/scripts.pory"
	release
# 123 "data/maps/RouteThree/scripts.pory"
	end
# 124 "data/maps/RouteThree/scripts.pory"

# 125 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 126 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 127 "data/maps/RouteThree/scripts.pory"
	end
# 128 "data/maps/RouteThree/scripts.pory"

# 129 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 130 "data/maps/RouteThree/scripts.pory"
	delay_8
# 131 "data/maps/RouteThree/scripts.pory"
	walk_down
# 132 "data/maps/RouteThree/scripts.pory"
	walk_down
# 133 "data/maps/RouteThree/scripts.pory"
	walk_down
# 134 "data/maps/RouteThree/scripts.pory"
	walk_left
# 135 "data/maps/RouteThree/scripts.pory"
	walk_left
# 136 "data/maps/RouteThree/scripts.pory"
	walk_left
# 137 "data/maps/RouteThree/scripts.pory"
	walk_left
# 138 "data/maps/RouteThree/scripts.pory"
	walk_left
# 139 "data/maps/RouteThree/scripts.pory"
	walk_left
# 140 "data/maps/RouteThree/scripts.pory"
	walk_left
# 141 "data/maps/RouteThree/scripts.pory"
	walk_left
# 142 "data/maps/RouteThree/scripts.pory"
	walk_up
# 143 "data/maps/RouteThree/scripts.pory"
	walk_up
# 144 "data/maps/RouteThree/scripts.pory"
	walk_up
# 145 "data/maps/RouteThree/scripts.pory"
	walk_up
# 146 "data/maps/RouteThree/scripts.pory"
	walk_up
# 147 "data/maps/RouteThree/scripts.pory"
	step_end
# 148 "data/maps/RouteThree/scripts.pory"

# 149 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 150 "data/maps/RouteThree/scripts.pory"
	walk_up
# 151 "data/maps/RouteThree/scripts.pory"
	walk_up
# 152 "data/maps/RouteThree/scripts.pory"
	step_end
# 153 "data/maps/RouteThree/scripts.pory"

# 154 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 155 "data/maps/RouteThree/scripts.pory"
	delay_8
# 156 "data/maps/RouteThree/scripts.pory"
	walk_down
# 157 "data/maps/RouteThree/scripts.pory"
	walk_down
# 158 "data/maps/RouteThree/scripts.pory"
	walk_left
# 159 "data/maps/RouteThree/scripts.pory"
	walk_left
# 160 "data/maps/RouteThree/scripts.pory"
	walk_left
# 161 "data/maps/RouteThree/scripts.pory"
	walk_left
# 162 "data/maps/RouteThree/scripts.pory"
	walk_left
# 163 "data/maps/RouteThree/scripts.pory"
	walk_left
# 164 "data/maps/RouteThree/scripts.pory"
	walk_left
# 165 "data/maps/RouteThree/scripts.pory"
	walk_left
# 166 "data/maps/RouteThree/scripts.pory"
	walk_up
# 167 "data/maps/RouteThree/scripts.pory"
	walk_up
# 168 "data/maps/RouteThree/scripts.pory"
	walk_up
# 169 "data/maps/RouteThree/scripts.pory"
	walk_up
# 170 "data/maps/RouteThree/scripts.pory"
	walk_up
# 171 "data/maps/RouteThree/scripts.pory"
	walk_up
# 172 "data/maps/RouteThree/scripts.pory"
	step_end
# 173 "data/maps/RouteThree/scripts.pory"

# 174 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 175 "data/maps/RouteThree/scripts.pory"
	walk_up
# 176 "data/maps/RouteThree/scripts.pory"
	set_invisible
# 177 "data/maps/RouteThree/scripts.pory"
	step_end
# 178 "data/maps/RouteThree/scripts.pory"

# 179 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 180 "data/maps/RouteThree/scripts.pory"
	delay_8
# 181 "data/maps/RouteThree/scripts.pory"
	walk_down
# 182 "data/maps/RouteThree/scripts.pory"
	walk_down
# 183 "data/maps/RouteThree/scripts.pory"
	walk_down
# 184 "data/maps/RouteThree/scripts.pory"
	walk_down
# 185 "data/maps/RouteThree/scripts.pory"
	walk_down
# 186 "data/maps/RouteThree/scripts.pory"
	walk_down
# 187 "data/maps/RouteThree/scripts.pory"
	walk_down
# 188 "data/maps/RouteThree/scripts.pory"
	walk_down
# 189 "data/maps/RouteThree/scripts.pory"
	walk_right
# 190 "data/maps/RouteThree/scripts.pory"
	walk_right
# 191 "data/maps/RouteThree/scripts.pory"
	walk_right
# 192 "data/maps/RouteThree/scripts.pory"
	walk_right
# 193 "data/maps/RouteThree/scripts.pory"
	walk_right
# 194 "data/maps/RouteThree/scripts.pory"
	walk_right
# 195 "data/maps/RouteThree/scripts.pory"
	walk_right
# 196 "data/maps/RouteThree/scripts.pory"
	walk_right
# 197 "data/maps/RouteThree/scripts.pory"
	walk_right
# 198 "data/maps/RouteThree/scripts.pory"
	walk_right
# 199 "data/maps/RouteThree/scripts.pory"
	walk_right
# 200 "data/maps/RouteThree/scripts.pory"
	walk_right
# 201 "data/maps/RouteThree/scripts.pory"
	walk_right
# 202 "data/maps/RouteThree/scripts.pory"
	walk_right
# 203 "data/maps/RouteThree/scripts.pory"
	walk_right
# 204 "data/maps/RouteThree/scripts.pory"
	walk_right
# 205 "data/maps/RouteThree/scripts.pory"
	walk_right
# 206 "data/maps/RouteThree/scripts.pory"
	walk_right
# 207 "data/maps/RouteThree/scripts.pory"
	walk_right
# 208 "data/maps/RouteThree/scripts.pory"
	walk_right
# 209 "data/maps/RouteThree/scripts.pory"
	walk_up
# 210 "data/maps/RouteThree/scripts.pory"
	walk_up
# 211 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_right
# 212 "data/maps/RouteThree/scripts.pory"
	step_end
# 213 "data/maps/RouteThree/scripts.pory"

# 214 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 215 "data/maps/RouteThree/scripts.pory"
	delay_8
# 216 "data/maps/RouteThree/scripts.pory"
	walk_down
# 217 "data/maps/RouteThree/scripts.pory"
	walk_down
# 218 "data/maps/RouteThree/scripts.pory"
	walk_down
# 219 "data/maps/RouteThree/scripts.pory"
	walk_down
# 220 "data/maps/RouteThree/scripts.pory"
	walk_down
# 221 "data/maps/RouteThree/scripts.pory"
	walk_down
# 222 "data/maps/RouteThree/scripts.pory"
	walk_down
# 223 "data/maps/RouteThree/scripts.pory"
	walk_right
# 224 "data/maps/RouteThree/scripts.pory"
	walk_right
# 225 "data/maps/RouteThree/scripts.pory"
	walk_right
# 226 "data/maps/RouteThree/scripts.pory"
	walk_right
# 227 "data/maps/RouteThree/scripts.pory"
	walk_right
# 228 "data/maps/RouteThree/scripts.pory"
	walk_right
# 229 "data/maps/RouteThree/scripts.pory"
	walk_right
# 230 "data/maps/RouteThree/scripts.pory"
	walk_right
# 231 "data/maps/RouteThree/scripts.pory"
	walk_right
# 232 "data/maps/RouteThree/scripts.pory"
	walk_right
# 233 "data/maps/RouteThree/scripts.pory"
	walk_right
# 234 "data/maps/RouteThree/scripts.pory"
	walk_right
# 235 "data/maps/RouteThree/scripts.pory"
	walk_right
# 236 "data/maps/RouteThree/scripts.pory"
	walk_right
# 237 "data/maps/RouteThree/scripts.pory"
	walk_right
# 238 "data/maps/RouteThree/scripts.pory"
	walk_right
# 239 "data/maps/RouteThree/scripts.pory"
	walk_right
# 240 "data/maps/RouteThree/scripts.pory"
	walk_right
# 241 "data/maps/RouteThree/scripts.pory"
	walk_right
# 242 "data/maps/RouteThree/scripts.pory"
	walk_right
# 243 "data/maps/RouteThree/scripts.pory"
	walk_up
# 244 "data/maps/RouteThree/scripts.pory"
	walk_up
# 245 "data/maps/RouteThree/scripts.pory"
	walk_right
# 246 "data/maps/RouteThree/scripts.pory"
	delay_16
# 247 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 248 "data/maps/RouteThree/scripts.pory"
	delay_16
# 249 "data/maps/RouteThree/scripts.pory"
	delay_16
# 250 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_right
# 251 "data/maps/RouteThree/scripts.pory"
	step_end
# 252 "data/maps/RouteThree/scripts.pory"

# 253 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 254 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 255 "data/maps/RouteThree/scripts.pory"
	end
# 256 "data/maps/RouteThree/scripts.pory"

# 257 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 258 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 259 "data/maps/RouteThree/scripts.pory"
	end
# 260 "data/maps/RouteThree/scripts.pory"

# 261 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 262 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 263 "data/maps/RouteThree/scripts.pory"
	end
# 264 "data/maps/RouteThree/scripts.pory"

# 265 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 266 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 267 "data/maps/RouteThree/scripts.pory"
	end
# 268 "data/maps/RouteThree/scripts.pory"

# 269 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 270 "data/maps/RouteThree/scripts.pory"
	lockall
# 271 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 0
# 272 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 273 "data/maps/RouteThree/scripts.pory"
	end
# 274 "data/maps/RouteThree/scripts.pory"

# 275 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 276 "data/maps/RouteThree/scripts.pory"
	lockall
# 277 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 1
# 278 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 279 "data/maps/RouteThree/scripts.pory"
	end
# 280 "data/maps/RouteThree/scripts.pory"

# 281 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 282 "data/maps/RouteThree/scripts.pory"
	lockall
# 283 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 2
# 284 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 285 "data/maps/RouteThree/scripts.pory"
	end
# 286 "data/maps/RouteThree/scripts.pory"

# 287 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 288 "data/maps/RouteThree/scripts.pory"
	lockall
# 289 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 3
# 290 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 291 "data/maps/RouteThree/scripts.pory"
	end
# 292 "data/maps/RouteThree/scripts.pory"

# 293 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 294 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 295 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 296 "data/maps/RouteThree/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 297 "data/maps/RouteThree/scripts.pory"
	playse SE_PIN
# 298 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 299 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 300 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 301 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 302 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 303 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 304 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 305 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 306 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 307 "data/maps/RouteThree/scripts.pory"
	closemessage
# 308 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 309 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 310 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 311 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 312 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 313 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 314 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 315 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 316 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 317 "data/maps/RouteThree/scripts.pory"
	closemessage
# 318 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 319 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 320 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 321 "data/maps/RouteThree/scripts.pory"
	releaseall
# 322 "data/maps/RouteThree/scripts.pory"
	end
# 323 "data/maps/RouteThree/scripts.pory"

# 324 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 325 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 326 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 327 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 328 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 329 "data/maps/RouteThree/scripts.pory"
	return
# 330 "data/maps/RouteThree/scripts.pory"

# 331 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 332 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 333 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 334 "data/maps/RouteThree/scripts.pory"
	return
# 335 "data/maps/RouteThree/scripts.pory"

# 336 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 337 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 338 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 339 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 340 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 341 "data/maps/RouteThree/scripts.pory"
	return
# 342 "data/maps/RouteThree/scripts.pory"

# 343 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 344 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 345 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 346 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 347 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 348 "data/maps/RouteThree/scripts.pory"
	return
# 349 "data/maps/RouteThree/scripts.pory"

# 350 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 351 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 352 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 353 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 354 "data/maps/RouteThree/scripts.pory"
	return
# 355 "data/maps/RouteThree/scripts.pory"

# 356 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 357 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 358 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 359 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 360 "data/maps/RouteThree/scripts.pory"
	return
# 361 "data/maps/RouteThree/scripts.pory"

# 362 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 363 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 364 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 365 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 366 "data/maps/RouteThree/scripts.pory"
	return
# 367 "data/maps/RouteThree/scripts.pory"

# 368 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 369 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 370 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 371 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 372 "data/maps/RouteThree/scripts.pory"
	return
# 373 "data/maps/RouteThree/scripts.pory"

# 374 "data/maps/RouteThree/scripts.pory"
@ Unused
# 375 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_Delay48::
# 376 "data/maps/RouteThree/scripts.pory"
	delay_16
# 377 "data/maps/RouteThree/scripts.pory"
	delay_16
# 378 "data/maps/RouteThree/scripts.pory"
	delay_16
# 379 "data/maps/RouteThree/scripts.pory"
	step_end
# 380 "data/maps/RouteThree/scripts.pory"

# 381 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 382 "data/maps/RouteThree/scripts.pory"
	walk_right
# 383 "data/maps/RouteThree/scripts.pory"
	walk_right
# 384 "data/maps/RouteThree/scripts.pory"
	walk_right
# 385 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 386 "data/maps/RouteThree/scripts.pory"
	step_end
# 387 "data/maps/RouteThree/scripts.pory"

# 388 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 389 "data/maps/RouteThree/scripts.pory"
	walk_right
# 390 "data/maps/RouteThree/scripts.pory"
	walk_right
# 391 "data/maps/RouteThree/scripts.pory"
	step_end
# 392 "data/maps/RouteThree/scripts.pory"

# 393 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 394 "data/maps/RouteThree/scripts.pory"
	walk_right
# 395 "data/maps/RouteThree/scripts.pory"
	walk_right
# 396 "data/maps/RouteThree/scripts.pory"
	walk_right
# 397 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 398 "data/maps/RouteThree/scripts.pory"
	step_end
# 399 "data/maps/RouteThree/scripts.pory"

# 400 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 401 "data/maps/RouteThree/scripts.pory"
	walk_down
# 402 "data/maps/RouteThree/scripts.pory"
	walk_right
# 403 "data/maps/RouteThree/scripts.pory"
	walk_right
# 404 "data/maps/RouteThree/scripts.pory"
	walk_right
# 405 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 406 "data/maps/RouteThree/scripts.pory"
	step_end
# 407 "data/maps/RouteThree/scripts.pory"

# 408 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 409 "data/maps/RouteThree/scripts.pory"
	walk_right
# 410 "data/maps/RouteThree/scripts.pory"
	walk_right
# 411 "data/maps/RouteThree/scripts.pory"
	walk_right
# 412 "data/maps/RouteThree/scripts.pory"
	walk_right
# 413 "data/maps/RouteThree/scripts.pory"
	walk_right
# 414 "data/maps/RouteThree/scripts.pory"
	walk_right
# 415 "data/maps/RouteThree/scripts.pory"
	walk_right
# 416 "data/maps/RouteThree/scripts.pory"
	walk_up
# 417 "data/maps/RouteThree/scripts.pory"
	walk_right
# 418 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 419 "data/maps/RouteThree/scripts.pory"
	step_end
# 420 "data/maps/RouteThree/scripts.pory"

# 421 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 422 "data/maps/RouteThree/scripts.pory"
	walk_down
# 423 "data/maps/RouteThree/scripts.pory"
	walk_right
# 424 "data/maps/RouteThree/scripts.pory"
	walk_right
# 425 "data/maps/RouteThree/scripts.pory"
	walk_right
# 426 "data/maps/RouteThree/scripts.pory"
	walk_right
# 427 "data/maps/RouteThree/scripts.pory"
	walk_right
# 428 "data/maps/RouteThree/scripts.pory"
	walk_right
# 429 "data/maps/RouteThree/scripts.pory"
	walk_right
# 430 "data/maps/RouteThree/scripts.pory"
	walk_right
# 431 "data/maps/RouteThree/scripts.pory"
	walk_up
# 432 "data/maps/RouteThree/scripts.pory"
	walk_up
# 433 "data/maps/RouteThree/scripts.pory"
	walk_right
# 434 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 435 "data/maps/RouteThree/scripts.pory"
	step_end
# 436 "data/maps/RouteThree/scripts.pory"

# 437 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 438 "data/maps/RouteThree/scripts.pory"
	walk_right
# 439 "data/maps/RouteThree/scripts.pory"
	walk_right
# 440 "data/maps/RouteThree/scripts.pory"
	walk_right
# 441 "data/maps/RouteThree/scripts.pory"
	walk_right
# 442 "data/maps/RouteThree/scripts.pory"
	walk_right
# 443 "data/maps/RouteThree/scripts.pory"
	walk_right
# 444 "data/maps/RouteThree/scripts.pory"
	walk_right
# 445 "data/maps/RouteThree/scripts.pory"
	walk_up
# 446 "data/maps/RouteThree/scripts.pory"
	walk_right
# 447 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 448 "data/maps/RouteThree/scripts.pory"
	step_end
# 449 "data/maps/RouteThree/scripts.pory"

# 450 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 451 "data/maps/RouteThree/scripts.pory"
	walk_right
# 452 "data/maps/RouteThree/scripts.pory"
	walk_right
# 453 "data/maps/RouteThree/scripts.pory"
	walk_right
# 454 "data/maps/RouteThree/scripts.pory"
	walk_right
# 455 "data/maps/RouteThree/scripts.pory"
	walk_right
# 456 "data/maps/RouteThree/scripts.pory"
	walk_right
# 457 "data/maps/RouteThree/scripts.pory"
	walk_right
# 458 "data/maps/RouteThree/scripts.pory"
	walk_up
# 459 "data/maps/RouteThree/scripts.pory"
	walk_up
# 460 "data/maps/RouteThree/scripts.pory"
	walk_right
# 461 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 462 "data/maps/RouteThree/scripts.pory"
	step_end
# 463 "data/maps/RouteThree/scripts.pory"

# 464 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 465 "data/maps/RouteThree/scripts.pory"
	walk_down
# 466 "data/maps/RouteThree/scripts.pory"
	walk_left
# 467 "data/maps/RouteThree/scripts.pory"
	walk_left
# 468 "data/maps/RouteThree/scripts.pory"
	walk_left
# 469 "data/maps/RouteThree/scripts.pory"
	walk_left
# 470 "data/maps/RouteThree/scripts.pory"
	walk_left
# 471 "data/maps/RouteThree/scripts.pory"
	walk_left
# 472 "data/maps/RouteThree/scripts.pory"
	walk_left
# 473 "data/maps/RouteThree/scripts.pory"
	walk_left
# 474 "data/maps/RouteThree/scripts.pory"
	walk_left
# 475 "data/maps/RouteThree/scripts.pory"
	walk_left
# 476 "data/maps/RouteThree/scripts.pory"
	walk_left
# 477 "data/maps/RouteThree/scripts.pory"
	step_end
# 478 "data/maps/RouteThree/scripts.pory"

# 479 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 480 "data/maps/RouteThree/scripts.pory"
	walk_down
# 481 "data/maps/RouteThree/scripts.pory"
	walk_right
# 482 "data/maps/RouteThree/scripts.pory"
	walk_right
# 483 "data/maps/RouteThree/scripts.pory"
	walk_right
# 484 "data/maps/RouteThree/scripts.pory"
	walk_right
# 485 "data/maps/RouteThree/scripts.pory"
	walk_right
# 486 "data/maps/RouteThree/scripts.pory"
	walk_right
# 487 "data/maps/RouteThree/scripts.pory"
	walk_right
# 488 "data/maps/RouteThree/scripts.pory"
	walk_up
# 489 "data/maps/RouteThree/scripts.pory"
	step_end
# 490 "data/maps/RouteThree/scripts.pory"

# 491 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 492 "data/maps/RouteThree/scripts.pory"
	delay_16
# 493 "data/maps/RouteThree/scripts.pory"
	delay_16
# 494 "data/maps/RouteThree/scripts.pory"
	walk_down
# 495 "data/maps/RouteThree/scripts.pory"
	walk_right
# 496 "data/maps/RouteThree/scripts.pory"
	walk_right
# 497 "data/maps/RouteThree/scripts.pory"
	walk_right
# 498 "data/maps/RouteThree/scripts.pory"
	walk_right
# 499 "data/maps/RouteThree/scripts.pory"
	walk_right
# 500 "data/maps/RouteThree/scripts.pory"
	walk_right
# 501 "data/maps/RouteThree/scripts.pory"
	walk_right
# 502 "data/maps/RouteThree/scripts.pory"
	walk_up
# 503 "data/maps/RouteThree/scripts.pory"
	walk_up
# 504 "data/maps/RouteThree/scripts.pory"
	step_end
# 505 "data/maps/RouteThree/scripts.pory"

# 506 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 507 "data/maps/RouteThree/scripts.pory"
	walk_up
# 508 "data/maps/RouteThree/scripts.pory"
	walk_right
# 509 "data/maps/RouteThree/scripts.pory"
	walk_right
# 510 "data/maps/RouteThree/scripts.pory"
	walk_right
# 511 "data/maps/RouteThree/scripts.pory"
	walk_right
# 512 "data/maps/RouteThree/scripts.pory"
	walk_right
# 513 "data/maps/RouteThree/scripts.pory"
	walk_right
# 514 "data/maps/RouteThree/scripts.pory"
	walk_right
# 515 "data/maps/RouteThree/scripts.pory"
	walk_up
# 516 "data/maps/RouteThree/scripts.pory"
	step_end
# 517 "data/maps/RouteThree/scripts.pory"

# 518 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 519 "data/maps/RouteThree/scripts.pory"
	walk_up
# 520 "data/maps/RouteThree/scripts.pory"
	walk_right
# 521 "data/maps/RouteThree/scripts.pory"
	walk_right
# 522 "data/maps/RouteThree/scripts.pory"
	walk_right
# 523 "data/maps/RouteThree/scripts.pory"
	walk_right
# 524 "data/maps/RouteThree/scripts.pory"
	walk_right
# 525 "data/maps/RouteThree/scripts.pory"
	walk_right
# 526 "data/maps/RouteThree/scripts.pory"
	walk_right
# 527 "data/maps/RouteThree/scripts.pory"
	walk_up
# 528 "data/maps/RouteThree/scripts.pory"
	walk_up
# 529 "data/maps/RouteThree/scripts.pory"
	step_end
# 530 "data/maps/RouteThree/scripts.pory"

# 531 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 532 "data/maps/RouteThree/scripts.pory"
	lockall
# 533 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 534 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 0
# 535 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 536 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 537 "data/maps/RouteThree/scripts.pory"
	end
# 538 "data/maps/RouteThree/scripts.pory"

# 539 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 540 "data/maps/RouteThree/scripts.pory"
	lockall
# 541 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 542 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 1
# 543 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 544 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 545 "data/maps/RouteThree/scripts.pory"
	end
# 546 "data/maps/RouteThree/scripts.pory"

# 547 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 548 "data/maps/RouteThree/scripts.pory"
	lockall
# 549 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 550 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 2
# 551 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 552 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 553 "data/maps/RouteThree/scripts.pory"
	end
# 554 "data/maps/RouteThree/scripts.pory"

# 555 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 556 "data/maps/RouteThree/scripts.pory"
	lockall
# 557 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 558 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 3
# 559 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 560 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 561 "data/maps/RouteThree/scripts.pory"
	end
# 562 "data/maps/RouteThree/scripts.pory"

# 563 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott::
# 564 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 565 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 566 "data/maps/RouteThree/scripts.pory"
	playse SE_PIN
# 567 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 568 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 569 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 570 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 571 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 572 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 573 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 574 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 575 "data/maps/RouteThree/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 576 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 577 "data/maps/RouteThree/scripts.pory"
	closemessage
# 578 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 579 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 580 "data/maps/RouteThree/scripts.pory"
	delay 30
# 581 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 582 "data/maps/RouteThree/scripts.pory"
	closemessage
# 583 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 584 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 585 "data/maps/RouteThree/scripts.pory"
	delay 30
# 586 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 587 "data/maps/RouteThree/scripts.pory"
	closemessage
# 588 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 589 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 590 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 591 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 592 "data/maps/RouteThree/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 593 "data/maps/RouteThree/scripts.pory"
	removeobject LOCALID_SCOTT
# 594 "data/maps/RouteThree/scripts.pory"
	releaseall
# 595 "data/maps/RouteThree/scripts.pory"
	end
# 596 "data/maps/RouteThree/scripts.pory"

# 597 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 598 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 599 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 600 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 601 "data/maps/RouteThree/scripts.pory"
	return
# 602 "data/maps/RouteThree/scripts.pory"

# 603 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 604 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 605 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 606 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 607 "data/maps/RouteThree/scripts.pory"
	return
# 608 "data/maps/RouteThree/scripts.pory"

# 609 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 610 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 611 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 612 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 613 "data/maps/RouteThree/scripts.pory"
	return
# 614 "data/maps/RouteThree/scripts.pory"

# 615 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 616 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 617 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 618 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 619 "data/maps/RouteThree/scripts.pory"
	return
# 620 "data/maps/RouteThree/scripts.pory"

# 621 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 622 "data/maps/RouteThree/scripts.pory"
	walk_left
# 623 "data/maps/RouteThree/scripts.pory"
	walk_left
# 624 "data/maps/RouteThree/scripts.pory"
	walk_left
# 625 "data/maps/RouteThree/scripts.pory"
	walk_left
# 626 "data/maps/RouteThree/scripts.pory"
	step_end
# 627 "data/maps/RouteThree/scripts.pory"

# 628 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 629 "data/maps/RouteThree/scripts.pory"
	walk_left
# 630 "data/maps/RouteThree/scripts.pory"
	walk_left
# 631 "data/maps/RouteThree/scripts.pory"
	walk_left
# 632 "data/maps/RouteThree/scripts.pory"
	walk_left
# 633 "data/maps/RouteThree/scripts.pory"
	step_end
# 634 "data/maps/RouteThree/scripts.pory"

# 635 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 636 "data/maps/RouteThree/scripts.pory"
	walk_down
# 637 "data/maps/RouteThree/scripts.pory"
	walk_down
# 638 "data/maps/RouteThree/scripts.pory"
	walk_left
# 639 "data/maps/RouteThree/scripts.pory"
	walk_left
# 640 "data/maps/RouteThree/scripts.pory"
	walk_left
# 641 "data/maps/RouteThree/scripts.pory"
	walk_left
# 642 "data/maps/RouteThree/scripts.pory"
	walk_left
# 643 "data/maps/RouteThree/scripts.pory"
	walk_left
# 644 "data/maps/RouteThree/scripts.pory"
	walk_left
# 645 "data/maps/RouteThree/scripts.pory"
	walk_left
# 646 "data/maps/RouteThree/scripts.pory"
	walk_left
# 647 "data/maps/RouteThree/scripts.pory"
	walk_left
# 648 "data/maps/RouteThree/scripts.pory"
	walk_left
# 649 "data/maps/RouteThree/scripts.pory"
	step_end
# 650 "data/maps/RouteThree/scripts.pory"

# 651 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 652 "data/maps/RouteThree/scripts.pory"
	delay_16
# 653 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 654 "data/maps/RouteThree/scripts.pory"
	delay_16
# 655 "data/maps/RouteThree/scripts.pory"
	delay_16
# 656 "data/maps/RouteThree/scripts.pory"
	delay_8
# 657 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 658 "data/maps/RouteThree/scripts.pory"
	step_end
# 659 "data/maps/RouteThree/scripts.pory"

# 660 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 661 "data/maps/RouteThree/scripts.pory"
	walk_down
# 662 "data/maps/RouteThree/scripts.pory"
	walk_left
# 663 "data/maps/RouteThree/scripts.pory"
	walk_left
# 664 "data/maps/RouteThree/scripts.pory"
	walk_left
# 665 "data/maps/RouteThree/scripts.pory"
	walk_left
# 666 "data/maps/RouteThree/scripts.pory"
	walk_left
# 667 "data/maps/RouteThree/scripts.pory"
	walk_left
# 668 "data/maps/RouteThree/scripts.pory"
	walk_left
# 669 "data/maps/RouteThree/scripts.pory"
	walk_left
# 670 "data/maps/RouteThree/scripts.pory"
	walk_left
# 671 "data/maps/RouteThree/scripts.pory"
	walk_left
# 672 "data/maps/RouteThree/scripts.pory"
	walk_left
# 673 "data/maps/RouteThree/scripts.pory"
	step_end
# 674 "data/maps/RouteThree/scripts.pory"

# 675 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 676 "data/maps/RouteThree/scripts.pory"
	delay_16
# 677 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 678 "data/maps/RouteThree/scripts.pory"
	delay_16
# 679 "data/maps/RouteThree/scripts.pory"
	delay_8
# 680 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 681 "data/maps/RouteThree/scripts.pory"
	step_end
# 682 "data/maps/RouteThree/scripts.pory"

# 683 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 684 "data/maps/RouteThree/scripts.pory"
	walk_down
# 685 "data/maps/RouteThree/scripts.pory"
	walk_left
# 686 "data/maps/RouteThree/scripts.pory"
	walk_left
# 687 "data/maps/RouteThree/scripts.pory"
	walk_left
# 688 "data/maps/RouteThree/scripts.pory"
	walk_left
# 689 "data/maps/RouteThree/scripts.pory"
	walk_left
# 690 "data/maps/RouteThree/scripts.pory"
	walk_left
# 691 "data/maps/RouteThree/scripts.pory"
	walk_left
# 692 "data/maps/RouteThree/scripts.pory"
	walk_left
# 693 "data/maps/RouteThree/scripts.pory"
	walk_left
# 694 "data/maps/RouteThree/scripts.pory"
	walk_left
# 695 "data/maps/RouteThree/scripts.pory"
	walk_left
# 696 "data/maps/RouteThree/scripts.pory"
	step_end
# 697 "data/maps/RouteThree/scripts.pory"

# 698 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 699 "data/maps/RouteThree/scripts.pory"
	delay_16
# 700 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 701 "data/maps/RouteThree/scripts.pory"
	delay_16
# 702 "data/maps/RouteThree/scripts.pory"
	delay_8
# 703 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 704 "data/maps/RouteThree/scripts.pory"
	step_end
# 705 "data/maps/RouteThree/scripts.pory"

# 706 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 707 "data/maps/RouteThree/scripts.pory"
	walk_up
# 708 "data/maps/RouteThree/scripts.pory"
	walk_left
# 709 "data/maps/RouteThree/scripts.pory"
	walk_left
# 710 "data/maps/RouteThree/scripts.pory"
	walk_left
# 711 "data/maps/RouteThree/scripts.pory"
	walk_left
# 712 "data/maps/RouteThree/scripts.pory"
	walk_left
# 713 "data/maps/RouteThree/scripts.pory"
	walk_left
# 714 "data/maps/RouteThree/scripts.pory"
	walk_left
# 715 "data/maps/RouteThree/scripts.pory"
	walk_left
# 716 "data/maps/RouteThree/scripts.pory"
	walk_left
# 717 "data/maps/RouteThree/scripts.pory"
	walk_left
# 718 "data/maps/RouteThree/scripts.pory"
	walk_left
# 719 "data/maps/RouteThree/scripts.pory"
	step_end
# 720 "data/maps/RouteThree/scripts.pory"

# 721 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 722 "data/maps/RouteThree/scripts.pory"
	delay_16
# 723 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 724 "data/maps/RouteThree/scripts.pory"
	delay_16
# 725 "data/maps/RouteThree/scripts.pory"
	delay_8
# 726 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 727 "data/maps/RouteThree/scripts.pory"
	step_end
# 728 "data/maps/RouteThree/scripts.pory"

# 729 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 730 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 731 "data/maps/RouteThree/scripts.pory"
	end
# 732 "data/maps/RouteThree/scripts.pory"

# 733 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 734 "data/maps/RouteThree/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 735 "data/maps/RouteThree/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 736 "data/maps/RouteThree/scripts.pory"
	.string "very soon…$"
# 737 "data/maps/RouteThree/scripts.pory"

# 738 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 739 "data/maps/RouteThree/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 740 "data/maps/RouteThree/scripts.pory"
	.string "A rookie TRAINER?\p"
# 741 "data/maps/RouteThree/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 742 "data/maps/RouteThree/scripts.pory"
	.string "do when they reach a new town?\p"
# 743 "data/maps/RouteThree/scripts.pory"
	.string "They first check what kind of GYM\n"
# 744 "data/maps/RouteThree/scripts.pory"
	.string "is in the town.$"
# 745 "data/maps/RouteThree/scripts.pory"

# 746 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 747 "data/maps/RouteThree/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 748 "data/maps/RouteThree/scripts.pory"

# 749 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 750 "data/maps/RouteThree/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 751 "data/maps/RouteThree/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 752 "data/maps/RouteThree/scripts.pory"

# 753 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 754 "data/maps/RouteThree/scripts.pory"
	.string "My face is reflected in the water.\p"
# 755 "data/maps/RouteThree/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 756 "data/maps/RouteThree/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 757 "data/maps/RouteThree/scripts.pory"
	.string "struggling with fear…\p"
# 758 "data/maps/RouteThree/scripts.pory"
	.string "What do you see reflected in your face?$"
# 759 "data/maps/RouteThree/scripts.pory"

# 760 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 761 "data/maps/RouteThree/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 762 "data/maps/RouteThree/scripts.pory"
	.string "If you catch another one…\p"
# 763 "data/maps/RouteThree/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 764 "data/maps/RouteThree/scripts.pory"
	.string "BOX over a PC connection.$"
# 765 "data/maps/RouteThree/scripts.pory"

# 766 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_GymSign:
# 767 "data/maps/RouteThree/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 768 "data/maps/RouteThree/scripts.pory"
	.string "LEADER: NORMAN\l"
# 769 "data/maps/RouteThree/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 770 "data/maps/RouteThree/scripts.pory"

# 771 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_CitySign:
# 772 "data/maps/RouteThree/scripts.pory"
	.string "PETALBURG CITY\n"
# 773 "data/maps/RouteThree/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 774 "data/maps/RouteThree/scripts.pory"

# 775 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 776 "data/maps/RouteThree/scripts.pory"
	.string "WALLY'S HOUSE$"
# 777 "data/maps/RouteThree/scripts.pory"

# 778 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 779 "data/maps/RouteThree/scripts.pory"
	.string "Excuse me!\p"
# 780 "data/maps/RouteThree/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 781 "data/maps/RouteThree/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 782 "data/maps/RouteThree/scripts.pory"

# 783 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 784 "data/maps/RouteThree/scripts.pory"
	.string "… … … … … …\p"
# 785 "data/maps/RouteThree/scripts.pory"
	.string "Well, maybe not.\n"
# 786 "data/maps/RouteThree/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 787 "data/maps/RouteThree/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 788 "data/maps/RouteThree/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 789 "data/maps/RouteThree/scripts.pory"

# 790 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 791 "data/maps/RouteThree/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 792 "data/maps/RouteThree/scripts.pory"
	.string "talented TRAINERS.\p"
# 793 "data/maps/RouteThree/scripts.pory"
	.string "I'm sorry to have taken your time.$"

RouteThree_Text_BillyIntro::
# 9 "data/maps/RouteThree/scripts.pory"
	.string "Leaving footprints in the dirt is so\n"
	.string "fun!$"

RouteThree_Text_BillyDefeat::
# 13 "data/maps/RouteThree/scripts.pory"
	.string "Waah! I got dirt in my runners! They're\n"
	.string "all gritty!$"

RouteThree_Text_BillyPostBattle::
# 17 "data/maps/RouteThree/scripts.pory"
	.string "I want to leave my footprints in the\n"
	.string "dirt everywhere, but they don't appear…$"
