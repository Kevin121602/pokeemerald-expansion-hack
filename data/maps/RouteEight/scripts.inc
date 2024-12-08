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
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE_EIGHT, RouteEight_Text_GalacticDefeated
# 103 "data/maps/RouteEight/scripts.pory"
	giveitem ITEM_DEVON_GOODS
# 104 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_EventScript_GruntNorth_Text_1
# 105 "data/maps/RouteEight/scripts.pory"
	closemessage
# 106 "data/maps/RouteEight/scripts.pory"
	applymovement 12, GruntMovementLeavingNorth
# 107 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 108 "data/maps/RouteEight/scripts.pory"
	goto RouteEight_EventScript_PostGalacticBattle
# 109 "data/maps/RouteEight/scripts.pory"
	releaseall
	end


RouteEight_EventScript_GruntSouth::
# 114 "data/maps/RouteEight/scripts.pory"
	lock
# 115 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_GALACTIC, FALSE
# 116 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 117 "data/maps/RouteEight/scripts.pory"
	applymovement 12, GruntMovementSouth
# 118 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 119 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_EventScript_GruntNorth_Text_0
# 120 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE_EIGHT, RouteEight_Text_GalacticDefeated
# 121 "data/maps/RouteEight/scripts.pory"
	giveitem ITEM_DEVON_GOODS
# 122 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_EventScript_GruntNorth_Text_1
# 123 "data/maps/RouteEight/scripts.pory"
	closemessage
# 124 "data/maps/RouteEight/scripts.pory"
	applymovement 12, GruntMovementLeavingSouth
# 125 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 126 "data/maps/RouteEight/scripts.pory"
	goto RouteEight_EventScript_PostGalacticBattle
# 127 "data/maps/RouteEight/scripts.pory"
	releaseall
	end


# 131 "data/maps/RouteEight/scripts.pory"
GruntMovementNorth:
# 132 "data/maps/RouteEight/scripts.pory"
	walk_left
# 132 "data/maps/RouteEight/scripts.pory"
	walk_left
# 132 "data/maps/RouteEight/scripts.pory"
	walk_left
# 132 "data/maps/RouteEight/scripts.pory"
	walk_left
# 132 "data/maps/RouteEight/scripts.pory"
	walk_left
# 132 "data/maps/RouteEight/scripts.pory"
	walk_left
# 132 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

# 135 "data/maps/RouteEight/scripts.pory"
GruntMovementSouth:
# 136 "data/maps/RouteEight/scripts.pory"
	face_down
# 137 "data/maps/RouteEight/scripts.pory"
	walk_down
# 138 "data/maps/RouteEight/scripts.pory"
	face_left
# 139 "data/maps/RouteEight/scripts.pory"
	walk_left
# 139 "data/maps/RouteEight/scripts.pory"
	walk_left
# 139 "data/maps/RouteEight/scripts.pory"
	walk_left
# 139 "data/maps/RouteEight/scripts.pory"
	walk_left
# 139 "data/maps/RouteEight/scripts.pory"
	walk_left
# 139 "data/maps/RouteEight/scripts.pory"
	walk_left
# 139 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

# 142 "data/maps/RouteEight/scripts.pory"
GruntMovementLeavingNorth:
# 143 "data/maps/RouteEight/scripts.pory"
	face_down
# 144 "data/maps/RouteEight/scripts.pory"
	walk_down
# 145 "data/maps/RouteEight/scripts.pory"
	face_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
# 146 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

# 149 "data/maps/RouteEight/scripts.pory"
GruntMovementLeavingSouth:
# 150 "data/maps/RouteEight/scripts.pory"
	face_up
# 151 "data/maps/RouteEight/scripts.pory"
	walk_up
# 152 "data/maps/RouteEight/scripts.pory"
	face_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
# 153 "data/maps/RouteEight/scripts.pory"
	walk_left
	step_end

RouteEight_EventScript_SetUpGalacticBattle::
# 157 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_EventScript_GruntNorth_Text_0
# 158 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_ROUTE_EIGHT, RouteEight_Text_GalacticDefeated
# 159 "data/maps/RouteEight/scripts.pory"
	giveitem ITEM_DEVON_GOODS
# 160 "data/maps/RouteEight/scripts.pory"
	msgbox RouteEight_EventScript_GruntNorth_Text_1
# 161 "data/maps/RouteEight/scripts.pory"
	closemessage
	return


RouteEight_EventScript_PostGalacticBattle::
# 166 "data/maps/RouteEight/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 167 "data/maps/RouteEight/scripts.pory"
	setvar VAR_ROUTE_EIGHT_STATE, 1
# 168 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_DEFEATED_GALACTIC_GRUNT
# 169 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_HIDE_ROUTE_EIGHT_GALACTIC_GRUNT
# 170 "data/maps/RouteEight/scripts.pory"
	removeobject 12
# 171 "data/maps/RouteEight/scripts.pory"
	releaseall
	end


RouteEight_EventScript_FindWiseGlasses::
# 180 "data/maps/RouteEight/scripts.pory"
	finditem ITEM_WISE_GLASSES
	end


# 185 "data/maps/RouteEight/scripts.pory"

# 186 "data/maps/RouteEight/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 187 "data/maps/RouteEight/scripts.pory"
.set LOCALID_RIVAL, 28
# 188 "data/maps/RouteEight/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 189 "data/maps/RouteEight/scripts.pory"
.set LOCALID_BIRCH, 36
# 190 "data/maps/RouteEight/scripts.pory"

# 191 "data/maps/RouteEight/scripts.pory"
Route110_MapScripts::
# 192 "data/maps/RouteEight/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 193 "data/maps/RouteEight/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 194 "data/maps/RouteEight/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 195 "data/maps/RouteEight/scripts.pory"
	.byte 0
# 196 "data/maps/RouteEight/scripts.pory"

# 197 "data/maps/RouteEight/scripts.pory"
Route110_OnResume:
# 198 "data/maps/RouteEight/scripts.pory"
	special UpdateCyclingRoadState
# 199 "data/maps/RouteEight/scripts.pory"
	end
# 200 "data/maps/RouteEight/scripts.pory"

# 201 "data/maps/RouteEight/scripts.pory"
Route110_OnTransition:
# 202 "data/maps/RouteEight/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 203 "data/maps/RouteEight/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 204 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 205 "data/maps/RouteEight/scripts.pory"
	end
# 206 "data/maps/RouteEight/scripts.pory"

# 207 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 208 "data/maps/RouteEight/scripts.pory"
	savebgm MUS_CYCLING
# 209 "data/maps/RouteEight/scripts.pory"
	return
# 210 "data/maps/RouteEight/scripts.pory"

