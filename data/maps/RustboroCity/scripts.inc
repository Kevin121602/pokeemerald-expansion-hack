RustboroCity_MapScripts::
# 2 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
	.byte 0

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 4 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 4
	goto_if_lt RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

RustboroCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_2
	return


RustboroCity_EventScript_GymGuide::
# 12 "data/maps/RustboroCity/scripts.pory"
	lock
# 13 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 14 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_EventScript_GymGuide_Text_0
# 15 "data/maps/RustboroCity/scripts.pory"
	release
	end


# 19 "data/maps/RustboroCity/scripts.pory"

# 20 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 21 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 22 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 23 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 24 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 25 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 26 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE_2, 16
# 27 "data/maps/RustboroCity/scripts.pory"

# 28 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition:
# 29 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 30 "data/maps/RustboroCity/scripts.pory"
	end
# 31 "data/maps/RustboroCity/scripts.pory"

# 32 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit::
# 33 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_TEMP_0, 11, RustboroCity_EventScript_PositionScientistLeftExit
# 34 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 35 "data/maps/RustboroCity/scripts.pory"
	end
# 36 "data/maps/RustboroCity/scripts.pory"

# 37 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit::
# 38 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 39 "data/maps/RustboroCity/scripts.pory"
	end
# 40 "data/maps/RustboroCity/scripts.pory"

# 41 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup::
# 42 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 43 "data/maps/RustboroCity/scripts.pory"
	return
# 44 "data/maps/RustboroCity/scripts.pory"

# 45 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame:
# 46 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 47 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 48 "data/maps/RustboroCity/scripts.pory"

# 49 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall::
# 50 "data/maps/RustboroCity/scripts.pory"
	lockall
# 51 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 52 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 53 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 54 "data/maps/RustboroCity/scripts.pory"

# 55 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav::
# 56 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 57 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 58 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 59 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 60 "data/maps/RustboroCity/scripts.pory"

# 61 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial::
# 62 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 63 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 64 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 65 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 66 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 67 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 68 "data/maps/RustboroCity/scripts.pory"
	end
# 69 "data/maps/RustboroCity/scripts.pory"

# 70 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown:
# 71 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 72 "data/maps/RustboroCity/scripts.pory"
	step_end
# 73 "data/maps/RustboroCity/scripts.pory"

# 74 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown:
# 75 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 76 "data/maps/RustboroCity/scripts.pory"
	step_end
# 77 "data/maps/RustboroCity/scripts.pory"

# 78 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer:
# 79 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 80 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 81 "data/maps/RustboroCity/scripts.pory"
	step_end
# 82 "data/maps/RustboroCity/scripts.pory"

# 83 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 84 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer:
# 85 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 86 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 87 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 88 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 89 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 91 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 92 "data/maps/RustboroCity/scripts.pory"
	step_end
# 93 "data/maps/RustboroCity/scripts.pory"

# 94 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave:
# 95 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 96 "data/maps/RustboroCity/scripts.pory"
	step_end
# 97 "data/maps/RustboroCity/scripts.pory"

# 98 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan::
# 99 "data/maps/RustboroCity/scripts.pory"
	lock
# 100 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 101 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 102 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 103 "data/maps/RustboroCity/scripts.pory"
	release
# 104 "data/maps/RustboroCity/scripts.pory"
	end
# 105 "data/maps/RustboroCity/scripts.pory"

# 106 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt::
# 107 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 108 "data/maps/RustboroCity/scripts.pory"
	release
# 109 "data/maps/RustboroCity/scripts.pory"
	end
# 110 "data/maps/RustboroCity/scripts.pory"

# 111 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2::
# 112 "data/maps/RustboroCity/scripts.pory"
	lock
# 113 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 114 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 115 "data/maps/RustboroCity/scripts.pory"
	release
# 116 "data/maps/RustboroCity/scripts.pory"
	end
# 117 "data/maps/RustboroCity/scripts.pory"

# 118 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman::
# 119 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 120 "data/maps/RustboroCity/scripts.pory"
	end
# 121 "data/maps/RustboroCity/scripts.pory"

# 122 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1::
# 123 "data/maps/RustboroCity/scripts.pory"
	lock
# 124 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 125 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 126 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 127 "data/maps/RustboroCity/scripts.pory"
	release
# 128 "data/maps/RustboroCity/scripts.pory"
	end
# 129 "data/maps/RustboroCity/scripts.pory"

# 130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge::
# 131 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 132 "data/maps/RustboroCity/scripts.pory"
	release
# 133 "data/maps/RustboroCity/scripts.pory"
	end
# 134 "data/maps/RustboroCity/scripts.pory"

# 135 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2::
# 136 "data/maps/RustboroCity/scripts.pory"
	lock
# 137 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 138 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 139 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity/scripts.pory"
	release
