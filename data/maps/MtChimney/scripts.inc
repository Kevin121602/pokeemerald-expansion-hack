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


# 97 "data/maps/MtChimney/scripts.pory"

# 98 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 99 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 100 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 101 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 102 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 103 "data/maps/MtChimney/scripts.pory"

# 104 "data/maps/MtChimney/scripts.pory"

# 105 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 106 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 107 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 108 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 109 "data/maps/MtChimney/scripts.pory"

# 110 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 111 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 112 "data/maps/MtChimney/scripts.pory"
	end
# 113 "data/maps/MtChimney/scripts.pory"

# 114 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 115 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 116 "data/maps/MtChimney/scripts.pory"
	end
# 117 "data/maps/MtChimney/scripts.pory"

# 118 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 119 "data/maps/MtChimney/scripts.pory"
	lock
# 120 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 121 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 122 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 123 "data/maps/MtChimney/scripts.pory"
	closemessage
# 124 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 125 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 126 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 127 "data/maps/MtChimney/scripts.pory"
	release
# 128 "data/maps/MtChimney/scripts.pory"
	end
# 129 "data/maps/MtChimney/scripts.pory"

# 130 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 131 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 132 "data/maps/MtChimney/scripts.pory"
	return
# 133 "data/maps/MtChimney/scripts.pory"

# 134 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 135 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 136 "data/maps/MtChimney/scripts.pory"
	return
# 137 "data/maps/MtChimney/scripts.pory"

# 138 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 139 "data/maps/MtChimney/scripts.pory"
	lockall
# 140 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 141 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 142 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 143 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 144 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 145 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 146 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 147 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 148 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 149 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 150 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 151 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 152 "data/maps/MtChimney/scripts.pory"
	closemessage
# 153 "data/maps/MtChimney/scripts.pory"
	delay 30
# 154 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 155 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 156 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 157 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 158 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 159 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 160 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 161 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 162 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 163 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 164 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 165 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 166 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 167 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 168 "data/maps/MtChimney/scripts.pory"
	closemessage
# 169 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 170 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 171 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 172 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 173 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 174 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 175 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 176 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 177 "data/maps/MtChimney/scripts.pory"
	releaseall
# 178 "data/maps/MtChimney/scripts.pory"
	end
# 179 "data/maps/MtChimney/scripts.pory"

# 180 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 181 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 182 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 183 "data/maps/MtChimney/scripts.pory"
	return
# 184 "data/maps/MtChimney/scripts.pory"

# 185 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 186 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 187 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 188 "data/maps/MtChimney/scripts.pory"
	return
# 189 "data/maps/MtChimney/scripts.pory"

# 190 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 191 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 192 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 193 "data/maps/MtChimney/scripts.pory"
	return
# 194 "data/maps/MtChimney/scripts.pory"

# 195 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 196 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 197 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 198 "data/maps/MtChimney/scripts.pory"
	return
# 199 "data/maps/MtChimney/scripts.pory"

# 200 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 201 "data/maps/MtChimney/scripts.pory"
	lock
# 202 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 203 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 204 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 205 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 206 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 207 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 208 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 209 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 210 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 211 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 212 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 213 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 214 "data/maps/MtChimney/scripts.pory"
	release
# 215 "data/maps/MtChimney/scripts.pory"
	end
# 216 "data/maps/MtChimney/scripts.pory"

# 217 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 218 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 219 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 220 "data/maps/MtChimney/scripts.pory"
	release
# 221 "data/maps/MtChimney/scripts.pory"
	end
# 222 "data/maps/MtChimney/scripts.pory"

# 223 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 224 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 225 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 226 "data/maps/MtChimney/scripts.pory"
	return
# 227 "data/maps/MtChimney/scripts.pory"

# 228 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 229 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 230 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 231 "data/maps/MtChimney/scripts.pory"
	release
# 232 "data/maps/MtChimney/scripts.pory"
	end
# 233 "data/maps/MtChimney/scripts.pory"

# 234 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 235 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 236 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 237 "data/maps/MtChimney/scripts.pory"
	release
