MtChimney_EventScript_MiraTriggered::
# 4 "data/maps/MtChimney/scripts.pory"
	lock
# 5 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 6 "data/maps/MtChimney/scripts.pory"
	applymovement 32, Common_Movement_ExclamationMark
# 7 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 8 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 9 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 10 "data/maps/MtChimney/scripts.pory"
	goto MtChimney_EventScript_Mira
# 11 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_Mira::
# 16 "data/maps/MtChimney/scripts.pory"
	lock
# 17 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 18 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 19 "data/maps/MtChimney/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_MIRA_MT_CHIMNEY, 32, MtChimney_Text_MiraIntro, MtChimney_EventScript_MiraDefeat, MtChimney_EventScript_MiraDefeated
# 20 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_Mira_Text_0
# 23 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 24 "data/maps/MtChimney/scripts.pory"
	release
	end


# 41 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_FaceUp:
# 42 "data/maps/MtChimney/scripts.pory"
	face_up
# 43 "data/maps/MtChimney/scripts.pory"
	step_end

MtChimney_EventScript_MiraDefeated::
# 47 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 48 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_MiraDefeated_Text_0
# 53 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_MIRA
# 54 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 55 "data/maps/MtChimney/scripts.pory"
	setvar VAR_STAT_TRAINERS_STATE, 4
# 56 "data/maps/MtChimney/scripts.pory"
	release
	end


MtChimney_EventScript_AppleVendor::
# 61 "data/maps/MtChimney/scripts.pory"
	lock
# 62 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 63 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECIEVED_MT_CHIMNEY_APPLE, MtChimney_EventScript_AppleVendor_2
# 67 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 68 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_AppleVendor_Text_1, MSGBOX_YESNO
# 73 "data/maps/MtChimney/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MtChimney_EventScript_AppleVendor_5
# 79 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 80 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 81 "data/maps/MtChimney/scripts.pory"
	random 2
# 82 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/MtChimney/scripts.pory"
	case 0, MtChimney_EventScript_AppleVendor_10
# 85 "data/maps/MtChimney/scripts.pory"
	case 1, MtChimney_EventScript_AppleVendor_11
MtChimney_EventScript_AppleVendor_8:
# 88 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 89 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_AppleVendor_Text_3
# 90 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECIEVED_MT_CHIMNEY_APPLE
MtChimney_EventScript_AppleVendor_1:
# 93 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_AppleVendor_2:
# 64 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_AppleVendor_Text_0
	goto MtChimney_EventScript_AppleVendor_1

MtChimney_EventScript_AppleVendor_5:
# 74 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_AppleVendor_Text_2
# 75 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 76 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_AppleVendor_10:
# 84 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_TART_APPLE
	goto MtChimney_EventScript_AppleVendor_8

MtChimney_EventScript_AppleVendor_11:
# 86 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_SWEET_APPLE
	goto MtChimney_EventScript_AppleVendor_8


MtChimney_EventScript_SunStone::
# 98 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_EventScript_SunStone_Text_0, MSGBOX_YESNO
# 101 "data/maps/MtChimney/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/MtChimney/scripts.pory"
	case NO, MtChimney_EventScript_SunStone_3
# 105 "data/maps/MtChimney/scripts.pory"
	case YES, MtChimney_EventScript_SunStone_4
# 111 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_SunStone_3:
# 103 "data/maps/MtChimney/scripts.pory"
	release
	end

MtChimney_EventScript_SunStone_4:
# 106 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_SUN_STONE
# 107 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECIEVED_MT_CHIMNEY_SUN_STONE
# 108 "data/maps/MtChimney/scripts.pory"
	release
	end


# 115 "data/maps/MtChimney/scripts.pory"

# 116 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 117 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 118 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 119 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 120 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 121 "data/maps/MtChimney/scripts.pory"

# 122 "data/maps/MtChimney/scripts.pory"

# 123 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 124 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 125 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 126 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 127 "data/maps/MtChimney/scripts.pory"

# 128 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 129 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 130 "data/maps/MtChimney/scripts.pory"
	end
# 131 "data/maps/MtChimney/scripts.pory"

# 132 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 133 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 134 "data/maps/MtChimney/scripts.pory"
	end
# 135 "data/maps/MtChimney/scripts.pory"

