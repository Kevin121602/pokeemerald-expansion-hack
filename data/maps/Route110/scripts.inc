Route110_EventScript_OldWoman::
# 2 "data/maps/Route110/scripts.pory"
	lock
# 3 "data/maps/Route110/scripts.pory"
	faceplayer
# 4 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_BLOCK_TRICK_HOUSE, Route110_EventScript_OldWoman_2
# 13 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_OldWoman_Text_1
Route110_EventScript_OldWoman_1:
# 19 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_OldWoman_2:
# 5 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_OldWoman_Text_0
	goto Route110_EventScript_OldWoman_1


# 23 "data/maps/Route110/scripts.pory"

# 24 "data/maps/Route110/scripts.pory"
.set LOCALID_CHALLENGE_BIKER, 21
# 25 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL, 28
# 26 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 27 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 28 "data/maps/Route110/scripts.pory"
.set LOCALID_OLD_WOMAN, 3
# 29 "data/maps/Route110/scripts.pory"

# 30 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 31 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 32 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 33 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 34 "data/maps/Route110/scripts.pory"
	.byte 0
# 35 "data/maps/Route110/scripts.pory"

# 36 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 37 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 38 "data/maps/Route110/scripts.pory"
	end
# 39 "data/maps/Route110/scripts.pory"

# 40 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 41 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 42 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 43 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 44 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_BLOCK_TRICK_HOUSE, Route110_EventScript_BlockTrickHouse
# 45 "data/maps/Route110/scripts.pory"
	end
# 46 "data/maps/Route110/scripts.pory"

# 47 "data/maps/Route110/scripts.pory"
Route110_EventScript_BlockTrickHouse::
# 48 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 11, 67
# 49 "data/maps/Route110/scripts.pory"
	return
# 50 "data/maps/Route110/scripts.pory"

# 51 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 52 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 53 "data/maps/Route110/scripts.pory"
	return
# 54 "data/maps/Route110/scripts.pory"

# 55 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 56 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 57 "data/maps/Route110/scripts.pory"
	.2byte 0
# 58 "data/maps/Route110/scripts.pory"

# 59 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 60 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 61 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 62 "data/maps/Route110/scripts.pory"
	return
# 63 "data/maps/Route110/scripts.pory"

# 64 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 65 "data/maps/Route110/scripts.pory"
	lock
# 66 "data/maps/Route110/scripts.pory"
	faceplayer
# 67 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 68 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 69 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route110/scripts.pory"
	release
# 71 "data/maps/Route110/scripts.pory"
	end
# 72 "data/maps/Route110/scripts.pory"

# 73 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 74 "data/maps/Route110/scripts.pory"
	lock
# 75 "data/maps/Route110/scripts.pory"
	faceplayer
# 76 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 77 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 78 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route110/scripts.pory"
	release
# 80 "data/maps/Route110/scripts.pory"
	end
# 81 "data/maps/Route110/scripts.pory"

# 82 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 83 "data/maps/Route110/scripts.pory"
	lock
# 84 "data/maps/Route110/scripts.pory"
	faceplayer
# 85 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 86 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 87 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route110/scripts.pory"
	release
# 89 "data/maps/Route110/scripts.pory"
	end
# 90 "data/maps/Route110/scripts.pory"

# 91 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 92 "data/maps/Route110/scripts.pory"
	lock
# 93 "data/maps/Route110/scripts.pory"
	faceplayer
# 94 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 95 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 96 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route110/scripts.pory"
	release
# 98 "data/maps/Route110/scripts.pory"
	end
# 99 "data/maps/Route110/scripts.pory"

# 100 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 101 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 102 "data/maps/Route110/scripts.pory"
	end
# 103 "data/maps/Route110/scripts.pory"

# 104 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 105 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 106 "data/maps/Route110/scripts.pory"
	end
# 107 "data/maps/Route110/scripts.pory"

# 108 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 109 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 110 "data/maps/Route110/scripts.pory"
	end
# 111 "data/maps/Route110/scripts.pory"

# 112 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 113 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 114 "data/maps/Route110/scripts.pory"
	end
# 115 "data/maps/Route110/scripts.pory"

# 116 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 117 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 118 "data/maps/Route110/scripts.pory"
	end
# 119 "data/maps/Route110/scripts.pory"

# 120 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 121 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 122 "data/maps/Route110/scripts.pory"
	end
