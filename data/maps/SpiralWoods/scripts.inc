SpiralWoods_MapScripts::
	.byte 0


SpiralWoods_EventScript_Davis::
# 4 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, SpiralWoods_Text_DavisIntro, SpiralWoods_Text_DavisDefeat
# 5 "data/maps/SpiralWoods/scripts.pory"
	msgbox SpiralWoods_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralWoods_EventScript_Brent::
# 22 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_BRENT, SpiralWoods_Text_BrentIntro, SpiralWoods_Text_BrentDefeat
# 23 "data/maps/SpiralWoods/scripts.pory"
	msgbox SpiralWoods_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralWoods_EventScript_Rick::
# 40 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_RICK, SpiralWoods_Text_RickIntro, SpiralWoods_Text_RickDefeat
# 41 "data/maps/SpiralWoods/scripts.pory"
	msgbox SpiralWoods_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralWoods_EventScript_Donald::
# 58 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_DONALD, SpiralWoods_Text_DonaldIntro, SpiralWoods_Text_DonaldDefeat
# 59 "data/maps/SpiralWoods/scripts.pory"
	msgbox SpiralWoods_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralWoods_BerryJuice::
# 76 "data/maps/SpiralWoods/scripts.pory"
	lock
# 77 "data/maps/SpiralWoods/scripts.pory"
	faceplayer
# 78 "data/maps/SpiralWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_BERRY_JUICE, SpiralWoods_BerryJuice_2
SpiralWoods_BerryJuice_1:
# 81 "data/maps/SpiralWoods/scripts.pory"
	goto_if_unset FLAG_RECEIVED_BERRY_JUICE, SpiralWoods_BerryJuice_5
SpiralWoods_BerryJuice_4:
# 87 "data/maps/SpiralWoods/scripts.pory"
	release
	return

SpiralWoods_BerryJuice_2:
# 79 "data/maps/SpiralWoods/scripts.pory"
	msgbox SpiralWoods_BerryJuice_Text_0
	goto SpiralWoods_BerryJuice_1

SpiralWoods_BerryJuice_5:
# 82 "data/maps/SpiralWoods/scripts.pory"
	msgbox SpiralWoods_BerryJuice_Text_1
# 83 "data/maps/SpiralWoods/scripts.pory"
	giveitem ITEM_BERRY_JUICE
# 84 "data/maps/SpiralWoods/scripts.pory"
	setflag FLAG_RECEIVED_BERRY_JUICE
# 85 "data/maps/SpiralWoods/scripts.pory"
	msgbox SpiralWoods_BerryJuice_Text_2
	goto SpiralWoods_BerryJuice_4


# 90 "data/maps/SpiralWoods/scripts.pory"

# 91 "data/maps/SpiralWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 92 "data/maps/SpiralWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 93 "data/maps/SpiralWoods/scripts.pory"

# 94 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 95 "data/maps/SpiralWoods/scripts.pory"
	.byte 0
# 96 "data/maps/SpiralWoods/scripts.pory"

# 97 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 98 "data/maps/SpiralWoods/scripts.pory"
	lockall
# 99 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 100 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 101 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 102 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 103 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 104 "data/maps/SpiralWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 105 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 106 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 107 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 108 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 109 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 110 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 111 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 112 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 113 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 114 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 115 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 116 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 117 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 118 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 119 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 120 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 121 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 122 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 123 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 124 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 125 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 126 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 127 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 128 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 129 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 130 "data/maps/SpiralWoods/scripts.pory"
	end
# 131 "data/maps/SpiralWoods/scripts.pory"

# 132 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 133 "data/maps/SpiralWoods/scripts.pory"
	lockall
# 134 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 135 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 136 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 137 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 138 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 139 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 140 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 141 "data/maps/SpiralWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 142 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 143 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 144 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 145 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 146 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 147 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 148 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 149 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 150 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 151 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 152 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 153 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 154 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 155 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 156 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 157 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 158 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 159 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 160 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 161 "data/maps/SpiralWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 162 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 163 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 164 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 165 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 166 "data/maps/SpiralWoods/scripts.pory"
	end
