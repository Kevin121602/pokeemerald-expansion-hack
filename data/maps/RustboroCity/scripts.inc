RustboroCity_EventScript_Test::
# 2 "data/maps/RustboroCity/scripts.pory"
	lock
# 3 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 4 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GOURD_SPLICER
# 5 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_RAINBOW_NECTAR
# 6 "data/maps/RustboroCity/scripts.pory"
	release
	end


RustboroCity_MapScripts::
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 17 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 13 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 4
	goto_if_lt RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_2
	return


RustboroCity_EventScript_GymGuide::
# 21 "data/maps/RustboroCity/scripts.pory"
	lock
# 22 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 23 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_GymGuide_Text_0
# 24 "data/maps/RustboroCity/scripts.pory"
	release
	end


# 28 "data/maps/RustboroCity/scripts.pory"

# 29 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 30 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 31 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 32 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 33 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 34 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 35 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE_2, 16
# 36 "data/maps/RustboroCity/scripts.pory"

# 37 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 38 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 39 "data/maps/RustboroCity/scripts.pory"
	end
# 40 "data/maps/RustboroCity/scripts.pory"

# 41 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 42 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 43 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 44 "data/maps/RustboroCity/scripts.pory"
	end
# 45 "data/maps/RustboroCity/scripts.pory"

# 46 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 47 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 48 "data/maps/RustboroCity/scripts.pory"
	end
# 49 "data/maps/RustboroCity/scripts.pory"

# 50 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 51 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 52 "data/maps/RustboroCity/scripts.pory"
	return
# 53 "data/maps/RustboroCity/scripts.pory"

# 54 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 55 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 56 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 57 "data/maps/RustboroCity/scripts.pory"

# 58 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 59 "data/maps/RustboroCity/scripts.pory"
	lockall
# 60 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 61 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 62 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 63 "data/maps/RustboroCity/scripts.pory"

# 64 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 65 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 66 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 67 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 68 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 69 "data/maps/RustboroCity/scripts.pory"

# 70 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 71 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 72 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 73 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 74 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 75 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 76 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 77 "data/maps/RustboroCity/scripts.pory"
	end
# 78 "data/maps/RustboroCity/scripts.pory"

# 79 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 80 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 81 "data/maps/RustboroCity/scripts.pory"
	step_end
# 82 "data/maps/RustboroCity/scripts.pory"

# 83 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 84 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 85 "data/maps/RustboroCity/scripts.pory"
	step_end
# 86 "data/maps/RustboroCity/scripts.pory"

# 87 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 88 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 89 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 90 "data/maps/RustboroCity/scripts.pory"
	step_end
# 91 "data/maps/RustboroCity/scripts.pory"

# 92 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 93 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 94 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 95 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 96 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 97 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 98 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 99 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 100 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 101 "data/maps/RustboroCity/scripts.pory"
	step_end
# 102 "data/maps/RustboroCity/scripts.pory"

# 103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 104 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 105 "data/maps/RustboroCity/scripts.pory"
	step_end
# 106 "data/maps/RustboroCity/scripts.pory"

# 107 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 108 "data/maps/RustboroCity/scripts.pory"
	lock
# 109 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 110 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 111 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 112 "data/maps/RustboroCity/scripts.pory"
	release
# 113 "data/maps/RustboroCity/scripts.pory"
	end
# 114 "data/maps/RustboroCity/scripts.pory"

# 115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 116 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 117 "data/maps/RustboroCity/scripts.pory"
	release
# 118 "data/maps/RustboroCity/scripts.pory"
	end
# 119 "data/maps/RustboroCity/scripts.pory"

# 120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 121 "data/maps/RustboroCity/scripts.pory"
	lock
# 122 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 123 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 124 "data/maps/RustboroCity/scripts.pory"
	release
# 125 "data/maps/RustboroCity/scripts.pory"
	end
# 126 "data/maps/RustboroCity/scripts.pory"

# 127 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 128 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 129 "data/maps/RustboroCity/scripts.pory"
	end
# 130 "data/maps/RustboroCity/scripts.pory"

# 131 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 132 "data/maps/RustboroCity/scripts.pory"
	lock
# 133 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 134 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 135 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 136 "data/maps/RustboroCity/scripts.pory"
	release
