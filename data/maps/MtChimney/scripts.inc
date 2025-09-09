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


# 60 "data/maps/MtChimney/scripts.pory"

# 61 "data/maps/MtChimney/scripts.pory"
.set LOCALID_ARCHIE, 1
# 62 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAXIE, 2
# 63 "data/maps/MtChimney/scripts.pory"
.set LOCALID_TABITHA, 3
# 64 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 22
# 65 "data/maps/MtChimney/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 29
# 66 "data/maps/MtChimney/scripts.pory"

# 67 "data/maps/MtChimney/scripts.pory"

# 68 "data/maps/MtChimney/scripts.pory"
MtChimney_MapScripts::
# 69 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
# 70 "data/maps/MtChimney/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
# 71 "data/maps/MtChimney/scripts.pory"
	.byte 0
# 72 "data/maps/MtChimney/scripts.pory"

# 73 "data/maps/MtChimney/scripts.pory"
MtChimney_OnTransition:
# 74 "data/maps/MtChimney/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
# 75 "data/maps/MtChimney/scripts.pory"
	end
# 76 "data/maps/MtChimney/scripts.pory"

# 77 "data/maps/MtChimney/scripts.pory"
MtChimney_OnResume:
# 78 "data/maps/MtChimney/scripts.pory"
	setstepcallback STEP_CB_ASH
# 79 "data/maps/MtChimney/scripts.pory"
	end
# 80 "data/maps/MtChimney/scripts.pory"

# 81 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Archie::
# 82 "data/maps/MtChimney/scripts.pory"
	lock
# 83 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 84 "data/maps/MtChimney/scripts.pory"
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
# 85 "data/maps/MtChimney/scripts.pory"
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
# 86 "data/maps/MtChimney/scripts.pory"
	closemessage
# 87 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_FaceOriginalDirection
# 88 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 89 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
# 90 "data/maps/MtChimney/scripts.pory"
	release
# 91 "data/maps/MtChimney/scripts.pory"
	end
# 92 "data/maps/MtChimney/scripts.pory"

# 93 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieGoStopTeamMagma::
# 94 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
# 95 "data/maps/MtChimney/scripts.pory"
	return
# 96 "data/maps/MtChimney/scripts.pory"

# 97 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieBusyFighting::
# 98 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
# 99 "data/maps/MtChimney/scripts.pory"
	return
# 100 "data/maps/MtChimney/scripts.pory"

# 101 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Maxie::
# 102 "data/maps/MtChimney/scripts.pory"
	lockall
# 103 "data/maps/MtChimney/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 104 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
# 105 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
# 106 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 107 "data/maps/MtChimney/scripts.pory"
	playse SE_PIN
# 108 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 109 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 110 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 111 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 112 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
# 113 "data/maps/MtChimney/scripts.pory"
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
# 114 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
# 115 "data/maps/MtChimney/scripts.pory"
	closemessage
# 116 "data/maps/MtChimney/scripts.pory"
	delay 30
# 117 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_TO_BLACK
# 118 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAXIE
# 119 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 120 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_TABITHA
# 121 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 122 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 123 "data/maps/MtChimney/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 124 "data/maps/MtChimney/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 10, 12
# 125 "data/maps/MtChimney/scripts.pory"
	addobject LOCALID_ARCHIE
# 126 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
# 127 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
# 128 "data/maps/MtChimney/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 130 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
# 131 "data/maps/MtChimney/scripts.pory"
	closemessage
# 132 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
# 133 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
# 134 "data/maps/MtChimney/scripts.pory"
	removeobject LOCALID_ARCHIE
# 135 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 136 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 137 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 138 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 139 "data/maps/MtChimney/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 140 "data/maps/MtChimney/scripts.pory"
	releaseall
# 141 "data/maps/MtChimney/scripts.pory"
	end
# 142 "data/maps/MtChimney/scripts.pory"

# 143 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerEast::
# 144 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
# 145 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 146 "data/maps/MtChimney/scripts.pory"
	return
# 147 "data/maps/MtChimney/scripts.pory"

# 148 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieApproachPlayerNorth::
# 149 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
# 150 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 151 "data/maps/MtChimney/scripts.pory"
	return
# 152 "data/maps/MtChimney/scripts.pory"

# 153 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitEast::
# 154 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitEast
# 155 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 156 "data/maps/MtChimney/scripts.pory"
	return
# 157 "data/maps/MtChimney/scripts.pory"

# 158 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_ArchieExitNorth::
# 159 "data/maps/MtChimney/scripts.pory"
	applymovement LOCALID_ARCHIE, MtChimney_Movement_ArchieExitNorth
# 160 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 161 "data/maps/MtChimney/scripts.pory"
	return
# 162 "data/maps/MtChimney/scripts.pory"

# 163 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LavaCookieLady::
# 164 "data/maps/MtChimney/scripts.pory"
	lock
# 165 "data/maps/MtChimney/scripts.pory"
	faceplayer
# 166 "data/maps/MtChimney/scripts.pory"
	showmoneybox 0, 0
# 167 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
# 168 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
# 169 "data/maps/MtChimney/scripts.pory"
	checkmoney 200
# 170 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
# 171 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
# 172 "data/maps/MtChimney/scripts.pory"
	checkitemspace ITEM_LAVA_COOKIE
# 173 "data/maps/MtChimney/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
# 174 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
# 175 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
# 176 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 177 "data/maps/MtChimney/scripts.pory"
	release
# 178 "data/maps/MtChimney/scripts.pory"
	end
# 179 "data/maps/MtChimney/scripts.pory"

# 180 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BagIsFull::
# 181 "data/maps/MtChimney/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 182 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 183 "data/maps/MtChimney/scripts.pory"
	release
# 184 "data/maps/MtChimney/scripts.pory"
	end
# 185 "data/maps/MtChimney/scripts.pory"

# 186 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RemoveMoney::
# 187 "data/maps/MtChimney/scripts.pory"
	removemoney 200
# 188 "data/maps/MtChimney/scripts.pory"
	updatemoneybox
# 189 "data/maps/MtChimney/scripts.pory"
	return
# 190 "data/maps/MtChimney/scripts.pory"

# 191 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DeclineLavaCookie::
# 192 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
# 193 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 194 "data/maps/MtChimney/scripts.pory"
	release
# 195 "data/maps/MtChimney/scripts.pory"
	end
# 196 "data/maps/MtChimney/scripts.pory"

# 197 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_NotEnoughMoney::
# 198 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
# 199 "data/maps/MtChimney/scripts.pory"
	hidemoneybox
# 200 "data/maps/MtChimney/scripts.pory"
	release
# 201 "data/maps/MtChimney/scripts.pory"
	end
