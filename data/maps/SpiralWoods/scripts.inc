# 1 "data/maps/SpiralWoods/scripts.pory"

# 2 "data/maps/SpiralWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 3 "data/maps/SpiralWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 4 "data/maps/SpiralWoods/scripts.pory"

# 5 "data/maps/SpiralWoods/scripts.pory"
SpiralWoods_MapScripts::
# 6 "data/maps/SpiralWoods/scripts.pory"
	.byte 0
# 7 "data/maps/SpiralWoods/scripts.pory"

# 8 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 9 "data/maps/SpiralWoods/scripts.pory"
	lockall
# 10 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 11 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 12 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 13 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 14 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 15 "data/maps/SpiralWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 16 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 17 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 18 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 19 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 20 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 21 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 22 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 23 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 24 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 25 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 26 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 27 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 28 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 29 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 30 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 31 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 32 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 33 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 34 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 35 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 36 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 37 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 38 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 39 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 41 "data/maps/SpiralWoods/scripts.pory"
	end
# 42 "data/maps/SpiralWoods/scripts.pory"

# 43 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 44 "data/maps/SpiralWoods/scripts.pory"
	lockall
# 45 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 46 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 47 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 48 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 49 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 50 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 51 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 52 "data/maps/SpiralWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 53 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 54 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 55 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 56 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 57 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 58 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 59 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 60 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 61 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 62 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 63 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 64 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 66 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 67 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 68 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 69 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 70 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 71 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 73 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 74 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 75 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 77 "data/maps/SpiralWoods/scripts.pory"
	end
# 78 "data/maps/SpiralWoods/scripts.pory"

# 79 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 80 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 81 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 83 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 84 "data/maps/SpiralWoods/scripts.pory"
	return
# 85 "data/maps/SpiralWoods/scripts.pory"

# 86 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 87 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 88 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 89 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 90 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 91 "data/maps/SpiralWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 92 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 94 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 95 "data/maps/SpiralWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 96 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 97 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 98 "data/maps/SpiralWoods/scripts.pory"
	end
# 99 "data/maps/SpiralWoods/scripts.pory"

# 100 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 101 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 102 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 103 "data/maps/SpiralWoods/scripts.pory"
	end
# 104 "data/maps/SpiralWoods/scripts.pory"

# 105 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 106 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 107 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 108 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 109 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 110 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 111 "data/maps/SpiralWoods/scripts.pory"
	return
# 112 "data/maps/SpiralWoods/scripts.pory"

# 113 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 114 "data/maps/SpiralWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 115 "data/maps/SpiralWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 116 "data/maps/SpiralWoods/scripts.pory"
	releaseall
# 117 "data/maps/SpiralWoods/scripts.pory"
	end
# 118 "data/maps/SpiralWoods/scripts.pory"

# 119 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 120 "data/maps/SpiralWoods/scripts.pory"
	face_up
# 121 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 122 "data/maps/SpiralWoods/scripts.pory"
	delay_4
# 123 "data/maps/SpiralWoods/scripts.pory"
	face_right
# 124 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 125 "data/maps/SpiralWoods/scripts.pory"
	delay_8
# 126 "data/maps/SpiralWoods/scripts.pory"
	face_left
# 127 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 128 "data/maps/SpiralWoods/scripts.pory"
	delay_8
# 129 "data/maps/SpiralWoods/scripts.pory"
	face_down
# 130 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 131 "data/maps/SpiralWoods/scripts.pory"
	face_right
# 132 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 133 "data/maps/SpiralWoods/scripts.pory"
	delay_8
# 134 "data/maps/SpiralWoods/scripts.pory"
	face_up
# 135 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 136 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 137 "data/maps/SpiralWoods/scripts.pory"

# 138 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 139 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_right
# 140 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 145 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 147 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 148 "data/maps/SpiralWoods/scripts.pory"

# 149 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 150 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 151 "data/maps/SpiralWoods/scripts.pory"
	face_player
# 152 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 153 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 154 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 155 "data/maps/SpiralWoods/scripts.pory"

# 156 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 157 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 158 "data/maps/SpiralWoods/scripts.pory"
	face_player
