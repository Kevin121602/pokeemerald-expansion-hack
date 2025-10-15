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
	closemessage
# 29 "data/maps/LavaridgeTown/scripts.pory"
	random 30
# 30 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 31 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_ObtainEgg_3
# 33 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_ObtainEgg_4
# 35 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_ObtainEgg_5
# 37 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_ObtainEgg_6
# 39 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_ObtainEgg_7
# 41 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_ObtainEgg_8
# 43 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_ObtainEgg_9
# 45 "data/maps/LavaridgeTown/scripts.pory"
	case 7, LavaridgeTown_EventScript_ObtainEgg_10
# 47 "data/maps/LavaridgeTown/scripts.pory"
	case 8, LavaridgeTown_EventScript_ObtainEgg_11
# 49 "data/maps/LavaridgeTown/scripts.pory"
	case 9, LavaridgeTown_EventScript_ObtainEgg_12
# 51 "data/maps/LavaridgeTown/scripts.pory"
	case 10, LavaridgeTown_EventScript_ObtainEgg_13
# 53 "data/maps/LavaridgeTown/scripts.pory"
	case 11, LavaridgeTown_EventScript_ObtainEgg_14
# 55 "data/maps/LavaridgeTown/scripts.pory"
	case 12, LavaridgeTown_EventScript_ObtainEgg_15
# 57 "data/maps/LavaridgeTown/scripts.pory"
	case 13, LavaridgeTown_EventScript_ObtainEgg_16
# 59 "data/maps/LavaridgeTown/scripts.pory"
	case 14, LavaridgeTown_EventScript_ObtainEgg_17
# 61 "data/maps/LavaridgeTown/scripts.pory"
	case 15, LavaridgeTown_EventScript_ObtainEgg_18
# 63 "data/maps/LavaridgeTown/scripts.pory"
	case 16, LavaridgeTown_EventScript_ObtainEgg_19
# 65 "data/maps/LavaridgeTown/scripts.pory"
	case 17, LavaridgeTown_EventScript_ObtainEgg_20
# 67 "data/maps/LavaridgeTown/scripts.pory"
	case 18, LavaridgeTown_EventScript_ObtainEgg_21
# 69 "data/maps/LavaridgeTown/scripts.pory"
	case 19, LavaridgeTown_EventScript_ObtainEgg_22
# 71 "data/maps/LavaridgeTown/scripts.pory"
	case 20, LavaridgeTown_EventScript_ObtainEgg_23
# 73 "data/maps/LavaridgeTown/scripts.pory"
	case 21, LavaridgeTown_EventScript_ObtainEgg_24
# 75 "data/maps/LavaridgeTown/scripts.pory"
	case 22, LavaridgeTown_EventScript_ObtainEgg_25
# 77 "data/maps/LavaridgeTown/scripts.pory"
	case 23, LavaridgeTown_EventScript_ObtainEgg_26
# 79 "data/maps/LavaridgeTown/scripts.pory"
	case 24, LavaridgeTown_EventScript_ObtainEgg_27
# 81 "data/maps/LavaridgeTown/scripts.pory"
	case 25, LavaridgeTown_EventScript_ObtainEgg_28
# 83 "data/maps/LavaridgeTown/scripts.pory"
	case 26, LavaridgeTown_EventScript_ObtainEgg_29
# 85 "data/maps/LavaridgeTown/scripts.pory"
	case 27, LavaridgeTown_EventScript_ObtainEgg_30
# 87 "data/maps/LavaridgeTown/scripts.pory"
	case 28, LavaridgeTown_EventScript_ObtainEgg_31
# 89 "data/maps/LavaridgeTown/scripts.pory"
	case 29, LavaridgeTown_EventScript_ObtainEgg_32
LavaridgeTown_EventScript_ObtainEgg_1:
	return

LavaridgeTown_EventScript_ObtainEgg_3:
# 32 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_BULBASAUR
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_4:
# 34 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHARMANDER
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_5:
# 36 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SQUIRTLE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_6:
# 38 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHIKORITA
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_7:
# 40 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_8:
# 42 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_9:
# 44 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TOTODILE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_10:
# 46 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TREECKO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_11:
# 48 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TORCHIC
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_12:
# 50 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_MUDKIP
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_13:
# 52 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TURTWIG
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_14:
# 54 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHIMCHAR
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_15:
# 56 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_PIPLUP
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_16:
# 58 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SNIVY
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_17:
# 60 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_TEPIG
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_18:
# 62 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_OSHAWOTT
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_19:
# 64 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_OSHAWOTT
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_20:
# 66 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_CHESPIN
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_21:
# 68 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FENNEKIN
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_22:
# 70 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FROAKIE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_23:
# 72 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ROWLET
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_24:
# 74 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_ROWLET
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_25:
# 76 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_LITTEN
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_26:
# 78 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_POPPLIO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_27:
# 80 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_GROOKEY
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_28:
# 82 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SCORBUNNY
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_29:
# 84 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SOBBLE
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_30:
# 86 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_SPRIGATITO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_31:
# 88 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_FUECOCO
	goto LavaridgeTown_EventScript_ObtainEgg_1

