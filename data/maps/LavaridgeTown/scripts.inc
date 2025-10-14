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


LavaridgeTown_EventScript_ObtainEgg::
# 24 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 25 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 26 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_EventScript_ObtainEgg_Text_0
# 27 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 28 "data/maps/LavaridgeTown/scripts.pory"
	random 30
# 29 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 30 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_ObtainEgg_3
# 32 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_ObtainEgg_4
# 34 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_ObtainEgg_5
# 36 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_ObtainEgg_6
# 38 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_ObtainEgg_7
# 40 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_ObtainEgg_8
# 42 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_ObtainEgg_9
# 44 "data/maps/LavaridgeTown/scripts.pory"
	case 7, LavaridgeTown_EventScript_ObtainEgg_10
# 46 "data/maps/LavaridgeTown/scripts.pory"
	case 8, LavaridgeTown_EventScript_ObtainEgg_11
# 48 "data/maps/LavaridgeTown/scripts.pory"
	case 9, LavaridgeTown_EventScript_ObtainEgg_12
# 50 "data/maps/LavaridgeTown/scripts.pory"
	case 10, LavaridgeTown_EventScript_ObtainEgg_13
# 52 "data/maps/LavaridgeTown/scripts.pory"
	case 11, LavaridgeTown_EventScript_ObtainEgg_14
# 54 "data/maps/LavaridgeTown/scripts.pory"
	case 12, LavaridgeTown_EventScript_ObtainEgg_15
# 56 "data/maps/LavaridgeTown/scripts.pory"
	case 13, LavaridgeTown_EventScript_ObtainEgg_16
# 58 "data/maps/LavaridgeTown/scripts.pory"
	case 14, LavaridgeTown_EventScript_ObtainEgg_17
# 60 "data/maps/LavaridgeTown/scripts.pory"
	case 15, LavaridgeTown_EventScript_ObtainEgg_18
# 62 "data/maps/LavaridgeTown/scripts.pory"
	case 16, LavaridgeTown_EventScript_ObtainEgg_19
# 64 "data/maps/LavaridgeTown/scripts.pory"
	case 17, LavaridgeTown_EventScript_ObtainEgg_20
# 66 "data/maps/LavaridgeTown/scripts.pory"
	case 18, LavaridgeTown_EventScript_ObtainEgg_21
# 68 "data/maps/LavaridgeTown/scripts.pory"
	case 19, LavaridgeTown_EventScript_ObtainEgg_22
# 70 "data/maps/LavaridgeTown/scripts.pory"
	case 20, LavaridgeTown_EventScript_ObtainEgg_23
# 72 "data/maps/LavaridgeTown/scripts.pory"
	case 21, LavaridgeTown_EventScript_ObtainEgg_24
# 74 "data/maps/LavaridgeTown/scripts.pory"
	case 22, LavaridgeTown_EventScript_ObtainEgg_25
# 76 "data/maps/LavaridgeTown/scripts.pory"
	case 23, LavaridgeTown_EventScript_ObtainEgg_26
# 78 "data/maps/LavaridgeTown/scripts.pory"
	case 24, LavaridgeTown_EventScript_ObtainEgg_27
# 80 "data/maps/LavaridgeTown/scripts.pory"
	case 25, LavaridgeTown_EventScript_ObtainEgg_28
# 82 "data/maps/LavaridgeTown/scripts.pory"
	case 26, LavaridgeTown_EventScript_ObtainEgg_29
# 84 "data/maps/LavaridgeTown/scripts.pory"
	case 27, LavaridgeTown_EventScript_ObtainEgg_30
# 86 "data/maps/LavaridgeTown/scripts.pory"
	case 28, LavaridgeTown_EventScript_ObtainEgg_31
# 88 "data/maps/LavaridgeTown/scripts.pory"
	case 29, LavaridgeTown_EventScript_ObtainEgg_32
LavaridgeTown_EventScript_ObtainEgg_1:
	return

