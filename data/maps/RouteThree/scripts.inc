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
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 22 "data/maps/RouteThree/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 23 "data/maps/RouteThree/scripts.pory"
	return
# 24 "data/maps/RouteThree/scripts.pory"

# 25 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 26 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/RouteThree/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 28 "data/maps/RouteThree/scripts.pory"
	return
# 29 "data/maps/RouteThree/scripts.pory"

# 30 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 31 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 32 "data/maps/RouteThree/scripts.pory"
	return
# 33 "data/maps/RouteThree/scripts.pory"

# 34 "data/maps/RouteThree/scripts.pory"
PetalburgCity_OnFrame:
# 35 "data/maps/RouteThree/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 36 "data/maps/RouteThree/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 37 "data/maps/RouteThree/scripts.pory"
	.2byte 0
# 38 "data/maps/RouteThree/scripts.pory"

# 39 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 40 "data/maps/RouteThree/scripts.pory"
	lockall
# 41 "data/maps/RouteThree/scripts.pory"
	special SavePlayerParty
# 42 "data/maps/RouteThree/scripts.pory"
	special LoadWallyZigzagoon
# 43 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 44 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 45 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 46 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 47 "data/maps/RouteThree/scripts.pory"
	special StartWallyTutorialBattle
# 48 "data/maps/RouteThree/scripts.pory"
	waitstate
# 49 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 50 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_ROUTE_THREE
# 51 "data/maps/RouteThree/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_ROUTE_THREE
# 52 "data/maps/RouteThree/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 53 "data/maps/RouteThree/scripts.pory"
	closemessage
# 54 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 55 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 56 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 57 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 58 "data/maps/RouteThree/scripts.pory"
	special LoadPlayerParty
# 59 "data/maps/RouteThree/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 60 "data/maps/RouteThree/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 61 "data/maps/RouteThree/scripts.pory"
	waitstate
# 62 "data/maps/RouteThree/scripts.pory"
	releaseall
# 63 "data/maps/RouteThree/scripts.pory"
	end
# 64 "data/maps/RouteThree/scripts.pory"

# 65 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 66 "data/maps/RouteThree/scripts.pory"
	lockall
# 67 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 68 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 69 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 70 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 71 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8004, 7
# 72 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8005, 5
# 73 "data/maps/RouteThree/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 74 "data/maps/RouteThree/scripts.pory"
	waitdooranim
# 75 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 76 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 77 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 78 "data/maps/RouteThree/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 79 "data/maps/RouteThree/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE_THREE
# 80 "data/maps/RouteThree/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 81 "data/maps/RouteThree/scripts.pory"
	waitdooranim
# 82 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/RouteThree/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 85 "data/maps/RouteThree/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 86 "data/maps/RouteThree/scripts.pory"
	waitstate
# 87 "data/maps/RouteThree/scripts.pory"
	releaseall
# 88 "data/maps/RouteThree/scripts.pory"
	end
# 89 "data/maps/RouteThree/scripts.pory"

# 90 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Boy::
# 91 "data/maps/RouteThree/scripts.pory"
	lock
# 92 "data/maps/RouteThree/scripts.pory"
	faceplayer
# 93 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 94 "data/maps/RouteThree/scripts.pory"
	closemessage
# 95 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 96 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 97 "data/maps/RouteThree/scripts.pory"
	release
# 98 "data/maps/RouteThree/scripts.pory"
	end
# 99 "data/maps/RouteThree/scripts.pory"

# 100 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 101 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 102 "data/maps/RouteThree/scripts.pory"
	end
# 103 "data/maps/RouteThree/scripts.pory"

# 104 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 105 "data/maps/RouteThree/scripts.pory"
	delay_8
# 106 "data/maps/RouteThree/scripts.pory"
	walk_down
# 107 "data/maps/RouteThree/scripts.pory"
	walk_down
# 108 "data/maps/RouteThree/scripts.pory"
	walk_down
