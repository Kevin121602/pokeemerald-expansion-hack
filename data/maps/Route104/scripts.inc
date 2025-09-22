# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/Route104/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/Route104/scripts.pory"
.set LOCALID_RIVAL, 34
# 5 "data/maps/Route104/scripts.pory"

# 6 "data/maps/Route104/scripts.pory"
Route104_MapScripts::
# 7 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 8 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 9 "data/maps/Route104/scripts.pory"
	.byte 0
# 10 "data/maps/Route104/scripts.pory"

# 11 "data/maps/Route104/scripts.pory"
Route104_OnFrame:
# 12 "data/maps/Route104/scripts.pory"
	.2byte 0
# 13 "data/maps/Route104/scripts.pory"

# 14 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 15 "data/maps/Route104/scripts.pory"
	lockall
# 16 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 17 "data/maps/Route104/scripts.pory"
	end
# 18 "data/maps/Route104/scripts.pory"

# 19 "data/maps/Route104/scripts.pory"
Route104_OnTransition:
# 20 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 21 "data/maps/Route104/scripts.pory"
	end
# 22 "data/maps/Route104/scripts.pory"

# 23 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 24 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 25 "data/maps/Route104/scripts.pory"
	return
# 26 "data/maps/Route104/scripts.pory"

# 27 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 28 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 29 "data/maps/Route104/scripts.pory"
	return
# 30 "data/maps/Route104/scripts.pory"

# 31 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 32 "data/maps/Route104/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 33 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 34 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 35 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 36 "data/maps/Route104/scripts.pory"
	return
# 37 "data/maps/Route104/scripts.pory"

# 38 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 39 "data/maps/Route104/scripts.pory"
	return
# 40 "data/maps/Route104/scripts.pory"

# 41 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival::
# 42 "data/maps/Route104/scripts.pory"
	lockall
# 43 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 44 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 45 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 46 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 47 "data/maps/Route104/scripts.pory"

# 48 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger::
# 49 "data/maps/Route104/scripts.pory"
	lockall
# 50 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 51 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 52 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 53 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 54 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route104/scripts.pory"
	delay 10
# 56 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 57 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 58 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 59 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 61 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 62 "data/maps/Route104/scripts.pory"
	delay 20
# 63 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 64 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 65 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 66 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 67 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 69 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 70 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 71 "data/maps/Route104/scripts.pory"

# 72 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 73 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 74 "data/maps/Route104/scripts.pory"
	checkplayergender
# 75 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 76 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 77 "data/maps/Route104/scripts.pory"
	return
# 78 "data/maps/Route104/scripts.pory"

# 79 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 80 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 81 "data/maps/Route104/scripts.pory"
	return
# 82 "data/maps/Route104/scripts.pory"

# 83 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 84 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 85 "data/maps/Route104/scripts.pory"
	return
# 86 "data/maps/Route104/scripts.pory"

# 87 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter::
# 88 "data/maps/Route104/scripts.pory"
	checkplayergender
# 89 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 90 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 91 "data/maps/Route104/scripts.pory"
	end
# 92 "data/maps/Route104/scripts.pory"

# 93 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter::
# 94 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 95 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 96 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 97 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 98 "data/maps/Route104/scripts.pory"
	closemessage
# 99 "data/maps/Route104/scripts.pory"
	delay 30
# 100 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 101 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 102 "data/maps/Route104/scripts.pory"
	waitfanfare
# 103 "data/maps/Route104/scripts.pory"
	closemessage
# 104 "data/maps/Route104/scripts.pory"
	delay 30
# 105 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 106 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 107 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 108 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 109 "data/maps/Route104/scripts.pory"
	closemessage
# 110 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 112 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 114 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 115 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 116 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 117 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 118 "data/maps/Route104/scripts.pory"
	releaseall
# 119 "data/maps/Route104/scripts.pory"
	end
# 120 "data/maps/Route104/scripts.pory"