# 211 "data/maps/RouteEight/scripts.pory"
Route110_OnFrame:
# 212 "data/maps/RouteEight/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 213 "data/maps/RouteEight/scripts.pory"
	.2byte 0
# 214 "data/maps/RouteEight/scripts.pory"

# 215 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 216 "data/maps/RouteEight/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 217 "data/maps/RouteEight/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 218 "data/maps/RouteEight/scripts.pory"
	return
# 219 "data/maps/RouteEight/scripts.pory"

# 220 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 221 "data/maps/RouteEight/scripts.pory"
	lock
# 222 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 223 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 224 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 225 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 226 "data/maps/RouteEight/scripts.pory"
	release
# 227 "data/maps/RouteEight/scripts.pory"
	end
# 228 "data/maps/RouteEight/scripts.pory"

# 229 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 230 "data/maps/RouteEight/scripts.pory"
	lock
# 231 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 232 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 233 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 234 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 235 "data/maps/RouteEight/scripts.pory"
	release
# 236 "data/maps/RouteEight/scripts.pory"
	end
# 237 "data/maps/RouteEight/scripts.pory"

# 238 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 239 "data/maps/RouteEight/scripts.pory"
	lock
# 240 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 241 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 242 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 243 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 244 "data/maps/RouteEight/scripts.pory"
	release
# 245 "data/maps/RouteEight/scripts.pory"
	end
# 246 "data/maps/RouteEight/scripts.pory"

# 247 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 248 "data/maps/RouteEight/scripts.pory"
	lock
# 249 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 250 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 251 "data/maps/RouteEight/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 252 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 253 "data/maps/RouteEight/scripts.pory"
	release
# 254 "data/maps/RouteEight/scripts.pory"
	end
# 255 "data/maps/RouteEight/scripts.pory"

# 256 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Boy1::
# 257 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 258 "data/maps/RouteEight/scripts.pory"
	end
# 259 "data/maps/RouteEight/scripts.pory"

# 260 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 261 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 262 "data/maps/RouteEight/scripts.pory"
	end
# 263 "data/maps/RouteEight/scripts.pory"

# 264 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 265 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 266 "data/maps/RouteEight/scripts.pory"
	end
# 267 "data/maps/RouteEight/scripts.pory"

# 268 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_OldMan::
# 269 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 270 "data/maps/RouteEight/scripts.pory"
	end
# 271 "data/maps/RouteEight/scripts.pory"

# 272 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_OldWoman::
# 273 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_WalkOnTheLowRoad, MSGBOX_NPC
# 274 "data/maps/RouteEight/scripts.pory"
	end
# 275 "data/maps/RouteEight/scripts.pory"

# 276 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 277 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 278 "data/maps/RouteEight/scripts.pory"
	end
# 279 "data/maps/RouteEight/scripts.pory"

# 280 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Boy2::
# 281 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 282 "data/maps/RouteEight/scripts.pory"
	end
# 283 "data/maps/RouteEight/scripts.pory"

# 284 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 285 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 286 "data/maps/RouteEight/scripts.pory"
	end
# 287 "data/maps/RouteEight/scripts.pory"

# 288 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 289 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 290 "data/maps/RouteEight/scripts.pory"
	end
# 291 "data/maps/RouteEight/scripts.pory"

# 292 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_VandalizedSign::
# 293 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 294 "data/maps/RouteEight/scripts.pory"
	end
# 295 "data/maps/RouteEight/scripts.pory"

# 296 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Route103Sign::
# 297 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 298 "data/maps/RouteEight/scripts.pory"
	end
# 299 "data/maps/RouteEight/scripts.pory"

# 300 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 301 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 302 "data/maps/RouteEight/scripts.pory"
	end
# 303 "data/maps/RouteEight/scripts.pory"

# 304 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 305 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 306 "data/maps/RouteEight/scripts.pory"
	end
# 307 "data/maps/RouteEight/scripts.pory"

# 308 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 309 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 310 "data/maps/RouteEight/scripts.pory"
	end
# 311 "data/maps/RouteEight/scripts.pory"

# 312 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 313 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 314 "data/maps/RouteEight/scripts.pory"
	end
# 315 "data/maps/RouteEight/scripts.pory"

# 316 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 317 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 318 "data/maps/RouteEight/scripts.pory"
	end
# 319 "data/maps/RouteEight/scripts.pory"

# 320 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 321 "data/maps/RouteEight/scripts.pory"
	lockall
# 322 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 323 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 324 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 325 "data/maps/RouteEight/scripts.pory"
	releaseall
# 326 "data/maps/RouteEight/scripts.pory"
	end
# 327 "data/maps/RouteEight/scripts.pory"

# 328 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_NoRecordSet::
# 329 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 330 "data/maps/RouteEight/scripts.pory"
	releaseall
# 331 "data/maps/RouteEight/scripts.pory"
	end
# 332 "data/maps/RouteEight/scripts.pory"

# 333 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 334 "data/maps/RouteEight/scripts.pory"
	lock
# 335 "data/maps/RouteEight/scripts.pory"
	faceplayer
# 336 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 337 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 338 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 339 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 340 "data/maps/RouteEight/scripts.pory"
	release
# 341 "data/maps/RouteEight/scripts.pory"
	end
# 342 "data/maps/RouteEight/scripts.pory"

# 343 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 344 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 345 "data/maps/RouteEight/scripts.pory"
	release
# 346 "data/maps/RouteEight/scripts.pory"
	end
# 347 "data/maps/RouteEight/scripts.pory"

# 348 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 349 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 350 "data/maps/RouteEight/scripts.pory"
	release
# 351 "data/maps/RouteEight/scripts.pory"
	end
# 352 "data/maps/RouteEight/scripts.pory"

# 353 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Edward::
# 354 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 355 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/RouteEight/scripts.pory"
	end
# 357 "data/maps/RouteEight/scripts.pory"

# 358 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Jaclyn::
# 359 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 360 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/RouteEight/scripts.pory"
	end
# 362 "data/maps/RouteEight/scripts.pory"

# 363 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Edwin::
# 364 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 365 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 366 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 367 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 368 "data/maps/RouteEight/scripts.pory"
	release
# 369 "data/maps/RouteEight/scripts.pory"
	end
# 370 "data/maps/RouteEight/scripts.pory"

# 371 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 372 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 373 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 374 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 375 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 376 "data/maps/RouteEight/scripts.pory"
	release
# 377 "data/maps/RouteEight/scripts.pory"
	end
# 378 "data/maps/RouteEight/scripts.pory"

# 379 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_EdwinRematch::
# 380 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 381 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/RouteEight/scripts.pory"
	end