# 109 "data/maps/RouteThree/scripts.pory"
	walk_left
# 110 "data/maps/RouteThree/scripts.pory"
	walk_left
# 111 "data/maps/RouteThree/scripts.pory"
	walk_left
# 112 "data/maps/RouteThree/scripts.pory"
	walk_left
# 113 "data/maps/RouteThree/scripts.pory"
	walk_left
# 114 "data/maps/RouteThree/scripts.pory"
	walk_left
# 115 "data/maps/RouteThree/scripts.pory"
	walk_left
# 116 "data/maps/RouteThree/scripts.pory"
	walk_left
# 117 "data/maps/RouteThree/scripts.pory"
	walk_up
# 118 "data/maps/RouteThree/scripts.pory"
	walk_up
# 119 "data/maps/RouteThree/scripts.pory"
	walk_up
# 120 "data/maps/RouteThree/scripts.pory"
	walk_up
# 121 "data/maps/RouteThree/scripts.pory"
	walk_up
# 122 "data/maps/RouteThree/scripts.pory"
	step_end
# 123 "data/maps/RouteThree/scripts.pory"

# 124 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 125 "data/maps/RouteThree/scripts.pory"
	walk_up
# 126 "data/maps/RouteThree/scripts.pory"
	walk_up
# 127 "data/maps/RouteThree/scripts.pory"
	step_end
# 128 "data/maps/RouteThree/scripts.pory"

# 129 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 130 "data/maps/RouteThree/scripts.pory"
	delay_8
# 131 "data/maps/RouteThree/scripts.pory"
	walk_down
# 132 "data/maps/RouteThree/scripts.pory"
	walk_down
# 133 "data/maps/RouteThree/scripts.pory"
	walk_left
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
	walk_up
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
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 150 "data/maps/RouteThree/scripts.pory"
	walk_up
# 151 "data/maps/RouteThree/scripts.pory"
	set_invisible
# 152 "data/maps/RouteThree/scripts.pory"
	step_end
# 153 "data/maps/RouteThree/scripts.pory"

# 154 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 155 "data/maps/RouteThree/scripts.pory"
	delay_8
# 156 "data/maps/RouteThree/scripts.pory"
	walk_down
# 157 "data/maps/RouteThree/scripts.pory"
	walk_down
# 158 "data/maps/RouteThree/scripts.pory"
	walk_down
# 159 "data/maps/RouteThree/scripts.pory"
	walk_down
# 160 "data/maps/RouteThree/scripts.pory"
	walk_down
# 161 "data/maps/RouteThree/scripts.pory"
	walk_down
# 162 "data/maps/RouteThree/scripts.pory"
	walk_down
# 163 "data/maps/RouteThree/scripts.pory"
	walk_down
# 164 "data/maps/RouteThree/scripts.pory"
	walk_right
# 165 "data/maps/RouteThree/scripts.pory"
	walk_right
# 166 "data/maps/RouteThree/scripts.pory"
	walk_right
# 167 "data/maps/RouteThree/scripts.pory"
	walk_right
# 168 "data/maps/RouteThree/scripts.pory"
	walk_right
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
	walk_up
# 185 "data/maps/RouteThree/scripts.pory"
	walk_up
# 186 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/RouteThree/scripts.pory"
	step_end
# 188 "data/maps/RouteThree/scripts.pory"

# 189 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 190 "data/maps/RouteThree/scripts.pory"
	delay_8
# 191 "data/maps/RouteThree/scripts.pory"
	walk_down
# 192 "data/maps/RouteThree/scripts.pory"
	walk_down
# 193 "data/maps/RouteThree/scripts.pory"
	walk_down
# 194 "data/maps/RouteThree/scripts.pory"
	walk_down
# 195 "data/maps/RouteThree/scripts.pory"
	walk_down
# 196 "data/maps/RouteThree/scripts.pory"
	walk_down
