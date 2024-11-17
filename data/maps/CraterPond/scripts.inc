CraterPond_MapScripts::
	.byte 0


CraterPond_ExpShare::
# 4 "data/maps/CraterPond/scripts.pory"
	lock
# 5 "data/maps/CraterPond/scripts.pory"
	faceplayer
# 6 "data/maps/CraterPond/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, CraterPond_ExpShare_2
CraterPond_ExpShare_1:
# 11 "data/maps/CraterPond/scripts.pory"
	msgbox CraterPond_ExpShare_Text_1
# 12 "data/maps/CraterPond/scripts.pory"
	release
	return

CraterPond_ExpShare_2:
# 7 "data/maps/CraterPond/scripts.pory"
	msgbox CraterPond_ExpShare_Text_0
# 8 "data/maps/CraterPond/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 9 "data/maps/CraterPond/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
	goto CraterPond_ExpShare_1


# 15 "data/maps/CraterPond/scripts.pory"

# 16 "data/maps/CraterPond/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 17 "data/maps/CraterPond/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 18 "data/maps/CraterPond/scripts.pory"
.set LOCALID_RIVAL, 4
# 19 "data/maps/CraterPond/scripts.pory"

# 20 "data/maps/CraterPond/scripts.pory"

# 21 "data/maps/CraterPond/scripts.pory"
OldaleTown_OnTransition:
# 22 "data/maps/CraterPond/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 23 "data/maps/CraterPond/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 24 "data/maps/CraterPond/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 25 "data/maps/CraterPond/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 26 "data/maps/CraterPond/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 27 "data/maps/CraterPond/scripts.pory"
	end
# 28 "data/maps/CraterPond/scripts.pory"

# 29 "data/maps/CraterPond/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 30 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 31 "data/maps/CraterPond/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 32 "data/maps/CraterPond/scripts.pory"
	return
# 33 "data/maps/CraterPond/scripts.pory"

# 34 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 35 "data/maps/CraterPond/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 36 "data/maps/CraterPond/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 37 "data/maps/CraterPond/scripts.pory"
	return
# 38 "data/maps/CraterPond/scripts.pory"

# 39 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 40 "data/maps/CraterPond/scripts.pory"
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
# 41 "data/maps/CraterPond/scripts.pory"
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/CraterPond/scripts.pory"
	return
# 43 "data/maps/CraterPond/scripts.pory"

# 44 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_TownSign::
# 45 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 46 "data/maps/CraterPond/scripts.pory"
	end
# 47 "data/maps/CraterPond/scripts.pory"

# 48 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_Girl::
# 49 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 50 "data/maps/CraterPond/scripts.pory"
	end
# 51 "data/maps/CraterPond/scripts.pory"

# 52 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 53 "data/maps/CraterPond/scripts.pory"
	lock
# 54 "data/maps/CraterPond/scripts.pory"
	faceplayer
# 55 "data/maps/CraterPond/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 56 "data/maps/CraterPond/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 57 "data/maps/CraterPond/scripts.pory"
	setflag FLAG_TEMP_1
# 58 "data/maps/CraterPond/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 59 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 60 "data/maps/CraterPond/scripts.pory"
	closemessage
# 61 "data/maps/CraterPond/scripts.pory"
	switch VAR_FACING
# 62 "data/maps/CraterPond/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 63 "data/maps/CraterPond/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 64 "data/maps/CraterPond/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 65 "data/maps/CraterPond/scripts.pory"
	end
# 66 "data/maps/CraterPond/scripts.pory"

# 67 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 68 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 69 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 70 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 71 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 72 "data/maps/CraterPond/scripts.pory"
	end
# 73 "data/maps/CraterPond/scripts.pory"

# 74 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 75 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 76 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 77 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 78 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 79 "data/maps/CraterPond/scripts.pory"
	end
# 80 "data/maps/CraterPond/scripts.pory"