# 202 "data/maps/MtChimney/scripts.pory"

# 203 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerEast:
# 204 "data/maps/MtChimney/scripts.pory"
	walk_up
# 205 "data/maps/MtChimney/scripts.pory"
	walk_up
# 206 "data/maps/MtChimney/scripts.pory"
	walk_up
# 207 "data/maps/MtChimney/scripts.pory"
	walk_up
# 208 "data/maps/MtChimney/scripts.pory"
	walk_up
# 209 "data/maps/MtChimney/scripts.pory"
	walk_up
# 210 "data/maps/MtChimney/scripts.pory"
	walk_right
# 211 "data/maps/MtChimney/scripts.pory"
	step_end
# 212 "data/maps/MtChimney/scripts.pory"

# 213 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitEast:
# 214 "data/maps/MtChimney/scripts.pory"
	walk_left
# 215 "data/maps/MtChimney/scripts.pory"
	walk_down
# 216 "data/maps/MtChimney/scripts.pory"
	walk_down
# 217 "data/maps/MtChimney/scripts.pory"
	walk_down
# 218 "data/maps/MtChimney/scripts.pory"
	walk_down
# 219 "data/maps/MtChimney/scripts.pory"
	walk_down
# 220 "data/maps/MtChimney/scripts.pory"
	walk_down
# 221 "data/maps/MtChimney/scripts.pory"
	walk_down
# 222 "data/maps/MtChimney/scripts.pory"
	step_end
# 223 "data/maps/MtChimney/scripts.pory"

# 224 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieApproachPlayerNorth:
# 225 "data/maps/MtChimney/scripts.pory"
	walk_up
# 226 "data/maps/MtChimney/scripts.pory"
	walk_up
# 227 "data/maps/MtChimney/scripts.pory"
	walk_up
# 228 "data/maps/MtChimney/scripts.pory"
	walk_up
# 229 "data/maps/MtChimney/scripts.pory"
	walk_up
# 230 "data/maps/MtChimney/scripts.pory"
	walk_right
# 231 "data/maps/MtChimney/scripts.pory"
	walk_right
# 232 "data/maps/MtChimney/scripts.pory"
	step_end
# 233 "data/maps/MtChimney/scripts.pory"

# 234 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_ArchieExitNorth:
# 235 "data/maps/MtChimney/scripts.pory"
	walk_left
# 236 "data/maps/MtChimney/scripts.pory"
	walk_left
# 237 "data/maps/MtChimney/scripts.pory"
	walk_down
# 238 "data/maps/MtChimney/scripts.pory"
	walk_down
# 239 "data/maps/MtChimney/scripts.pory"
	walk_down
# 240 "data/maps/MtChimney/scripts.pory"
	walk_down
# 241 "data/maps/MtChimney/scripts.pory"
	walk_down
# 242 "data/maps/MtChimney/scripts.pory"
	walk_down
# 243 "data/maps/MtChimney/scripts.pory"
	walk_down
# 244 "data/maps/MtChimney/scripts.pory"
	step_end
# 245 "data/maps/MtChimney/scripts.pory"

# 246 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused1:
# 247 "data/maps/MtChimney/scripts.pory"
	walk_down
# 248 "data/maps/MtChimney/scripts.pory"
	walk_down
# 249 "data/maps/MtChimney/scripts.pory"
	walk_down
# 250 "data/maps/MtChimney/scripts.pory"
	walk_down
# 251 "data/maps/MtChimney/scripts.pory"
	walk_down
# 252 "data/maps/MtChimney/scripts.pory"
	walk_left
# 253 "data/maps/MtChimney/scripts.pory"
	walk_left
# 254 "data/maps/MtChimney/scripts.pory"
	walk_down
# 255 "data/maps/MtChimney/scripts.pory"
	walk_down
# 256 "data/maps/MtChimney/scripts.pory"
	walk_down
# 257 "data/maps/MtChimney/scripts.pory"
	walk_down
# 258 "data/maps/MtChimney/scripts.pory"
	walk_left
# 259 "data/maps/MtChimney/scripts.pory"
	walk_left
# 260 "data/maps/MtChimney/scripts.pory"
	walk_left
# 261 "data/maps/MtChimney/scripts.pory"
	walk_left
# 262 "data/maps/MtChimney/scripts.pory"
	walk_left
# 263 "data/maps/MtChimney/scripts.pory"
	walk_down
# 264 "data/maps/MtChimney/scripts.pory"
	step_end
# 265 "data/maps/MtChimney/scripts.pory"

# 266 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused2:
# 267 "data/maps/MtChimney/scripts.pory"
	walk_down
# 268 "data/maps/MtChimney/scripts.pory"
	walk_down
# 269 "data/maps/MtChimney/scripts.pory"
	walk_down
# 270 "data/maps/MtChimney/scripts.pory"
	walk_down
# 271 "data/maps/MtChimney/scripts.pory"
	walk_left
# 272 "data/maps/MtChimney/scripts.pory"
	walk_left
# 273 "data/maps/MtChimney/scripts.pory"
	walk_left
# 274 "data/maps/MtChimney/scripts.pory"
	walk_down
# 275 "data/maps/MtChimney/scripts.pory"
	step_end
# 276 "data/maps/MtChimney/scripts.pory"

# 277 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused3:
# 278 "data/maps/MtChimney/scripts.pory"
	walk_right
# 279 "data/maps/MtChimney/scripts.pory"
	walk_down
# 280 "data/maps/MtChimney/scripts.pory"
	walk_down
# 281 "data/maps/MtChimney/scripts.pory"
	walk_down
# 282 "data/maps/MtChimney/scripts.pory"
	walk_down
# 283 "data/maps/MtChimney/scripts.pory"
	walk_left
# 284 "data/maps/MtChimney/scripts.pory"
	walk_left
# 285 "data/maps/MtChimney/scripts.pory"
	walk_left
# 286 "data/maps/MtChimney/scripts.pory"
	walk_left
# 287 "data/maps/MtChimney/scripts.pory"
	walk_left
# 288 "data/maps/MtChimney/scripts.pory"
	walk_down
# 289 "data/maps/MtChimney/scripts.pory"
	walk_down
# 290 "data/maps/MtChimney/scripts.pory"
	walk_down
# 291 "data/maps/MtChimney/scripts.pory"
	walk_down
# 292 "data/maps/MtChimney/scripts.pory"
	step_end
# 293 "data/maps/MtChimney/scripts.pory"

# 294 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused4:
# 295 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 296 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 297 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 298 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 299 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 300 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 301 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 302 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 303 "data/maps/MtChimney/scripts.pory"
	walk_fast_down