# 136 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 137 "data/maps/MtChimney/scripts.pory"
	lock
# 138 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 139 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 140 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 141 "data/maps/MtChimney/scripts.pory"
	closemessage
# 142 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 143 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 144 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 145 "data/maps/MtChimney/scripts.pory"
	release
# 146 "data/maps/MtChimney/scripts.pory"
	end
# 147 "data/maps/MtChimney/scripts.pory"

# 148 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 149 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 150 "data/maps/MtChimney/scripts.pory"
	return
# 151 "data/maps/MtChimney/scripts.pory"

# 152 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 153 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 154 "data/maps/MtChimney/scripts.pory"
	return
# 155 "data/maps/MtChimney/scripts.pory"

# 156 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 157 "data/maps/MtChimney/scripts.pory"
	lockall
# 158 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 159 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 160 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 161 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 162 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 163 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 164 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 165 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 166 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 167 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 168 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 169 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 170 "data/maps/MtChimney/scripts.pory"
	closemessage
# 171 "data/maps/MtChimney/scripts.pory"
	delay 30
# 172 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 173 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 174 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 175 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 176 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 177 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 178 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 179 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 180 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 181 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 182 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 183 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 184 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 185 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 186 "data/maps/MtChimney/scripts.pory"
	closemessage
# 187 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 188 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 189 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 190 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 191 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 192 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 193 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 194 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 195 "data/maps/MtChimney/scripts.pory"
	releaseall
# 196 "data/maps/MtChimney/scripts.pory"
	end
# 197 "data/maps/MtChimney/scripts.pory"

# 198 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 199 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 200 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 201 "data/maps/MtChimney/scripts.pory"
	return
# 202 "data/maps/MtChimney/scripts.pory"

# 203 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 204 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 205 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 206 "data/maps/MtChimney/scripts.pory"
	return
# 207 "data/maps/MtChimney/scripts.pory"

# 208 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 209 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 210 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 211 "data/maps/MtChimney/scripts.pory"
	return
# 212 "data/maps/MtChimney/scripts.pory"

# 213 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 214 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 215 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 216 "data/maps/MtChimney/scripts.pory"
	return
# 217 "data/maps/MtChimney/scripts.pory"

# 218 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 219 "data/maps/MtChimney/scripts.pory"
	lock
# 220 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 221 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 222 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 223 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 224 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 225 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 226 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 227 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 228 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 229 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 230 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 231 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 232 "data/maps/MtChimney/scripts.pory"
	release
# 233 "data/maps/MtChimney/scripts.pory"
	end
# 234 "data/maps/MtChimney/scripts.pory"

# 235 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 236 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 237 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 238 "data/maps/MtChimney/scripts.pory"
	release
# 239 "data/maps/MtChimney/scripts.pory"
	end
# 240 "data/maps/MtChimney/scripts.pory"

# 241 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 242 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 243 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 244 "data/maps/MtChimney/scripts.pory"
	return
# 245 "data/maps/MtChimney/scripts.pory"

# 246 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 247 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 248 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 249 "data/maps/MtChimney/scripts.pory"
	release
# 250 "data/maps/MtChimney/scripts.pory"
	end
# 251 "data/maps/MtChimney/scripts.pory"

# 252 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 253 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 254 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 255 "data/maps/MtChimney/scripts.pory"
	release
# 256 "data/maps/MtChimney/scripts.pory"
	end
# 257 "data/maps/MtChimney/scripts.pory"

# 258 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 259 "data/maps/MtChimney/scripts.pory"
	walk_up
# 260 "data/maps/MtChimney/scripts.pory"
	walk_up
# 261 "data/maps/MtChimney/scripts.pory"
	walk_up
# 262 "data/maps/MtChimney/scripts.pory"
	walk_up
# 263 "data/maps/MtChimney/scripts.pory"
	walk_up
# 264 "data/maps/MtChimney/scripts.pory"
	walk_up
# 265 "data/maps/MtChimney/scripts.pory"
	walk_right
# 266 "data/maps/MtChimney/scripts.pory"
	step_end
# 267 "data/maps/MtChimney/scripts.pory"

# 268 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 269 "data/maps/MtChimney/scripts.pory"
	walk_left
# 270 "data/maps/MtChimney/scripts.pory"
	walk_down