# 121 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 122 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 123 "data/maps/Route104/scripts.pory"
	step_end
# 124 "data/maps/Route104/scripts.pory"

# 125 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 126 "data/maps/Route104/scripts.pory"
	walk_down
# 127 "data/maps/Route104/scripts.pory"
	face_right
# 128 "data/maps/Route104/scripts.pory"
	step_end
# 129 "data/maps/Route104/scripts.pory"

# 130 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 131 "data/maps/Route104/scripts.pory"
	delay_4
# 132 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 133 "data/maps/Route104/scripts.pory"
	step_end
# 134 "data/maps/Route104/scripts.pory"

# 135 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 136 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 137 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 138 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 139 "data/maps/Route104/scripts.pory"
	releaseall
# 140 "data/maps/Route104/scripts.pory"
	end
# 141 "data/maps/Route104/scripts.pory"

# 142 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay::
# 143 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 144 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 145 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 146 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 147 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 148 "data/maps/Route104/scripts.pory"
	end
# 149 "data/maps/Route104/scripts.pory"

# 150 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated::
# 151 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 152 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 153 "data/maps/Route104/scripts.pory"
	releaseall
# 154 "data/maps/Route104/scripts.pory"
	end
# 155 "data/maps/Route104/scripts.pory"

# 156 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic::
# 157 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 158 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 159 "data/maps/Route104/scripts.pory"
	return
# 160 "data/maps/Route104/scripts.pory"

# 161 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 162 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 163 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 164 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 165 "data/maps/Route104/scripts.pory"
	end
# 166 "data/maps/Route104/scripts.pory"

# 167 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 168 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 169 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 170 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 171 "data/maps/Route104/scripts.pory"
	end
# 172 "data/maps/Route104/scripts.pory"

# 173 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 174 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 175 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 176 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 177 "data/maps/Route104/scripts.pory"
	end
# 178 "data/maps/Route104/scripts.pory"

# 179 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 180 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 181 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 182 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 183 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 184 "data/maps/Route104/scripts.pory"
	closemessage
# 185 "data/maps/Route104/scripts.pory"
	delay 30
# 186 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 187 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 188 "data/maps/Route104/scripts.pory"
	waitfanfare
# 189 "data/maps/Route104/scripts.pory"
	closemessage
# 190 "data/maps/Route104/scripts.pory"
	delay 30
# 191 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 192 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 193 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 194 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 195 "data/maps/Route104/scripts.pory"
	closemessage
# 196 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 198 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 200 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 201 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 202 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 203 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 204 "data/maps/Route104/scripts.pory"
	releaseall
# 205 "data/maps/Route104/scripts.pory"
	end
# 206 "data/maps/Route104/scripts.pory"

# 207 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 208 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 209 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 210 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 211 "data/maps/Route104/scripts.pory"
	releaseall
# 212 "data/maps/Route104/scripts.pory"
	end
# 213 "data/maps/Route104/scripts.pory"

# 214 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan::
# 215 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 216 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 217 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 218 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 219 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 220 "data/maps/Route104/scripts.pory"
	end
# 221 "data/maps/Route104/scripts.pory"

# 222 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 223 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 224 "data/maps/Route104/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 225 "data/maps/Route104/scripts.pory"
	releaseall
# 226 "data/maps/Route104/scripts.pory"
	end
# 227 "data/maps/Route104/scripts.pory"

# 228 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 229 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 230 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 231 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 232 "data/maps/Route104/scripts.pory"
	end
# 233 "data/maps/Route104/scripts.pory"

# 234 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 235 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 236 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 237 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 238 "data/maps/Route104/scripts.pory"
	end
# 239 "data/maps/Route104/scripts.pory"

# 240 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 241 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 242 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 243 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 244 "data/maps/Route104/scripts.pory"
	end
# 245 "data/maps/Route104/scripts.pory"

# 246 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp:
# 247 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 248 "data/maps/Route104/scripts.pory"
	walk_down
