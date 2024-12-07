RouteEight_MapScripts::
	.byte 0


RouteEight_EventScript_Ben::
# 6 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_BEN, RouteEight_Text_BenIntro, RouteEight_Text_BenDefeat
# 7 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end


RouteEight_EventScript_Dusty::
# 24 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, RouteEight_Text_DustyIntro, RouteEight_Text_DustyDefeat
# 25 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
	end


RouteEight_EventScript_Beau::
# 42 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_BEAU, RouteEight_Text_BeauIntro, RouteEight_Text_BeauDefeat
# 43 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end


RouteEight_EventScript_Heidi::
# 60 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, RouteEight_Text_HeidiIntro, RouteEight_Text_HeidiDefeat
# 61 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
	end


RouteEight_EventScript_Chip::
# 78 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_CHIP, RouteEight_Text_ChipIntro, RouteEight_Text_ChipDefeat
# 79 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
	end


RouteEight_EventScript_GruntNorth::
# 96 "data/maps/RouteEight/scripts.pory"
	lock
# 97 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_GALACTIC, FALSE
# 98 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 99 "data/maps/RouteEight/scripts.pory"
	applymovement 12, GruntMovementNorth
# 100 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 101 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_EventScript_GruntNorth_Text_0
# 102 "data/maps/RouteEight/scripts.pory"
	closemessage
# 103 "data/maps/RouteEight/scripts.pory"
	applymovement 12, GruntMovementLeavingNorth
# 104 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 105 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_DP_ROUTE206_DAY, FALSE
# 106 "data/maps/RouteEight/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 107 "data/maps/RouteEight/scripts.pory"
	setvar VAR_ROUTE_EIGHT_STATE, 1
# 108 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_DEFEATED_GALACTIC_GRUNT
# 109 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_HIDE_ROUTE_EIGHT_GALACTIC_GRUNT
# 110 "data/maps/RouteEight/scripts.pory"
	removeobject 12
# 111 "data/maps/RouteEight/scripts.pory"
	releaseall
	end


RouteEight_EventScript_GruntSouth::
# 116 "data/maps/RouteEight/scripts.pory"
	lock
# 117 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_GALACTIC, FALSE
# 118 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 119 "data/maps/RouteEight/scripts.pory"
	applymovement 12, GruntMovementSouth
# 120 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 121 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_EventScript_GruntNorth_Text_0
# 122 "data/maps/RouteEight/scripts.pory"
	closemessage
# 123 "data/maps/RouteEight/scripts.pory"
	applymovement 12, GruntMovementLeavingSouth
# 124 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 125 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_DP_ROUTE206_DAY, FALSE
# 126 "data/maps/RouteEight/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 127 "data/maps/RouteEight/scripts.pory"
	setvar VAR_ROUTE_EIGHT_STATE, 1
# 128 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_DEFEATED_GALACTIC_GRUNT
# 129 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_HIDE_ROUTE_EIGHT_GALACTIC_GRUNT
# 130 "data/maps/RouteEight/scripts.pory"
	removeobject 12
# 131 "data/maps/RouteEight/scripts.pory"
	releaseall
	end


# 135 "data/maps/RouteEight/scripts.pory"
GruntMovementNorth:
# 136 "data/maps/RouteEight/scripts.pory"
	walk_left
# 136 "data/maps/RouteEight/scripts.pory"
	walk_left
# 136 "data/maps/RouteEight/scripts.pory"
	walk_left
# 136 "data/maps/RouteEight/scripts.pory"
	walk_left
# 136 "data/maps/RouteEight/scripts.pory"
	walk_left
# 136 "data/maps/RouteEight/scripts.pory"
	walk_left
# 136 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/RouteEight/scripts.pory"
GruntMovementSouth:
# 140 "data/maps/RouteEight/scripts.pory"
	face_down
# 141 "data/maps/RouteEight/scripts.pory"
	walk_down
# 142 "data/maps/RouteEight/scripts.pory"
	face_left
# 143 "data/maps/RouteEight/scripts.pory"
	walk_left
# 143 "data/maps/RouteEight/scripts.pory"
	walk_left
# 143 "data/maps/RouteEight/scripts.pory"
	walk_left
# 143 "data/maps/RouteEight/scripts.pory"
	walk_left
# 143 "data/maps/RouteEight/scripts.pory"
	walk_left
# 143 "data/maps/RouteEight/scripts.pory"
	walk_left
# 143 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

# 146 "data/maps/RouteEight/scripts.pory"
GruntMovementLeavingNorth:
# 147 "data/maps/RouteEight/scripts.pory"
	face_down
# 148 "data/maps/RouteEight/scripts.pory"
	walk_down
# 149 "data/maps/RouteEight/scripts.pory"
	face_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
# 150 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

# 153 "data/maps/RouteEight/scripts.pory"
GruntMovementLeavingSouth:
# 154 "data/maps/RouteEight/scripts.pory"
	face_up
# 155 "data/maps/RouteEight/scripts.pory"
	walk_up
# 156 "data/maps/RouteEight/scripts.pory"
	face_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
# 157 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

RouteEight_EventScript_FindWiseGlasses::
# 161 "data/maps/RouteEight/scripts.pory"
	finditem ITEM_WISE_GLASSES
	end


# 166 "data/maps/RouteEight/scripts.pory"

# 167 "data/maps/RouteEight/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 168 "data/maps/RouteEight/scripts.pory"
.set LOCALID_RIVAL, 28
# 169 "data/maps/RouteEight/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 170 "data/maps/RouteEight/scripts.pory"
.set LOCALID_BIRCH, 36
# 171 "data/maps/RouteEight/scripts.pory"

# 172 "data/maps/RouteEight/scripts.pory"
Route110_MapScripts::
# 173 "data/maps/RouteEight/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 174 "data/maps/RouteEight/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 175 "data/maps/RouteEight/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 176 "data/maps/RouteEight/scripts.pory"
	.byte 0
# 177 "data/maps/RouteEight/scripts.pory"

# 178 "data/maps/RouteEight/scripts.pory"
Route110_OnResume:
# 179 "data/maps/RouteEight/scripts.pory"
	special UpdateCyclingRoadState
# 180 "data/maps/RouteEight/scripts.pory"
	end
# 181 "data/maps/RouteEight/scripts.pory"

# 182 "data/maps/RouteEight/scripts.pory"
Route110_OnTransition:
# 183 "data/maps/RouteEight/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 184 "data/maps/RouteEight/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 185 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 186 "data/maps/RouteEight/scripts.pory"
	end
# 187 "data/maps/RouteEight/scripts.pory"

# 188 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 189 "data/maps/RouteEight/scripts.pory"
	savebgm MUS_CYCLING