# 197 "data/maps/RouteThree/scripts.pory"
	walk_down
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
	walk_up
# 219 "data/maps/RouteThree/scripts.pory"
	walk_up
# 220 "data/maps/RouteThree/scripts.pory"
	walk_right
# 221 "data/maps/RouteThree/scripts.pory"
	delay_16
# 222 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 223 "data/maps/RouteThree/scripts.pory"
	delay_16
# 224 "data/maps/RouteThree/scripts.pory"
	delay_16
# 225 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_right
# 226 "data/maps/RouteThree/scripts.pory"
	step_end
# 227 "data/maps/RouteThree/scripts.pory"

# 228 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 229 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 230 "data/maps/RouteThree/scripts.pory"
	end
# 231 "data/maps/RouteThree/scripts.pory"

# 232 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 233 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 234 "data/maps/RouteThree/scripts.pory"
	end
# 235 "data/maps/RouteThree/scripts.pory"

# 236 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 237 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 238 "data/maps/RouteThree/scripts.pory"
	end
# 239 "data/maps/RouteThree/scripts.pory"

# 240 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 241 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 242 "data/maps/RouteThree/scripts.pory"
	end
# 243 "data/maps/RouteThree/scripts.pory"

# 244 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 245 "data/maps/RouteThree/scripts.pory"
	lockall
# 246 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 0
# 247 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 248 "data/maps/RouteThree/scripts.pory"
	end
# 249 "data/maps/RouteThree/scripts.pory"

# 250 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 251 "data/maps/RouteThree/scripts.pory"
	lockall
# 252 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 1
# 253 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 254 "data/maps/RouteThree/scripts.pory"
	end
# 255 "data/maps/RouteThree/scripts.pory"

# 256 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 257 "data/maps/RouteThree/scripts.pory"
	lockall
# 258 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 2
# 259 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 260 "data/maps/RouteThree/scripts.pory"
	end
# 261 "data/maps/RouteThree/scripts.pory"

# 262 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 263 "data/maps/RouteThree/scripts.pory"
	lockall
# 264 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 3
# 265 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 266 "data/maps/RouteThree/scripts.pory"
	end
# 267 "data/maps/RouteThree/scripts.pory"

# 268 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 269 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 270 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 271 "data/maps/RouteThree/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 272 "data/maps/RouteThree/scripts.pory"
	playse SE_PIN
# 273 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 274 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 275 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 276 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 277 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 278 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 279 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 280 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 281 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 282 "data/maps/RouteThree/scripts.pory"
	closemessage
# 283 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 284 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 285 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 286 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 287 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 288 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 289 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 290 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 291 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 292 "data/maps/RouteThree/scripts.pory"
	closemessage
# 293 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 294 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 295 "data/maps/RouteThree/scripts.pory"
	fadedefaultbgm
# 296 "data/maps/RouteThree/scripts.pory"
	releaseall
# 297 "data/maps/RouteThree/scripts.pory"
	end
# 298 "data/maps/RouteThree/scripts.pory"

# 299 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 300 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 301 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 302 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 303 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 304 "data/maps/RouteThree/scripts.pory"
	return
# 305 "data/maps/RouteThree/scripts.pory"

# 306 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 307 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 308 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 309 "data/maps/RouteThree/scripts.pory"
	return
# 310 "data/maps/RouteThree/scripts.pory"

# 311 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 312 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 313 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 314 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 315 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 316 "data/maps/RouteThree/scripts.pory"
	return
# 317 "data/maps/RouteThree/scripts.pory"

# 318 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 319 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 320 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 321 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 322 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 323 "data/maps/RouteThree/scripts.pory"
	return
# 324 "data/maps/RouteThree/scripts.pory"

# 325 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 326 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 327 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 328 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 329 "data/maps/RouteThree/scripts.pory"
	return
# 330 "data/maps/RouteThree/scripts.pory"

# 331 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 332 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 333 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 334 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 335 "data/maps/RouteThree/scripts.pory"
	return