LavaridgeTown_EventScript_ObtainEgg_32:
# 90 "data/maps/LavaridgeTown/scripts.pory"
	giveegg SPECIES_QUAXLY
	goto LavaridgeTown_EventScript_ObtainEgg_1


# 95 "data/maps/LavaridgeTown/scripts.pory"

# 96 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 97 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 98 "data/maps/LavaridgeTown/scripts.pory"

# 99 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts::
# 100 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 101 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 102 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 103 "data/maps/LavaridgeTown/scripts.pory"

# 104 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition:
# 105 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 106 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 107 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 108 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 109 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 110 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
# 111 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
# 112 "data/maps/LavaridgeTown/scripts.pory"
	end
# 113 "data/maps/LavaridgeTown/scripts.pory"

# 114 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
# 115 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 116 "data/maps/LavaridgeTown/scripts.pory"
	return
# 117 "data/maps/LavaridgeTown/scripts.pory"

# 118 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos::
# 119 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 120 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
# 121 "data/maps/LavaridgeTown/scripts.pory"
	return
# 122 "data/maps/LavaridgeTown/scripts.pory"

# 123 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos::
# 124 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 125 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 126 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 127 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 128 "data/maps/LavaridgeTown/scripts.pory"
	return
# 129 "data/maps/LavaridgeTown/scripts.pory"

# 130 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers::
# 131 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 132 "data/maps/LavaridgeTown/scripts.pory"
	return
# 133 "data/maps/LavaridgeTown/scripts.pory"

# 134 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup::
# 135 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 136 "data/maps/LavaridgeTown/scripts.pory"
	return
# 137 "data/maps/LavaridgeTown/scripts.pory"

# 138 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame:
# 139 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 140 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 141 "data/maps/LavaridgeTown/scripts.pory"

# 142 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles::
# 143 "data/maps/LavaridgeTown/scripts.pory"
	lockall
# 144 "data/maps/LavaridgeTown/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 145 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
# 146 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
# 147 "data/maps/LavaridgeTown/scripts.pory"
	delay 20
# 148 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 149 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
# 150 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
# 151 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
# 152 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
# 153 "data/maps/LavaridgeTown/scripts.pory"
	checkplayergender
# 154 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
# 155 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
# 156 "data/maps/LavaridgeTown/scripts.pory"
	end
# 157 "data/maps/LavaridgeTown/scripts.pory"

# 158 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles::
# 159 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 160 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 161 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 162 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 163 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 164 "data/maps/LavaridgeTown/scripts.pory"
	end
# 165 "data/maps/LavaridgeTown/scripts.pory"

# 166 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles::
# 167 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 168 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 169 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 170 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 171 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 172 "data/maps/LavaridgeTown/scripts.pory"
	end
# 173 "data/maps/LavaridgeTown/scripts.pory"

# 174 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit::
# 175 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 176 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 177 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 178 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 179 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
# 180 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
# 181 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 182 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 183 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 184 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 185 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 186 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 187 "data/maps/LavaridgeTown/scripts.pory"
	end
# 188 "data/maps/LavaridgeTown/scripts.pory"

# 189 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic::
# 190 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_DP_RIVAL, TRUE
# 191 "data/maps/LavaridgeTown/scripts.pory"
	return
# 192 "data/maps/LavaridgeTown/scripts.pory"

# 193 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic::
# 194 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_DP_RIVAL, TRUE
# 195 "data/maps/LavaridgeTown/scripts.pory"
	return
# 196 "data/maps/LavaridgeTown/scripts.pory"

# 197 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer::
# 198 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 199 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 201 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 202 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 203 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 204 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 205 "data/maps/LavaridgeTown/scripts.pory"
	return
# 206 "data/maps/LavaridgeTown/scripts.pory"

# 207 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop::
# 208 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 209 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 210 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 211 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 212 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 214 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 215 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 216 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 218 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 219 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 220 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 221 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 223 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/LavaridgeTown/scripts.pory"
	return
