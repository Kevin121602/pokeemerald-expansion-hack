# 1 "data/maps/LightningMeadow/scripts.pory"

# 2 "data/maps/LightningMeadow/scripts.pory"
@ NOTE: Route 104's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/LightningMeadow/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/LightningMeadow/scripts.pory"
.set LOCALID_RIVAL, 34
# 5 "data/maps/LightningMeadow/scripts.pory"

# 6 "data/maps/LightningMeadow/scripts.pory"
LightningMeadow_MapScripts::
# 7 "data/maps/LightningMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 8 "data/maps/LightningMeadow/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 9 "data/maps/LightningMeadow/scripts.pory"
	.byte 0
# 10 "data/maps/LightningMeadow/scripts.pory"

# 11 "data/maps/LightningMeadow/scripts.pory"
Route104_OnFrame:
# 12 "data/maps/LightningMeadow/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 13 "data/maps/LightningMeadow/scripts.pory"
	.2byte 0
# 14 "data/maps/LightningMeadow/scripts.pory"

# 15 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_StartSailToDewford::
# 16 "data/maps/LightningMeadow/scripts.pory"
	lockall
# 17 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 18 "data/maps/LightningMeadow/scripts.pory"
	end
# 19 "data/maps/LightningMeadow/scripts.pory"

# 20 "data/maps/LightningMeadow/scripts.pory"
Route104_OnTransition:
# 21 "data/maps/LightningMeadow/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 22 "data/maps/LightningMeadow/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 23 "data/maps/LightningMeadow/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 24 "data/maps/LightningMeadow/scripts.pory"
	end
# 25 "data/maps/LightningMeadow/scripts.pory"

# 26 "data/maps/LightningMeadow/scripts.pory"
FortreeCity_Gym_EventScript_Flint::
# 27 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 28 "data/maps/LightningMeadow/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/LightningMeadow/scripts.pory"
	end
# 30 "data/maps/LightningMeadow/scripts.pory"

# 31 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist::
# 32 "data/maps/LightningMeadow/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 33 "data/maps/LightningMeadow/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 34 "data/maps/LightningMeadow/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 35 "data/maps/LightningMeadow/scripts.pory"
	return
# 36 "data/maps/LightningMeadow/scripts.pory"

# 37 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist::
# 38 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 39 "data/maps/LightningMeadow/scripts.pory"
	return
# 40 "data/maps/LightningMeadow/scripts.pory"

# 41 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TrySetRivalPos::
# 42 "data/maps/LightningMeadow/scripts.pory"
	goto_if_ge VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_DontSetRivalPos
# 43 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 44 "data/maps/LightningMeadow/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 45 "data/maps/LightningMeadow/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 46 "data/maps/LightningMeadow/scripts.pory"
	return
# 47 "data/maps/LightningMeadow/scripts.pory"

# 48 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_DontSetRivalPos::
# 49 "data/maps/LightningMeadow/scripts.pory"
	return
# 50 "data/maps/LightningMeadow/scripts.pory"

# 51 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Rival::
# 52 "data/maps/LightningMeadow/scripts.pory"
	lockall
# 53 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_0x8008, 1
# 54 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 55 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 56 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 57 "data/maps/LightningMeadow/scripts.pory"

# 58 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RivalTrigger::
# 59 "data/maps/LightningMeadow/scripts.pory"
	lockall
# 60 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 61 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 8
# 62 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 63 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 64 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 65 "data/maps/LightningMeadow/scripts.pory"
	delay 10
# 66 "data/maps/LightningMeadow/scripts.pory"
	addobject LOCALID_RIVAL
# 67 "data/maps/LightningMeadow/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 68 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 69 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 70 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 71 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 72 "data/maps/LightningMeadow/scripts.pory"
	delay 20
# 73 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_0x8008, 0
# 74 "data/maps/LightningMeadow/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 75 "data/maps/LightningMeadow/scripts.pory"
	playse SE_PIN
# 76 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 77 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 78 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 79 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 80 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 81 "data/maps/LightningMeadow/scripts.pory"

# 82 "data/maps/LightningMeadow/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 83 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_PlayRivalMusic::
# 84 "data/maps/LightningMeadow/scripts.pory"
	checkplayergender
# 85 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_PlayMayMusic
# 86 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_PlayBrendanMusic
# 87 "data/maps/LightningMeadow/scripts.pory"
	return
# 88 "data/maps/LightningMeadow/scripts.pory"

# 89 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_PlayMayMusic::
# 90 "data/maps/LightningMeadow/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 91 "data/maps/LightningMeadow/scripts.pory"
	return
# 92 "data/maps/LightningMeadow/scripts.pory"

# 93 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_PlayBrendanMusic::
# 94 "data/maps/LightningMeadow/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 95 "data/maps/LightningMeadow/scripts.pory"
	return
# 96 "data/maps/LightningMeadow/scripts.pory"

# 97 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RivalEncounter::
# 98 "data/maps/LightningMeadow/scripts.pory"
	checkplayergender
# 99 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route104_EventScript_MayEncounter
# 100 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route104_EventScript_BrendanEncounter
# 101 "data/maps/LightningMeadow/scripts.pory"
	end
# 102 "data/maps/LightningMeadow/scripts.pory"

# 103 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_MayEncounter::
# 104 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 105 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 106 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 107 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 108 "data/maps/LightningMeadow/scripts.pory"
	closemessage
# 109 "data/maps/LightningMeadow/scripts.pory"
	delay 30
# 110 "data/maps/LightningMeadow/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 111 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 112 "data/maps/LightningMeadow/scripts.pory"
	waitfanfare
# 113 "data/maps/LightningMeadow/scripts.pory"
	closemessage
# 114 "data/maps/LightningMeadow/scripts.pory"
	delay 30