# 238 "data/maps/MtChimney/scripts.pory"
	end
# 239 "data/maps/MtChimney/scripts.pory"

# 240 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 241 "data/maps/MtChimney/scripts.pory"
	walk_up
# 242 "data/maps/MtChimney/scripts.pory"
	walk_up
# 243 "data/maps/MtChimney/scripts.pory"
	walk_up
# 244 "data/maps/MtChimney/scripts.pory"
	walk_up
# 245 "data/maps/MtChimney/scripts.pory"
	walk_up
# 246 "data/maps/MtChimney/scripts.pory"
	walk_up
# 247 "data/maps/MtChimney/scripts.pory"
	walk_right
# 248 "data/maps/MtChimney/scripts.pory"
	step_end
# 249 "data/maps/MtChimney/scripts.pory"

# 250 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 251 "data/maps/MtChimney/scripts.pory"
	walk_left
# 252 "data/maps/MtChimney/scripts.pory"
	walk_down
# 253 "data/maps/MtChimney/scripts.pory"
	walk_down
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_down
# 259 "data/maps/MtChimney/scripts.pory"
	step_end
# 260 "data/maps/MtChimney/scripts.pory"

# 261 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 262 "data/maps/MtChimney/scripts.pory"
	walk_up
# 263 "data/maps/MtChimney/scripts.pory"
	walk_up
# 264 "data/maps/MtChimney/scripts.pory"
	walk_up
# 265 "data/maps/MtChimney/scripts.pory"
	walk_up
# 266 "data/maps/MtChimney/scripts.pory"
	walk_up
# 267 "data/maps/MtChimney/scripts.pory"
	walk_right
# 268 "data/maps/MtChimney/scripts.pory"
	walk_right
# 269 "data/maps/MtChimney/scripts.pory"
	step_end
# 270 "data/maps/MtChimney/scripts.pory"

# 271 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 272 "data/maps/MtChimney/scripts.pory"
	walk_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_left
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	walk_down
# 276 "data/maps/MtChimney/scripts.pory"
	walk_down
# 277 "data/maps/MtChimney/scripts.pory"
	walk_down
# 278 "data/maps/MtChimney/scripts.pory"
	walk_down
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	step_end
# 282 "data/maps/MtChimney/scripts.pory"

# 283 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 284 "data/maps/MtChimney/scripts.pory"
	walk_down
# 285 "data/maps/MtChimney/scripts.pory"
	walk_down
# 286 "data/maps/MtChimney/scripts.pory"
	walk_down
# 287 "data/maps/MtChimney/scripts.pory"
	walk_down
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_left
# 290 "data/maps/MtChimney/scripts.pory"
	walk_left
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	walk_down
# 293 "data/maps/MtChimney/scripts.pory"
	walk_down
# 294 "data/maps/MtChimney/scripts.pory"
	walk_down
# 295 "data/maps/MtChimney/scripts.pory"
	walk_left
# 296 "data/maps/MtChimney/scripts.pory"
	walk_left
# 297 "data/maps/MtChimney/scripts.pory"
	walk_left
# 298 "data/maps/MtChimney/scripts.pory"
	walk_left
# 299 "data/maps/MtChimney/scripts.pory"
	walk_left
# 300 "data/maps/MtChimney/scripts.pory"
	walk_down
# 301 "data/maps/MtChimney/scripts.pory"
	step_end
# 302 "data/maps/MtChimney/scripts.pory"

# 303 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 304 "data/maps/MtChimney/scripts.pory"
	walk_down
# 305 "data/maps/MtChimney/scripts.pory"
	walk_down
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/MtChimney/scripts.pory"
	walk_left
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
# 311 "data/maps/MtChimney/scripts.pory"
	walk_down
# 312 "data/maps/MtChimney/scripts.pory"
	step_end
# 313 "data/maps/MtChimney/scripts.pory"

# 314 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 315 "data/maps/MtChimney/scripts.pory"
	walk_right
# 316 "data/maps/MtChimney/scripts.pory"
	walk_down
# 317 "data/maps/MtChimney/scripts.pory"
	walk_down