# 190 "data/maps/RouteEight/scripts.pory"
	return
# 191 "data/maps/RouteEight/scripts.pory"

# 192 "data/maps/RouteEight/scripts.pory"
Route110_OnFrame:
# 193 "data/maps/RouteEight/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 194 "data/maps/RouteEight/scripts.pory"
	.2byte 0
# 195 "data/maps/RouteEight/scripts.pory"

# 196 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 197 "data/maps/RouteEight/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 198 "data/maps/RouteEight/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 199 "data/maps/RouteEight/scripts.pory"
	return
# 200 "data/maps/RouteEight/scripts.pory"

# 201 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 202 "data/maps/RouteEight/scripts.pory"
	lock
# 203 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 204 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 205 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 206 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 207 "data/maps/RouteEight/scripts.pory"
	release
# 208 "data/maps/RouteEight/scripts.pory"
	end
# 209 "data/maps/RouteEight/scripts.pory"

# 210 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 211 "data/maps/RouteEight/scripts.pory"
	lock
# 212 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 213 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 214 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 215 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 216 "data/maps/RouteEight/scripts.pory"
	release
# 217 "data/maps/RouteEight/scripts.pory"
	end
# 218 "data/maps/RouteEight/scripts.pory"

# 219 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 220 "data/maps/RouteEight/scripts.pory"
	lock
# 221 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 222 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 223 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 224 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 225 "data/maps/RouteEight/scripts.pory"
	release
# 226 "data/maps/RouteEight/scripts.pory"
	end
# 227 "data/maps/RouteEight/scripts.pory"

# 228 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 229 "data/maps/RouteEight/scripts.pory"
	lock
# 230 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 231 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 232 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 233 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 234 "data/maps/RouteEight/scripts.pory"
	release
# 235 "data/maps/RouteEight/scripts.pory"
	end
# 236 "data/maps/RouteEight/scripts.pory"

# 237 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Boy1::
# 238 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 239 "data/maps/RouteEight/scripts.pory"
	end
# 240 "data/maps/RouteEight/scripts.pory"

# 241 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 242 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 243 "data/maps/RouteEight/scripts.pory"
	end
# 244 "data/maps/RouteEight/scripts.pory"

# 245 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 246 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 247 "data/maps/RouteEight/scripts.pory"
	end
# 248 "data/maps/RouteEight/scripts.pory"

# 249 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_OldMan::
# 250 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 251 "data/maps/RouteEight/scripts.pory"
	end
# 252 "data/maps/RouteEight/scripts.pory"

# 253 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_OldWoman::
# 254 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 255 "data/maps/RouteEight/scripts.pory"
	end
# 256 "data/maps/RouteEight/scripts.pory"

# 257 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 258 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 259 "data/maps/RouteEight/scripts.pory"
	end
# 260 "data/maps/RouteEight/scripts.pory"

# 261 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Boy2::
# 262 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 263 "data/maps/RouteEight/scripts.pory"
	end
# 264 "data/maps/RouteEight/scripts.pory"

# 265 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 266 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 267 "data/maps/RouteEight/scripts.pory"
	end
# 268 "data/maps/RouteEight/scripts.pory"

# 269 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 270 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 271 "data/maps/RouteEight/scripts.pory"
	end
# 272 "data/maps/RouteEight/scripts.pory"

# 273 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_VandalizedSign::
# 274 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 275 "data/maps/RouteEight/scripts.pory"
	end
# 276 "data/maps/RouteEight/scripts.pory"

# 277 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Route103Sign::
# 278 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 279 "data/maps/RouteEight/scripts.pory"
	end
# 280 "data/maps/RouteEight/scripts.pory"

# 281 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 282 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 283 "data/maps/RouteEight/scripts.pory"
	end
# 284 "data/maps/RouteEight/scripts.pory"

# 285 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 286 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 287 "data/maps/RouteEight/scripts.pory"
	end
# 288 "data/maps/RouteEight/scripts.pory"

# 289 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 290 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 291 "data/maps/RouteEight/scripts.pory"
	end
# 292 "data/maps/RouteEight/scripts.pory"

# 293 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 294 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 295 "data/maps/RouteEight/scripts.pory"
	end
# 296 "data/maps/RouteEight/scripts.pory"

# 297 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 298 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 299 "data/maps/RouteEight/scripts.pory"
	end
# 300 "data/maps/RouteEight/scripts.pory"

# 301 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 302 "data/maps/RouteEight/scripts.pory"
	lockall
# 303 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 304 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 305 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 306 "data/maps/RouteEight/scripts.pory"
	releaseall
# 307 "data/maps/RouteEight/scripts.pory"
	end
# 308 "data/maps/RouteEight/scripts.pory"

# 309 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_NoRecordSet::
# 310 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 311 "data/maps/RouteEight/scripts.pory"
	releaseall
# 312 "data/maps/RouteEight/scripts.pory"
	end
# 313 "data/maps/RouteEight/scripts.pory"

# 314 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 315 "data/maps/RouteEight/scripts.pory"
	lock
# 316 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 317 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 318 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 319 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 320 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 321 "data/maps/RouteEight/scripts.pory"
	release
# 322 "data/maps/RouteEight/scripts.pory"
	end
# 323 "data/maps/RouteEight/scripts.pory"

# 324 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 325 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 326 "data/maps/RouteEight/scripts.pory"
	release
# 327 "data/maps/RouteEight/scripts.pory"
	end
# 328 "data/maps/RouteEight/scripts.pory"

# 329 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 330 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 331 "data/maps/RouteEight/scripts.pory"
	release
# 332 "data/maps/RouteEight/scripts.pory"
	end
# 333 "data/maps/RouteEight/scripts.pory"

# 334 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Edward::
# 335 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 336 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 337 "data/maps/RouteEight/scripts.pory"
	end
# 338 "data/maps/RouteEight/scripts.pory"

# 339 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Jaclyn::
# 340 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 341 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 342 "data/maps/RouteEight/scripts.pory"
	end
# 343 "data/maps/RouteEight/scripts.pory"

# 344 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Edwin::
# 345 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 346 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 347 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 348 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 349 "data/maps/RouteEight/scripts.pory"
	release
# 350 "data/maps/RouteEight/scripts.pory"
	end
# 351 "data/maps/RouteEight/scripts.pory"

# 352 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 353 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 354 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 355 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 356 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 357 "data/maps/RouteEight/scripts.pory"
	release
# 358 "data/maps/RouteEight/scripts.pory"
	end
# 359 "data/maps/RouteEight/scripts.pory"

# 360 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_EdwinRematch::
# 361 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 362 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 363 "data/maps/RouteEight/scripts.pory"
	end