# 115 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 116 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 117 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 118 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 119 "data/maps/LightningMeadow/scripts.pory"
	closemessage
# 120 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 121 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 122 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 123 "data/maps/LightningMeadow/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 124 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 125 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 126 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 127 "data/maps/LightningMeadow/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 128 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 129 "data/maps/LightningMeadow/scripts.pory"
	end
# 130 "data/maps/LightningMeadow/scripts.pory"

# 131 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_RivalWalkSlowLeft:
# 132 "data/maps/LightningMeadow/scripts.pory"
	walk_slow_left
# 133 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 134 "data/maps/LightningMeadow/scripts.pory"

# 135 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_RivalApproachPlayer:
# 136 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 137 "data/maps/LightningMeadow/scripts.pory"
	face_right
# 138 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 139 "data/maps/LightningMeadow/scripts.pory"

# 140 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_PlayerFaceRival:
# 141 "data/maps/LightningMeadow/scripts.pory"
	delay_4
# 142 "data/maps/LightningMeadow/scripts.pory"
	walk_in_place_faster_left
# 143 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 144 "data/maps/LightningMeadow/scripts.pory"

# 145 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_MayAskToBattle::
# 146 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 147 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleMay
# 148 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 149 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 150 "data/maps/LightningMeadow/scripts.pory"
	end
# 151 "data/maps/LightningMeadow/scripts.pory"

# 152 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleMay::
# 153 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 154 "data/maps/LightningMeadow/scripts.pory"
	switch VAR_STARTER_MON
# 155 "data/maps/LightningMeadow/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 156 "data/maps/LightningMeadow/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 157 "data/maps/LightningMeadow/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 158 "data/maps/LightningMeadow/scripts.pory"
	end
# 159 "data/maps/LightningMeadow/scripts.pory"

# 160 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_MayDefeated::
# 161 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 162 "data/maps/LightningMeadow/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 163 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 164 "data/maps/LightningMeadow/scripts.pory"
	end
# 165 "data/maps/LightningMeadow/scripts.pory"

# 166 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RestoreMusic::
# 167 "data/maps/LightningMeadow/scripts.pory"
	savebgm MUS_DUMMY
# 168 "data/maps/LightningMeadow/scripts.pory"
	fadedefaultbgm
# 169 "data/maps/LightningMeadow/scripts.pory"
	return
# 170 "data/maps/LightningMeadow/scripts.pory"

# 171 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleMayTreecko::
# 172 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 173 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 174 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 175 "data/maps/LightningMeadow/scripts.pory"
	end
# 176 "data/maps/LightningMeadow/scripts.pory"

# 177 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleMayTorchic::
# 178 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 179 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 180 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 181 "data/maps/LightningMeadow/scripts.pory"
	end
# 182 "data/maps/LightningMeadow/scripts.pory"

# 183 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleMayMudkip::
# 184 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 185 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 186 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 187 "data/maps/LightningMeadow/scripts.pory"
	end
# 188 "data/maps/LightningMeadow/scripts.pory"

# 189 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BrendanEncounter::
# 190 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 191 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 192 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 193 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 194 "data/maps/LightningMeadow/scripts.pory"
	closemessage
# 195 "data/maps/LightningMeadow/scripts.pory"
	delay 30
# 196 "data/maps/LightningMeadow/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 197 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 198 "data/maps/LightningMeadow/scripts.pory"
	waitfanfare
# 199 "data/maps/LightningMeadow/scripts.pory"
	closemessage
# 200 "data/maps/LightningMeadow/scripts.pory"
	delay 30
# 201 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 202 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 203 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 204 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 205 "data/maps/LightningMeadow/scripts.pory"
	closemessage
# 206 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 207 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 208 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 209 "data/maps/LightningMeadow/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 210 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 211 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 212 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 213 "data/maps/LightningMeadow/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 214 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 215 "data/maps/LightningMeadow/scripts.pory"
	end
# 216 "data/maps/LightningMeadow/scripts.pory"

# 217 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BrendanAskToBattle::
# 218 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 219 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route104_EventScript_BattleBrendan
# 220 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 221 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 222 "data/maps/LightningMeadow/scripts.pory"
	end
# 223 "data/maps/LightningMeadow/scripts.pory"

# 224 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleBrendan::
# 225 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 226 "data/maps/LightningMeadow/scripts.pory"
	switch VAR_STARTER_MON
# 227 "data/maps/LightningMeadow/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 228 "data/maps/LightningMeadow/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 229 "data/maps/LightningMeadow/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 230 "data/maps/LightningMeadow/scripts.pory"
	end
# 231 "data/maps/LightningMeadow/scripts.pory"

# 232 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BrendanDefeated::
# 233 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 234 "data/maps/LightningMeadow/scripts.pory"
	call_if_eq VAR_0x8008, 0, Route104_EventScript_RestoreMusic
# 235 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 236 "data/maps/LightningMeadow/scripts.pory"
	end
# 237 "data/maps/LightningMeadow/scripts.pory"

# 238 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleBrendanTreecko::
# 239 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 240 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 241 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 242 "data/maps/LightningMeadow/scripts.pory"
	end
# 243 "data/maps/LightningMeadow/scripts.pory"

# 244 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleBrendanTorchic::
# 245 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 246 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 247 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 248 "data/maps/LightningMeadow/scripts.pory"
	end
# 249 "data/maps/LightningMeadow/scripts.pory"

# 250 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BattleBrendanMudkip::
# 251 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 252 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 253 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 254 "data/maps/LightningMeadow/scripts.pory"
	end
# 255 "data/maps/LightningMeadow/scripts.pory"

# 256 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_PlayerBackUp:
# 257 "data/maps/LightningMeadow/scripts.pory"
	lock_facing_direction
# 258 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 259 "data/maps/LightningMeadow/scripts.pory"
	unlock_facing_direction