# 304 "data/maps/MtChimney/scripts.pory"
	walk_left
# 305 "data/maps/MtChimney/scripts.pory"
	walk_left
# 306 "data/maps/MtChimney/scripts.pory"
	walk_down
# 307 "data/maps/MtChimney/scripts.pory"
	walk_down
# 308 "data/maps/MtChimney/scripts.pory"
	walk_down
# 309 "data/maps/MtChimney/scripts.pory"
	walk_left
# 310 "data/maps/MtChimney/scripts.pory"
	walk_left
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
MtChimney_Movement_Unused5:
# 322 "data/maps/MtChimney/scripts.pory"
	delay_16
# 323 "data/maps/MtChimney/scripts.pory"
	delay_16
# 324 "data/maps/MtChimney/scripts.pory"
	delay_16
# 325 "data/maps/MtChimney/scripts.pory"
	walk_down
# 326 "data/maps/MtChimney/scripts.pory"
	walk_down
# 327 "data/maps/MtChimney/scripts.pory"
	walk_down
# 328 "data/maps/MtChimney/scripts.pory"
	walk_left
# 329 "data/maps/MtChimney/scripts.pory"
	walk_left
# 330 "data/maps/MtChimney/scripts.pory"
	walk_left
# 331 "data/maps/MtChimney/scripts.pory"
	walk_down
# 332 "data/maps/MtChimney/scripts.pory"
	step_end
# 333 "data/maps/MtChimney/scripts.pory"

# 334 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused6:
# 335 "data/maps/MtChimney/scripts.pory"
	delay_16
# 336 "data/maps/MtChimney/scripts.pory"
	walk_left
# 337 "data/maps/MtChimney/scripts.pory"
	walk_down
# 338 "data/maps/MtChimney/scripts.pory"
	walk_down
# 339 "data/maps/MtChimney/scripts.pory"
	walk_down
# 340 "data/maps/MtChimney/scripts.pory"
	walk_down
# 341 "data/maps/MtChimney/scripts.pory"
	walk_left
# 342 "data/maps/MtChimney/scripts.pory"
	walk_left
# 343 "data/maps/MtChimney/scripts.pory"
	walk_left
# 344 "data/maps/MtChimney/scripts.pory"
	walk_left
# 345 "data/maps/MtChimney/scripts.pory"
	walk_left
# 346 "data/maps/MtChimney/scripts.pory"
	walk_down
# 347 "data/maps/MtChimney/scripts.pory"
	walk_down
# 348 "data/maps/MtChimney/scripts.pory"
	walk_down
# 349 "data/maps/MtChimney/scripts.pory"
	walk_down
# 350 "data/maps/MtChimney/scripts.pory"
	step_end
# 351 "data/maps/MtChimney/scripts.pory"

# 352 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused7:
# 353 "data/maps/MtChimney/scripts.pory"
	delay_16
# 354 "data/maps/MtChimney/scripts.pory"
	walk_left
# 355 "data/maps/MtChimney/scripts.pory"
	walk_left
# 356 "data/maps/MtChimney/scripts.pory"
	walk_down
# 357 "data/maps/MtChimney/scripts.pory"
	walk_down
# 358 "data/maps/MtChimney/scripts.pory"
	walk_down
# 359 "data/maps/MtChimney/scripts.pory"
	walk_left
# 360 "data/maps/MtChimney/scripts.pory"
	walk_left
# 361 "data/maps/MtChimney/scripts.pory"
	walk_down
# 362 "data/maps/MtChimney/scripts.pory"
	walk_down
# 363 "data/maps/MtChimney/scripts.pory"
	walk_left
# 364 "data/maps/MtChimney/scripts.pory"
	walk_left
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
MtChimney_Movement_Unused8:
# 372 "data/maps/MtChimney/scripts.pory"
	delay_16
# 373 "data/maps/MtChimney/scripts.pory"
	walk_down
# 374 "data/maps/MtChimney/scripts.pory"
	walk_left
# 375 "data/maps/MtChimney/scripts.pory"
	walk_left
# 376 "data/maps/MtChimney/scripts.pory"
	walk_left
# 377 "data/maps/MtChimney/scripts.pory"
	walk_left
# 378 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_down
# 379 "data/maps/MtChimney/scripts.pory"
	step_end
# 380 "data/maps/MtChimney/scripts.pory"

# 381 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused9:
# 382 "data/maps/MtChimney/scripts.pory"
	walk_down
# 383 "data/maps/MtChimney/scripts.pory"
	walk_down
# 384 "data/maps/MtChimney/scripts.pory"
	walk_down
# 385 "data/maps/MtChimney/scripts.pory"
	walk_down
# 386 "data/maps/MtChimney/scripts.pory"
	walk_left
# 387 "data/maps/MtChimney/scripts.pory"
	walk_left
# 388 "data/maps/MtChimney/scripts.pory"
	walk_left
# 389 "data/maps/MtChimney/scripts.pory"
	walk_left
# 390 "data/maps/MtChimney/scripts.pory"
	walk_left
# 391 "data/maps/MtChimney/scripts.pory"
	walk_down
# 392 "data/maps/MtChimney/scripts.pory"
	walk_down
# 393 "data/maps/MtChimney/scripts.pory"
	walk_down
# 394 "data/maps/MtChimney/scripts.pory"
	walk_down
# 395 "data/maps/MtChimney/scripts.pory"
	step_end
# 396 "data/maps/MtChimney/scripts.pory"

# 397 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused10:
# 398 "data/maps/MtChimney/scripts.pory"
	walk_down
# 399 "data/maps/MtChimney/scripts.pory"
	step_end
# 400 "data/maps/MtChimney/scripts.pory"

# 401 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused11:
# 402 "data/maps/MtChimney/scripts.pory"
	walk_down
# 403 "data/maps/MtChimney/scripts.pory"
	walk_down
# 404 "data/maps/MtChimney/scripts.pory"
	walk_down
# 405 "data/maps/MtChimney/scripts.pory"
	walk_down
# 406 "data/maps/MtChimney/scripts.pory"
	walk_down
# 407 "data/maps/MtChimney/scripts.pory"
	walk_down
# 408 "data/maps/MtChimney/scripts.pory"
	walk_down
# 409 "data/maps/MtChimney/scripts.pory"
	step_end
# 410 "data/maps/MtChimney/scripts.pory"

# 411 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused12:
# 412 "data/maps/MtChimney/scripts.pory"
	delay_16
# 413 "data/maps/MtChimney/scripts.pory"
	delay_16
# 414 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 415 "data/maps/MtChimney/scripts.pory"
	delay_16
# 416 "data/maps/MtChimney/scripts.pory"
	walk_down