# 383 "data/maps/RouteEight/scripts.pory"

# 384 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Dale::
# 385 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 386 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/RouteEight/scripts.pory"
	end
# 388 "data/maps/RouteEight/scripts.pory"

# 389 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Jacob::
# 390 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 391 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/RouteEight/scripts.pory"
	end
# 393 "data/maps/RouteEight/scripts.pory"

# 394 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Anthony::
# 395 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 396 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 397 "data/maps/RouteEight/scripts.pory"
	end
# 398 "data/maps/RouteEight/scripts.pory"

# 399 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Benjamin::
# 400 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 401 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 402 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 403 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 404 "data/maps/RouteEight/scripts.pory"
	release
# 405 "data/maps/RouteEight/scripts.pory"
	end
# 406 "data/maps/RouteEight/scripts.pory"

# 407 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 408 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 409 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 410 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 411 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 412 "data/maps/RouteEight/scripts.pory"
	release
# 413 "data/maps/RouteEight/scripts.pory"
	end
# 414 "data/maps/RouteEight/scripts.pory"

# 415 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 416 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 417 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 418 "data/maps/RouteEight/scripts.pory"
	end
# 419 "data/maps/RouteEight/scripts.pory"

# 420 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Jasmine::
# 421 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 422 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 423 "data/maps/RouteEight/scripts.pory"
	end
# 424 "data/maps/RouteEight/scripts.pory"

# 425 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Abigail::
# 426 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 427 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 428 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 429 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 430 "data/maps/RouteEight/scripts.pory"
	release
# 431 "data/maps/RouteEight/scripts.pory"
	end
# 432 "data/maps/RouteEight/scripts.pory"

# 433 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 434 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 435 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 436 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 437 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 438 "data/maps/RouteEight/scripts.pory"
	release
# 439 "data/maps/RouteEight/scripts.pory"
	end
# 440 "data/maps/RouteEight/scripts.pory"

# 441 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_AbigailRematch::
# 442 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 443 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 444 "data/maps/RouteEight/scripts.pory"
	end
# 445 "data/maps/RouteEight/scripts.pory"

# 446 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Isabel::
# 447 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 448 "data/maps/RouteEight/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 449 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 450 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 451 "data/maps/RouteEight/scripts.pory"
	release
# 452 "data/maps/RouteEight/scripts.pory"
	end
# 453 "data/maps/RouteEight/scripts.pory"

# 454 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 455 "data/maps/RouteEight/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 456 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 457 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 458 "data/maps/RouteEight/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 459 "data/maps/RouteEight/scripts.pory"
	release
# 460 "data/maps/RouteEight/scripts.pory"
	end
# 461 "data/maps/RouteEight/scripts.pory"

# 462 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_IsabelRematch::
# 463 "data/maps/RouteEight/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 464 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 465 "data/maps/RouteEight/scripts.pory"
	end
# 466 "data/maps/RouteEight/scripts.pory"

# 467 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Timmy::
# 468 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 469 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 470 "data/maps/RouteEight/scripts.pory"
	end
# 471 "data/maps/RouteEight/scripts.pory"

# 472 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Unused::
# 473 "data/maps/RouteEight/scripts.pory"
	end
# 474 "data/maps/RouteEight/scripts.pory"

# 475 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Kaleb::
# 476 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 477 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 478 "data/maps/RouteEight/scripts.pory"
	end
# 479 "data/maps/RouteEight/scripts.pory"

# 480 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Joseph::
# 481 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 482 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 483 "data/maps/RouteEight/scripts.pory"
	end
# 484 "data/maps/RouteEight/scripts.pory"

# 485 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_Alyssa::
# 486 "data/maps/RouteEight/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 487 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 488 "data/maps/RouteEight/scripts.pory"
	end
# 489 "data/maps/RouteEight/scripts.pory"

# 490 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 491 "data/maps/RouteEight/scripts.pory"
	lockall
# 492 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 493 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 494 "data/maps/RouteEight/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 495 "data/maps/RouteEight/scripts.pory"
	releaseall
# 496 "data/maps/RouteEight/scripts.pory"
	end
# 497 "data/maps/RouteEight/scripts.pory"

# 498 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 499 "data/maps/RouteEight/scripts.pory"
	special FinishCyclingRoadChallenge
# 500 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 501 "data/maps/RouteEight/scripts.pory"
	switch VAR_RESULT
# 502 "data/maps/RouteEight/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 503 "data/maps/RouteEight/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 504 "data/maps/RouteEight/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 505 "data/maps/RouteEight/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 506 "data/maps/RouteEight/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 507 "data/maps/RouteEight/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 508 "data/maps/RouteEight/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 509 "data/maps/RouteEight/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 510 "data/maps/RouteEight/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 511 "data/maps/RouteEight/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 512 "data/maps/RouteEight/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 513 "data/maps/RouteEight/scripts.pory"
	end
# 514 "data/maps/RouteEight/scripts.pory"

# 515 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 516 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 517 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 518 "data/maps/RouteEight/scripts.pory"
	end
# 519 "data/maps/RouteEight/scripts.pory"

# 520 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 521 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 522 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 523 "data/maps/RouteEight/scripts.pory"
	end
# 524 "data/maps/RouteEight/scripts.pory"

# 525 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 526 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 527 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 528 "data/maps/RouteEight/scripts.pory"
	end
# 529 "data/maps/RouteEight/scripts.pory"

# 530 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 531 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 532 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 533 "data/maps/RouteEight/scripts.pory"
	end
# 534 "data/maps/RouteEight/scripts.pory"

# 535 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 536 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 537 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 538 "data/maps/RouteEight/scripts.pory"
	end
# 539 "data/maps/RouteEight/scripts.pory"

# 540 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_EndChallenge::
# 541 "data/maps/RouteEight/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 542 "data/maps/RouteEight/scripts.pory"
	savebgm MUS_DUMMY
# 543 "data/maps/RouteEight/scripts.pory"
	fadedefaultbgm
# 544 "data/maps/RouteEight/scripts.pory"
	return
# 545 "data/maps/RouteEight/scripts.pory"

# 546 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 547 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 1
# 548 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalScene
# 549 "data/maps/RouteEight/scripts.pory"
	end
# 550 "data/maps/RouteEight/scripts.pory"

# 551 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 552 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 2
# 553 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalScene
# 554 "data/maps/RouteEight/scripts.pory"
	end
# 555 "data/maps/RouteEight/scripts.pory"

# 556 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 557 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 3
# 558 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalScene
# 559 "data/maps/RouteEight/scripts.pory"
	end
# 560 "data/maps/RouteEight/scripts.pory"

