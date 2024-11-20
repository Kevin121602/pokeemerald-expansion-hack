# 1 "data/maps/RouteThree/scripts.pory"

# 2 "data/maps/RouteThree/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/RouteThree/scripts.pory"
.set LOCALID_BOY, 3
# 4 "data/maps/RouteThree/scripts.pory"
.set LOCALID_WALLYS_DAD, 5
# 5 "data/maps/RouteThree/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 6 "data/maps/RouteThree/scripts.pory"
.set LOCALID_SCOTT, 9
# 7 "data/maps/RouteThree/scripts.pory"

# 8 "data/maps/RouteThree/scripts.pory"
RouteThree_MapScripts::
# 9 "data/maps/RouteThree/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 10 "data/maps/RouteThree/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 11 "data/maps/RouteThree/scripts.pory"
	.byte 0
# 12 "data/maps/RouteThree/scripts.pory"

# 13 "data/maps/RouteThree/scripts.pory"
PetalburgCity_OnTransition:
# 14 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 15 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 16 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 18 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 19 "data/maps/RouteThree/scripts.pory"
	end
# 20 "data/maps/RouteThree/scripts.pory"

# 21 "data/maps/RouteThree/scripts.pory"
Route104_EventScript_Billy::
# 22 "data/maps/RouteThree/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 23 "data/maps/RouteThree/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/RouteThree/scripts.pory"
	end
# 25 "data/maps/RouteThree/scripts.pory"

# 26 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 27 "data/maps/RouteThree/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 28 "data/maps/RouteThree/scripts.pory"
	return
# 29 "data/maps/RouteThree/scripts.pory"

# 30 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 31 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 32 "data/maps/RouteThree/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 33 "data/maps/RouteThree/scripts.pory"
	return
# 34 "data/maps/RouteThree/scripts.pory"

# 35 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 36 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 37 "data/maps/RouteThree/scripts.pory"
	return
# 38 "data/maps/RouteThree/scripts.pory"

# 39 "data/maps/RouteThree/scripts.pory"
PetalburgCity_OnFrame:
# 40 "data/maps/RouteThree/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 41 "data/maps/RouteThree/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 42 "data/maps/RouteThree/scripts.pory"
	.2byte 0
# 43 "data/maps/RouteThree/scripts.pory"

# 44 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 45 "data/maps/RouteThree/scripts.pory"
	lockall
# 46 "data/maps/RouteThree/scripts.pory"
	special SavePlayerParty
# 47 "data/maps/RouteThree/scripts.pory"
	special LoadWallyZigzagoon
# 48 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 49 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 50 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 51 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 52 "data/maps/RouteThree/scripts.pory"
	special StartWallyTutorialBattle
# 53 "data/maps/RouteThree/scripts.pory"
	waitstate
# 54 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 55 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_ROUTE_THREE
# 56 "data/maps/RouteThree/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_ROUTE_THREE
# 57 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 58 "data/maps/RouteThree/scripts.pory"
	closemessage
# 59 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 60 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 61 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 62 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 63 "data/maps/RouteThree/scripts.pory"
	special LoadPlayerParty
# 64 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 65 "data/maps/RouteThree/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 66 "data/maps/RouteThree/scripts.pory"
	waitstate
# 67 "data/maps/RouteThree/scripts.pory"
	releaseall
# 68 "data/maps/RouteThree/scripts.pory"
	end
# 69 "data/maps/RouteThree/scripts.pory"

# 70 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 71 "data/maps/RouteThree/scripts.pory"
	lockall
# 72 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 73 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 74 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 75 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 76 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8004, 7
# 77 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8005, 5
# 78 "data/maps/RouteThree/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 79 "data/maps/RouteThree/scripts.pory"
	waitdooranim
# 80 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 81 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 82 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 83 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 84 "data/maps/RouteThree/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE_THREE
# 85 "data/maps/RouteThree/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 86 "data/maps/RouteThree/scripts.pory"
	waitdooranim
# 87 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 88 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 90 "data/maps/RouteThree/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 91 "data/maps/RouteThree/scripts.pory"
	waitstate
# 92 "data/maps/RouteThree/scripts.pory"
	releaseall
# 93 "data/maps/RouteThree/scripts.pory"
	end
# 94 "data/maps/RouteThree/scripts.pory"

# 95 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Boy::
# 96 "data/maps/RouteThree/scripts.pory"
	lock
# 97 "data/maps/RouteThree/scripts.pory"
	faceplayer
# 98 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 99 "data/maps/RouteThree/scripts.pory"
	closemessage
# 100 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 101 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 102 "data/maps/RouteThree/scripts.pory"
	release
# 103 "data/maps/RouteThree/scripts.pory"
	end
# 104 "data/maps/RouteThree/scripts.pory"