# 364 "data/maps/RouteEight/scripts.pory"

# 365 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Dale::
# 366 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 367 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 368 "data/maps/RouteEight/scripts.pory"
	end
# 369 "data/maps/RouteEight/scripts.pory"

# 370 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Jacob::
# 371 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 372 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 373 "data/maps/RouteEight/scripts.pory"
	end
# 374 "data/maps/RouteEight/scripts.pory"

# 375 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Anthony::
# 376 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 377 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 378 "data/maps/RouteEight/scripts.pory"
	end
# 379 "data/maps/RouteEight/scripts.pory"

# 380 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Benjamin::
# 381 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 382 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 383 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 384 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 385 "data/maps/RouteEight/scripts.pory"
	release
# 386 "data/maps/RouteEight/scripts.pory"
	end
# 387 "data/maps/RouteEight/scripts.pory"

# 388 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 389 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 390 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 391 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 392 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 393 "data/maps/RouteEight/scripts.pory"
	release
# 394 "data/maps/RouteEight/scripts.pory"
	end
# 395 "data/maps/RouteEight/scripts.pory"

# 396 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 397 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 398 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 399 "data/maps/RouteEight/scripts.pory"
	end
# 400 "data/maps/RouteEight/scripts.pory"

# 401 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Jasmine::
# 402 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 403 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 404 "data/maps/RouteEight/scripts.pory"
	end
# 405 "data/maps/RouteEight/scripts.pory"

# 406 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Abigail::
# 407 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 408 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 409 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 410 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 411 "data/maps/RouteEight/scripts.pory"
	release
# 412 "data/maps/RouteEight/scripts.pory"
	end
# 413 "data/maps/RouteEight/scripts.pory"

# 414 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 415 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 416 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 417 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 418 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 419 "data/maps/RouteEight/scripts.pory"
	release
# 420 "data/maps/RouteEight/scripts.pory"
	end
# 421 "data/maps/RouteEight/scripts.pory"

# 422 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AbigailRematch::
# 423 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 424 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/RouteEight/scripts.pory"
	end
# 426 "data/maps/RouteEight/scripts.pory"

# 427 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Isabel::
# 428 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 429 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 430 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 431 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 432 "data/maps/RouteEight/scripts.pory"
	release
# 433 "data/maps/RouteEight/scripts.pory"
	end
# 434 "data/maps/RouteEight/scripts.pory"

# 435 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 436 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 437 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 438 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 439 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 440 "data/maps/RouteEight/scripts.pory"
	release
# 441 "data/maps/RouteEight/scripts.pory"
	end
# 442 "data/maps/RouteEight/scripts.pory"

# 443 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_IsabelRematch::
# 444 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 445 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 446 "data/maps/RouteEight/scripts.pory"
	end
# 447 "data/maps/RouteEight/scripts.pory"

# 448 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Timmy::
# 449 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 450 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 451 "data/maps/RouteEight/scripts.pory"
	end
# 452 "data/maps/RouteEight/scripts.pory"

# 453 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Unused::
# 454 "data/maps/RouteEight/scripts.pory"
	end
# 455 "data/maps/RouteEight/scripts.pory"

# 456 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Kaleb::
# 457 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 458 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/RouteEight/scripts.pory"
	end
# 460 "data/maps/RouteEight/scripts.pory"

# 461 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Joseph::
# 462 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 463 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 464 "data/maps/RouteEight/scripts.pory"
	end
# 465 "data/maps/RouteEight/scripts.pory"

# 466 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Alyssa::
# 467 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 468 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 469 "data/maps/RouteEight/scripts.pory"
	end
# 470 "data/maps/RouteEight/scripts.pory"

# 471 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 472 "data/maps/RouteEight/scripts.pory"
	lockall
# 473 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 474 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 475 "data/maps/RouteEight/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 476 "data/maps/RouteEight/scripts.pory"
	releaseall
# 477 "data/maps/RouteEight/scripts.pory"
	end
# 478 "data/maps/RouteEight/scripts.pory"

# 479 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 480 "data/maps/RouteEight/scripts.pory"
	special FinishCyclingRoadChallenge
# 481 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 482 "data/maps/RouteEight/scripts.pory"
	switch VAR_RESULT
# 483 "data/maps/RouteEight/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 484 "data/maps/RouteEight/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 485 "data/maps/RouteEight/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 486 "data/maps/RouteEight/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 487 "data/maps/RouteEight/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 488 "data/maps/RouteEight/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 489 "data/maps/RouteEight/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 490 "data/maps/RouteEight/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 491 "data/maps/RouteEight/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 492 "data/maps/RouteEight/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 493 "data/maps/RouteEight/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 494 "data/maps/RouteEight/scripts.pory"
	end
# 495 "data/maps/RouteEight/scripts.pory"

# 496 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 497 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 498 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 499 "data/maps/RouteEight/scripts.pory"
	end
# 500 "data/maps/RouteEight/scripts.pory"

# 501 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 502 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 503 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 504 "data/maps/RouteEight/scripts.pory"
	end
# 505 "data/maps/RouteEight/scripts.pory"

# 506 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 507 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 508 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 509 "data/maps/RouteEight/scripts.pory"
	end
# 510 "data/maps/RouteEight/scripts.pory"

# 511 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 512 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 513 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 514 "data/maps/RouteEight/scripts.pory"
	end
# 515 "data/maps/RouteEight/scripts.pory"

# 516 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 517 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 518 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 519 "data/maps/RouteEight/scripts.pory"
	end
# 520 "data/maps/RouteEight/scripts.pory"

# 521 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_EndChallenge::
# 522 "data/maps/RouteEight/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 523 "data/maps/RouteEight/scripts.pory"
	savebgm MUS_DUMMY
# 524 "data/maps/RouteEight/scripts.pory"
	fadedefaultbgm
# 525 "data/maps/RouteEight/scripts.pory"
	return
# 526 "data/maps/RouteEight/scripts.pory"

# 527 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 528 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 1
# 529 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalScene
# 530 "data/maps/RouteEight/scripts.pory"
	end
# 531 "data/maps/RouteEight/scripts.pory"

# 532 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 533 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 2
# 534 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalScene
# 535 "data/maps/RouteEight/scripts.pory"
	end
# 536 "data/maps/RouteEight/scripts.pory"

# 537 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 538 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 3
# 539 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalScene
# 540 "data/maps/RouteEight/scripts.pory"
	end
# 541 "data/maps/RouteEight/scripts.pory"

# 542 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalScene::
# 543 "data/maps/RouteEight/scripts.pory"
	lockall
# 544 "data/maps/RouteEight/scripts.pory"
	checkplayergender