# 260 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 261 "data/maps/LightningMeadow/scripts.pory"

# 262 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_RivalExitBrineysCottage:
# 263 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 264 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 265 "data/maps/LightningMeadow/scripts.pory"

# 266 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_ExpertF::
# 267 "data/maps/LightningMeadow/scripts.pory"
	lock
# 268 "data/maps/LightningMeadow/scripts.pory"
	faceplayer
# 269 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 270 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 271 "data/maps/LightningMeadow/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 272 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 273 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 274 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 275 "data/maps/LightningMeadow/scripts.pory"
	release
# 276 "data/maps/LightningMeadow/scripts.pory"
	end
# 277 "data/maps/LightningMeadow/scripts.pory"

# 278 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_ReceivedBerry::
# 279 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 280 "data/maps/LightningMeadow/scripts.pory"
	release
# 281 "data/maps/LightningMeadow/scripts.pory"
	end
# 282 "data/maps/LightningMeadow/scripts.pory"

# 283 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_WhiteHerbFlorist::
# 284 "data/maps/LightningMeadow/scripts.pory"
	lock
# 285 "data/maps/LightningMeadow/scripts.pory"
	faceplayer
# 286 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 287 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 288 "data/maps/LightningMeadow/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 289 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 290 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 291 "data/maps/LightningMeadow/scripts.pory"
	release
# 292 "data/maps/LightningMeadow/scripts.pory"
	end
# 293 "data/maps/LightningMeadow/scripts.pory"

# 294 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb::
# 295 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 296 "data/maps/LightningMeadow/scripts.pory"
	release
# 297 "data/maps/LightningMeadow/scripts.pory"
	end
# 298 "data/maps/LightningMeadow/scripts.pory"

# 299 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Girl1::
# 300 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 301 "data/maps/LightningMeadow/scripts.pory"
	end
# 302 "data/maps/LightningMeadow/scripts.pory"

# 303 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BugCatcher::
# 304 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 305 "data/maps/LightningMeadow/scripts.pory"
	end
# 306 "data/maps/LightningMeadow/scripts.pory"

# 307 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_BrineysCottageSign::
# 308 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 309 "data/maps/LightningMeadow/scripts.pory"
	end
# 310 "data/maps/LightningMeadow/scripts.pory"

# 311 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RouteSignPetalburg::
# 312 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 313 "data/maps/LightningMeadow/scripts.pory"
	end
# 314 "data/maps/LightningMeadow/scripts.pory"

# 315 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RouteSignRustboro::
# 316 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 317 "data/maps/LightningMeadow/scripts.pory"
	end
# 318 "data/maps/LightningMeadow/scripts.pory"

# 319 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_FlowerShopSign::
# 320 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 321 "data/maps/LightningMeadow/scripts.pory"
	end
# 322 "data/maps/LightningMeadow/scripts.pory"

# 323 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles::
# 324 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 325 "data/maps/LightningMeadow/scripts.pory"
	end
# 326 "data/maps/LightningMeadow/scripts.pory"

# 327 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Boy1::
# 328 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 329 "data/maps/LightningMeadow/scripts.pory"
	end
# 330 "data/maps/LightningMeadow/scripts.pory"

# 331 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Woman::
# 332 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 333 "data/maps/LightningMeadow/scripts.pory"
	end
# 334 "data/maps/LightningMeadow/scripts.pory"

# 335 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Boy2::
# 336 "data/maps/LightningMeadow/scripts.pory"
	lock
# 337 "data/maps/LightningMeadow/scripts.pory"
	faceplayer
# 338 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_BULLET_SEED, Route104_EventScript_ReceivedBulletSeed
# 339 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 340 "data/maps/LightningMeadow/scripts.pory"
	giveitem ITEM_TM_BULLET_SEED
# 341 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 342 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULLET_SEED
# 343 "data/maps/LightningMeadow/scripts.pory"
	release
# 344 "data/maps/LightningMeadow/scripts.pory"
	end
# 345 "data/maps/LightningMeadow/scripts.pory"

# 346 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_ReceivedBulletSeed::
# 347 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 348 "data/maps/LightningMeadow/scripts.pory"
	release
# 349 "data/maps/LightningMeadow/scripts.pory"
	end
# 350 "data/maps/LightningMeadow/scripts.pory"

# 351 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Girl2::
# 352 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 353 "data/maps/LightningMeadow/scripts.pory"
	end
# 354 "data/maps/LightningMeadow/scripts.pory"

# 355 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_SailToDewford::
# 356 "data/maps/LightningMeadow/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R104, MAP_LIGHTNING_MEADOW, 0
# 357 "data/maps/LightningMeadow/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_LIGHTNING_MEADOW, 0
# 358 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 359 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 360 "data/maps/LightningMeadow/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 361 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 362 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 363 "data/maps/LightningMeadow/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LIGHTNING_MEADOW
# 364 "data/maps/LightningMeadow/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 365 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 366 "data/maps/LightningMeadow/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 367 "data/maps/LightningMeadow/scripts.pory"
	end
# 368 "data/maps/LightningMeadow/scripts.pory"

# 369 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_SailToDewfordNoCall::
# 370 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 371 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 372 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 373 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 374 "data/maps/LightningMeadow/scripts.pory"

# 375 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls::
# 376 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 377 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 378 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 379 "data/maps/LightningMeadow/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 380 "data/maps/LightningMeadow/scripts.pory"
	waitmessage
# 381 "data/maps/LightningMeadow/scripts.pory"
	delay 30
# 382 "data/maps/LightningMeadow/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 383 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 384 "data/maps/LightningMeadow/scripts.pory"
	waitfanfare
# 385 "data/maps/LightningMeadow/scripts.pory"
	closemessage
# 386 "data/maps/LightningMeadow/scripts.pory"
	delay 30