# 318 "data/maps/MtChimney/scripts.pory"
	walk_down
# 319 "data/maps/MtChimney/scripts.pory"
	walk_down
# 320 "data/maps/MtChimney/scripts.pory"
	walk_left
# 321 "data/maps/MtChimney/scripts.pory"
	walk_left
# 322 "data/maps/MtChimney/scripts.pory"
	walk_left
# 323 "data/maps/MtChimney/scripts.pory"
	walk_left
# 324 "data/maps/MtChimney/scripts.pory"
	walk_left
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_down
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_down
# 329 "data/maps/MtChimney/scripts.pory"
	step_end
# 330 "data/maps/MtChimney/scripts.pory"

# 331 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 332 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 333 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 334 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 335 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 336 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 337 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 338 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 339 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 340 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
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
	walk_left
# 347 "data/maps/MtChimney/scripts.pory"
	walk_left
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	walk_left
# 351 "data/maps/MtChimney/scripts.pory"
	walk_left
# 352 "data/maps/MtChimney/scripts.pory"
	walk_left
# 353 "data/maps/MtChimney/scripts.pory"
	walk_left
# 354 "data/maps/MtChimney/scripts.pory"
	walk_left
# 355 "data/maps/MtChimney/scripts.pory"
	walk_down
# 356 "data/maps/MtChimney/scripts.pory"
	step_end
# 357 "data/maps/MtChimney/scripts.pory"

# 358 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused5:
# 359 "data/maps/MtChimney/scripts.pory"
	delay_16
# 360 "data/maps/MtChimney/scripts.pory"
	delay_16
# 361 "data/maps/MtChimney/scripts.pory"
	delay_16
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	walk_down
# 364 "data/maps/MtChimney/scripts.pory"
	walk_down
# 365 "data/maps/MtChimney/scripts.pory"
	walk_left
# 366 "data/maps/MtChimney/scripts.pory"
	walk_left
# 367 "data/maps/MtChimney/scripts.pory"
	walk_left
# 368 "data/maps/MtChimney/scripts.pory"
	walk_down
# 369 "data/maps/MtChimney/scripts.pory"
	step_end
# 370 "data/maps/MtChimney/scripts.pory"

# 371 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 372 "data/maps/MtChimney/scripts.pory"
	delay_16
# 373 "data/maps/MtChimney/scripts.pory"
	walk_left
# 374 "data/maps/MtChimney/scripts.pory"
	walk_down
# 375 "data/maps/MtChimney/scripts.pory"
	walk_down
# 376 "data/maps/MtChimney/scripts.pory"
	walk_down
# 377 "data/maps/MtChimney/scripts.pory"
	walk_down
# 378 "data/maps/MtChimney/scripts.pory"
	walk_left
# 379 "data/maps/MtChimney/scripts.pory"
	walk_left
# 380 "data/maps/MtChimney/scripts.pory"
	walk_left
# 381 "data/maps/MtChimney/scripts.pory"
	walk_left
# 382 "data/maps/MtChimney/scripts.pory"
	walk_left
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_down
# 387 "data/maps/MtChimney/scripts.pory"
	step_end
# 388 "data/maps/MtChimney/scripts.pory"

# 389 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 390 "data/maps/MtChimney/scripts.pory"
	delay_16
# 391 "data/maps/MtChimney/scripts.pory"
	walk_left
# 392 "data/maps/MtChimney/scripts.pory"
	walk_left
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
	walk_down
# 399 "data/maps/MtChimney/scripts.pory"
	walk_down
# 400 "data/maps/MtChimney/scripts.pory"
	walk_left
# 401 "data/maps/MtChimney/scripts.pory"
	walk_left
# 402 "data/maps/MtChimney/scripts.pory"
	walk_left
# 403 "data/maps/MtChimney/scripts.pory"
	walk_left
# 404 "data/maps/MtChimney/scripts.pory"
	walk_left
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
	step_end
# 407 "data/maps/MtChimney/scripts.pory"

# 408 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused8:
# 409 "data/maps/MtChimney/scripts.pory"
	delay_16
# 410 "data/maps/MtChimney/scripts.pory"
	walk_down
