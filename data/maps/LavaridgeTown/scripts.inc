LavaridgeTown_EventScript_TrickHouseOpen::
# 4 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 5 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 6 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_TrickHouseOpen_Text_0
# 11 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 12 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 13 "data/maps/LavaridgeTown/scripts.pory"
	applymovement 11, Route110_TrickHouse_Movement_TrickMasterSpin
# 14 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 15 "data/maps/LavaridgeTown/scripts.pory"
	applymovement 11, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 16 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 17 "data/maps/LavaridgeTown/scripts.pory"
	removeobject 11
# 18 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HEAT_BADGE_TRICK_HOUSE_OPEN
# 19 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
	end


# 23 "data/maps/LavaridgeTown/scripts.pory"

# 24 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 25 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 26 "data/maps/LavaridgeTown/scripts.pory"

# 27 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 28 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 29 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 30 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 31 "data/maps/LavaridgeTown/scripts.pory"

# 32 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 33 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 34 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 35 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 36 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 37 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 38 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 39 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 40 "data/maps/LavaridgeTown/scripts.pory"
	end
# 41 "data/maps/LavaridgeTown/scripts.pory"

# 42 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 43 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 44 "data/maps/LavaridgeTown/scripts.pory"
	return
# 45 "data/maps/LavaridgeTown/scripts.pory"

# 46 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 47 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 48 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 49 "data/maps/LavaridgeTown/scripts.pory"
	return
# 50 "data/maps/LavaridgeTown/scripts.pory"

# 51 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 52 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 53 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 54 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 56 "data/maps/LavaridgeTown/scripts.pory"
	return
# 57 "data/maps/LavaridgeTown/scripts.pory"

# 58 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 59 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 60 "data/maps/LavaridgeTown/scripts.pory"
	return
# 61 "data/maps/LavaridgeTown/scripts.pory"

# 62 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 63 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 64 "data/maps/LavaridgeTown/scripts.pory"
	return
# 65 "data/maps/LavaridgeTown/scripts.pory"

# 66 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 67 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 68 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 69 "data/maps/LavaridgeTown/scripts.pory"

# 70 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 71 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 72 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 73 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 74 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 75 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 76 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 77 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 78 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 79 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 80 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 81 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 82 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 83 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 84 "data/maps/LavaridgeTown/scripts.pory"
	end
# 85 "data/maps/LavaridgeTown/scripts.pory"

# 86 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 87 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 88 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 89 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 90 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 91 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 92 "data/maps/LavaridgeTown/scripts.pory"
	end
# 93 "data/maps/LavaridgeTown/scripts.pory"

# 94 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 95 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 96 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 97 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 98 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 99 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 100 "data/maps/LavaridgeTown/scripts.pory"
	end
# 101 "data/maps/LavaridgeTown/scripts.pory"

# 102 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 103 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 104 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 105 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 106 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 107 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 108 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 109 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 110 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 111 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 112 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 113 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 114 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 115 "data/maps/LavaridgeTown/scripts.pory"
	end
# 116 "data/maps/LavaridgeTown/scripts.pory"

# 117 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 118 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 119 "data/maps/LavaridgeTown/scripts.pory"
	return
# 120 "data/maps/LavaridgeTown/scripts.pory"

# 121 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 122 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 123 "data/maps/LavaridgeTown/scripts.pory"
	return
# 124 "data/maps/LavaridgeTown/scripts.pory"

# 125 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 126 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 127 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 129 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 130 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 132 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/LavaridgeTown/scripts.pory"
	return
# 134 "data/maps/LavaridgeTown/scripts.pory"

# 135 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 136 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 137 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 138 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 139 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 140 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 141 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 142 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 143 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 144 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 145 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 146 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 147 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 149 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 150 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 151 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/LavaridgeTown/scripts.pory"
	return
# 153 "data/maps/LavaridgeTown/scripts.pory"

# 154 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 155 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 156 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/LavaridgeTown/scripts.pory"
	return
# 158 "data/maps/LavaridgeTown/scripts.pory"

# 159 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 160 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 161 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/LavaridgeTown/scripts.pory"
	return
# 163 "data/maps/LavaridgeTown/scripts.pory"