# 387 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 388 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 389 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_LIGHTNING_MEADOW
# 390 "data/maps/LightningMeadow/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_LIGHTNING_MEADOW
# 391 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 392 "data/maps/LightningMeadow/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 393 "data/maps/LightningMeadow/scripts.pory"

# 394 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_ArriveInDewford::
# 395 "data/maps/LightningMeadow/scripts.pory"
	delay 50
# 396 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 397 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 398 "data/maps/LightningMeadow/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 399 "data/maps/LightningMeadow/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 400 "data/maps/LightningMeadow/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 401 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 402 "data/maps/LightningMeadow/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 403 "data/maps/LightningMeadow/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 404 "data/maps/LightningMeadow/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 405 "data/maps/LightningMeadow/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 406 "data/maps/LightningMeadow/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 407 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 408 "data/maps/LightningMeadow/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 409 "data/maps/LightningMeadow/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 410 "data/maps/LightningMeadow/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 411 "data/maps/LightningMeadow/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 412 "data/maps/LightningMeadow/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_LIGHTNING_MEADOW
# 413 "data/maps/LightningMeadow/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 414 "data/maps/LightningMeadow/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_LIGHTNING_MEADOW
# 415 "data/maps/LightningMeadow/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 416 "data/maps/LightningMeadow/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 417 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 418 "data/maps/LightningMeadow/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 419 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 420 "data/maps/LightningMeadow/scripts.pory"
	end
# 421 "data/maps/LightningMeadow/scripts.pory"

# 422 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_DeliverLetterReminder::
# 423 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 424 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 425 "data/maps/LightningMeadow/scripts.pory"
	end
# 426 "data/maps/LightningMeadow/scripts.pory"

# 427 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_LandedInDewford::
# 428 "data/maps/LightningMeadow/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 429 "data/maps/LightningMeadow/scripts.pory"
	releaseall
# 430 "data/maps/LightningMeadow/scripts.pory"
	end
# 431 "data/maps/LightningMeadow/scripts.pory"

# 432 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls:
# 433 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 434 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 435 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 436 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 437 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 438 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 439 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 440 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 441 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 442 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 443 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 444 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 445 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 446 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 447 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 448 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 449 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 450 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 451 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 452 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 453 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 454 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 455 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 456 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 457 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 458 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 459 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 460 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 461 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 462 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 463 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 464 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 465 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 466 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 467 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 468 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 469 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 470 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 471 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 472 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 473 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 474 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 475 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 476 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 477 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 478 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 479 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 480 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 481 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 482 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 483 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 484 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 485 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 486 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 487 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 488 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 489 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 490 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 491 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 492 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 493 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 494 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 495 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 496 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 497 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 498 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 499 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 500 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 501 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 502 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 503 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 504 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 505 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 506 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 507 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 508 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 509 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 510 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 511 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 512 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 513 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 514 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 515 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 516 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 517 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 518 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 519 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 520 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 521 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 522 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 523 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 524 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 525 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 526 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 527 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 528 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 529 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 530 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 531 "data/maps/LightningMeadow/scripts.pory"

# 532 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls:
# 533 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 534 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 535 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 536 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 537 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 538 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 539 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 540 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 541 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 542 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 543 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 544 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 545 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 546 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 547 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 548 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 549 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 550 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 551 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 552 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 553 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 554 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 555 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 556 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 557 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 558 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 559 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 560 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 561 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 562 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 563 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 564 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 565 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 566 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 567 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 568 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 569 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 570 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 571 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 572 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 573 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 574 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 575 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 576 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 577 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 578 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 579 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 580 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 581 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 582 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 583 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 584 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 585 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 586 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 587 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 588 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 589 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 590 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 591 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 592 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 593 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 594 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 595 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 596 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 597 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 598 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 599 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 600 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 601 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 602 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 603 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 604 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 605 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 606 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 607 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 608 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 609 "data/maps/LightningMeadow/scripts.pory"
	walk_right
# 610 "data/maps/LightningMeadow/scripts.pory"
	walk_right
# 611 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 612 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 613 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 614 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 615 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 616 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 617 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 618 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 619 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 620 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 621 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 622 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 623 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 624 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 625 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 626 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 627 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 628 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 629 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 630 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 631 "data/maps/LightningMeadow/scripts.pory"

# 632 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_SailToDewford:
# 633 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 634 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 635 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 636 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 637 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 638 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 639 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 640 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 641 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 642 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 643 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 644 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 645 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 646 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 647 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 648 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 649 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 650 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 651 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 652 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 653 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 654 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 655 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 656 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 657 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 658 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 659 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 660 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 661 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 662 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 663 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 664 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 665 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 666 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 667 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 668 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 669 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 670 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 671 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 672 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 673 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 674 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 675 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 676 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 677 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 678 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 679 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 680 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 681 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 682 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 683 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 684 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 685 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 686 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 687 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 688 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 689 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 690 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 691 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 692 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 693 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 694 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 695 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 696 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 697 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 698 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 699 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 700 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 701 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 702 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 703 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 704 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 705 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 706 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 707 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 708 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 709 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 710 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 711 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 712 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 713 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 714 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 715 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 716 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 717 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 718 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 719 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 720 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 721 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 722 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 723 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 724 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 725 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 726 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 727 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 728 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 729 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 730 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 731 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 732 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 733 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 734 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 735 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 736 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 737 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 738 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 739 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 740 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 741 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 742 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 743 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 744 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 745 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 746 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 747 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 748 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 749 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 750 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 751 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 752 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 753 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_down
# 754 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 755 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 756 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 757 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 758 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 759 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 760 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 761 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 762 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 763 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 764 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 765 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 766 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 767 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 768 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 769 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 770 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 771 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 772 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 773 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 774 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 775 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 776 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 777 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 778 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 779 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 780 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 781 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 782 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 783 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 784 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 785 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 786 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 787 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 788 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 789 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 790 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 791 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 792 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 793 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 794 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 795 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 796 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 797 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 798 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 799 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 800 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 801 "data/maps/LightningMeadow/scripts.pory"
	walk_faster_right