# 545 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 546 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 547 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 548 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 549 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 550 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 551 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 552 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 553 "data/maps/RouteEight/scripts.pory"
	delay 30
# 554 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 555 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 556 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 557 "data/maps/RouteEight/scripts.pory"
	checkplayergender
# 558 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 559 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 560 "data/maps/RouteEight/scripts.pory"
	releaseall
# 561 "data/maps/RouteEight/scripts.pory"
	end
# 562 "data/maps/RouteEight/scripts.pory"

# 563 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 564 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 565 "data/maps/RouteEight/scripts.pory"
	return
# 566 "data/maps/RouteEight/scripts.pory"

# 567 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 568 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 569 "data/maps/RouteEight/scripts.pory"
	return
# 570 "data/maps/RouteEight/scripts.pory"

# 571 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattle::
# 572 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 573 "data/maps/RouteEight/scripts.pory"
	switch VAR_STARTER_MON
# 574 "data/maps/RouteEight/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 575 "data/maps/RouteEight/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 576 "data/maps/RouteEight/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 577 "data/maps/RouteEight/scripts.pory"
	end
# 578 "data/maps/RouteEight/scripts.pory"

# 579 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 580 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 581 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 582 "data/maps/RouteEight/scripts.pory"
	end
# 583 "data/maps/RouteEight/scripts.pory"

# 584 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 585 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 586 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 587 "data/maps/RouteEight/scripts.pory"
	end
# 588 "data/maps/RouteEight/scripts.pory"

# 589 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 590 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 591 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 592 "data/maps/RouteEight/scripts.pory"
	end
# 593 "data/maps/RouteEight/scripts.pory"

# 594 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayDefeated::
# 595 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 596 "data/maps/RouteEight/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 597 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 598 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalExit
# 599 "data/maps/RouteEight/scripts.pory"
	end
# 600 "data/maps/RouteEight/scripts.pory"

# 601 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattle::
# 602 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 603 "data/maps/RouteEight/scripts.pory"
	switch VAR_STARTER_MON
# 604 "data/maps/RouteEight/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 605 "data/maps/RouteEight/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 606 "data/maps/RouteEight/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 607 "data/maps/RouteEight/scripts.pory"
	end
# 608 "data/maps/RouteEight/scripts.pory"

# 609 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 610 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 611 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 612 "data/maps/RouteEight/scripts.pory"
	end
# 613 "data/maps/RouteEight/scripts.pory"

# 614 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 615 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 616 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 617 "data/maps/RouteEight/scripts.pory"
	end
# 618 "data/maps/RouteEight/scripts.pory"

# 619 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 620 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 621 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 622 "data/maps/RouteEight/scripts.pory"
	end
# 623 "data/maps/RouteEight/scripts.pory"

# 624 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 625 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 626 "data/maps/RouteEight/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 627 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 628 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalExit
# 629 "data/maps/RouteEight/scripts.pory"
	end
# 630 "data/maps/RouteEight/scripts.pory"

# 631 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 632 "data/maps/RouteEight/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 633 "data/maps/RouteEight/scripts.pory"
	return
# 634 "data/maps/RouteEight/scripts.pory"

# 635 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit::
# 636 "data/maps/RouteEight/scripts.pory"
	closemessage
# 637 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 638 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 639 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 640 "data/maps/RouteEight/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 641 "data/maps/RouteEight/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 642 "data/maps/RouteEight/scripts.pory"
	removeobject LOCALID_RIVAL
# 643 "data/maps/RouteEight/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 644 "data/maps/RouteEight/scripts.pory"
	delay 45
# 645 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 646 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 647 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 648 "data/maps/RouteEight/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 649 "data/maps/RouteEight/scripts.pory"
	setvar VAR_ROUTE_EIGHT_STATE, 1
# 650 "data/maps/RouteEight/scripts.pory"
	savebgm MUS_DUMMY
# 651 "data/maps/RouteEight/scripts.pory"
	fadedefaultbgm
# 652 "data/maps/RouteEight/scripts.pory"
	releaseall
# 653 "data/maps/RouteEight/scripts.pory"
	end
# 654 "data/maps/RouteEight/scripts.pory"

# 655 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 656 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 657 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 658 "data/maps/RouteEight/scripts.pory"
	return
# 659 "data/maps/RouteEight/scripts.pory"

# 660 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 661 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 662 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 663 "data/maps/RouteEight/scripts.pory"
	return
# 664 "data/maps/RouteEight/scripts.pory"

# 665 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 666 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 667 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 668 "data/maps/RouteEight/scripts.pory"
	return
# 669 "data/maps/RouteEight/scripts.pory"

# 670 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit1::
# 671 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 672 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 673 "data/maps/RouteEight/scripts.pory"
	return
# 674 "data/maps/RouteEight/scripts.pory"

# 675 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit2::
# 676 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 677 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 678 "data/maps/RouteEight/scripts.pory"
	return
# 679 "data/maps/RouteEight/scripts.pory"

# 680 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit3::
# 681 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 682 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 683 "data/maps/RouteEight/scripts.pory"
	return
# 684 "data/maps/RouteEight/scripts.pory"

# 685 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MoveRival1::
# 686 "data/maps/RouteEight/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 687 "data/maps/RouteEight/scripts.pory"
	return
# 688 "data/maps/RouteEight/scripts.pory"

# 689 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MoveRival2::
# 690 "data/maps/RouteEight/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 691 "data/maps/RouteEight/scripts.pory"
	return
# 692 "data/maps/RouteEight/scripts.pory"

# 693 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MoveRival3::
# 694 "data/maps/RouteEight/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 695 "data/maps/RouteEight/scripts.pory"
	return
# 696 "data/maps/RouteEight/scripts.pory"

# 697 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 698 "data/maps/RouteEight/scripts.pory"
	walk_down
# 699 "data/maps/RouteEight/scripts.pory"
	walk_left
# 700 "data/maps/RouteEight/scripts.pory"
	walk_in_place_faster_down
# 701 "data/maps/RouteEight/scripts.pory"
	step_end
# 702 "data/maps/RouteEight/scripts.pory"

# 703 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 704 "data/maps/RouteEight/scripts.pory"
	walk_down
# 705 "data/maps/RouteEight/scripts.pory"
	step_end
# 706 "data/maps/RouteEight/scripts.pory"

# 707 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 708 "data/maps/RouteEight/scripts.pory"
	walk_down
# 709 "data/maps/RouteEight/scripts.pory"
	walk_right
# 710 "data/maps/RouteEight/scripts.pory"
	walk_in_place_faster_down
# 711 "data/maps/RouteEight/scripts.pory"
	step_end
# 712 "data/maps/RouteEight/scripts.pory"