# 81 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 82 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 83 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 84 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 85 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 86 "data/maps/CraterPond/scripts.pory"
	end
# 87 "data/maps/CraterPond/scripts.pory"

# 88 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 89 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 90 "data/maps/CraterPond/scripts.pory"
	giveitem ITEM_POTION
# 91 "data/maps/CraterPond/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 92 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 93 "data/maps/CraterPond/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 94 "data/maps/CraterPond/scripts.pory"
	fadedefaultbgm
# 95 "data/maps/CraterPond/scripts.pory"
	release
# 96 "data/maps/CraterPond/scripts.pory"
	end
# 97 "data/maps/CraterPond/scripts.pory"

# 98 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 99 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 100 "data/maps/CraterPond/scripts.pory"
	release
# 101 "data/maps/CraterPond/scripts.pory"
	end
# 102 "data/maps/CraterPond/scripts.pory"

# 103 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 104 "data/maps/CraterPond/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 105 "data/maps/CraterPond/scripts.pory"
	fadedefaultbgm
# 106 "data/maps/CraterPond/scripts.pory"
	release
# 107 "data/maps/CraterPond/scripts.pory"
	end
# 108 "data/maps/CraterPond/scripts.pory"

# 109 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 110 "data/maps/CraterPond/scripts.pory"
	walk_up
# 111 "data/maps/CraterPond/scripts.pory"
	walk_up
# 112 "data/maps/CraterPond/scripts.pory"
	walk_up
# 113 "data/maps/CraterPond/scripts.pory"
	walk_up
# 114 "data/maps/CraterPond/scripts.pory"
	walk_up
# 115 "data/maps/CraterPond/scripts.pory"
	walk_up
# 116 "data/maps/CraterPond/scripts.pory"
	walk_up
# 117 "data/maps/CraterPond/scripts.pory"
	walk_in_place_faster_down
# 118 "data/maps/CraterPond/scripts.pory"
	step_end
# 119 "data/maps/CraterPond/scripts.pory"

# 120 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 121 "data/maps/CraterPond/scripts.pory"
	walk_left
# 122 "data/maps/CraterPond/scripts.pory"
	walk_up
# 123 "data/maps/CraterPond/scripts.pory"
	walk_up
# 124 "data/maps/CraterPond/scripts.pory"
	walk_right
# 125 "data/maps/CraterPond/scripts.pory"
	walk_up
# 126 "data/maps/CraterPond/scripts.pory"
	walk_up
# 127 "data/maps/CraterPond/scripts.pory"
	walk_up
# 128 "data/maps/CraterPond/scripts.pory"
	walk_up
# 129 "data/maps/CraterPond/scripts.pory"
	walk_up
# 130 "data/maps/CraterPond/scripts.pory"
	walk_in_place_faster_down
# 131 "data/maps/CraterPond/scripts.pory"
	step_end
# 132 "data/maps/CraterPond/scripts.pory"

# 133 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 134 "data/maps/CraterPond/scripts.pory"
	walk_up
# 135 "data/maps/CraterPond/scripts.pory"
	walk_up
# 136 "data/maps/CraterPond/scripts.pory"
	walk_up
# 137 "data/maps/CraterPond/scripts.pory"
	walk_up
# 138 "data/maps/CraterPond/scripts.pory"
	walk_up
# 139 "data/maps/CraterPond/scripts.pory"
	walk_up
# 140 "data/maps/CraterPond/scripts.pory"
	walk_up
# 141 "data/maps/CraterPond/scripts.pory"
	walk_in_place_faster_down
# 142 "data/maps/CraterPond/scripts.pory"
	step_end
# 143 "data/maps/CraterPond/scripts.pory"

# 144 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_Unknown1:
# 145 "data/maps/CraterPond/scripts.pory"
	walk_up
# 146 "data/maps/CraterPond/scripts.pory"
	walk_up
# 147 "data/maps/CraterPond/scripts.pory"
	walk_right
