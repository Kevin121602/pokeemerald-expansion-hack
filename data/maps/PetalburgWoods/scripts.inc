# 1 "data/maps/PetalburgWoods/scripts.pory"

# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/PetalburgWoods/scripts.pory"

# 5 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 6 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 7 "data/maps/PetalburgWoods/scripts.pory"

# 8 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 9 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 10 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 11 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 12 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 13 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 14 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 15 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 16 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 17 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 18 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 19 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 20 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 21 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 22 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 24 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 25 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 26 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 27 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 28 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 31 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 32 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 33 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 34 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 35 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 36 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 38 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 39 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 40 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 42 "data/maps/PetalburgWoods/scripts.pory"
	end
# 43 "data/maps/PetalburgWoods/scripts.pory"

# 44 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 45 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 46 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 47 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 48 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 49 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 51 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 53 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 54 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 55 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 56 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 57 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 58 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 59 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 60 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 62 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 63 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 65 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 66 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 69 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 70 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 71 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 72 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 73 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 74 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 75 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 76 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 79 "data/maps/PetalburgWoods/scripts.pory"
	end
# 80 "data/maps/PetalburgWoods/scripts.pory"

# 81 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 82 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 83 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 84 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 85 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 86 "data/maps/PetalburgWoods/scripts.pory"
	return
# 87 "data/maps/PetalburgWoods/scripts.pory"

# 88 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 89 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 90 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 95 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 96 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 97 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 98 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 99 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 100 "data/maps/PetalburgWoods/scripts.pory"
	end
# 101 "data/maps/PetalburgWoods/scripts.pory"

# 102 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 103 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 105 "data/maps/PetalburgWoods/scripts.pory"
	end
# 106 "data/maps/PetalburgWoods/scripts.pory"

# 107 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 108 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 109 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 110 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 113 "data/maps/PetalburgWoods/scripts.pory"
	return
# 114 "data/maps/PetalburgWoods/scripts.pory"

# 115 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 116 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 117 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 118 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_DEFEATED_WOODS_GRUNT
# 119 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 120 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 121 "data/maps/PetalburgWoods/scripts.pory"
	end
# 122 "data/maps/PetalburgWoods/scripts.pory"

# 123 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 124 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 125 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 127 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 128 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 130 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 131 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 133 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 135 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 136 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 137 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 138 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 139 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 140 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 141 "data/maps/PetalburgWoods/scripts.pory"

# 142 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 147 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 148 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 149 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 150 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 151 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 152 "data/maps/PetalburgWoods/scripts.pory"

# 153 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 154 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 155 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 156 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 159 "data/maps/PetalburgWoods/scripts.pory"

# 160 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 161 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 162 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 167 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 168 "data/maps/PetalburgWoods/scripts.pory"

# 169 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 174 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 175 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 176 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 177 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 178 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 179 "data/maps/PetalburgWoods/scripts.pory"

# 180 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 181 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 182 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 184 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 185 "data/maps/PetalburgWoods/scripts.pory"

# 186 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 192 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 193 "data/maps/PetalburgWoods/scripts.pory"

# 194 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 195 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 197 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 199 "data/maps/PetalburgWoods/scripts.pory"

# 200 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 201 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 202 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 203 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 204 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 205 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 206 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 207 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 208 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 209 "data/maps/PetalburgWoods/scripts.pory"

# 210 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 211 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 213 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 214 "data/maps/PetalburgWoods/scripts.pory"

# 215 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 216 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 219 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 220 "data/maps/PetalburgWoods/scripts.pory"

# 221 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 222 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 223 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 224 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 225 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 227 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 228 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 229 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 230 "data/maps/PetalburgWoods/scripts.pory"

# 231 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 235 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 236 "data/maps/PetalburgWoods/scripts.pory"

# 237 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 240 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 241 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 242 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 243 "data/maps/PetalburgWoods/scripts.pory"

# 244 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 245 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 246 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 247 "data/maps/PetalburgWoods/scripts.pory"

# 248 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 249 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 250 "data/maps/PetalburgWoods/scripts.pory"
	end
# 251 "data/maps/PetalburgWoods/scripts.pory"