# 417 "data/maps/MtChimney/scripts.pory"
	walk_down
# 418 "data/maps/MtChimney/scripts.pory"
	walk_down
# 419 "data/maps/MtChimney/scripts.pory"
	walk_down
# 420 "data/maps/MtChimney/scripts.pory"
	walk_down
# 421 "data/maps/MtChimney/scripts.pory"
	step_end
# 422 "data/maps/MtChimney/scripts.pory"

# 423 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused13:
# 424 "data/maps/MtChimney/scripts.pory"
	delay_16
# 425 "data/maps/MtChimney/scripts.pory"
	delay_16
# 426 "data/maps/MtChimney/scripts.pory"
	delay_16
# 427 "data/maps/MtChimney/scripts.pory"
	delay_16
# 428 "data/maps/MtChimney/scripts.pory"
	delay_16
# 429 "data/maps/MtChimney/scripts.pory"
	delay_16
# 430 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_left
# 431 "data/maps/MtChimney/scripts.pory"
	delay_16
# 432 "data/maps/MtChimney/scripts.pory"
	walk_down
# 433 "data/maps/MtChimney/scripts.pory"
	walk_down
# 434 "data/maps/MtChimney/scripts.pory"
	step_end
# 435 "data/maps/MtChimney/scripts.pory"

# 436 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused14:
# 437 "data/maps/MtChimney/scripts.pory"
	lock_facing_direction
# 438 "data/maps/MtChimney/scripts.pory"
	walk_fast_left
# 439 "data/maps/MtChimney/scripts.pory"
	unlock_facing_direction
# 440 "data/maps/MtChimney/scripts.pory"
	face_right
# 441 "data/maps/MtChimney/scripts.pory"
	step_end
# 442 "data/maps/MtChimney/scripts.pory"

# 443 "data/maps/MtChimney/scripts.pory"
MtChimney_Movement_Unused15:
# 444 "data/maps/MtChimney/scripts.pory"
	walk_left
# 445 "data/maps/MtChimney/scripts.pory"
	walk_in_place_faster_right
# 446 "data/maps/MtChimney/scripts.pory"
	delay_16
# 447 "data/maps/MtChimney/scripts.pory"
	step_end
# 448 "data/maps/MtChimney/scripts.pory"

# 449 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt1::
# 450 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
# 451 "data/maps/MtChimney/scripts.pory"
	end
# 452 "data/maps/MtChimney/scripts.pory"

# 453 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt2::
# 454 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
# 455 "data/maps/MtChimney/scripts.pory"
	end
# 456 "data/maps/MtChimney/scripts.pory"

# 457 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyAquaGrunt3::
# 458 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
# 459 "data/maps/MtChimney/scripts.pory"
	end
# 460 "data/maps/MtChimney/scripts.pory"

# 461 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Tabitha::
# 462 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
# 463 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
# 464 "data/maps/MtChimney/scripts.pory"
	end
# 465 "data/maps/MtChimney/scripts.pory"

# 466 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt2::
# 467 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
# 468 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 469 "data/maps/MtChimney/scripts.pory"
	end
# 470 "data/maps/MtChimney/scripts.pory"

# 471 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt1::
# 472 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
# 473 "data/maps/MtChimney/scripts.pory"
	end
# 474 "data/maps/MtChimney/scripts.pory"

# 475 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt2::
# 476 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
# 477 "data/maps/MtChimney/scripts.pory"
	end
# 478 "data/maps/MtChimney/scripts.pory"

# 479 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt3::
# 480 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
# 481 "data/maps/MtChimney/scripts.pory"
	end
# 482 "data/maps/MtChimney/scripts.pory"

# 483 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt4::
# 484 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
# 485 "data/maps/MtChimney/scripts.pory"
	end
# 486 "data/maps/MtChimney/scripts.pory"

# 487 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt5::
# 488 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
# 489 "data/maps/MtChimney/scripts.pory"
	end
# 490 "data/maps/MtChimney/scripts.pory"

# 491 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_BusyMagmaGrunt6::
# 492 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
# 493 "data/maps/MtChimney/scripts.pory"
	end
# 494 "data/maps/MtChimney/scripts.pory"

# 495 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MagmaPoochyena::
# 496 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
# 497 "data/maps/MtChimney/scripts.pory"
	end
# 498 "data/maps/MtChimney/scripts.pory"

# 499 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_AquaPoochyena::
# 500 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
# 501 "data/maps/MtChimney/scripts.pory"
	end
# 502 "data/maps/MtChimney/scripts.pory"

# 503 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MeteoriteMachine::
# 504 "data/maps/MtChimney/scripts.pory"
	lockall
# 505 "data/maps/MtChimney/scripts.pory"
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
# 506 "data/maps/MtChimney/scripts.pory"
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
# 507 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
# 508 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
# 509 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
# 510 "data/maps/MtChimney/scripts.pory"
	giveitem ITEM_METEORITE
# 511 "data/maps/MtChimney/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 512 "data/maps/MtChimney/scripts.pory"
	setflag FLAG_RECEIVED_METEORITE
# 513 "data/maps/MtChimney/scripts.pory"
	releaseall
# 514 "data/maps/MtChimney/scripts.pory"
	end
# 515 "data/maps/MtChimney/scripts.pory"

# 516 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_LeaveMeteoriteAlone::
# 517 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
# 518 "data/maps/MtChimney/scripts.pory"
	releaseall
# 519 "data/maps/MtChimney/scripts.pory"
	end
# 520 "data/maps/MtChimney/scripts.pory"

# 521 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOff::
# 522 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
# 523 "data/maps/MtChimney/scripts.pory"
	releaseall
# 524 "data/maps/MtChimney/scripts.pory"
	end
# 525 "data/maps/MtChimney/scripts.pory"

# 526 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_MachineOn::
# 527 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
# 528 "data/maps/MtChimney/scripts.pory"
	releaseall
# 529 "data/maps/MtChimney/scripts.pory"
	end
# 530 "data/maps/MtChimney/scripts.pory"

# 531 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RouteSign::
# 532 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
# 533 "data/maps/MtChimney/scripts.pory"
	end
# 534 "data/maps/MtChimney/scripts.pory"

# 535 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shelby::
# 536 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat
# 537 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
# 538 "data/maps/MtChimney/scripts.pory"
	release
# 539 "data/maps/MtChimney/scripts.pory"
	end
# 540 "data/maps/MtChimney/scripts.pory"

# 541 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_DefeatedShelby::
# 542 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 543 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 544 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
# 545 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SHELBY_1
# 546 "data/maps/MtChimney/scripts.pory"
	release
# 547 "data/maps/MtChimney/scripts.pory"
	end