# 411 "data/maps/MtChimney/scripts.pory"
	walk_left
# 412 "data/maps/MtChimney/scripts.pory"
	walk_left
# 413 "data/maps/MtChimney/scripts.pory"
	walk_left
# 414 "data/maps/MtChimney/scripts.pory"
	walk_left
# 415 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 416 "data/maps/MtChimney/scripts.pory"
	step_end
# 417 "data/maps/MtChimney/scripts.pory"

# 418 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 419 "data/maps/MtChimney/scripts.pory"
	walk_down
# 420 "data/maps/MtChimney/scripts.pory"
	walk_down
# 421 "data/maps/MtChimney/scripts.pory"
	walk_down
# 422 "data/maps/MtChimney/scripts.pory"
	walk_down
# 423 "data/maps/MtChimney/scripts.pory"
	walk_left
# 424 "data/maps/MtChimney/scripts.pory"
	walk_left
# 425 "data/maps/MtChimney/scripts.pory"
	walk_left
# 426 "data/maps/MtChimney/scripts.pory"
	walk_left
# 427 "data/maps/MtChimney/scripts.pory"
	walk_left
# 428 "data/maps/MtChimney/scripts.pory"
	walk_down
# 429 "data/maps/MtChimney/scripts.pory"
	walk_down
# 430 "data/maps/MtChimney/scripts.pory"
	walk_down
# 431 "data/maps/MtChimney/scripts.pory"
	walk_down
# 432 "data/maps/MtChimney/scripts.pory"
	step_end
# 433 "data/maps/MtChimney/scripts.pory"

# 434 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 435 "data/maps/MtChimney/scripts.pory"
	walk_down
# 436 "data/maps/MtChimney/scripts.pory"
	step_end
# 437 "data/maps/MtChimney/scripts.pory"

# 438 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 439 "data/maps/MtChimney/scripts.pory"
	walk_down
# 440 "data/maps/MtChimney/scripts.pory"
	walk_down
# 441 "data/maps/MtChimney/scripts.pory"
	walk_down
# 442 "data/maps/MtChimney/scripts.pory"
	walk_down
# 443 "data/maps/MtChimney/scripts.pory"
	walk_down
# 444 "data/maps/MtChimney/scripts.pory"
	walk_down
# 445 "data/maps/MtChimney/scripts.pory"
	walk_down
# 446 "data/maps/MtChimney/scripts.pory"
	step_end
# 447 "data/maps/MtChimney/scripts.pory"

# 448 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 449 "data/maps/MtChimney/scripts.pory"
	delay_16
# 450 "data/maps/MtChimney/scripts.pory"
	delay_16
# 451 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 452 "data/maps/MtChimney/scripts.pory"
	delay_16
# 453 "data/maps/MtChimney/scripts.pory"
	walk_down
# 454 "data/maps/MtChimney/scripts.pory"
	walk_down
# 455 "data/maps/MtChimney/scripts.pory"
	walk_down
# 456 "data/maps/MtChimney/scripts.pory"
	walk_down
# 457 "data/maps/MtChimney/scripts.pory"
	walk_down
# 458 "data/maps/MtChimney/scripts.pory"
	step_end
# 459 "data/maps/MtChimney/scripts.pory"

# 460 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 461 "data/maps/MtChimney/scripts.pory"
	delay_16
# 462 "data/maps/MtChimney/scripts.pory"
	delay_16
# 463 "data/maps/MtChimney/scripts.pory"
	delay_16
# 464 "data/maps/MtChimney/scripts.pory"
	delay_16
# 465 "data/maps/MtChimney/scripts.pory"
	delay_16
# 466 "data/maps/MtChimney/scripts.pory"
	delay_16
# 467 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 468 "data/maps/MtChimney/scripts.pory"
	delay_16
# 469 "data/maps/MtChimney/scripts.pory"
	walk_down
# 470 "data/maps/MtChimney/scripts.pory"
	walk_down
# 471 "data/maps/MtChimney/scripts.pory"
	step_end
# 472 "data/maps/MtChimney/scripts.pory"

