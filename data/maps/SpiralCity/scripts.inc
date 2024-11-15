# 1 "data/maps/SpiralCity/scripts.pory"

# 2 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/SpiralCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/SpiralCity/scripts.pory"

# 9 "data/maps/SpiralCity/scripts.pory"
SpiralCity_MapScripts::
# 10 "data/maps/SpiralCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/SpiralCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/SpiralCity/scripts.pory"
	.byte 0
# 13 "data/maps/SpiralCity/scripts.pory"

# 14 "data/maps/SpiralCity/scripts.pory"
RustboroCity_OnTransition:
# 15 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_VISITED_SPIRAL_CITY
# 16 "data/maps/SpiralCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 17 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_SPIRAL_CITY_STATE, 6, RustboroCity_EventScript_HideMapNamePopup
# 18 "data/maps/SpiralCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 19 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_SPIRAL_CITY_STATE, 6, RustboroCity_EventScript_PositionScientistForExit
# 20 "data/maps/SpiralCity/scripts.pory"
	end
# 21 "data/maps/SpiralCity/scripts.pory"

# 22 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 23 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 24 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 25 "data/maps/SpiralCity/scripts.pory"
	end
# 26 "data/maps/SpiralCity/scripts.pory"

# 27 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 28 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 29 "data/maps/SpiralCity/scripts.pory"
	end
# 30 "data/maps/SpiralCity/scripts.pory"

# 31 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 32 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/SpiralCity/scripts.pory"
	return
# 34 "data/maps/SpiralCity/scripts.pory"

# 35 "data/maps/SpiralCity/scripts.pory"
RustboroCity_OnFrame:
# 36 "data/maps/SpiralCity/scripts.pory"
	map_script_2 VAR_SPIRAL_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 37 "data/maps/SpiralCity/scripts.pory"
	.2byte 0
# 38 "data/maps/SpiralCity/scripts.pory"

# 39 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 40 "data/maps/SpiralCity/scripts.pory"
	lockall
# 41 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 42 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 43 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/SpiralCity/scripts.pory"
	playse SE_EXIT
# 45 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 46 "data/maps/SpiralCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 47 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 48 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 49 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 51 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 53 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 55 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 57 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 59 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 60 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 61 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 63 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 64 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 65 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 66 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 67 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 69 "data/maps/SpiralCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/SpiralCity/scripts.pory"
	delay 20
# 71 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFasterDown
# 72 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 74 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 75 "data/maps/SpiralCity/scripts.pory"
	delay 20
# 76 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 77 "data/maps/SpiralCity/scripts.pory"

# 78 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 79 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 80 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 81 "data/maps/SpiralCity/scripts.pory"
	delay 10
# 82 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 83 "data/maps/SpiralCity/scripts.pory"

# 84 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 85 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 86 "data/maps/SpiralCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 87 "data/maps/SpiralCity/scripts.pory"
	waitstate
# 88 "data/maps/SpiralCity/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/SpiralCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 90 "data/maps/SpiralCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 91 "data/maps/SpiralCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 92 "data/maps/SpiralCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 93 "data/maps/SpiralCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/SpiralCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/SpiralCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/SpiralCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/SpiralCity/scripts.pory"
	special OpenPokenavForTutorial
# 98 "data/maps/SpiralCity/scripts.pory"
	waitstate
# 99 "data/maps/SpiralCity/scripts.pory"
	delay 20
# 100 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 101 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 102 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 103 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/SpiralCity/scripts.pory"
	playse SE_EXIT
# 105 "data/maps/SpiralCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 106 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 107 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 7
# 108 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 109 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 110 "data/maps/SpiralCity/scripts.pory"
	end
# 111 "data/maps/SpiralCity/scripts.pory"

# 112 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 113 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_down
# 114 "data/maps/SpiralCity/scripts.pory"
	step_end
# 115 "data/maps/SpiralCity/scripts.pory"

# 116 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 117 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 118 "data/maps/SpiralCity/scripts.pory"
	step_end
# 119 "data/maps/SpiralCity/scripts.pory"

# 120 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 121 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 122 "data/maps/SpiralCity/scripts.pory"
	delay_16
# 123 "data/maps/SpiralCity/scripts.pory"
	step_end
# 124 "data/maps/SpiralCity/scripts.pory"

# 125 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 126 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 127 "data/maps/SpiralCity/scripts.pory"
	delay_16
# 128 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 129 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 130 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 131 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 132 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/SpiralCity/scripts.pory"
	delay_16
# 134 "data/maps/SpiralCity/scripts.pory"
	step_end
# 135 "data/maps/SpiralCity/scripts.pory"

# 136 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 137 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 138 "data/maps/SpiralCity/scripts.pory"
	step_end
# 139 "data/maps/SpiralCity/scripts.pory"

# 140 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 141 "data/maps/SpiralCity/scripts.pory"
	lock
# 142 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 143 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 144 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 145 "data/maps/SpiralCity/scripts.pory"
	release
# 146 "data/maps/SpiralCity/scripts.pory"
	end
# 147 "data/maps/SpiralCity/scripts.pory"

# 148 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 149 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 150 "data/maps/SpiralCity/scripts.pory"
	release
# 151 "data/maps/SpiralCity/scripts.pory"
	end
# 152 "data/maps/SpiralCity/scripts.pory"

# 153 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 154 "data/maps/SpiralCity/scripts.pory"
	lock
# 155 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 156 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 157 "data/maps/SpiralCity/scripts.pory"
	release
# 158 "data/maps/SpiralCity/scripts.pory"
	end
# 159 "data/maps/SpiralCity/scripts.pory"

# 160 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 161 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 162 "data/maps/SpiralCity/scripts.pory"
	end
# 163 "data/maps/SpiralCity/scripts.pory"

# 164 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 165 "data/maps/SpiralCity/scripts.pory"
	lock