# 252 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 253 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 254 "data/maps/PetalburgWoods/scripts.pory"
	end
# 255 "data/maps/PetalburgWoods/scripts.pory"

# 256 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 257 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 258 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 259 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 260 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 261 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 262 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 263 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 264 "data/maps/PetalburgWoods/scripts.pory"
	release
# 265 "data/maps/PetalburgWoods/scripts.pory"
	end
# 266 "data/maps/PetalburgWoods/scripts.pory"

# 267 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 268 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 269 "data/maps/PetalburgWoods/scripts.pory"
	release
# 270 "data/maps/PetalburgWoods/scripts.pory"
	end
# 271 "data/maps/PetalburgWoods/scripts.pory"

# 272 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 273 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 274 "data/maps/PetalburgWoods/scripts.pory"
	end
# 275 "data/maps/PetalburgWoods/scripts.pory"

# 276 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 277 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 278 "data/maps/PetalburgWoods/scripts.pory"
	end
# 279 "data/maps/PetalburgWoods/scripts.pory"

# 280 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 281 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 282 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 283 "data/maps/PetalburgWoods/scripts.pory"
	end
# 284 "data/maps/PetalburgWoods/scripts.pory"

# 285 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 286 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose
# 287 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_AUTOCLOSE
# 288 "data/maps/PetalburgWoods/scripts.pory"
	release
# 289 "data/maps/PetalburgWoods/scripts.pory"
	end
# 290 "data/maps/PetalburgWoods/scripts.pory"

# 291 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 293 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 295 "data/maps/PetalburgWoods/scripts.pory"
	release
# 296 "data/maps/PetalburgWoods/scripts.pory"
	end
# 297 "data/maps/PetalburgWoods/scripts.pory"

# 298 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 299 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 300 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 301 "data/maps/PetalburgWoods/scripts.pory"
	release
# 302 "data/maps/PetalburgWoods/scripts.pory"
	end
# 303 "data/maps/PetalburgWoods/scripts.pory"

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 305 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 306 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 307 "data/maps/PetalburgWoods/scripts.pory"
	release
# 308 "data/maps/PetalburgWoods/scripts.pory"
	end
# 309 "data/maps/PetalburgWoods/scripts.pory"

# 310 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 311 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 312 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 313 "data/maps/PetalburgWoods/scripts.pory"
	release
# 314 "data/maps/PetalburgWoods/scripts.pory"
	end
# 315 "data/maps/PetalburgWoods/scripts.pory"

# 316 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 317 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 318 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 319 "data/maps/PetalburgWoods/scripts.pory"
	end
# 320 "data/maps/PetalburgWoods/scripts.pory"

# 321 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 322 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 323 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 324 "data/maps/PetalburgWoods/scripts.pory"

# 325 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 327 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SMOLIV around here?\p"
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 329 "data/maps/PetalburgWoods/scripts.pory"

# 330 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 331 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 344 "data/maps/PetalburgWoods/scripts.pory"

# 345 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 354 "data/maps/PetalburgWoods/scripts.pory"

# 355 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 364 "data/maps/PetalburgWoods/scripts.pory"

# 365 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you an EXP. Share as\n"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 372 "data/maps/PetalburgWoods/scripts.pory"

# 373 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 390 "data/maps/PetalburgWoods/scripts.pory"

# 391 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 402 "data/maps/PetalburgWoods/scripts.pory"

# 403 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 409 "data/maps/PetalburgWoods/scripts.pory"

# 410 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 414 "data/maps/PetalburgWoods/scripts.pory"

# 415 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 419 "data/maps/PetalburgWoods/scripts.pory"

# 420 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 426 "data/maps/PetalburgWoods/scripts.pory"

# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 431 "data/maps/PetalburgWoods/scripts.pory"

# 432 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 438 "data/maps/PetalburgWoods/scripts.pory"

# 439 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 444 "data/maps/PetalburgWoods/scripts.pory"

# 445 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 450 "data/maps/PetalburgWoods/scripts.pory"

# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 458 "data/maps/PetalburgWoods/scripts.pory"

# 459 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 468 "data/maps/PetalburgWoods/scripts.pory"

# 469 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