# 159 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 160 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 161 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 162 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_right
# 163 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 164 "data/maps/SpiralWoods/scripts.pory"

# 165 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 166 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_left
# 167 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 172 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 174 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 175 "data/maps/SpiralWoods/scripts.pory"

# 176 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 177 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 178 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 179 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_up
# 180 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 181 "data/maps/SpiralWoods/scripts.pory"

# 182 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 183 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_right
# 184 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 185 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 186 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_left
# 187 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 189 "data/maps/SpiralWoods/scripts.pory"

# 190 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 191 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 192 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_right
# 193 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_up
# 194 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 195 "data/maps/SpiralWoods/scripts.pory"

# 196 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 197 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_down
# 198 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 199 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 200 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 201 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 202 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 203 "data/maps/SpiralWoods/scripts.pory"
	face_up
# 204 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 205 "data/maps/SpiralWoods/scripts.pory"

# 206 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 207 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 208 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 209 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 210 "data/maps/SpiralWoods/scripts.pory"

# 211 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 212 "data/maps/SpiralWoods/scripts.pory"
	lock_facing_direction
# 213 "data/maps/SpiralWoods/scripts.pory"
	walk_up
# 214 "data/maps/SpiralWoods/scripts.pory"
	unlock_facing_direction
# 215 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 216 "data/maps/SpiralWoods/scripts.pory"

# 217 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 218 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 220 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 221 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 222 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 223 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 224 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 225 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 226 "data/maps/SpiralWoods/scripts.pory"

# 227 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 228 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 229 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 230 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 231 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 232 "data/maps/SpiralWoods/scripts.pory"

# 233 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 234 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 235 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 236 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 237 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 238 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 239 "data/maps/SpiralWoods/scripts.pory"

# 240 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 241 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 242 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 243 "data/maps/SpiralWoods/scripts.pory"

# 244 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 245 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 246 "data/maps/SpiralWoods/scripts.pory"
	end
# 247 "data/maps/SpiralWoods/scripts.pory"

# 248 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 249 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 250 "data/maps/SpiralWoods/scripts.pory"
	end
# 251 "data/maps/SpiralWoods/scripts.pory"

# 252 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 253 "data/maps/SpiralWoods/scripts.pory"
	lock
# 254 "data/maps/SpiralWoods/scripts.pory"
	faceplayer
# 255 "data/maps/SpiralWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 256 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 257 "data/maps/SpiralWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 258 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 259 "data/maps/SpiralWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 260 "data/maps/SpiralWoods/scripts.pory"
	release
# 261 "data/maps/SpiralWoods/scripts.pory"
	end
# 262 "data/maps/SpiralWoods/scripts.pory"

# 263 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 264 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 265 "data/maps/SpiralWoods/scripts.pory"
	release
# 266 "data/maps/SpiralWoods/scripts.pory"
	end
# 267 "data/maps/SpiralWoods/scripts.pory"

# 268 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 269 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 270 "data/maps/SpiralWoods/scripts.pory"
	end
# 271 "data/maps/SpiralWoods/scripts.pory"

# 272 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 273 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 274 "data/maps/SpiralWoods/scripts.pory"
	end
# 275 "data/maps/SpiralWoods/scripts.pory"

# 276 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 277 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 278 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 279 "data/maps/SpiralWoods/scripts.pory"
	end
# 280 "data/maps/SpiralWoods/scripts.pory"

# 281 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 282 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 283 "data/maps/SpiralWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 284 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 285 "data/maps/SpiralWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 286 "data/maps/SpiralWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 287 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 288 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 289 "data/maps/SpiralWoods/scripts.pory"
	release
# 290 "data/maps/SpiralWoods/scripts.pory"
	end
# 291 "data/maps/SpiralWoods/scripts.pory"

# 292 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 293 "data/maps/SpiralWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 294 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 295 "data/maps/SpiralWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 296 "data/maps/SpiralWoods/scripts.pory"
	release
# 297 "data/maps/SpiralWoods/scripts.pory"
	end
# 298 "data/maps/SpiralWoods/scripts.pory"

