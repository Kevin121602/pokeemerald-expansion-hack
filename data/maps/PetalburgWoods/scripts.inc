PetalburgWoods_EventScript_BerryJuice::
# 2 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 3 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 4 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_JUICE, PetalburgWoods_EventScript_BerryJuice_2
# 7 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_BerryJuice_Text_1
# 8 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 9 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_JUICE
# 10 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_BerryJuice_Text_0
PetalburgWoods_EventScript_BerryJuice_1:
# 12 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	end

PetalburgWoods_EventScript_BerryJuice_2:
# 5 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_BerryJuice_Text_0
	goto PetalburgWoods_EventScript_BerryJuice_1


# 16 "data/maps/PetalburgWoods/scripts.pory"

# 17 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 1
# 18 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 19 "data/maps/PetalburgWoods/scripts.pory"

# 20 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 21 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 22 "data/maps/PetalburgWoods/scripts.pory"

# 23 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 24 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 25 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 26 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 27 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 28 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 29 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 30 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 31 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 32 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 33 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 34 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 36 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 37 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 38 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 40 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 41 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 42 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 43 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 44 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 46 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 47 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 48 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 49 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 50 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 51 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 52 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 53 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 54 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 55 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 57 "data/maps/PetalburgWoods/scripts.pory"
	end
# 58 "data/maps/PetalburgWoods/scripts.pory"

# 59 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 60 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 61 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 62 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 63 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 64 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 65 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 69 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 70 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 71 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 72 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 73 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 74 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 75 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 76 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 77 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 79 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 80 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 81 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 82 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 83 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 84 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 86 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 87 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 88 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 89 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 90 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 94 "data/maps/PetalburgWoods/scripts.pory"
	end
# 95 "data/maps/PetalburgWoods/scripts.pory"

# 96 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 97 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 98 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 99 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 101 "data/maps/PetalburgWoods/scripts.pory"
	return
# 102 "data/maps/PetalburgWoods/scripts.pory"

# 103 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 104 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 105 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 106 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 107 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 109 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 110 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 113 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 114 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 115 "data/maps/PetalburgWoods/scripts.pory"
	end
# 116 "data/maps/PetalburgWoods/scripts.pory"

# 117 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 118 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 119 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 120 "data/maps/PetalburgWoods/scripts.pory"
	end
# 121 "data/maps/PetalburgWoods/scripts.pory"

# 122 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 123 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 124 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 125 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 126 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 127 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 128 "data/maps/PetalburgWoods/scripts.pory"
	return
# 129 "data/maps/PetalburgWoods/scripts.pory"

# 130 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 131 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 132 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 133 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_DEFEATED_WOODS_GRUNT
# 134 "data/maps/PetalburgWoods/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 135 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 136 "data/maps/PetalburgWoods/scripts.pory"
	end
# 137 "data/maps/PetalburgWoods/scripts.pory"

# 138 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 139 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 141 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 142 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 143 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 144 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 145 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 146 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 147 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 148 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 149 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 150 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 151 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 152 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 153 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 154 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 155 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 156 "data/maps/PetalburgWoods/scripts.pory"

# 157 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 162 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 163 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 164 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 166 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 167 "data/maps/PetalburgWoods/scripts.pory"

# 168 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 169 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 170 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 174 "data/maps/PetalburgWoods/scripts.pory"

# 175 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 176 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 177 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 179 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 180 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 181 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 183 "data/maps/PetalburgWoods/scripts.pory"

# 184 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 187 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 188 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 189 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 193 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 194 "data/maps/PetalburgWoods/scripts.pory"

# 195 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 197 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 199 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 200 "data/maps/PetalburgWoods/scripts.pory"

# 201 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 202 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 203 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 204 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 205 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 206 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 207 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 208 "data/maps/PetalburgWoods/scripts.pory"

# 209 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 210 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 211 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 213 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 214 "data/maps/PetalburgWoods/scripts.pory"

# 215 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 216 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 217 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 218 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 221 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 222 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 223 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 224 "data/maps/PetalburgWoods/scripts.pory"

# 225 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 226 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 228 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 229 "data/maps/PetalburgWoods/scripts.pory"

# 230 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 231 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 232 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 233 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 234 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 235 "data/maps/PetalburgWoods/scripts.pory"

# 236 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 237 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 238 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 239 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 240 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 241 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 242 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 243 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 244 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 245 "data/maps/PetalburgWoods/scripts.pory"

# 246 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 247 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 248 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 249 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 250 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 251 "data/maps/PetalburgWoods/scripts.pory"

# 252 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 253 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 254 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 255 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 256 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 257 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 258 "data/maps/PetalburgWoods/scripts.pory"

# 259 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 260 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 261 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 262 "data/maps/PetalburgWoods/scripts.pory"

# 263 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 264 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 265 "data/maps/PetalburgWoods/scripts.pory"
	end
# 266 "data/maps/PetalburgWoods/scripts.pory"

# 267 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 268 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 269 "data/maps/PetalburgWoods/scripts.pory"
	end
# 270 "data/maps/PetalburgWoods/scripts.pory"

# 271 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 272 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 273 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 274 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 275 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 276 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 277 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 278 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 279 "data/maps/PetalburgWoods/scripts.pory"
	release