# 105 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 106 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 107 "data/maps/RouteThree/scripts.pory"
	end
# 108 "data/maps/RouteThree/scripts.pory"

# 109 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 110 "data/maps/RouteThree/scripts.pory"
	delay_8
# 111 "data/maps/RouteThree/scripts.pory"
	walk_down
# 112 "data/maps/RouteThree/scripts.pory"
	walk_down
# 113 "data/maps/RouteThree/scripts.pory"
	walk_down
# 114 "data/maps/RouteThree/scripts.pory"
	walk_left
# 115 "data/maps/RouteThree/scripts.pory"
	walk_left
# 116 "data/maps/RouteThree/scripts.pory"
	walk_left
# 117 "data/maps/RouteThree/scripts.pory"
	walk_left
# 118 "data/maps/RouteThree/scripts.pory"
	walk_left
# 119 "data/maps/RouteThree/scripts.pory"
	walk_left
# 120 "data/maps/RouteThree/scripts.pory"
	walk_left
# 121 "data/maps/RouteThree/scripts.pory"
	walk_left
# 122 "data/maps/RouteThree/scripts.pory"
	walk_up
# 123 "data/maps/RouteThree/scripts.pory"
	walk_up
# 124 "data/maps/RouteThree/scripts.pory"
	walk_up
# 125 "data/maps/RouteThree/scripts.pory"
	walk_up
# 126 "data/maps/RouteThree/scripts.pory"
	walk_up
# 127 "data/maps/RouteThree/scripts.pory"
	step_end
# 128 "data/maps/RouteThree/scripts.pory"

# 129 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 130 "data/maps/RouteThree/scripts.pory"
	walk_up
# 131 "data/maps/RouteThree/scripts.pory"
	walk_up
# 132 "data/maps/RouteThree/scripts.pory"
	step_end
# 133 "data/maps/RouteThree/scripts.pory"

# 134 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 135 "data/maps/RouteThree/scripts.pory"
	delay_8
# 136 "data/maps/RouteThree/scripts.pory"
	walk_down
# 137 "data/maps/RouteThree/scripts.pory"
	walk_down
# 138 "data/maps/RouteThree/scripts.pory"
	walk_left
# 139 "data/maps/RouteThree/scripts.pory"
	walk_left
# 140 "data/maps/RouteThree/scripts.pory"
	walk_left
# 141 "data/maps/RouteThree/scripts.pory"
	walk_left
# 142 "data/maps/RouteThree/scripts.pory"
	walk_left
# 143 "data/maps/RouteThree/scripts.pory"
	walk_left
# 144 "data/maps/RouteThree/scripts.pory"
	walk_left
# 145 "data/maps/RouteThree/scripts.pory"
	walk_left
# 146 "data/maps/RouteThree/scripts.pory"
	walk_up
# 147 "data/maps/RouteThree/scripts.pory"
	walk_up
# 148 "data/maps/RouteThree/scripts.pory"
	walk_up
# 149 "data/maps/RouteThree/scripts.pory"
	walk_up
# 150 "data/maps/RouteThree/scripts.pory"
	walk_up
# 151 "data/maps/RouteThree/scripts.pory"
	walk_up
# 152 "data/maps/RouteThree/scripts.pory"
	step_end
# 153 "data/maps/RouteThree/scripts.pory"

# 154 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 155 "data/maps/RouteThree/scripts.pory"
	walk_up
# 156 "data/maps/RouteThree/scripts.pory"
	set_invisible
# 157 "data/maps/RouteThree/scripts.pory"
	step_end
# 158 "data/maps/RouteThree/scripts.pory"

# 159 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 160 "data/maps/RouteThree/scripts.pory"
	delay_8
# 161 "data/maps/RouteThree/scripts.pory"
	walk_down
# 162 "data/maps/RouteThree/scripts.pory"
	walk_down
# 163 "data/maps/RouteThree/scripts.pory"
	walk_down
# 164 "data/maps/RouteThree/scripts.pory"
	walk_down
# 165 "data/maps/RouteThree/scripts.pory"
	walk_down
# 166 "data/maps/RouteThree/scripts.pory"
	walk_down
# 167 "data/maps/RouteThree/scripts.pory"
	walk_down
# 168 "data/maps/RouteThree/scripts.pory"
	walk_down
# 169 "data/maps/RouteThree/scripts.pory"
	walk_right
# 170 "data/maps/RouteThree/scripts.pory"
	walk_right
# 171 "data/maps/RouteThree/scripts.pory"
	walk_right
# 172 "data/maps/RouteThree/scripts.pory"
	walk_right
# 173 "data/maps/RouteThree/scripts.pory"
	walk_right
# 174 "data/maps/RouteThree/scripts.pory"
	walk_right
# 175 "data/maps/RouteThree/scripts.pory"
	walk_right