# 473 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 474 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 475 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 476 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 477 "data/maps/MtChimney/scripts.pory"
	face_right
# 478 "data/maps/MtChimney/scripts.pory"
	step_end
# 479 "data/maps/MtChimney/scripts.pory"

# 480 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 481 "data/maps/MtChimney/scripts.pory"
	walk_left
# 482 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 483 "data/maps/MtChimney/scripts.pory"
	delay_16
# 484 "data/maps/MtChimney/scripts.pory"
	step_end
# 485 "data/maps/MtChimney/scripts.pory"

# 486 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 487 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 488 "data/maps/MtChimney/scripts.pory"
	end
# 489 "data/maps/MtChimney/scripts.pory"

# 490 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 491 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 492 "data/maps/MtChimney/scripts.pory"
	end
# 493 "data/maps/MtChimney/scripts.pory"

# 494 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 495 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 496 "data/maps/MtChimney/scripts.pory"
	end
# 497 "data/maps/MtChimney/scripts.pory"

# 498 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 499 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 500 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 501 "data/maps/MtChimney/scripts.pory"
	end
# 502 "data/maps/MtChimney/scripts.pory"

# 503 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 504 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 505 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/MtChimney/scripts.pory"
	end
# 507 "data/maps/MtChimney/scripts.pory"

# 508 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 510 "data/maps/MtChimney/scripts.pory"
	end
# 511 "data/maps/MtChimney/scripts.pory"

# 512 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 513 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 514 "data/maps/MtChimney/scripts.pory"
	end
# 515 "data/maps/MtChimney/scripts.pory"

# 516 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 517 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 518 "data/maps/MtChimney/scripts.pory"
	end
# 519 "data/maps/MtChimney/scripts.pory"

# 520 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 521 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 522 "data/maps/MtChimney/scripts.pory"
	end
# 523 "data/maps/MtChimney/scripts.pory"

# 524 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 525 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 526 "data/maps/MtChimney/scripts.pory"
	end
# 527 "data/maps/MtChimney/scripts.pory"

# 528 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 529 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 530 "data/maps/MtChimney/scripts.pory"
	end
# 531 "data/maps/MtChimney/scripts.pory"

# 532 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 533 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 534 "data/maps/MtChimney/scripts.pory"
	end
# 535 "data/maps/MtChimney/scripts.pory"

# 536 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 537 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 538 "data/maps/MtChimney/scripts.pory"
	end
# 539 "data/maps/MtChimney/scripts.pory"

# 540 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 541 "data/maps/MtChimney/scripts.pory"
	lockall
# 542 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_HIDE_MT_CHIMNEY_TRAINERS, MtChimney_EventScript_MachineOff
# 543 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 544 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 545 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 546 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 547 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 548 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 549 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 550 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 551 "data/maps/MtChimney/scripts.pory"
	releaseall
# 552 "data/maps/MtChimney/scripts.pory"
	end
# 553 "data/maps/MtChimney/scripts.pory"

# 554 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 555 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 556 "data/maps/MtChimney/scripts.pory"
	releaseall
# 557 "data/maps/MtChimney/scripts.pory"
	end
# 558 "data/maps/MtChimney/scripts.pory"

# 559 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 560 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 561 "data/maps/MtChimney/scripts.pory"
	releaseall
# 562 "data/maps/MtChimney/scripts.pory"
	end
# 563 "data/maps/MtChimney/scripts.pory"

# 564 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 565 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 566 "data/maps/MtChimney/scripts.pory"
	releaseall
# 567 "data/maps/MtChimney/scripts.pory"
	end
# 568 "data/maps/MtChimney/scripts.pory"

# 569 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 570 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 571 "data/maps/MtChimney/scripts.pory"
	end
# 572 "data/maps/MtChimney/scripts.pory"

# 573 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 574 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat
# 575 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 576 "data/maps/MtChimney/scripts.pory"
	release
# 577 "data/maps/MtChimney/scripts.pory"
	end
# 578 "data/maps/MtChimney/scripts.pory"

# 579 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 580 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 581 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 582 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 583 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 584 "data/maps/MtChimney/scripts.pory"
	release