# 802 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 803 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 804 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 805 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_right
# 806 "data/maps/LightningMeadow/scripts.pory"
	walk_right
# 807 "data/maps/LightningMeadow/scripts.pory"
	walk_right
# 808 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 809 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 810 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 811 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 812 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 813 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 814 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 815 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 816 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 817 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 818 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 819 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 820 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 821 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 822 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 823 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 824 "data/maps/LightningMeadow/scripts.pory"
	walk_fast_down
# 825 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 826 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 827 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 828 "data/maps/LightningMeadow/scripts.pory"

# 829 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_PlayerBoardBoat:
# 830 "data/maps/LightningMeadow/scripts.pory"
	walk_left
# 831 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 832 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 833 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 834 "data/maps/LightningMeadow/scripts.pory"

# 835 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_PlayerExitBoat:
# 836 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 837 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 838 "data/maps/LightningMeadow/scripts.pory"

# 839 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_PlayerMoveForBriney:
# 840 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 841 "data/maps/LightningMeadow/scripts.pory"
	walk_left
# 842 "data/maps/LightningMeadow/scripts.pory"
	walk_in_place_faster_right
# 843 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 844 "data/maps/LightningMeadow/scripts.pory"

# 845 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_BrineyBoardBoat:
# 846 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 847 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 848 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 849 "data/maps/LightningMeadow/scripts.pory"

# 850 "data/maps/LightningMeadow/scripts.pory"
Route104_Movement_BrineyExitBoat:
# 851 "data/maps/LightningMeadow/scripts.pory"
	walk_down
# 852 "data/maps/LightningMeadow/scripts.pory"
	walk_in_place_faster_left
# 853 "data/maps/LightningMeadow/scripts.pory"
	step_end
# 854 "data/maps/LightningMeadow/scripts.pory"

# 855 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Ivan::
# 856 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 857 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 858 "data/maps/LightningMeadow/scripts.pory"
	end
# 859 "data/maps/LightningMeadow/scripts.pory"

# 860 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Haley::
# 861 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 862 "data/maps/LightningMeadow/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 863 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchHaley
# 864 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 865 "data/maps/LightningMeadow/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 866 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterHaley
# 867 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 868 "data/maps/LightningMeadow/scripts.pory"
	release
# 869 "data/maps/LightningMeadow/scripts.pory"
	end
# 870 "data/maps/LightningMeadow/scripts.pory"

# 871 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle::
# 872 "data/maps/LightningMeadow/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 873 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 874 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 875 "data/maps/LightningMeadow/scripts.pory"
	release
# 876 "data/maps/LightningMeadow/scripts.pory"
	end
# 877 "data/maps/LightningMeadow/scripts.pory"

# 878 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle::
# 879 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 880 "data/maps/LightningMeadow/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 881 "data/maps/LightningMeadow/scripts.pory"
	release
# 882 "data/maps/LightningMeadow/scripts.pory"
	end
# 883 "data/maps/LightningMeadow/scripts.pory"

# 884 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TryRegisterHaley::
# 885 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 886 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 887 "data/maps/LightningMeadow/scripts.pory"
	release
# 888 "data/maps/LightningMeadow/scripts.pory"
	end
# 889 "data/maps/LightningMeadow/scripts.pory"

# 890 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RegisterHaley::
# 891 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 892 "data/maps/LightningMeadow/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 893 "data/maps/LightningMeadow/scripts.pory"
	release
# 894 "data/maps/LightningMeadow/scripts.pory"
	end
# 895 "data/maps/LightningMeadow/scripts.pory"

# 896 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RematchHaley::
# 897 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 898 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 899 "data/maps/LightningMeadow/scripts.pory"
	end
# 900 "data/maps/LightningMeadow/scripts.pory"

# 901 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Winston::
# 902 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 903 "data/maps/LightningMeadow/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 904 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchWinston
# 905 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 906 "data/maps/LightningMeadow/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 907 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterWinston
# 908 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 909 "data/maps/LightningMeadow/scripts.pory"
	release
# 910 "data/maps/LightningMeadow/scripts.pory"
	end
# 911 "data/maps/LightningMeadow/scripts.pory"

# 912 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle::
# 913 "data/maps/LightningMeadow/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 914 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 915 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 916 "data/maps/LightningMeadow/scripts.pory"
	release
# 917 "data/maps/LightningMeadow/scripts.pory"
	end
# 918 "data/maps/LightningMeadow/scripts.pory"

# 919 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle::
# 920 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 921 "data/maps/LightningMeadow/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 922 "data/maps/LightningMeadow/scripts.pory"
	release
# 923 "data/maps/LightningMeadow/scripts.pory"
	end
# 924 "data/maps/LightningMeadow/scripts.pory"

# 925 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TryRegisterWinston::
# 926 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 927 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 928 "data/maps/LightningMeadow/scripts.pory"
	release
# 929 "data/maps/LightningMeadow/scripts.pory"
	end
# 930 "data/maps/LightningMeadow/scripts.pory"

# 931 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RegisterWinston::
# 932 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 933 "data/maps/LightningMeadow/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 934 "data/maps/LightningMeadow/scripts.pory"
	release
# 935 "data/maps/LightningMeadow/scripts.pory"
	end
# 936 "data/maps/LightningMeadow/scripts.pory"

# 937 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RematchWinston::
# 938 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 939 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 940 "data/maps/LightningMeadow/scripts.pory"
	end
# 941 "data/maps/LightningMeadow/scripts.pory"