# 167 "data/maps/SpiralWoods/scripts.pory"

# 168 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 169 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 170 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 171 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 172 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 173 "data/maps/SpiralWoods/scripts.pory"
	return
# 174 "data/maps/SpiralWoods/scripts.pory"

# 175 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 176 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 177 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 178 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 179 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 180 "data/maps/SpiralWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 181 "data/maps/SpiralWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 182 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 183 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 184 "data/maps/SpiralWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 185 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 186 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 187 "data/maps/SpiralWoods/scripts.pory"
	end
# 188 "data/maps/SpiralWoods/scripts.pory"

# 189 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 190 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 191 "data/maps/SpiralWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 192 "data/maps/SpiralWoods/scripts.pory"
	end
# 193 "data/maps/SpiralWoods/scripts.pory"

# 194 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 195 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 196 "data/maps/SpiralWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 197 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 198 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 199 "data/maps/SpiralWoods/scripts.pory"
	closemessage
# 200 "data/maps/SpiralWoods/scripts.pory"
	return
# 201 "data/maps/SpiralWoods/scripts.pory"

# 202 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 203 "data/maps/SpiralWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 204 "data/maps/SpiralWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 205 "data/maps/SpiralWoods/scripts.pory"
	releaseall
# 206 "data/maps/SpiralWoods/scripts.pory"
	end
# 207 "data/maps/SpiralWoods/scripts.pory"

# 208 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 209 "data/maps/SpiralWoods/scripts.pory"
	face_up
# 210 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 211 "data/maps/SpiralWoods/scripts.pory"
	delay_4
# 212 "data/maps/SpiralWoods/scripts.pory"
	face_right
# 213 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 214 "data/maps/SpiralWoods/scripts.pory"
	delay_8
# 215 "data/maps/SpiralWoods/scripts.pory"
	face_left
# 216 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 217 "data/maps/SpiralWoods/scripts.pory"
	delay_8
# 218 "data/maps/SpiralWoods/scripts.pory"
	face_down
# 219 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 220 "data/maps/SpiralWoods/scripts.pory"
	face_right
# 221 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 222 "data/maps/SpiralWoods/scripts.pory"
	delay_8
# 223 "data/maps/SpiralWoods/scripts.pory"
	face_up
# 224 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 225 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 226 "data/maps/SpiralWoods/scripts.pory"

# 227 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 228 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_right
# 229 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 230 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 231 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 232 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 233 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 234 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 235 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 236 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 237 "data/maps/SpiralWoods/scripts.pory"

# 238 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 239 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 240 "data/maps/SpiralWoods/scripts.pory"
	face_player
# 241 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 242 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 243 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 244 "data/maps/SpiralWoods/scripts.pory"

# 245 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 246 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 247 "data/maps/SpiralWoods/scripts.pory"
	face_player
# 248 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 249 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 250 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 251 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_right
# 252 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 253 "data/maps/SpiralWoods/scripts.pory"

# 254 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 255 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_left
# 256 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 257 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 258 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 259 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 260 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 261 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 262 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 263 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 264 "data/maps/SpiralWoods/scripts.pory"

# 265 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 266 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 267 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 268 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_up
# 269 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 270 "data/maps/SpiralWoods/scripts.pory"

# 271 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 272 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_right
# 273 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 274 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 275 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_left
# 276 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_up
# 277 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 278 "data/maps/SpiralWoods/scripts.pory"

# 279 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 280 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 281 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_right
# 282 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_up
# 283 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 284 "data/maps/SpiralWoods/scripts.pory"

# 285 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 286 "data/maps/SpiralWoods/scripts.pory"
	walk_in_place_faster_down
# 287 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 288 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 289 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 290 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 291 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 292 "data/maps/SpiralWoods/scripts.pory"
	face_up
# 293 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 294 "data/maps/SpiralWoods/scripts.pory"

# 295 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 296 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 297 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 298 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 299 "data/maps/SpiralWoods/scripts.pory"