# 148 "data/maps/CraterPond/scripts.pory"
	walk_right
# 149 "data/maps/CraterPond/scripts.pory"
	walk_right
# 150 "data/maps/CraterPond/scripts.pory"
	walk_right
# 151 "data/maps/CraterPond/scripts.pory"
	walk_up
# 152 "data/maps/CraterPond/scripts.pory"
	walk_up
# 153 "data/maps/CraterPond/scripts.pory"
	walk_up
# 154 "data/maps/CraterPond/scripts.pory"
	walk_up
# 155 "data/maps/CraterPond/scripts.pory"
	walk_up
# 156 "data/maps/CraterPond/scripts.pory"
	delay_8
# 157 "data/maps/CraterPond/scripts.pory"
	walk_in_place_faster_down
# 158 "data/maps/CraterPond/scripts.pory"
	step_end
# 159 "data/maps/CraterPond/scripts.pory"

# 160 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 161 "data/maps/CraterPond/scripts.pory"
	walk_right
# 162 "data/maps/CraterPond/scripts.pory"
	walk_up
# 163 "data/maps/CraterPond/scripts.pory"
	walk_up
# 164 "data/maps/CraterPond/scripts.pory"
	walk_up
# 165 "data/maps/CraterPond/scripts.pory"
	walk_up
# 166 "data/maps/CraterPond/scripts.pory"
	walk_up
# 167 "data/maps/CraterPond/scripts.pory"
	walk_up
# 168 "data/maps/CraterPond/scripts.pory"
	step_end
# 169 "data/maps/CraterPond/scripts.pory"

# 170 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 171 "data/maps/CraterPond/scripts.pory"
	delay_16
# 172 "data/maps/CraterPond/scripts.pory"
	delay_16
# 173 "data/maps/CraterPond/scripts.pory"
	delay_16
# 174 "data/maps/CraterPond/scripts.pory"
	delay_16
# 175 "data/maps/CraterPond/scripts.pory"
	walk_up
# 176 "data/maps/CraterPond/scripts.pory"
	walk_up
# 177 "data/maps/CraterPond/scripts.pory"
	walk_up
# 178 "data/maps/CraterPond/scripts.pory"
	walk_up
# 179 "data/maps/CraterPond/scripts.pory"
	walk_up
# 180 "data/maps/CraterPond/scripts.pory"
	step_end
# 181 "data/maps/CraterPond/scripts.pory"

# 182 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 183 "data/maps/CraterPond/scripts.pory"
	walk_up
# 184 "data/maps/CraterPond/scripts.pory"
	walk_up
# 185 "data/maps/CraterPond/scripts.pory"
	walk_up
# 186 "data/maps/CraterPond/scripts.pory"
	walk_up
# 187 "data/maps/CraterPond/scripts.pory"
	walk_up
# 188 "data/maps/CraterPond/scripts.pory"
	walk_up
# 189 "data/maps/CraterPond/scripts.pory"
	walk_up
# 190 "data/maps/CraterPond/scripts.pory"
	step_end
# 191 "data/maps/CraterPond/scripts.pory"

# 192 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_Unknown2:
# 193 "data/maps/CraterPond/scripts.pory"
	walk_left
# 194 "data/maps/CraterPond/scripts.pory"
	walk_up
# 195 "data/maps/CraterPond/scripts.pory"
	walk_up
# 196 "data/maps/CraterPond/scripts.pory"
	walk_right
# 197 "data/maps/CraterPond/scripts.pory"
	walk_right
# 198 "data/maps/CraterPond/scripts.pory"
	walk_right
# 199 "data/maps/CraterPond/scripts.pory"
	walk_right
# 200 "data/maps/CraterPond/scripts.pory"
	walk_up
# 201 "data/maps/CraterPond/scripts.pory"
	walk_up
# 202 "data/maps/CraterPond/scripts.pory"
	walk_up