# 141 "data/maps/RustboroCity/scripts.pory"
	end
# 142 "data/maps/RustboroCity/scripts.pory"

# 143 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel::
# 144 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 145 "data/maps/RustboroCity/scripts.pory"
	release
# 146 "data/maps/RustboroCity/scripts.pory"
	end
# 147 "data/maps/RustboroCity/scripts.pory"

# 148 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin::
# 149 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 150 "data/maps/RustboroCity/scripts.pory"
	end
# 151 "data/maps/RustboroCity/scripts.pory"

# 152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy::
# 153 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 154 "data/maps/RustboroCity/scripts.pory"
	end
# 155 "data/maps/RustboroCity/scripts.pory"

# 156 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign::
# 157 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 158 "data/maps/RustboroCity/scripts.pory"
	end
# 159 "data/maps/RustboroCity/scripts.pory"

# 160 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign::
# 161 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 162 "data/maps/RustboroCity/scripts.pory"
	end
# 163 "data/maps/RustboroCity/scripts.pory"

# 164 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign::
# 165 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 166 "data/maps/RustboroCity/scripts.pory"
	end
# 167 "data/maps/RustboroCity/scripts.pory"

# 168 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 169 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign::
# 170 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 171 "data/maps/RustboroCity/scripts.pory"
	end
# 172 "data/maps/RustboroCity/scripts.pory"

# 173 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign::
# 174 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 175 "data/maps/RustboroCity/scripts.pory"
	end
# 176 "data/maps/RustboroCity/scripts.pory"

# 177 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign::
# 178 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 179 "data/maps/RustboroCity/scripts.pory"
	end
# 180 "data/maps/RustboroCity/scripts.pory"

# 181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign::
# 182 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 183 "data/maps/RustboroCity/scripts.pory"
	end
# 184 "data/maps/RustboroCity/scripts.pory"

# 185 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy::
# 186 "data/maps/RustboroCity/scripts.pory"
	lock
# 187 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 188 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 189 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 190 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 191 "data/maps/RustboroCity/scripts.pory"
	release
# 192 "data/maps/RustboroCity/scripts.pory"
	end
# 193 "data/maps/RustboroCity/scripts.pory"

# 194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl::
# 195 "data/maps/RustboroCity/scripts.pory"
	lock
# 196 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 197 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 198 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 199 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 200 "data/maps/RustboroCity/scripts.pory"
	release
# 201 "data/maps/RustboroCity/scripts.pory"
	end
# 202 "data/maps/RustboroCity/scripts.pory"

# 203 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2::
# 204 "data/maps/RustboroCity/scripts.pory"
	lock
# 205 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 206 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 207 "data/maps/RustboroCity/scripts.pory"
	release
# 208 "data/maps/RustboroCity/scripts.pory"
	end
# 209 "data/maps/RustboroCity/scripts.pory"

# 210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0::
# 211 "data/maps/RustboroCity/scripts.pory"
	lockall
# 212 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 213 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 214 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 215 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 216 "data/maps/RustboroCity/scripts.pory"
	end
# 217 "data/maps/RustboroCity/scripts.pory"

# 218 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1::
# 219 "data/maps/RustboroCity/scripts.pory"
	lockall
# 220 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 221 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 222 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 223 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 224 "data/maps/RustboroCity/scripts.pory"
	end
# 225 "data/maps/RustboroCity/scripts.pory"

# 226 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2::
# 227 "data/maps/RustboroCity/scripts.pory"
	lockall
# 228 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 229 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 230 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 231 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 232 "data/maps/RustboroCity/scripts.pory"
	end
# 233 "data/maps/RustboroCity/scripts.pory"

# 234 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3::
# 235 "data/maps/RustboroCity/scripts.pory"
	lockall
# 236 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 237 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 238 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 239 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 240 "data/maps/RustboroCity/scripts.pory"
	end
# 241 "data/maps/RustboroCity/scripts.pory"

# 242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4::
# 243 "data/maps/RustboroCity/scripts.pory"
	lockall
# 244 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 12, 18
# 245 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 246 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 247 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 248 "data/maps/RustboroCity/scripts.pory"
	end
# 249 "data/maps/RustboroCity/scripts.pory"

# 250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene::
# 251 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 252 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 253 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_HG_ENCOUNTER_ROCKET, FALSE
# 254 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 255 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 256 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 257 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 258 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 259 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 260 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 261 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 262 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 263 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 264 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 265 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 267 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 268 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 269 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 270 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 271 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 272 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 273 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 274 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 275 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 276 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 277 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 278 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 279 "data/maps/RustboroCity/scripts.pory"
	end
# 280 "data/maps/RustboroCity/scripts.pory"

# 281 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff::
# 283 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 284 "data/maps/RustboroCity/scripts.pory"
	return
# 285 "data/maps/RustboroCity/scripts.pory"