# 271 "data/maps/MtChimney/scripts.pory"
	walk_down
# 272 "data/maps/MtChimney/scripts.pory"
	walk_down
# 273 "data/maps/MtChimney/scripts.pory"
	walk_down
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	walk_down
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	step_end
# 278 "data/maps/MtChimney/scripts.pory"

# 279 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 280 "data/maps/MtChimney/scripts.pory"
	walk_up
# 281 "data/maps/MtChimney/scripts.pory"
	walk_up
# 282 "data/maps/MtChimney/scripts.pory"
	walk_up
# 283 "data/maps/MtChimney/scripts.pory"
	walk_up
# 284 "data/maps/MtChimney/scripts.pory"
	walk_up
# 285 "data/maps/MtChimney/scripts.pory"
	walk_right
# 286 "data/maps/MtChimney/scripts.pory"
	walk_right
# 287 "data/maps/MtChimney/scripts.pory"
	step_end
# 288 "data/maps/MtChimney/scripts.pory"

# 289 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_left
# 292 "data/maps/MtChimney/scripts.pory"
	walk_down
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_down
# 296 "data/maps/MtChimney/scripts.pory"
	walk_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_down
# 299 "data/maps/MtChimney/scripts.pory"
	step_end
# 300 "data/maps/MtChimney/scripts.pory"

# 301 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 302 "data/maps/MtChimney/scripts.pory"
	walk_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_left
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_down
# 310 "data/maps/MtChimney/scripts.pory"
	walk_down
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	walk_down
# 313 "data/maps/MtChimney/scripts.pory"
	walk_left
# 314 "data/maps/MtChimney/scripts.pory"
	walk_left
# 315 "data/maps/MtChimney/scripts.pory"
	walk_left
# 316 "data/maps/MtChimney/scripts.pory"
	walk_left
# 317 "data/maps/MtChimney/scripts.pory"
	walk_left
# 318 "data/maps/MtChimney/scripts.pory"
	walk_down
# 319 "data/maps/MtChimney/scripts.pory"
	step_end
# 320 "data/maps/MtChimney/scripts.pory"

# 321 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 322 "data/maps/MtChimney/scripts.pory"
	walk_down
# 323 "data/maps/MtChimney/scripts.pory"
	walk_down
# 324 "data/maps/MtChimney/scripts.pory"
	walk_down
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_left
# 327 "data/maps/MtChimney/scripts.pory"
	walk_left
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_down
# 330 "data/maps/MtChimney/scripts.pory"
	step_end
# 331 "data/maps/MtChimney/scripts.pory"

# 332 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 333 "data/maps/MtChimney/scripts.pory"
	walk_right
# 334 "data/maps/MtChimney/scripts.pory"
	walk_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_down
# 336 "data/maps/MtChimney/scripts.pory"
	walk_down
# 337 "data/maps/MtChimney/scripts.pory"
	walk_down
# 338 "data/maps/MtChimney/scripts.pory"
	walk_left
# 339 "data/maps/MtChimney/scripts.pory"
	walk_left
# 340 "data/maps/MtChimney/scripts.pory"
	walk_left
# 341 "data/maps/MtChimney/scripts.pory"
	walk_left
# 342 "data/maps/MtChimney/scripts.pory"
	walk_left
# 343 "data/maps/MtChimney/scripts.pory"
	walk_down
# 344 "data/maps/MtChimney/scripts.pory"
	walk_down
# 345 "data/maps/MtChimney/scripts.pory"
	walk_down
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	step_end
# 348 "data/maps/MtChimney/scripts.pory"

# 349 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 350 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 351 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 352 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 353 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 354 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 355 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 356 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_left
# 360 "data/maps/MtChimney/scripts.pory"
	walk_left
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_left
# 365 "data/maps/MtChimney/scripts.pory"
	walk_left
# 366 "data/maps/MtChimney/scripts.pory"
	walk_down
# 367 "data/maps/MtChimney/scripts.pory"
	walk_down
# 368 "data/maps/MtChimney/scripts.pory"
	walk_left
# 369 "data/maps/MtChimney/scripts.pory"
	walk_left
# 370 "data/maps/MtChimney/scripts.pory"
	walk_left
# 371 "data/maps/MtChimney/scripts.pory"
	walk_left