# 203 "data/maps/CraterPond/scripts.pory"
	walk_up
# 204 "data/maps/CraterPond/scripts.pory"
	step_end
# 205 "data/maps/CraterPond/scripts.pory"

# 206 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 207 "data/maps/CraterPond/scripts.pory"
	lock
# 208 "data/maps/CraterPond/scripts.pory"
	faceplayer
# 209 "data/maps/CraterPond/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 210 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 211 "data/maps/CraterPond/scripts.pory"
	closemessage
# 212 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 213 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 214 "data/maps/CraterPond/scripts.pory"
	release
# 215 "data/maps/CraterPond/scripts.pory"
	end
# 216 "data/maps/CraterPond/scripts.pory"

# 217 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 218 "data/maps/CraterPond/scripts.pory"
	lockall
# 219 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 220 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 221 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 222 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 223 "data/maps/CraterPond/scripts.pory"
	closemessage
# 224 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 225 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 226 "data/maps/CraterPond/scripts.pory"
	releaseall
# 227 "data/maps/CraterPond/scripts.pory"
	end
# 228 "data/maps/CraterPond/scripts.pory"

# 229 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 230 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 231 "data/maps/CraterPond/scripts.pory"
	release
# 232 "data/maps/CraterPond/scripts.pory"
	end
# 233 "data/maps/CraterPond/scripts.pory"

# 234 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_Rival::
# 235 "data/maps/CraterPond/scripts.pory"
	lockall
# 236 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 237 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 238 "data/maps/CraterPond/scripts.pory"
	setvar VAR_0x8009, 0
# 239 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 240 "data/maps/CraterPond/scripts.pory"
	end
# 241 "data/maps/CraterPond/scripts.pory"

# 242 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 243 "data/maps/CraterPond/scripts.pory"
	lockall
# 244 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 245 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 246 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 247 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 248 "data/maps/CraterPond/scripts.pory"
	setvar VAR_0x8009, 1
# 249 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 250 "data/maps/CraterPond/scripts.pory"
	end
# 251 "data/maps/CraterPond/scripts.pory"

# 252 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 253 "data/maps/CraterPond/scripts.pory"
	lockall
# 254 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 255 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 256 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 257 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 258 "data/maps/CraterPond/scripts.pory"
	setvar VAR_0x8009, 1
# 259 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 260 "data/maps/CraterPond/scripts.pory"
	end
# 261 "data/maps/CraterPond/scripts.pory"

# 262 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 263 "data/maps/CraterPond/scripts.pory"
	lockall
# 264 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 265 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 266 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 267 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 268 "data/maps/CraterPond/scripts.pory"
	setvar VAR_0x8009, 1
# 269 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 270 "data/maps/CraterPond/scripts.pory"
	end
# 271 "data/maps/CraterPond/scripts.pory"

# 272 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 273 "data/maps/CraterPond/scripts.pory"
	checkplayergender
# 274 "data/maps/CraterPond/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 275 "data/maps/CraterPond/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 276 "data/maps/CraterPond/scripts.pory"
	end
# 277 "data/maps/CraterPond/scripts.pory"

# 278 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 279 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 280 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 281 "data/maps/CraterPond/scripts.pory"
	end
# 282 "data/maps/CraterPond/scripts.pory"

# 283 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 284 "data/maps/CraterPond/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 285 "data/maps/CraterPond/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 286 "data/maps/CraterPond/scripts.pory"
	end
# 287 "data/maps/CraterPond/scripts.pory"

# 288 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 289 "data/maps/CraterPond/scripts.pory"
	closemessage
# 290 "data/maps/CraterPond/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 291 "data/maps/CraterPond/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 292 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 293 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 294 "data/maps/CraterPond/scripts.pory"
	removeobject LOCALID_RIVAL
# 295 "data/maps/CraterPond/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 296 "data/maps/CraterPond/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 297 "data/maps/CraterPond/scripts.pory"
	releaseall