# 166 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 167 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 168 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 169 "data/maps/SpiralCity/scripts.pory"
	release
# 170 "data/maps/SpiralCity/scripts.pory"
	end
# 171 "data/maps/SpiralCity/scripts.pory"

# 172 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 173 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 174 "data/maps/SpiralCity/scripts.pory"
	release
# 175 "data/maps/SpiralCity/scripts.pory"
	end
# 176 "data/maps/SpiralCity/scripts.pory"

# 177 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 178 "data/maps/SpiralCity/scripts.pory"
	lock
# 179 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 180 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 181 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 182 "data/maps/SpiralCity/scripts.pory"
	release
# 183 "data/maps/SpiralCity/scripts.pory"
	end
# 184 "data/maps/SpiralCity/scripts.pory"

# 185 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 186 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 187 "data/maps/SpiralCity/scripts.pory"
	release
# 188 "data/maps/SpiralCity/scripts.pory"
	end
# 189 "data/maps/SpiralCity/scripts.pory"

# 190 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 191 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 192 "data/maps/SpiralCity/scripts.pory"
	end
# 193 "data/maps/SpiralCity/scripts.pory"

# 194 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 195 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 196 "data/maps/SpiralCity/scripts.pory"
	end
# 197 "data/maps/SpiralCity/scripts.pory"

# 198 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 199 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 200 "data/maps/SpiralCity/scripts.pory"
	end
# 201 "data/maps/SpiralCity/scripts.pory"

# 202 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 203 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 204 "data/maps/SpiralCity/scripts.pory"
	end
# 205 "data/maps/SpiralCity/scripts.pory"

# 206 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 207 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 208 "data/maps/SpiralCity/scripts.pory"
	end
# 209 "data/maps/SpiralCity/scripts.pory"

# 210 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 211 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 212 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 213 "data/maps/SpiralCity/scripts.pory"
	end
# 214 "data/maps/SpiralCity/scripts.pory"

# 215 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 216 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 217 "data/maps/SpiralCity/scripts.pory"
	end
# 218 "data/maps/SpiralCity/scripts.pory"

# 219 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 220 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 221 "data/maps/SpiralCity/scripts.pory"
	end
# 222 "data/maps/SpiralCity/scripts.pory"

# 223 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 224 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 225 "data/maps/SpiralCity/scripts.pory"
	end
# 226 "data/maps/SpiralCity/scripts.pory"

# 227 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 228 "data/maps/SpiralCity/scripts.pory"
	lock
# 229 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 230 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 231 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 232 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 233 "data/maps/SpiralCity/scripts.pory"
	release
# 234 "data/maps/SpiralCity/scripts.pory"
	end
# 235 "data/maps/SpiralCity/scripts.pory"

# 236 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 237 "data/maps/SpiralCity/scripts.pory"
	lock
# 238 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 239 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 240 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 241 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/SpiralCity/scripts.pory"
	release
# 243 "data/maps/SpiralCity/scripts.pory"
	end
# 244 "data/maps/SpiralCity/scripts.pory"

# 245 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 246 "data/maps/SpiralCity/scripts.pory"
	lock
# 247 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 248 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 249 "data/maps/SpiralCity/scripts.pory"
	release
# 250 "data/maps/SpiralCity/scripts.pory"
	end
# 251 "data/maps/SpiralCity/scripts.pory"

# 252 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 253 "data/maps/SpiralCity/scripts.pory"
	lockall
# 254 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 255 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 256 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 0
# 257 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 258 "data/maps/SpiralCity/scripts.pory"
	end
# 259 "data/maps/SpiralCity/scripts.pory"

# 260 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 261 "data/maps/SpiralCity/scripts.pory"
	lockall
# 262 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 263 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 264 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 1
# 265 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 266 "data/maps/SpiralCity/scripts.pory"
	end
# 267 "data/maps/SpiralCity/scripts.pory"

# 268 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 269 "data/maps/SpiralCity/scripts.pory"
	lockall
# 270 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 271 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 272 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 2
# 273 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 274 "data/maps/SpiralCity/scripts.pory"
	end
# 275 "data/maps/SpiralCity/scripts.pory"

# 276 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 277 "data/maps/SpiralCity/scripts.pory"
	lockall
# 278 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 279 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 280 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 3
# 281 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 282 "data/maps/SpiralCity/scripts.pory"
	end
# 283 "data/maps/SpiralCity/scripts.pory"

# 284 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 285 "data/maps/SpiralCity/scripts.pory"
	lockall
# 286 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 287 "data/maps/SpiralCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 288 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8004, 4
# 289 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 290 "data/maps/SpiralCity/scripts.pory"
	end
# 291 "data/maps/SpiralCity/scripts.pory"

# 292 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 293 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 294 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 295 "data/maps/SpiralCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 296 "data/maps/SpiralCity/scripts.pory"
	addobject LOCALID_GRUNT
# 297 "data/maps/SpiralCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 298 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 299 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 300 "data/maps/SpiralCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 301 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 302 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 303 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 304 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 305 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 306 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/SpiralCity/scripts.pory"
	fadedefaultbgm
# 308 "data/maps/SpiralCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 309 "data/maps/SpiralCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 310 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 311 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 312 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 2
# 313 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 314 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 315 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 316 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 317 "data/maps/SpiralCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 318 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 319 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 320 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 321 "data/maps/SpiralCity/scripts.pory"
	end
# 322 "data/maps/SpiralCity/scripts.pory"

# 323 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 324 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 325 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 326 "data/maps/SpiralCity/scripts.pory"
	return
# 327 "data/maps/SpiralCity/scripts.pory"

# 328 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 329 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 330 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 331 "data/maps/SpiralCity/scripts.pory"
	return
# 332 "data/maps/SpiralCity/scripts.pory"