# 336 "data/maps/RouteThree/scripts.pory"

# 337 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 338 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 339 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 340 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 341 "data/maps/RouteThree/scripts.pory"
	return
# 342 "data/maps/RouteThree/scripts.pory"

# 343 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 344 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 345 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 346 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 347 "data/maps/RouteThree/scripts.pory"
	return
# 348 "data/maps/RouteThree/scripts.pory"

# 349 "data/maps/RouteThree/scripts.pory"
@ Unused
# 350 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_Delay48::
# 351 "data/maps/RouteThree/scripts.pory"
	delay_16
# 352 "data/maps/RouteThree/scripts.pory"
	delay_16
# 353 "data/maps/RouteThree/scripts.pory"
	delay_16
# 354 "data/maps/RouteThree/scripts.pory"
	step_end
# 355 "data/maps/RouteThree/scripts.pory"

# 356 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 357 "data/maps/RouteThree/scripts.pory"
	walk_right
# 358 "data/maps/RouteThree/scripts.pory"
	walk_right
# 359 "data/maps/RouteThree/scripts.pory"
	walk_right
# 360 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/RouteThree/scripts.pory"
	step_end
# 362 "data/maps/RouteThree/scripts.pory"

# 363 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 364 "data/maps/RouteThree/scripts.pory"
	walk_right
# 365 "data/maps/RouteThree/scripts.pory"
	walk_right
# 366 "data/maps/RouteThree/scripts.pory"
	step_end
# 367 "data/maps/RouteThree/scripts.pory"

# 368 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 369 "data/maps/RouteThree/scripts.pory"
	walk_right
# 370 "data/maps/RouteThree/scripts.pory"
	walk_right
# 371 "data/maps/RouteThree/scripts.pory"
	walk_right
# 372 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 373 "data/maps/RouteThree/scripts.pory"
	step_end
# 374 "data/maps/RouteThree/scripts.pory"

# 375 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 376 "data/maps/RouteThree/scripts.pory"
	walk_down
# 377 "data/maps/RouteThree/scripts.pory"
	walk_right
# 378 "data/maps/RouteThree/scripts.pory"
	walk_right
# 379 "data/maps/RouteThree/scripts.pory"
	walk_right
# 380 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 381 "data/maps/RouteThree/scripts.pory"
	step_end
# 382 "data/maps/RouteThree/scripts.pory"

# 383 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 384 "data/maps/RouteThree/scripts.pory"
	walk_right
# 385 "data/maps/RouteThree/scripts.pory"
	walk_right
# 386 "data/maps/RouteThree/scripts.pory"
	walk_right
# 387 "data/maps/RouteThree/scripts.pory"
	walk_right
# 388 "data/maps/RouteThree/scripts.pory"
	walk_right
# 389 "data/maps/RouteThree/scripts.pory"
	walk_right
# 390 "data/maps/RouteThree/scripts.pory"
	walk_right
# 391 "data/maps/RouteThree/scripts.pory"
	walk_up
# 392 "data/maps/RouteThree/scripts.pory"
	walk_right
# 393 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 394 "data/maps/RouteThree/scripts.pory"
	step_end
# 395 "data/maps/RouteThree/scripts.pory"

# 396 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 397 "data/maps/RouteThree/scripts.pory"
	walk_down
# 398 "data/maps/RouteThree/scripts.pory"
	walk_right
# 399 "data/maps/RouteThree/scripts.pory"
	walk_right
# 400 "data/maps/RouteThree/scripts.pory"
	walk_right
# 401 "data/maps/RouteThree/scripts.pory"
	walk_right
# 402 "data/maps/RouteThree/scripts.pory"
	walk_right
# 403 "data/maps/RouteThree/scripts.pory"
	walk_right
# 404 "data/maps/RouteThree/scripts.pory"
	walk_right
# 405 "data/maps/RouteThree/scripts.pory"
	walk_right