# 561 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalScene::
# 562 "data/maps/RouteEight/scripts.pory"
	lockall
# 563 "data/maps/RouteEight/scripts.pory"
	checkplayergender
# 564 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 565 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 566 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 567 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 568 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 569 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 570 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 571 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 572 "data/maps/RouteEight/scripts.pory"
	delay 30
# 573 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 574 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 575 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 576 "data/maps/RouteEight/scripts.pory"
	checkplayergender
# 577 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 578 "data/maps/RouteEight/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 579 "data/maps/RouteEight/scripts.pory"
	releaseall
# 580 "data/maps/RouteEight/scripts.pory"
	end
# 581 "data/maps/RouteEight/scripts.pory"

# 582 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 583 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 584 "data/maps/RouteEight/scripts.pory"
	return
# 585 "data/maps/RouteEight/scripts.pory"

# 586 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 587 "data/maps/RouteEight/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 588 "data/maps/RouteEight/scripts.pory"
	return
# 589 "data/maps/RouteEight/scripts.pory"

# 590 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattle::
# 591 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 592 "data/maps/RouteEight/scripts.pory"
	switch VAR_STARTER_MON
# 593 "data/maps/RouteEight/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 594 "data/maps/RouteEight/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 595 "data/maps/RouteEight/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 596 "data/maps/RouteEight/scripts.pory"
	end
# 597 "data/maps/RouteEight/scripts.pory"

# 598 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 599 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 600 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 601 "data/maps/RouteEight/scripts.pory"
	end
# 602 "data/maps/RouteEight/scripts.pory"

# 603 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 604 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 605 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 606 "data/maps/RouteEight/scripts.pory"
	end
# 607 "data/maps/RouteEight/scripts.pory"

# 608 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 609 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 610 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 611 "data/maps/RouteEight/scripts.pory"
	end
# 612 "data/maps/RouteEight/scripts.pory"

# 613 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MayDefeated::
# 614 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 615 "data/maps/RouteEight/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 616 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 617 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalExit
# 618 "data/maps/RouteEight/scripts.pory"
	end
# 619 "data/maps/RouteEight/scripts.pory"

# 620 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattle::
# 621 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 622 "data/maps/RouteEight/scripts.pory"
	switch VAR_STARTER_MON
# 623 "data/maps/RouteEight/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 624 "data/maps/RouteEight/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 625 "data/maps/RouteEight/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 626 "data/maps/RouteEight/scripts.pory"
	end
# 627 "data/maps/RouteEight/scripts.pory"

# 628 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 629 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 630 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 631 "data/maps/RouteEight/scripts.pory"
	end
# 632 "data/maps/RouteEight/scripts.pory"

# 633 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 634 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 635 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 636 "data/maps/RouteEight/scripts.pory"
	end
# 637 "data/maps/RouteEight/scripts.pory"

# 638 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 639 "data/maps/RouteEight/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 640 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 641 "data/maps/RouteEight/scripts.pory"
	end
# 642 "data/maps/RouteEight/scripts.pory"

# 643 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 644 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 645 "data/maps/RouteEight/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 646 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 647 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_RivalExit
# 648 "data/maps/RouteEight/scripts.pory"
	end
# 649 "data/maps/RouteEight/scripts.pory"

# 650 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 651 "data/maps/RouteEight/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 652 "data/maps/RouteEight/scripts.pory"
	return
# 653 "data/maps/RouteEight/scripts.pory"

# 654 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit::
# 655 "data/maps/RouteEight/scripts.pory"
	closemessage
# 656 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 657 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 658 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 659 "data/maps/RouteEight/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 660 "data/maps/RouteEight/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 661 "data/maps/RouteEight/scripts.pory"
	removeobject LOCALID_RIVAL
# 662 "data/maps/RouteEight/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 663 "data/maps/RouteEight/scripts.pory"
	delay 45
# 664 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 665 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 666 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 667 "data/maps/RouteEight/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 668 "data/maps/RouteEight/scripts.pory"
	setvar VAR_ROUTE_EIGHT_STATE, 1
# 669 "data/maps/RouteEight/scripts.pory"
	savebgm MUS_DUMMY
# 670 "data/maps/RouteEight/scripts.pory"
	fadedefaultbgm
# 671 "data/maps/RouteEight/scripts.pory"
	releaseall
# 672 "data/maps/RouteEight/scripts.pory"
	end
# 673 "data/maps/RouteEight/scripts.pory"

# 674 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 675 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 676 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 677 "data/maps/RouteEight/scripts.pory"
	return
# 678 "data/maps/RouteEight/scripts.pory"

# 679 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 680 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 681 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 682 "data/maps/RouteEight/scripts.pory"
	return
# 683 "data/maps/RouteEight/scripts.pory"

# 684 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 685 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 686 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 687 "data/maps/RouteEight/scripts.pory"
	return
# 688 "data/maps/RouteEight/scripts.pory"

# 689 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit1::
# 690 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 691 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 692 "data/maps/RouteEight/scripts.pory"
	return
# 693 "data/maps/RouteEight/scripts.pory"

# 694 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit2::
# 695 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 696 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 697 "data/maps/RouteEight/scripts.pory"
	return
# 698 "data/maps/RouteEight/scripts.pory"

# 699 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_RivalExit3::
# 700 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 701 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 702 "data/maps/RouteEight/scripts.pory"
	return
# 703 "data/maps/RouteEight/scripts.pory"

# 704 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MoveRival1::
# 705 "data/maps/RouteEight/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 706 "data/maps/RouteEight/scripts.pory"
	return
# 707 "data/maps/RouteEight/scripts.pory"

# 708 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MoveRival2::
# 709 "data/maps/RouteEight/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 710 "data/maps/RouteEight/scripts.pory"
	return
# 711 "data/maps/RouteEight/scripts.pory"

# 712 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_MoveRival3::
# 713 "data/maps/RouteEight/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 714 "data/maps/RouteEight/scripts.pory"
	return
# 715 "data/maps/RouteEight/scripts.pory"

# 716 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 717 "data/maps/RouteEight/scripts.pory"
	walk_down
# 718 "data/maps/RouteEight/scripts.pory"
	walk_left
# 719 "data/maps/RouteEight/scripts.pory"
	walk_in_place_faster_down
# 720 "data/maps/RouteEight/scripts.pory"
	step_end
# 721 "data/maps/RouteEight/scripts.pory"

# 722 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 723 "data/maps/RouteEight/scripts.pory"
	walk_down
# 724 "data/maps/RouteEight/scripts.pory"
	step_end
# 725 "data/maps/RouteEight/scripts.pory"

# 726 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 727 "data/maps/RouteEight/scripts.pory"
	walk_down