# 280 "data/maps/PetalburgWoods/scripts.pory"
	end
# 281 "data/maps/PetalburgWoods/scripts.pory"

# 282 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 283 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 284 "data/maps/PetalburgWoods/scripts.pory"
	release
# 285 "data/maps/PetalburgWoods/scripts.pory"
	end
# 286 "data/maps/PetalburgWoods/scripts.pory"

# 287 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 288 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 289 "data/maps/PetalburgWoods/scripts.pory"
	end
# 290 "data/maps/PetalburgWoods/scripts.pory"

# 291 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 293 "data/maps/PetalburgWoods/scripts.pory"
	end
# 294 "data/maps/PetalburgWoods/scripts.pory"

# 295 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 296 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 297 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 298 "data/maps/PetalburgWoods/scripts.pory"
	end
# 299 "data/maps/PetalburgWoods/scripts.pory"

# 300 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 301 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose
# 302 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_AUTOCLOSE
# 303 "data/maps/PetalburgWoods/scripts.pory"
	release
# 304 "data/maps/PetalburgWoods/scripts.pory"
	end
# 305 "data/maps/PetalburgWoods/scripts.pory"

# 306 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 307 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 308 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 310 "data/maps/PetalburgWoods/scripts.pory"
	release
# 311 "data/maps/PetalburgWoods/scripts.pory"
	end
# 312 "data/maps/PetalburgWoods/scripts.pory"

# 313 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 314 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 315 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 316 "data/maps/PetalburgWoods/scripts.pory"
	release
# 317 "data/maps/PetalburgWoods/scripts.pory"
	end
# 318 "data/maps/PetalburgWoods/scripts.pory"

# 319 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 320 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 321 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 322 "data/maps/PetalburgWoods/scripts.pory"
	release
# 323 "data/maps/PetalburgWoods/scripts.pory"
	end
# 324 "data/maps/PetalburgWoods/scripts.pory"

# 325 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 326 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 327 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 328 "data/maps/PetalburgWoods/scripts.pory"
	release
# 329 "data/maps/PetalburgWoods/scripts.pory"
	end
# 330 "data/maps/PetalburgWoods/scripts.pory"

# 331 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 332 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 333 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 334 "data/maps/PetalburgWoods/scripts.pory"
	end
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SMOLIV around here?\p"
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 344 "data/maps/PetalburgWoods/scripts.pory"

# 345 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 350 "data/maps/PetalburgWoods/scripts.pory"

# 351 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 352 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 354 "data/maps/PetalburgWoods/scripts.pory"

# 355 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 359 "data/maps/PetalburgWoods/scripts.pory"

# 360 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 364 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 365 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 366 "data/maps/PetalburgWoods/scripts.pory"

# 367 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 369 "data/maps/PetalburgWoods/scripts.pory"

# 370 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 372 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 373 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON…\p"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 377 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 378 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 379 "data/maps/PetalburgWoods/scripts.pory"

# 380 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 381 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 382 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 385 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you an EXP. Share as\n"
# 386 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 387 "data/maps/PetalburgWoods/scripts.pory"

# 388 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 390 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 391 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 392 "data/maps/PetalburgWoods/scripts.pory"

# 393 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 394 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 395 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 396 "data/maps/PetalburgWoods/scripts.pory"

# 397 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 398 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 399 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 400 "data/maps/PetalburgWoods/scripts.pory"

# 401 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 402 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 403 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 409 "data/maps/PetalburgWoods/scripts.pory"

# 410 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 413 "data/maps/PetalburgWoods/scripts.pory"

# 414 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 415 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 417 "data/maps/PetalburgWoods/scripts.pory"

# 418 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 419 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 420 "data/maps/PetalburgWoods/scripts.pory"

# 421 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 423 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 424 "data/maps/PetalburgWoods/scripts.pory"

# 425 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 426 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 427 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 429 "data/maps/PetalburgWoods/scripts.pory"

# 430 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 431 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 432 "data/maps/PetalburgWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 434 "data/maps/PetalburgWoods/scripts.pory"

# 435 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 438 "data/maps/PetalburgWoods/scripts.pory"

# 439 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 441 "data/maps/PetalburgWoods/scripts.pory"

# 442 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 444 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 445 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 446 "data/maps/PetalburgWoods/scripts.pory"

# 447 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 450 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 451 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 453 "data/maps/PetalburgWoods/scripts.pory"

# 454 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 458 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 459 "data/maps/PetalburgWoods/scripts.pory"

# 460 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 465 "data/maps/PetalburgWoods/scripts.pory"

# 466 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 468 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 469 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 473 "data/maps/PetalburgWoods/scripts.pory"

# 474 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 476 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 477 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 478 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 479 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 480 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 481 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 482 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 483 "data/maps/PetalburgWoods/scripts.pory"

# 484 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 485 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 486 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 487 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 488 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 490 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

PetalburgWoods_EventScript_BerryJuice_Text_0:
# 5 "data/maps/PetalburgWoods/scripts.pory"
	.string "That juice is rich in Vitamin C!$"

PetalburgWoods_EventScript_BerryJuice_Text_1:
# 7 "data/maps/PetalburgWoods/scripts.pory"
	.string "I've been looking for a trainer to give\n"
	.string "this to…$"