# 176 "data/maps/RouteThree/scripts.pory"
	walk_right
# 177 "data/maps/RouteThree/scripts.pory"
	walk_right
# 178 "data/maps/RouteThree/scripts.pory"
	walk_right
# 179 "data/maps/RouteThree/scripts.pory"
	walk_right
# 180 "data/maps/RouteThree/scripts.pory"
	walk_right
# 181 "data/maps/RouteThree/scripts.pory"
	walk_right
# 182 "data/maps/RouteThree/scripts.pory"
	walk_right
# 183 "data/maps/RouteThree/scripts.pory"
	walk_right
# 184 "data/maps/RouteThree/scripts.pory"
	walk_right
# 185 "data/maps/RouteThree/scripts.pory"
	walk_right
# 186 "data/maps/RouteThree/scripts.pory"
	walk_right
# 187 "data/maps/RouteThree/scripts.pory"
	walk_right
# 188 "data/maps/RouteThree/scripts.pory"
	walk_right
# 189 "data/maps/RouteThree/scripts.pory"
	walk_up
# 190 "data/maps/RouteThree/scripts.pory"
	walk_up
# 191 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_right
# 192 "data/maps/RouteThree/scripts.pory"
	step_end
# 193 "data/maps/RouteThree/scripts.pory"

# 194 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 195 "data/maps/RouteThree/scripts.pory"
	delay_8
# 196 "data/maps/RouteThree/scripts.pory"
	walk_down
# 197 "data/maps/RouteThree/scripts.pory"
	walk_down
# 198 "data/maps/RouteThree/scripts.pory"
	walk_down
# 199 "data/maps/RouteThree/scripts.pory"
	walk_down
# 200 "data/maps/RouteThree/scripts.pory"
	walk_down
# 201 "data/maps/RouteThree/scripts.pory"
	walk_down
# 202 "data/maps/RouteThree/scripts.pory"
	walk_down
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
	walk_right
# 210 "data/maps/RouteThree/scripts.pory"
	walk_right
# 211 "data/maps/RouteThree/scripts.pory"
	walk_right
# 212 "data/maps/RouteThree/scripts.pory"
	walk_right
# 213 "data/maps/RouteThree/scripts.pory"
	walk_right
# 214 "data/maps/RouteThree/scripts.pory"
	walk_right
# 215 "data/maps/RouteThree/scripts.pory"
	walk_right
# 216 "data/maps/RouteThree/scripts.pory"
	walk_right
# 217 "data/maps/RouteThree/scripts.pory"
	walk_right
# 218 "data/maps/RouteThree/scripts.pory"
	walk_right
# 219 "data/maps/RouteThree/scripts.pory"
	walk_right
# 220 "data/maps/RouteThree/scripts.pory"
	walk_right
# 221 "data/maps/RouteThree/scripts.pory"
	walk_right
# 222 "data/maps/RouteThree/scripts.pory"
	walk_right
# 223 "data/maps/RouteThree/scripts.pory"
	walk_up
# 224 "data/maps/RouteThree/scripts.pory"
	walk_up
# 225 "data/maps/RouteThree/scripts.pory"
	walk_right
# 226 "data/maps/RouteThree/scripts.pory"
	delay_16
# 227 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 228 "data/maps/RouteThree/scripts.pory"
	delay_16
# 229 "data/maps/RouteThree/scripts.pory"
	delay_16
# 230 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_right
# 231 "data/maps/RouteThree/scripts.pory"
	step_end
# 232 "data/maps/RouteThree/scripts.pory"

# 233 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 234 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 235 "data/maps/RouteThree/scripts.pory"
	end
# 236 "data/maps/RouteThree/scripts.pory"

# 237 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 238 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 239 "data/maps/RouteThree/scripts.pory"
	end
# 240 "data/maps/RouteThree/scripts.pory"

# 241 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 242 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 243 "data/maps/RouteThree/scripts.pory"
	end
# 244 "data/maps/RouteThree/scripts.pory"

# 245 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 246 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 247 "data/maps/RouteThree/scripts.pory"
	end
# 248 "data/maps/RouteThree/scripts.pory"

# 249 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 250 "data/maps/RouteThree/scripts.pory"
	lockall
# 251 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 0
# 252 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 253 "data/maps/RouteThree/scripts.pory"
	end
# 254 "data/maps/RouteThree/scripts.pory"

# 255 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 256 "data/maps/RouteThree/scripts.pory"
	lockall
# 257 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 1
# 258 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 259 "data/maps/RouteThree/scripts.pory"
	end
# 260 "data/maps/RouteThree/scripts.pory"

# 261 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 262 "data/maps/RouteThree/scripts.pory"
	lockall
# 263 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 2
# 264 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 265 "data/maps/RouteThree/scripts.pory"
	end