# 372 "data/maps/MtChimney/scripts.pory"
	walk_left
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	step_end
# 375 "data/maps/MtChimney/scripts.pory"

# 376 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 377 "data/maps/MtChimney/scripts.pory"
	delay_16
# 378 "data/maps/MtChimney/scripts.pory"
	delay_16
# 379 "data/maps/MtChimney/scripts.pory"
	delay_16
# 380 "data/maps/MtChimney/scripts.pory"
	walk_down
# 381 "data/maps/MtChimney/scripts.pory"
	walk_down
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	walk_left
# 384 "data/maps/MtChimney/scripts.pory"
	walk_left
# 385 "data/maps/MtChimney/scripts.pory"
	walk_left
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	step_end
# 388 "data/maps/MtChimney/scripts.pory"

# 389 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 390 "data/maps/MtChimney/scripts.pory"
	delay_16
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	walk_down
# 394 "data/maps/MtChimney/scripts.pory"
	walk_down
# 395 "data/maps/MtChimney/scripts.pory"
	walk_down
# 396 "data/maps/MtChimney/scripts.pory"
	walk_left
# 397 "data/maps/MtChimney/scripts.pory"
	walk_left
# 398 "data/maps/MtChimney/scripts.pory"
	walk_left
# 399 "data/maps/MtChimney/scripts.pory"
	walk_left
# 400 "data/maps/MtChimney/scripts.pory"
	walk_left
# 401 "data/maps/MtChimney/scripts.pory"
	walk_down
# 402 "data/maps/MtChimney/scripts.pory"
	walk_down
# 403 "data/maps/MtChimney/scripts.pory"
	walk_down
# 404 "data/maps/MtChimney/scripts.pory"
	walk_down
# 405 "data/maps/MtChimney/scripts.pory"
	step_end
# 406 "data/maps/MtChimney/scripts.pory"

# 407 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 408 "data/maps/MtChimney/scripts.pory"
	delay_16
# 409 "data/maps/MtChimney/scripts.pory"
	walk_left
# 410 "data/maps/MtChimney/scripts.pory"
	walk_left
# 411 "data/maps/MtChimney/scripts.pory"
	walk_down
# 412 "data/maps/MtChimney/scripts.pory"
	walk_down
# 413 "data/maps/MtChimney/scripts.pory"
	walk_down
# 414 "data/maps/MtChimney/scripts.pory"
	walk_left
# 415 "data/maps/MtChimney/scripts.pory"
	walk_left
# 416 "data/maps/MtChimney/scripts.pory"
	walk_down
# 417 "data/maps/MtChimney/scripts.pory"
	walk_down
# 418 "data/maps/MtChimney/scripts.pory"
	walk_left
# 419 "data/maps/MtChimney/scripts.pory"
	walk_left
# 420 "data/maps/MtChimney/scripts.pory"
	walk_left
# 421 "data/maps/MtChimney/scripts.pory"
	walk_left
# 422 "data/maps/MtChimney/scripts.pory"
	walk_left
# 423 "data/maps/MtChimney/scripts.pory"
	walk_down
# 424 "data/maps/MtChimney/scripts.pory"
	step_end
# 425 "data/maps/MtChimney/scripts.pory"

# 426 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 427 "data/maps/MtChimney/scripts.pory"
	delay_16
# 428 "data/maps/MtChimney/scripts.pory"
	walk_down
# 429 "data/maps/MtChimney/scripts.pory"
	walk_left
# 430 "data/maps/MtChimney/scripts.pory"
	walk_left
# 431 "data/maps/MtChimney/scripts.pory"
	walk_left
# 432 "data/maps/MtChimney/scripts.pory"
	walk_left
# 433 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 434 "data/maps/MtChimney/scripts.pory"
	step_end
# 435 "data/maps/MtChimney/scripts.pory"

# 436 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 437 "data/maps/MtChimney/scripts.pory"
	walk_down
# 438 "data/maps/MtChimney/scripts.pory"
	walk_down
# 439 "data/maps/MtChimney/scripts.pory"
	walk_down
# 440 "data/maps/MtChimney/scripts.pory"
	walk_down
# 441 "data/maps/MtChimney/scripts.pory"
	walk_left
# 442 "data/maps/MtChimney/scripts.pory"
	walk_left
# 443 "data/maps/MtChimney/scripts.pory"
	walk_left