# 942 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Cindy::
# 943 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 944 "data/maps/LightningMeadow/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 945 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route104_EventScript_RematchCindy
# 946 "data/maps/LightningMeadow/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 947 "data/maps/LightningMeadow/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 948 "data/maps/LightningMeadow/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route104_EventScript_TryRegisterCindy
# 949 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 950 "data/maps/LightningMeadow/scripts.pory"
	release
# 951 "data/maps/LightningMeadow/scripts.pory"
	end
# 952 "data/maps/LightningMeadow/scripts.pory"

# 953 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle::
# 954 "data/maps/LightningMeadow/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 955 "data/maps/LightningMeadow/scripts.pory"
	waitmovement 0
# 956 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 957 "data/maps/LightningMeadow/scripts.pory"
	release
# 958 "data/maps/LightningMeadow/scripts.pory"
	end
# 959 "data/maps/LightningMeadow/scripts.pory"

# 960 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle::
# 961 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 962 "data/maps/LightningMeadow/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 963 "data/maps/LightningMeadow/scripts.pory"
	release
# 964 "data/maps/LightningMeadow/scripts.pory"
	end
# 965 "data/maps/LightningMeadow/scripts.pory"

# 966 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_TryRegisterCindy::
# 967 "data/maps/LightningMeadow/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 968 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 969 "data/maps/LightningMeadow/scripts.pory"
	release
# 970 "data/maps/LightningMeadow/scripts.pory"
	end
# 971 "data/maps/LightningMeadow/scripts.pory"

# 972 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RegisterCindy::
# 973 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 974 "data/maps/LightningMeadow/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 975 "data/maps/LightningMeadow/scripts.pory"
	release
# 976 "data/maps/LightningMeadow/scripts.pory"
	end
# 977 "data/maps/LightningMeadow/scripts.pory"

# 978 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_RematchCindy::
# 979 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 980 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 981 "data/maps/LightningMeadow/scripts.pory"
	end
# 982 "data/maps/LightningMeadow/scripts.pory"

# 983 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Gina::
# 984 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 985 "data/maps/LightningMeadow/scripts.pory"
	special GetPlayerBigGuyGirlString
# 986 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 987 "data/maps/LightningMeadow/scripts.pory"
	release
# 988 "data/maps/LightningMeadow/scripts.pory"
	end
# 989 "data/maps/LightningMeadow/scripts.pory"

# 990 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Mia::
# 991 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 992 "data/maps/LightningMeadow/scripts.pory"
	special GetPlayerBigGuyGirlString
# 993 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 994 "data/maps/LightningMeadow/scripts.pory"
	release
# 995 "data/maps/LightningMeadow/scripts.pory"
	end
# 996 "data/maps/LightningMeadow/scripts.pory"

# 997 "data/maps/LightningMeadow/scripts.pory"
Route104_EventScript_Darian::
# 998 "data/maps/LightningMeadow/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 999 "data/maps/LightningMeadow/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1000 "data/maps/LightningMeadow/scripts.pory"
	end
# 1001 "data/maps/LightningMeadow/scripts.pory"

# 1002 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage:
# 1003 "data/maps/LightningMeadow/scripts.pory"
	.string "That seaside cottage is where\n"
# 1004 "data/maps/LightningMeadow/scripts.pory"
	.string "MR. BRINEY lives.\p"
# 1005 "data/maps/LightningMeadow/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1006 "data/maps/LightningMeadow/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1007 "data/maps/LightningMeadow/scripts.pory"

# 1008 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea:
# 1009 "data/maps/LightningMeadow/scripts.pory"
	.string "The sea, huh?\p"
# 1010 "data/maps/LightningMeadow/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1011 "data/maps/LightningMeadow/scripts.pory"
	.string "of the sea?$"
# 1012 "data/maps/LightningMeadow/scripts.pory"

# 1013 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon:
# 1014 "data/maps/LightningMeadow/scripts.pory"
	.string "If you're going to throw a POKé BALL,\n"
# 1015 "data/maps/LightningMeadow/scripts.pory"
	.string "weaken the wild POKéMON first.\p"
# 1016 "data/maps/LightningMeadow/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1017 "data/maps/LightningMeadow/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1018 "data/maps/LightningMeadow/scripts.pory"

# 1019 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon:
# 1020 "data/maps/LightningMeadow/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1021 "data/maps/LightningMeadow/scripts.pory"
	.string "someone else's POKéMON.\p"
# 1022 "data/maps/LightningMeadow/scripts.pory"
	.string "You should throw POKé BALLS only at\n"
# 1023 "data/maps/LightningMeadow/scripts.pory"
	.string "wild POKéMON.$"
# 1024 "data/maps/LightningMeadow/scripts.pory"

# 1025 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_ImNotATrainer:
# 1026 "data/maps/LightningMeadow/scripts.pory"
	.string "Oh, no, I'm not a TRAINER.\p"
# 1027 "data/maps/LightningMeadow/scripts.pory"
	.string "But that's right, if TRAINERS lock eyes,\n"
# 1028 "data/maps/LightningMeadow/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1029 "data/maps/LightningMeadow/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1030 "data/maps/LightningMeadow/scripts.pory"
	.string "of their sight.$"
# 1031 "data/maps/LightningMeadow/scripts.pory"

# 1032 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis:
# 1033 "data/maps/LightningMeadow/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1034 "data/maps/LightningMeadow/scripts.pory"
	.string "then spitting them out fast!\p"
# 1035 "data/maps/LightningMeadow/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1036 "data/maps/LightningMeadow/scripts.pory"
	.string "Use it on a POKéMON, and it will learn\n"
# 1037 "data/maps/LightningMeadow/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1038 "data/maps/LightningMeadow/scripts.pory"

# 1039 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_TMsAreOneTimeUse:
# 1040 "data/maps/LightningMeadow/scripts.pory"
	.string "A word of advice!\p"