LavaridgeTown_EventScript_ObtainEgg_3:
# 31 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BULBASAUR
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_4:
# 33 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHARMANDER
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_5:
# 35 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SQUIRTLE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_6:
# 37 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHIKORITA
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_7:
# 39 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_8:
# 41 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_9:
# 43 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOTODILE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_10:
# 45 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TREECKO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_11:
# 47 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TORCHIC
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_12:
# 49 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUDKIP
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_13:
# 51 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TURTWIG
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_14:
# 53 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHIMCHAR
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_15:
# 55 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PIPLUP
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_16:
# 57 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNIVY
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_17:
# 59 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TEPIG
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_18:
# 61 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_OSHAWOTT
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_19:
# 63 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_OSHAWOTT
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_20:
# 65 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHESPIN
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_21:
# 67 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FENNEKIN
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_22:
# 69 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FROAKIE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_23:
# 71 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ROWLET
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_24:
# 73 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ROWLET
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_25:
# 75 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_LITTEN
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_26:
# 77 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_POPPLIO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_27:
# 79 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_GROOKEY
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_28:
# 81 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SCORBUNNY
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_29:
# 83 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SOBBLE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_30:
# 85 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPRIGATITO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_31:
# 87 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FUECOCO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_32:
# 89 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_QUAXLY
	goto LavaridgeTown_EventScript_ObtainEgg_1


# 94 "data/maps/LavaridgeTown/scripts.pory"

# 95 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 96 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 97 "data/maps/LavaridgeTown/scripts.pory"

# 98 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 99 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 100 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 101 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 102 "data/maps/LavaridgeTown/scripts.pory"

# 103 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 104 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 105 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 106 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 107 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 108 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 109 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 110 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 111 "data/maps/LavaridgeTown/scripts.pory"
	end
# 112 "data/maps/LavaridgeTown/scripts.pory"

# 113 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 114 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 115 "data/maps/LavaridgeTown/scripts.pory"
	return
# 116 "data/maps/LavaridgeTown/scripts.pory"

# 117 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 118 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 119 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 120 "data/maps/LavaridgeTown/scripts.pory"
	return
# 121 "data/maps/LavaridgeTown/scripts.pory"

# 122 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 123 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 124 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 125 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 126 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 127 "data/maps/LavaridgeTown/scripts.pory"
	return
# 128 "data/maps/LavaridgeTown/scripts.pory"

# 129 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 130 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 131 "data/maps/LavaridgeTown/scripts.pory"
	return
# 132 "data/maps/LavaridgeTown/scripts.pory"

# 133 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 134 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 135 "data/maps/LavaridgeTown/scripts.pory"
	return
# 136 "data/maps/LavaridgeTown/scripts.pory"

# 137 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 138 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 139 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 140 "data/maps/LavaridgeTown/scripts.pory"

# 141 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 142 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 143 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 144 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 145 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 146 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 147 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 148 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 149 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 150 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 151 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 152 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 153 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 154 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 155 "data/maps/LavaridgeTown/scripts.pory"
	end
# 156 "data/maps/LavaridgeTown/scripts.pory"

# 157 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 158 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 159 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 160 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 161 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 162 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 163 "data/maps/LavaridgeTown/scripts.pory"
	end
# 164 "data/maps/LavaridgeTown/scripts.pory"

# 165 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 166 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 167 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 168 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 169 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 170 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 171 "data/maps/LavaridgeTown/scripts.pory"
	end
# 172 "data/maps/LavaridgeTown/scripts.pory"

# 173 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 174 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 175 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 176 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 177 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 178 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 179 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 180 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 181 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 182 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 183 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 184 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 185 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 186 "data/maps/LavaridgeTown/scripts.pory"
	end
# 187 "data/maps/LavaridgeTown/scripts.pory"

# 188 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 189 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_DP_RIVAL, TRUE
# 190 "data/maps/LavaridgeTown/scripts.pory"
	return
# 191 "data/maps/LavaridgeTown/scripts.pory"

# 192 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 193 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_DP_RIVAL, TRUE
# 194 "data/maps/LavaridgeTown/scripts.pory"
	return
# 195 "data/maps/LavaridgeTown/scripts.pory"

# 196 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 197 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 198 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 199 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 200 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 201 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 203 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/LavaridgeTown/scripts.pory"
	return
# 205 "data/maps/LavaridgeTown/scripts.pory"

# 206 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 207 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 208 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 209 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 210 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 211 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 212 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 213 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 214 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 215 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 216 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 217 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 218 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 220 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 222 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/LavaridgeTown/scripts.pory"
	return