# 444 "data/maps/MtChimney/scripts.pory"
	walk_left
# 445 "data/maps/MtChimney/scripts.pory"
	walk_left
# 446 "data/maps/MtChimney/scripts.pory"
	walk_down
# 447 "data/maps/MtChimney/scripts.pory"
	walk_down
# 448 "data/maps/MtChimney/scripts.pory"
	walk_down
# 449 "data/maps/MtChimney/scripts.pory"
	walk_down
# 450 "data/maps/MtChimney/scripts.pory"
	step_end
# 451 "data/maps/MtChimney/scripts.pory"

# 452 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 453 "data/maps/MtChimney/scripts.pory"
	walk_down
# 454 "data/maps/MtChimney/scripts.pory"
	step_end
# 455 "data/maps/MtChimney/scripts.pory"

# 456 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 457 "data/maps/MtChimney/scripts.pory"
	walk_down
# 458 "data/maps/MtChimney/scripts.pory"
	walk_down
# 459 "data/maps/MtChimney/scripts.pory"
	walk_down
# 460 "data/maps/MtChimney/scripts.pory"
	walk_down
# 461 "data/maps/MtChimney/scripts.pory"
	walk_down
# 462 "data/maps/MtChimney/scripts.pory"
	walk_down
# 463 "data/maps/MtChimney/scripts.pory"
	walk_down
# 464 "data/maps/MtChimney/scripts.pory"
	step_end
# 465 "data/maps/MtChimney/scripts.pory"

# 466 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 467 "data/maps/MtChimney/scripts.pory"
	delay_16
# 468 "data/maps/MtChimney/scripts.pory"
	delay_16
# 469 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 470 "data/maps/MtChimney/scripts.pory"
	delay_16
# 471 "data/maps/MtChimney/scripts.pory"
	walk_down
# 472 "data/maps/MtChimney/scripts.pory"
	walk_down
# 473 "data/maps/MtChimney/scripts.pory"
	walk_down
# 474 "data/maps/MtChimney/scripts.pory"
	walk_down
# 475 "data/maps/MtChimney/scripts.pory"
	walk_down
# 476 "data/maps/MtChimney/scripts.pory"
	step_end
# 477 "data/maps/MtChimney/scripts.pory"

# 478 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 479 "data/maps/MtChimney/scripts.pory"
	delay_16
# 480 "data/maps/MtChimney/scripts.pory"
	delay_16
# 481 "data/maps/MtChimney/scripts.pory"
	delay_16
# 482 "data/maps/MtChimney/scripts.pory"
	delay_16
# 483 "data/maps/MtChimney/scripts.pory"
	delay_16
# 484 "data/maps/MtChimney/scripts.pory"
	delay_16
# 485 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 486 "data/maps/MtChimney/scripts.pory"
	delay_16
# 487 "data/maps/MtChimney/scripts.pory"
	walk_down
# 488 "data/maps/MtChimney/scripts.pory"
	walk_down
# 489 "data/maps/MtChimney/scripts.pory"
	step_end
# 490 "data/maps/MtChimney/scripts.pory"

# 491 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 492 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 493 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 494 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 495 "data/maps/MtChimney/scripts.pory"
	face_right
# 496 "data/maps/MtChimney/scripts.pory"
	step_end
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 499 "data/maps/MtChimney/scripts.pory"
	walk_left
# 500 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 501 "data/maps/MtChimney/scripts.pory"
	delay_16
# 502 "data/maps/MtChimney/scripts.pory"
	step_end
# 503 "data/maps/MtChimney/scripts.pory"

# 504 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 505 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 506 "data/maps/MtChimney/scripts.pory"
	end
# 507 "data/maps/MtChimney/scripts.pory"

# 508 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 510 "data/maps/MtChimney/scripts.pory"
	end
# 511 "data/maps/MtChimney/scripts.pory"

# 512 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 513 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 514 "data/maps/MtChimney/scripts.pory"
	end
# 515 "data/maps/MtChimney/scripts.pory"

# 516 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 517 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 518 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 519 "data/maps/MtChimney/scripts.pory"
	end
# 520 "data/maps/MtChimney/scripts.pory"

# 521 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 522 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 523 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 524 "data/maps/MtChimney/scripts.pory"
	end