# 225 "data/maps/LavaridgeTown/scripts.pory"

# 226 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1::
# 227 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 228 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/LavaridgeTown/scripts.pory"
	return
# 230 "data/maps/LavaridgeTown/scripts.pory"

# 231 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2::
# 232 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 233 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 234 "data/maps/LavaridgeTown/scripts.pory"
	return
# 235 "data/maps/LavaridgeTown/scripts.pory"

# 236 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1::
# 237 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 238 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 239 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 240 "data/maps/LavaridgeTown/scripts.pory"
	return
# 241 "data/maps/LavaridgeTown/scripts.pory"

# 242 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2::
# 243 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 244 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 245 "data/maps/LavaridgeTown/scripts.pory"
	return
# 246 "data/maps/LavaridgeTown/scripts.pory"

# 247 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2:
# 248 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 249 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 250 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
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
	walk_fast_up
# 258 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 259 "data/maps/LavaridgeTown/scripts.pory"

# 260 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit:
# 261 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 262 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 263 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_faster_right
# 264 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 265 "data/maps/LavaridgeTown/scripts.pory"

# 266 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1:
# 267 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
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
	walk_fast_right
# 276 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 277 "data/maps/LavaridgeTown/scripts.pory"

# 278 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2:
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
	walk_left
# 285 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 286 "data/maps/LavaridgeTown/scripts.pory"

# 287 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1:
# 288 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 289 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 290 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 291 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 292 "data/maps/LavaridgeTown/scripts.pory"

# 293 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop:
# 294 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 295 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 296 "data/maps/LavaridgeTown/scripts.pory"

# 297 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger::
# 298 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 299 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
# 300 "data/maps/LavaridgeTown/scripts.pory"
	end
# 301 "data/maps/LavaridgeTown/scripts.pory"

# 302 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings::
# 303 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 304 "data/maps/LavaridgeTown/scripts.pory"
	end
# 305 "data/maps/LavaridgeTown/scripts.pory"

# 306 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM::
# 307 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
# 308 "data/maps/LavaridgeTown/scripts.pory"
	end
# 309 "data/maps/LavaridgeTown/scripts.pory"

# 310 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan::
# 311 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 312 "data/maps/LavaridgeTown/scripts.pory"
	end
# 313 "data/maps/LavaridgeTown/scripts.pory"

# 314 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin::
# 315 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 316 "data/maps/LavaridgeTown/scripts.pory"
	end
# 317 "data/maps/LavaridgeTown/scripts.pory"

# 318 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1::
# 319 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 320 "data/maps/LavaridgeTown/scripts.pory"
	end
# 321 "data/maps/LavaridgeTown/scripts.pory"

# 322 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2::
# 323 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 324 "data/maps/LavaridgeTown/scripts.pory"
	end
# 325 "data/maps/LavaridgeTown/scripts.pory"

# 326 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF::
# 327 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 328 "data/maps/LavaridgeTown/scripts.pory"
	end
# 329 "data/maps/LavaridgeTown/scripts.pory"

# 330 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman::
# 331 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 332 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 333 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 334 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 335 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
# 336 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 337 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
# 338 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 339 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_ObtainEgg
# 340 "data/maps/LavaridgeTown/scripts.pory"
	release
# 341 "data/maps/LavaridgeTown/scripts.pory"
	end
# 342 "data/maps/LavaridgeTown/scripts.pory"

# 343 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg::
# 344 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 345 "data/maps/LavaridgeTown/scripts.pory"
	release
# 346 "data/maps/LavaridgeTown/scripts.pory"
	end
# 347 "data/maps/LavaridgeTown/scripts.pory"

# 348 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg::
# 349 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 350 "data/maps/LavaridgeTown/scripts.pory"
	release
# 351 "data/maps/LavaridgeTown/scripts.pory"
	end
# 352 "data/maps/LavaridgeTown/scripts.pory"

# 353 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg::
# 354 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 355 "data/maps/LavaridgeTown/scripts.pory"
	release
# 356 "data/maps/LavaridgeTown/scripts.pory"
	end
# 357 "data/maps/LavaridgeTown/scripts.pory"

# 358 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign::
# 359 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 360 "data/maps/LavaridgeTown/scripts.pory"
	end
# 361 "data/maps/LavaridgeTown/scripts.pory"

# 362 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign::
# 363 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 364 "data/maps/LavaridgeTown/scripts.pory"
	end
# 365 "data/maps/LavaridgeTown/scripts.pory"