# 548 "data/maps/MtChimney/scripts.pory"

# 549 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_RematchShelby::
# 550 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
# 551 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
# 552 "data/maps/MtChimney/scripts.pory"
	end
# 553 "data/maps/MtChimney/scripts.pory"

# 554 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Melissa::
# 555 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
# 556 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
# 557 "data/maps/MtChimney/scripts.pory"
	end
# 558 "data/maps/MtChimney/scripts.pory"

# 559 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sheila::
# 560 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
# 561 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/MtChimney/scripts.pory"
	end
# 563 "data/maps/MtChimney/scripts.pory"

# 564 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Shirley::
# 565 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
# 566 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
# 567 "data/maps/MtChimney/scripts.pory"
	end
# 568 "data/maps/MtChimney/scripts.pory"

# 569 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Grunt1::
# 570 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
# 571 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 572 "data/maps/MtChimney/scripts.pory"
	end
# 573 "data/maps/MtChimney/scripts.pory"

# 574 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_Sawyer::
# 575 "data/maps/MtChimney/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat
# 576 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
# 577 "data/maps/MtChimney/scripts.pory"
	release
# 578 "data/maps/MtChimney/scripts.pory"
	end
# 579 "data/maps/MtChimney/scripts.pory"

# 580 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerDefeated::
# 581 "data/maps/MtChimney/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 582 "data/maps/MtChimney/scripts.pory"
	waitmovement 0
# 583 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
# 584 "data/maps/MtChimney/scripts.pory"
	register_matchcall TRAINER_SAWYER_1
# 585 "data/maps/MtChimney/scripts.pory"
	release
# 586 "data/maps/MtChimney/scripts.pory"
	end
# 587 "data/maps/MtChimney/scripts.pory"

# 588 "data/maps/MtChimney/scripts.pory"
MtChimney_EventScript_SawyerRematch::
# 589 "data/maps/MtChimney/scripts.pory"
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
# 590 "data/maps/MtChimney/scripts.pory"
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
# 591 "data/maps/MtChimney/scripts.pory"
	end
# 592 "data/maps/MtChimney/scripts.pory"

# 593 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoriteWillActivateVolcano:
# 594 "data/maps/MtChimney/scripts.pory"
	.string "The power contained in the METEORITE…\p"
# 595 "data/maps/MtChimney/scripts.pory"
	.string "By amplifying its power with this\n"
# 596 "data/maps/MtChimney/scripts.pory"
	.string "machine, MT. CHIMNEY's volcanic\l"
# 597 "data/maps/MtChimney/scripts.pory"
	.string "activity will instantly intensify…\p"
# 598 "data/maps/MtChimney/scripts.pory"
	.string "Its energy will grow deep inside\n"
# 599 "data/maps/MtChimney/scripts.pory"
	.string "the crater and…\l"
# 600 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…$"
# 601 "data/maps/MtChimney/scripts.pory"

# 602 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieIntro:
# 603 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: Hm?\n"
# 604 "data/maps/MtChimney/scripts.pory"
	.string "Who are you?\p"
# 605 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\n"
# 606 "data/maps/MtChimney/scripts.pory"
	.string "… … … … … …\p"
# 607 "data/maps/MtChimney/scripts.pory"
	.string "I'd heard ARCHIE bemoaning a child\n"
# 608 "data/maps/MtChimney/scripts.pory"
	.string "who's been meddling in TEAM AQUA's\l"
# 609 "data/maps/MtChimney/scripts.pory"
	.string "affairs.\p"
# 610 "data/maps/MtChimney/scripts.pory"
	.string "It must be you he meant.\p"
# 611 "data/maps/MtChimney/scripts.pory"
	.string "Humph! So you're thinking of\n"
# 612 "data/maps/MtChimney/scripts.pory"
	.string "interfering with us, TEAM MAGMA?\p"
# 613 "data/maps/MtChimney/scripts.pory"
	.string "Now you listen.\n"
# 614 "data/maps/MtChimney/scripts.pory"
	.string "Long ago, living things used the\l"
# 615 "data/maps/MtChimney/scripts.pory"
	.string "land to live and grow.\p"
# 616 "data/maps/MtChimney/scripts.pory"
	.string "That is why land is all important!\n"
# 617 "data/maps/MtChimney/scripts.pory"
	.string "It is the cradle of all!\p"
# 618 "data/maps/MtChimney/scripts.pory"
	.string "That is why TEAM MAGMA is dedicated\n"
# 619 "data/maps/MtChimney/scripts.pory"
	.string "to the expansion of the land mass.\p"
# 620 "data/maps/MtChimney/scripts.pory"
	.string "It is for further advancement of\n"
# 621 "data/maps/MtChimney/scripts.pory"
	.string "humankind and POKéMON!\p"
# 622 "data/maps/MtChimney/scripts.pory"
	.string "And for that, we need the power of\n"
# 623 "data/maps/MtChimney/scripts.pory"
	.string "what sleeps within this mountain…\p"
# 624 "data/maps/MtChimney/scripts.pory"
	.string "Oh! There was no need for you to\n"
# 625 "data/maps/MtChimney/scripts.pory"
	.string "learn that much.\p"
# 626 "data/maps/MtChimney/scripts.pory"
	.string "But, no matter!\n"
# 627 "data/maps/MtChimney/scripts.pory"
	.string "I'll teach you the consequences of\l"
# 628 "data/maps/MtChimney/scripts.pory"
	.string "meddling in our grand design!$"
# 629 "data/maps/MtChimney/scripts.pory"

# 630 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieDefeat:
# 631 "data/maps/MtChimney/scripts.pory"
	.string "What?!\p"
# 632 "data/maps/MtChimney/scripts.pory"
	.string "I, MAXIE, was caught off guard?!$"
# 633 "data/maps/MtChimney/scripts.pory"

# 634 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
# 635 "data/maps/MtChimney/scripts.pory"
	.string "MAXIE: But, enough.\n"
# 636 "data/maps/MtChimney/scripts.pory"
	.string "I will back off this time.\p"
# 637 "data/maps/MtChimney/scripts.pory"
	.string "But don't think that this is the last\n"
# 638 "data/maps/MtChimney/scripts.pory"
	.string "you've seen of TEAM MAGMA.\p"
# 639 "data/maps/MtChimney/scripts.pory"
	.string "Fufufu…\p"
# 640 "data/maps/MtChimney/scripts.pory"
	.string "Even without the METEORITE, if we\n"
# 641 "data/maps/MtChimney/scripts.pory"
	.string "obtain that ORB… Fufufu…$"
# 642 "data/maps/MtChimney/scripts.pory"