# 585 "data/maps/MtChimney/scripts.pory"
	end
# 586 "data/maps/MtChimney/scripts.pory"

# 587 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 588 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 589 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 590 "data/maps/MtChimney/scripts.pory"
	end
# 591 "data/maps/MtChimney/scripts.pory"

# 592 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 593 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 594 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 595 "data/maps/MtChimney/scripts.pory"
	end
# 596 "data/maps/MtChimney/scripts.pory"

# 597 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 598 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 599 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 600 "data/maps/MtChimney/scripts.pory"
	end
# 601 "data/maps/MtChimney/scripts.pory"

# 602 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 603 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 604 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 605 "data/maps/MtChimney/scripts.pory"
	end
# 606 "data/maps/MtChimney/scripts.pory"

# 607 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 608 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 609 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 610 "data/maps/MtChimney/scripts.pory"
	end
# 611 "data/maps/MtChimney/scripts.pory"

# 612 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 613 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat
# 614 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 615 "data/maps/MtChimney/scripts.pory"
	release
# 616 "data/maps/MtChimney/scripts.pory"
	end
# 617 "data/maps/MtChimney/scripts.pory"

# 618 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 619 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 620 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 621 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 622 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 623 "data/maps/MtChimney/scripts.pory"
	release
# 624 "data/maps/MtChimney/scripts.pory"
	end
# 625 "data/maps/MtChimney/scripts.pory"

# 626 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 627 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 628 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 629 "data/maps/MtChimney/scripts.pory"
	end
# 630 "data/maps/MtChimney/scripts.pory"

# 631 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 632 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 633 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 634 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 635 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 636 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 637 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 639 "data/maps/MtChimney/scripts.pory"

# 640 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 641 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 642 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 643 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 644 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 645 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 646 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 649 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 650 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 651 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 654 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 655 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 656 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 659 "data/maps/MtChimney/scripts.pory"
	.string "humankind and Pokémon!\p"
# 660 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 661 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 666 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 667 "data/maps/MtChimney/scripts.pory"

# 668 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 669 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 670 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 671 "data/maps/MtChimney/scripts.pory"

# 672 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 673 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 676 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 677 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 678 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 680 "data/maps/MtChimney/scripts.pory"

# 681 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 682 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 683 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 684 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 685 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 686 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 687 "data/maps/MtChimney/scripts.pory"

# 688 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 689 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 690 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 692 "data/maps/MtChimney/scripts.pory"

# 693 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 694 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 695 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 696 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 697 "data/maps/MtChimney/scripts.pory"

# 698 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 699 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 700 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 701 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 702 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 704 "data/maps/MtChimney/scripts.pory"

# 705 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 706 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 707 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 708 "data/maps/MtChimney/scripts.pory"

# 709 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 710 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 711 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 712 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 713 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 714 "data/maps/MtChimney/scripts.pory"

# 715 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 716 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 717 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 718 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 719 "data/maps/MtChimney/scripts.pory"

# 720 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 721 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 722 "data/maps/MtChimney/scripts.pory"

# 723 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 724 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 729 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 730 "data/maps/MtChimney/scripts.pory"

# 731 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 732 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 735 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 738 "data/maps/MtChimney/scripts.pory"

# 739 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 740 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 741 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 744 "data/maps/MtChimney/scripts.pory"

# 745 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 746 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 747 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 748 "data/maps/MtChimney/scripts.pory"

# 749 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 750 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 751 "data/maps/MtChimney/scripts.pory"

# 752 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 753 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 754 "data/maps/MtChimney/scripts.pory"

# 755 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 756 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 758 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 759 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 760 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 761 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 762 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 763 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 764 "data/maps/MtChimney/scripts.pory"

# 765 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 766 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 767 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 768 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 769 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 770 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 771 "data/maps/MtChimney/scripts.pory"

# 772 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 773 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 774 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 775 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 776 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 777 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 778 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 779 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 783 "data/maps/MtChimney/scripts.pory"

# 784 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 787 "data/maps/MtChimney/scripts.pory"