# 728 "data/maps/RouteEight/scripts.pory"
	walk_right
# 729 "data/maps/RouteEight/scripts.pory"
	walk_in_place_faster_down
# 730 "data/maps/RouteEight/scripts.pory"
	step_end
# 731 "data/maps/RouteEight/scripts.pory"

# 732 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalExit1:
# 733 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 734 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
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
	step_end
# 741 "data/maps/RouteEight/scripts.pory"

# 742 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalExit2:
# 743 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 744 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 745 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 746 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 747 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 748 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 749 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 750 "data/maps/RouteEight/scripts.pory"
	walk_fast_down
# 751 "data/maps/RouteEight/scripts.pory"
	step_end
# 752 "data/maps/RouteEight/scripts.pory"

# 753 "data/maps/RouteEight/scripts.pory"
Route110_Movement_RivalExit3:
# 754 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 755 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 756 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 757 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 758 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 759 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 760 "data/maps/RouteEight/scripts.pory"
	walk_fast_up
# 761 "data/maps/RouteEight/scripts.pory"
	step_end
# 762 "data/maps/RouteEight/scripts.pory"

# 763 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene1::
# 764 "data/maps/RouteEight/scripts.pory"
	lockall
# 765 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 1
# 766 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 767 "data/maps/RouteEight/scripts.pory"

# 768 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene2::
# 769 "data/maps/RouteEight/scripts.pory"
	lockall
# 770 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 2
# 771 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 772 "data/maps/RouteEight/scripts.pory"

# 773 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene3::
# 774 "data/maps/RouteEight/scripts.pory"
	lockall
# 775 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 3
# 776 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 777 "data/maps/RouteEight/scripts.pory"

# 778 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene4::
# 779 "data/maps/RouteEight/scripts.pory"
	lockall
# 780 "data/maps/RouteEight/scripts.pory"
	setvar VAR_0x8008, 4
# 781 "data/maps/RouteEight/scripts.pory"
	goto Route110_EventScript_BirchScene
# 782 "data/maps/RouteEight/scripts.pory"

# 783 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchScene::
# 784 "data/maps/RouteEight/scripts.pory"
	addobject LOCALID_BIRCH
# 785 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 786 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 787 "data/maps/RouteEight/scripts.pory"
	playse SE_PIN
# 788 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 789 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 790 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 791 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 792 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 793 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 794 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 795 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 796 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 797 "data/maps/RouteEight/scripts.pory"
	closemessage
# 798 "data/maps/RouteEight/scripts.pory"
	delay 20
# 799 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 800 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 801 "data/maps/RouteEight/scripts.pory"
	delay 10
# 802 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 803 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 804 "data/maps/RouteEight/scripts.pory"
	delay 20
# 805 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 806 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 807 "data/maps/RouteEight/scripts.pory"
	delay 30
# 808 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 809 "data/maps/RouteEight/scripts.pory"
	closemessage
# 810 "data/maps/RouteEight/scripts.pory"
	delay 30
# 811 "data/maps/RouteEight/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 812 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 813 "data/maps/RouteEight/scripts.pory"
	waitfanfare
# 814 "data/maps/RouteEight/scripts.pory"
	closemessage
# 815 "data/maps/RouteEight/scripts.pory"
	delay 30
# 816 "data/maps/RouteEight/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 817 "data/maps/RouteEight/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 818 "data/maps/RouteEight/scripts.pory"
	closemessage
# 819 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 820 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 821 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 822 "data/maps/RouteEight/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 823 "data/maps/RouteEight/scripts.pory"
	removeobject LOCALID_BIRCH
# 824 "data/maps/RouteEight/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 825 "data/maps/RouteEight/scripts.pory"
	releaseall
# 826 "data/maps/RouteEight/scripts.pory"
	end
# 827 "data/maps/RouteEight/scripts.pory"

# 828 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 829 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 830 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 831 "data/maps/RouteEight/scripts.pory"
	return
# 832 "data/maps/RouteEight/scripts.pory"

# 833 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 834 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 835 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 836 "data/maps/RouteEight/scripts.pory"
	return
# 837 "data/maps/RouteEight/scripts.pory"

# 838 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 839 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 840 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 841 "data/maps/RouteEight/scripts.pory"
	return
# 842 "data/maps/RouteEight/scripts.pory"

# 843 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 844 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 845 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 846 "data/maps/RouteEight/scripts.pory"
	return
# 847 "data/maps/RouteEight/scripts.pory"

# 848 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit1::
# 849 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 850 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 851 "data/maps/RouteEight/scripts.pory"
	return
# 852 "data/maps/RouteEight/scripts.pory"

# 853 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit2::
# 854 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 855 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 856 "data/maps/RouteEight/scripts.pory"
	return
# 857 "data/maps/RouteEight/scripts.pory"

# 858 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit3::
# 859 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 860 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 861 "data/maps/RouteEight/scripts.pory"
	return
# 862 "data/maps/RouteEight/scripts.pory"

# 863 "data/maps/RouteEight/scripts.pory"
Route110_EventScript_BirchExit4::
# 864 "data/maps/RouteEight/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 865 "data/maps/RouteEight/scripts.pory"
	waitmovement 0
# 866 "data/maps/RouteEight/scripts.pory"
	return
# 867 "data/maps/RouteEight/scripts.pory"

# 868 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchEntrance:
# 869 "data/maps/RouteEight/scripts.pory"
	walk_down
# 870 "data/maps/RouteEight/scripts.pory"
	walk_down
# 871 "data/maps/RouteEight/scripts.pory"
	walk_down
# 872 "data/maps/RouteEight/scripts.pory"
	step_end
# 873 "data/maps/RouteEight/scripts.pory"

# 874 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 875 "data/maps/RouteEight/scripts.pory"
	walk_down
# 876 "data/maps/RouteEight/scripts.pory"
	walk_left
# 877 "data/maps/RouteEight/scripts.pory"
	walk_left
# 878 "data/maps/RouteEight/scripts.pory"
	walk_down
# 879 "data/maps/RouteEight/scripts.pory"
	step_end
# 880 "data/maps/RouteEight/scripts.pory"

# 881 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 882 "data/maps/RouteEight/scripts.pory"
	walk_down
# 883 "data/maps/RouteEight/scripts.pory"
	walk_left
# 884 "data/maps/RouteEight/scripts.pory"
	walk_down
# 885 "data/maps/RouteEight/scripts.pory"
	step_end
# 886 "data/maps/RouteEight/scripts.pory"

# 887 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 888 "data/maps/RouteEight/scripts.pory"
	walk_down