# 525 "data/maps/MtChimney/scripts.pory"

# 526 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 527 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 528 "data/maps/MtChimney/scripts.pory"
	end
# 529 "data/maps/MtChimney/scripts.pory"

# 530 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 531 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 532 "data/maps/MtChimney/scripts.pory"
	end
# 533 "data/maps/MtChimney/scripts.pory"

# 534 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 535 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 536 "data/maps/MtChimney/scripts.pory"
	end
# 537 "data/maps/MtChimney/scripts.pory"

# 538 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 539 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 540 "data/maps/MtChimney/scripts.pory"
	end
# 541 "data/maps/MtChimney/scripts.pory"

# 542 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 543 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 544 "data/maps/MtChimney/scripts.pory"
	end
# 545 "data/maps/MtChimney/scripts.pory"

# 546 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 547 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 548 "data/maps/MtChimney/scripts.pory"
	end
# 549 "data/maps/MtChimney/scripts.pory"

# 550 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 551 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 552 "data/maps/MtChimney/scripts.pory"
	end
# 553 "data/maps/MtChimney/scripts.pory"

# 554 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 555 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 556 "data/maps/MtChimney/scripts.pory"
	end
# 557 "data/maps/MtChimney/scripts.pory"

# 558 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 559 "data/maps/MtChimney/scripts.pory"
	lockall
# 560 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_RECIEVED_MT_CHIMNEY_SUN_STONE, MtChimney_EventScript_SunStone
# 561 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_HIDE_MT_CHIMNEY_TRAINERS, MtChimney_EventScript_MachineOff
# 562 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 563 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 564 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 565 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 566 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 567 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 568 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 569 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 570 "data/maps/MtChimney/scripts.pory"
	releaseall
# 571 "data/maps/MtChimney/scripts.pory"
	end
# 572 "data/maps/MtChimney/scripts.pory"

# 573 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 574 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 575 "data/maps/MtChimney/scripts.pory"
	releaseall
# 576 "data/maps/MtChimney/scripts.pory"
	end
# 577 "data/maps/MtChimney/scripts.pory"

# 578 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 579 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 580 "data/maps/MtChimney/scripts.pory"
	releaseall
# 581 "data/maps/MtChimney/scripts.pory"
	end
# 582 "data/maps/MtChimney/scripts.pory"

# 583 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 584 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 585 "data/maps/MtChimney/scripts.pory"
	releaseall
# 586 "data/maps/MtChimney/scripts.pory"
	end
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 589 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 590 "data/maps/MtChimney/scripts.pory"
	end
# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 593 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat
# 594 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 595 "data/maps/MtChimney/scripts.pory"
	release
# 596 "data/maps/MtChimney/scripts.pory"
	end
# 597 "data/maps/MtChimney/scripts.pory"

# 598 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 599 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 600 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 601 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 602 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 603 "data/maps/MtChimney/scripts.pory"
	release
# 604 "data/maps/MtChimney/scripts.pory"
	end
# 605 "data/maps/MtChimney/scripts.pory"

# 606 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 607 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 608 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 609 "data/maps/MtChimney/scripts.pory"
	end
# 610 "data/maps/MtChimney/scripts.pory"

# 611 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 612 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 613 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 614 "data/maps/MtChimney/scripts.pory"
	end
# 615 "data/maps/MtChimney/scripts.pory"

# 616 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 617 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 618 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 619 "data/maps/MtChimney/scripts.pory"
	end
# 620 "data/maps/MtChimney/scripts.pory"

# 621 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 622 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 623 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 624 "data/maps/MtChimney/scripts.pory"
	end
# 625 "data/maps/MtChimney/scripts.pory"

# 626 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 627 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 628 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 629 "data/maps/MtChimney/scripts.pory"
	end
# 630 "data/maps/MtChimney/scripts.pory"

# 631 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 632 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat
# 633 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 634 "data/maps/MtChimney/scripts.pory"
	release
# 635 "data/maps/MtChimney/scripts.pory"
	end
# 636 "data/maps/MtChimney/scripts.pory"

# 637 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 638 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 639 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 640 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 641 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 642 "data/maps/MtChimney/scripts.pory"
	release
# 643 "data/maps/MtChimney/scripts.pory"
	end
# 644 "data/maps/MtChimney/scripts.pory"