# 286 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou::
# 288 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 289 "data/maps/RustboroCity/scripts.pory"
	return
# 290 "data/maps/RustboroCity/scripts.pory"

# 291 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp::
# 293 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 294 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 295 "data/maps/RustboroCity/scripts.pory"
	return
# 296 "data/maps/RustboroCity/scripts.pory"

# 297 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 298 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft::
# 299 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 300 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 301 "data/maps/RustboroCity/scripts.pory"
	return
# 302 "data/maps/RustboroCity/scripts.pory"

# 303 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 304 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight::
# 305 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 306 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/RustboroCity/scripts.pory"
	return
# 308 "data/maps/RustboroCity/scripts.pory"

# 309 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 310 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown::
# 311 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 312 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 313 "data/maps/RustboroCity/scripts.pory"
	return
# 314 "data/maps/RustboroCity/scripts.pory"

# 315 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 316 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar::
# 317 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 318 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 321 "data/maps/RustboroCity/scripts.pory"
	return
# 322 "data/maps/RustboroCity/scripts.pory"

# 323 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 324 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended:
# 325 "data/maps/RustboroCity/scripts.pory"
	walk_faster_down
# 326 "data/maps/RustboroCity/scripts.pory"
	walk_faster_down
# 327 "data/maps/RustboroCity/scripts.pory"
	walk_faster_down
# 328 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 329 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 330 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 331 "data/maps/RustboroCity/scripts.pory"
	walk_faster_right
# 332 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 333 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 334 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 335 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 336 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 337 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 338 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 339 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 340 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 341 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 342 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 343 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 344 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 345 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 346 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 347 "data/maps/RustboroCity/scripts.pory"
	step_end
# 348 "data/maps/RustboroCity/scripts.pory"

# 349 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape:
# 350 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 351 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 352 "data/maps/RustboroCity/scripts.pory"
	walk_fast_down
# 353 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 354 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 355 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 356 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 357 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 358 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 359 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 360 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 361 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 362 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 363 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 364 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 365 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 366 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 367 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 368 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 369 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 370 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 371 "data/maps/RustboroCity/scripts.pory"
	step_end
# 372 "data/maps/RustboroCity/scripts.pory"

# 373 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1:
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_up
# 386 "data/maps/RustboroCity/scripts.pory"
	step_end
# 387 "data/maps/RustboroCity/scripts.pory"

# 388 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2:
# 389 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 390 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 396 "data/maps/RustboroCity/scripts.pory"
	step_end
# 397 "data/maps/RustboroCity/scripts.pory"

# 398 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 399 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp:
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 403 "data/maps/RustboroCity/scripts.pory"
	step_end
# 404 "data/maps/RustboroCity/scripts.pory"

# 405 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 406 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft:
# 407 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 408 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 409 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 411 "data/maps/RustboroCity/scripts.pory"
	step_end
# 412 "data/maps/RustboroCity/scripts.pory"

# 413 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 414 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight:
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 417 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 418 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 419 "data/maps/RustboroCity/scripts.pory"
	step_end
# 420 "data/maps/RustboroCity/scripts.pory"

# 421 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 422 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown:
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_down
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
RustboroCity_Movement_EmployeeApproachPlayerFar:
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
	walk_right
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_faster_down
# 439 "data/maps/RustboroCity/scripts.pory"
	step_end
# 440 "data/maps/RustboroCity/scripts.pory"

# 441 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1::
# 442 "data/maps/RustboroCity/scripts.pory"
	lock
# 443 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 444 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 445 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 446 "data/maps/RustboroCity/scripts.pory"
	release
# 447 "data/maps/RustboroCity/scripts.pory"
	end
# 448 "data/maps/RustboroCity/scripts.pory"

# 449 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee::
# 450 "data/maps/RustboroCity/scripts.pory"
	waitse
# 451 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 452 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 453 "data/maps/RustboroCity/scripts.pory"
	end
# 454 "data/maps/RustboroCity/scripts.pory"

# 455 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0::
# 456 "data/maps/RustboroCity/scripts.pory"
	lockall
# 457 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 458 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 459 "data/maps/RustboroCity/scripts.pory"
	end
# 460 "data/maps/RustboroCity/scripts.pory"

# 461 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1::
# 462 "data/maps/RustboroCity/scripts.pory"
	lockall
# 463 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 464 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 465 "data/maps/RustboroCity/scripts.pory"
	end
# 466 "data/maps/RustboroCity/scripts.pory"

# 467 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2::
# 468 "data/maps/RustboroCity/scripts.pory"
	lockall
# 469 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 470 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 471 "data/maps/RustboroCity/scripts.pory"
	end
# 472 "data/maps/RustboroCity/scripts.pory"

# 473 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3::
# 474 "data/maps/RustboroCity/scripts.pory"
	lockall
