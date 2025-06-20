MeteorFalls_1F_1R_EventScript_Riley::
# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	trainerbattle_single TRAINER_RILEY_METEOR_FALLS, MeteorFalls_1F_1R_Text_RileyIntro, MeteorFalls_1F_1R_Text_RileyDefeat, MeteorFalls_1F_1R_EventScript_RileyDefeated, NO_MUSIC
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


MeteorFalls_1F_1R_EventScript_RileyDefeated::
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_RileyDefeated_Text_0
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_DEFEATED_RILEY
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_Delay48
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_ARCHIE
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_1
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_2
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_ARCHIE
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_1
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_2
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 175 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 176 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 177 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 178 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 179 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 180 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 195 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 196 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 197 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 198 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 199 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 200 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 215 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 216 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 217 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 218 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 219 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 220 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you before?\n"
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for TEAM MAGMA, too.\p"
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 331 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 332 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 333 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 334 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 335 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 336 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 337 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 338 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 339 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 340 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 341 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 342 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 343 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 344 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 345 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 346 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 347 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 348 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"

MeteorFalls_1F_1R_EventScript_RileyDefeated_Text_0:
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Some of my friends are visiting Hoenn\n"
	.string "as well.\p"
	.string "Maybe you'll run into them on your\n"
	.string "journey…$"

MeteorFalls_1F_1R_Text_RileyIntro::
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hello there, my name is Riley.\p"
	.string "I traveled here from Sinnoh to hone\n"
	.string "my offensive skills.\p"
	.string "There's something about you that seems\n"
	.string "different from all the other Trainers\l"
	.string "I've fought.\p"
	.string "I'd love to put your skills to the\n"
	.string "test in battle!$"

MeteorFalls_1F_1R_Text_RileyDefeat::
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "It seems I was bested…$"