# 406 "data/maps/RouteThree/scripts.pory"
	walk_up
# 407 "data/maps/RouteThree/scripts.pory"
	walk_up
# 408 "data/maps/RouteThree/scripts.pory"
	walk_right
# 409 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 410 "data/maps/RouteThree/scripts.pory"
	step_end
# 411 "data/maps/RouteThree/scripts.pory"

# 412 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 413 "data/maps/RouteThree/scripts.pory"
	walk_right
# 414 "data/maps/RouteThree/scripts.pory"
	walk_right
# 415 "data/maps/RouteThree/scripts.pory"
	walk_right
# 416 "data/maps/RouteThree/scripts.pory"
	walk_right
# 417 "data/maps/RouteThree/scripts.pory"
	walk_right
# 418 "data/maps/RouteThree/scripts.pory"
	walk_right
# 419 "data/maps/RouteThree/scripts.pory"
	walk_right
# 420 "data/maps/RouteThree/scripts.pory"
	walk_up
# 421 "data/maps/RouteThree/scripts.pory"
	walk_right
# 422 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 423 "data/maps/RouteThree/scripts.pory"
	step_end
# 424 "data/maps/RouteThree/scripts.pory"

# 425 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_right
# 432 "data/maps/RouteThree/scripts.pory"
	walk_right
# 433 "data/maps/RouteThree/scripts.pory"
	walk_up
# 434 "data/maps/RouteThree/scripts.pory"
	walk_up
# 435 "data/maps/RouteThree/scripts.pory"
	walk_right
# 436 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 437 "data/maps/RouteThree/scripts.pory"
	step_end
# 438 "data/maps/RouteThree/scripts.pory"

# 439 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 440 "data/maps/RouteThree/scripts.pory"
	walk_down
# 441 "data/maps/RouteThree/scripts.pory"
	walk_left
# 442 "data/maps/RouteThree/scripts.pory"
	walk_left
# 443 "data/maps/RouteThree/scripts.pory"
	walk_left
# 444 "data/maps/RouteThree/scripts.pory"
	walk_left
# 445 "data/maps/RouteThree/scripts.pory"
	walk_left
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
	step_end
# 453 "data/maps/RouteThree/scripts.pory"

# 454 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 455 "data/maps/RouteThree/scripts.pory"
	walk_down
# 456 "data/maps/RouteThree/scripts.pory"
	walk_right
# 457 "data/maps/RouteThree/scripts.pory"
	walk_right
# 458 "data/maps/RouteThree/scripts.pory"
	walk_right
# 459 "data/maps/RouteThree/scripts.pory"
	walk_right
# 460 "data/maps/RouteThree/scripts.pory"
	walk_right
# 461 "data/maps/RouteThree/scripts.pory"
	walk_right
# 462 "data/maps/RouteThree/scripts.pory"
	walk_right
# 463 "data/maps/RouteThree/scripts.pory"
	walk_up
# 464 "data/maps/RouteThree/scripts.pory"
	step_end
# 465 "data/maps/RouteThree/scripts.pory"

# 466 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 467 "data/maps/RouteThree/scripts.pory"
	delay_16
# 468 "data/maps/RouteThree/scripts.pory"
	delay_16
# 469 "data/maps/RouteThree/scripts.pory"
	walk_down
# 470 "data/maps/RouteThree/scripts.pory"
	walk_right
# 471 "data/maps/RouteThree/scripts.pory"
	walk_right
# 472 "data/maps/RouteThree/scripts.pory"
	walk_right
# 473 "data/maps/RouteThree/scripts.pory"
	walk_right
# 474 "data/maps/RouteThree/scripts.pory"
	walk_right
# 475 "data/maps/RouteThree/scripts.pory"
	walk_right
# 476 "data/maps/RouteThree/scripts.pory"
	walk_right
# 477 "data/maps/RouteThree/scripts.pory"
	walk_up