# 299 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 300 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 301 "data/maps/SpiralWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 302 "data/maps/SpiralWoods/scripts.pory"
	release
# 303 "data/maps/SpiralWoods/scripts.pory"
	end
# 304 "data/maps/SpiralWoods/scripts.pory"

# 305 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 306 "data/maps/SpiralWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 307 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 308 "data/maps/SpiralWoods/scripts.pory"
	release
# 309 "data/maps/SpiralWoods/scripts.pory"
	end
# 310 "data/maps/SpiralWoods/scripts.pory"

# 311 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 312 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 313 "data/maps/SpiralWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 314 "data/maps/SpiralWoods/scripts.pory"
	release
# 315 "data/maps/SpiralWoods/scripts.pory"
	end
# 316 "data/maps/SpiralWoods/scripts.pory"

# 317 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 318 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 319 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 320 "data/maps/SpiralWoods/scripts.pory"
	end
# 321 "data/maps/SpiralWoods/scripts.pory"

# 322 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 323 "data/maps/SpiralWoods/scripts.pory"
	.string "Hmmm…\n"
# 324 "data/maps/SpiralWoods/scripts.pory"
	.string "Not a one to be found…$"
# 325 "data/maps/SpiralWoods/scripts.pory"

# 326 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 327 "data/maps/SpiralWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 328 "data/maps/SpiralWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 329 "data/maps/SpiralWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 330 "data/maps/SpiralWoods/scripts.pory"

# 331 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 332 "data/maps/SpiralWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 333 "data/maps/SpiralWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 334 "data/maps/SpiralWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 335 "data/maps/SpiralWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 336 "data/maps/SpiralWoods/scripts.pory"

# 337 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 338 "data/maps/SpiralWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 339 "data/maps/SpiralWoods/scripts.pory"
	.string "Hand over those papers!$"
# 340 "data/maps/SpiralWoods/scripts.pory"

# 341 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 342 "data/maps/SpiralWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 343 "data/maps/SpiralWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 344 "data/maps/SpiralWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 345 "data/maps/SpiralWoods/scripts.pory"

# 346 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 347 "data/maps/SpiralWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 348 "data/maps/SpiralWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 349 "data/maps/SpiralWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 350 "data/maps/SpiralWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 351 "data/maps/SpiralWoods/scripts.pory"
	.string "Come on and battle me!$"
# 352 "data/maps/SpiralWoods/scripts.pory"

# 353 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 354 "data/maps/SpiralWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 355 "data/maps/SpiralWoods/scripts.pory"

# 356 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 357 "data/maps/SpiralWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 358 "data/maps/SpiralWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 359 "data/maps/SpiralWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 360 "data/maps/SpiralWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 361 "data/maps/SpiralWoods/scripts.pory"
	.string "POKéMON…\p"
# 362 "data/maps/SpiralWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 363 "data/maps/SpiralWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 364 "data/maps/SpiralWoods/scripts.pory"
	.string "I'll let you go today!$"
# 365 "data/maps/SpiralWoods/scripts.pory"

# 366 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 367 "data/maps/SpiralWoods/scripts.pory"
	.string "Whew…\n"
# 368 "data/maps/SpiralWoods/scripts.pory"
	.string "That was awfully close!\p"
# 369 "data/maps/SpiralWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 370 "data/maps/SpiralWoods/scripts.pory"
	.string "these important papers.\p"
# 371 "data/maps/SpiralWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 372 "data/maps/SpiralWoods/scripts.pory"
	.string "my thanks!$"
# 373 "data/maps/SpiralWoods/scripts.pory"

# 374 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 375 "data/maps/SpiralWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 376 "data/maps/SpiralWoods/scripts.pory"
	.string "they were after something in\l"
# 377 "data/maps/SpiralWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 378 "data/maps/SpiralWoods/scripts.pory"

# 379 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 380 "data/maps/SpiralWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 381 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 382 "data/maps/SpiralWoods/scripts.pory"

# 383 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 384 "data/maps/SpiralWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 385 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 386 "data/maps/SpiralWoods/scripts.pory"