# 300 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 301 "data/maps/SpiralWoods/scripts.pory"
	lock_facing_direction
# 302 "data/maps/SpiralWoods/scripts.pory"
	walk_up
# 303 "data/maps/SpiralWoods/scripts.pory"
	unlock_facing_direction
# 304 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 305 "data/maps/SpiralWoods/scripts.pory"

# 306 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 307 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 308 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 309 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 310 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 311 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_up
# 312 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 313 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 314 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 315 "data/maps/SpiralWoods/scripts.pory"

# 316 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 317 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 318 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 319 "data/maps/SpiralWoods/scripts.pory"
	walk_fast_down
# 320 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 321 "data/maps/SpiralWoods/scripts.pory"

# 322 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 323 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 324 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 325 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 326 "data/maps/SpiralWoods/scripts.pory"
	delay_16
# 327 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 328 "data/maps/SpiralWoods/scripts.pory"

# 329 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 330 "data/maps/SpiralWoods/scripts.pory"
	walk_down
# 331 "data/maps/SpiralWoods/scripts.pory"
	step_end
# 332 "data/maps/SpiralWoods/scripts.pory"

# 333 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 334 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 335 "data/maps/SpiralWoods/scripts.pory"
	end
# 336 "data/maps/SpiralWoods/scripts.pory"

# 337 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 338 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 339 "data/maps/SpiralWoods/scripts.pory"
	end
# 340 "data/maps/SpiralWoods/scripts.pory"

# 341 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 342 "data/maps/SpiralWoods/scripts.pory"
	lock
# 343 "data/maps/SpiralWoods/scripts.pory"
	faceplayer
# 344 "data/maps/SpiralWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 345 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 346 "data/maps/SpiralWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 347 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 348 "data/maps/SpiralWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 349 "data/maps/SpiralWoods/scripts.pory"
	release
# 350 "data/maps/SpiralWoods/scripts.pory"
	end
# 351 "data/maps/SpiralWoods/scripts.pory"

# 352 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 353 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 354 "data/maps/SpiralWoods/scripts.pory"
	release
# 355 "data/maps/SpiralWoods/scripts.pory"
	end
# 356 "data/maps/SpiralWoods/scripts.pory"

# 357 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 358 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 359 "data/maps/SpiralWoods/scripts.pory"
	end
# 360 "data/maps/SpiralWoods/scripts.pory"

# 361 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 362 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 363 "data/maps/SpiralWoods/scripts.pory"
	end
# 364 "data/maps/SpiralWoods/scripts.pory"

# 365 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 366 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 367 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 368 "data/maps/SpiralWoods/scripts.pory"
	end
# 369 "data/maps/SpiralWoods/scripts.pory"

# 370 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 371 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 372 "data/maps/SpiralWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 373 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 374 "data/maps/SpiralWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 375 "data/maps/SpiralWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 376 "data/maps/SpiralWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 377 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 378 "data/maps/SpiralWoods/scripts.pory"
	release
# 379 "data/maps/SpiralWoods/scripts.pory"
	end
# 380 "data/maps/SpiralWoods/scripts.pory"

# 381 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 382 "data/maps/SpiralWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 383 "data/maps/SpiralWoods/scripts.pory"
	waitmovement 0
# 384 "data/maps/SpiralWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 385 "data/maps/SpiralWoods/scripts.pory"
	release
# 386 "data/maps/SpiralWoods/scripts.pory"
	end
# 387 "data/maps/SpiralWoods/scripts.pory"

# 388 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 389 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 390 "data/maps/SpiralWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 391 "data/maps/SpiralWoods/scripts.pory"
	release
# 392 "data/maps/SpiralWoods/scripts.pory"
	end
# 393 "data/maps/SpiralWoods/scripts.pory"

# 394 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 395 "data/maps/SpiralWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 396 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 397 "data/maps/SpiralWoods/scripts.pory"
	release
# 398 "data/maps/SpiralWoods/scripts.pory"
	end
# 399 "data/maps/SpiralWoods/scripts.pory"

# 400 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 401 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 402 "data/maps/SpiralWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 403 "data/maps/SpiralWoods/scripts.pory"
	release