# 137 "data/maps/RustboroCity/scripts.pory"
	end
# 138 "data/maps/RustboroCity/scripts.pory"

# 139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 140 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 141 "data/maps/RustboroCity/scripts.pory"
	release
# 142 "data/maps/RustboroCity/scripts.pory"
	end
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 145 "data/maps/RustboroCity/scripts.pory"
	lock
# 146 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 147 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 148 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 149 "data/maps/RustboroCity/scripts.pory"
	release
# 150 "data/maps/RustboroCity/scripts.pory"
	end
# 151 "data/maps/RustboroCity/scripts.pory"

# 152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 153 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 154 "data/maps/RustboroCity/scripts.pory"
	release
# 155 "data/maps/RustboroCity/scripts.pory"
	end
# 156 "data/maps/RustboroCity/scripts.pory"

# 157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 158 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 159 "data/maps/RustboroCity/scripts.pory"
	end
# 160 "data/maps/RustboroCity/scripts.pory"

# 161 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 162 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 163 "data/maps/RustboroCity/scripts.pory"
	end
# 164 "data/maps/RustboroCity/scripts.pory"

# 165 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 166 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 167 "data/maps/RustboroCity/scripts.pory"
	end
# 168 "data/maps/RustboroCity/scripts.pory"

# 169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 170 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 171 "data/maps/RustboroCity/scripts.pory"
	end
# 172 "data/maps/RustboroCity/scripts.pory"

# 173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 174 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 175 "data/maps/RustboroCity/scripts.pory"
	end
# 176 "data/maps/RustboroCity/scripts.pory"

# 177 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 178 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 179 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 180 "data/maps/RustboroCity/scripts.pory"
	end
# 181 "data/maps/RustboroCity/scripts.pory"

# 182 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 183 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 184 "data/maps/RustboroCity/scripts.pory"
	end
# 185 "data/maps/RustboroCity/scripts.pory"

# 186 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 187 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 188 "data/maps/RustboroCity/scripts.pory"
	end
# 189 "data/maps/RustboroCity/scripts.pory"

# 190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 191 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 192 "data/maps/RustboroCity/scripts.pory"
	end
# 193 "data/maps/RustboroCity/scripts.pory"

# 194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 195 "data/maps/RustboroCity/scripts.pory"
	lock
# 196 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 197 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 198 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 199 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 200 "data/maps/RustboroCity/scripts.pory"
	release
# 201 "data/maps/RustboroCity/scripts.pory"
	end
# 202 "data/maps/RustboroCity/scripts.pory"

# 203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 204 "data/maps/RustboroCity/scripts.pory"
	lock
# 205 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 206 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 207 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 208 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 209 "data/maps/RustboroCity/scripts.pory"
	release
# 210 "data/maps/RustboroCity/scripts.pory"
	end
# 211 "data/maps/RustboroCity/scripts.pory"

# 212 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 213 "data/maps/RustboroCity/scripts.pory"
	lock
# 214 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 215 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 216 "data/maps/RustboroCity/scripts.pory"
	release
# 217 "data/maps/RustboroCity/scripts.pory"
	end
# 218 "data/maps/RustboroCity/scripts.pory"

# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 220 "data/maps/RustboroCity/scripts.pory"
	lockall
# 221 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 222 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 223 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 224 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 225 "data/maps/RustboroCity/scripts.pory"
	end
# 226 "data/maps/RustboroCity/scripts.pory"

# 227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 228 "data/maps/RustboroCity/scripts.pory"
	lockall
# 229 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 230 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 231 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 232 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 233 "data/maps/RustboroCity/scripts.pory"
	end
# 234 "data/maps/RustboroCity/scripts.pory"

# 235 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 236 "data/maps/RustboroCity/scripts.pory"
	lockall
# 237 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 238 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 239 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 240 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 241 "data/maps/RustboroCity/scripts.pory"
	end
# 242 "data/maps/RustboroCity/scripts.pory"

# 243 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 244 "data/maps/RustboroCity/scripts.pory"
	lockall
# 245 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 246 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 247 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 248 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 249 "data/maps/RustboroCity/scripts.pory"
	end
# 250 "data/maps/RustboroCity/scripts.pory"