# 643 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaIntro:
# 644 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe!\p"
# 645 "data/maps/MtChimney/scripts.pory"
	.string "So you've come all the way here!\p"
# 646 "data/maps/MtChimney/scripts.pory"
	.string "But you're too late!\n"
# 647 "data/maps/MtChimney/scripts.pory"
	.string "I've already delivered the METEORITE\l"
# 648 "data/maps/MtChimney/scripts.pory"
	.string "from METEOR FALLS to the BOSS!$"
# 649 "data/maps/MtChimney/scripts.pory"

# 650 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaDefeat:
# 651 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…\p"
# 652 "data/maps/MtChimney/scripts.pory"
	.string "Even though I've lost, if our leader\n"
# 653 "data/maps/MtChimney/scripts.pory"
	.string "awakens that thing…$"
# 654 "data/maps/MtChimney/scripts.pory"

# 655 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TabithaPostBattle:
# 656 "data/maps/MtChimney/scripts.pory"
	.string "BOSS, hurry!\n"
# 657 "data/maps/MtChimney/scripts.pory"
	.string "Give it the METEORITE's energy!\p"
# 658 "data/maps/MtChimney/scripts.pory"
	.string "Hehehe…$"
# 659 "data/maps/MtChimney/scripts.pory"

# 660 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Intro:
# 661 "data/maps/MtChimney/scripts.pory"
	.string "We of TEAM MAGMA are working hard for\n"
# 662 "data/maps/MtChimney/scripts.pory"
	.string "everyone's sake.\p"
# 663 "data/maps/MtChimney/scripts.pory"
	.string "Like, if that thing's power made more\n"
# 664 "data/maps/MtChimney/scripts.pory"
	.string "land, there'd be more places to live.\p"
# 665 "data/maps/MtChimney/scripts.pory"
	.string "Everyone'd be happy!$"
# 666 "data/maps/MtChimney/scripts.pory"

# 667 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2Defeat:
# 668 "data/maps/MtChimney/scripts.pory"
	.string "Hunh?\n"
# 669 "data/maps/MtChimney/scripts.pory"
	.string "What do you mean I lost?$"
# 670 "data/maps/MtChimney/scripts.pory"

# 671 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt2PostBattle:
# 672 "data/maps/MtChimney/scripts.pory"
	.string "Our BOSS says, “It will make everyone\n"
# 673 "data/maps/MtChimney/scripts.pory"
	.string "happy.”\p"
# 674 "data/maps/MtChimney/scripts.pory"
	.string "But why does everyone keep getting\n"
# 675 "data/maps/MtChimney/scripts.pory"
	.string "in our way?$"
# 676 "data/maps/MtChimney/scripts.pory"

# 677 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Intro:
# 678 "data/maps/MtChimney/scripts.pory"
	.string "If there were more land, I'd be able\n"
# 679 "data/maps/MtChimney/scripts.pory"
	.string "to get a big house of my own!\p"
# 680 "data/maps/MtChimney/scripts.pory"
	.string "I'm going to build it on hardened lava!$"
# 681 "data/maps/MtChimney/scripts.pory"

# 682 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1Defeat:
# 683 "data/maps/MtChimney/scripts.pory"
	.string "My dream of a big house…$"
# 684 "data/maps/MtChimney/scripts.pory"

# 685 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Grunt1PostBattle:
# 686 "data/maps/MtChimney/scripts.pory"
	.string "A kid like you, you ought to be\n"
# 687 "data/maps/MtChimney/scripts.pory"
	.string "splashing about in the waves!$"
# 688 "data/maps/MtChimney/scripts.pory"

# 689 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
# 690 "data/maps/MtChimney/scripts.pory"
	.string "That annoying TEAM AQUA…\n"
# 691 "data/maps/MtChimney/scripts.pory"
	.string "They always mess with our plans!$"
# 692 "data/maps/MtChimney/scripts.pory"

# 693 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MeteoritesPackAmazingPower:
# 694 "data/maps/MtChimney/scripts.pory"
	.string "METEORITES pack amazing power!$"
# 695 "data/maps/MtChimney/scripts.pory"

# 696 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouBetterNotMessWithUs:
# 697 "data/maps/MtChimney/scripts.pory"
	.string "You'd better not mess with us!\p"
# 698 "data/maps/MtChimney/scripts.pory"
	.string "We're trying to awaken that thing\n"
# 699 "data/maps/MtChimney/scripts.pory"
	.string "for the benefit of everyone!$"
# 700 "data/maps/MtChimney/scripts.pory"

# 701 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_AquasNameSimilar:
# 702 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM MAGMA!\p"
# 703 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM AQUA!\p"
# 704 "data/maps/MtChimney/scripts.pory"
	.string "It totally annoys me that they'd\n"
# 705 "data/maps/MtChimney/scripts.pory"
	.string "use a name like ours!$"
# 706 "data/maps/MtChimney/scripts.pory"

# 707 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_DouseThemInFire:
# 708 "data/maps/MtChimney/scripts.pory"
	.string "Yeah!\n"
# 709 "data/maps/MtChimney/scripts.pory"
	.string "Douse them in fire!$"
# 710 "data/maps/MtChimney/scripts.pory"

# 711 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_KeepMakingMoreLand:
# 712 "data/maps/MtChimney/scripts.pory"
	.string "We're going to keep making more land!$"
# 713 "data/maps/MtChimney/scripts.pory"

# 714 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bufoh:
# 715 "data/maps/MtChimney/scripts.pory"
	.string "Bufoh!$"
# 716 "data/maps/MtChimney/scripts.pory"

# 717 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieGoStopTeamMagma:
# 718 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grr, {PLAYER}!\n"
# 719 "data/maps/MtChimney/scripts.pory"
	.string "I should've guessed you'd show up!\p"
# 720 "data/maps/MtChimney/scripts.pory"
	.string "See for yourself what the fanatics\n"
# 721 "data/maps/MtChimney/scripts.pory"
	.string "of TEAM MAGMA are up to!\p"
# 722 "data/maps/MtChimney/scripts.pory"
	.string "They're trying to inject the stolen\n"
# 723 "data/maps/MtChimney/scripts.pory"
	.string "METEORITE's power into the volcano!\p"
# 724 "data/maps/MtChimney/scripts.pory"
	.string "Doing something like that will cause\n"
# 725 "data/maps/MtChimney/scripts.pory"
	.string "the volcano's eruption!$"
# 726 "data/maps/MtChimney/scripts.pory"

# 727 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieIHaveMyHandsFull:
# 728 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: Grrr…\p"
# 729 "data/maps/MtChimney/scripts.pory"
	.string "I want to stop that MAXIE,\n"
# 730 "data/maps/MtChimney/scripts.pory"
	.string "but I can't!\p"