# 713 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalExit1:
# 714 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 715 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 716 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 717 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 718 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 719 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 720 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 721 "data/maps/RouteEight/scripts.pory"
	step_end
# 722 "data/maps/RouteEight/scripts.pory"

# 723 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalExit2:
# 724 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 725 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 726 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 727 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 728 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 729 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 730 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 731 "data/maps/RouteEight/scripts.pory"
	walk_fast_down
# 732 "data/maps/RouteEight/scripts.pory"
	step_end
# 733 "data/maps/RouteEight/scripts.pory"

# 734 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalExit3:
# 735 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 736 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 737 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 738 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 739 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 740 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 741 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 742 "data/maps/RouteEight/scripts.pory"
	step_end
# 743 "data/maps/RouteEight/scripts.pory"

# 744 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene1::
# 745 "data/maps/RouteEight/scripts.pory"
	lockall
# 746 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 1
# 747 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 748 "data/maps/RouteEight/scripts.pory"

# 749 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene2::
# 750 "data/maps/RouteEight/scripts.pory"
	lockall
# 751 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 2
# 752 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 753 "data/maps/RouteEight/scripts.pory"

# 754 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene3::
# 755 "data/maps/RouteEight/scripts.pory"
	lockall
# 756 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 3
# 757 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 758 "data/maps/RouteEight/scripts.pory"

# 759 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene4::
# 760 "data/maps/RouteEight/scripts.pory"
	lockall
# 761 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 4
# 762 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 763 "data/maps/RouteEight/scripts.pory"

# 764 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene::
# 765 "data/maps/RouteEight/scripts.pory"
	addobject LOCALID_BIRCH
# 766 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 767 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 768 "data/maps/RouteEight/scripts.pory"
	playse SE_PIN
# 769 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 770 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 771 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 772 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 773 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 774 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 775 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 776 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 777 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 778 "data/maps/RouteEight/scripts.pory"
	closemessage
# 779 "data/maps/RouteEight/scripts.pory"
	delay 20
# 780 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 781 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 782 "data/maps/RouteEight/scripts.pory"
	delay 10
# 783 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 784 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 785 "data/maps/RouteEight/scripts.pory"
	delay 20
# 786 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 787 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 788 "data/maps/RouteEight/scripts.pory"
	delay 30
# 789 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 790 "data/maps/RouteEight/scripts.pory"
	closemessage
# 791 "data/maps/RouteEight/scripts.pory"
	delay 30
# 792 "data/maps/RouteEight/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 793 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 794 "data/maps/RouteEight/scripts.pory"
	waitfanfare
# 795 "data/maps/RouteEight/scripts.pory"
	closemessage
# 796 "data/maps/RouteEight/scripts.pory"
	delay 30
# 797 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 798 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 799 "data/maps/RouteEight/scripts.pory"
	closemessage
# 800 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 801 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 802 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 803 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 804 "data/maps/RouteEight/scripts.pory"
	removeobject LOCALID_BIRCH
# 805 "data/maps/RouteEight/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 806 "data/maps/RouteEight/scripts.pory"
	releaseall
# 807 "data/maps/RouteEight/scripts.pory"
	end
# 808 "data/maps/RouteEight/scripts.pory"

# 809 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 810 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 811 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 812 "data/maps/RouteEight/scripts.pory"
	return
# 813 "data/maps/RouteEight/scripts.pory"

# 814 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 815 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 816 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 817 "data/maps/RouteEight/scripts.pory"
	return
# 818 "data/maps/RouteEight/scripts.pory"

# 819 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 820 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 821 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 822 "data/maps/RouteEight/scripts.pory"
	return
# 823 "data/maps/RouteEight/scripts.pory"

# 824 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 825 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 826 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 827 "data/maps/RouteEight/scripts.pory"
	return
# 828 "data/maps/RouteEight/scripts.pory"

# 829 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit1::
# 830 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 831 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 832 "data/maps/RouteEight/scripts.pory"
	return
# 833 "data/maps/RouteEight/scripts.pory"

# 834 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit2::
# 835 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 836 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 837 "data/maps/RouteEight/scripts.pory"
	return
# 838 "data/maps/RouteEight/scripts.pory"

# 839 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit3::
# 840 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 841 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 842 "data/maps/RouteEight/scripts.pory"
	return
# 843 "data/maps/RouteEight/scripts.pory"

# 844 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit4::
# 845 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 846 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 847 "data/maps/RouteEight/scripts.pory"
	return
# 848 "data/maps/RouteEight/scripts.pory"

# 849 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchEntrance:
# 850 "data/maps/RouteEight/scripts.pory"
	walk_down
# 851 "data/maps/RouteEight/scripts.pory"
	walk_down
# 852 "data/maps/RouteEight/scripts.pory"
	walk_down
# 853 "data/maps/RouteEight/scripts.pory"
	step_end
# 854 "data/maps/RouteEight/scripts.pory"

# 855 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 856 "data/maps/RouteEight/scripts.pory"
	walk_down
# 857 "data/maps/RouteEight/scripts.pory"
	walk_left
# 858 "data/maps/RouteEight/scripts.pory"
	walk_left
# 859 "data/maps/RouteEight/scripts.pory"
	walk_down
# 860 "data/maps/RouteEight/scripts.pory"
	step_end
# 861 "data/maps/RouteEight/scripts.pory"

# 862 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 863 "data/maps/RouteEight/scripts.pory"
	walk_down
# 864 "data/maps/RouteEight/scripts.pory"
	walk_left
# 865 "data/maps/RouteEight/scripts.pory"
	walk_down
# 866 "data/maps/RouteEight/scripts.pory"
	step_end
# 867 "data/maps/RouteEight/scripts.pory"

# 868 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 869 "data/maps/RouteEight/scripts.pory"
	walk_down
# 870 "data/maps/RouteEight/scripts.pory"
	walk_down
# 871 "data/maps/RouteEight/scripts.pory"
	step_end
# 872 "data/maps/RouteEight/scripts.pory"

# 873 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 874 "data/maps/RouteEight/scripts.pory"
	walk_down
# 875 "data/maps/RouteEight/scripts.pory"
	walk_right
# 876 "data/maps/RouteEight/scripts.pory"
	walk_down
# 877 "data/maps/RouteEight/scripts.pory"
	step_end
# 878 "data/maps/RouteEight/scripts.pory"

# 879 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit1:
# 880 "data/maps/RouteEight/scripts.pory"
	walk_up
# 881 "data/maps/RouteEight/scripts.pory"
	walk_up
# 882 "data/maps/RouteEight/scripts.pory"
	walk_right
# 883 "data/maps/RouteEight/scripts.pory"
	walk_up
