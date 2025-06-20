MeteorFalls_1F_1R_EventScript_Riley::
# 2 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 3 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_EventScript_Riley_Text_0
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
	end


# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_1, 5
# 18 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_MAGMA_GRUNT_2, 6
# 19 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_ARCHIE, 7
# 20 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_1, 8
# 21 "data/maps/MeteorFalls_1F_1R/scripts.pory"
.set LOCALID_AQUA_GRUNT_2, 9
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_MapScripts::
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MeteorFalls_1F_1R_OnLoad
# 25 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.byte 0
# 26 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 27 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_OnLoad:
# 28 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_OpenStevensCave::
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 1, METATILE_MeteorFalls_CaveEntrance_Top, TRUE
# 32 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 3, 2, METATILE_MeteorFalls_CaveEntrance_Left, TRUE
# 33 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 4, 2, METATILE_MeteorFalls_CaveEntrance_Bottom, FALSE
# 34 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setmetatile 5, 2, METATILE_MeteorFalls_CaveEntrance_Right, TRUE
# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	return
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MagmaStealsMeteoriteScene::
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 41 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 42 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay 30
# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceDown
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WithThisMeteorite, MSGBOX_DEFAULT
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterUp
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playse SE_PIN
# 51 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_ExclamationMark
# 52 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 53 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_Delay48
# 54 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 55 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma, MSGBOX_DEFAULT
# 56 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 57 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer
# 58 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 59 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_HoldItRightThereMagma, MSGBOX_DEFAULT
# 60 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 61 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 62 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 64 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 65 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_ARCHIE
# 66 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_1
# 67 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	addobject LOCALID_AQUA_GRUNT_2
# 68 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 69 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieArrive
# 70 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive
# 71 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive
# 72 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 73 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, Common_Movement_WalkInPlaceFasterLeft
# 74 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, Common_Movement_WalkInPlaceFasterLeft
# 75 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 76 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua, MSGBOX_DEFAULT
# 77 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 78 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay
# 79 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_1, MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit
# 80 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_MAGMA_GRUNT_2, MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit
# 81 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 82 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_1
# 83 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_MAGMA_GRUNT_2
# 84 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieApproachPlayer
# 85 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 86 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieSeenYouBefore, MSGBOX_DEFAULT
# 87 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 88 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie
# 89 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie
# 90 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 91 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma, MSGBOX_DEFAULT
# 92 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 94 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo, MSGBOX_DEFAULT
# 95 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterLeft
# 96 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 97 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_ArchieFarewell, MSGBOX_DEFAULT
# 98 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	closemessage
# 99 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_ARCHIE, MeteorFalls_1F_1R_Movement_ArchieExit
# 100 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_1, MeteorFalls_1F_1R_Movement_AquaGrunt1Exit
# 101 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement LOCALID_AQUA_GRUNT_2, MeteorFalls_1F_1R_Movement_AquaGrunt2Exit
# 102 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 0
# 103 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	fadedefaultbgm
# 104 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_ARCHIE
# 105 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_1
# 106 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	removeobject LOCALID_AQUA_GRUNT_2
# 107 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 108 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_ARCHIE_METEOR_FALLS
# 109 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
# 110 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_METEOR_FALLS_STATE, 1
# 111 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
# 112 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 113 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 114 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGruntApproachPlayer:
# 115 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 116 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 117 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 118 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 119 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 120 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt1Exit:
# 121 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 122 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 123 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 124 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 125 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 126 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 127 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 128 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 129 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 130 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 131 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 132 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_MagmaGrunt2Exit:
# 133 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 134 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 135 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_up
# 136 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 137 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 138 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 139 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 140 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 141 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 142 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_fast_right
# 143 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 144 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 145 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieArrive:
# 146 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 147 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 148 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 149 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 150 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 151 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 152 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 153 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 154 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Arrive:
# 155 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 156 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 157 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 158 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 159 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 160 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 161 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 162 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 163 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 164 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Arrive:
# 165 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 166 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_16
# 167 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 168 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 169 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 170 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 171 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 172 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 173 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 174 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieExit:
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
	walk_right
# 181 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 182 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 183 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 184 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_ArchieApproachPlayer:
# 185 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 186 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 187 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 188 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 189 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_left
# 190 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 191 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 192 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1Exit:
# 193 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 194 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
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
	walk_right
# 201 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 202 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 203 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 204 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt1ApproachArchie:
# 205 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 206 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 207 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 208 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 209 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 210 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 211 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2Exit:
# 212 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 213 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 214 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
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
	walk_right