# 224 "data/maps/LavaridgeTown/scripts.pory"

# 225 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 226 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 227 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/LavaridgeTown/scripts.pory"
	return
# 229 "data/maps/LavaridgeTown/scripts.pory"

# 230 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 231 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 232 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 233 "data/maps/LavaridgeTown/scripts.pory"
	return
# 234 "data/maps/LavaridgeTown/scripts.pory"

# 235 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 236 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 237 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 238 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/LavaridgeTown/scripts.pory"
	return
# 240 "data/maps/LavaridgeTown/scripts.pory"

# 241 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 242 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 243 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 244 "data/maps/LavaridgeTown/scripts.pory"
	return
# 245 "data/maps/LavaridgeTown/scripts.pory"

# 246 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 247 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 248 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 249 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 250 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 251 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 252 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 253 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 254 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 255 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 256 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 257 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 258 "data/maps/LavaridgeTown/scripts.pory"

# 259 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 260 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 261 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 262 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 263 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 264 "data/maps/LavaridgeTown/scripts.pory"

# 265 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 266 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 267 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 268 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 269 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 270 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 271 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 272 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 273 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 274 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 275 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 276 "data/maps/LavaridgeTown/scripts.pory"

# 277 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
# 278 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 279 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 280 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 281 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 282 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 283 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 284 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 285 "data/maps/LavaridgeTown/scripts.pory"

# 286 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 287 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 288 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 289 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 290 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 291 "data/maps/LavaridgeTown/scripts.pory"

# 292 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 293 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 294 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 295 "data/maps/LavaridgeTown/scripts.pory"

# 296 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 297 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 298 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 299 "data/maps/LavaridgeTown/scripts.pory"
	end
# 300 "data/maps/LavaridgeTown/scripts.pory"

# 301 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 302 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 303 "data/maps/LavaridgeTown/scripts.pory"
	end
# 304 "data/maps/LavaridgeTown/scripts.pory"

# 305 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 306 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 307 "data/maps/LavaridgeTown/scripts.pory"
	end
# 308 "data/maps/LavaridgeTown/scripts.pory"

# 309 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 310 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 311 "data/maps/LavaridgeTown/scripts.pory"
	end
# 312 "data/maps/LavaridgeTown/scripts.pory"

# 313 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 314 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 315 "data/maps/LavaridgeTown/scripts.pory"
	end
# 316 "data/maps/LavaridgeTown/scripts.pory"

# 317 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 318 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 319 "data/maps/LavaridgeTown/scripts.pory"
	end
# 320 "data/maps/LavaridgeTown/scripts.pory"

# 321 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 322 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 323 "data/maps/LavaridgeTown/scripts.pory"
	end
# 324 "data/maps/LavaridgeTown/scripts.pory"

# 325 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 326 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 327 "data/maps/LavaridgeTown/scripts.pory"
	end
# 328 "data/maps/LavaridgeTown/scripts.pory"

# 329 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 330 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 331 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 332 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 333 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 334 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 335 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 336 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 337 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 338 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_ObtainEgg
# 339 "data/maps/LavaridgeTown/scripts.pory"
	release
# 340 "data/maps/LavaridgeTown/scripts.pory"
	end
# 341 "data/maps/LavaridgeTown/scripts.pory"

# 342 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 343 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 344 "data/maps/LavaridgeTown/scripts.pory"
	release
# 345 "data/maps/LavaridgeTown/scripts.pory"
	end
# 346 "data/maps/LavaridgeTown/scripts.pory"

# 347 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 348 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 349 "data/maps/LavaridgeTown/scripts.pory"
	release
# 350 "data/maps/LavaridgeTown/scripts.pory"
	end
# 351 "data/maps/LavaridgeTown/scripts.pory"

# 352 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 353 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 354 "data/maps/LavaridgeTown/scripts.pory"
	release
# 355 "data/maps/LavaridgeTown/scripts.pory"
	end
# 356 "data/maps/LavaridgeTown/scripts.pory"

# 357 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 358 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 359 "data/maps/LavaridgeTown/scripts.pory"
	end
# 360 "data/maps/LavaridgeTown/scripts.pory"

# 361 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 362 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 363 "data/maps/LavaridgeTown/scripts.pory"
	end