# 333 "data/maps/SpiralCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 334 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 335 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 336 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/SpiralCity/scripts.pory"
	return
# 338 "data/maps/SpiralCity/scripts.pory"

# 339 "data/maps/SpiralCity/scripts.pory"
@ Unused, see above
# 340 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 341 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 342 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/SpiralCity/scripts.pory"
	return
# 344 "data/maps/SpiralCity/scripts.pory"

# 345 "data/maps/SpiralCity/scripts.pory"
@ Unused, see above
# 346 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 347 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 348 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/SpiralCity/scripts.pory"
	return
# 350 "data/maps/SpiralCity/scripts.pory"

# 351 "data/maps/SpiralCity/scripts.pory"
@ Unused, see above
# 352 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 353 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 354 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/SpiralCity/scripts.pory"
	return
# 356 "data/maps/SpiralCity/scripts.pory"

# 357 "data/maps/SpiralCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 358 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 359 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 360 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 362 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 363 "data/maps/SpiralCity/scripts.pory"
	return
# 364 "data/maps/SpiralCity/scripts.pory"

# 365 "data/maps/SpiralCity/scripts.pory"
@ Unused
# 366 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 367 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 368 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 369 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 370 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 371 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 372 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 373 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 374 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 375 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 376 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 377 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 378 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/SpiralCity/scripts.pory"
	step_end
# 385 "data/maps/SpiralCity/scripts.pory"

# 386 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 387 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 388 "data/maps/SpiralCity/scripts.pory"
	walk_faster_right
# 389 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 390 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 391 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 392 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 393 "data/maps/SpiralCity/scripts.pory"
	walk_fast_right
# 394 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 395 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 396 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 397 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 398 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/SpiralCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/SpiralCity/scripts.pory"
	step_end
# 404 "data/maps/SpiralCity/scripts.pory"

# 405 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 406 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 407 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 408 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 409 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 410 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 411 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 412 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_faster_up
# 413 "data/maps/SpiralCity/scripts.pory"
	step_end
# 414 "data/maps/SpiralCity/scripts.pory"

# 415 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 416 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 417 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 418 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 419 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 420 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 421 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 422 "data/maps/SpiralCity/scripts.pory"
	walk_up
# 423 "data/maps/SpiralCity/scripts.pory"
	step_end
# 424 "data/maps/SpiralCity/scripts.pory"

# 425 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 426 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 427 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 428 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 429 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 430 "data/maps/SpiralCity/scripts.pory"
	step_end
# 431 "data/maps/SpiralCity/scripts.pory"

# 432 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 433 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 434 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 435 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 436 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 437 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 438 "data/maps/SpiralCity/scripts.pory"
	step_end
# 439 "data/maps/SpiralCity/scripts.pory"

# 440 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 441 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 442 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 443 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 444 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 445 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 446 "data/maps/SpiralCity/scripts.pory"
	step_end
# 447 "data/maps/SpiralCity/scripts.pory"

# 448 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 449 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 450 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 451 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 452 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 453 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 454 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 455 "data/maps/SpiralCity/scripts.pory"
	step_end
# 456 "data/maps/SpiralCity/scripts.pory"

# 457 "data/maps/SpiralCity/scripts.pory"
@ Functionally unused
# 458 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 459 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 460 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 461 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 462 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 463 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 464 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 465 "data/maps/SpiralCity/scripts.pory"
	walk_in_place_faster_down
# 466 "data/maps/SpiralCity/scripts.pory"
	step_end
# 467 "data/maps/SpiralCity/scripts.pory"

# 468 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 469 "data/maps/SpiralCity/scripts.pory"
	lock
# 470 "data/maps/SpiralCity/scripts.pory"
	faceplayer
# 471 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 472 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 473 "data/maps/SpiralCity/scripts.pory"
	release
# 474 "data/maps/SpiralCity/scripts.pory"
	end
# 475 "data/maps/SpiralCity/scripts.pory"

# 476 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 477 "data/maps/SpiralCity/scripts.pory"
	waitse
# 478 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 479 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 480 "data/maps/SpiralCity/scripts.pory"
	end
# 481 "data/maps/SpiralCity/scripts.pory"

# 482 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 483 "data/maps/SpiralCity/scripts.pory"
	lockall
# 484 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 485 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 486 "data/maps/SpiralCity/scripts.pory"
	end
# 487 "data/maps/SpiralCity/scripts.pory"

# 488 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 489 "data/maps/SpiralCity/scripts.pory"
	lockall
# 490 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 491 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 492 "data/maps/SpiralCity/scripts.pory"
	end
# 493 "data/maps/SpiralCity/scripts.pory"

# 494 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 495 "data/maps/SpiralCity/scripts.pory"
	lockall
# 496 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 497 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 498 "data/maps/SpiralCity/scripts.pory"
	end
# 499 "data/maps/SpiralCity/scripts.pory"

# 500 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 501 "data/maps/SpiralCity/scripts.pory"
	lockall
# 502 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 503 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 504 "data/maps/SpiralCity/scripts.pory"
	end
# 505 "data/maps/SpiralCity/scripts.pory"

# 506 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 507 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 508 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 509 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 510 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 511 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 512 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 3
# 513 "data/maps/SpiralCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 514 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 515 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 516 "data/maps/SpiralCity/scripts.pory"
	end
# 517 "data/maps/SpiralCity/scripts.pory"

# 518 "data/maps/SpiralCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 519 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 520 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 521 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 522 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 523 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 524 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 525 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 526 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 527 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 528 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 529 "data/maps/SpiralCity/scripts.pory"
	return
# 530 "data/maps/SpiralCity/scripts.pory"

# 531 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 532 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 533 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 535 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 536 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 538 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 540 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/SpiralCity/scripts.pory"
	return
# 542 "data/maps/SpiralCity/scripts.pory"