# 731 "data/maps/MtChimney/scripts.pory"
	.string "Not when I have my hands full battling\n"
# 732 "data/maps/MtChimney/scripts.pory"
	.string "three opponents at once!$"
# 733 "data/maps/MtChimney/scripts.pory"

# 734 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ArchieThankYou:
# 735 "data/maps/MtChimney/scripts.pory"
	.string "ARCHIE: {PLAYER}!\n"
# 736 "data/maps/MtChimney/scripts.pory"
	.string "Thank you!\p"
# 737 "data/maps/MtChimney/scripts.pory"
	.string "With your help, we thwarted TEAM\n"
# 738 "data/maps/MtChimney/scripts.pory"
	.string "MAGMA's destructive plan!\p"
# 739 "data/maps/MtChimney/scripts.pory"
	.string "But… You…\n"
# 740 "data/maps/MtChimney/scripts.pory"
	.string "Whose side are you on?\p"
# 741 "data/maps/MtChimney/scripts.pory"
	.string "Ah, it doesn't matter.\p"
# 742 "data/maps/MtChimney/scripts.pory"
	.string "We will remain vigilant and keep up\n"
# 743 "data/maps/MtChimney/scripts.pory"
	.string "our pursuit of TEAM MAGMA.\p"
# 744 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER}, we shall meet again!$"
# 745 "data/maps/MtChimney/scripts.pory"

# 746 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmaOutnumbersUs:
# 747 "data/maps/MtChimney/scripts.pory"
	.string "Darn… TEAM MAGMA outnumbers us!\n"
# 748 "data/maps/MtChimney/scripts.pory"
	.string "We can't keep up with them!$"
# 749 "data/maps/MtChimney/scripts.pory"

# 750 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LessHabitatForWaterPokemon:
# 751 "data/maps/MtChimney/scripts.pory"
	.string "If they expand the land, there'll be\n"
# 752 "data/maps/MtChimney/scripts.pory"
	.string "less habitats for WATER POKéMON!$"
# 753 "data/maps/MtChimney/scripts.pory"

# 754 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MagmasNameSimilar:
# 755 "data/maps/MtChimney/scripts.pory"
	.string "We're TEAM AQUA!\p"
# 756 "data/maps/MtChimney/scripts.pory"
	.string "They're TEAM MAGMA!\p"
# 757 "data/maps/MtChimney/scripts.pory"
	.string "It burns me up that they'd use such\n"
# 758 "data/maps/MtChimney/scripts.pory"
	.string "a confusing name!$"
# 759 "data/maps/MtChimney/scripts.pory"

# 760 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_Bushaa:
# 761 "data/maps/MtChimney/scripts.pory"
	.string "Bushaa!$"
# 762 "data/maps/MtChimney/scripts.pory"

# 763 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_LavaCookiesJust200:
# 764 "data/maps/MtChimney/scripts.pory"
	.string "LAVA COOKIES are MT. CHIMNEY's local\n"
# 765 "data/maps/MtChimney/scripts.pory"
	.string "specialty.\p"
# 766 "data/maps/MtChimney/scripts.pory"
	.string "Try one. It's just ¥200.$"
# 767 "data/maps/MtChimney/scripts.pory"

# 768 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ThankYouDear:
# 769 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, dear!$"
# 770 "data/maps/MtChimney/scripts.pory"

# 771 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_YouveNotGotTheMoney:
# 772 "data/maps/MtChimney/scripts.pory"
	.string "Oh, dear. You can't buy a thing if\n"
# 773 "data/maps/MtChimney/scripts.pory"
	.string "you've not got the money.$"
# 774 "data/maps/MtChimney/scripts.pory"

# 775 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_OhFineThen:
# 776 "data/maps/MtChimney/scripts.pory"
	.string "Oh, fine then.$"
# 777 "data/maps/MtChimney/scripts.pory"

# 778 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MetoriteFittedOnMachine:
# 779 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 780 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 781 "data/maps/MtChimney/scripts.pory"
	.string "The machine seems to be storing\n"
# 782 "data/maps/MtChimney/scripts.pory"
	.string "energy in the METEORITE.$"
# 783 "data/maps/MtChimney/scripts.pory"

# 784 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RemoveTheMeteorite:
# 785 "data/maps/MtChimney/scripts.pory"
	.string "A METEORITE is fitted on a mysterious\n"
# 786 "data/maps/MtChimney/scripts.pory"
	.string "machine…\p"
# 787 "data/maps/MtChimney/scripts.pory"
	.string "Do you want to remove the METEORITE?$"
# 788 "data/maps/MtChimney/scripts.pory"

# 789 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerRemovedMeteorite:
# 790 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} removed the METEORITE from\n"
# 791 "data/maps/MtChimney/scripts.pory"
	.string "the mysterious machine.$"
# 792 "data/maps/MtChimney/scripts.pory"

# 793 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_PlayerLeftMeteorite:
# 794 "data/maps/MtChimney/scripts.pory"
	.string "{PLAYER} left the METEORITE where\n"
# 795 "data/maps/MtChimney/scripts.pory"
	.string "it was.$"
# 796 "data/maps/MtChimney/scripts.pory"

# 797 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MachineMakesNoResponse:
# 798 "data/maps/MtChimney/scripts.pory"
	.string "This mysterious machine…\n"
# 799 "data/maps/MtChimney/scripts.pory"
	.string "It makes no response whatsoever.$"
# 800 "data/maps/MtChimney/scripts.pory"

# 801 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_RouteSign:
# 802 "data/maps/MtChimney/scripts.pory"
	.string "{DOWN_ARROW} JAGGED PATH\n"
# 803 "data/maps/MtChimney/scripts.pory"
	.string "LAVARIDGE TOWN AHEAD$"
# 804 "data/maps/MtChimney/scripts.pory"

# 805 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyIntro:
# 806 "data/maps/MtChimney/scripts.pory"
	.string "I've been to the hot springs and\n"
# 807 "data/maps/MtChimney/scripts.pory"
	.string "refreshed my tired bones.\l"
# 808 "data/maps/MtChimney/scripts.pory"
	.string "Right now I'm feeling strong!$"
# 809 "data/maps/MtChimney/scripts.pory"

# 810 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyDefeat:
# 811 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 812 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 813 "data/maps/MtChimney/scripts.pory"

# 814 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostBattle:
# 815 "data/maps/MtChimney/scripts.pory"
	.string "Well, well, I've lost. I can't call\n"
# 816 "data/maps/MtChimney/scripts.pory"
	.string "myself an Expert now, can I?$"
# 817 "data/maps/MtChimney/scripts.pory"