# 249 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 250 "data/maps/Route104/scripts.pory"
	step_end
# 251 "data/maps/Route104/scripts.pory"

# 252 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 253 "data/maps/Route104/scripts.pory"
	walk_down
# 254 "data/maps/Route104/scripts.pory"
	step_end
# 255 "data/maps/Route104/scripts.pory"

# 256 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF::
# 257 "data/maps/Route104/scripts.pory"
	lock
# 258 "data/maps/Route104/scripts.pory"
	faceplayer
# 259 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 260 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 261 "data/maps/Route104/scripts.pory"
	giveitem ITEM_LUM_BERRY
# 262 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 263 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 264 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 265 "data/maps/Route104/scripts.pory"
	release
# 266 "data/maps/Route104/scripts.pory"
	end
# 267 "data/maps/Route104/scripts.pory"

# 268 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 269 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 270 "data/maps/Route104/scripts.pory"
	release
# 271 "data/maps/Route104/scripts.pory"
	end
# 272 "data/maps/Route104/scripts.pory"

# 273 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 274 "data/maps/Route104/scripts.pory"
	lock
# 275 "data/maps/Route104/scripts.pory"
	faceplayer
# 276 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 277 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 278 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 279 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 280 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 281 "data/maps/Route104/scripts.pory"
	release
# 282 "data/maps/Route104/scripts.pory"
	end
# 283 "data/maps/Route104/scripts.pory"

# 284 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 285 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 286 "data/maps/Route104/scripts.pory"
	release
# 287 "data/maps/Route104/scripts.pory"
	end
# 288 "data/maps/Route104/scripts.pory"

# 289 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1::
# 290 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 291 "data/maps/Route104/scripts.pory"
	end
# 292 "data/maps/Route104/scripts.pory"

# 293 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher::
# 294 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 295 "data/maps/Route104/scripts.pory"
	end
# 296 "data/maps/Route104/scripts.pory"

# 297 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 298 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 299 "data/maps/Route104/scripts.pory"
	end
# 300 "data/maps/Route104/scripts.pory"

# 301 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 302 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 303 "data/maps/Route104/scripts.pory"
	end
# 304 "data/maps/Route104/scripts.pory"

# 305 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 306 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 307 "data/maps/Route104/scripts.pory"
	end
# 308 "data/maps/Route104/scripts.pory"

# 309 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 310 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 311 "data/maps/Route104/scripts.pory"
	end
# 312 "data/maps/Route104/scripts.pory"

# 313 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 314 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 315 "data/maps/Route104/scripts.pory"
	end
# 316 "data/maps/Route104/scripts.pory"

# 317 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1::
# 318 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 319 "data/maps/Route104/scripts.pory"
	end
# 320 "data/maps/Route104/scripts.pory"

# 321 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman::
# 322 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 323 "data/maps/Route104/scripts.pory"
	end
# 324 "data/maps/Route104/scripts.pory"

# 325 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2::
# 326 "data/maps/Route104/scripts.pory"
	lock
# 327 "data/maps/Route104/scripts.pory"
	faceplayer
# 328 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 329 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 330 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 331 "data/maps/Route104/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 332 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 333 "data/maps/Route104/scripts.pory"
	release
# 334 "data/maps/Route104/scripts.pory"
	end
# 335 "data/maps/Route104/scripts.pory"

# 336 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 337 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 338 "data/maps/Route104/scripts.pory"
	release
# 339 "data/maps/Route104/scripts.pory"
	end
# 340 "data/maps/Route104/scripts.pory"

# 341 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2::
# 342 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 343 "data/maps/Route104/scripts.pory"
	end
# 344 "data/maps/Route104/scripts.pory"

# 345 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford::
# 346 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 347 "data/maps/Route104/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 348 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 349 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 350 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 351 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 352 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 354 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 355 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 356 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 357 "data/maps/Route104/scripts.pory"
	end