# 543 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 544 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 545 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 546 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 547 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 548 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 550 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 552 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/SpiralCity/scripts.pory"
	return
# 554 "data/maps/SpiralCity/scripts.pory"

# 555 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 556 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 557 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 559 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 560 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 562 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 564 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 566 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 567 "data/maps/SpiralCity/scripts.pory"
	return
# 568 "data/maps/SpiralCity/scripts.pory"

# 569 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 570 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 571 "data/maps/SpiralCity/scripts.pory"
	step_end
# 572 "data/maps/SpiralCity/scripts.pory"

# 573 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 574 "data/maps/SpiralCity/scripts.pory"
	lockall
# 575 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 576 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 577 "data/maps/SpiralCity/scripts.pory"
	end
# 578 "data/maps/SpiralCity/scripts.pory"

# 579 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 580 "data/maps/SpiralCity/scripts.pory"
	lockall
# 581 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 582 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 583 "data/maps/SpiralCity/scripts.pory"
	end
# 584 "data/maps/SpiralCity/scripts.pory"

# 585 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 586 "data/maps/SpiralCity/scripts.pory"
	lockall
# 587 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 588 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 589 "data/maps/SpiralCity/scripts.pory"
	end
# 590 "data/maps/SpiralCity/scripts.pory"

# 591 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 592 "data/maps/SpiralCity/scripts.pory"
	lockall
# 593 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 594 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 595 "data/maps/SpiralCity/scripts.pory"
	end
# 596 "data/maps/SpiralCity/scripts.pory"

# 597 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 598 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 599 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 600 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 601 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 602 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 603 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 604 "data/maps/SpiralCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 605 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 606 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 607 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 608 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 609 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 610 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 5
# 611 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 612 "data/maps/SpiralCity/scripts.pory"
	waitstate
# 613 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 614 "data/maps/SpiralCity/scripts.pory"
	end
# 615 "data/maps/SpiralCity/scripts.pory"

# 616 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 617 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 618 "data/maps/SpiralCity/scripts.pory"
	return
# 619 "data/maps/SpiralCity/scripts.pory"

# 620 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 621 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 622 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 623 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 624 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 625 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 627 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 629 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SpiralCity/scripts.pory"
	return
# 631 "data/maps/SpiralCity/scripts.pory"

# 632 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 633 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 634 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 636 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 637 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 639 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 641 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/SpiralCity/scripts.pory"
	return
# 643 "data/maps/SpiralCity/scripts.pory"

# 644 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 645 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 646 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 648 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 649 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 651 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 653 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/SpiralCity/scripts.pory"
	return
# 655 "data/maps/SpiralCity/scripts.pory"

# 656 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 657 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 658 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 660 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 661 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 663 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 665 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 667 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/SpiralCity/scripts.pory"
	return
# 669 "data/maps/SpiralCity/scripts.pory"

# 670 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 671 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 672 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 673 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 674 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 675 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 677 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 678 "data/maps/SpiralCity/scripts.pory"
	return
# 679 "data/maps/SpiralCity/scripts.pory"

# 680 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 681 "data/maps/SpiralCity/scripts.pory"
	lockall
# 682 "data/maps/SpiralCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 683 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 684 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 686 "data/maps/SpiralCity/scripts.pory"

# 687 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 688 "data/maps/SpiralCity/scripts.pory"
	checkplayergender
# 689 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 690 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 691 "data/maps/SpiralCity/scripts.pory"
	return
# 692 "data/maps/SpiralCity/scripts.pory"

# 693 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 694 "data/maps/SpiralCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 695 "data/maps/SpiralCity/scripts.pory"
	return
# 696 "data/maps/SpiralCity/scripts.pory"

# 697 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 698 "data/maps/SpiralCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 699 "data/maps/SpiralCity/scripts.pory"
	return
# 700 "data/maps/SpiralCity/scripts.pory"

# 701 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 702 "data/maps/SpiralCity/scripts.pory"
	lockall
# 703 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 704 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 705 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 707 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 708 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 709 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 710 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 712 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 713 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 714 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 715 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 716 "data/maps/SpiralCity/scripts.pory"

# 717 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 718 "data/maps/SpiralCity/scripts.pory"
	lockall
# 719 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 720 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 721 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 723 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 724 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 725 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 726 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 727 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 728 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 730 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 731 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 732 "data/maps/SpiralCity/scripts.pory"

# 733 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 734 "data/maps/SpiralCity/scripts.pory"
	lockall
# 735 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 736 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 737 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 738 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 739 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 740 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 741 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 742 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 743 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 744 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 745 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 746 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 747 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 748 "data/maps/SpiralCity/scripts.pory"

# 749 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 750 "data/maps/SpiralCity/scripts.pory"
	lockall
# 751 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 752 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 753 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 754 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 755 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 756 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 757 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 758 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 759 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 760 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 761 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 762 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 763 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 764 "data/maps/SpiralCity/scripts.pory"

# 765 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 766 "data/maps/SpiralCity/scripts.pory"
	lockall
# 767 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 768 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 769 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 770 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 771 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 772 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 773 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 774 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 775 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 776 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 777 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 778 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 780 "data/maps/SpiralCity/scripts.pory"

# 781 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 782 "data/maps/SpiralCity/scripts.pory"
	lockall
# 783 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 784 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 785 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 787 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 788 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 789 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 790 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 792 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 794 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 796 "data/maps/SpiralCity/scripts.pory"

# 797 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 798 "data/maps/SpiralCity/scripts.pory"
	lockall
# 799 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 800 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 801 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 803 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 804 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 806 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 808 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 810 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 812 "data/maps/SpiralCity/scripts.pory"

# 813 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 814 "data/maps/SpiralCity/scripts.pory"
	lockall
# 815 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 816 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 817 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/SpiralCity/scripts.pory"
	playse SE_PIN