# 889 "data/maps/RouteEight/scripts.pory"
	walk_down
# 890 "data/maps/RouteEight/scripts.pory"
	step_end
# 891 "data/maps/RouteEight/scripts.pory"

# 892 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 893 "data/maps/RouteEight/scripts.pory"
	walk_down
# 894 "data/maps/RouteEight/scripts.pory"
	walk_right
# 895 "data/maps/RouteEight/scripts.pory"
	walk_down
# 896 "data/maps/RouteEight/scripts.pory"
	step_end
# 897 "data/maps/RouteEight/scripts.pory"

# 898 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit1:
# 899 "data/maps/RouteEight/scripts.pory"
	walk_up
# 900 "data/maps/RouteEight/scripts.pory"
	walk_up
# 901 "data/maps/RouteEight/scripts.pory"
	walk_right
# 902 "data/maps/RouteEight/scripts.pory"
	walk_up
# 903 "data/maps/RouteEight/scripts.pory"
	walk_up
# 904 "data/maps/RouteEight/scripts.pory"
	walk_up
# 905 "data/maps/RouteEight/scripts.pory"
	step_end
# 906 "data/maps/RouteEight/scripts.pory"

# 907 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit2:
# 908 "data/maps/RouteEight/scripts.pory"
	walk_up
# 909 "data/maps/RouteEight/scripts.pory"
	walk_up
# 910 "data/maps/RouteEight/scripts.pory"
	walk_up
# 911 "data/maps/RouteEight/scripts.pory"
	walk_up
# 912 "data/maps/RouteEight/scripts.pory"
	walk_up
# 913 "data/maps/RouteEight/scripts.pory"
	step_end
# 914 "data/maps/RouteEight/scripts.pory"

# 915 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit3:
# 916 "data/maps/RouteEight/scripts.pory"
	walk_up
# 917 "data/maps/RouteEight/scripts.pory"
	walk_up
# 918 "data/maps/RouteEight/scripts.pory"
	walk_up
# 919 "data/maps/RouteEight/scripts.pory"
	walk_up
# 920 "data/maps/RouteEight/scripts.pory"
	walk_up
# 921 "data/maps/RouteEight/scripts.pory"
	step_end
# 922 "data/maps/RouteEight/scripts.pory"

# 923 "data/maps/RouteEight/scripts.pory"
Route110_Movement_BirchExit4:
# 924 "data/maps/RouteEight/scripts.pory"
	walk_up
# 925 "data/maps/RouteEight/scripts.pory"
	walk_up
# 926 "data/maps/RouteEight/scripts.pory"
	walk_up
# 927 "data/maps/RouteEight/scripts.pory"
	walk_up
# 928 "data/maps/RouteEight/scripts.pory"
	walk_up
# 929 "data/maps/RouteEight/scripts.pory"
	step_end
# 930 "data/maps/RouteEight/scripts.pory"

# 931 "data/maps/RouteEight/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 932 "data/maps/RouteEight/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 933 "data/maps/RouteEight/scripts.pory"
	.string "We can't talk about them yet.$"
# 934 "data/maps/RouteEight/scripts.pory"

# 935 "data/maps/RouteEight/scripts.pory"
Route110_Text_KickUpARuckus:
# 936 "data/maps/RouteEight/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 937 "data/maps/RouteEight/scripts.pory"
	.string "kick up a ruckus!$"
# 938 "data/maps/RouteEight/scripts.pory"

# 939 "data/maps/RouteEight/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 940 "data/maps/RouteEight/scripts.pory"
	.string "This is my first job after joining\n"
# 941 "data/maps/RouteEight/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 942 "data/maps/RouteEight/scripts.pory"

# 943 "data/maps/RouteEight/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 944 "data/maps/RouteEight/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 945 "data/maps/RouteEight/scripts.pory"
	.string "smiles to people's faces!$"
# 946 "data/maps/RouteEight/scripts.pory"

# 947 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayLetsBattle:
# 948 "data/maps/RouteEight/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 949 "data/maps/RouteEight/scripts.pory"
	.string "While I was searching for other\n"
# 950 "data/maps/RouteEight/scripts.pory"
	.string "POKéMON, my POKéMON grew stronger.\p"
# 951 "data/maps/RouteEight/scripts.pory"
	.string "So…\n"
# 952 "data/maps/RouteEight/scripts.pory"
	.string "How about a little battle?$"
# 953 "data/maps/RouteEight/scripts.pory"

# 954 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayDefeated:
# 955 "data/maps/RouteEight/scripts.pory"
	.string "Yikes!\n"
# 956 "data/maps/RouteEight/scripts.pory"
	.string "You're better than I expected!$"
# 957 "data/maps/RouteEight/scripts.pory"

# 958 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayTakeThis:
# 959 "data/maps/RouteEight/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 960 "data/maps/RouteEight/scripts.pory"
	.string "training, too, haven't you?\p"
# 961 "data/maps/RouteEight/scripts.pory"
	.string "I think you deserve a reward!\n"
# 962 "data/maps/RouteEight/scripts.pory"
	.string "This is from me!$"
# 963 "data/maps/RouteEight/scripts.pory"

# 964 "data/maps/RouteEight/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 965 "data/maps/RouteEight/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 966 "data/maps/RouteEight/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 967 "data/maps/RouteEight/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 968 "data/maps/RouteEight/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 969 "data/maps/RouteEight/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 970 "data/maps/RouteEight/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 971 "data/maps/RouteEight/scripts.pory"
	.string "harder for the next time.$"
# 972 "data/maps/RouteEight/scripts.pory"

# 973 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 974 "data/maps/RouteEight/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 975 "data/maps/RouteEight/scripts.pory"
	.string "So this is where you were.\l"
# 976 "data/maps/RouteEight/scripts.pory"
	.string "How's it going?\p"
# 977 "data/maps/RouteEight/scripts.pory"
	.string "Have you been raising your POKéMON?\n"
# 978 "data/maps/RouteEight/scripts.pory"
	.string "I'll check for you.$"
# 979 "data/maps/RouteEight/scripts.pory"

# 980 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanDefeated:
# 981 "data/maps/RouteEight/scripts.pory"
	.string "Hmm…\n"
# 982 "data/maps/RouteEight/scripts.pory"
	.string "You're pretty good.$"
# 983 "data/maps/RouteEight/scripts.pory"

# 984 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanTakeThis:
# 985 "data/maps/RouteEight/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 986 "data/maps/RouteEight/scripts.pory"
	.string "without me noticing…\p"
# 987 "data/maps/RouteEight/scripts.pory"
	.string "Good enough!\n"
# 988 "data/maps/RouteEight/scripts.pory"
	.string "Here, take this.$"