# 1041 "data/maps/LightningMeadow/scripts.pory"
	.string "A TM, TECHNICAL MACHINE, is good only\n"
# 1042 "data/maps/LightningMeadow/scripts.pory"
	.string "for one-time use.\p"
# 1043 "data/maps/LightningMeadow/scripts.pory"
	.string "Once you use it, it's gone.\n"
# 1044 "data/maps/LightningMeadow/scripts.pory"
	.string "Think twice before using it!$"
# 1045 "data/maps/LightningMeadow/scripts.pory"

# 1046 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_DontNeedThisTakeIt:
# 1047 "data/maps/LightningMeadow/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1048 "data/maps/LightningMeadow/scripts.pory"
	.string "saplings recently.\p"
# 1049 "data/maps/LightningMeadow/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1050 "data/maps/LightningMeadow/scripts.pory"
	.string "shopping.\p"
# 1051 "data/maps/LightningMeadow/scripts.pory"
	.string "I don't need this WHITE HERB anymore.\n"
# 1052 "data/maps/LightningMeadow/scripts.pory"
	.string "Would you take it, please?$"
# 1053 "data/maps/LightningMeadow/scripts.pory"

# 1054 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_FlowerShopSellingSaplings:
# 1055 "data/maps/LightningMeadow/scripts.pory"
	.string "This FLOWER SHOP started selling\n"
# 1056 "data/maps/LightningMeadow/scripts.pory"
	.string "saplings recently.\p"
# 1057 "data/maps/LightningMeadow/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1058 "data/maps/LightningMeadow/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1059 "data/maps/LightningMeadow/scripts.pory"

# 1060 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MrBrineysCottage:
# 1061 "data/maps/LightningMeadow/scripts.pory"
	.string "MR. BRINEY'S COTTAGE$"
# 1062 "data/maps/LightningMeadow/scripts.pory"

# 1063 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_RouteSignPetalburg:
# 1064 "data/maps/LightningMeadow/scripts.pory"
	.string "ROUTE 1O4\n"
# 1065 "data/maps/LightningMeadow/scripts.pory"
	.string "{RIGHT_ARROW} PETALBURG CITY$"
# 1066 "data/maps/LightningMeadow/scripts.pory"

# 1067 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_RouteSignRustboro:
# 1068 "data/maps/LightningMeadow/scripts.pory"
	.string "ROUTE 1O4\n"
# 1069 "data/maps/LightningMeadow/scripts.pory"
	.string "{UP_ARROW} RUSTBORO CITY$"
# 1070 "data/maps/LightningMeadow/scripts.pory"

# 1071 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_PrettyPetalFlowShop:
# 1072 "data/maps/LightningMeadow/scripts.pory"
	.string "PRETTY PETAL FLOWER SHOP$"
# 1073 "data/maps/LightningMeadow/scripts.pory"

# 1074 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles:
# 1075 "data/maps/LightningMeadow/scripts.pory"
	.string "TRAINER TIPS\p"
# 1076 "data/maps/LightningMeadow/scripts.pory"
	.string "In the HOENN region there are pairs\n"
# 1077 "data/maps/LightningMeadow/scripts.pory"
	.string "of TRAINERS who challenge others\l"
# 1078 "data/maps/LightningMeadow/scripts.pory"
	.string "for 2-on-2 POKéMON battles called\l"
# 1079 "data/maps/LightningMeadow/scripts.pory"
	.string "DOUBLE BATTLES.\p"
# 1080 "data/maps/LightningMeadow/scripts.pory"
	.string "In a DOUBLE BATTLE, the TRAINER must\n"
# 1081 "data/maps/LightningMeadow/scripts.pory"
	.string "send out two POKéMON, the one at the\l"
# 1082 "data/maps/LightningMeadow/scripts.pory"
	.string "left of the list and the top one.\l"
# 1083 "data/maps/LightningMeadow/scripts.pory"
	.string "Watch how POKéMON are lined up.$"
# 1084 "data/maps/LightningMeadow/scripts.pory"

# 1085 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayWeShouldRegister:
# 1086 "data/maps/LightningMeadow/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\p"
# 1087 "data/maps/LightningMeadow/scripts.pory"
	.string "DEVON upgraded your POKéNAV with\n"
# 1088 "data/maps/LightningMeadow/scripts.pory"
	.string "the MATCH CALL system, huh?\p"
# 1089 "data/maps/LightningMeadow/scripts.pory"
	.string "We should register each other so we\n"
# 1090 "data/maps/LightningMeadow/scripts.pory"
	.string "can get in contact anytime.$"
# 1091 "data/maps/LightningMeadow/scripts.pory"

# 1092 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_RegisteredMay:
# 1093 "data/maps/LightningMeadow/scripts.pory"
	.string "{PLAYER} registered MAY\n"
# 1094 "data/maps/LightningMeadow/scripts.pory"
	.string "in the POKéNAV.$"
# 1095 "data/maps/LightningMeadow/scripts.pory"

# 1096 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayHowsYourPokedex:
# 1097 "data/maps/LightningMeadow/scripts.pory"
	.string "MAY: Oh, by the way, {PLAYER}{KUN},\n"
# 1098 "data/maps/LightningMeadow/scripts.pory"
	.string "how's your POKéDEX coming along?$"
# 1099 "data/maps/LightningMeadow/scripts.pory"

# 1100 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle:
# 1101 "data/maps/LightningMeadow/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1102 "data/maps/LightningMeadow/scripts.pory"
	.string "So…\l"
# 1103 "data/maps/LightningMeadow/scripts.pory"
	.string "How about a little battle?$"
# 1104 "data/maps/LightningMeadow/scripts.pory"

# 1105 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayHaventRaisedPokemon:
# 1106 "data/maps/LightningMeadow/scripts.pory"
	.string "MAY: Oh, what's the matter?\p"