# 123 "data/maps/Route110/scripts.pory"

# 124 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 125 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 126 "data/maps/Route110/scripts.pory"
	end
# 127 "data/maps/Route110/scripts.pory"

# 128 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 129 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 130 "data/maps/Route110/scripts.pory"
	end
# 131 "data/maps/Route110/scripts.pory"

# 132 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 133 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 134 "data/maps/Route110/scripts.pory"
	end
# 135 "data/maps/Route110/scripts.pory"

# 136 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 137 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 138 "data/maps/Route110/scripts.pory"
	end
# 139 "data/maps/Route110/scripts.pory"

# 140 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 141 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 142 "data/maps/Route110/scripts.pory"
	end
# 143 "data/maps/Route110/scripts.pory"

# 144 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 145 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 146 "data/maps/Route110/scripts.pory"
	end
# 147 "data/maps/Route110/scripts.pory"

# 148 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 149 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 150 "data/maps/Route110/scripts.pory"
	end
# 151 "data/maps/Route110/scripts.pory"

# 152 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 153 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 154 "data/maps/Route110/scripts.pory"
	end
# 155 "data/maps/Route110/scripts.pory"

# 156 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 157 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 158 "data/maps/Route110/scripts.pory"
	end
# 159 "data/maps/Route110/scripts.pory"

# 160 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 161 "data/maps/Route110/scripts.pory"
	lockall
# 162 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 163 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 164 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 165 "data/maps/Route110/scripts.pory"
	releaseall
# 166 "data/maps/Route110/scripts.pory"
	end
# 167 "data/maps/Route110/scripts.pory"

# 168 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 169 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 170 "data/maps/Route110/scripts.pory"
	releaseall
# 171 "data/maps/Route110/scripts.pory"
	end
# 172 "data/maps/Route110/scripts.pory"

# 173 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 174 "data/maps/Route110/scripts.pory"
	lock
# 175 "data/maps/Route110/scripts.pory"
	faceplayer
# 176 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 177 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 178 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 179 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 180 "data/maps/Route110/scripts.pory"
	release
# 181 "data/maps/Route110/scripts.pory"
	end
# 182 "data/maps/Route110/scripts.pory"

# 183 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 184 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 185 "data/maps/Route110/scripts.pory"
	release
# 186 "data/maps/Route110/scripts.pory"
	end
# 187 "data/maps/Route110/scripts.pory"

# 188 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 189 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 190 "data/maps/Route110/scripts.pory"
	release
# 191 "data/maps/Route110/scripts.pory"
	end
# 192 "data/maps/Route110/scripts.pory"

# 193 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 194 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 195 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 196 "data/maps/Route110/scripts.pory"
	end
# 197 "data/maps/Route110/scripts.pory"

# 198 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 199 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 200 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route110/scripts.pory"
	end
# 202 "data/maps/Route110/scripts.pory"

# 203 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 204 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 205 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 206 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 207 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 208 "data/maps/Route110/scripts.pory"
	release
# 209 "data/maps/Route110/scripts.pory"
	end
# 210 "data/maps/Route110/scripts.pory"

# 211 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 212 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 213 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 214 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 215 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 216 "data/maps/Route110/scripts.pory"
	release
# 217 "data/maps/Route110/scripts.pory"
	end
# 218 "data/maps/Route110/scripts.pory"

# 219 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 220 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 221 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/Route110/scripts.pory"
	end
# 223 "data/maps/Route110/scripts.pory"

# 224 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 225 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 226 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/Route110/scripts.pory"
	end
# 228 "data/maps/Route110/scripts.pory"

# 229 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 230 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 231 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/Route110/scripts.pory"
	end
# 233 "data/maps/Route110/scripts.pory"

# 234 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 235 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 236 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route110/scripts.pory"
	end
# 238 "data/maps/Route110/scripts.pory"

# 239 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 240 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 241 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 242 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 243 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 244 "data/maps/Route110/scripts.pory"
	release
# 245 "data/maps/Route110/scripts.pory"
	end
# 246 "data/maps/Route110/scripts.pory"

# 247 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 248 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 249 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 250 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 251 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 252 "data/maps/Route110/scripts.pory"
	release
# 253 "data/maps/Route110/scripts.pory"
	end
# 254 "data/maps/Route110/scripts.pory"

# 255 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 256 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 257 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route110/scripts.pory"
	end
# 259 "data/maps/Route110/scripts.pory"