# 818 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRegister:
# 819 "data/maps/MtChimney/scripts.pory"
	.string "Thank you, child. It was fun, as if\n"
# 820 "data/maps/MtChimney/scripts.pory"
	.string "I were battling my own grandchild.\p"
# 821 "data/maps/MtChimney/scripts.pory"
	.string "Please, come see me again for\n"
# 822 "data/maps/MtChimney/scripts.pory"
	.string "a rematch.$"
# 823 "data/maps/MtChimney/scripts.pory"

# 824 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchIntro:
# 825 "data/maps/MtChimney/scripts.pory"
	.string "If you can mesh your heart with those\n"
# 826 "data/maps/MtChimney/scripts.pory"
	.string "of your POKéMON, why, you should be\l"
# 827 "data/maps/MtChimney/scripts.pory"
	.string "able to achieve great things.$"
# 828 "data/maps/MtChimney/scripts.pory"

# 829 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyRematchDefeat:
# 830 "data/maps/MtChimney/scripts.pory"
	.string "Oh, my goodness.\n"
# 831 "data/maps/MtChimney/scripts.pory"
	.string "Now, aren't you something!$"
# 832 "data/maps/MtChimney/scripts.pory"

# 833 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShelbyPostRematch:
# 834 "data/maps/MtChimney/scripts.pory"
	.string "Perhaps your heart has become one\n"
# 835 "data/maps/MtChimney/scripts.pory"
	.string "with the hearts of your POKéMON.$"
# 836 "data/maps/MtChimney/scripts.pory"

# 837 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaIntro:
# 838 "data/maps/MtChimney/scripts.pory"
	.string "I've got the fire in me, baby.\n"
# 839 "data/maps/MtChimney/scripts.pory"
	.string "I can't stand it! I have to battle!$"
# 840 "data/maps/MtChimney/scripts.pory"

# 841 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaDefeat:
# 842 "data/maps/MtChimney/scripts.pory"
	.string "Ooh, that was a scorching-hot match!$"
# 843 "data/maps/MtChimney/scripts.pory"

# 844 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_MelissaPostBattle:
# 845 "data/maps/MtChimney/scripts.pory"
	.string "The heat of MT. CHIMNEY warms\n"
# 846 "data/maps/MtChimney/scripts.pory"
	.string "me up, baby!$"
# 847 "data/maps/MtChimney/scripts.pory"

# 848 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaIntro:
# 849 "data/maps/MtChimney/scripts.pory"
	.string "I've finally made it to MT. CHIMNEY.\n"
# 850 "data/maps/MtChimney/scripts.pory"
	.string "I want to make my POKéMON battle!$"
# 851 "data/maps/MtChimney/scripts.pory"

# 852 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaDefeat:
# 853 "data/maps/MtChimney/scripts.pory"
	.string "The way you battle…\n"
# 854 "data/maps/MtChimney/scripts.pory"
	.string "It's like a MT. CHIMNEY eruption!$"
# 855 "data/maps/MtChimney/scripts.pory"

# 856 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SheilaPostBattle:
# 857 "data/maps/MtChimney/scripts.pory"
	.string "Like I said, I've finally made it to\n"
# 858 "data/maps/MtChimney/scripts.pory"
	.string "MT. CHIMNEY. It would be a shame if\l"
# 859 "data/maps/MtChimney/scripts.pory"
	.string "I only do a little sightseeing…\p"
# 860 "data/maps/MtChimney/scripts.pory"
	.string "I want to get in some battles and buy\n"
# 861 "data/maps/MtChimney/scripts.pory"
	.string "COOKIES as souvenirs.$"
# 862 "data/maps/MtChimney/scripts.pory"

# 863 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyIntro:
# 864 "data/maps/MtChimney/scripts.pory"
	.string "Since I bathed in the hot springs,\n"
# 865 "data/maps/MtChimney/scripts.pory"
	.string "I've been feeling great!\l"
# 866 "data/maps/MtChimney/scripts.pory"
	.string "I'm sure I'm going to win!$"
# 867 "data/maps/MtChimney/scripts.pory"

# 868 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyDefeat:
# 869 "data/maps/MtChimney/scripts.pory"
	.string "Yowch!\n"
# 870 "data/maps/MtChimney/scripts.pory"
	.string "I'm getting a chill out of the water.$"
# 871 "data/maps/MtChimney/scripts.pory"

# 872 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_ShirleyPostBattle:
# 873 "data/maps/MtChimney/scripts.pory"
	.string "I'll have to take another dip in the\n"
# 874 "data/maps/MtChimney/scripts.pory"
	.string "hot springs. Want to join me?\p"
# 875 "data/maps/MtChimney/scripts.pory"
	.string "Just joking!$"
# 876 "data/maps/MtChimney/scripts.pory"

# 877 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerIntro:
# 878 "data/maps/MtChimney/scripts.pory"
	.string "This is one fine mountain! Plenty of\n"
# 879 "data/maps/MtChimney/scripts.pory"
	.string "hot people around for company!$"
# 880 "data/maps/MtChimney/scripts.pory"

# 881 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerDefeat:
# 882 "data/maps/MtChimney/scripts.pory"
	.string "Oh, you're a real firebrand, too!$"
# 883 "data/maps/MtChimney/scripts.pory"

# 884 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostBattle:
# 885 "data/maps/MtChimney/scripts.pory"
	.string "I think I need a dip in LAVARIDGE\n"
# 886 "data/maps/MtChimney/scripts.pory"
	.string "HOT SPRING with the locals!$"
# 887 "data/maps/MtChimney/scripts.pory"

# 888 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRegister:
# 889 "data/maps/MtChimney/scripts.pory"
	.string "I like little fireballs like you.\n"
# 890 "data/maps/MtChimney/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 891 "data/maps/MtChimney/scripts.pory"

# 892 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchIntro:
# 893 "data/maps/MtChimney/scripts.pory"
	.string "I'm happily surrounded by hot people\n"
# 894 "data/maps/MtChimney/scripts.pory"
	.string "around these parts. I won't lose!$"
# 895 "data/maps/MtChimney/scripts.pory"

# 896 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerRematchDefeat:
# 897 "data/maps/MtChimney/scripts.pory"
	.string "Gosh, you're still the same\n"
# 898 "data/maps/MtChimney/scripts.pory"
	.string "firebrand as before!$"
# 899 "data/maps/MtChimney/scripts.pory"

# 900 "data/maps/MtChimney/scripts.pory"
MtChimney_Text_SawyerPostRematch:
# 901 "data/maps/MtChimney/scripts.pory"
	.string "Actually, it really is hot here.\n"
# 902 "data/maps/MtChimney/scripts.pory"
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