# 251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 252 "data/maps/RustboroCity/scripts.pory"
	lockall
# 253 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 254 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 255 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 256 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 257 "data/maps/RustboroCity/scripts.pory"
	end
# 258 "data/maps/RustboroCity/scripts.pory"

# 259 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 260 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 261 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 262 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_ROCKET, FALSE
# 263 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 264 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 265 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 266 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 267 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 268 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 269 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 271 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 272 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 273 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 275 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 276 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 277 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 278 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 279 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 280 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 281 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 282 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 283 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 284 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 285 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 286 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 287 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 288 "data/maps/RustboroCity/scripts.pory"
	end
# 289 "data/maps/RustboroCity/scripts.pory"

# 290 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 291 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 292 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 293 "data/maps/RustboroCity/scripts.pory"
	return
# 294 "data/maps/RustboroCity/scripts.pory"

# 295 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 297 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 298 "data/maps/RustboroCity/scripts.pory"
	return
# 299 "data/maps/RustboroCity/scripts.pory"

# 300 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 302 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 303 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/RustboroCity/scripts.pory"
	return
# 305 "data/maps/RustboroCity/scripts.pory"

# 306 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 307 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 308 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 309 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/RustboroCity/scripts.pory"
	return
# 311 "data/maps/RustboroCity/scripts.pory"

# 312 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 313 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 314 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 315 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/RustboroCity/scripts.pory"
	return
# 317 "data/maps/RustboroCity/scripts.pory"

# 318 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 319 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 320 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 321 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/RustboroCity/scripts.pory"
	return
# 323 "data/maps/RustboroCity/scripts.pory"

# 324 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 325 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 326 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 327 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 329 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/RustboroCity/scripts.pory"
	return
# 331 "data/maps/RustboroCity/scripts.pory"

# 332 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 333 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 334 "data/maps/RustboroCity/scripts.pory"
	walk_faster_down
# 335 "data/maps/RustboroCity/scripts.pory"
	walk_faster_down
# 336 "data/maps/RustboroCity/scripts.pory"
	walk_faster_down
# 337 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 338 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 339 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 340 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 341 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 343 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 344 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 345 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 346 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 347 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 348 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 349 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 350 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 351 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 352 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 353 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 356 "data/maps/RustboroCity/scripts.pory"
	step_end
# 357 "data/maps/RustboroCity/scripts.pory"

# 358 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	step_end
# 381 "data/maps/RustboroCity/scripts.pory"

# 382 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 388 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 395 "data/maps/RustboroCity/scripts.pory"
	step_end
# 396 "data/maps/RustboroCity/scripts.pory"

# 397 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 405 "data/maps/RustboroCity/scripts.pory"
	step_end
# 406 "data/maps/RustboroCity/scripts.pory"

# 407 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 408 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 412 "data/maps/RustboroCity/scripts.pory"
	step_end
# 413 "data/maps/RustboroCity/scripts.pory"

# 414 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 415 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 419 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 420 "data/maps/RustboroCity/scripts.pory"
	step_end
# 421 "data/maps/RustboroCity/scripts.pory"

# 422 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 423 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 427 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 428 "data/maps/RustboroCity/scripts.pory"
	step_end
# 429 "data/maps/RustboroCity/scripts.pory"

# 430 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 431 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 434 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 435 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 436 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity/scripts.pory"
	step_end
# 438 "data/maps/RustboroCity/scripts.pory"

# 439 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 440 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar:
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 442 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 443 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 444 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 445 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 448 "data/maps/RustboroCity/scripts.pory"
	step_end
# 449 "data/maps/RustboroCity/scripts.pory"

# 450 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 451 "data/maps/RustboroCity/scripts.pory"
	lock
# 452 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 453 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 454 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 455 "data/maps/RustboroCity/scripts.pory"
	release
# 456 "data/maps/RustboroCity/scripts.pory"
	end
# 457 "data/maps/RustboroCity/scripts.pory"

# 458 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 459 "data/maps/RustboroCity/scripts.pory"
	waitse
# 460 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 461 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 462 "data/maps/RustboroCity/scripts.pory"
	end
# 463 "data/maps/RustboroCity/scripts.pory"