# 260 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 261 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 262 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route110/scripts.pory"
	end
# 264 "data/maps/Route110/scripts.pory"

# 265 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 266 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 267 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 268 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 269 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 270 "data/maps/Route110/scripts.pory"
	release
# 271 "data/maps/Route110/scripts.pory"
	end
# 272 "data/maps/Route110/scripts.pory"

# 273 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 274 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 275 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 276 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 277 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 278 "data/maps/Route110/scripts.pory"
	release
# 279 "data/maps/Route110/scripts.pory"
	end
# 280 "data/maps/Route110/scripts.pory"

# 281 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 282 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 283 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route110/scripts.pory"
	end
# 285 "data/maps/Route110/scripts.pory"

# 286 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 287 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 288 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 289 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 290 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 291 "data/maps/Route110/scripts.pory"
	release
# 292 "data/maps/Route110/scripts.pory"
	end
# 293 "data/maps/Route110/scripts.pory"

# 294 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 295 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 296 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 297 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 298 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 299 "data/maps/Route110/scripts.pory"
	release
# 300 "data/maps/Route110/scripts.pory"
	end
# 301 "data/maps/Route110/scripts.pory"

# 302 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 303 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 304 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route110/scripts.pory"
	end
# 306 "data/maps/Route110/scripts.pory"

# 307 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 308 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 309 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 310 "data/maps/Route110/scripts.pory"
	end
# 311 "data/maps/Route110/scripts.pory"

# 312 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 313 "data/maps/Route110/scripts.pory"
	end
# 314 "data/maps/Route110/scripts.pory"

# 315 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 316 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 317 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route110/scripts.pory"
	end
# 319 "data/maps/Route110/scripts.pory"

# 320 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 321 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 322 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 323 "data/maps/Route110/scripts.pory"
	end
# 324 "data/maps/Route110/scripts.pory"

# 325 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 326 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 327 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 328 "data/maps/Route110/scripts.pory"
	end
# 329 "data/maps/Route110/scripts.pory"

# 330 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 331 "data/maps/Route110/scripts.pory"
	lockall
# 332 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_CHALLENGE_BIKER, Common_Movement_WalkInPlaceFasterRight
# 333 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 335 "data/maps/Route110/scripts.pory"
	releaseall
# 336 "data/maps/Route110/scripts.pory"
	end
# 337 "data/maps/Route110/scripts.pory"

# 338 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 339 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 340 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 341 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 342 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 343 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 344 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 345 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 346 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 347 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 348 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 349 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 350 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 351 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 352 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 353 "data/maps/Route110/scripts.pory"
	end
# 354 "data/maps/Route110/scripts.pory"

# 355 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 356 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 357 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 358 "data/maps/Route110/scripts.pory"
	end
# 359 "data/maps/Route110/scripts.pory"

# 360 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 361 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 362 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 363 "data/maps/Route110/scripts.pory"
	end
# 364 "data/maps/Route110/scripts.pory"

# 365 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 366 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 367 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 368 "data/maps/Route110/scripts.pory"
	end
# 369 "data/maps/Route110/scripts.pory"

# 370 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 371 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 372 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 373 "data/maps/Route110/scripts.pory"
	end
# 374 "data/maps/Route110/scripts.pory"

# 375 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 376 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 377 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 378 "data/maps/Route110/scripts.pory"
	end
# 379 "data/maps/Route110/scripts.pory"

# 380 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 381 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 382 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 383 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 384 "data/maps/Route110/scripts.pory"
	return
# 385 "data/maps/Route110/scripts.pory"

# 386 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 387 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 388 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 389 "data/maps/Route110/scripts.pory"
	end
# 390 "data/maps/Route110/scripts.pory"

# 391 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 392 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 393 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 394 "data/maps/Route110/scripts.pory"
	end
# 395 "data/maps/Route110/scripts.pory"

# 396 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 397 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 398 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 399 "data/maps/Route110/scripts.pory"
	end
# 400 "data/maps/Route110/scripts.pory"

# 401 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 402 "data/maps/Route110/scripts.pory"
	lockall
# 403 "data/maps/Route110/scripts.pory"
	checkplayergender
# 404 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 405 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 406 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 407 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 408 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 409 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 411 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 412 "data/maps/Route110/scripts.pory"
	delay 30
# 413 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 414 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 415 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 416 "data/maps/Route110/scripts.pory"
	checkplayergender