# 266 "data/maps/RouteThree/scripts.pory"

# 267 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 268 "data/maps/RouteThree/scripts.pory"
	lockall
# 269 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 3
# 270 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 271 "data/maps/RouteThree/scripts.pory"
	end
# 272 "data/maps/RouteThree/scripts.pory"

# 273 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 274 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 275 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 276 "data/maps/RouteThree/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 277 "data/maps/RouteThree/scripts.pory"
	playse SE_PIN
# 278 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 279 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 280 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 281 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 282 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 283 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 284 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 285 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 286 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 287 "data/maps/RouteThree/scripts.pory"
	closemessage
# 288 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 289 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 290 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 291 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 292 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 293 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 294 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 295 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 296 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 297 "data/maps/RouteThree/scripts.pory"
	closemessage
# 298 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 299 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 300 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 301 "data/maps/RouteThree/scripts.pory"
	releaseall
# 302 "data/maps/RouteThree/scripts.pory"
	end
# 303 "data/maps/RouteThree/scripts.pory"

# 304 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 305 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 306 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 307 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 308 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 309 "data/maps/RouteThree/scripts.pory"
	return
# 310 "data/maps/RouteThree/scripts.pory"

# 311 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 312 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 313 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 314 "data/maps/RouteThree/scripts.pory"
	return
# 315 "data/maps/RouteThree/scripts.pory"

# 316 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 317 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 318 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 319 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 321 "data/maps/RouteThree/scripts.pory"
	return
# 322 "data/maps/RouteThree/scripts.pory"

# 323 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 324 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 325 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 326 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 327 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 328 "data/maps/RouteThree/scripts.pory"
	return
# 329 "data/maps/RouteThree/scripts.pory"

# 330 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 331 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 332 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 333 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 334 "data/maps/RouteThree/scripts.pory"
	return
# 335 "data/maps/RouteThree/scripts.pory"

# 336 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 337 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 338 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 339 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 340 "data/maps/RouteThree/scripts.pory"
	return
# 341 "data/maps/RouteThree/scripts.pory"

# 342 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 343 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 344 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 345 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 346 "data/maps/RouteThree/scripts.pory"
	return
# 347 "data/maps/RouteThree/scripts.pory"

# 348 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 349 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 350 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 351 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 352 "data/maps/RouteThree/scripts.pory"
	return
# 353 "data/maps/RouteThree/scripts.pory"

# 354 "data/maps/RouteThree/scripts.pory"
@ Unused
# 355 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_Delay48::
# 356 "data/maps/RouteThree/scripts.pory"
	delay_16
# 357 "data/maps/RouteThree/scripts.pory"
	delay_16
# 358 "data/maps/RouteThree/scripts.pory"
	delay_16
# 359 "data/maps/RouteThree/scripts.pory"
	step_end
# 360 "data/maps/RouteThree/scripts.pory"

# 361 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 362 "data/maps/RouteThree/scripts.pory"
	walk_right
# 363 "data/maps/RouteThree/scripts.pory"
	walk_right
# 364 "data/maps/RouteThree/scripts.pory"
	walk_right
# 365 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 366 "data/maps/RouteThree/scripts.pory"
	step_end
# 367 "data/maps/RouteThree/scripts.pory"

# 368 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 369 "data/maps/RouteThree/scripts.pory"
	walk_right
# 370 "data/maps/RouteThree/scripts.pory"
	walk_right
# 371 "data/maps/RouteThree/scripts.pory"
	step_end
# 372 "data/maps/RouteThree/scripts.pory"

# 373 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 374 "data/maps/RouteThree/scripts.pory"
	walk_right
# 375 "data/maps/RouteThree/scripts.pory"
	walk_right
# 376 "data/maps/RouteThree/scripts.pory"
	walk_right
# 377 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 378 "data/maps/RouteThree/scripts.pory"
	step_end
# 379 "data/maps/RouteThree/scripts.pory"

# 380 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 381 "data/maps/RouteThree/scripts.pory"
	walk_down
# 382 "data/maps/RouteThree/scripts.pory"
	walk_right
# 383 "data/maps/RouteThree/scripts.pory"
	walk_right
# 384 "data/maps/RouteThree/scripts.pory"
	walk_right
# 385 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 386 "data/maps/RouteThree/scripts.pory"
	step_end
# 387 "data/maps/RouteThree/scripts.pory"

# 388 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 389 "data/maps/RouteThree/scripts.pory"
	walk_right
# 390 "data/maps/RouteThree/scripts.pory"
	walk_right
# 391 "data/maps/RouteThree/scripts.pory"
	walk_right
# 392 "data/maps/RouteThree/scripts.pory"
	walk_right
# 393 "data/maps/RouteThree/scripts.pory"
	walk_right
# 394 "data/maps/RouteThree/scripts.pory"
	walk_right