# 464 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 465 "data/maps/RustboroCity/scripts.pory"
	lockall
# 466 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 467 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 468 "data/maps/RustboroCity/scripts.pory"
	end
# 469 "data/maps/RustboroCity/scripts.pory"

# 470 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 471 "data/maps/RustboroCity/scripts.pory"
	lockall
# 472 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 473 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 474 "data/maps/RustboroCity/scripts.pory"
	end
# 475 "data/maps/RustboroCity/scripts.pory"

# 476 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 477 "data/maps/RustboroCity/scripts.pory"
	lockall
# 478 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 479 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 480 "data/maps/RustboroCity/scripts.pory"
	end
# 481 "data/maps/RustboroCity/scripts.pory"

# 482 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 483 "data/maps/RustboroCity/scripts.pory"
	lockall
# 484 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 485 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 486 "data/maps/RustboroCity/scripts.pory"
	end
# 487 "data/maps/RustboroCity/scripts.pory"

# 488 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 489 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 490 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 491 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 492 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 493 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 494 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 495 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 496 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 497 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 498 "data/maps/RustboroCity/scripts.pory"
	end
# 499 "data/maps/RustboroCity/scripts.pory"

# 500 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 501 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 502 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 503 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 504 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 505 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 506 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 508 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 509 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 510 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 511 "data/maps/RustboroCity/scripts.pory"
	return
# 512 "data/maps/RustboroCity/scripts.pory"

# 513 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 514 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 515 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 516 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 517 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 520 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 521 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 522 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 523 "data/maps/RustboroCity/scripts.pory"
	return
# 524 "data/maps/RustboroCity/scripts.pory"

# 525 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 526 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 527 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 528 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	return
# 536 "data/maps/RustboroCity/scripts.pory"

# 537 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 541 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 542 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	return
# 550 "data/maps/RustboroCity/scripts.pory"

# 551 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 552 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 553 "data/maps/RustboroCity/scripts.pory"
	step_end
# 554 "data/maps/RustboroCity/scripts.pory"

# 555 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 556 "data/maps/RustboroCity/scripts.pory"
	lockall
# 557 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 558 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 559 "data/maps/RustboroCity/scripts.pory"
	end
# 560 "data/maps/RustboroCity/scripts.pory"

# 561 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 562 "data/maps/RustboroCity/scripts.pory"
	lockall
# 563 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 564 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 565 "data/maps/RustboroCity/scripts.pory"
	end
# 566 "data/maps/RustboroCity/scripts.pory"

# 567 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 568 "data/maps/RustboroCity/scripts.pory"
	lockall
# 569 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 570 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 571 "data/maps/RustboroCity/scripts.pory"
	end
# 572 "data/maps/RustboroCity/scripts.pory"

# 573 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 574 "data/maps/RustboroCity/scripts.pory"
	lockall
# 575 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 576 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 577 "data/maps/RustboroCity/scripts.pory"
	end
# 578 "data/maps/RustboroCity/scripts.pory"

# 579 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger4::
# 580 "data/maps/RustboroCity/scripts.pory"
	lockall
# 581 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 5
# 582 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 583 "data/maps/RustboroCity/scripts.pory"
	end
# 584 "data/maps/RustboroCity/scripts.pory"

# 585 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger5::
# 586 "data/maps/RustboroCity/scripts.pory"
	lockall
# 587 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 6
# 588 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 589 "data/maps/RustboroCity/scripts.pory"
	end
# 590 "data/maps/RustboroCity/scripts.pory"

# 591 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger6::
# 592 "data/maps/RustboroCity/scripts.pory"
	lockall
# 593 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 7
# 594 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 595 "data/maps/RustboroCity/scripts.pory"
	end
# 596 "data/maps/RustboroCity/scripts.pory"

# 597 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger7::
# 598 "data/maps/RustboroCity/scripts.pory"
	lockall
# 599 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 8
# 600 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 601 "data/maps/RustboroCity/scripts.pory"
	end
# 602 "data/maps/RustboroCity/scripts.pory"