# 819 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 820 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 821 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 822 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/SpiralCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 824 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 825 "data/maps/SpiralCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 826 "data/maps/SpiralCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 828 "data/maps/SpiralCity/scripts.pory"

# 829 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 830 "data/maps/SpiralCity/scripts.pory"
	checkplayergender
# 831 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 832 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 833 "data/maps/SpiralCity/scripts.pory"
	end
# 834 "data/maps/SpiralCity/scripts.pory"

# 835 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 836 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 837 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 838 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 839 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 840 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 841 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 842 "data/maps/SpiralCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 843 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 844 "data/maps/SpiralCity/scripts.pory"
	waitfanfare
# 845 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 846 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 847 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 848 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 8
# 849 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 850 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8008, 0
# 851 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 852 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 853 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 854 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 855 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 856 "data/maps/SpiralCity/scripts.pory"
	end
# 857 "data/maps/SpiralCity/scripts.pory"

# 858 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 859 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_0x8008, 1
# 860 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 861 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 862 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 863 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 864 "data/maps/SpiralCity/scripts.pory"
	end
# 865 "data/maps/SpiralCity/scripts.pory"

# 866 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 867 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 868 "data/maps/SpiralCity/scripts.pory"
	switch VAR_STARTER_MON
# 869 "data/maps/SpiralCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 870 "data/maps/SpiralCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 871 "data/maps/SpiralCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 872 "data/maps/SpiralCity/scripts.pory"
	end
# 873 "data/maps/SpiralCity/scripts.pory"

# 874 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 875 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 876 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 877 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 878 "data/maps/SpiralCity/scripts.pory"
	end
# 879 "data/maps/SpiralCity/scripts.pory"

# 880 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 881 "data/maps/SpiralCity/scripts.pory"
	savebgm MUS_DUMMY
# 882 "data/maps/SpiralCity/scripts.pory"
	fadedefaultbgm
# 883 "data/maps/SpiralCity/scripts.pory"
	return
# 884 "data/maps/SpiralCity/scripts.pory"

# 885 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 886 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 887 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 888 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 889 "data/maps/SpiralCity/scripts.pory"
	end
# 890 "data/maps/SpiralCity/scripts.pory"

# 891 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 892 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 893 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 894 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 895 "data/maps/SpiralCity/scripts.pory"
	end
# 896 "data/maps/SpiralCity/scripts.pory"

# 897 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 898 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 899 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 900 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 901 "data/maps/SpiralCity/scripts.pory"
	end
# 902 "data/maps/SpiralCity/scripts.pory"

# 903 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 904 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 905 "data/maps/SpiralCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 906 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 907 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 908 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 909 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 910 "data/maps/SpiralCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 911 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 912 "data/maps/SpiralCity/scripts.pory"
	waitfanfare
# 913 "data/maps/SpiralCity/scripts.pory"
	closemessage
# 914 "data/maps/SpiralCity/scripts.pory"
	delay 30
# 915 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 916 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 8
# 917 "data/maps/SpiralCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 918 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 919 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 920 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 921 "data/maps/SpiralCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 922 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 923 "data/maps/SpiralCity/scripts.pory"
	end
# 924 "data/maps/SpiralCity/scripts.pory"

# 925 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 926 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 927 "data/maps/SpiralCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 928 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 929 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 930 "data/maps/SpiralCity/scripts.pory"
	end
# 931 "data/maps/SpiralCity/scripts.pory"

# 932 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 933 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 934 "data/maps/SpiralCity/scripts.pory"
	switch VAR_STARTER_MON
# 935 "data/maps/SpiralCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 936 "data/maps/SpiralCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 937 "data/maps/SpiralCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 938 "data/maps/SpiralCity/scripts.pory"
	end
# 939 "data/maps/SpiralCity/scripts.pory"

# 940 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 941 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 942 "data/maps/SpiralCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 943 "data/maps/SpiralCity/scripts.pory"
	releaseall
# 944 "data/maps/SpiralCity/scripts.pory"
	end
# 945 "data/maps/SpiralCity/scripts.pory"

# 946 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 947 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 948 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 949 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 950 "data/maps/SpiralCity/scripts.pory"
	end
# 951 "data/maps/SpiralCity/scripts.pory"

# 952 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 953 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 954 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 955 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 956 "data/maps/SpiralCity/scripts.pory"
	end
# 957 "data/maps/SpiralCity/scripts.pory"

# 958 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 959 "data/maps/SpiralCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 960 "data/maps/SpiralCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 961 "data/maps/SpiralCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 962 "data/maps/SpiralCity/scripts.pory"
	end
# 963 "data/maps/SpiralCity/scripts.pory"

# 964 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 965 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 966 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 967 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 968 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 969 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 970 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 971 "data/maps/SpiralCity/scripts.pory"
	step_end
# 972 "data/maps/SpiralCity/scripts.pory"

# 973 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 974 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 975 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 976 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 977 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 978 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 979 "data/maps/SpiralCity/scripts.pory"
	step_end
# 980 "data/maps/SpiralCity/scripts.pory"

# 981 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 982 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 983 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 984 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 985 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 986 "data/maps/SpiralCity/scripts.pory"
	step_end
# 987 "data/maps/SpiralCity/scripts.pory"

# 988 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 989 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 990 "data/maps/SpiralCity/scripts.pory"
	walk_left
# 991 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 992 "data/maps/SpiralCity/scripts.pory"
	step_end
# 993 "data/maps/SpiralCity/scripts.pory"

# 994 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 995 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 996 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 997 "data/maps/SpiralCity/scripts.pory"
	step_end
# 998 "data/maps/SpiralCity/scripts.pory"

# 999 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1000 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1001 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1002 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1003 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1004 "data/maps/SpiralCity/scripts.pory"