# 395 "data/maps/RouteThree/scripts.pory"
	walk_right
# 396 "data/maps/RouteThree/scripts.pory"
	walk_up
# 397 "data/maps/RouteThree/scripts.pory"
	walk_right
# 398 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 399 "data/maps/RouteThree/scripts.pory"
	step_end
# 400 "data/maps/RouteThree/scripts.pory"

# 401 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 402 "data/maps/RouteThree/scripts.pory"
	walk_down
# 403 "data/maps/RouteThree/scripts.pory"
	walk_right
# 404 "data/maps/RouteThree/scripts.pory"
	walk_right
# 405 "data/maps/RouteThree/scripts.pory"
	walk_right
# 406 "data/maps/RouteThree/scripts.pory"
	walk_right
# 407 "data/maps/RouteThree/scripts.pory"
	walk_right
# 408 "data/maps/RouteThree/scripts.pory"
	walk_right
# 409 "data/maps/RouteThree/scripts.pory"
	walk_right
# 410 "data/maps/RouteThree/scripts.pory"
	walk_right
# 411 "data/maps/RouteThree/scripts.pory"
	walk_up
# 412 "data/maps/RouteThree/scripts.pory"
	walk_up
# 413 "data/maps/RouteThree/scripts.pory"
	walk_right
# 414 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 415 "data/maps/RouteThree/scripts.pory"
	step_end
# 416 "data/maps/RouteThree/scripts.pory"

# 417 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 418 "data/maps/RouteThree/scripts.pory"
	walk_right
# 419 "data/maps/RouteThree/scripts.pory"
	walk_right
# 420 "data/maps/RouteThree/scripts.pory"
	walk_right
# 421 "data/maps/RouteThree/scripts.pory"
	walk_right
# 422 "data/maps/RouteThree/scripts.pory"
	walk_right
# 423 "data/maps/RouteThree/scripts.pory"
	walk_right
# 424 "data/maps/RouteThree/scripts.pory"
	walk_right
# 425 "data/maps/RouteThree/scripts.pory"
	walk_up
# 426 "data/maps/RouteThree/scripts.pory"
	walk_right
# 427 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 428 "data/maps/RouteThree/scripts.pory"
	step_end
# 429 "data/maps/RouteThree/scripts.pory"

# 430 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 431 "data/maps/RouteThree/scripts.pory"
	walk_right
# 432 "data/maps/RouteThree/scripts.pory"
	walk_right
# 433 "data/maps/RouteThree/scripts.pory"
	walk_right
# 434 "data/maps/RouteThree/scripts.pory"
	walk_right
# 435 "data/maps/RouteThree/scripts.pory"
	walk_right
# 436 "data/maps/RouteThree/scripts.pory"
	walk_right
# 437 "data/maps/RouteThree/scripts.pory"
	walk_right
# 438 "data/maps/RouteThree/scripts.pory"
	walk_up
# 439 "data/maps/RouteThree/scripts.pory"
	walk_up
# 440 "data/maps/RouteThree/scripts.pory"
	walk_right
# 441 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 442 "data/maps/RouteThree/scripts.pory"
	step_end
# 443 "data/maps/RouteThree/scripts.pory"

# 444 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 445 "data/maps/RouteThree/scripts.pory"
	walk_down
# 446 "data/maps/RouteThree/scripts.pory"
	walk_left
# 447 "data/maps/RouteThree/scripts.pory"
	walk_left
# 448 "data/maps/RouteThree/scripts.pory"
	walk_left
# 449 "data/maps/RouteThree/scripts.pory"
	walk_left
# 450 "data/maps/RouteThree/scripts.pory"
	walk_left
# 451 "data/maps/RouteThree/scripts.pory"
	walk_left
# 452 "data/maps/RouteThree/scripts.pory"
	walk_left
# 453 "data/maps/RouteThree/scripts.pory"
	walk_left
# 454 "data/maps/RouteThree/scripts.pory"
	walk_left
# 455 "data/maps/RouteThree/scripts.pory"
	walk_left
# 456 "data/maps/RouteThree/scripts.pory"
	walk_left
# 457 "data/maps/RouteThree/scripts.pory"
	step_end
# 458 "data/maps/RouteThree/scripts.pory"

# 459 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 460 "data/maps/RouteThree/scripts.pory"
	walk_down
# 461 "data/maps/RouteThree/scripts.pory"
	walk_right
# 462 "data/maps/RouteThree/scripts.pory"
	walk_right
# 463 "data/maps/RouteThree/scripts.pory"
	walk_right
# 464 "data/maps/RouteThree/scripts.pory"
	walk_right
# 465 "data/maps/RouteThree/scripts.pory"
	walk_right
# 466 "data/maps/RouteThree/scripts.pory"
	walk_right