# 404 "data/maps/SpiralWoods/scripts.pory"
	end
# 405 "data/maps/SpiralWoods/scripts.pory"

# 406 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 407 "data/maps/SpiralWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 408 "data/maps/SpiralWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 409 "data/maps/SpiralWoods/scripts.pory"
	end
# 410 "data/maps/SpiralWoods/scripts.pory"

# 411 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 412 "data/maps/SpiralWoods/scripts.pory"
	.string "Hmmm…\n"
# 413 "data/maps/SpiralWoods/scripts.pory"
	.string "Not a one to be found…$"
# 414 "data/maps/SpiralWoods/scripts.pory"

# 415 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 416 "data/maps/SpiralWoods/scripts.pory"
	.string "Hello, have you seen any POKéMON\n"
# 417 "data/maps/SpiralWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 418 "data/maps/SpiralWoods/scripts.pory"
	.string "I really love that POKéMON.$"
# 419 "data/maps/SpiralWoods/scripts.pory"

# 420 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 421 "data/maps/SpiralWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 422 "data/maps/SpiralWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 423 "data/maps/SpiralWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 424 "data/maps/SpiralWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 425 "data/maps/SpiralWoods/scripts.pory"

# 426 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 427 "data/maps/SpiralWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 428 "data/maps/SpiralWoods/scripts.pory"
	.string "Hand over those papers!$"
# 429 "data/maps/SpiralWoods/scripts.pory"

# 430 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 431 "data/maps/SpiralWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 432 "data/maps/SpiralWoods/scripts.pory"
	.string "You're a POKéMON TRAINER, aren't you?\n"
# 433 "data/maps/SpiralWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 434 "data/maps/SpiralWoods/scripts.pory"

# 435 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 436 "data/maps/SpiralWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 437 "data/maps/SpiralWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 438 "data/maps/SpiralWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 439 "data/maps/SpiralWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 440 "data/maps/SpiralWoods/scripts.pory"
	.string "Come on and battle me!$"
# 441 "data/maps/SpiralWoods/scripts.pory"

# 442 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 443 "data/maps/SpiralWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 444 "data/maps/SpiralWoods/scripts.pory"

# 445 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 446 "data/maps/SpiralWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 447 "data/maps/SpiralWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 448 "data/maps/SpiralWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 449 "data/maps/SpiralWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 450 "data/maps/SpiralWoods/scripts.pory"
	.string "POKéMON…\p"
# 451 "data/maps/SpiralWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 452 "data/maps/SpiralWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 453 "data/maps/SpiralWoods/scripts.pory"
	.string "I'll let you go today!$"
# 454 "data/maps/SpiralWoods/scripts.pory"

# 455 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 456 "data/maps/SpiralWoods/scripts.pory"
	.string "Whew…\n"
# 457 "data/maps/SpiralWoods/scripts.pory"
	.string "That was awfully close!\p"
# 458 "data/maps/SpiralWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 459 "data/maps/SpiralWoods/scripts.pory"
	.string "these important papers.\p"
# 460 "data/maps/SpiralWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 461 "data/maps/SpiralWoods/scripts.pory"
	.string "my thanks!$"
# 462 "data/maps/SpiralWoods/scripts.pory"

# 463 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 464 "data/maps/SpiralWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 465 "data/maps/SpiralWoods/scripts.pory"
	.string "they were after something in\l"
# 466 "data/maps/SpiralWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 467 "data/maps/SpiralWoods/scripts.pory"

# 468 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 469 "data/maps/SpiralWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 470 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 471 "data/maps/SpiralWoods/scripts.pory"

# 472 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 473 "data/maps/SpiralWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 474 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 475 "data/maps/SpiralWoods/scripts.pory"

# 476 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 477 "data/maps/SpiralWoods/scripts.pory"
	.string "I caught a whole bunch of POKéMON!\p"
# 478 "data/maps/SpiralWoods/scripts.pory"
	.string "Go, go, go!\n"