# 417 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 418 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 419 "data/maps/Route110/scripts.pory"
	releaseall
# 420 "data/maps/Route110/scripts.pory"
	end
# 421 "data/maps/Route110/scripts.pory"

# 422 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 423 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 424 "data/maps/Route110/scripts.pory"
	return
# 425 "data/maps/Route110/scripts.pory"

# 426 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 427 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 428 "data/maps/Route110/scripts.pory"
	return
# 429 "data/maps/Route110/scripts.pory"

# 430 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 431 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 432 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 433 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 434 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 435 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 436 "data/maps/Route110/scripts.pory"
	end
# 437 "data/maps/Route110/scripts.pory"

# 438 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 439 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 440 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 441 "data/maps/Route110/scripts.pory"
	end
# 442 "data/maps/Route110/scripts.pory"

# 443 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 444 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 445 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 446 "data/maps/Route110/scripts.pory"
	end
# 447 "data/maps/Route110/scripts.pory"

# 448 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 449 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 450 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 451 "data/maps/Route110/scripts.pory"
	end
# 452 "data/maps/Route110/scripts.pory"

# 453 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 454 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 455 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 456 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 457 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 458 "data/maps/Route110/scripts.pory"
	end
# 459 "data/maps/Route110/scripts.pory"

# 460 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 461 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 462 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 463 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 464 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 465 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 466 "data/maps/Route110/scripts.pory"
	end
# 467 "data/maps/Route110/scripts.pory"

# 468 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 469 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 470 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 471 "data/maps/Route110/scripts.pory"
	end
# 472 "data/maps/Route110/scripts.pory"

# 473 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 474 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 475 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 476 "data/maps/Route110/scripts.pory"
	end
# 477 "data/maps/Route110/scripts.pory"

# 478 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 479 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 480 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 481 "data/maps/Route110/scripts.pory"
	end
# 482 "data/maps/Route110/scripts.pory"

# 483 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 484 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 485 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 486 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 487 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 488 "data/maps/Route110/scripts.pory"
	end
# 489 "data/maps/Route110/scripts.pory"

# 490 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 491 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 492 "data/maps/Route110/scripts.pory"
	return
# 493 "data/maps/Route110/scripts.pory"

# 494 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 495 "data/maps/Route110/scripts.pory"
	closemessage
# 496 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 497 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 498 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 499 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 500 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 501 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL
# 502 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 503 "data/maps/Route110/scripts.pory"
	delay 45
# 504 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 505 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 506 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 507 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 508 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 509 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 510 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 511 "data/maps/Route110/scripts.pory"
	releaseall
# 512 "data/maps/Route110/scripts.pory"
	end
# 513 "data/maps/Route110/scripts.pory"

# 514 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 515 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 516 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 517 "data/maps/Route110/scripts.pory"
	return
# 518 "data/maps/Route110/scripts.pory"

# 519 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 520 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 521 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 522 "data/maps/Route110/scripts.pory"
	return
# 523 "data/maps/Route110/scripts.pory"

# 524 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 525 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 526 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route110/scripts.pory"
	return
# 528 "data/maps/Route110/scripts.pory"

# 529 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 530 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 531 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 532 "data/maps/Route110/scripts.pory"
	return
# 533 "data/maps/Route110/scripts.pory"

# 534 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 535 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 536 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 537 "data/maps/Route110/scripts.pory"
	return
# 538 "data/maps/Route110/scripts.pory"

# 539 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 540 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 541 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 542 "data/maps/Route110/scripts.pory"
	return
# 543 "data/maps/Route110/scripts.pory"

# 544 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 545 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 546 "data/maps/Route110/scripts.pory"
	return
# 547 "data/maps/Route110/scripts.pory"

# 548 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 549 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 550 "data/maps/Route110/scripts.pory"
	return
# 551 "data/maps/Route110/scripts.pory"

# 552 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 553 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 554 "data/maps/Route110/scripts.pory"
	return
# 555 "data/maps/Route110/scripts.pory"

# 556 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 557 "data/maps/Route110/scripts.pory"
	walk_down
# 558 "data/maps/Route110/scripts.pory"
	walk_left
# 559 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 560 "data/maps/Route110/scripts.pory"
	step_end
# 561 "data/maps/Route110/scripts.pory"

# 562 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 563 "data/maps/Route110/scripts.pory"
	walk_down