# 467 "data/maps/RouteThree/scripts.pory"
	walk_right
# 468 "data/maps/RouteThree/scripts.pory"
	walk_up
# 469 "data/maps/RouteThree/scripts.pory"
	step_end
# 470 "data/maps/RouteThree/scripts.pory"

# 471 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 472 "data/maps/RouteThree/scripts.pory"
	delay_16
# 473 "data/maps/RouteThree/scripts.pory"
	delay_16
# 474 "data/maps/RouteThree/scripts.pory"
	walk_down
# 475 "data/maps/RouteThree/scripts.pory"
	walk_right
# 476 "data/maps/RouteThree/scripts.pory"
	walk_right
# 477 "data/maps/RouteThree/scripts.pory"
	walk_right
# 478 "data/maps/RouteThree/scripts.pory"
	walk_right
# 479 "data/maps/RouteThree/scripts.pory"
	walk_right
# 480 "data/maps/RouteThree/scripts.pory"
	walk_right
# 481 "data/maps/RouteThree/scripts.pory"
	walk_right
# 482 "data/maps/RouteThree/scripts.pory"
	walk_up
# 483 "data/maps/RouteThree/scripts.pory"
	walk_up
# 484 "data/maps/RouteThree/scripts.pory"
	step_end
# 485 "data/maps/RouteThree/scripts.pory"

# 486 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 487 "data/maps/RouteThree/scripts.pory"
	walk_up
# 488 "data/maps/RouteThree/scripts.pory"
	walk_right
# 489 "data/maps/RouteThree/scripts.pory"
	walk_right
# 490 "data/maps/RouteThree/scripts.pory"
	walk_right
# 491 "data/maps/RouteThree/scripts.pory"
	walk_right
# 492 "data/maps/RouteThree/scripts.pory"
	walk_right
# 493 "data/maps/RouteThree/scripts.pory"
	walk_right
# 494 "data/maps/RouteThree/scripts.pory"
	walk_right
# 495 "data/maps/RouteThree/scripts.pory"
	walk_up
# 496 "data/maps/RouteThree/scripts.pory"
	step_end
# 497 "data/maps/RouteThree/scripts.pory"

# 498 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 499 "data/maps/RouteThree/scripts.pory"
	walk_up
# 500 "data/maps/RouteThree/scripts.pory"
	walk_right
# 501 "data/maps/RouteThree/scripts.pory"
	walk_right
# 502 "data/maps/RouteThree/scripts.pory"
	walk_right
# 503 "data/maps/RouteThree/scripts.pory"
	walk_right
# 504 "data/maps/RouteThree/scripts.pory"
	walk_right
# 505 "data/maps/RouteThree/scripts.pory"
	walk_right
# 506 "data/maps/RouteThree/scripts.pory"
	walk_right
# 507 "data/maps/RouteThree/scripts.pory"
	walk_up
# 508 "data/maps/RouteThree/scripts.pory"
	walk_up
# 509 "data/maps/RouteThree/scripts.pory"
	step_end
# 510 "data/maps/RouteThree/scripts.pory"

# 511 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 512 "data/maps/RouteThree/scripts.pory"
	lockall
# 513 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 514 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 0
# 515 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 516 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 517 "data/maps/RouteThree/scripts.pory"
	end
# 518 "data/maps/RouteThree/scripts.pory"

# 519 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 520 "data/maps/RouteThree/scripts.pory"
	lockall
# 521 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 522 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 1
# 523 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 524 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 525 "data/maps/RouteThree/scripts.pory"
	end
# 526 "data/maps/RouteThree/scripts.pory"

# 527 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 528 "data/maps/RouteThree/scripts.pory"
	lockall
# 529 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 530 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 2
# 531 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 532 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 533 "data/maps/RouteThree/scripts.pory"
	end
# 534 "data/maps/RouteThree/scripts.pory"

# 535 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 536 "data/maps/RouteThree/scripts.pory"
	lockall
# 537 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 538 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 3
# 539 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 540 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 541 "data/maps/RouteThree/scripts.pory"
	end
# 542 "data/maps/RouteThree/scripts.pory"

# 543 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott::
# 544 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 545 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 546 "data/maps/RouteThree/scripts.pory"
	playse SE_PIN
# 547 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 548 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 549 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 550 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 551 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 552 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 553 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 554 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 555 "data/maps/RouteThree/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 556 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 557 "data/maps/RouteThree/scripts.pory"
	closemessage
# 558 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 559 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 560 "data/maps/RouteThree/scripts.pory"
	delay 30
# 561 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 562 "data/maps/RouteThree/scripts.pory"
	closemessage
# 563 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 564 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 565 "data/maps/RouteThree/scripts.pory"
	delay 30
# 566 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 567 "data/maps/RouteThree/scripts.pory"
	closemessage