# 358 "data/maps/Route104/scripts.pory"

# 359 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 360 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 361 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 362 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 363 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 364 "data/maps/Route104/scripts.pory"

# 365 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 366 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 367 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 368 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 369 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 370 "data/maps/Route104/scripts.pory"
	waitmessage
# 371 "data/maps/Route104/scripts.pory"
	delay 30
# 372 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 373 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 374 "data/maps/Route104/scripts.pory"
	waitfanfare
# 375 "data/maps/Route104/scripts.pory"
	closemessage
# 376 "data/maps/Route104/scripts.pory"
	delay 30
# 377 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 378 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 379 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 380 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 381 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 382 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 383 "data/maps/Route104/scripts.pory"

# 384 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 385 "data/maps/Route104/scripts.pory"
	delay 50
# 386 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 387 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 388 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 389 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 390 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 391 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 393 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 394 "data/maps/Route104/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 395 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 396 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 397 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 399 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 400 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 401 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 402 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 403 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 404 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 405 "data/maps/Route104/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 406 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 407 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 408 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 409 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 410 "data/maps/Route104/scripts.pory"
	end
# 411 "data/maps/Route104/scripts.pory"

# 412 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 413 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 414 "data/maps/Route104/scripts.pory"
	releaseall
# 415 "data/maps/Route104/scripts.pory"
	end
# 416 "data/maps/Route104/scripts.pory"

# 417 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford::
# 418 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 419 "data/maps/Route104/scripts.pory"
	releaseall
# 420 "data/maps/Route104/scripts.pory"
	end
# 421 "data/maps/Route104/scripts.pory"

# 422 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 423 "data/maps/Route104/scripts.pory"
	walk_down
# 424 "data/maps/Route104/scripts.pory"
	walk_down
# 425 "data/maps/Route104/scripts.pory"
	walk_down
# 426 "data/maps/Route104/scripts.pory"
	walk_down
# 427 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 428 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 429 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 430 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 431 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 432 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 433 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 434 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 435 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 436 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 437 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 438 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 439 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 440 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 441 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 442 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 443 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 444 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 445 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 447 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 449 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 450 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 451 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 452 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 453 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 454 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 455 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 456 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 457 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 458 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 459 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 460 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 461 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 462 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 463 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 464 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 465 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 466 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 467 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 468 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 469 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 470 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 471 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 472 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 473 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 474 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 475 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 476 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 477 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 478 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 479 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 480 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 481 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 482 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 483 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 484 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 485 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 486 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 487 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 488 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 489 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 490 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 491 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 492 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 493 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 494 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 495 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 496 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 497 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 498 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 499 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 500 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 501 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 502 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 503 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 504 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 505 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 506 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 507 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 508 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 509 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 510 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 511 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 512 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 513 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 514 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 515 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 516 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 517 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 518 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 519 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 520 "data/maps/Route104/scripts.pory"
	step_end
# 521 "data/maps/Route104/scripts.pory"

# 522 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 523 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 524 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 525 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 526 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 527 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 528 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 529 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 530 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 531 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 532 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 533 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 534 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 535 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 536 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 537 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 538 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 539 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 540 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 541 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 542 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 543 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 544 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 545 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 546 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 547 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 548 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 549 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 550 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 551 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 552 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 553 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 554 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 555 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 556 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 557 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 558 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 559 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 560 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 561 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 562 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 563 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 564 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 565 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 566 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 567 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 568 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 569 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 570 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 571 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 572 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 573 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 574 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 575 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 576 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 577 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 578 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 579 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 580 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 581 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 582 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 583 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 584 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 585 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 586 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 587 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 588 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 589 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 590 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 591 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 592 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 593 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 594 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 595 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 596 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 597 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 598 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 599 "data/maps/Route104/scripts.pory"
	walk_right
# 600 "data/maps/Route104/scripts.pory"
	walk_right