# 1005 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1006 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1007 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1008 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1009 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1010 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1011 "data/maps/SpiralCity/scripts.pory"

# 1012 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1013 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1014 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1015 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1016 "data/maps/SpiralCity/scripts.pory"
	walk_right
# 1017 "data/maps/SpiralCity/scripts.pory"
	walk_down
# 1018 "data/maps/SpiralCity/scripts.pory"
	step_end
# 1019 "data/maps/SpiralCity/scripts.pory"

# 1020 "data/maps/SpiralCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1021 "data/maps/SpiralCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1022 "data/maps/SpiralCity/scripts.pory"
	end
# 1023 "data/maps/SpiralCity/scripts.pory"

# 1024 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1025 "data/maps/SpiralCity/scripts.pory"
	.string "The DEVON CORPORATION…\n"
# 1026 "data/maps/SpiralCity/scripts.pory"
	.string "We all just shorten it to DEVON.\p"
# 1027 "data/maps/SpiralCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1028 "data/maps/SpiralCity/scripts.pory"
	.string "convenient products.$"
# 1029 "data/maps/SpiralCity/scripts.pory"

# 1030 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1031 "data/maps/SpiralCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1032 "data/maps/SpiralCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1033 "data/maps/SpiralCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1034 "data/maps/SpiralCity/scripts.pory"

# 1035 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1036 "data/maps/SpiralCity/scripts.pory"
	.string "Have you taken the POKéMON GYM\n"
# 1037 "data/maps/SpiralCity/scripts.pory"
	.string "challenge?\p"
# 1038 "data/maps/SpiralCity/scripts.pory"
	.string "When you get that shiny GYM BADGE\n"
# 1039 "data/maps/SpiralCity/scripts.pory"
	.string "in hand, I guess TRAINERS begin to\l"
# 1040 "data/maps/SpiralCity/scripts.pory"
	.string "realize what is required of them.$"
# 1041 "data/maps/SpiralCity/scripts.pory"

# 1042 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1043 "data/maps/SpiralCity/scripts.pory"
	.string "Hey, that's RUSTBORO's GYM BADGE!\p"
# 1044 "data/maps/SpiralCity/scripts.pory"
	.string "Out of all the POKéMON GYM BADGES,\n"
# 1045 "data/maps/SpiralCity/scripts.pory"
	.string "RUSTBORO's is the coolest, I'd say.$"
# 1046 "data/maps/SpiralCity/scripts.pory"

# 1047 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1048 "data/maps/SpiralCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1049 "data/maps/SpiralCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1050 "data/maps/SpiralCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1051 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL?$"
# 1052 "data/maps/SpiralCity/scripts.pory"

# 1053 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1054 "data/maps/SpiralCity/scripts.pory"
	.string "I challenged the GYM LEADER, but…\p"
# 1055 "data/maps/SpiralCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1056 "data/maps/SpiralCity/scripts.pory"
	.string "my FIRE-type POKéMON…\p"
# 1057 "data/maps/SpiralCity/scripts.pory"
	.string "FIRE-type POKéMON don't match up\n"
# 1058 "data/maps/SpiralCity/scripts.pory"
	.string "well against ROCK-type POKéMON…$"
# 1059 "data/maps/SpiralCity/scripts.pory"

# 1060 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1061 "data/maps/SpiralCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1062 "data/maps/SpiralCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1063 "data/maps/SpiralCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1064 "data/maps/SpiralCity/scripts.pory"
	.string "so often.$"
# 1065 "data/maps/SpiralCity/scripts.pory"

# 1066 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1067 "data/maps/SpiralCity/scripts.pory"
	.string "The old sailor MR. BRINEY lives in\n"
# 1068 "data/maps/SpiralCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1069 "data/maps/SpiralCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1070 "data/maps/SpiralCity/scripts.pory"
	.string "SLATEPORT for his pet, PEEKO.\p"
# 1071 "data/maps/SpiralCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1072 "data/maps/SpiralCity/scripts.pory"
	.string "that PEEKO.$"
# 1073 "data/maps/SpiralCity/scripts.pory"

# 1074 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1075 "data/maps/SpiralCity/scripts.pory"
	.string "Wow, you have POKéMON with you, too.\p"
# 1076 "data/maps/SpiralCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1077 "data/maps/SpiralCity/scripts.pory"
	.string "places with POKéMON, too.$"
# 1078 "data/maps/SpiralCity/scripts.pory"

# 1079 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1080 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL!\p"
# 1081 "data/maps/SpiralCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1082 "data/maps/SpiralCity/scripts.pory"
	.string "to catch rare POKéMON easily?$"
# 1083 "data/maps/SpiralCity/scripts.pory"

# 1084 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1085 "data/maps/SpiralCity/scripts.pory"
	.string "If a POKéMON gains experience in\n"
# 1086 "data/maps/SpiralCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1087 "data/maps/SpiralCity/scripts.pory"
	.string "the way it looks.$"
# 1088 "data/maps/SpiralCity/scripts.pory"

# 1089 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1090 "data/maps/SpiralCity/scripts.pory"
	.string "A POKéMON changes shape?\n"
# 1091 "data/maps/SpiralCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1092 "data/maps/SpiralCity/scripts.pory"

# 1093 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1094 "data/maps/SpiralCity/scripts.pory"
	.string "A POKéMON you get in a trade from\n"
# 1095 "data/maps/SpiralCity/scripts.pory"
	.string "someone grows fast.\p"
# 1096 "data/maps/SpiralCity/scripts.pory"
	.string "But if you don't have certain GYM\n"
# 1097 "data/maps/SpiralCity/scripts.pory"
	.string "BADGES, it may not obey you…$"
# 1098 "data/maps/SpiralCity/scripts.pory"

# 1099 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1100 "data/maps/SpiralCity/scripts.pory"
	.string "Get out!\n"