# 568 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 569 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 570 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 571 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 572 "data/maps/RouteThree/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 573 "data/maps/RouteThree/scripts.pory"
	removeobject LOCALID_SCOTT
# 574 "data/maps/RouteThree/scripts.pory"
	releaseall
# 575 "data/maps/RouteThree/scripts.pory"
	end
# 576 "data/maps/RouteThree/scripts.pory"

# 577 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 578 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 579 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 580 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 581 "data/maps/RouteThree/scripts.pory"
	return
# 582 "data/maps/RouteThree/scripts.pory"

# 583 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 584 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 585 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 586 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 587 "data/maps/RouteThree/scripts.pory"
	return
# 588 "data/maps/RouteThree/scripts.pory"

# 589 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 590 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 591 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 592 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 593 "data/maps/RouteThree/scripts.pory"
	return
# 594 "data/maps/RouteThree/scripts.pory"

# 595 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 596 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 597 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 598 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 599 "data/maps/RouteThree/scripts.pory"
	return
# 600 "data/maps/RouteThree/scripts.pory"

# 601 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 602 "data/maps/RouteThree/scripts.pory"
	walk_left
# 603 "data/maps/RouteThree/scripts.pory"
	walk_left
# 604 "data/maps/RouteThree/scripts.pory"
	walk_left
# 605 "data/maps/RouteThree/scripts.pory"
	walk_left
# 606 "data/maps/RouteThree/scripts.pory"
	step_end
# 607 "data/maps/RouteThree/scripts.pory"

# 608 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 609 "data/maps/RouteThree/scripts.pory"
	walk_left
# 610 "data/maps/RouteThree/scripts.pory"
	walk_left
# 611 "data/maps/RouteThree/scripts.pory"
	walk_left
# 612 "data/maps/RouteThree/scripts.pory"
	walk_left
# 613 "data/maps/RouteThree/scripts.pory"
	step_end
# 614 "data/maps/RouteThree/scripts.pory"

# 615 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 616 "data/maps/RouteThree/scripts.pory"
	walk_down
# 617 "data/maps/RouteThree/scripts.pory"
	walk_down
# 618 "data/maps/RouteThree/scripts.pory"
	walk_left
# 619 "data/maps/RouteThree/scripts.pory"
	walk_left
# 620 "data/maps/RouteThree/scripts.pory"
	walk_left
# 621 "data/maps/RouteThree/scripts.pory"
	walk_left
# 622 "data/maps/RouteThree/scripts.pory"
	walk_left
# 623 "data/maps/RouteThree/scripts.pory"
	walk_left
# 624 "data/maps/RouteThree/scripts.pory"
	walk_left
# 625 "data/maps/RouteThree/scripts.pory"
	walk_left
# 626 "data/maps/RouteThree/scripts.pory"
	walk_left
# 627 "data/maps/RouteThree/scripts.pory"
	walk_left
# 628 "data/maps/RouteThree/scripts.pory"
	walk_left
# 629 "data/maps/RouteThree/scripts.pory"
	step_end
# 630 "data/maps/RouteThree/scripts.pory"

# 631 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 632 "data/maps/RouteThree/scripts.pory"
	delay_16
# 633 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 634 "data/maps/RouteThree/scripts.pory"
	delay_16
# 635 "data/maps/RouteThree/scripts.pory"
	delay_16
# 636 "data/maps/RouteThree/scripts.pory"
	delay_8
# 637 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 638 "data/maps/RouteThree/scripts.pory"
	step_end
# 639 "data/maps/RouteThree/scripts.pory"

# 640 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 641 "data/maps/RouteThree/scripts.pory"
	walk_down
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
	walk_left
# 650 "data/maps/RouteThree/scripts.pory"
	walk_left
# 651 "data/maps/RouteThree/scripts.pory"
	walk_left
# 652 "data/maps/RouteThree/scripts.pory"
	walk_left
# 653 "data/maps/RouteThree/scripts.pory"
	step_end
# 654 "data/maps/RouteThree/scripts.pory"

# 655 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 656 "data/maps/RouteThree/scripts.pory"
	delay_16
# 657 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 658 "data/maps/RouteThree/scripts.pory"
	delay_16
# 659 "data/maps/RouteThree/scripts.pory"
	delay_8
# 660 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 661 "data/maps/RouteThree/scripts.pory"
	step_end
# 662 "data/maps/RouteThree/scripts.pory"

# 663 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 664 "data/maps/RouteThree/scripts.pory"
	walk_down
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
	walk_left
# 674 "data/maps/RouteThree/scripts.pory"
	walk_left
# 675 "data/maps/RouteThree/scripts.pory"
	walk_left
# 676 "data/maps/RouteThree/scripts.pory"
	step_end
# 677 "data/maps/RouteThree/scripts.pory"