# 1107 "data/maps/LightningMeadow/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1108 "data/maps/LightningMeadow/scripts.pory"
	.string "POKéMON very much?\p"
# 1109 "data/maps/LightningMeadow/scripts.pory"
	.string "That's not very good for a TRAINER!$"
# 1110 "data/maps/LightningMeadow/scripts.pory"

# 1111 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayLetsBattle:
# 1112 "data/maps/LightningMeadow/scripts.pory"
	.string "MAY: So, what do you think?\n"
# 1113 "data/maps/LightningMeadow/scripts.pory"
	.string "How about a little battle here?$"
# 1114 "data/maps/LightningMeadow/scripts.pory"

# 1115 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayIntro:
# 1116 "data/maps/LightningMeadow/scripts.pory"
	.string "MAY: You just became a TRAINER,\n"
# 1117 "data/maps/LightningMeadow/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1118 "data/maps/LightningMeadow/scripts.pory"

# 1119 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayDefeat:
# 1120 "data/maps/LightningMeadow/scripts.pory"
	.string "Yikes!\n"
# 1121 "data/maps/LightningMeadow/scripts.pory"
	.string "You're better than I expected!$"
# 1122 "data/maps/LightningMeadow/scripts.pory"

# 1123 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_MayPostBattle:
# 1124 "data/maps/LightningMeadow/scripts.pory"
	.string "MAY: I can tell you've gotten pretty\n"
# 1125 "data/maps/LightningMeadow/scripts.pory"
	.string "good with the way you handle POKéMON.\p"
# 1126 "data/maps/LightningMeadow/scripts.pory"
	.string "But instead of only making them\n"
# 1127 "data/maps/LightningMeadow/scripts.pory"
	.string "battle, you should be like MR. BRINEY.\p"
# 1128 "data/maps/LightningMeadow/scripts.pory"
	.string "It's important to become friends with\n"
# 1129 "data/maps/LightningMeadow/scripts.pory"
	.string "POKéMON, too.$"
# 1130 "data/maps/LightningMeadow/scripts.pory"

# 1131 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanWeShouldRegister:
# 1132 "data/maps/LightningMeadow/scripts.pory"
	.string "BRENDAN: Oh, hey, {PLAYER}!\p"
# 1133 "data/maps/LightningMeadow/scripts.pory"
	.string "Cool, you had DEVON install the MATCH\n"
# 1134 "data/maps/LightningMeadow/scripts.pory"
	.string "CALL system on your POKéNAV!\p"
# 1135 "data/maps/LightningMeadow/scripts.pory"
	.string "Let's register each other in our\n"
# 1136 "data/maps/LightningMeadow/scripts.pory"
	.string "POKéNAVS so we can keep in touch.$"
# 1137 "data/maps/LightningMeadow/scripts.pory"

# 1138 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_RegisteredBrendan:
# 1139 "data/maps/LightningMeadow/scripts.pory"
	.string "{PLAYER} registered BRENDAN\n"
# 1140 "data/maps/LightningMeadow/scripts.pory"
	.string "in the POKéNAV.$"
# 1141 "data/maps/LightningMeadow/scripts.pory"

# 1142 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanHowsYourPokedex:
# 1143 "data/maps/LightningMeadow/scripts.pory"
	.string "BRENDAN: {PLAYER}, how's your POKéDEX?\n"
# 1144 "data/maps/LightningMeadow/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1145 "data/maps/LightningMeadow/scripts.pory"

# 1146 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle:
# 1147 "data/maps/LightningMeadow/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1148 "data/maps/LightningMeadow/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1149 "data/maps/LightningMeadow/scripts.pory"
	.string "a battle?$"
# 1150 "data/maps/LightningMeadow/scripts.pory"

# 1151 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanNoConfidence:
# 1152 "data/maps/LightningMeadow/scripts.pory"
	.string "BRENDAN: What's the matter? Don't have\n"
# 1153 "data/maps/LightningMeadow/scripts.pory"
	.string "any confidence in your POKéMON?$"
# 1154 "data/maps/LightningMeadow/scripts.pory"

# 1155 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanLetsBattle:
# 1156 "data/maps/LightningMeadow/scripts.pory"
	.string "BRENDAN: What's up?\n"
# 1157 "data/maps/LightningMeadow/scripts.pory"
	.string "Want to have a battle with me?$"
# 1158 "data/maps/LightningMeadow/scripts.pory"

# 1159 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanIntro:
# 1160 "data/maps/LightningMeadow/scripts.pory"
	.string "BRENDAN: I know you just became\n"
# 1161 "data/maps/LightningMeadow/scripts.pory"
	.string "a TRAINER, but I won't go easy!$"
# 1162 "data/maps/LightningMeadow/scripts.pory"

# 1163 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanDefeat:
# 1164 "data/maps/LightningMeadow/scripts.pory"
	.string "Hmm…\n"
# 1165 "data/maps/LightningMeadow/scripts.pory"
	.string "You're pretty good.$"
# 1166 "data/maps/LightningMeadow/scripts.pory"

# 1167 "data/maps/LightningMeadow/scripts.pory"
Route104_Text_BrendanPostBattle:
# 1168 "data/maps/LightningMeadow/scripts.pory"
	.string "BRENDAN: You've gotten pretty decent\n"
# 1169 "data/maps/LightningMeadow/scripts.pory"
	.string "at handling POKéMON.\p"
# 1170 "data/maps/LightningMeadow/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1171 "data/maps/LightningMeadow/scripts.pory"
	.string "making POKéMON battle.\p"
# 1172 "data/maps/LightningMeadow/scripts.pory"
	.string "Like MR. BRINEY, it's important to\n"
# 1173 "data/maps/LightningMeadow/scripts.pory"
	.string "become friends with your POKéMON.$"