# 603 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 604 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 605 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 608 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 609 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 5, RustboroCity_EventScript_Employee2_Approach1
# 610 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 6, RustboroCity_EventScript_Employee2_Approach2
# 611 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 7, RustboroCity_EventScript_Employee2_Approach3
# 612 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 8, RustboroCity_EventScript_Employee2_Approach4
# 613 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 614 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 615 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 616 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 617 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 618 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 619 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 620 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_2
# 621 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 622 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 623 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 624 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 625 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 626 "data/maps/RustboroCity/scripts.pory"
	end
# 627 "data/maps/RustboroCity/scripts.pory"

# 628 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 629 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 630 "data/maps/RustboroCity/scripts.pory"
	return
# 631 "data/maps/RustboroCity/scripts.pory"

# 632 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 633 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 634 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 639 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 641 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 642 "data/maps/RustboroCity/scripts.pory"
	return
# 643 "data/maps/RustboroCity/scripts.pory"

# 644 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 645 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 646 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 651 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 653 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/RustboroCity/scripts.pory"
	return
# 655 "data/maps/RustboroCity/scripts.pory"

# 656 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 657 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 658 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 663 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 665 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/RustboroCity/scripts.pory"
	return
# 667 "data/maps/RustboroCity/scripts.pory"

# 668 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 669 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 670 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 677 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 678 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 679 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 680 "data/maps/RustboroCity/scripts.pory"
	return
# 681 "data/maps/RustboroCity/scripts.pory"

# 682 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 683 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 684 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 685 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 689 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 690 "data/maps/RustboroCity/scripts.pory"
	return
# 691 "data/maps/RustboroCity/scripts.pory"

# 692 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach1::
# 693 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 694 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 695 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 696 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 697 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer1
# 699 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/RustboroCity/scripts.pory"
	return
# 701 "data/maps/RustboroCity/scripts.pory"

# 702 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach2::
# 703 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 704 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 705 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 707 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer2
# 709 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 710 "data/maps/RustboroCity/scripts.pory"
	return
# 711 "data/maps/RustboroCity/scripts.pory"

# 712 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach3::
# 713 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 714 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 715 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 717 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 718 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer3
# 719 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 720 "data/maps/RustboroCity/scripts.pory"
	return
# 721 "data/maps/RustboroCity/scripts.pory"

# 722 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach4::
# 723 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 725 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 727 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer4
# 729 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/RustboroCity/scripts.pory"
	return
# 731 "data/maps/RustboroCity/scripts.pory"

# 732 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer1:
# 733 "data/maps/RustboroCity/scripts.pory"
	face_left
# 734 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 735 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 736 "data/maps/RustboroCity/scripts.pory"
	face_down
# 737 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 738 "data/maps/RustboroCity/scripts.pory"
	step_end
# 739 "data/maps/RustboroCity/scripts.pory"

# 740 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer2:
# 741 "data/maps/RustboroCity/scripts.pory"
	face_down
# 742 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 743 "data/maps/RustboroCity/scripts.pory"
	step_end
# 744 "data/maps/RustboroCity/scripts.pory"

# 745 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer3:
# 746 "data/maps/RustboroCity/scripts.pory"
	face_right
# 747 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 748 "data/maps/RustboroCity/scripts.pory"
	face_down
# 749 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 750 "data/maps/RustboroCity/scripts.pory"
	step_end
# 751 "data/maps/RustboroCity/scripts.pory"

# 752 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer4:
# 753 "data/maps/RustboroCity/scripts.pory"
	face_right
# 754 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 755 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 756 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 757 "data/maps/RustboroCity/scripts.pory"
	face_down
# 758 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 759 "data/maps/RustboroCity/scripts.pory"
	step_end
# 760 "data/maps/RustboroCity/scripts.pory"

# 761 "data/maps/RustboroCity/scripts.pory"

# 762 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 763 "data/maps/RustboroCity/scripts.pory"
	lockall
# 764 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 765 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 766 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 767 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 768 "data/maps/RustboroCity/scripts.pory"

# 769 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 770 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 771 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 772 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 773 "data/maps/RustboroCity/scripts.pory"
	return
# 774 "data/maps/RustboroCity/scripts.pory"

# 775 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 776 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 777 "data/maps/RustboroCity/scripts.pory"
	return
# 778 "data/maps/RustboroCity/scripts.pory"