# 564 "data/maps/Route110/scripts.pory"
	step_end
# 565 "data/maps/Route110/scripts.pory"

# 566 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 567 "data/maps/Route110/scripts.pory"
	walk_down
# 568 "data/maps/Route110/scripts.pory"
	walk_right
# 569 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 570 "data/maps/Route110/scripts.pory"
	step_end
# 571 "data/maps/Route110/scripts.pory"

# 572 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 573 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 576 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 577 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 578 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 579 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 580 "data/maps/Route110/scripts.pory"
	step_end
# 581 "data/maps/Route110/scripts.pory"

# 582 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 583 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 584 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 585 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 586 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 587 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 588 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 589 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 590 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 591 "data/maps/Route110/scripts.pory"
	step_end
# 592 "data/maps/Route110/scripts.pory"

# 593 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 594 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 595 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 596 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 597 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 598 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 599 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 600 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 601 "data/maps/Route110/scripts.pory"
	step_end
# 602 "data/maps/Route110/scripts.pory"

# 603 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 604 "data/maps/Route110/scripts.pory"
	lockall
# 605 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 606 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 607 "data/maps/Route110/scripts.pory"

# 608 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 609 "data/maps/Route110/scripts.pory"
	lockall
# 610 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 611 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 612 "data/maps/Route110/scripts.pory"

# 613 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 614 "data/maps/Route110/scripts.pory"
	lockall
# 615 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 616 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 617 "data/maps/Route110/scripts.pory"

# 618 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 619 "data/maps/Route110/scripts.pory"
	lockall
# 620 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 621 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 622 "data/maps/Route110/scripts.pory"

# 623 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 624 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 625 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 626 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 627 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 628 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 629 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 631 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 632 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 633 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 634 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 635 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 636 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 637 "data/maps/Route110/scripts.pory"
	closemessage
# 638 "data/maps/Route110/scripts.pory"
	delay 20
# 639 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 640 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 641 "data/maps/Route110/scripts.pory"
	delay 10
# 642 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 643 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 644 "data/maps/Route110/scripts.pory"
	delay 20
# 645 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 646 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 647 "data/maps/Route110/scripts.pory"
	delay 30
# 648 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 649 "data/maps/Route110/scripts.pory"
	closemessage
# 650 "data/maps/Route110/scripts.pory"
	delay 30
# 651 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 652 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 653 "data/maps/Route110/scripts.pory"
	waitfanfare
# 654 "data/maps/Route110/scripts.pory"
	closemessage
# 655 "data/maps/Route110/scripts.pory"
	delay 30
# 656 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 657 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 658 "data/maps/Route110/scripts.pory"
	closemessage
# 659 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 660 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 661 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 662 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 663 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 664 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 665 "data/maps/Route110/scripts.pory"
	releaseall
# 666 "data/maps/Route110/scripts.pory"
	end
# 667 "data/maps/Route110/scripts.pory"

# 668 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 669 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 670 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 671 "data/maps/Route110/scripts.pory"
	return
# 672 "data/maps/Route110/scripts.pory"

# 673 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 674 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 675 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 676 "data/maps/Route110/scripts.pory"
	return
# 677 "data/maps/Route110/scripts.pory"

# 678 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 679 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 680 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 681 "data/maps/Route110/scripts.pory"
	return
# 682 "data/maps/Route110/scripts.pory"

# 683 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 684 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 685 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 686 "data/maps/Route110/scripts.pory"
	return
# 687 "data/maps/Route110/scripts.pory"

# 688 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 689 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 690 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 691 "data/maps/Route110/scripts.pory"
	return
# 692 "data/maps/Route110/scripts.pory"

# 693 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 694 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 695 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 696 "data/maps/Route110/scripts.pory"
	return
# 697 "data/maps/Route110/scripts.pory"

# 698 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 699 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 700 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 701 "data/maps/Route110/scripts.pory"
	return
# 702 "data/maps/Route110/scripts.pory"

# 703 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 704 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 705 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 706 "data/maps/Route110/scripts.pory"
	return
# 707 "data/maps/Route110/scripts.pory"

# 708 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 709 "data/maps/Route110/scripts.pory"
	walk_down
# 710 "data/maps/Route110/scripts.pory"
	walk_down
# 711 "data/maps/Route110/scripts.pory"
	walk_down
# 712 "data/maps/Route110/scripts.pory"
	step_end