# 164 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 165 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 166 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 167 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/LavaridgeTown/scripts.pory"
	return
# 169 "data/maps/LavaridgeTown/scripts.pory"

# 170 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 171 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 172 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 173 "data/maps/LavaridgeTown/scripts.pory"
	return
# 174 "data/maps/LavaridgeTown/scripts.pory"

# 175 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 176 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 177 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 178 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 179 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 180 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 182 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 183 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 184 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 185 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 186 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 187 "data/maps/LavaridgeTown/scripts.pory"

# 188 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 189 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 190 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 191 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 192 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 193 "data/maps/LavaridgeTown/scripts.pory"

# 194 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 195 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 196 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 197 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 198 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 199 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 200 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 201 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 202 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 203 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 204 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 205 "data/maps/LavaridgeTown/scripts.pory"

# 206 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 207 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 208 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 209 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 210 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 211 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 212 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 213 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 214 "data/maps/LavaridgeTown/scripts.pory"

# 215 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 216 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 217 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 218 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 219 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 220 "data/maps/LavaridgeTown/scripts.pory"

# 221 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 222 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 223 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 224 "data/maps/LavaridgeTown/scripts.pory"

# 225 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 226 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 227 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 228 "data/maps/LavaridgeTown/scripts.pory"
	end
# 229 "data/maps/LavaridgeTown/scripts.pory"

# 230 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 231 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 232 "data/maps/LavaridgeTown/scripts.pory"
	end
# 233 "data/maps/LavaridgeTown/scripts.pory"

# 234 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 235 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 236 "data/maps/LavaridgeTown/scripts.pory"
	end
# 237 "data/maps/LavaridgeTown/scripts.pory"

# 238 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 239 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 240 "data/maps/LavaridgeTown/scripts.pory"
	end
# 241 "data/maps/LavaridgeTown/scripts.pory"

# 242 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 243 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 244 "data/maps/LavaridgeTown/scripts.pory"
	end
# 245 "data/maps/LavaridgeTown/scripts.pory"

# 246 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 247 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 248 "data/maps/LavaridgeTown/scripts.pory"
	end
# 249 "data/maps/LavaridgeTown/scripts.pory"

# 250 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 251 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 252 "data/maps/LavaridgeTown/scripts.pory"
	end
# 253 "data/maps/LavaridgeTown/scripts.pory"

# 254 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 255 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 256 "data/maps/LavaridgeTown/scripts.pory"
	end
# 257 "data/maps/LavaridgeTown/scripts.pory"

# 258 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 259 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 260 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 261 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 262 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 263 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 264 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 265 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 266 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 267 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 268 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 269 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 270 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 271 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_WYNAUT
# 272 "data/maps/LavaridgeTown/scripts.pory"
	release
# 273 "data/maps/LavaridgeTown/scripts.pory"
	end
# 274 "data/maps/LavaridgeTown/scripts.pory"

# 275 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 276 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 277 "data/maps/LavaridgeTown/scripts.pory"
	release
# 278 "data/maps/LavaridgeTown/scripts.pory"
	end
# 279 "data/maps/LavaridgeTown/scripts.pory"

# 280 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 281 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 282 "data/maps/LavaridgeTown/scripts.pory"
	release
# 283 "data/maps/LavaridgeTown/scripts.pory"
	end
# 284 "data/maps/LavaridgeTown/scripts.pory"

# 285 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 286 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 287 "data/maps/LavaridgeTown/scripts.pory"
	release
# 288 "data/maps/LavaridgeTown/scripts.pory"
	end
# 289 "data/maps/LavaridgeTown/scripts.pory"

# 290 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 291 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 292 "data/maps/LavaridgeTown/scripts.pory"
	end
# 293 "data/maps/LavaridgeTown/scripts.pory"

# 294 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 295 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 296 "data/maps/LavaridgeTown/scripts.pory"
	end
# 297 "data/maps/LavaridgeTown/scripts.pory"

# 298 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 299 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 300 "data/maps/LavaridgeTown/scripts.pory"
	end
# 301 "data/maps/LavaridgeTown/scripts.pory"