# 298 "data/maps/CraterPond/scripts.pory"
	end
# 299 "data/maps/CraterPond/scripts.pory"

# 300 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 301 "data/maps/CraterPond/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 302 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 303 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 304 "data/maps/CraterPond/scripts.pory"
	return
# 305 "data/maps/CraterPond/scripts.pory"

# 306 "data/maps/CraterPond/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 307 "data/maps/CraterPond/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 308 "data/maps/CraterPond/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 309 "data/maps/CraterPond/scripts.pory"
	waitmovement 0
# 310 "data/maps/CraterPond/scripts.pory"
	return
# 311 "data/maps/CraterPond/scripts.pory"

# 312 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 313 "data/maps/CraterPond/scripts.pory"
	walk_left
# 314 "data/maps/CraterPond/scripts.pory"
	walk_left
# 315 "data/maps/CraterPond/scripts.pory"
	step_end
# 316 "data/maps/CraterPond/scripts.pory"

# 317 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 318 "data/maps/CraterPond/scripts.pory"
	walk_left
# 319 "data/maps/CraterPond/scripts.pory"
	step_end
# 320 "data/maps/CraterPond/scripts.pory"

# 321 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 322 "data/maps/CraterPond/scripts.pory"
	face_left
# 323 "data/maps/CraterPond/scripts.pory"
	step_end
# 324 "data/maps/CraterPond/scripts.pory"

# 325 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_RivalExit:
# 326 "data/maps/CraterPond/scripts.pory"
	walk_down
# 327 "data/maps/CraterPond/scripts.pory"
	walk_down
# 328 "data/maps/CraterPond/scripts.pory"
	walk_down
# 329 "data/maps/CraterPond/scripts.pory"
	walk_down
# 330 "data/maps/CraterPond/scripts.pory"
	walk_down
# 331 "data/maps/CraterPond/scripts.pory"
	walk_down
# 332 "data/maps/CraterPond/scripts.pory"
	step_end
# 333 "data/maps/CraterPond/scripts.pory"

# 334 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 335 "data/maps/CraterPond/scripts.pory"
	delay_8
# 336 "data/maps/CraterPond/scripts.pory"
	delay_4
# 337 "data/maps/CraterPond/scripts.pory"
	walk_in_place_faster_down
# 338 "data/maps/CraterPond/scripts.pory"
	step_end
# 339 "data/maps/CraterPond/scripts.pory"

# 340 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 341 "data/maps/CraterPond/scripts.pory"
	delay_8
# 342 "data/maps/CraterPond/scripts.pory"
	walk_right
# 343 "data/maps/CraterPond/scripts.pory"
	step_end
# 344 "data/maps/CraterPond/scripts.pory"

# 345 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_BackUp:
# 346 "data/maps/CraterPond/scripts.pory"
	walk_fast_up
# 347 "data/maps/CraterPond/scripts.pory"
	walk_in_place_faster_left
# 348 "data/maps/CraterPond/scripts.pory"
	lock_facing_direction
# 349 "data/maps/CraterPond/scripts.pory"
	walk_right
# 350 "data/maps/CraterPond/scripts.pory"
	unlock_facing_direction
# 351 "data/maps/CraterPond/scripts.pory"
	step_end
# 352 "data/maps/CraterPond/scripts.pory"

# 353 "data/maps/CraterPond/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 354 "data/maps/CraterPond/scripts.pory"
	walk_down
# 355 "data/maps/CraterPond/scripts.pory"
	walk_left
# 356 "data/maps/CraterPond/scripts.pory"
	step_end
# 357 "data/maps/CraterPond/scripts.pory"

# 358 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 359 "data/maps/CraterPond/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 360 "data/maps/CraterPond/scripts.pory"
	.string "progress.$"
# 361 "data/maps/CraterPond/scripts.pory"

# 362 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 363 "data/maps/CraterPond/scripts.pory"
	.string "Hi!\n"