# 713 "data/maps/Route110/scripts.pory"

# 714 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 715 "data/maps/Route110/scripts.pory"
	walk_down
# 716 "data/maps/Route110/scripts.pory"
	walk_left
# 717 "data/maps/Route110/scripts.pory"
	walk_left
# 718 "data/maps/Route110/scripts.pory"
	walk_down
# 719 "data/maps/Route110/scripts.pory"
	step_end
# 720 "data/maps/Route110/scripts.pory"

# 721 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 722 "data/maps/Route110/scripts.pory"
	walk_down
# 723 "data/maps/Route110/scripts.pory"
	walk_left
# 724 "data/maps/Route110/scripts.pory"
	walk_down
# 725 "data/maps/Route110/scripts.pory"
	step_end
# 726 "data/maps/Route110/scripts.pory"

# 727 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 728 "data/maps/Route110/scripts.pory"
	walk_down
# 729 "data/maps/Route110/scripts.pory"
	walk_down
# 730 "data/maps/Route110/scripts.pory"
	step_end
# 731 "data/maps/Route110/scripts.pory"

# 732 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 733 "data/maps/Route110/scripts.pory"
	walk_down
# 734 "data/maps/Route110/scripts.pory"
	walk_right
# 735 "data/maps/Route110/scripts.pory"
	walk_down
# 736 "data/maps/Route110/scripts.pory"
	step_end
# 737 "data/maps/Route110/scripts.pory"

# 738 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 739 "data/maps/Route110/scripts.pory"
	walk_up
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_right
# 742 "data/maps/Route110/scripts.pory"
	walk_up
# 743 "data/maps/Route110/scripts.pory"
	walk_up
# 744 "data/maps/Route110/scripts.pory"
	walk_up
# 745 "data/maps/Route110/scripts.pory"
	step_end
# 746 "data/maps/Route110/scripts.pory"

# 747 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	walk_up
# 751 "data/maps/Route110/scripts.pory"
	walk_up
# 752 "data/maps/Route110/scripts.pory"
	walk_up
# 753 "data/maps/Route110/scripts.pory"
	step_end
# 754 "data/maps/Route110/scripts.pory"

# 755 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	walk_up
# 759 "data/maps/Route110/scripts.pory"
	walk_up
# 760 "data/maps/Route110/scripts.pory"
	walk_up
# 761 "data/maps/Route110/scripts.pory"
	step_end
# 762 "data/maps/Route110/scripts.pory"

# 763 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 764 "data/maps/Route110/scripts.pory"
	walk_up
# 765 "data/maps/Route110/scripts.pory"
	walk_up
# 766 "data/maps/Route110/scripts.pory"
	walk_up
# 767 "data/maps/Route110/scripts.pory"
	walk_up
# 768 "data/maps/Route110/scripts.pory"
	walk_up
# 769 "data/maps/Route110/scripts.pory"
	step_end
# 770 "data/maps/Route110/scripts.pory"

# 771 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 772 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 773 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 774 "data/maps/Route110/scripts.pory"

# 775 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 776 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 777 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 778 "data/maps/Route110/scripts.pory"

# 779 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 780 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 781 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 784 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 785 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 786 "data/maps/Route110/scripts.pory"

# 787 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 788 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 789 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 790 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 791 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 792 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 793 "data/maps/Route110/scripts.pory"

# 794 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 795 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 796 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 797 "data/maps/Route110/scripts.pory"

# 798 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 799 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 800 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 801 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 802 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 803 "data/maps/Route110/scripts.pory"

# 804 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 805 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 806 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 807 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 808 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 809 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 810 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 811 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 812 "data/maps/Route110/scripts.pory"

# 813 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 814 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 815 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 816 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 817 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 818 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 819 "data/maps/Route110/scripts.pory"

# 820 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 821 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 822 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 823 "data/maps/Route110/scripts.pory"

# 824 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 825 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 827 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 828 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 829 "data/maps/Route110/scripts.pory"

# 830 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 831 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 832 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 833 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 834 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 835 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 836 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 837 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 838 "data/maps/Route110/scripts.pory"

# 839 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 840 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 841 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 842 "data/maps/Route110/scripts.pory"

# 843 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 844 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 845 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 846 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 847 "data/maps/Route110/scripts.pory"

# 848 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 849 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 850 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 851 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 852 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 853 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 854 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 855 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 856 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 858 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 859 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 860 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 861 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 862 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 863 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 864 "data/maps/Route110/scripts.pory"