# 479 "data/maps/SpiralWoods/scripts.pory"
	.string "My BUG POKéMON team!$"
# 480 "data/maps/SpiralWoods/scripts.pory"

# 481 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 482 "data/maps/SpiralWoods/scripts.pory"
	.string "I have all these POKéMON,\n"
# 483 "data/maps/SpiralWoods/scripts.pory"
	.string "but I couldn't win…$"
# 484 "data/maps/SpiralWoods/scripts.pory"

# 485 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 486 "data/maps/SpiralWoods/scripts.pory"
	.string "I caught a bunch of POKéMON.\n"
# 487 "data/maps/SpiralWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 488 "data/maps/SpiralWoods/scripts.pory"

# 489 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 490 "data/maps/SpiralWoods/scripts.pory"
	.string "If you take BUG POKéMON to school,\n"
# 491 "data/maps/SpiralWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 492 "data/maps/SpiralWoods/scripts.pory"

# 493 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 494 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 495 "data/maps/SpiralWoods/scripts.pory"

# 496 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 497 "data/maps/SpiralWoods/scripts.pory"
	.string "If you have a big BUG POKéMON,\n"
# 498 "data/maps/SpiralWoods/scripts.pory"
	.string "people respect you for it.$"
# 499 "data/maps/SpiralWoods/scripts.pory"

# 500 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 501 "data/maps/SpiralWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 502 "data/maps/SpiralWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 503 "data/maps/SpiralWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 504 "data/maps/SpiralWoods/scripts.pory"

# 505 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 506 "data/maps/SpiralWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 507 "data/maps/SpiralWoods/scripts.pory"
	.string "POKéMON grow up!\p"
# 508 "data/maps/SpiralWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 509 "data/maps/SpiralWoods/scripts.pory"

# 510 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 511 "data/maps/SpiralWoods/scripts.pory"
	.string "My BUG POKéMON have grown.\n"
# 512 "data/maps/SpiralWoods/scripts.pory"
	.string "I'll be popular again.$"
# 513 "data/maps/SpiralWoods/scripts.pory"

# 514 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 515 "data/maps/SpiralWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 516 "data/maps/SpiralWoods/scripts.pory"

# 517 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 518 "data/maps/SpiralWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 519 "data/maps/SpiralWoods/scripts.pory"
	.string "strong POKéMON, right?\l"
# 520 "data/maps/SpiralWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 521 "data/maps/SpiralWoods/scripts.pory"

# 522 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 523 "data/maps/SpiralWoods/scripts.pory"
	.string "Yo, there!\n"
# 524 "data/maps/SpiralWoods/scripts.pory"
	.string "Your POKéMON doing okay?\p"
# 525 "data/maps/SpiralWoods/scripts.pory"
	.string "If your POKéMON are weak and you want\n"
# 526 "data/maps/SpiralWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 527 "data/maps/SpiralWoods/scripts.pory"
	.string "of tall grass.$"
# 528 "data/maps/SpiralWoods/scripts.pory"

# 529 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 530 "data/maps/SpiralWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 531 "data/maps/SpiralWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 532 "data/maps/SpiralWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 533 "data/maps/SpiralWoods/scripts.pory"
	.string "walking.$"
# 534 "data/maps/SpiralWoods/scripts.pory"

# 535 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 536 "data/maps/SpiralWoods/scripts.pory"
	.string "Oh, neat!\n"
# 537 "data/maps/SpiralWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 538 "data/maps/SpiralWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 539 "data/maps/SpiralWoods/scripts.pory"
	.string "You should try using this item.$"
# 540 "data/maps/SpiralWoods/scripts.pory"

# 541 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 542 "data/maps/SpiralWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 543 "data/maps/SpiralWoods/scripts.pory"
	.string "If a POKéMON holds that item, its\l"
# 544 "data/maps/SpiralWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 545 "data/maps/SpiralWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 546 "data/maps/SpiralWoods/scripts.pory"
	.string "other convenient items for POKéMON\l"
# 547 "data/maps/SpiralWoods/scripts.pory"
	.string "to hold.$"