# 779 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 780 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 781 "data/maps/RustboroCity/scripts.pory"
	return
# 782 "data/maps/RustboroCity/scripts.pory"

# 783 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 784 "data/maps/RustboroCity/scripts.pory"
	lockall
# 785 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 789 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 790 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 791 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 792 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 796 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 798 "data/maps/RustboroCity/scripts.pory"

# 799 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 800 "data/maps/RustboroCity/scripts.pory"
	lockall
# 801 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 805 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 806 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 807 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 808 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 812 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 813 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 814 "data/maps/RustboroCity/scripts.pory"

# 815 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 816 "data/maps/RustboroCity/scripts.pory"
	lockall
# 817 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 818 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 819 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 821 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 822 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 824 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 828 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 829 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 830 "data/maps/RustboroCity/scripts.pory"

# 831 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 832 "data/maps/RustboroCity/scripts.pory"
	lockall
# 833 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 834 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 835 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 837 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 838 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 839 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 840 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 841 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 842 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 844 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 845 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 846 "data/maps/RustboroCity/scripts.pory"

# 847 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 848 "data/maps/RustboroCity/scripts.pory"
	lockall
# 849 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 850 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 851 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 853 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 854 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 855 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 856 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 857 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 858 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 859 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 860 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 861 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 862 "data/maps/RustboroCity/scripts.pory"

# 863 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 864 "data/maps/RustboroCity/scripts.pory"
	lockall
# 865 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 866 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 867 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 868 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 869 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 870 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 871 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 872 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 873 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 874 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 875 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 876 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 877 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 878 "data/maps/RustboroCity/scripts.pory"

# 879 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 880 "data/maps/RustboroCity/scripts.pory"
	lockall
# 881 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 882 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 883 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 884 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 885 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 886 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 887 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 888 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 889 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 890 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 891 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 892 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 893 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 896 "data/maps/RustboroCity/scripts.pory"
	lockall
# 897 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 898 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 899 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 900 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 901 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 902 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 903 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 904 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 905 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 906 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 907 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 908 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 909 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 910 "data/maps/RustboroCity/scripts.pory"

# 911 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 912 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 913 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 914 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 915 "data/maps/RustboroCity/scripts.pory"
	end
# 916 "data/maps/RustboroCity/scripts.pory"

# 917 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 918 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 919 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 920 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 921 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 922 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 923 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 924 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 925 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 926 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 927 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 928 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 929 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 930 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 931 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 932 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 933 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 934 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 935 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 936 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 937 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 938 "data/maps/RustboroCity/scripts.pory"
	end
# 939 "data/maps/RustboroCity/scripts.pory"

# 940 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 941 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 942 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 943 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 944 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 945 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 946 "data/maps/RustboroCity/scripts.pory"
	end
# 947 "data/maps/RustboroCity/scripts.pory"

# 948 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 949 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 950 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 951 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 952 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 953 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 954 "data/maps/RustboroCity/scripts.pory"
	end
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 957 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 958 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 959 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 960 "data/maps/RustboroCity/scripts.pory"
	end
# 961 "data/maps/RustboroCity/scripts.pory"

# 962 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 963 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 964 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 965 "data/maps/RustboroCity/scripts.pory"
	return
# 966 "data/maps/RustboroCity/scripts.pory"

# 967 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 968 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 969 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 970 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 971 "data/maps/RustboroCity/scripts.pory"
	end
# 972 "data/maps/RustboroCity/scripts.pory"

# 973 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 974 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 975 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 976 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 977 "data/maps/RustboroCity/scripts.pory"
	end
# 978 "data/maps/RustboroCity/scripts.pory"

# 979 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 980 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 981 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 982 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 983 "data/maps/RustboroCity/scripts.pory"
	end
# 984 "data/maps/RustboroCity/scripts.pory"

# 985 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 986 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 987 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 988 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 989 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 990 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 991 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 992 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 993 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 994 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 995 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 996 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 997 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 998 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 999 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 1000 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 1001 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1002 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1003 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 1004 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1005 "data/maps/RustboroCity/scripts.pory"
	end
# 1006 "data/maps/RustboroCity/scripts.pory"

# 1007 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 1008 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 1009 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1010 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1011 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1012 "data/maps/RustboroCity/scripts.pory"
	end