# 387 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 388 "data/maps/SpiralWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 389 "data/maps/SpiralWoods/scripts.pory"
	.string "Go, go, go!\n"
# 390 "data/maps/SpiralWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 391 "data/maps/SpiralWoods/scripts.pory"

# 392 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 393 "data/maps/SpiralWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 394 "data/maps/SpiralWoods/scripts.pory"
	.string "but I couldn't win…$"
# 395 "data/maps/SpiralWoods/scripts.pory"

# 396 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 397 "data/maps/SpiralWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 398 "data/maps/SpiralWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 399 "data/maps/SpiralWoods/scripts.pory"

# 400 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 401 "data/maps/SpiralWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 402 "data/maps/SpiralWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 403 "data/maps/SpiralWoods/scripts.pory"

# 404 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 405 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 406 "data/maps/SpiralWoods/scripts.pory"

# 407 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 408 "data/maps/SpiralWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 409 "data/maps/SpiralWoods/scripts.pory"
	.string "people respect you for it.$"
# 410 "data/maps/SpiralWoods/scripts.pory"

# 411 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 412 "data/maps/SpiralWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 413 "data/maps/SpiralWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 414 "data/maps/SpiralWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 415 "data/maps/SpiralWoods/scripts.pory"

# 416 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 417 "data/maps/SpiralWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 418 "data/maps/SpiralWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 419 "data/maps/SpiralWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 420 "data/maps/SpiralWoods/scripts.pory"

# 421 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 422 "data/maps/SpiralWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 423 "data/maps/SpiralWoods/scripts.pory"
	.string "I'll be popular again.$"
# 424 "data/maps/SpiralWoods/scripts.pory"

# 425 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 426 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 427 "data/maps/SpiralWoods/scripts.pory"

# 428 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 429 "data/maps/SpiralWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 430 "data/maps/SpiralWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 431 "data/maps/SpiralWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 432 "data/maps/SpiralWoods/scripts.pory"

# 433 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 434 "data/maps/SpiralWoods/scripts.pory"
	.string "Yo, there!\n"
# 435 "data/maps/SpiralWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 436 "data/maps/SpiralWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 437 "data/maps/SpiralWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 438 "data/maps/SpiralWoods/scripts.pory"
	.string "of tall grass.$"
# 439 "data/maps/SpiralWoods/scripts.pory"

# 440 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 441 "data/maps/SpiralWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 442 "data/maps/SpiralWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 443 "data/maps/SpiralWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 444 "data/maps/SpiralWoods/scripts.pory"
	.string "walking.$"
# 445 "data/maps/SpiralWoods/scripts.pory"

# 446 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 447 "data/maps/SpiralWoods/scripts.pory"
	.string "Oh, neat!\n"
# 448 "data/maps/SpiralWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 449 "data/maps/SpiralWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 450 "data/maps/SpiralWoods/scripts.pory"
	.string "You should try using this item.$"
# 451 "data/maps/SpiralWoods/scripts.pory"

# 452 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 453 "data/maps/SpiralWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 454 "data/maps/SpiralWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 455 "data/maps/SpiralWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 456 "data/maps/SpiralWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 457 "data/maps/SpiralWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 458 "data/maps/SpiralWoods/scripts.pory"
	.string "to hold.$"
# 459 "data/maps/SpiralWoods/scripts.pory"

# 460 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 461 "data/maps/SpiralWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 462 "data/maps/SpiralWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 463 "data/maps/SpiralWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 464 "data/maps/SpiralWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 465 "data/maps/SpiralWoods/scripts.pory"
	.string "left of the team list.\p"
# 466 "data/maps/SpiralWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 467 "data/maps/SpiralWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 468 "data/maps/SpiralWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 469 "data/maps/SpiralWoods/scripts.pory"

# 470 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 471 "data/maps/SpiralWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 472 "data/maps/SpiralWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 473 "data/maps/SpiralWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 474 "data/maps/SpiralWoods/scripts.pory"
	.string "make moves during battle.\p"
# 475 "data/maps/SpiralWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 476 "data/maps/SpiralWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"