# 601 "data/maps/Route104/scripts.pory"
	walk_down
# 602 "data/maps/Route104/scripts.pory"
	walk_down
# 603 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 604 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 605 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 606 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 607 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 608 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 609 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 610 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 611 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 612 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 613 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 614 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 615 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 616 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 617 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 618 "data/maps/Route104/scripts.pory"
	walk_down
# 619 "data/maps/Route104/scripts.pory"
	walk_down
# 620 "data/maps/Route104/scripts.pory"
	step_end
# 621 "data/maps/Route104/scripts.pory"

# 622 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford:
# 623 "data/maps/Route104/scripts.pory"
	walk_down
# 624 "data/maps/Route104/scripts.pory"
	walk_down
# 625 "data/maps/Route104/scripts.pory"
	walk_down
# 626 "data/maps/Route104/scripts.pory"
	walk_down
# 627 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 628 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 629 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 630 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 631 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 632 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 633 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 634 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 635 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 636 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 637 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 638 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 639 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 640 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 641 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 642 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 643 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 644 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 645 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 646 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 648 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 649 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 650 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 651 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 652 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 653 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 654 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 655 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 656 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 657 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 658 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 659 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 660 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 661 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 662 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 663 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 664 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 665 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 666 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 667 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 668 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 669 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 670 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 671 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 672 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 673 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 674 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 675 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 676 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 677 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 678 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 679 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 680 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 681 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 682 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 683 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 684 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 685 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 686 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 687 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 688 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 689 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 690 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 691 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 692 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 693 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 694 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 695 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 696 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 697 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 698 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 699 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 700 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 701 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 702 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 703 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 704 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 705 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 706 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 707 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 708 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 709 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 710 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 711 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 712 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 713 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 714 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 715 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 716 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 717 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 718 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 719 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 720 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 721 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 722 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 723 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 724 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 725 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 726 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 727 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 728 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 729 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 730 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 731 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 732 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 733 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 734 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 735 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 736 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 737 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 738 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 739 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 740 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 741 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 742 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 743 "data/maps/Route104/scripts.pory"
	walk_faster_down
# 744 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 745 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 746 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 747 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 748 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 749 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 750 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 751 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 752 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 753 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 754 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 755 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 756 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 757 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 758 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 759 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 760 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 761 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 762 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 763 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 764 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 765 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 766 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 767 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 768 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 769 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 770 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 771 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 772 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 773 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 774 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 775 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 776 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 777 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 778 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 779 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 780 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 781 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 782 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 783 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 784 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 785 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 786 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 787 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 788 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 789 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 790 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 791 "data/maps/Route104/scripts.pory"
	walk_faster_right
# 792 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 793 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 794 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 795 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 796 "data/maps/Route104/scripts.pory"
	walk_right
# 797 "data/maps/Route104/scripts.pory"
	walk_right
# 798 "data/maps/Route104/scripts.pory"
	walk_down
# 799 "data/maps/Route104/scripts.pory"
	walk_down
# 800 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 801 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 802 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 803 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 804 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 805 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 806 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 807 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 808 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 809 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 810 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 811 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 812 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 813 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 814 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 815 "data/maps/Route104/scripts.pory"
	walk_down
# 816 "data/maps/Route104/scripts.pory"
	walk_down
# 817 "data/maps/Route104/scripts.pory"
	step_end
# 818 "data/maps/Route104/scripts.pory"

# 819 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 820 "data/maps/Route104/scripts.pory"
	walk_left
# 821 "data/maps/Route104/scripts.pory"
	walk_down
# 822 "data/maps/Route104/scripts.pory"
	walk_down
# 823 "data/maps/Route104/scripts.pory"
	step_end
# 824 "data/maps/Route104/scripts.pory"

# 825 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 826 "data/maps/Route104/scripts.pory"
	walk_down
# 827 "data/maps/Route104/scripts.pory"
	step_end
# 828 "data/maps/Route104/scripts.pory"