# 645 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 646 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 647 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 648 "data/maps/MtChimney/scripts.pory"
	end
# 649 "data/maps/MtChimney/scripts.pory"

# 650 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 651 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 655 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 656 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 658 "data/maps/MtChimney/scripts.pory"

# 659 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 660 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 661 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 666 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 667 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 671 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 672 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "humankind and Pokémon!\p"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 681 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 682 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 686 "data/maps/MtChimney/scripts.pory"

# 687 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 688 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 689 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 690 "data/maps/MtChimney/scripts.pory"

# 691 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 692 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 693 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 694 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 697 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 699 "data/maps/MtChimney/scripts.pory"

# 700 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 701 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 706 "data/maps/MtChimney/scripts.pory"

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 708 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 710 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 711 "data/maps/MtChimney/scripts.pory"

# 712 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 713 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 714 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 715 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 716 "data/maps/MtChimney/scripts.pory"

# 717 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 718 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 721 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 722 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 723 "data/maps/MtChimney/scripts.pory"

# 724 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 725 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 726 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 727 "data/maps/MtChimney/scripts.pory"

# 728 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 729 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 735 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 738 "data/maps/MtChimney/scripts.pory"

# 739 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 740 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 741 "data/maps/MtChimney/scripts.pory"

# 742 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 743 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 749 "data/maps/MtChimney/scripts.pory"

# 750 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 751 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 752 "data/maps/MtChimney/scripts.pory"

# 753 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 754 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 755 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 757 "data/maps/MtChimney/scripts.pory"

# 758 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 759 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 763 "data/maps/MtChimney/scripts.pory"

# 764 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 765 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 770 "data/maps/MtChimney/scripts.pory"

# 771 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 772 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 773 "data/maps/MtChimney/scripts.pory"

# 774 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 775 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 776 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 783 "data/maps/MtChimney/scripts.pory"

# 784 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 788 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 789 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 790 "data/maps/MtChimney/scripts.pory"

# 791 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 792 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 793 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 797 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 798 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 800 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 801 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 802 "data/maps/MtChimney/scripts.pory"

# 803 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 805 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 806 "data/maps/MtChimney/scripts.pory"

# 807 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 808 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 809 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER Pokémon!$"
# 810 "data/maps/MtChimney/scripts.pory"

# 811 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 812 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 813 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 814 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 815 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 816 "data/maps/MtChimney/scripts.pory"

# 817 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 818 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 819 "data/maps/MtChimney/scripts.pory"

# 820 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 821 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 823 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 824 "data/maps/MtChimney/scripts.pory"

# 825 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 826 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 827 "data/maps/MtChimney/scripts.pory"

# 828 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 829 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 830 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 831 "data/maps/MtChimney/scripts.pory"

# 832 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 833 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 834 "data/maps/MtChimney/scripts.pory"

# 835 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 836 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 838 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 839 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 840 "data/maps/MtChimney/scripts.pory"

# 841 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 842 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 843 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 844 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 845 "data/maps/MtChimney/scripts.pory"

# 846 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 847 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 848 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 849 "data/maps/MtChimney/scripts.pory"

# 850 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 851 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 852 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 853 "data/maps/MtChimney/scripts.pory"

# 854 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 855 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 856 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 857 "data/maps/MtChimney/scripts.pory"

# 858 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 859 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} Jagged Pass\n"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "Lavaridge Town Ahead$"
# 861 "data/maps/MtChimney/scripts.pory"

# 862 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 863 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 865 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 866 "data/maps/MtChimney/scripts.pory"

# 867 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 868 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 869 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 870 "data/maps/MtChimney/scripts.pory"

# 871 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 872 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 873 "data/maps/MtChimney/scripts.pory"
	.string "myself an Expert now, can I?$"
# 874 "data/maps/MtChimney/scripts.pory"

# 875 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 876 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 877 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 878 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 880 "data/maps/MtChimney/scripts.pory"

# 881 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 882 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 883 "data/maps/MtChimney/scripts.pory"
	.string "of your Pokémon, why, you should be\l"
# 884 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 885 "data/maps/MtChimney/scripts.pory"

# 886 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 887 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 888 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 889 "data/maps/MtChimney/scripts.pory"

# 890 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 891 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 892 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your Pokémon.$"
# 893 "data/maps/MtChimney/scripts.pory"