# 475 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 476 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 477 "data/maps/RustboroCity/scripts.pory"
	end
# 478 "data/maps/RustboroCity/scripts.pory"

# 479 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods::
# 480 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp1
# 481 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 482 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown1
# 483 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 484 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 485 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 486 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 487 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 488 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 489 "data/maps/RustboroCity/scripts.pory"
	end
# 490 "data/maps/RustboroCity/scripts.pory"

# 491 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 492 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1::
# 493 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 494 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 495 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 496 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 497 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 498 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 499 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 500 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 501 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 502 "data/maps/RustboroCity/scripts.pory"
	return
# 503 "data/maps/RustboroCity/scripts.pory"

# 504 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1::
# 505 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 506 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 508 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 509 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 510 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 511 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 512 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 513 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 514 "data/maps/RustboroCity/scripts.pory"
	return
# 515 "data/maps/RustboroCity/scripts.pory"

# 516 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1::
# 517 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 518 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 519 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 520 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 521 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 522 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 523 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 524 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 525 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 526 "data/maps/RustboroCity/scripts.pory"
	return
# 527 "data/maps/RustboroCity/scripts.pory"

# 528 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1::
# 529 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 530 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 531 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 532 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 533 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 534 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 535 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 537 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 538 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 539 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 540 "data/maps/RustboroCity/scripts.pory"
	return
# 541 "data/maps/RustboroCity/scripts.pory"

# 542 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown:
# 543 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 544 "data/maps/RustboroCity/scripts.pory"
	step_end
# 545 "data/maps/RustboroCity/scripts.pory"

# 546 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0::
# 547 "data/maps/RustboroCity/scripts.pory"
	lockall
# 548 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 549 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 550 "data/maps/RustboroCity/scripts.pory"
	end
# 551 "data/maps/RustboroCity/scripts.pory"

# 552 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1::
# 553 "data/maps/RustboroCity/scripts.pory"
	lockall
# 554 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 555 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 556 "data/maps/RustboroCity/scripts.pory"
	end
# 557 "data/maps/RustboroCity/scripts.pory"

# 558 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2::
# 559 "data/maps/RustboroCity/scripts.pory"
	lockall
# 560 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 561 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 562 "data/maps/RustboroCity/scripts.pory"
	end
# 563 "data/maps/RustboroCity/scripts.pory"

# 564 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3::
# 565 "data/maps/RustboroCity/scripts.pory"
	lockall
# 566 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 567 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 568 "data/maps/RustboroCity/scripts.pory"
	end
# 569 "data/maps/RustboroCity/scripts.pory"

# 570 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger4::
# 571 "data/maps/RustboroCity/scripts.pory"
	lockall
# 572 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 5
# 573 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 574 "data/maps/RustboroCity/scripts.pory"
	end
# 575 "data/maps/RustboroCity/scripts.pory"

# 576 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger5::
# 577 "data/maps/RustboroCity/scripts.pory"
	lockall
# 578 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 6
# 579 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 580 "data/maps/RustboroCity/scripts.pory"
	end
# 581 "data/maps/RustboroCity/scripts.pory"

# 582 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger6::
# 583 "data/maps/RustboroCity/scripts.pory"
	lockall
# 584 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 7
# 585 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 586 "data/maps/RustboroCity/scripts.pory"
	end
# 587 "data/maps/RustboroCity/scripts.pory"

# 588 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger7::
# 589 "data/maps/RustboroCity/scripts.pory"
	lockall
# 590 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 8
# 591 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 592 "data/maps/RustboroCity/scripts.pory"
	end
# 593 "data/maps/RustboroCity/scripts.pory"

# 594 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods::
# 595 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, RustboroCity_EventScript_EmployeeFacePlayerUp2
# 596 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 597 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RustboroCity_EventScript_EmployeeFacePlayerDown2
# 598 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 599 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, RustboroCity_EventScript_EmployeeFacePlayerRight
# 600 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 5, RustboroCity_EventScript_Employee2_Approach1
# 601 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 6, RustboroCity_EventScript_Employee2_Approach2
# 602 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 7, RustboroCity_EventScript_Employee2_Approach3
# 603 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 8, RustboroCity_EventScript_Employee2_Approach4
# 604 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 605 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 606 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, RustboroCity_EventScript_BagFull
# 607 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 608 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 609 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 610 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 611 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_2
# 612 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 613 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 614 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 2, 2
# 615 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 616 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 617 "data/maps/RustboroCity/scripts.pory"
	end
# 618 "data/maps/RustboroCity/scripts.pory"

# 619 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull::
# 620 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 621 "data/maps/RustboroCity/scripts.pory"
	return
# 622 "data/maps/RustboroCity/scripts.pory"

# 623 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2::
# 624 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 625 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 627 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 628 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 630 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 632 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 633 "data/maps/RustboroCity/scripts.pory"
	return