# 884 "data/maps/RouteEight/scripts.pory"
	walk_up
# 885 "data/maps/RouteEight/scripts.pory"
	walk_up
# 886 "data/maps/RouteEight/scripts.pory"
	step_end
# 887 "data/maps/RouteEight/scripts.pory"

# 888 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit2:
# 889 "data/maps/RouteEight/scripts.pory"
	walk_up
# 890 "data/maps/RouteEight/scripts.pory"
	walk_up
# 891 "data/maps/RouteEight/scripts.pory"
	walk_up
# 892 "data/maps/RouteEight/scripts.pory"
	walk_up
# 893 "data/maps/RouteEight/scripts.pory"
	walk_up
# 894 "data/maps/RouteEight/scripts.pory"
	step_end
# 895 "data/maps/RouteEight/scripts.pory"

# 896 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit3:
# 897 "data/maps/RouteEight/scripts.pory"
	walk_up
# 898 "data/maps/RouteEight/scripts.pory"
	walk_up
# 899 "data/maps/RouteEight/scripts.pory"
	walk_up
# 900 "data/maps/RouteEight/scripts.pory"
	walk_up
# 901 "data/maps/RouteEight/scripts.pory"
	walk_up
# 902 "data/maps/RouteEight/scripts.pory"
	step_end
# 903 "data/maps/RouteEight/scripts.pory"

# 904 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit4:
# 905 "data/maps/RouteEight/scripts.pory"
	walk_up
# 906 "data/maps/RouteEight/scripts.pory"
	walk_up
# 907 "data/maps/RouteEight/scripts.pory"
	walk_up
# 908 "data/maps/RouteEight/scripts.pory"
	walk_up
# 909 "data/maps/RouteEight/scripts.pory"
	walk_up
# 910 "data/maps/RouteEight/scripts.pory"
	step_end
# 911 "data/maps/RouteEight/scripts.pory"

# 912 "data/maps/RouteEight/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 913 "data/maps/RouteEight/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 914 "data/maps/RouteEight/scripts.pory"
	.string "We can't talk about them yet.$"
# 915 "data/maps/RouteEight/scripts.pory"

# 916 "data/maps/RouteEight/scripts.pory"
Route110_Text_KickUpARuckus:
# 917 "data/maps/RouteEight/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 918 "data/maps/RouteEight/scripts.pory"
	.string "kick up a ruckus!$"
# 919 "data/maps/RouteEight/scripts.pory"

# 920 "data/maps/RouteEight/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 921 "data/maps/RouteEight/scripts.pory"
	.string "This is my first job after joining\n"
# 922 "data/maps/RouteEight/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 923 "data/maps/RouteEight/scripts.pory"

# 924 "data/maps/RouteEight/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 925 "data/maps/RouteEight/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 926 "data/maps/RouteEight/scripts.pory"
	.string "smiles to people's faces!$"
# 927 "data/maps/RouteEight/scripts.pory"

# 928 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayLetsBattle:
# 929 "data/maps/RouteEight/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 930 "data/maps/RouteEight/scripts.pory"
	.string "While I was searching for other\n"
# 931 "data/maps/RouteEight/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 932 "data/maps/RouteEight/scripts.pory"
	.string "So…\n"
# 933 "data/maps/RouteEight/scripts.pory"
	.string "How about a little battle?$"
# 934 "data/maps/RouteEight/scripts.pory"

# 935 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayDefeated:
# 936 "data/maps/RouteEight/scripts.pory"
	.string "Yikes!\n"
# 937 "data/maps/RouteEight/scripts.pory"
	.string "You're better than I expected!$"
# 938 "data/maps/RouteEight/scripts.pory"

# 939 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayTakeThis:
# 940 "data/maps/RouteEight/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 941 "data/maps/RouteEight/scripts.pory"
	.string "training, too, haven't you?\p"
# 942 "data/maps/RouteEight/scripts.pory"
	.string "I think you deserve a reward!\n"
# 943 "data/maps/RouteEight/scripts.pory"
	.string "This is from me!$"
# 944 "data/maps/RouteEight/scripts.pory"

# 945 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 946 "data/maps/RouteEight/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 947 "data/maps/RouteEight/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 948 "data/maps/RouteEight/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 949 "data/maps/RouteEight/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 950 "data/maps/RouteEight/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 951 "data/maps/RouteEight/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 952 "data/maps/RouteEight/scripts.pory"
	.string "harder for the next time.$"
# 953 "data/maps/RouteEight/scripts.pory"

# 954 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 955 "data/maps/RouteEight/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 956 "data/maps/RouteEight/scripts.pory"
	.string "So this is where you were.\l"
# 957 "data/maps/RouteEight/scripts.pory"
	.string "How's it going?\p"
# 958 "data/maps/RouteEight/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 959 "data/maps/RouteEight/scripts.pory"
	.string "I'll check for you.$"
# 960 "data/maps/RouteEight/scripts.pory"

# 961 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanDefeated:
# 962 "data/maps/RouteEight/scripts.pory"
	.string "Hmm…\n"
# 963 "data/maps/RouteEight/scripts.pory"
	.string "You're pretty good.$"
# 964 "data/maps/RouteEight/scripts.pory"

# 965 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanTakeThis:
# 966 "data/maps/RouteEight/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 967 "data/maps/RouteEight/scripts.pory"
	.string "without me noticing…\p"
# 968 "data/maps/RouteEight/scripts.pory"
	.string "Good enough!\n"
# 969 "data/maps/RouteEight/scripts.pory"
	.string "Here, take this.$"
# 970 "data/maps/RouteEight/scripts.pory"

# 971 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 972 "data/maps/RouteEight/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 973 "data/maps/RouteEight/scripts.pory"
	.string "Use it to root around for items that\n"
# 974 "data/maps/RouteEight/scripts.pory"
	.string "aren't visible.\p"
# 975 "data/maps/RouteEight/scripts.pory"
	.string "If it senses something, it emits\n"
# 976 "data/maps/RouteEight/scripts.pory"
	.string "a sound.\p"
# 977 "data/maps/RouteEight/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 978 "data/maps/RouteEight/scripts.pory"
	.string "POKéMON.$"
# 979 "data/maps/RouteEight/scripts.pory"

# 980 "data/maps/RouteEight/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 981 "data/maps/RouteEight/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 982 "data/maps/RouteEight/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 983 "data/maps/RouteEight/scripts.pory"

# 984 "data/maps/RouteEight/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 985 "data/maps/RouteEight/scripts.pory"
	.string "How do you like the way my raven-\n"
# 986 "data/maps/RouteEight/scripts.pory"
	.string "colored hair streams behind me?\p"