# 1013 "data/maps/RustboroCity/scripts.pory"

# 1014 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 1015 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 1016 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1017 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 1018 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 1019 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 1020 "data/maps/RustboroCity/scripts.pory"
	end
# 1021 "data/maps/RustboroCity/scripts.pory"

# 1022 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 1023 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 1024 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1025 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1026 "data/maps/RustboroCity/scripts.pory"
	end
# 1027 "data/maps/RustboroCity/scripts.pory"

# 1028 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1029 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1030 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1031 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1032 "data/maps/RustboroCity/scripts.pory"
	end
# 1033 "data/maps/RustboroCity/scripts.pory"

# 1034 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1035 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1036 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1037 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1038 "data/maps/RustboroCity/scripts.pory"
	end
# 1039 "data/maps/RustboroCity/scripts.pory"

# 1040 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1041 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1042 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1043 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1044 "data/maps/RustboroCity/scripts.pory"
	end
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1047 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1048 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1049 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1050 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1051 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1052 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1053 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1054 "data/maps/RustboroCity/scripts.pory"

# 1055 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1056 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1057 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1058 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1059 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1060 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1061 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1062 "data/maps/RustboroCity/scripts.pory"

# 1063 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1064 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1065 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1066 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1067 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1068 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1069 "data/maps/RustboroCity/scripts.pory"

# 1070 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1071 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1072 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1073 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1074 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1075 "data/maps/RustboroCity/scripts.pory"

# 1076 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1077 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1078 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1079 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1080 "data/maps/RustboroCity/scripts.pory"

# 1081 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1082 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1083 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1084 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1085 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1086 "data/maps/RustboroCity/scripts.pory"

# 1087 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1088 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1089 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1090 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1091 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1092 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1093 "data/maps/RustboroCity/scripts.pory"

# 1094 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1095 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1096 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1097 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1098 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1099 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1100 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1101 "data/maps/RustboroCity/scripts.pory"

# 1102 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1103 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1104 "data/maps/RustboroCity/scripts.pory"
	end
# 1105 "data/maps/RustboroCity/scripts.pory"

# 1106 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\n"
# 1108 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to Devon.\p"
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1111 "data/maps/RustboroCity/scripts.pory"

# 1112 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1114 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1116 "data/maps/RustboroCity/scripts.pory"

# 1117 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the Pokémon Gym\n"
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny Gym Badge\n"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess Trainers begin to\l"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the Pokémon Gym Badges,\n"
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's is the coolest, I'd say.$"
# 1128 "data/maps/RustboroCity/scripts.pory"

# 1129 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1132 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School?$"
# 1134 "data/maps/RustboroCity/scripts.pory"

# 1135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "my Fire-type Pokémon…\p"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "Fire-type Pokémon don't match up\n"
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "well against Rock-type Pokémon…$"
# 1141 "data/maps/RustboroCity/scripts.pory"

# 1142 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1147 "data/maps/RustboroCity/scripts.pory"

# 1148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport for his pet, Peeko.\p"
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "that Peeko.$"
# 1155 "data/maps/RustboroCity/scripts.pory"

# 1156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1157 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have Pokémon with you, too.\p"
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "places with Pokémon, too.$"
# 1160 "data/maps/RustboroCity/scripts.pory"

# 1161 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1162 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School!\p"
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare Pokémon easily?$"
# 1165 "data/maps/RustboroCity/scripts.pory"

# 1166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience in\n"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1170 "data/maps/RustboroCity/scripts.pory"

# 1171 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon changes shape?\n"
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1174 "data/maps/RustboroCity/scripts.pory"

# 1175 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\n"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain Gym\n"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "Badges, it may not obey you…$"
# 1180 "data/maps/RustboroCity/scripts.pory"

# 1181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1184 "data/maps/RustboroCity/scripts.pory"

# 1185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 1188 "data/maps/RustboroCity/scripts.pory"

# 1189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic Trainer who\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in Petalburg Woods!\p"
# 1193 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by Team Aqua!\n"
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1201 "data/maps/RustboroCity/scripts.pory"

# 1202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Goods?\p"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1209 "data/maps/RustboroCity/scripts.pory"
	.string "a Heart Scale!$"