# 634 "data/maps/RustboroCity/scripts.pory"

# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2::
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterRight
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	return
# 646 "data/maps/RustboroCity/scripts.pory"

# 647 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2::
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	return
# 658 "data/maps/RustboroCity/scripts.pory"

# 659 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2::
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterDown
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 670 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/RustboroCity/scripts.pory"
	return
# 672 "data/maps/RustboroCity/scripts.pory"

# 673 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight::
# 674 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterLeft
# 675 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 680 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 681 "data/maps/RustboroCity/scripts.pory"
	return
# 682 "data/maps/RustboroCity/scripts.pory"

# 683 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach1::
# 684 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 685 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 686 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 688 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 689 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer1
# 690 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 691 "data/maps/RustboroCity/scripts.pory"
	return
# 692 "data/maps/RustboroCity/scripts.pory"

# 693 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach2::
# 694 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 695 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 696 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 697 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 698 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 699 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer2
# 700 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 701 "data/maps/RustboroCity/scripts.pory"
	return
# 702 "data/maps/RustboroCity/scripts.pory"

# 703 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach3::
# 704 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 705 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 706 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 707 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 708 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 709 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer3
# 710 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 711 "data/maps/RustboroCity/scripts.pory"
	return
# 712 "data/maps/RustboroCity/scripts.pory"

# 713 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Employee2_Approach4::
# 714 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 715 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_ExclamationMark
# 716 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 717 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, Common_Movement_Delay48
# 718 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 719 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE_2, RustboroCity_Movement_Employee2ApproachPlayer4
# 720 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 721 "data/maps/RustboroCity/scripts.pory"
	return
# 722 "data/maps/RustboroCity/scripts.pory"

# 723 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer1:
# 724 "data/maps/RustboroCity/scripts.pory"
	face_left
# 725 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 726 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 727 "data/maps/RustboroCity/scripts.pory"
	face_down
# 728 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 729 "data/maps/RustboroCity/scripts.pory"
	step_end
# 730 "data/maps/RustboroCity/scripts.pory"

# 731 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer2:
# 732 "data/maps/RustboroCity/scripts.pory"
	face_down
# 733 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 734 "data/maps/RustboroCity/scripts.pory"
	step_end
# 735 "data/maps/RustboroCity/scripts.pory"

# 736 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer3:
# 737 "data/maps/RustboroCity/scripts.pory"
	face_right
# 738 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 739 "data/maps/RustboroCity/scripts.pory"
	face_down
# 740 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 741 "data/maps/RustboroCity/scripts.pory"
	step_end
# 742 "data/maps/RustboroCity/scripts.pory"

# 743 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_Employee2ApproachPlayer4:
# 744 "data/maps/RustboroCity/scripts.pory"
	face_right
# 745 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 746 "data/maps/RustboroCity/scripts.pory"
	walk_right
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

# 753 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival::
# 754 "data/maps/RustboroCity/scripts.pory"
	lockall
# 755 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 756 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 757 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 759 "data/maps/RustboroCity/scripts.pory"

# 760 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic::
# 761 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 762 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_PlayMayMusic
# 763 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_PlayBrendanMusic
# 764 "data/maps/RustboroCity/scripts.pory"
	return
# 765 "data/maps/RustboroCity/scripts.pory"

# 766 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic::
# 767 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 768 "data/maps/RustboroCity/scripts.pory"
	return
# 769 "data/maps/RustboroCity/scripts.pory"

# 770 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic::
# 771 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 772 "data/maps/RustboroCity/scripts.pory"
	return
# 773 "data/maps/RustboroCity/scripts.pory"

# 774 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0::
# 775 "data/maps/RustboroCity/scripts.pory"
	lockall
# 776 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 777 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 778 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 779 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 780 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 781 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 782 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 783 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 785 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 786 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 787 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 788 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 789 "data/maps/RustboroCity/scripts.pory"

# 790 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1::
# 791 "data/maps/RustboroCity/scripts.pory"
	lockall
# 792 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 793 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 794 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 796 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 797 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 798 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 799 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 801 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 802 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 803 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 805 "data/maps/RustboroCity/scripts.pory"

# 806 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2::
# 807 "data/maps/RustboroCity/scripts.pory"
	lockall
# 808 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 809 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 810 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 812 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 813 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 815 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 816 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 817 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 818 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 819 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 821 "data/maps/RustboroCity/scripts.pory"

# 822 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3::
# 823 "data/maps/RustboroCity/scripts.pory"
	lockall
# 824 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 825 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 826 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 828 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 829 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 831 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 833 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 834 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 835 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 837 "data/maps/RustboroCity/scripts.pory"

# 838 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4::
# 839 "data/maps/RustboroCity/scripts.pory"
	lockall