# 364 "data/maps/LavaridgeTown/scripts.pory"

# 365 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 366 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 367 "data/maps/LavaridgeTown/scripts.pory"
	end
# 368 "data/maps/LavaridgeTown/scripts.pory"

# 369 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 370 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: {PLAYER}{KUN}! Long time no see!\p"
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the Lavaridge Gym Badge.\p"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "good Pokémon…\l"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 378 "data/maps/LavaridgeTown/scripts.pory"

# 379 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 380 "data/maps/LavaridgeTown/scripts.pory"
	.string "MAY: With those Go-Goggles, you'll\n"
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting into the\l"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "cave near Route 111.\p"
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging Gyms…\p"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "the trainers on Mt. Pyre.\p"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 390 "data/maps/LavaridgeTown/scripts.pory"

# 391 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 392 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: {PLAYER}, hey, it's been a while.\n"
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of Badges.\p"
# 396 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 398 "data/maps/LavaridgeTown/scripts.pory"

# 399 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 400 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: Keep those with you if you're\n"
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that cave near\l"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "Route 111.\p"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some Pokémon that\n"
# 404 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively cave-dwellers.\l"
# 405 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering summitting Mt. Pyre,\l"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "the mountain on Route 122.\p"
# 409 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, the trainers\n"
# 410 "data/maps/LavaridgeTown/scripts.pory"
	.string "there are really tough.\p"
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 412 "data/maps/LavaridgeTown/scripts.pory"

# 413 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 414 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an Egg.\p"
# 415 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 418 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 419 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with Pokémon and\l"
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 421 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a Trainer, yes?\n"
# 422 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your Pokémon radiate vitality.\p"
# 423 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 424 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this Egg to hatch?$"
# 425 "data/maps/LavaridgeTown/scripts.pory"

# 426 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 427 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 428 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here Egg!$"
# 429 "data/maps/LavaridgeTown/scripts.pory"

# 430 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 431 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the Egg.$"
# 432 "data/maps/LavaridgeTown/scripts.pory"

# 433 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 434 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 435 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this Egg…$"
# 436 "data/maps/LavaridgeTown/scripts.pory"

# 437 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 438 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 439 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 440 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 441 "data/maps/LavaridgeTown/scripts.pory"

# 442 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 443 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an Egg will be found at\n"
# 444 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Pokémon Day Care.\p"
# 445 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 446 "data/maps/LavaridgeTown/scripts.pory"

# 447 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 448 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 449 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 450 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 451 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 452 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 453 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 454 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 455 "data/maps/LavaridgeTown/scripts.pory"

# 456 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 457 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 458 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 459 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 460 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 461 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 462 "data/maps/LavaridgeTown/scripts.pory"

# 463 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 464 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 465 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 466 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 467 "data/maps/LavaridgeTown/scripts.pory"

# 468 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 469 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 470 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 471 "data/maps/LavaridgeTown/scripts.pory"
	.string "Trainer like Flannery.$"
# 472 "data/maps/LavaridgeTown/scripts.pory"

# 473 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 474 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 475 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 476 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 477 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 478 "data/maps/LavaridgeTown/scripts.pory"

# 479 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 480 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 481 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 482 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 483 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 484 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 485 "data/maps/LavaridgeTown/scripts.pory"

# 486 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 487 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town\p"
# 488 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Pokémon Center Hot Springs\n"
# 489 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 490 "data/maps/LavaridgeTown/scripts.pory"

# 491 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 492 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\n"
# 493 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: Buck\l"
# 494 "data/maps/LavaridgeTown/scripts.pory"
	.string "“The rookie with a fiery passion!”$"
# 495 "data/maps/LavaridgeTown/scripts.pory"

# 496 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 497 "data/maps/LavaridgeTown/scripts.pory"
	.string "Stone Emporium\n"
# 498 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Evolution Stones sold here”$"

LavaridgeTown_EventScript_TrickHouseOpen_Text_0:
# 6 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hey there, {PLAYER}!\p"
	.string "I'm just here to let you know that the\n"
	.string "next Trick House puzzle is open.\p"
	.string "That's all!\n"
	.string "I hope to see you there!$"

LavaridgeTown_EventScript_ObtainEgg_Text_0:
# 26 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the Egg.$"