# 366 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign::
# 367 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 368 "data/maps/LavaridgeTown/scripts.pory"
	end
# 369 "data/maps/LavaridgeTown/scripts.pory"

# 370 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis:
# 371 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: {PLAYER}{KUN}! Long time no see!\p"
# 372 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 373 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the Lavaridge Gym Badge.\p"
# 374 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 375 "data/maps/LavaridgeTown/scripts.pory"
	.string "good Pokémon…\l"
# 376 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 377 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 378 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 379 "data/maps/LavaridgeTown/scripts.pory"

# 380 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
# 381 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: With those Go-Goggles, you'll\n"
# 382 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting into the\l"
# 383 "data/maps/LavaridgeTown/scripts.pory"
	.string "cave near Route 111.\p"
# 384 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 385 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging Gyms…\p"
# 386 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 387 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 388 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 389 "data/maps/LavaridgeTown/scripts.pory"
	.string "the trainers on Mt. Pyre.\p"
# 390 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 391 "data/maps/LavaridgeTown/scripts.pory"

# 392 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
# 393 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: {PLAYER}, hey, it's been a while.\n"
# 394 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 395 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 396 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of Badges.\p"
# 397 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 398 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 399 "data/maps/LavaridgeTown/scripts.pory"

# 400 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
# 401 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: Keep those with you if you're\n"
# 402 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that cave near\l"
# 403 "data/maps/LavaridgeTown/scripts.pory"
	.string "Route 111.\p"
# 404 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some Pokémon that\n"
# 405 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively cave-dwellers.\l"
# 406 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 407 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 408 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering summitting Mt. Pyre,\l"
# 409 "data/maps/LavaridgeTown/scripts.pory"
	.string "the mountain on Route 122.\p"
# 410 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, the trainers\n"
# 411 "data/maps/LavaridgeTown/scripts.pory"
	.string "there are really tough.\p"
# 412 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 413 "data/maps/LavaridgeTown/scripts.pory"

# 414 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt:
# 415 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an Egg.\p"
# 416 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 417 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 418 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 419 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 420 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with Pokémon and\l"
# 421 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 422 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a Trainer, yes?\n"
# 423 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your Pokémon radiate vitality.\p"
# 424 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 425 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this Egg to hatch?$"
# 426 "data/maps/LavaridgeTown/scripts.pory"

# 427 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
# 428 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 429 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here Egg!$"
# 430 "data/maps/LavaridgeTown/scripts.pory"

# 431 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg:
# 432 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the Egg.$"
# 433 "data/maps/LavaridgeTown/scripts.pory"

# 434 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg:
# 435 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 436 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this Egg…$"
# 437 "data/maps/LavaridgeTown/scripts.pory"

# 438 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen:
# 439 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 440 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 441 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 442 "data/maps/LavaridgeTown/scripts.pory"

# 443 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
# 444 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an Egg will be found at\n"
# 445 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Pokémon Day Care.\p"
# 446 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 447 "data/maps/LavaridgeTown/scripts.pory"

# 448 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry:
# 449 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 450 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 451 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 452 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 453 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 454 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 455 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 456 "data/maps/LavaridgeTown/scripts.pory"

# 457 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside:
# 458 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 459 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 460 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 461 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 462 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 463 "data/maps/LavaridgeTown/scripts.pory"

# 464 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings:
# 465 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 466 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 467 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 468 "data/maps/LavaridgeTown/scripts.pory"

# 469 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay:
# 470 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 471 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 472 "data/maps/LavaridgeTown/scripts.pory"
	.string "Trainer like Flannery.$"
# 473 "data/maps/LavaridgeTown/scripts.pory"

# 474 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings:
# 475 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 476 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 477 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 478 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 479 "data/maps/LavaridgeTown/scripts.pory"

# 480 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims:
# 481 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 482 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 483 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 484 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 485 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 486 "data/maps/LavaridgeTown/scripts.pory"

# 487 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign:
# 488 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town\p"
# 489 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Pokémon Center Hot Springs\n"
# 490 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 491 "data/maps/LavaridgeTown/scripts.pory"

# 492 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign:
# 493 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\n"
# 494 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: Buck\l"
# 495 "data/maps/LavaridgeTown/scripts.pory"
	.string "“The rookie with a fiery passion!”$"
# 496 "data/maps/LavaridgeTown/scripts.pory"

# 497 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign:
# 498 "data/maps/LavaridgeTown/scripts.pory"
	.string "Stone Emporium\n"
# 499 "data/maps/LavaridgeTown/scripts.pory"
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