# 478 "data/maps/RouteThree/scripts.pory"
	walk_up
# 479 "data/maps/RouteThree/scripts.pory"
	step_end
# 480 "data/maps/RouteThree/scripts.pory"

# 481 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 482 "data/maps/RouteThree/scripts.pory"
	walk_up
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
	walk_right
# 489 "data/maps/RouteThree/scripts.pory"
	walk_right
# 490 "data/maps/RouteThree/scripts.pory"
	walk_up
# 491 "data/maps/RouteThree/scripts.pory"
	step_end
# 492 "data/maps/RouteThree/scripts.pory"

# 493 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 494 "data/maps/RouteThree/scripts.pory"
	walk_up
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
PetalburgCity_EventScript_Scott0::
# 507 "data/maps/RouteThree/scripts.pory"
	lockall
# 508 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 509 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 0
# 510 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 511 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 512 "data/maps/RouteThree/scripts.pory"
	end
# 513 "data/maps/RouteThree/scripts.pory"

# 514 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 515 "data/maps/RouteThree/scripts.pory"
	lockall
# 516 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 517 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 1
# 518 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 519 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 520 "data/maps/RouteThree/scripts.pory"
	end
# 521 "data/maps/RouteThree/scripts.pory"

# 522 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 523 "data/maps/RouteThree/scripts.pory"
	lockall
# 524 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 525 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 2
# 526 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 527 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 528 "data/maps/RouteThree/scripts.pory"
	end
# 529 "data/maps/RouteThree/scripts.pory"

# 530 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 531 "data/maps/RouteThree/scripts.pory"
	lockall
# 532 "data/maps/RouteThree/scripts.pory"
	addobject LOCALID_SCOTT
# 533 "data/maps/RouteThree/scripts.pory"
	setvar VAR_0x8008, 3
# 534 "data/maps/RouteThree/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 535 "data/maps/RouteThree/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 536 "data/maps/RouteThree/scripts.pory"
	end
# 537 "data/maps/RouteThree/scripts.pory"

# 538 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_Scott::
# 539 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 540 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 541 "data/maps/RouteThree/scripts.pory"
	playse SE_PIN
# 542 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 543 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 544 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 545 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 546 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 547 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 548 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 549 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 550 "data/maps/RouteThree/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 551 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 552 "data/maps/RouteThree/scripts.pory"
	closemessage
# 553 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 554 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 555 "data/maps/RouteThree/scripts.pory"
	delay 30
# 556 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 557 "data/maps/RouteThree/scripts.pory"
	closemessage
# 558 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 559 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 560 "data/maps/RouteThree/scripts.pory"
	delay 30
# 561 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 562 "data/maps/RouteThree/scripts.pory"
	closemessage
# 563 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 564 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 565 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 566 "data/maps/RouteThree/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 567 "data/maps/RouteThree/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 568 "data/maps/RouteThree/scripts.pory"
	removeobject LOCALID_SCOTT
# 569 "data/maps/RouteThree/scripts.pory"
	releaseall
# 570 "data/maps/RouteThree/scripts.pory"
	end
# 571 "data/maps/RouteThree/scripts.pory"

# 572 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 573 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 574 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 575 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 576 "data/maps/RouteThree/scripts.pory"
	return
# 577 "data/maps/RouteThree/scripts.pory"

# 578 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 579 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 580 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 581 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 582 "data/maps/RouteThree/scripts.pory"
	return
# 583 "data/maps/RouteThree/scripts.pory"

# 584 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 585 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 586 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 587 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 588 "data/maps/RouteThree/scripts.pory"
	return
# 589 "data/maps/RouteThree/scripts.pory"

# 590 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 591 "data/maps/RouteThree/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 592 "data/maps/RouteThree/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 593 "data/maps/RouteThree/scripts.pory"
	waitmovement 0
# 594 "data/maps/RouteThree/scripts.pory"
	return
# 595 "data/maps/RouteThree/scripts.pory"