# 829 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 830 "data/maps/Route104/scripts.pory"
	walk_down
# 831 "data/maps/Route104/scripts.pory"
	walk_left
# 832 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_right
# 833 "data/maps/Route104/scripts.pory"
	step_end
# 834 "data/maps/Route104/scripts.pory"

# 835 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 836 "data/maps/Route104/scripts.pory"
	walk_down
# 837 "data/maps/Route104/scripts.pory"
	walk_down
# 838 "data/maps/Route104/scripts.pory"
	step_end
# 839 "data/maps/Route104/scripts.pory"

# 840 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 841 "data/maps/Route104/scripts.pory"
	walk_down
# 842 "data/maps/Route104/scripts.pory"
	walk_in_place_faster_left
# 843 "data/maps/Route104/scripts.pory"
	step_end
# 844 "data/maps/Route104/scripts.pory"

# 845 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan::
# 846 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 847 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 848 "data/maps/Route104/scripts.pory"
	end
# 849 "data/maps/Route104/scripts.pory"

# 850 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy::
# 851 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 852 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 853 "data/maps/Route104/scripts.pory"
	end
# 854 "data/maps/Route104/scripts.pory"

# 855 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley::
# 856 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat
# 857 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_AUTOCLOSE
# 858 "data/maps/Route104/scripts.pory"
	release
# 859 "data/maps/Route104/scripts.pory"
	end
# 860 "data/maps/Route104/scripts.pory"

# 861 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 862 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 863 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 864 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 865 "data/maps/Route104/scripts.pory"
	release
# 866 "data/maps/Route104/scripts.pory"
	end
# 867 "data/maps/Route104/scripts.pory"

# 868 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 869 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 870 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 871 "data/maps/Route104/scripts.pory"
	release
# 872 "data/maps/Route104/scripts.pory"
	end
# 873 "data/maps/Route104/scripts.pory"

# 874 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 875 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 876 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 877 "data/maps/Route104/scripts.pory"
	release
# 878 "data/maps/Route104/scripts.pory"
	end
# 879 "data/maps/Route104/scripts.pory"

# 880 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley::
# 881 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 882 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 883 "data/maps/Route104/scripts.pory"
	release
# 884 "data/maps/Route104/scripts.pory"
	end
# 885 "data/maps/Route104/scripts.pory"

# 886 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley::
# 887 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 888 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 889 "data/maps/Route104/scripts.pory"
	end
# 890 "data/maps/Route104/scripts.pory"

# 891 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston::
# 892 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat
# 893 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
# 894 "data/maps/Route104/scripts.pory"
	release
# 895 "data/maps/Route104/scripts.pory"
	end
# 896 "data/maps/Route104/scripts.pory"

# 897 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 898 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 899 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 900 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 901 "data/maps/Route104/scripts.pory"
	release
# 902 "data/maps/Route104/scripts.pory"
	end
# 903 "data/maps/Route104/scripts.pory"

# 904 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 905 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 906 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 907 "data/maps/Route104/scripts.pory"
	release
# 908 "data/maps/Route104/scripts.pory"
	end
# 909 "data/maps/Route104/scripts.pory"

# 910 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 911 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 912 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 913 "data/maps/Route104/scripts.pory"
	release
# 914 "data/maps/Route104/scripts.pory"
	end
# 915 "data/maps/Route104/scripts.pory"

# 916 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston::
# 917 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 918 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 919 "data/maps/Route104/scripts.pory"
	release
# 920 "data/maps/Route104/scripts.pory"
	end
# 921 "data/maps/Route104/scripts.pory"

# 922 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston::
# 923 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 924 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 925 "data/maps/Route104/scripts.pory"
	end
# 926 "data/maps/Route104/scripts.pory"

# 927 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy::
# 928 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat
# 929 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_AUTOCLOSE
# 930 "data/maps/Route104/scripts.pory"
	release