# 1101 "data/maps/SpiralCity/scripts.pory"
	.string "Out of the way!$"
# 1102 "data/maps/SpiralCity/scripts.pory"

# 1103 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1104 "data/maps/SpiralCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1105 "data/maps/SpiralCity/scripts.pory"
	.string "Don't take my GOODS!$"
# 1106 "data/maps/SpiralCity/scripts.pory"

# 1107 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1108 "data/maps/SpiralCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1109 "data/maps/SpiralCity/scripts.pory"
	.string "You're that fantastic TRAINER who\n"
# 1110 "data/maps/SpiralCity/scripts.pory"
	.string "helped me in PETALBURG WOODS!\p"
# 1111 "data/maps/SpiralCity/scripts.pory"
	.string "Help me! I was robbed by TEAM AQUA!\n"
# 1112 "data/maps/SpiralCity/scripts.pory"
	.string "I have to get the DEVON GOODS back!\p"
# 1113 "data/maps/SpiralCity/scripts.pory"
	.string "If I don't…\n"
# 1114 "data/maps/SpiralCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1115 "data/maps/SpiralCity/scripts.pory"

# 1116 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1117 "data/maps/SpiralCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1118 "data/maps/SpiralCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1119 "data/maps/SpiralCity/scripts.pory"

# 1120 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1121 "data/maps/SpiralCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1122 "data/maps/SpiralCity/scripts.pory"
	.string "The DEVON GOODS?\p"
# 1123 "data/maps/SpiralCity/scripts.pory"
	.string "You did!\n"
# 1124 "data/maps/SpiralCity/scripts.pory"
	.string "You got them back!\p"
# 1125 "data/maps/SpiralCity/scripts.pory"
	.string "You really are a great TRAINER!\p"
# 1126 "data/maps/SpiralCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1127 "data/maps/SpiralCity/scripts.pory"
	.string "another GREAT BALL!$"
# 1128 "data/maps/SpiralCity/scripts.pory"

# 1129 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1130 "data/maps/SpiralCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1131 "data/maps/SpiralCity/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 1132 "data/maps/SpiralCity/scripts.pory"

# 1133 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1134 "data/maps/SpiralCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1135 "data/maps/SpiralCity/scripts.pory"
	.string "Please come with me!$"
# 1136 "data/maps/SpiralCity/scripts.pory"

# 1137 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1138 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1139 "data/maps/SpiralCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1140 "data/maps/SpiralCity/scripts.pory"
	.string "on your POKéNAV!\p"
# 1141 "data/maps/SpiralCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1142 "data/maps/SpiralCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1143 "data/maps/SpiralCity/scripts.pory"
	.string "… … … … … …$"
# 1144 "data/maps/SpiralCity/scripts.pory"

# 1145 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1146 "data/maps/SpiralCity/scripts.pory"
	.string "Registered MAY\n"
# 1147 "data/maps/SpiralCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1148 "data/maps/SpiralCity/scripts.pory"

# 1149 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1150 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1151 "data/maps/SpiralCity/scripts.pory"
	.string "MR. BRINEY in PETALBURG WOODS.\p"
# 1152 "data/maps/SpiralCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1153 "data/maps/SpiralCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1154 "data/maps/SpiralCity/scripts.pory"
	.string "How's your POKéDEX coming along,\n"
# 1155 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1156 "data/maps/SpiralCity/scripts.pory"
	.string "So…\n"
# 1157 "data/maps/SpiralCity/scripts.pory"
	.string "How about a little battle?$"
# 1158 "data/maps/SpiralCity/scripts.pory"

# 1159 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1160 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1161 "data/maps/SpiralCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1162 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON very much?\p"
# 1163 "data/maps/SpiralCity/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1164 "data/maps/SpiralCity/scripts.pory"

# 1165 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1166 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1167 "data/maps/SpiralCity/scripts.pory"
	.string "How about a little battle here?$"
# 1168 "data/maps/SpiralCity/scripts.pory"

# 1169 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1170 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1171 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1172 "data/maps/SpiralCity/scripts.pory"

# 1173 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1174 "data/maps/SpiralCity/scripts.pory"
	.string "Yikes!\n"
# 1175 "data/maps/SpiralCity/scripts.pory"
	.string "You're better than I expected!$"
# 1176 "data/maps/SpiralCity/scripts.pory"

# 1177 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1178 "data/maps/SpiralCity/scripts.pory"
	.string "MAY: Oh, by the way, MR. BRINEY, who\n"
# 1179 "data/maps/SpiralCity/scripts.pory"
	.string "I just passed…\p"
# 1180 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1181 "data/maps/SpiralCity/scripts.pory"
	.string "might not know this, but MR. BRINEY\l"
# 1182 "data/maps/SpiralCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1183 "data/maps/SpiralCity/scripts.pory"

# 1184 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1185 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1186 "data/maps/SpiralCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1187 "data/maps/SpiralCity/scripts.pory"
	.string "on your POKéNAV! Cool!\p"
# 1188 "data/maps/SpiralCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1189 "data/maps/SpiralCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1190 "data/maps/SpiralCity/scripts.pory"
	.string "… … … … … …$"
# 1191 "data/maps/SpiralCity/scripts.pory"

# 1192 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1193 "data/maps/SpiralCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1194 "data/maps/SpiralCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1195 "data/maps/SpiralCity/scripts.pory"

# 1196 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1197 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1198 "data/maps/SpiralCity/scripts.pory"
	.string "by MR. BRINEY in PETALBURG WOODS.\p"
# 1199 "data/maps/SpiralCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1200 "data/maps/SpiralCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1201 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}, how's your POKéDEX?\n"
# 1202 "data/maps/SpiralCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1203 "data/maps/SpiralCity/scripts.pory"
	.string "Mine rules.\p"