# 596 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 597 "data/maps/RouteThree/scripts.pory"
	walk_left
# 598 "data/maps/RouteThree/scripts.pory"
	walk_left
# 599 "data/maps/RouteThree/scripts.pory"
	walk_left
# 600 "data/maps/RouteThree/scripts.pory"
	walk_left
# 601 "data/maps/RouteThree/scripts.pory"
	step_end
# 602 "data/maps/RouteThree/scripts.pory"

# 603 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 604 "data/maps/RouteThree/scripts.pory"
	walk_left
# 605 "data/maps/RouteThree/scripts.pory"
	walk_left
# 606 "data/maps/RouteThree/scripts.pory"
	walk_left
# 607 "data/maps/RouteThree/scripts.pory"
	walk_left
# 608 "data/maps/RouteThree/scripts.pory"
	step_end
# 609 "data/maps/RouteThree/scripts.pory"

# 610 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 611 "data/maps/RouteThree/scripts.pory"
	walk_down
# 612 "data/maps/RouteThree/scripts.pory"
	walk_down
# 613 "data/maps/RouteThree/scripts.pory"
	walk_left
# 614 "data/maps/RouteThree/scripts.pory"
	walk_left
# 615 "data/maps/RouteThree/scripts.pory"
	walk_left
# 616 "data/maps/RouteThree/scripts.pory"
	walk_left
# 617 "data/maps/RouteThree/scripts.pory"
	walk_left
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
	step_end
# 625 "data/maps/RouteThree/scripts.pory"

# 626 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 627 "data/maps/RouteThree/scripts.pory"
	delay_16
# 628 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 629 "data/maps/RouteThree/scripts.pory"
	delay_16
# 630 "data/maps/RouteThree/scripts.pory"
	delay_16
# 631 "data/maps/RouteThree/scripts.pory"
	delay_8
# 632 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 633 "data/maps/RouteThree/scripts.pory"
	step_end
# 634 "data/maps/RouteThree/scripts.pory"

# 635 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 636 "data/maps/RouteThree/scripts.pory"
	walk_down
# 637 "data/maps/RouteThree/scripts.pory"
	walk_left
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
	step_end
# 649 "data/maps/RouteThree/scripts.pory"

# 650 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 651 "data/maps/RouteThree/scripts.pory"
	delay_16
# 652 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 653 "data/maps/RouteThree/scripts.pory"
	delay_16
# 654 "data/maps/RouteThree/scripts.pory"
	delay_8
# 655 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 656 "data/maps/RouteThree/scripts.pory"
	step_end
# 657 "data/maps/RouteThree/scripts.pory"

# 658 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 659 "data/maps/RouteThree/scripts.pory"
	walk_down
# 660 "data/maps/RouteThree/scripts.pory"
	walk_left
# 661 "data/maps/RouteThree/scripts.pory"
	walk_left
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
	step_end
# 672 "data/maps/RouteThree/scripts.pory"

# 673 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 674 "data/maps/RouteThree/scripts.pory"
	delay_16
# 675 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_down
# 676 "data/maps/RouteThree/scripts.pory"
	delay_16
# 677 "data/maps/RouteThree/scripts.pory"
	delay_8
# 678 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 679 "data/maps/RouteThree/scripts.pory"
	step_end
# 680 "data/maps/RouteThree/scripts.pory"

# 681 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 682 "data/maps/RouteThree/scripts.pory"
	walk_up
# 683 "data/maps/RouteThree/scripts.pory"
	walk_left
# 684 "data/maps/RouteThree/scripts.pory"
	walk_left
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
	step_end
# 695 "data/maps/RouteThree/scripts.pory"

# 696 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 697 "data/maps/RouteThree/scripts.pory"
	delay_16
# 698 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_up
# 699 "data/maps/RouteThree/scripts.pory"
	delay_16
# 700 "data/maps/RouteThree/scripts.pory"
	delay_8
