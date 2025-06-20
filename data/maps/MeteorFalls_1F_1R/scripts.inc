MeteorFalls_1F_1R_EventScript_RileyTriggered::
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 5 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto MeteorFalls_1F_1R_EventScript_Riley
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_Riley::
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_RILEY_METEOR_FALLS, 4, MeteorFalls_1F_1R_Text_RileyIntro, MeteorFalls_1F_1R_Text_RileyDefeat, MeteorFalls_1F_1R_EventScript_RileyDefeated
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_Riley_Text_0
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_FaceUp:
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_up
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end

MeteorFalls_1F_1R_EventScript_RileyDefeated::
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_Riley_Text_0
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_DEFEATED_RILEY
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_Delay48
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_ARCHIE
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_1
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_2
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_ARCHIE
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_1
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_2
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you before?\n"
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 349 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 350 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 351 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 352 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 353 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 354 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for TEAM MAGMA, too.\p"
# 355 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 356 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 357 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 358 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 359 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 360 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 361 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 362 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 363 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 364 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 365 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 366 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 367 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 368 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 369 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 370 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 371 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 372 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 373 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 374 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 375 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"

MeteorFalls_1F_1R_EventScript_Riley_Text_0:
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Some of my friends are visiting Hoenn\n"
	.string "as well.\p"
	.string "Maybe you'll run into them on your\n"
	.string "journey…$"

MeteorFalls_1F_1R_Text_RileyIntro::
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hello there, my name is Riley.\p"
	.string "I traveled here from Sinnoh to hone\n"
	.string "my offensive skills.\p"
	.string "There's something about you that seems\n"
	.string "different from all the other Trainers\l"
	.string "I've fought.\p"
	.string "I'd love to put your skills to the\n"
	.string "test in battle!$"

MeteorFalls_1F_1R_Text_RileyDefeat::
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "It seems I was bested…$"