# 364 "data/maps/CraterPond/scripts.pory"
	.string "I work at a POKéMON MART.\p"
# 365 "data/maps/CraterPond/scripts.pory"
	.string "Can I get you to come with me?$"
# 366 "data/maps/CraterPond/scripts.pory"

# 367 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 368 "data/maps/CraterPond/scripts.pory"
	.string "This is a POKéMON MART.\n"
# 369 "data/maps/CraterPond/scripts.pory"
	.string "Just look for our blue roof.\p"
# 370 "data/maps/CraterPond/scripts.pory"
	.string "We sell a variety of goods including\n"
# 371 "data/maps/CraterPond/scripts.pory"
	.string "POKé BALLS for catching POKéMON.\p"
# 372 "data/maps/CraterPond/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 373 "data/maps/CraterPond/scripts.pory"
	.string "a promotional item.$"
# 374 "data/maps/CraterPond/scripts.pory"

# 375 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 376 "data/maps/CraterPond/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 377 "data/maps/CraterPond/scripts.pory"
	.string "even more useful than a POKéMON CENTER\l"
# 378 "data/maps/CraterPond/scripts.pory"
	.string "in certain situations.$"
# 379 "data/maps/CraterPond/scripts.pory"

# 380 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 381 "data/maps/CraterPond/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 382 "data/maps/CraterPond/scripts.pory"
	.string "Please don't come in here.\p"
# 383 "data/maps/CraterPond/scripts.pory"
	.string "I just discovered the footprints of\n"
# 384 "data/maps/CraterPond/scripts.pory"
	.string "a rare POKéMON!\p"
# 385 "data/maps/CraterPond/scripts.pory"
	.string "Wait until I finish sketching\n"
# 386 "data/maps/CraterPond/scripts.pory"
	.string "them, okay?$"
# 387 "data/maps/CraterPond/scripts.pory"

# 388 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 389 "data/maps/CraterPond/scripts.pory"
	.string "I just discovered the footprints of\n"
# 390 "data/maps/CraterPond/scripts.pory"
	.string "a rare POKéMON!\p"
# 391 "data/maps/CraterPond/scripts.pory"
	.string "Wait until I finish sketching\n"
# 392 "data/maps/CraterPond/scripts.pory"
	.string "them, okay?$"
# 393 "data/maps/CraterPond/scripts.pory"

# 394 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 395 "data/maps/CraterPond/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 396 "data/maps/CraterPond/scripts.pory"
	.string "a rare POKéMON.\p"
# 397 "data/maps/CraterPond/scripts.pory"
	.string "But it turns out they were only my\n"
# 398 "data/maps/CraterPond/scripts.pory"
	.string "own footprints…$"
# 399 "data/maps/CraterPond/scripts.pory"

# 400 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 401 "data/maps/CraterPond/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 402 "data/maps/CraterPond/scripts.pory"
	.string "Over here!\l"
# 403 "data/maps/CraterPond/scripts.pory"
	.string "Let's hurry home!$"
# 404 "data/maps/CraterPond/scripts.pory"

# 405 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 406 "data/maps/CraterPond/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 407 "data/maps/CraterPond/scripts.pory"
	.string "LAB now.\l"
# 408 "data/maps/CraterPond/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 409 "data/maps/CraterPond/scripts.pory"

# 410 "data/maps/CraterPond/scripts.pory"
OldaleTown_Text_TownSign:
# 411 "data/maps/CraterPond/scripts.pory"
	.string "OLDALE TOWN\n"
# 412 "data/maps/CraterPond/scripts.pory"
	.string "“Where things start off scarce.”$"

CraterPond_ExpShare_Text_0:
# 7 "data/maps/CraterPond/scripts.pory"
	.string "All my Pokémon overleveled...$"

CraterPond_ExpShare_Text_1:
# 11 "data/maps/CraterPond/scripts.pory"
	.string "Don't make the same mistake as me.$"