# 1204 "data/maps/SpiralCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1205 "data/maps/SpiralCity/scripts.pory"
	.string "far you've progressed?$"
# 1206 "data/maps/SpiralCity/scripts.pory"

# 1207 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1208 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1209 "data/maps/SpiralCity/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1210 "data/maps/SpiralCity/scripts.pory"

# 1211 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1212 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1213 "data/maps/SpiralCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1214 "data/maps/SpiralCity/scripts.pory"

# 1215 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1216 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1217 "data/maps/SpiralCity/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1218 "data/maps/SpiralCity/scripts.pory"

# 1219 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1220 "data/maps/SpiralCity/scripts.pory"
	.string "Hmm…\n"
# 1221 "data/maps/SpiralCity/scripts.pory"
	.string "You're pretty good.$"
# 1222 "data/maps/SpiralCity/scripts.pory"

# 1223 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1224 "data/maps/SpiralCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1225 "data/maps/SpiralCity/scripts.pory"
	.string "MR. BRINEY? The guy I just passed?\p"
# 1226 "data/maps/SpiralCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1227 "data/maps/SpiralCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1228 "data/maps/SpiralCity/scripts.pory"
	.string "MR. BRINEY was once a great sailor.$"
# 1229 "data/maps/SpiralCity/scripts.pory"

# 1230 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1231 "data/maps/SpiralCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1232 "data/maps/SpiralCity/scripts.pory"
	.string "completion!”\p"
# 1233 "data/maps/SpiralCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1234 "data/maps/SpiralCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1235 "data/maps/SpiralCity/scripts.pory"
	.string "across it in red paint…$"
# 1236 "data/maps/SpiralCity/scripts.pory"

# 1237 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1238 "data/maps/SpiralCity/scripts.pory"
	.string "DEVON CORPORATION\p"
# 1239 "data/maps/SpiralCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1240 "data/maps/SpiralCity/scripts.pory"
	.string "it all.”$"
# 1241 "data/maps/SpiralCity/scripts.pory"

# 1242 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1243 "data/maps/SpiralCity/scripts.pory"
	.string "RUSTBORO CITY POKéMON GYM\n"
# 1244 "data/maps/SpiralCity/scripts.pory"
	.string "LEADER: ROXANNE\p"
# 1245 "data/maps/SpiralCity/scripts.pory"
	.string "“The ROCK-loving honors student!”$"
# 1246 "data/maps/SpiralCity/scripts.pory"

# 1247 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1248 "data/maps/SpiralCity/scripts.pory"
	.string "DEVON CORP. BRANCH OFFICE\p"
# 1249 "data/maps/SpiralCity/scripts.pory"
	.string "“Access limited to DEVON employees\n"
# 1250 "data/maps/SpiralCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1251 "data/maps/SpiralCity/scripts.pory"

# 1252 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1253 "data/maps/SpiralCity/scripts.pory"
	.string "RUSTBORO CITY\p"
# 1254 "data/maps/SpiralCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1255 "data/maps/SpiralCity/scripts.pory"
	.string "nature and science.”$"
# 1256 "data/maps/SpiralCity/scripts.pory"

# 1257 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1258 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON TRAINER'S SCHOOL\p"
# 1259 "data/maps/SpiralCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1260 "data/maps/SpiralCity/scripts.pory"
	.string "POKéMON!”$"
# 1261 "data/maps/SpiralCity/scripts.pory"

# 1262 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1263 "data/maps/SpiralCity/scripts.pory"
	.string "CUTTER'S HOUSE$"
# 1264 "data/maps/SpiralCity/scripts.pory"

# 1265 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1266 "data/maps/SpiralCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1267 "data/maps/SpiralCity/scripts.pory"
	.string "for the POKéNAV…\p"
# 1268 "data/maps/SpiralCity/scripts.pory"
	.string "And it turned out great!\p"
# 1269 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}, may I see that POKéNAV?\n"
# 1270 "data/maps/SpiralCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1271 "data/maps/SpiralCity/scripts.pory"

# 1272 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1273 "data/maps/SpiralCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1274 "data/maps/SpiralCity/scripts.pory"
	.string "I added a new feature named\n"
# 1275 "data/maps/SpiralCity/scripts.pory"
	.string "MATCH CALL to your POKéNAV.\p"
# 1276 "data/maps/SpiralCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1277 "data/maps/SpiralCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1278 "data/maps/SpiralCity/scripts.pory"
	.string "been registered in your POKéNAV.\p"
# 1279 "data/maps/SpiralCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1280 "data/maps/SpiralCity/scripts.pory"
	.string "be registered in your POKéNAV.\p"
# 1281 "data/maps/SpiralCity/scripts.pory"
	.string "Test it out.\n"
# 1282 "data/maps/SpiralCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1283 "data/maps/SpiralCity/scripts.pory"

# 1284 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1285 "data/maps/SpiralCity/scripts.pory"
	.string "Please select the POKéNAV.$"
# 1286 "data/maps/SpiralCity/scripts.pory"

# 1287 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1288 "data/maps/SpiralCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1289 "data/maps/SpiralCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1290 "data/maps/SpiralCity/scripts.pory"

# 1291 "data/maps/SpiralCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1292 "data/maps/SpiralCity/scripts.pory"
	.string "Did you know this?\p"
# 1293 "data/maps/SpiralCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1294 "data/maps/SpiralCity/scripts.pory"
	.string "if you're not with another TRAINER.\p"
# 1295 "data/maps/SpiralCity/scripts.pory"
	.string "If you catch the eyes of two TRAINERS\n"
# 1296 "data/maps/SpiralCity/scripts.pory"
	.string "when you have two or more POKéMON,\l"
# 1297 "data/maps/SpiralCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1298 "data/maps/SpiralCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1299 "data/maps/SpiralCity/scripts.pory"
	.string "could beat two TRAINERS by yourself?$"