# 987 "data/maps/RouteEight/scripts.pory"
	.string "I grew my hair out just for that.$"
# 988 "data/maps/RouteEight/scripts.pory"

# 989 "data/maps/RouteEight/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 990 "data/maps/RouteEight/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 991 "data/maps/RouteEight/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 992 "data/maps/RouteEight/scripts.pory"
	.string "It says right on your bike…\p"
# 993 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 994 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 995 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 996 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 997 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 998 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 999 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1000 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1001 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1002 "data/maps/RouteEight/scripts.pory"
	.string "That name's everywhere.\p"
# 1003 "data/maps/RouteEight/scripts.pory"
	.string "You should ride it around all over\n"
# 1004 "data/maps/RouteEight/scripts.pory"
	.string "the place--it's good advertising!$"
# 1005 "data/maps/RouteEight/scripts.pory"

# 1006 "data/maps/RouteEight/scripts.pory"
Route110_Text_TwoRoads:
# 1007 "data/maps/RouteEight/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1008 "data/maps/RouteEight/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1009 "data/maps/RouteEight/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1010 "data/maps/RouteEight/scripts.pory"

# 1011 "data/maps/RouteEight/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1012 "data/maps/RouteEight/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1013 "data/maps/RouteEight/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1014 "data/maps/RouteEight/scripts.pory"

# 1015 "data/maps/RouteEight/scripts.pory"
Route110_Text_BikeTechniques:
# 1016 "data/maps/RouteEight/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1017 "data/maps/RouteEight/scripts.pory"
	.string "riding even more fun.\p"
# 1018 "data/maps/RouteEight/scripts.pory"
	.string "There are some places that you can\n"
# 1019 "data/maps/RouteEight/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1020 "data/maps/RouteEight/scripts.pory"

# 1021 "data/maps/RouteEight/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1022 "data/maps/RouteEight/scripts.pory"
	.string "Which should I choose?\p"
# 1023 "data/maps/RouteEight/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1024 "data/maps/RouteEight/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1025 "data/maps/RouteEight/scripts.pory"
	.string "and look for POKéMON?$"
# 1026 "data/maps/RouteEight/scripts.pory"

# 1027 "data/maps/RouteEight/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1028 "data/maps/RouteEight/scripts.pory"
	.string "Number of collisions:\n"
# 1029 "data/maps/RouteEight/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1030 "data/maps/RouteEight/scripts.pory"
	.string "Total time:\n"
# 1031 "data/maps/RouteEight/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1032 "data/maps/RouteEight/scripts.pory"

# 1033 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1034 "data/maps/RouteEight/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1035 "data/maps/RouteEight/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1036 "data/maps/RouteEight/scripts.pory"
	.string "within your heart.\l"
# 1037 "data/maps/RouteEight/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1038 "data/maps/RouteEight/scripts.pory"

# 1039 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1040 "data/maps/RouteEight/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1041 "data/maps/RouteEight/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1042 "data/maps/RouteEight/scripts.pory"
	.string "still avoiding collisions.$"
# 1043 "data/maps/RouteEight/scripts.pory"

# 1044 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1045 "data/maps/RouteEight/scripts.pory"
	.string "I would consider you a work in\n"
# 1046 "data/maps/RouteEight/scripts.pory"
	.string "progress.\p"
# 1047 "data/maps/RouteEight/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1048 "data/maps/RouteEight/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1049 "data/maps/RouteEight/scripts.pory"

# 1050 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1051 "data/maps/RouteEight/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1052 "data/maps/RouteEight/scripts.pory"
	.string "on terrifying.\p"
# 1053 "data/maps/RouteEight/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1054 "data/maps/RouteEight/scripts.pory"
	.string "practice riding.$"
# 1055 "data/maps/RouteEight/scripts.pory"

# 1056 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1057 "data/maps/RouteEight/scripts.pory"
	.string "…I am aghast…\p"
# 1058 "data/maps/RouteEight/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1059 "data/maps/RouteEight/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1060 "data/maps/RouteEight/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1061 "data/maps/RouteEight/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1062 "data/maps/RouteEight/scripts.pory"

# 1063 "data/maps/RouteEight/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1064 "data/maps/RouteEight/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1065 "data/maps/RouteEight/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1066 "data/maps/RouteEight/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1067 "data/maps/RouteEight/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1068 "data/maps/RouteEight/scripts.pory"
	.string "and your total time.$"
# 1069 "data/maps/RouteEight/scripts.pory"

# 1070 "data/maps/RouteEight/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1071 "data/maps/RouteEight/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1072 "data/maps/RouteEight/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1073 "data/maps/RouteEight/scripts.pory"
	.string "Always aim higher!$"
# 1074 "data/maps/RouteEight/scripts.pory"

# 1075 "data/maps/RouteEight/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1076 "data/maps/RouteEight/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1077 "data/maps/RouteEight/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1078 "data/maps/RouteEight/scripts.pory"
	.string "of collisions and their total times.\p"
# 1079 "data/maps/RouteEight/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1080 "data/maps/RouteEight/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1081 "data/maps/RouteEight/scripts.pory"

# 1082 "data/maps/RouteEight/scripts.pory"
Route110_Text_SlateportCitySign:
# 1083 "data/maps/RouteEight/scripts.pory"
	.string "ROUTE 110\n"
# 1084 "data/maps/RouteEight/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1085 "data/maps/RouteEight/scripts.pory"

# 1086 "data/maps/RouteEight/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1087 "data/maps/RouteEight/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1088 "data/maps/RouteEight/scripts.pory"

# 1089 "data/maps/RouteEight/scripts.pory"
Route110_Text_AquaWasHere:
# 1090 "data/maps/RouteEight/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1091 "data/maps/RouteEight/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1092 "data/maps/RouteEight/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1093 "data/maps/RouteEight/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1094 "data/maps/RouteEight/scripts.pory"
	.string "says now.$"
# 1095 "data/maps/RouteEight/scripts.pory"

# 1096 "data/maps/RouteEight/scripts.pory"
Route110_Text_Route103Sign:
# 1097 "data/maps/RouteEight/scripts.pory"
	.string "ROUTE 110\n"
# 1098 "data/maps/RouteEight/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1099 "data/maps/RouteEight/scripts.pory"

# 1100 "data/maps/RouteEight/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1101 "data/maps/RouteEight/scripts.pory"
	.string "SEASIDE PARKING$"
# 1102 "data/maps/RouteEight/scripts.pory"

# 1103 "data/maps/RouteEight/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1104 "data/maps/RouteEight/scripts.pory"
	.string "ROUTE 110\n"
# 1105 "data/maps/RouteEight/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1106 "data/maps/RouteEight/scripts.pory"