# 865 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 866 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 867 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 868 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 869 "data/maps/Route110/scripts.pory"

# 870 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 871 "data/maps/Route110/scripts.pory"
	.string "Behind me is the Trick House.\p"
# 872 "data/maps/Route110/scripts.pory"
	.string "The trainers inside don't fight\n"
# 873 "data/maps/Route110/scripts.pory"
	.string "fair…\p"
# 874 "data/maps/Route110/scripts.pory"
	.string "But if you can defeat them, you'll\n"
# 875 "data/maps/Route110/scripts.pory"
	.string "recieve some great rewards!$"
# 876 "data/maps/Route110/scripts.pory"

# 877 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 878 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 879 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 880 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 881 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 882 "data/maps/Route110/scripts.pory"

# 883 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 884 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 885 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 886 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 887 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?$"
# 888 "data/maps/Route110/scripts.pory"

# 889 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 890 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 891 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 892 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 893 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 894 "data/maps/Route110/scripts.pory"

# 895 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 896 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 897 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 898 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 899 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 900 "data/maps/Route110/scripts.pory"

# 901 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 902 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 903 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 904 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 905 "data/maps/Route110/scripts.pory"

# 906 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 907 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 908 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 909 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 910 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 911 "data/maps/Route110/scripts.pory"

# 912 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 913 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 914 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 915 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 916 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 917 "data/maps/Route110/scripts.pory"

# 918 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 919 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 920 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 921 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 922 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 923 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 924 "data/maps/Route110/scripts.pory"

# 925 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 926 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 927 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 928 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 929 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 930 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 931 "data/maps/Route110/scripts.pory"

# 932 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 933 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 934 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 935 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 936 "data/maps/Route110/scripts.pory"

# 937 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 938 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 939 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 940 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 941 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 942 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 943 "data/maps/Route110/scripts.pory"

# 944 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 945 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 946 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 947 "data/maps/Route110/scripts.pory"

# 948 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 949 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 950 "data/maps/Route110/scripts.pory"

# 951 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 952 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 953 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 954 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 955 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 956 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 957 "data/maps/Route110/scripts.pory"

# 958 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 959 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 960 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 961 "data/maps/Route110/scripts.pory"

# 962 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 963 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 964 "data/maps/Route110/scripts.pory"

# 965 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 966 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 967 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 968 "data/maps/Route110/scripts.pory"

# 969 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 970 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 971 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 972 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 973 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 974 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 975 "data/maps/Route110/scripts.pory"

# 976 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 977 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 978 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 979 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 980 "data/maps/Route110/scripts.pory"

# 981 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 982 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 983 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 984 "data/maps/Route110/scripts.pory"

# 985 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 986 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 987 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 988 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 989 "data/maps/Route110/scripts.pory"

# 990 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 991 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 992 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 993 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 994 "data/maps/Route110/scripts.pory"

# 995 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 996 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 997 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 998 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 999 "data/maps/Route110/scripts.pory"

# 1000 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 1001 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 1002 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 1003 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 1004 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your Pokénav\n"
# 1005 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1006 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1007 "data/maps/Route110/scripts.pory"
	.string "my Pokénav as well.\p"
# 1008 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1009 "data/maps/Route110/scripts.pory"
	.string "I can rate your Pokédex anytime.\p"
# 1010 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1011 "data/maps/Route110/scripts.pory"

# 1012 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1013 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1014 "data/maps/Route110/scripts.pory"
	.string "in the Pokénav.$"
# 1015 "data/maps/Route110/scripts.pory"

# 1016 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1017 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1018 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1019 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1020 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1021 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

Route110_EventScript_OldWoman_Text_0:
# 5 "data/maps/Route110/scripts.pory"
	.string "Behind me is the Trick House.\p"
	.string "The trainers inside don't fight\n"
	.string "fair…\p"
	.string "But if you can defeat them, you'll\n"
	.string "recieve some great rewards!\p"
	.string "I believe you should wait a\n"
	.string "little while before entering.$"

Route110_EventScript_OldWoman_Text_1:
# 13 "data/maps/Route110/scripts.pory"
	.string "Behind me is the Trick House.\p"
	.string "The trainers inside don't fight\n"
	.string "fair…\p"
	.string "But if you can defeat them, you'll\n"
	.string "recieve some great rewards!$"