# 894 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 895 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 896 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 897 "data/maps/MtChimney/scripts.pory"

# 898 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 899 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 900 "data/maps/MtChimney/scripts.pory"

# 901 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 902 "data/maps/MtChimney/scripts.pory"
	.string "The heat of Mt. Chimney warms\n"
# 903 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 904 "data/maps/MtChimney/scripts.pory"

# 905 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 906 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to Mt. Chimney.\n"
# 907 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my Pokémon battle!$"
# 908 "data/maps/MtChimney/scripts.pory"

# 909 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 910 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 911 "data/maps/MtChimney/scripts.pory"
	.string "It's like a Mt. Chimney eruption!$"
# 912 "data/maps/MtChimney/scripts.pory"

# 913 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 914 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 915 "data/maps/MtChimney/scripts.pory"
	.string "Mt. Chimney. It would be a shame if\l"
# 916 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 917 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 918 "data/maps/MtChimney/scripts.pory"
	.string "Apples as souvenirs.$"
# 919 "data/maps/MtChimney/scripts.pory"

# 920 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 921 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 922 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 923 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 924 "data/maps/MtChimney/scripts.pory"

# 925 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 926 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 927 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 928 "data/maps/MtChimney/scripts.pory"

# 929 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 930 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 931 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 932 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 933 "data/maps/MtChimney/scripts.pory"

# 934 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 935 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 936 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 937 "data/maps/MtChimney/scripts.pory"

# 938 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 939 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 940 "data/maps/MtChimney/scripts.pory"

# 941 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 942 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in Lavaridge\n"
# 943 "data/maps/MtChimney/scripts.pory"
	.string "Hot Spring with the locals!$"
# 944 "data/maps/MtChimney/scripts.pory"

# 945 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 946 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 947 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my Pokénav.$"
# 948 "data/maps/MtChimney/scripts.pory"

# 949 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 950 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 951 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 952 "data/maps/MtChimney/scripts.pory"

# 953 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 954 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 955 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 956 "data/maps/MtChimney/scripts.pory"

# 957 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 958 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 959 "data/maps/MtChimney/scripts.pory"
	.string "I'm overdressed for these parts.$"

MtChimney_EventScript_Mira_Text_0:
# 20 "data/maps/MtChimney/scripts.pory"
	.string "You must have a very strong bond with\n"
	.string "your Pokémon, {PLAYER}.\p"
	.string "I hope I can be like you one day.$"

MtChimney_EventScript_MiraDefeated_Text_0:
# 48 "data/maps/MtChimney/scripts.pory"
	.string "You must have a very strong bond with\n"
	.string "your Pokémon, {PLAYER}.\p"
	.string "I hope I can be like you one day.\p"
	.string "Oh! I found this on the ground,\n"
	.string "you should take it!$"

MtChimney_EventScript_AppleVendor_Text_0:
# 64 "data/maps/MtChimney/scripts.pory"
	.string "That was the last apple, I sold the\n"
	.string "rest to a market in Slateport City!$"

MtChimney_EventScript_AppleVendor_Text_1:
# 68 "data/maps/MtChimney/scripts.pory"
	.string "Apples grown on Mt. Chimney are a\n"
	.string "local specialty!\p"
	.string "The soot makes them grow very tart\n"
	.string "and sweet.\p"
	.string "Would you like one? It's just ¥200.$"

MtChimney_EventScript_AppleVendor_Text_2:
# 74 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"

MtChimney_EventScript_AppleVendor_Text_3:
# 89 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"

MtChimney_EventScript_SunStone_Text_0:
# 98 "data/maps/MtChimney/scripts.pory"
	.string "This machine appears to be drawing\n"
	.string "power from a glowing stone.\p"
	.string "Take it?$"

MtChimney_Text_MiraIntro::
# 28 "data/maps/MtChimney/scripts.pory"
	.string "Hi there!\n"
	.string "I'm Mira.\p"
	.string "I was trying to get to Lavaridge Town,\n"
	.string "but Jagged Pass is scary! I kept\l"
	.string "getting lost…\p"
	.string "Now I'm bored, can we battle?$"

MtChimney_EventScript_MiraDefeat::
# 37 "data/maps/MtChimney/scripts.pory"
	.string "Oh, no! You're too much for me!$"