# 840 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 841 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 842 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 844 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 845 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 846 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 847 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 848 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 849 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 850 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 851 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 853 "data/maps/RustboroCity/scripts.pory"

# 854 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5::
# 855 "data/maps/RustboroCity/scripts.pory"
	lockall
# 856 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 857 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 858 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 859 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 860 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 861 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 862 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 863 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 864 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 865 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 866 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 867 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 868 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 869 "data/maps/RustboroCity/scripts.pory"

# 870 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6::
# 871 "data/maps/RustboroCity/scripts.pory"
	lockall
# 872 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 873 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 874 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 875 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 876 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 877 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 878 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 879 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 880 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 881 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 882 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 883 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 884 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 885 "data/maps/RustboroCity/scripts.pory"

# 886 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7::
# 887 "data/maps/RustboroCity/scripts.pory"
	lockall
# 888 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 889 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 890 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 891 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 892 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 893 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 894 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 895 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 896 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 897 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 898 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 899 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 900 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 901 "data/maps/RustboroCity/scripts.pory"

# 902 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter::
# 903 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 904 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RustboroCity_EventScript_MayEncounter
# 905 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RustboroCity_EventScript_BrendanEncounter
# 906 "data/maps/RustboroCity/scripts.pory"
	end
# 907 "data/maps/RustboroCity/scripts.pory"

# 908 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter::
# 909 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 910 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 911 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 912 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 913 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 914 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 915 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 916 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 917 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 918 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 919 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 920 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 921 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 922 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 923 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 924 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 925 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 926 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 927 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 928 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 929 "data/maps/RustboroCity/scripts.pory"
	end
# 930 "data/maps/RustboroCity/scripts.pory"

# 931 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle::
# 932 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 933 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 934 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleMay
# 935 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 936 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 937 "data/maps/RustboroCity/scripts.pory"
	end
# 938 "data/maps/RustboroCity/scripts.pory"

# 939 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay::
# 940 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 941 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 942 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 943 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 944 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 945 "data/maps/RustboroCity/scripts.pory"
	end
# 946 "data/maps/RustboroCity/scripts.pory"

# 947 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint::
# 948 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 949 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 950 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 951 "data/maps/RustboroCity/scripts.pory"
	end
# 952 "data/maps/RustboroCity/scripts.pory"

# 953 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm::
# 954 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 955 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 956 "data/maps/RustboroCity/scripts.pory"
	return
# 957 "data/maps/RustboroCity/scripts.pory"

# 958 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko::
# 959 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 960 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 961 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 962 "data/maps/RustboroCity/scripts.pory"
	end
# 963 "data/maps/RustboroCity/scripts.pory"

# 964 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic::
# 965 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 966 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 967 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 968 "data/maps/RustboroCity/scripts.pory"
	end
# 969 "data/maps/RustboroCity/scripts.pory"

# 970 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip::
# 971 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 972 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 973 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 974 "data/maps/RustboroCity/scripts.pory"
	end
# 975 "data/maps/RustboroCity/scripts.pory"

# 976 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter::
# 977 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 978 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 979 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 980 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 981 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 982 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 983 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 984 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 985 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 986 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 987 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 988 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 989 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 990 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 991 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 992 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 993 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 994 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 995 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 996 "data/maps/RustboroCity/scripts.pory"
	end
# 997 "data/maps/RustboroCity/scripts.pory"

# 998 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle::
# 999 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 1000 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, RustboroCity_EventScript_BattleBrendan
# 1001 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 1002 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1003 "data/maps/RustboroCity/scripts.pory"
	end
# 1004 "data/maps/RustboroCity/scripts.pory"

# 1005 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan::
# 1006 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 1007 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 1008 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 1009 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 1010 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 1011 "data/maps/RustboroCity/scripts.pory"
	end
# 1012 "data/maps/RustboroCity/scripts.pory"

# 1013 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint::
# 1014 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 1015 "data/maps/RustboroCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, RustboroCity_EventScript_RestoreBgm
# 1016 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 1017 "data/maps/RustboroCity/scripts.pory"
	end
# 1018 "data/maps/RustboroCity/scripts.pory"

# 1019 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko::
# 1020 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 1021 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1022 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1023 "data/maps/RustboroCity/scripts.pory"
	end
# 1024 "data/maps/RustboroCity/scripts.pory"

# 1025 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic::
# 1026 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 1027 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1028 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1029 "data/maps/RustboroCity/scripts.pory"
	end
# 1030 "data/maps/RustboroCity/scripts.pory"

# 1031 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip::
# 1032 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 1033 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 1034 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 1035 "data/maps/RustboroCity/scripts.pory"
	end
# 1036 "data/maps/RustboroCity/scripts.pory"

# 1037 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0:
# 1038 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1039 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1040 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1041 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1042 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1043 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1044 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1045 "data/maps/RustboroCity/scripts.pory"