# 1210 "data/maps/RustboroCity/scripts.pory"

# 1211 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Heart Scale.$"
# 1214 "data/maps/RustboroCity/scripts.pory"

# 1215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1217 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1218 "data/maps/RustboroCity/scripts.pory"

# 1219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1221 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "on your Pokénav!\p"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1226 "data/maps/RustboroCity/scripts.pory"

# 1227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "in the Pokénav.$"
# 1230 "data/maps/RustboroCity/scripts.pory"

# 1231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1232 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney in PETALBURG WOODS.\p"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "How's your Pokédex coming along,\n"
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1240 "data/maps/RustboroCity/scripts.pory"

# 1241 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon very much?\p"
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a Trainer!$"
# 1246 "data/maps/RustboroCity/scripts.pory"

# 1247 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1250 "data/maps/RustboroCity/scripts.pory"

# 1251 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a Trainer,\n"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1254 "data/maps/RustboroCity/scripts.pory"

# 1255 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1258 "data/maps/RustboroCity/scripts.pory"

# 1259 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, Mr. Briney, who\n"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but Mr. Briney\l"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1265 "data/maps/RustboroCity/scripts.pory"

# 1266 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "on your Pokénav! Cool!\p"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1273 "data/maps/RustboroCity/scripts.pory"

# 1274 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "in the Pokénav.$"
# 1277 "data/maps/RustboroCity/scripts.pory"

# 1278 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "by Mr. Briney in PETALBURG WOODS.\p"
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your Pokédex?\n"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1287 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1288 "data/maps/RustboroCity/scripts.pory"

# 1289 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1292 "data/maps/RustboroCity/scripts.pory"

# 1293 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1296 "data/maps/RustboroCity/scripts.pory"

# 1297 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "a Trainer, but I won't go easy!$"
# 1300 "data/maps/RustboroCity/scripts.pory"

# 1301 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1304 "data/maps/RustboroCity/scripts.pory"

# 1305 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney? The guy I just passed?\p"
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1309 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney was once a great sailor.$"
# 1311 "data/maps/RustboroCity/scripts.pory"

# 1312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1315 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1316 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1318 "data/maps/RustboroCity/scripts.pory"

# 1319 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1320 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1323 "data/maps/RustboroCity/scripts.pory"

# 1324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1325 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
# 1326 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: Roxanne\p"
# 1327 "data/maps/RustboroCity/scripts.pory"
	.string "“The Rock-loving honors student!”$"
# 1328 "data/maps/RustboroCity/scripts.pory"

# 1329 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1330 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
# 1331 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to Devon employees\n"
# 1332 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1333 "data/maps/RustboroCity/scripts.pory"

# 1334 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1335 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
# 1336 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1337 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1338 "data/maps/RustboroCity/scripts.pory"

# 1339 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1340 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon!”$"
# 1343 "data/maps/RustboroCity/scripts.pory"

# 1344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1345 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"
# 1346 "data/maps/RustboroCity/scripts.pory"

# 1347 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1348 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1349 "data/maps/RustboroCity/scripts.pory"
	.string "for the Pokénav…\p"
# 1350 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1351 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that Pokénav?\n"
# 1352 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1353 "data/maps/RustboroCity/scripts.pory"

# 1354 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1355 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1356 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1357 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your Pokénav.\p"
# 1358 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1359 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1360 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your Pokénav.\p"
# 1361 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1362 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your Pokénav.\p"
# 1363 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1364 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1365 "data/maps/RustboroCity/scripts.pory"

# 1366 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1367 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the Pokénav.$"
# 1368 "data/maps/RustboroCity/scripts.pory"

# 1369 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1370 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1371 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1372 "data/maps/RustboroCity/scripts.pory"

# 1373 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1374 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1375 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1376 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another Trainer.\p"
# 1377 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two Trainers\n"
# 1378 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more Pokémon,\l"
# 1379 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1380 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1381 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two Trainers by yourself?$"

RustboroCity_EventScript_GymGuide_Text_0:
# 23 "data/maps/RustboroCity/scripts.pory"
	.string "Roxanne is off training at Rusturf\n"
	.string "Tunnel, please come back later.$"