# 989 "data/maps/RouteEight/scripts.pory"

# 990 "data/maps/RouteEight/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 991 "data/maps/RouteEight/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 992 "data/maps/RouteEight/scripts.pory"
	.string "Use it to root around for items that\n"
# 993 "data/maps/RouteEight/scripts.pory"
	.string "aren't visible.\p"
# 994 "data/maps/RouteEight/scripts.pory"
	.string "If it senses something, it emits\n"
# 995 "data/maps/RouteEight/scripts.pory"
	.string "a sound.\p"
# 996 "data/maps/RouteEight/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 997 "data/maps/RouteEight/scripts.pory"
	.string "POKéMON.$"
# 998 "data/maps/RouteEight/scripts.pory"

# 999 "data/maps/RouteEight/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 1000 "data/maps/RouteEight/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 1001 "data/maps/RouteEight/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 1002 "data/maps/RouteEight/scripts.pory"

# 1003 "data/maps/RouteEight/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 1004 "data/maps/RouteEight/scripts.pory"
	.string "How do you like the way my raven-\n"
# 1005 "data/maps/RouteEight/scripts.pory"
	.string "colored hair streams behind me?\p"
# 1006 "data/maps/RouteEight/scripts.pory"
	.string "I grew my hair out just for that.$"
# 1007 "data/maps/RouteEight/scripts.pory"

# 1008 "data/maps/RouteEight/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 1009 "data/maps/RouteEight/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 1010 "data/maps/RouteEight/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 1011 "data/maps/RouteEight/scripts.pory"
	.string "It says right on your bike…\p"
# 1012 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1013 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1014 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1015 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1016 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1017 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1018 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 1019 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 1020 "data/maps/RouteEight/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 1021 "data/maps/RouteEight/scripts.pory"
	.string "That name's everywhere.\p"
# 1022 "data/maps/RouteEight/scripts.pory"
	.string "You should ride it around all over\n"
# 1023 "data/maps/RouteEight/scripts.pory"
	.string "the place--it's good advertising!$"
# 1024 "data/maps/RouteEight/scripts.pory"

# 1025 "data/maps/RouteEight/scripts.pory"
Route110_Text_TwoRoads:
# 1026 "data/maps/RouteEight/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 1027 "data/maps/RouteEight/scripts.pory"
	.string "A road each for people and POKéMON.\n"
# 1028 "data/maps/RouteEight/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 1029 "data/maps/RouteEight/scripts.pory"

# 1030 "data/maps/RouteEight/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 1031 "data/maps/RouteEight/scripts.pory"
	.string "I don't have a BIKE, so I'll take\n"
# 1032 "data/maps/RouteEight/scripts.pory"
	.string "a leisurely walk on the low road.$"
# 1033 "data/maps/RouteEight/scripts.pory"

# 1034 "data/maps/RouteEight/scripts.pory"
Route110_Text_BikeTechniques:
# 1035 "data/maps/RouteEight/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 1036 "data/maps/RouteEight/scripts.pory"
	.string "riding even more fun.\p"
# 1037 "data/maps/RouteEight/scripts.pory"
	.string "There are some places that you can\n"
# 1038 "data/maps/RouteEight/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 1039 "data/maps/RouteEight/scripts.pory"

# 1040 "data/maps/RouteEight/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 1041 "data/maps/RouteEight/scripts.pory"
	.string "Which should I choose?\p"
# 1042 "data/maps/RouteEight/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 1043 "data/maps/RouteEight/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 1044 "data/maps/RouteEight/scripts.pory"
	.string "and look for POKéMON?$"
# 1045 "data/maps/RouteEight/scripts.pory"

# 1046 "data/maps/RouteEight/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 1047 "data/maps/RouteEight/scripts.pory"
	.string "Number of collisions:\n"
# 1048 "data/maps/RouteEight/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 1049 "data/maps/RouteEight/scripts.pory"
	.string "Total time:\n"
# 1050 "data/maps/RouteEight/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 1051 "data/maps/RouteEight/scripts.pory"

# 1052 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 1053 "data/maps/RouteEight/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 1054 "data/maps/RouteEight/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 1055 "data/maps/RouteEight/scripts.pory"
	.string "within your heart.\l"
# 1056 "data/maps/RouteEight/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 1057 "data/maps/RouteEight/scripts.pory"

# 1058 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 1059 "data/maps/RouteEight/scripts.pory"
	.string "Your technique is remarkable.\p"
# 1060 "data/maps/RouteEight/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 1061 "data/maps/RouteEight/scripts.pory"
	.string "still avoiding collisions.$"
# 1062 "data/maps/RouteEight/scripts.pory"

# 1063 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 1064 "data/maps/RouteEight/scripts.pory"
	.string "I would consider you a work in\n"
# 1065 "data/maps/RouteEight/scripts.pory"
	.string "progress.\p"
# 1066 "data/maps/RouteEight/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 1067 "data/maps/RouteEight/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 1068 "data/maps/RouteEight/scripts.pory"

# 1069 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 1070 "data/maps/RouteEight/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 1071 "data/maps/RouteEight/scripts.pory"
	.string "on terrifying.\p"
# 1072 "data/maps/RouteEight/scripts.pory"
	.string "Most certainly, you need much more\n"
# 1073 "data/maps/RouteEight/scripts.pory"
	.string "practice riding.$"
# 1074 "data/maps/RouteEight/scripts.pory"

# 1075 "data/maps/RouteEight/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 1076 "data/maps/RouteEight/scripts.pory"
	.string "…I am aghast…\p"
# 1077 "data/maps/RouteEight/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 1078 "data/maps/RouteEight/scripts.pory"
	.string "unfortunate cycling business.\p"
# 1079 "data/maps/RouteEight/scripts.pory"
	.string "You ought to give serious thought to\n"
# 1080 "data/maps/RouteEight/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 1081 "data/maps/RouteEight/scripts.pory"

# 1082 "data/maps/RouteEight/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 1083 "data/maps/RouteEight/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 1084 "data/maps/RouteEight/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 1085 "data/maps/RouteEight/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 1086 "data/maps/RouteEight/scripts.pory"
	.string "be rated for the number of collisions\l"
# 1087 "data/maps/RouteEight/scripts.pory"
	.string "and your total time.$"
# 1088 "data/maps/RouteEight/scripts.pory"

# 1089 "data/maps/RouteEight/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 1090 "data/maps/RouteEight/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 1091 "data/maps/RouteEight/scripts.pory"
	.string "seeing more challenges from you.\l"
# 1092 "data/maps/RouteEight/scripts.pory"
	.string "Always aim higher!$"