# 931 "data/maps/Route104/scripts.pory"
	end
# 932 "data/maps/Route104/scripts.pory"

# 933 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 934 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 935 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 936 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 937 "data/maps/Route104/scripts.pory"
	release
# 938 "data/maps/Route104/scripts.pory"
	end
# 939 "data/maps/Route104/scripts.pory"

# 940 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 941 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 942 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 943 "data/maps/Route104/scripts.pory"
	release
# 944 "data/maps/Route104/scripts.pory"
	end
# 945 "data/maps/Route104/scripts.pory"

# 946 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 947 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 948 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 949 "data/maps/Route104/scripts.pory"
	release
# 950 "data/maps/Route104/scripts.pory"
	end
# 951 "data/maps/Route104/scripts.pory"

# 952 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy::
# 953 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 954 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 955 "data/maps/Route104/scripts.pory"
	release
# 956 "data/maps/Route104/scripts.pory"
	end
# 957 "data/maps/Route104/scripts.pory"

# 958 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy::
# 959 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 960 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 961 "data/maps/Route104/scripts.pory"
	end
# 962 "data/maps/Route104/scripts.pory"

# 963 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina::
# 964 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 965 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 966 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 967 "data/maps/Route104/scripts.pory"
	release
# 968 "data/maps/Route104/scripts.pory"
	end
# 969 "data/maps/Route104/scripts.pory"

# 970 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia::
# 971 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 972 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 973 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 974 "data/maps/Route104/scripts.pory"
	release
# 975 "data/maps/Route104/scripts.pory"
	end
# 976 "data/maps/Route104/scripts.pory"

# 977 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian::
# 978 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 979 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 980 "data/maps/Route104/scripts.pory"
	end
# 981 "data/maps/Route104/scripts.pory"

# 982 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 983 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 984 "data/maps/Route104/scripts.pory"
	.string "MR. BRINEY lived.\p"
# 985 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 986 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 987 "data/maps/Route104/scripts.pory"

# 988 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 989 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 990 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 991 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 992 "data/maps/Route104/scripts.pory"

# 993 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 994 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 995 "data/maps/Route104/scripts.pory"
	.string "weaken the wild Pokémon first.\p"
# 996 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 997 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 998 "data/maps/Route104/scripts.pory"

# 999 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1000 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1001 "data/maps/Route104/scripts.pory"
	.string "someone else's Pokémon.\p"
# 1002 "data/maps/Route104/scripts.pory"
	.string "You should throw Poké Balls only at\n"
# 1003 "data/maps/Route104/scripts.pory"
	.string "wild Pokémon.$"
# 1004 "data/maps/Route104/scripts.pory"

# 1005 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer:
# 1006 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1007 "data/maps/Route104/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1008 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1009 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1010 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1011 "data/maps/Route104/scripts.pory"

# 1012 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1013 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1014 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1015 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1016 "data/maps/Route104/scripts.pory"
	.string "Use it on a Pokémon, and it will learn\n"
# 1017 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1018 "data/maps/Route104/scripts.pory"

# 1019 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1020 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1021 "data/maps/Route104/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1022 "data/maps/Route104/scripts.pory"
	.string "for one-time use.\p"
# 1023 "data/maps/Route104/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1024 "data/maps/Route104/scripts.pory"
	.string "Think twice before using it!$"
# 1025 "data/maps/Route104/scripts.pory"

# 1026 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1027 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1028 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1029 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1030 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1031 "data/maps/Route104/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1032 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1033 "data/maps/Route104/scripts.pory"

# 1034 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1035 "data/maps/Route104/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1036 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1037 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1038 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1039 "data/maps/Route104/scripts.pory"

# 1040 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1041 "data/maps/Route104/scripts.pory"
	.string "FOR SALE$"
# 1042 "data/maps/Route104/scripts.pory"

# 1043 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1044 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 1045 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1046 "data/maps/Route104/scripts.pory"