# 701 "data/maps/RouteThree/scripts.pory"
	walk_in_place_faster_left
# 702 "data/maps/RouteThree/scripts.pory"
	step_end
# 703 "data/maps/RouteThree/scripts.pory"

# 704 "data/maps/RouteThree/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 705 "data/maps/RouteThree/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 706 "data/maps/RouteThree/scripts.pory"
	end
# 707 "data/maps/RouteThree/scripts.pory"

# 708 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 709 "data/maps/RouteThree/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 710 "data/maps/RouteThree/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 711 "data/maps/RouteThree/scripts.pory"
	.string "very soon…$"
# 712 "data/maps/RouteThree/scripts.pory"

# 713 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 714 "data/maps/RouteThree/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 715 "data/maps/RouteThree/scripts.pory"
	.string "A rookie TRAINER?\p"
# 716 "data/maps/RouteThree/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 717 "data/maps/RouteThree/scripts.pory"
	.string "do when they reach a new town?\p"
# 718 "data/maps/RouteThree/scripts.pory"
	.string "They first check what kind of GYM\n"
# 719 "data/maps/RouteThree/scripts.pory"
	.string "is in the town.$"
# 720 "data/maps/RouteThree/scripts.pory"

# 721 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 722 "data/maps/RouteThree/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 723 "data/maps/RouteThree/scripts.pory"

# 724 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 725 "data/maps/RouteThree/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 726 "data/maps/RouteThree/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 727 "data/maps/RouteThree/scripts.pory"

# 728 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 729 "data/maps/RouteThree/scripts.pory"
	.string "My face is reflected in the water.\p"
# 730 "data/maps/RouteThree/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 731 "data/maps/RouteThree/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 732 "data/maps/RouteThree/scripts.pory"
	.string "struggling with fear…\p"
# 733 "data/maps/RouteThree/scripts.pory"
	.string "What do you see reflected in your face?$"
# 734 "data/maps/RouteThree/scripts.pory"

# 735 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 736 "data/maps/RouteThree/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 737 "data/maps/RouteThree/scripts.pory"
	.string "If you catch another one…\p"
# 738 "data/maps/RouteThree/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 739 "data/maps/RouteThree/scripts.pory"
	.string "BOX over a PC connection.$"
# 740 "data/maps/RouteThree/scripts.pory"

# 741 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_GymSign:
# 742 "data/maps/RouteThree/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 743 "data/maps/RouteThree/scripts.pory"
	.string "LEADER: NORMAN\l"
# 744 "data/maps/RouteThree/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 745 "data/maps/RouteThree/scripts.pory"

# 746 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_CitySign:
# 747 "data/maps/RouteThree/scripts.pory"
	.string "PETALBURG CITY\n"
# 748 "data/maps/RouteThree/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 749 "data/maps/RouteThree/scripts.pory"

# 750 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 751 "data/maps/RouteThree/scripts.pory"
	.string "WALLY'S HOUSE$"
# 752 "data/maps/RouteThree/scripts.pory"

# 753 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 754 "data/maps/RouteThree/scripts.pory"
	.string "Excuse me!\p"
# 755 "data/maps/RouteThree/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 756 "data/maps/RouteThree/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 757 "data/maps/RouteThree/scripts.pory"

# 758 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 759 "data/maps/RouteThree/scripts.pory"
	.string "… … … … … …\p"
# 760 "data/maps/RouteThree/scripts.pory"
	.string "Well, maybe not.\n"
# 761 "data/maps/RouteThree/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 762 "data/maps/RouteThree/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 763 "data/maps/RouteThree/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 764 "data/maps/RouteThree/scripts.pory"

# 765 "data/maps/RouteThree/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 766 "data/maps/RouteThree/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 767 "data/maps/RouteThree/scripts.pory"
	.string "talented TRAINERS.\p"
# 768 "data/maps/RouteThree/scripts.pory"
	.string "I'm sorry to have taken your time.$"