# 1093 "data/maps/RouteEight/scripts.pory"

# 1094 "data/maps/RouteEight/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 1095 "data/maps/RouteEight/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 1096 "data/maps/RouteEight/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 1097 "data/maps/RouteEight/scripts.pory"
	.string "of collisions and their total times.\p"
# 1098 "data/maps/RouteEight/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 1099 "data/maps/RouteEight/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 1100 "data/maps/RouteEight/scripts.pory"

# 1101 "data/maps/RouteEight/scripts.pory"
Route110_Text_SlateportCitySign:
# 1102 "data/maps/RouteEight/scripts.pory"
	.string "ROUTE 110\n"
# 1103 "data/maps/RouteEight/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 1104 "data/maps/RouteEight/scripts.pory"

# 1105 "data/maps/RouteEight/scripts.pory"
Route110_Text_CyclingRoadSign:
# 1106 "data/maps/RouteEight/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 1107 "data/maps/RouteEight/scripts.pory"

# 1108 "data/maps/RouteEight/scripts.pory"
Route110_Text_AquaWasHere:
# 1109 "data/maps/RouteEight/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 1110 "data/maps/RouteEight/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 1111 "data/maps/RouteEight/scripts.pory"
	.string "but then someone else painted over it.\p"
# 1112 "data/maps/RouteEight/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 1113 "data/maps/RouteEight/scripts.pory"
	.string "says now.$"
# 1114 "data/maps/RouteEight/scripts.pory"

# 1115 "data/maps/RouteEight/scripts.pory"
Route110_Text_Route103Sign:
# 1116 "data/maps/RouteEight/scripts.pory"
	.string "ROUTE 110\n"
# 1117 "data/maps/RouteEight/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 1118 "data/maps/RouteEight/scripts.pory"

# 1119 "data/maps/RouteEight/scripts.pory"
Route110_Text_SeasideParkingSign:
# 1120 "data/maps/RouteEight/scripts.pory"
	.string "SEASIDE PARKING$"
# 1121 "data/maps/RouteEight/scripts.pory"

# 1122 "data/maps/RouteEight/scripts.pory"
Route110_Text_MauvilleCitySign:
# 1123 "data/maps/RouteEight/scripts.pory"
	.string "ROUTE 110\n"
# 1124 "data/maps/RouteEight/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 1125 "data/maps/RouteEight/scripts.pory"

# 1126 "data/maps/RouteEight/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 1127 "data/maps/RouteEight/scripts.pory"
	.string "TRAINER TIPS\p"
# 1128 "data/maps/RouteEight/scripts.pory"
	.string "The foe can be made helpless by\n"
# 1129 "data/maps/RouteEight/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 1130 "data/maps/RouteEight/scripts.pory"
	.string "It is an important technique for\n"
# 1131 "data/maps/RouteEight/scripts.pory"
	.string "POKéMON battles.$"
# 1132 "data/maps/RouteEight/scripts.pory"

# 1133 "data/maps/RouteEight/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 1134 "data/maps/RouteEight/scripts.pory"
	.string "TRAINER TIPS\p"
# 1135 "data/maps/RouteEight/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 1136 "data/maps/RouteEight/scripts.pory"
	.string "by pressing SELECT.$"
# 1137 "data/maps/RouteEight/scripts.pory"

# 1138 "data/maps/RouteEight/scripts.pory"
Route110_Text_TrickHouseSign:
# 1139 "data/maps/RouteEight/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 1140 "data/maps/RouteEight/scripts.pory"
	.string "to reach the wondrous TRICK HOUSE.”$"
# 1141 "data/maps/RouteEight/scripts.pory"

# 1142 "data/maps/RouteEight/scripts.pory"
Route110_Text_BestRecord:
# 1143 "data/maps/RouteEight/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1144 "data/maps/RouteEight/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 1145 "data/maps/RouteEight/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 1146 "data/maps/RouteEight/scripts.pory"

# 1147 "data/maps/RouteEight/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 1148 "data/maps/RouteEight/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 1149 "data/maps/RouteEight/scripts.pory"
	.string "No one seems to have taken the\n"
# 1150 "data/maps/RouteEight/scripts.pory"
	.string "challenge. There is no record…$"
# 1151 "data/maps/RouteEight/scripts.pory"

# 1152 "data/maps/RouteEight/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 1153 "data/maps/RouteEight/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 1154 "data/maps/RouteEight/scripts.pory"
	.string "Imagine seeing you here!\p"
# 1155 "data/maps/RouteEight/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 1156 "data/maps/RouteEight/scripts.pory"

# 1157 "data/maps/RouteEight/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1158 "data/maps/RouteEight/scripts.pory"
	.string "Oh, I see!\n"
# 1159 "data/maps/RouteEight/scripts.pory"
	.string "You two are running separately.\l"
# 1160 "data/maps/RouteEight/scripts.pory"
	.string "Well, that's fine.\p"
# 1161 "data/maps/RouteEight/scripts.pory"
	.string "Oh, yes, I heard that your POKéNAV\n"
# 1162 "data/maps/RouteEight/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1163 "data/maps/RouteEight/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1164 "data/maps/RouteEight/scripts.pory"
	.string "my POKéNAV as well.\p"
# 1165 "data/maps/RouteEight/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1166 "data/maps/RouteEight/scripts.pory"
	.string "I can rate your POKéDEX anytime.\p"
# 1167 "data/maps/RouteEight/scripts.pory"
	.string "… … … … … …$"
# 1168 "data/maps/RouteEight/scripts.pory"

# 1169 "data/maps/RouteEight/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1170 "data/maps/RouteEight/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1171 "data/maps/RouteEight/scripts.pory"
	.string "in the POKéNAV.$"
# 1172 "data/maps/RouteEight/scripts.pory"

# 1173 "data/maps/RouteEight/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1174 "data/maps/RouteEight/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1175 "data/maps/RouteEight/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1176 "data/maps/RouteEight/scripts.pory"
	.string "… … … … … …\p"
# 1177 "data/maps/RouteEight/scripts.pory"
	.string "Well, I had better get going.\n"
# 1178 "data/maps/RouteEight/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

RouteEight_EventScript_GruntNorth_Text_0:
# 101 "data/maps/RouteEight/scripts.pory"
	.string "Outta my way, kid! I just stole\n"
	.string "something from the next town over!$"

RouteEight_EventScript_GruntNorth_Text_1:
# 104 "data/maps/RouteEight/scripts.pory"
	.string "This isn't the last you'll see of me…$"

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

RouteEight_Text_GalacticDefeated::
# 175 "data/maps/RouteEight/scripts.pory"
	.string "Just like in Sinnoh…$"