# 1047 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1048 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 1049 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1050 "data/maps/Route104/scripts.pory"

# 1051 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1052 "data/maps/Route104/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1053 "data/maps/Route104/scripts.pory"

# 1054 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1055 "data/maps/Route104/scripts.pory"
	.string "TRAINER TIPS\p"
# 1056 "data/maps/Route104/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1057 "data/maps/Route104/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1058 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 Pokémon battles called\l"
# 1059 "data/maps/Route104/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1060 "data/maps/Route104/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1061 "data/maps/Route104/scripts.pory"
	.string "send out two Pokémon, the one at the\l"
# 1062 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1063 "data/maps/Route104/scripts.pory"
	.string "Watch how Pokémon are lined up.$"
# 1064 "data/maps/Route104/scripts.pory"

# 1065 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1066 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1067 "data/maps/Route104/scripts.pory"
	.string "DEVON upgraded your Pokénav with\n"
# 1068 "data/maps/Route104/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1069 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1070 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1071 "data/maps/Route104/scripts.pory"

# 1072 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay:
# 1073 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1074 "data/maps/Route104/scripts.pory"
	.string "in the Pokénav.$"
# 1075 "data/maps/Route104/scripts.pory"

# 1076 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1077 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1078 "data/maps/Route104/scripts.pory"
	.string "how's your Pokédex coming along?$"
# 1079 "data/maps/Route104/scripts.pory"

# 1080 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1081 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1082 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1083 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1084 "data/maps/Route104/scripts.pory"

# 1085 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1086 "data/maps/Route104/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1087 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1088 "data/maps/Route104/scripts.pory"
	.string "Pokémon very much?\p"
# 1089 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1090 "data/maps/Route104/scripts.pory"

# 1091 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle:
# 1092 "data/maps/Route104/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1093 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1094 "data/maps/Route104/scripts.pory"

# 1095 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro:
# 1096 "data/maps/Route104/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1097 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1098 "data/maps/Route104/scripts.pory"

# 1099 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat:
# 1100 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1101 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1102 "data/maps/Route104/scripts.pory"

# 1103 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle:
# 1104 "data/maps/Route104/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1105 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle Pokémon.\p"
# 1106 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1107 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1108 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1109 "data/maps/Route104/scripts.pory"
	.string "Pokémon, too.$"
# 1110 "data/maps/Route104/scripts.pory"

# 1111 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1112 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1113 "data/maps/Route104/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1114 "data/maps/Route104/scripts.pory"
	.string "CALL system on your Pokénav!\p"
# 1115 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1116 "data/maps/Route104/scripts.pory"
	.string "PokénavS so we can keep in touch.$"
# 1117 "data/maps/Route104/scripts.pory"

# 1118 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1119 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1120 "data/maps/Route104/scripts.pory"
	.string "in the Pokénav.$"
# 1121 "data/maps/Route104/scripts.pory"

# 1122 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1123 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your Pokédex?\n"
# 1124 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1125 "data/maps/Route104/scripts.pory"

# 1126 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1127 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1128 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1129 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1130 "data/maps/Route104/scripts.pory"

# 1131 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1132 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1133 "data/maps/Route104/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1134 "data/maps/Route104/scripts.pory"

# 1135 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1136 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1137 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1138 "data/maps/Route104/scripts.pory"

# 1139 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro:
# 1140 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1141 "data/maps/Route104/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1142 "data/maps/Route104/scripts.pory"

# 1143 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat:
# 1144 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1145 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1146 "data/maps/Route104/scripts.pory"

# 1147 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1148 "data/maps/Route104/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1149 "data/maps/Route104/scripts.pory"
	.string "at handling Pokémon.\p"
# 1150 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1151 "data/maps/Route104/scripts.pory"
	.string "making Pokémon battle.\p"
# 1152 "data/maps/Route104/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1153 "data/maps/Route104/scripts.pory"
	.string "become friends with your Pokémon.$"