# 302 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 303 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: {PLAYER}{KUN}! Long time no see!\p"
# 304 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 305 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the Lavaridge Gym Badge.\p"
# 306 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 307 "data/maps/LavaridgeTown/scripts.pory"
	.string "good Pokémon…\l"
# 308 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 309 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 310 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 311 "data/maps/LavaridgeTown/scripts.pory"

# 312 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 313 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those Go-Goggles, you'll\n"
# 314 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting into the\l"
# 315 "data/maps/LavaridgeTown/scripts.pory"
	.string "cave near Route 111.\p"
# 316 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 317 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging Gyms…\p"
# 318 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 319 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 320 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 321 "data/maps/LavaridgeTown/scripts.pory"
	.string "the trainers on Mt. Pyre.\p"
# 322 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 323 "data/maps/LavaridgeTown/scripts.pory"

# 324 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 325 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: {PLAYER}, hey, it's been a while.\n"
# 326 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 327 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 328 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of Badges.\p"
# 329 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 330 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 331 "data/maps/LavaridgeTown/scripts.pory"

# 332 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 333 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: Keep those with you if you're\n"
# 334 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that cave near\l"
# 335 "data/maps/LavaridgeTown/scripts.pory"
	.string "Route 111.\p"
# 336 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some Pokémon that\n"
# 337 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively cave-dwellers.\l"
# 338 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 339 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 340 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering summitting Mt. Pyre,\l"
# 341 "data/maps/LavaridgeTown/scripts.pory"
	.string "the mountain on Route 122.\p"
# 342 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, the trainers\n"
# 343 "data/maps/LavaridgeTown/scripts.pory"
	.string "there are really tough.\p"
# 344 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 345 "data/maps/LavaridgeTown/scripts.pory"

# 346 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 347 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an EGG.\p"
# 348 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 349 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 350 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 351 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 352 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with Pokémon and\l"
# 353 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 354 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a TRAINER, yes?\n"
# 355 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your Pokémon radiate vitality.\p"
# 356 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 357 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this EGG to hatch?$"
# 358 "data/maps/LavaridgeTown/scripts.pory"

# 359 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 360 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 361 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here EGG!$"
# 362 "data/maps/LavaridgeTown/scripts.pory"

# 363 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 364 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the EGG.$"
# 365 "data/maps/LavaridgeTown/scripts.pory"

# 366 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 367 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 368 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this EGG…$"
# 369 "data/maps/LavaridgeTown/scripts.pory"

# 370 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this EGG, I will be here.$"
# 374 "data/maps/LavaridgeTown/scripts.pory"

# 375 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an Egg will be found at\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Pokémon Day Care.\p"
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 379 "data/maps/LavaridgeTown/scripts.pory"

# 380 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 388 "data/maps/LavaridgeTown/scripts.pory"

# 389 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 391 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 392 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 395 "data/maps/LavaridgeTown/scripts.pory"

# 396 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 399 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 400 "data/maps/LavaridgeTown/scripts.pory"

# 401 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 404 "data/maps/LavaridgeTown/scripts.pory"
	.string "Trainer like Flannery.$"
# 405 "data/maps/LavaridgeTown/scripts.pory"

# 406 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 409 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 410 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 411 "data/maps/LavaridgeTown/scripts.pory"

# 412 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 413 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 414 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 415 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 418 "data/maps/LavaridgeTown/scripts.pory"

# 419 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town\p"
# 421 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Pokémon Center Hot Springs\n"
# 422 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 423 "data/maps/LavaridgeTown/scripts.pory"

# 424 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 425 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\n"
# 426 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: Buck\l"
# 427 "data/maps/LavaridgeTown/scripts.pory"
	.string "“The rookie with a fiery passion!”$"
# 428 "data/maps/LavaridgeTown/scripts.pory"

# 429 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 430 "data/maps/LavaridgeTown/scripts.pory"
	.string "Stone Emporium\n"
# 431 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Evolution Stones sold here”$"

LavaridgeTown_EventScript_TrickHouseOpen_Text_0:
# 6 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hey there, {PLAYER}!\p"
	.string "I'm just here to let you know that the\n"
	.string "next Trick House puzzle is open.\p"
	.string "That's all!\n"
	.string "I hope to see you there!$"