# 1107 "data/maps/RouteEight/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1108 "data/maps/RouteEight/scripts.pory"
	.string "TRAINER TIPS\p"
# 1109 "data/maps/RouteEight/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1110 "data/maps/RouteEight/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1111 "data/maps/RouteEight/scripts.pory"
	.string "It is an important technique for\n"
# 1112 "data/maps/RouteEight/scripts.pory"
	.string "POKéMON battles.$"
# 1113 "data/maps/RouteEight/scripts.pory"

# 1114 "data/maps/RouteEight/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1115 "data/maps/RouteEight/scripts.pory"
	.string "TRAINER TIPS\p"
# 1116 "data/maps/RouteEight/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1117 "data/maps/RouteEight/scripts.pory"
	.string "by pressing SELECT.$"
# 1118 "data/maps/RouteEight/scripts.pory"

# 1119 "data/maps/RouteEight/scripts.pory"
Route110_Text_TrickHouseSign:
# 1120 "data/maps/RouteEight/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1121 "data/maps/RouteEight/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1122 "data/maps/RouteEight/scripts.pory"

# 1123 "data/maps/RouteEight/scripts.pory"
Route110_Text_BestRecord:
# 1124 "data/maps/RouteEight/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1125 "data/maps/RouteEight/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1126 "data/maps/RouteEight/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1127 "data/maps/RouteEight/scripts.pory"

# 1128 "data/maps/RouteEight/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1129 "data/maps/RouteEight/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1130 "data/maps/RouteEight/scripts.pory"
	.string "No one seems to have taken the\n"
# 1131 "data/maps/RouteEight/scripts.pory"
	.string "challenge. There is no record…$"
# 1132 "data/maps/RouteEight/scripts.pory"

# 1133 "data/maps/RouteEight/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1134 "data/maps/RouteEight/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1135 "data/maps/RouteEight/scripts.pory"
	.string "Imagine seeing you here!\p"
# 1136 "data/maps/RouteEight/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 1137 "data/maps/RouteEight/scripts.pory"

# 1138 "data/maps/RouteEight/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1139 "data/maps/RouteEight/scripts.pory"
	.string "Oh, I see!\n"
# 1140 "data/maps/RouteEight/scripts.pory"
	.string "You two are running separately.\l"
# 1141 "data/maps/RouteEight/scripts.pory"
	.string "Well, that's fine.\p"
# 1142 "data/maps/RouteEight/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 1143 "data/maps/RouteEight/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1144 "data/maps/RouteEight/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1145 "data/maps/RouteEight/scripts.pory"
	.string "my POKéNAV as well.\p"
# 1146 "data/maps/RouteEight/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1147 "data/maps/RouteEight/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 1148 "data/maps/RouteEight/scripts.pory"
	.string "… … … … … …$"
# 1149 "data/maps/RouteEight/scripts.pory"

# 1150 "data/maps/RouteEight/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1151 "data/maps/RouteEight/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1152 "data/maps/RouteEight/scripts.pory"
	.string "in the POKéNAV.$"
# 1153 "data/maps/RouteEight/scripts.pory"

# 1154 "data/maps/RouteEight/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1155 "data/maps/RouteEight/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1156 "data/maps/RouteEight/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1157 "data/maps/RouteEight/scripts.pory"
	.string "… … … … … …\p"
# 1158 "data/maps/RouteEight/scripts.pory"
	.string "Well, I had better get going.\n"
# 1159 "data/maps/RouteEight/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

RouteEight_EventScript_GruntNorth_Text_0:
# 101 "data/maps/RouteEight/scripts.pory"
	.string "test.$"

RouteEight_Text_BenIntro::
# 11 "data/maps/RouteEight/scripts.pory"
	.string "Did you just become a Trainer? We're\n"
	.string "both beginners!$"

RouteEight_Text_BenDefeat::
# 15 "data/maps/RouteEight/scripts.pory"
	.string "I called you because I thought I could\n"
	.string "beat you…$"

RouteEight_Text_BenPostBattle::
# 19 "data/maps/RouteEight/scripts.pory"
	.string "I haven't won once yet… I wish I would\n"
	.string "win soon…$"

RouteEight_Text_DustyIntro::
# 29 "data/maps/RouteEight/scripts.pory"
	.string "For thirty years I have searched for\n"
	.string "ancient ruins! I am to be challenged?$"

RouteEight_Text_DustyDefeat::
# 33 "data/maps/RouteEight/scripts.pory"
	.string "While I have searched for ruins, I've\n"
	.string "not searched for strong Pokémon.$"

RouteEight_Text_DustyPostBattle::
# 37 "data/maps/RouteEight/scripts.pory"
	.string "For thirty years I have searched for\n"
	.string "ancient ruins! No, wait, was that forty\l"
	.string "years? Which was it now?$"

RouteEight_Text_BeauIntro::
# 47 "data/maps/RouteEight/scripts.pory"
	.string "I can't go any farther… The sand gets\n"
	.string "in my eyes!$"

RouteEight_Text_BeauDefeat::
# 51 "data/maps/RouteEight/scripts.pory"
	.string "I can't win on spirit alone…$"

RouteEight_Text_BeauPostBattle::
# 55 "data/maps/RouteEight/scripts.pory"
	.string "I'm going to be a real hero one day. I'm\n"
	.string "going to work harder to make me and my\l"
	.string "Pokémon stronger.$"

RouteEight_Text_HeidiIntro::
# 65 "data/maps/RouteEight/scripts.pory"
	.string "I'm having a picnic in the desert. You\n"
	.string "can always find a Trainer, so I can\l"
	.string "enjoy a battle here, too!$"

RouteEight_Text_HeidiDefeat::
# 69 "data/maps/RouteEight/scripts.pory"
	.string "Ohhh! You're mean!$"

RouteEight_Text_HeidiPostBattle::
# 73 "data/maps/RouteEight/scripts.pory"
	.string "When you're battling in a sandstorm,\n"
	.string "watch out for your Pokémon's HP. It can\l"
	.string "faint if you don't keep an eye on it!$"

RouteEight_Text_ChipIntro::
# 83 "data/maps/RouteEight/scripts.pory"
	.string "Who might you be? Are you perhaps\n"
	.string "searching for ancient ruins that are\l"
	.string "rumored to possibly exist according to\l"
	.string "legend?$"

RouteEight_Text_ChipDefeat::
# 87 "data/maps/RouteEight/scripts.pory"
	.string "What a disgraceful setback…$"

RouteEight_Text_ChipPostBattle::
# 91 "data/maps/RouteEight/scripts.pory"
	.string "That giant rock… I would like to believe\n"
	.string "it may indeed contain ancient ruins. But\l"
	.string "I see no entrance.$"