# 1046 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1:
# 1047 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1048 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1049 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1050 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1051 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1052 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1053 "data/maps/RustboroCity/scripts.pory"

# 1054 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2:
# 1055 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1056 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1057 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1058 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1059 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1060 "data/maps/RustboroCity/scripts.pory"

# 1061 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3:
# 1062 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1063 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1064 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1065 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1066 "data/maps/RustboroCity/scripts.pory"

# 1067 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4:
# 1068 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1069 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1070 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1071 "data/maps/RustboroCity/scripts.pory"

# 1072 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5:
# 1073 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1074 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1075 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1076 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6:
# 1079 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1080 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1081 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1082 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1083 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1084 "data/maps/RustboroCity/scripts.pory"

# 1085 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7:
# 1086 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1087 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1088 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1089 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1090 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1091 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1092 "data/maps/RustboroCity/scripts.pory"

# 1093 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1::
# 1094 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1095 "data/maps/RustboroCity/scripts.pory"
	end
# 1096 "data/maps/RustboroCity/scripts.pory"

# 1097 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon:
# 1098 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\n"
# 1099 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to Devon.\p"
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1102 "data/maps/RustboroCity/scripts.pory"

# 1103 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner:
# 1104 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1107 "data/maps/RustboroCity/scripts.pory"

# 1108 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym:
# 1109 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the Pokémon Gym\n"
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny Gym Badge\n"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess Trainers begin to\l"
# 1113 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1114 "data/maps/RustboroCity/scripts.pory"

# 1115 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge:
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
# 1117 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the Pokémon Gym Badges,\n"
# 1118 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's is the coolest, I'd say.$"
# 1119 "data/maps/RustboroCity/scripts.pory"

# 1120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere:
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1123 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1124 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School?$"
# 1125 "data/maps/RustboroCity/scripts.pory"

# 1126 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire:
# 1127 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
# 1128 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "my Fire-type Pokémon…\p"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "Fire-type Pokémon don't match up\n"
# 1131 "data/maps/RustboroCity/scripts.pory"
	.string "well against Rock-type Pokémon…$"
# 1132 "data/maps/RustboroCity/scripts.pory"

# 1133 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel:
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1138 "data/maps/RustboroCity/scripts.pory"

# 1139 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko:
# 1140 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1141 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport for his pet, Peeko.\p"
# 1144 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1145 "data/maps/RustboroCity/scripts.pory"
	.string "that Peeko.$"
# 1146 "data/maps/RustboroCity/scripts.pory"

# 1147 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon:
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have Pokémon with you, too.\p"
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "places with Pokémon, too.$"
# 1151 "data/maps/RustboroCity/scripts.pory"

# 1152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool:
# 1153 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School!\p"
# 1154 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare Pokémon easily?$"
# 1156 "data/maps/RustboroCity/scripts.pory"

# 1157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp:
# 1158 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience in\n"
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1161 "data/maps/RustboroCity/scripts.pory"

# 1162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape:
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon changes shape?\n"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1165 "data/maps/RustboroCity/scripts.pory"

# 1166 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast:
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\n"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1169 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain Gym\n"
# 1170 "data/maps/RustboroCity/scripts.pory"
	.string "Badges, it may not obey you…$"
# 1171 "data/maps/RustboroCity/scripts.pory"

# 1172 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay:
# 1173 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1174 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1175 "data/maps/RustboroCity/scripts.pory"

# 1176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods:
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 1179 "data/maps/RustboroCity/scripts.pory"

# 1180 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed:
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic Trainer who\n"
# 1183 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in Petalburg Woods!\p"
# 1184 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by Team Aqua!\n"
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1188 "data/maps/RustboroCity/scripts.pory"

# 1189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel:
# 1190 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1192 "data/maps/RustboroCity/scripts.pory"

# 1193 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou:
# 1194 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Goods?\p"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1197 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1198 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "a Heart Scale!$"
# 1201 "data/maps/RustboroCity/scripts.pory"

# 1202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems:
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Heart Scale.$"
# 1205 "data/maps/RustboroCity/scripts.pory"

# 1206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe:
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1208 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1209 "data/maps/RustboroCity/scripts.pory"

# 1210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister:
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "on your Pokénav!\p"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1216 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1217 "data/maps/RustboroCity/scripts.pory"

# 1218 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay:
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "Registered MAY\n"
# 1220 "data/maps/RustboroCity/scripts.pory"
	.string "in the Pokénav.$"
# 1221 "data/maps/RustboroCity/scripts.pory"

# 1222 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle:
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, I passed\n"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney in PETALBURG WOODS.\p"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "How's your Pokédex coming along,\n"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1231 "data/maps/RustboroCity/scripts.pory"