# 221 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 222 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 223 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 224 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_AquaGrunt2ApproachArchie:
# 225 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 226 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 227 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 228 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_up
# 229 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 230 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 231 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Movement_PushPlayerOutOfWay:
# 232 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_down
# 233 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	delay_4
# 234 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_in_place_faster_right
# 235 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock_facing_direction
# 236 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 237 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	unlock_facing_direction
# 238 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	face_right
# 239 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	step_end
# 240 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 241 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_ProfCozmo::
# 242 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lock
# 243 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	faceplayer
# 244 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	goto_if_set FLAG_MET_PROF_COZMO, MeteorFalls_1F_1R_EventScript_MetCozmo
# 245 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setflag FLAG_MET_PROF_COZMO
# 246 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_MeetProfCozmo, MSGBOX_DEFAULT
# 247 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 248 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 249 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 250 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_EventScript_MetCozmo::
# 251 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney, MSGBOX_DEFAULT
# 252 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	release
# 253 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	end
# 254 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 255 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WithThisMeteorite:
# 256 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\p"
# 257 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With this METEORITE, that thing in\n"
# 258 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY will…$"
# 259 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 260 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_DontExpectMercyFromMagma:
# 261 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh?\p"
# 262 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't know who you are, but if you get\n"
# 263 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "in the way of TEAM MAGMA, don't\l"
# 264 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "expect any mercy!$"
# 265 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 266 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_HoldItRightThereMagma:
# 267 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hold it right there, TEAM MAGMA!\p"
# 268 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're badly mistaken if you think you\n"
# 269 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "can have your way with the world!$"
# 270 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 271 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BeSeeingYouTeamAqua:
# 272 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe!\n"
# 273 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Even TEAM AQUA joins us!\p"
# 274 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But it's too much trouble to deal with\n"
# 275 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "you all…\p"
# 276 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Heh, it doesn't matter!\p"
# 277 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got the METEORITE, so off to\n"
# 278 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "MT. CHIMNEY we go!\p"
# 279 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hehehe! Be seeing you, you TEAM\n"
# 280 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "AQUA dingbats!$"
# 281 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 282 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieSeenYouBefore:
# 283 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Didn't I see you before?\n"
# 284 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At SLATEPORT's MUSEUM?\p"
# 285 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Ah, so your name is {PLAYER}.\p"
# 286 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "At the time, I thought you were one\n"
# 287 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "of TEAM MAGMA's goons.\p"
# 288 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Humph…\n"
# 289 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You're one odd kid.\p"
# 290 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA is a dangerous group of\n"
# 291 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "total fanatics.\p"
# 292 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They engage in destruction, claiming\n"
# 293 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to expand the land mass.\p"
# 294 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They are the rivals to us,\n"
# 295 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "the sea-loving TEAM AQUA!$"
# 296 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 297 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_BossWeShouldChaseMagma:
# 298 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "BOSS, we should give chase to\n"
# 299 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA…$"
# 300 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 301 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieYesNoTellingWhatMagmaWillDo:
# 302 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: Yes, yes, we must!\n"
# 303 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We've got to hurry.\p"
# 304 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "There's no telling what TEAM MAGMA\n"
# 305 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "will do at MT. CHIMNEY!$"
# 306 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 307 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_ArchieFarewell:
# 308 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "ARCHIE: {PLAYER}, you should keep\n"
# 309 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "an eye out for TEAM MAGMA, too.\p"
# 310 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Farewell!$"
# 311 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 312 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_MeetProfCozmo:
# 313 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I… I'm COZMO…\n"
# 314 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm a PROFESSOR…\p"
# 315 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM MAGMA asked me to guide them\n"
# 316 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "to METEOR FALLS…\p"
# 317 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But they tricked me.\n"
# 318 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "They even took my METEORITE away…\p"
# 319 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "And then another similar bunch,\n"
# 320 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "TEAM AQUA showed up.\p"
# 321 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "After that…\n"
# 322 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I don't understand any of it.\p"
# 323 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "But that TEAM MAGMA…\p"
# 324 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 325 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"
# 326 "data/maps/MeteorFalls_1F_1R/scripts.pory"

# 327 "data/maps/MeteorFalls_1F_1R/scripts.pory"
MeteorFalls_1F_1R_Text_WhatsTeamMagmaDoingAtMtChimney:
# 328 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "PROF. COZMO: But that TEAM MAGMA…\p"
# 329 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "What are they going to do with that\n"
# 330 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "METEORITE at MT. CHIMNEY?$"

MeteorFalls_1F_1R_EventScript_Riley_Text_0:
# 4 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Hello there, my name is Riley.\p"
	.string "I traveled here from Sinnoh to hone\n"
	.string "my offensive skills.\p"
	.string "There's something about you that seems\n"
	.string "different from all the other Trainers\l"
	.string "I've fought.\p"
	.string "I'd love to put your skills to the\n"
	.string "test in battle!$"