# 788 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 789 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 790 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER Pokémon!$"
# 791 "data/maps/MtChimney/scripts.pory"

# 792 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 793 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 794 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 796 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 797 "data/maps/MtChimney/scripts.pory"

# 798 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 799 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 800 "data/maps/MtChimney/scripts.pory"

# 801 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 802 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 804 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 805 "data/maps/MtChimney/scripts.pory"

# 806 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 807 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 808 "data/maps/MtChimney/scripts.pory"

# 809 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 810 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 811 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 812 "data/maps/MtChimney/scripts.pory"

# 813 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 814 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 815 "data/maps/MtChimney/scripts.pory"

# 816 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 817 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 818 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 819 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 821 "data/maps/MtChimney/scripts.pory"

# 822 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 823 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 824 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 825 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 826 "data/maps/MtChimney/scripts.pory"

# 827 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 828 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 829 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 830 "data/maps/MtChimney/scripts.pory"

# 831 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 832 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 833 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 834 "data/maps/MtChimney/scripts.pory"

# 835 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 836 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 837 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 838 "data/maps/MtChimney/scripts.pory"

# 839 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 840 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} Jagged Pass\n"
# 841 "data/maps/MtChimney/scripts.pory"
	.string "Lavaridge Town Ahead$"
# 842 "data/maps/MtChimney/scripts.pory"

# 843 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 844 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 845 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "myself an Expert now, can I?$"
# 855 "data/maps/MtChimney/scripts.pory"

# 856 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 857 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 861 "data/maps/MtChimney/scripts.pory"

# 862 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 863 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 864 "data/maps/MtChimney/scripts.pory"
	.string "of your Pokémon, why, you should be\l"
# 865 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 866 "data/maps/MtChimney/scripts.pory"

# 867 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 868 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 869 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 870 "data/maps/MtChimney/scripts.pory"

# 871 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 872 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 873 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your Pokémon.$"
# 874 "data/maps/MtChimney/scripts.pory"

# 875 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 876 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 877 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 878 "data/maps/MtChimney/scripts.pory"

# 879 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 880 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 881 "data/maps/MtChimney/scripts.pory"

# 882 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 883 "data/maps/MtChimney/scripts.pory"
	.string "The heat of Mt. Chimney warms\n"
# 884 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 885 "data/maps/MtChimney/scripts.pory"

# 886 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 887 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to Mt. Chimney.\n"
# 888 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my Pokémon battle!$"
# 889 "data/maps/MtChimney/scripts.pory"

# 890 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 891 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 892 "data/maps/MtChimney/scripts.pory"
	.string "It's like a Mt. Chimney eruption!$"
# 893 "data/maps/MtChimney/scripts.pory"

# 894 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 895 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 896 "data/maps/MtChimney/scripts.pory"
	.string "Mt. Chimney. It would be a shame if\l"
# 897 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 898 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 899 "data/maps/MtChimney/scripts.pory"
	.string "Cookies as souvenirs.$"
# 900 "data/maps/MtChimney/scripts.pory"

# 901 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 902 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 903 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 904 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 905 "data/maps/MtChimney/scripts.pory"

# 906 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 907 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 908 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 909 "data/maps/MtChimney/scripts.pory"

# 910 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 911 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 912 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 913 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 914 "data/maps/MtChimney/scripts.pory"

# 915 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 916 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 917 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 918 "data/maps/MtChimney/scripts.pory"

# 919 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 920 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 921 "data/maps/MtChimney/scripts.pory"

# 922 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 923 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in Lavaridge\n"
# 924 "data/maps/MtChimney/scripts.pory"
	.string "Hot Spring with the locals!$"
# 925 "data/maps/MtChimney/scripts.pory"

# 926 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 927 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 928 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my Pokénav.$"
# 929 "data/maps/MtChimney/scripts.pory"

# 930 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 931 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 932 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 933 "data/maps/MtChimney/scripts.pory"

# 934 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 935 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 936 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 937 "data/maps/MtChimney/scripts.pory"

# 938 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 939 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 940 "data/maps/MtChimney/scripts.pory"
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