# 1232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough:
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1235 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon very much?\p"
# 1236 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a Trainer!$"
# 1237 "data/maps/RustboroCity/scripts.pory"

# 1238 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle:
# 1239 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1240 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1241 "data/maps/RustboroCity/scripts.pory"

# 1242 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose:
# 1243 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: You just became a Trainer,\n"
# 1244 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1245 "data/maps/RustboroCity/scripts.pory"

# 1246 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat:
# 1247 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1248 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1249 "data/maps/RustboroCity/scripts.pory"

# 1250 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint:
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "MAY: Oh, by the way, Mr. Briney, who\n"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1254 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but Mr. Briney\l"
# 1255 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1256 "data/maps/RustboroCity/scripts.pory"

# 1257 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister:
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "You had a MATCH CALL feature put\n"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "on your Pokénav! Cool!\p"
# 1261 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1262 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1264 "data/maps/RustboroCity/scripts.pory"

# 1265 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan:
# 1266 "data/maps/RustboroCity/scripts.pory"
	.string "Registered BRENDAN\n"
# 1267 "data/maps/RustboroCity/scripts.pory"
	.string "in the Pokénav.$"
# 1268 "data/maps/RustboroCity/scripts.pory"

# 1269 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle:
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, {PLAYER}, I walked\n"
# 1271 "data/maps/RustboroCity/scripts.pory"
	.string "by Mr. Briney in PETALBURG WOODS.\p"
# 1272 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your Pokédex?\n"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1276 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1277 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1279 "data/maps/RustboroCity/scripts.pory"

# 1280 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon:
# 1281 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1282 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1283 "data/maps/RustboroCity/scripts.pory"

# 1284 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle:
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1286 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1287 "data/maps/RustboroCity/scripts.pory"

# 1288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy:
# 1289 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1290 "data/maps/RustboroCity/scripts.pory"
	.string "a Trainer, but I won't go easy!$"
# 1291 "data/maps/RustboroCity/scripts.pory"

# 1292 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat:
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1295 "data/maps/RustboroCity/scripts.pory"

# 1296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint:
# 1297 "data/maps/RustboroCity/scripts.pory"
	.string "BRENDAN: By the way, you know\n"
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney? The guy I just passed?\p"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney was once a great sailor.$"
# 1302 "data/maps/RustboroCity/scripts.pory"

# 1303 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion:
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1308 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1309 "data/maps/RustboroCity/scripts.pory"

# 1310 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign:
# 1311 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1312 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1314 "data/maps/RustboroCity/scripts.pory"

# 1315 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign:
# 1316 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: Roxanne\p"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "“The Rock-loving honors student!”$"
# 1319 "data/maps/RustboroCity/scripts.pory"

# 1320 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign:
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to Devon employees\n"
# 1323 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1324 "data/maps/RustboroCity/scripts.pory"

# 1325 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign:
# 1326 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
# 1327 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1328 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1329 "data/maps/RustboroCity/scripts.pory"

# 1330 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign:
# 1331 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
# 1332 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1333 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon!”$"
# 1334 "data/maps/RustboroCity/scripts.pory"

# 1335 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse:
# 1336 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"
# 1337 "data/maps/RustboroCity/scripts.pory"

# 1338 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature:
# 1339 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1340 "data/maps/RustboroCity/scripts.pory"
	.string "for the Pokénav…\p"
# 1341 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1342 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that Pokénav?\n"
# 1343 "data/maps/RustboroCity/scripts.pory"
	.string "The one our PRESIDENT gave you?$"
# 1344 "data/maps/RustboroCity/scripts.pory"

# 1345 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone:
# 1346 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1347 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1348 "data/maps/RustboroCity/scripts.pory"
	.string "MATCH CALL to your Pokénav.\p"
# 1349 "data/maps/RustboroCity/scripts.pory"
	.string "Using the MATCH CALL feature,\n"
# 1350 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1351 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your Pokénav.\p"
# 1352 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our PRESIDENT STONE should\n"
# 1353 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your Pokénav.\p"
# 1354 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1355 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our PRESIDENT a call.$"
# 1356 "data/maps/RustboroCity/scripts.pory"

# 1357 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav:
# 1358 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the Pokénav.$"
# 1359 "data/maps/RustboroCity/scripts.pory"

# 1360 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork:
# 1361 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1362 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1363 "data/maps/RustboroCity/scripts.pory"

# 1364 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle:
# 1365 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1366 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1367 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another Trainer.\p"
# 1368 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two Trainers\n"
# 1369 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more Pokémon,\l"
# 1370 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1371 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1372 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two Trainers by yourself?$"

RustboroCity_EventScript_GymGuide_Text_0:
# 14 "data/maps/RustboroCity/scripts.pory"
	.string "Roxanne is off training at Rusturf\n"
	.string "Tunnel, please come back later.$"