# 678 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 679 "data/maps/RouteThree/scripts.pory"
	delay_16
# 680 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 681 "data/maps/RouteThree/scripts.pory"
	delay_16
# 682 "data/maps/RouteThree/scripts.pory"
	delay_8
# 683 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 684 "data/maps/RouteThree/scripts.pory"
	step_end
# 685 "data/maps/RouteThree/scripts.pory"

# 686 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 687 "data/maps/RouteThree/scripts.pory"
	walk_up
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
	walk_left
# 697 "data/maps/RouteThree/scripts.pory"
	walk_left
# 698 "data/maps/RouteThree/scripts.pory"
	walk_left
# 699 "data/maps/RouteThree/scripts.pory"
	step_end
# 700 "data/maps/RouteThree/scripts.pory"

# 701 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 702 "data/maps/RouteThree/scripts.pory"
	delay_16
# 703 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 704 "data/maps/RouteThree/scripts.pory"
	delay_16
# 705 "data/maps/RouteThree/scripts.pory"
	delay_8
# 706 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 707 "data/maps/RouteThree/scripts.pory"
	step_end
# 708 "data/maps/RouteThree/scripts.pory"

# 709 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 710 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 711 "data/maps/RouteThree/scripts.pory"
	end
# 712 "data/maps/RouteThree/scripts.pory"

# 713 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 714 "data/maps/RouteThree/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 715 "data/maps/RouteThree/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 716 "data/maps/RouteThree/scripts.pory"
	.string "very soon…$"
# 717 "data/maps/RouteThree/scripts.pory"

# 718 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 719 "data/maps/RouteThree/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 720 "data/maps/RouteThree/scripts.pory"
	.string "A rookie TRAINER?\p"
# 721 "data/maps/RouteThree/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 722 "data/maps/RouteThree/scripts.pory"
	.string "do when they reach a new town?\p"
# 723 "data/maps/RouteThree/scripts.pory"
	.string "They first check what kind of GYM\n"
# 724 "data/maps/RouteThree/scripts.pory"
	.string "is in the town.$"
# 725 "data/maps/RouteThree/scripts.pory"

# 726 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 727 "data/maps/RouteThree/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 728 "data/maps/RouteThree/scripts.pory"

# 729 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 730 "data/maps/RouteThree/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 731 "data/maps/RouteThree/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 732 "data/maps/RouteThree/scripts.pory"

# 733 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 734 "data/maps/RouteThree/scripts.pory"
	.string "My face is reflected in the water.\p"
# 735 "data/maps/RouteThree/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 736 "data/maps/RouteThree/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 737 "data/maps/RouteThree/scripts.pory"
	.string "struggling with fear…\p"
# 738 "data/maps/RouteThree/scripts.pory"
	.string "What do you see reflected in your face?$"
# 739 "data/maps/RouteThree/scripts.pory"

# 740 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 741 "data/maps/RouteThree/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 742 "data/maps/RouteThree/scripts.pory"
	.string "If you catch another one…\p"
# 743 "data/maps/RouteThree/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 744 "data/maps/RouteThree/scripts.pory"
	.string "BOX over a PC connection.$"
# 745 "data/maps/RouteThree/scripts.pory"

# 746 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_GymSign:
# 747 "data/maps/RouteThree/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 748 "data/maps/RouteThree/scripts.pory"
	.string "LEADER: NORMAN\l"
# 749 "data/maps/RouteThree/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 750 "data/maps/RouteThree/scripts.pory"

# 751 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_CitySign:
# 752 "data/maps/RouteThree/scripts.pory"
	.string "PETALBURG CITY\n"
# 753 "data/maps/RouteThree/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 754 "data/maps/RouteThree/scripts.pory"

# 755 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 756 "data/maps/RouteThree/scripts.pory"
	.string "WALLY'S HOUSE$"
# 757 "data/maps/RouteThree/scripts.pory"

# 758 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 759 "data/maps/RouteThree/scripts.pory"
	.string "Excuse me!\p"
# 760 "data/maps/RouteThree/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 761 "data/maps/RouteThree/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 762 "data/maps/RouteThree/scripts.pory"

# 763 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 764 "data/maps/RouteThree/scripts.pory"
	.string "… … … … … …\p"
# 765 "data/maps/RouteThree/scripts.pory"
	.string "Well, maybe not.\n"
# 766 "data/maps/RouteThree/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 767 "data/maps/RouteThree/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 768 "data/maps/RouteThree/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 769 "data/maps/RouteThree/scripts.pory"

# 770 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 771 "data/maps/RouteThree/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 772 "data/maps/RouteThree/scripts.pory"
	.string "talented TRAINERS.\p"
# 773 "data/maps/RouteThree/scripts.pory"
	.string "I'm sorry to have taken your time.$"