# 548 "data/maps/SpiralWoods/scripts.pory"

# 549 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 550 "data/maps/SpiralWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 551 "data/maps/SpiralWoods/scripts.pory"
	.string "Any POKéMON that appears even once\n"
# 552 "data/maps/SpiralWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 553 "data/maps/SpiralWoods/scripts.pory"
	.string "To raise a weak POKéMON, put it at the\n"
# 554 "data/maps/SpiralWoods/scripts.pory"
	.string "left of the team list.\p"
# 555 "data/maps/SpiralWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 556 "data/maps/SpiralWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 557 "data/maps/SpiralWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 558 "data/maps/SpiralWoods/scripts.pory"

# 559 "data/maps/SpiralWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 560 "data/maps/SpiralWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 561 "data/maps/SpiralWoods/scripts.pory"
	.string "In addition to Hit Points (HP), POKéMON\n"
# 562 "data/maps/SpiralWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 563 "data/maps/SpiralWoods/scripts.pory"
	.string "make moves during battle.\p"
# 564 "data/maps/SpiralWoods/scripts.pory"
	.string "If a POKéMON runs out of PP, it must be\n"
# 565 "data/maps/SpiralWoods/scripts.pory"
	.string "taken to a POKéMON CENTER.$"

SpiralWoods_BerryJuice_Text_0:
# 79 "data/maps/SpiralWoods/scripts.pory"
	.string "That Berry Juice is rich in Vitamin C.$"

SpiralWoods_BerryJuice_Text_1:
# 82 "data/maps/SpiralWoods/scripts.pory"
	.string "Are you a Trainer? I've been looking for\n"
	.string "someone to give this to.$"

SpiralWoods_BerryJuice_Text_2:
# 85 "data/maps/SpiralWoods/scripts.pory"
	.string "It's rich in Vitamin C!$"

SpiralWoods_Text_DavisIntro::
# 9 "data/maps/SpiralWoods/scripts.pory"
	.string "This is my awesome Bug Pokémon! My big\n"
	.string "brother got it for me.$"

SpiralWoods_Text_DavisDefeat::
# 13 "data/maps/SpiralWoods/scripts.pory"
	.string "Waaaah! You meanie!$"

SpiralWoods_Text_DavisPostBattle::
# 17 "data/maps/SpiralWoods/scripts.pory"
	.string "Don't tell my brother I lost. You have to\n"
	.string "keep it a secret!$"

SpiralWoods_Text_BrentIntro::
# 27 "data/maps/SpiralWoods/scripts.pory"
	.string "Hey! Did you beat my little brother?$"

SpiralWoods_Text_BrentDefeat::
# 31 "data/maps/SpiralWoods/scripts.pory"
	.string "Whoopsie! I lost!$"

SpiralWoods_Text_BrentPostBattle::
# 35 "data/maps/SpiralWoods/scripts.pory"
	.string "Looks like you beat me too…$"

SpiralWoods_Text_RickIntro::
# 45 "data/maps/SpiralWoods/scripts.pory"
	.string "Hahah! Our eyes met! I'll take you on\n"
	.string "with my Bug Pokémon!$"

SpiralWoods_Text_RickDefeat::
# 49 "data/maps/SpiralWoods/scripts.pory"
	.string "Ow! Down and out!$"

SpiralWoods_Text_RickPostBattle::
# 53 "data/maps/SpiralWoods/scripts.pory"
	.string "If you lock eyes with a Trainer, you\n"
	.string "have to challenge! It's a rule!$"

SpiralWoods_Text_DonaldIntro::
# 63 "data/maps/SpiralWoods/scripts.pory"
	.string "So, we finally meet! My Bug Pokémon will\n"
	.string "keep you company!$"

SpiralWoods_Text_DonaldDefeat::
# 67 "data/maps/SpiralWoods/scripts.pory"
	.string "I wish we'd never met…$"

SpiralWoods_Text_DonaldPostBattle::
# 71 "data/maps/SpiralWoods/scripts.pory"
	.string "I want to catch some more bugs… Can\n"
	.string "you hurry up and move?$"
