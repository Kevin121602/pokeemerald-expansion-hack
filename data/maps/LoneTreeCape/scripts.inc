LoneTreeCape_MapScripts::
	.byte 0


LoneTreeCape_EventScript_Tiana::
# 4 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_single TRAINER_TIANA, LoneTreeCape_Text_TianaIntro, LoneTreeCape_Text_TianaDefeated
# 5 "data/maps/LoneTreeCape/scripts.pory"
	msgbox LoneTreeCape_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 6 "data/maps/LoneTreeCape/scripts.pory"
	release
	end


# 22 "data/maps/LoneTreeCape/scripts.pory"

# 23 "data/maps/LoneTreeCape/scripts.pory"
.set LOCALID_RIVAL, 2
# 24 "data/maps/LoneTreeCape/scripts.pory"

# 25 "data/maps/LoneTreeCape/scripts.pory"
Route103_MapScripts::
# 26 "data/maps/LoneTreeCape/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 27 "data/maps/LoneTreeCape/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 28 "data/maps/LoneTreeCape/scripts.pory"
	.byte 0
# 29 "data/maps/LoneTreeCape/scripts.pory"

# 30 "data/maps/LoneTreeCape/scripts.pory"
Route103_OnTransition:
# 31 "data/maps/LoneTreeCape/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 32 "data/maps/LoneTreeCape/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 33 "data/maps/LoneTreeCape/scripts.pory"
	end
# 34 "data/maps/LoneTreeCape/scripts.pory"

# 35 "data/maps/LoneTreeCape/scripts.pory"
Route103_OnLoad:
# 36 "data/maps/LoneTreeCape/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 37 "data/maps/LoneTreeCape/scripts.pory"
	end
# 38 "data/maps/LoneTreeCape/scripts.pory"

# 39 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 40 "data/maps/LoneTreeCape/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 41 "data/maps/LoneTreeCape/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 42 "data/maps/LoneTreeCape/scripts.pory"
	return
# 43 "data/maps/LoneTreeCape/scripts.pory"

# 44 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Rival::
# 45 "data/maps/LoneTreeCape/scripts.pory"
	lockall
# 46 "data/maps/LoneTreeCape/scripts.pory"
	checkplayergender
# 47 "data/maps/LoneTreeCape/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 48 "data/maps/LoneTreeCape/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 49 "data/maps/LoneTreeCape/scripts.pory"
	end
# 50 "data/maps/LoneTreeCape/scripts.pory"

# 51 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RivalMay::
# 52 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 53 "data/maps/LoneTreeCape/scripts.pory"
	closemessage
# 54 "data/maps/LoneTreeCape/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 55 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 56 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 57 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 58 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 59 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 60 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 61 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 62 "data/maps/LoneTreeCape/scripts.pory"
	switch VAR_STARTER_MON
# 63 "data/maps/LoneTreeCape/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 64 "data/maps/LoneTreeCape/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 65 "data/maps/LoneTreeCape/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 66 "data/maps/LoneTreeCape/scripts.pory"
	end
# 67 "data/maps/LoneTreeCape/scripts.pory"

# 68 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RivalBrendan::
# 69 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 70 "data/maps/LoneTreeCape/scripts.pory"
	closemessage
# 71 "data/maps/LoneTreeCape/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 72 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 73 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 74 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 75 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 76 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 77 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 78 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 79 "data/maps/LoneTreeCape/scripts.pory"
	switch VAR_STARTER_MON
# 80 "data/maps/LoneTreeCape/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 81 "data/maps/LoneTreeCape/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 82 "data/maps/LoneTreeCape/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 83 "data/maps/LoneTreeCape/scripts.pory"
	end
# 84 "data/maps/LoneTreeCape/scripts.pory"

# 85 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 86 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 87 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 88 "data/maps/LoneTreeCape/scripts.pory"
	end
# 89 "data/maps/LoneTreeCape/scripts.pory"

# 90 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 91 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 92 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 93 "data/maps/LoneTreeCape/scripts.pory"
	end
# 94 "data/maps/LoneTreeCape/scripts.pory"

# 95 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 96 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 97 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 98 "data/maps/LoneTreeCape/scripts.pory"
	end
# 99 "data/maps/LoneTreeCape/scripts.pory"

# 100 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 101 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 102 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 103 "data/maps/LoneTreeCape/scripts.pory"
	end
# 104 "data/maps/LoneTreeCape/scripts.pory"

# 105 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 106 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 107 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 108 "data/maps/LoneTreeCape/scripts.pory"
	end
# 109 "data/maps/LoneTreeCape/scripts.pory"

# 110 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 111 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 112 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 113 "data/maps/LoneTreeCape/scripts.pory"
	end
# 114 "data/maps/LoneTreeCape/scripts.pory"

# 115 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 116 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 117 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_RivalExit
# 118 "data/maps/LoneTreeCape/scripts.pory"
	end
# 119 "data/maps/LoneTreeCape/scripts.pory"

# 120 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 121 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 122 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_RivalExit
# 123 "data/maps/LoneTreeCape/scripts.pory"
	end
# 124 "data/maps/LoneTreeCape/scripts.pory"

# 125 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RivalExit::
# 126 "data/maps/LoneTreeCape/scripts.pory"
	closemessage
# 127 "data/maps/LoneTreeCape/scripts.pory"
	switch VAR_FACING
# 128 "data/maps/LoneTreeCape/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 129 "data/maps/LoneTreeCape/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 130 "data/maps/LoneTreeCape/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 131 "data/maps/LoneTreeCape/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 132 "data/maps/LoneTreeCape/scripts.pory"
	end
# 133 "data/maps/LoneTreeCape/scripts.pory"

# 134 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 135 "data/maps/LoneTreeCape/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 136 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 137 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 138 "data/maps/LoneTreeCape/scripts.pory"
	playse SE_LEDGE
# 139 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 140 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 141 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 142 "data/maps/LoneTreeCape/scripts.pory"
	end
# 143 "data/maps/LoneTreeCape/scripts.pory"

# 144 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 145 "data/maps/LoneTreeCape/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 146 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 147 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 148 "data/maps/LoneTreeCape/scripts.pory"
	playse SE_LEDGE
# 149 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 150 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 151 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 152 "data/maps/LoneTreeCape/scripts.pory"
	end
# 153 "data/maps/LoneTreeCape/scripts.pory"

# 154 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 155 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 156 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 157 "data/maps/LoneTreeCape/scripts.pory"
	playse SE_LEDGE
# 158 "data/maps/LoneTreeCape/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 159 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 160 "data/maps/LoneTreeCape/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 161 "data/maps/LoneTreeCape/scripts.pory"
	end
# 162 "data/maps/LoneTreeCape/scripts.pory"

# 163 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RivalEnd::
# 164 "data/maps/LoneTreeCape/scripts.pory"
	removeobject LOCALID_RIVAL
# 165 "data/maps/LoneTreeCape/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 166 "data/maps/LoneTreeCape/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 167 "data/maps/LoneTreeCape/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 168 "data/maps/LoneTreeCape/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 169 "data/maps/LoneTreeCape/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 170 "data/maps/LoneTreeCape/scripts.pory"
	savebgm MUS_DUMMY
# 171 "data/maps/LoneTreeCape/scripts.pory"
	fadedefaultbgm
# 172 "data/maps/LoneTreeCape/scripts.pory"
	releaseall
# 173 "data/maps/LoneTreeCape/scripts.pory"
	end
# 174 "data/maps/LoneTreeCape/scripts.pory"

# 175 "data/maps/LoneTreeCape/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 176 "data/maps/LoneTreeCape/scripts.pory"
	walk_left
# 177 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 178 "data/maps/LoneTreeCape/scripts.pory"
	step_end
# 179 "data/maps/LoneTreeCape/scripts.pory"

# 180 "data/maps/LoneTreeCape/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 181 "data/maps/LoneTreeCape/scripts.pory"
	jump_2_down
# 182 "data/maps/LoneTreeCape/scripts.pory"
	delay_16
# 183 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 184 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 185 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 186 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 187 "data/maps/LoneTreeCape/scripts.pory"
	step_end
# 188 "data/maps/LoneTreeCape/scripts.pory"

# 189 "data/maps/LoneTreeCape/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 190 "data/maps/LoneTreeCape/scripts.pory"
	delay_16
# 191 "data/maps/LoneTreeCape/scripts.pory"
	delay_4
# 192 "data/maps/LoneTreeCape/scripts.pory"
	walk_in_place_faster_left
# 193 "data/maps/LoneTreeCape/scripts.pory"
	delay_16
# 194 "data/maps/LoneTreeCape/scripts.pory"
	walk_in_place_faster_down
# 195 "data/maps/LoneTreeCape/scripts.pory"
	step_end
# 196 "data/maps/LoneTreeCape/scripts.pory"

# 197 "data/maps/LoneTreeCape/scripts.pory"
Route103_Movement_RivalExit1:
# 198 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 199 "data/maps/LoneTreeCape/scripts.pory"
	step_end
# 200 "data/maps/LoneTreeCape/scripts.pory"

# 201 "data/maps/LoneTreeCape/scripts.pory"
Route103_Movement_RivalExit2:
# 202 "data/maps/LoneTreeCape/scripts.pory"
	jump_2_down
# 203 "data/maps/LoneTreeCape/scripts.pory"
	delay_16
# 204 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 205 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 206 "data/maps/LoneTreeCape/scripts.pory"
	walk_down
# 207 "data/maps/LoneTreeCape/scripts.pory"
	step_end
# 208 "data/maps/LoneTreeCape/scripts.pory"

# 209 "data/maps/LoneTreeCape/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 210 "data/maps/LoneTreeCape/scripts.pory"
	delay_16
# 211 "data/maps/LoneTreeCape/scripts.pory"
	walk_in_place_faster_down
# 212 "data/maps/LoneTreeCape/scripts.pory"
	step_end
# 213 "data/maps/LoneTreeCape/scripts.pory"

# 214 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Boy::
# 215 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 216 "data/maps/LoneTreeCape/scripts.pory"
	end
# 217 "data/maps/LoneTreeCape/scripts.pory"

# 218 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Man::
# 219 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 220 "data/maps/LoneTreeCape/scripts.pory"
	end
# 221 "data/maps/LoneTreeCape/scripts.pory"

# 222 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_RouteSign::
# 223 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 224 "data/maps/LoneTreeCape/scripts.pory"
	end
# 225 "data/maps/LoneTreeCape/scripts.pory"

# 226 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Tiana::
# 227 "data/maps/LoneTreeCape/scripts.pory"
	end
# 228 "data/maps/LoneTreeCape/scripts.pory"

# 229 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Amy::
# 230 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 231 "data/maps/LoneTreeCape/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 232 "data/maps/LoneTreeCape/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 233 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 234 "data/maps/LoneTreeCape/scripts.pory"
	end
# 235 "data/maps/LoneTreeCape/scripts.pory"

# 236 "data/maps/LoneTreeCape/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 237 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 238 "data/maps/LoneTreeCape/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 239 "data/maps/LoneTreeCape/scripts.pory"
	release
# 240 "data/maps/LoneTreeCape/scripts.pory"
	end
# 241 "data/maps/LoneTreeCape/scripts.pory"

# 242 "data/maps/LoneTreeCape/scripts.pory"
Route102_EventScript_AmyRematch::
# 243 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 244 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/LoneTreeCape/scripts.pory"
	end
# 246 "data/maps/LoneTreeCape/scripts.pory"

# 247 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Liv::
# 248 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 249 "data/maps/LoneTreeCape/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 250 "data/maps/LoneTreeCape/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 251 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/LoneTreeCape/scripts.pory"
	end
# 253 "data/maps/LoneTreeCape/scripts.pory"

# 254 "data/maps/LoneTreeCape/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 255 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 256 "data/maps/LoneTreeCape/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 257 "data/maps/LoneTreeCape/scripts.pory"
	release
# 258 "data/maps/LoneTreeCape/scripts.pory"
	end
# 259 "data/maps/LoneTreeCape/scripts.pory"

# 260 "data/maps/LoneTreeCape/scripts.pory"
Route102_EventScript_LivRematch::
# 261 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 262 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 263 "data/maps/LoneTreeCape/scripts.pory"
	end
# 264 "data/maps/LoneTreeCape/scripts.pory"

# 265 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Andrew::
# 266 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 267 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 268 "data/maps/LoneTreeCape/scripts.pory"
	end
# 269 "data/maps/LoneTreeCape/scripts.pory"

# 270 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Miguel::
# 271 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 272 "data/maps/LoneTreeCape/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 273 "data/maps/LoneTreeCape/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 274 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 275 "data/maps/LoneTreeCape/scripts.pory"
	release
# 276 "data/maps/LoneTreeCape/scripts.pory"
	end
# 277 "data/maps/LoneTreeCape/scripts.pory"

# 278 "data/maps/LoneTreeCape/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 279 "data/maps/LoneTreeCape/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 280 "data/maps/LoneTreeCape/scripts.pory"
	waitmovement 0
# 281 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 282 "data/maps/LoneTreeCape/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 283 "data/maps/LoneTreeCape/scripts.pory"
	release
# 284 "data/maps/LoneTreeCape/scripts.pory"
	end
# 285 "data/maps/LoneTreeCape/scripts.pory"

# 286 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_MiguelRematch::
# 287 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 288 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/LoneTreeCape/scripts.pory"
	end
# 290 "data/maps/LoneTreeCape/scripts.pory"

# 291 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Marcos::
# 292 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 293 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/LoneTreeCape/scripts.pory"
	end
# 295 "data/maps/LoneTreeCape/scripts.pory"

# 296 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Rhett::
# 297 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 298 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/LoneTreeCape/scripts.pory"
	end
# 300 "data/maps/LoneTreeCape/scripts.pory"

# 301 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Pete::
# 302 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 303 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/LoneTreeCape/scripts.pory"
	end
# 305 "data/maps/LoneTreeCape/scripts.pory"

# 306 "data/maps/LoneTreeCape/scripts.pory"
Route103_EventScript_Isabelle::
# 307 "data/maps/LoneTreeCape/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 308 "data/maps/LoneTreeCape/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/LoneTreeCape/scripts.pory"
	end
# 310 "data/maps/LoneTreeCape/scripts.pory"

# 311 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 312 "data/maps/LoneTreeCape/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 313 "data/maps/LoneTreeCape/scripts.pory"
	.string "on ROUTE 103 include…$"
# 314 "data/maps/LoneTreeCape/scripts.pory"

# 315 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_MayLetsBattle:
# 316 "data/maps/LoneTreeCape/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 317 "data/maps/LoneTreeCape/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 318 "data/maps/LoneTreeCape/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 319 "data/maps/LoneTreeCape/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 320 "data/maps/LoneTreeCape/scripts.pory"
	.string "battle!\p"
# 321 "data/maps/LoneTreeCape/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 322 "data/maps/LoneTreeCape/scripts.pory"
	.string "a TRAINER is like.$"
# 323 "data/maps/LoneTreeCape/scripts.pory"

# 324 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_MayDefeated:
# 325 "data/maps/LoneTreeCape/scripts.pory"
	.string "Wow! That's great!\n"
# 326 "data/maps/LoneTreeCape/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 327 "data/maps/LoneTreeCape/scripts.pory"

# 328 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 329 "data/maps/LoneTreeCape/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 330 "data/maps/LoneTreeCape/scripts.pory"
	.string "an eye out for you now.\p"
# 331 "data/maps/LoneTreeCape/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 332 "data/maps/LoneTreeCape/scripts.pory"
	.string "but it already likes you.\p"
# 333 "data/maps/LoneTreeCape/scripts.pory"
	.string "You might be able to befriend any\n"
# 334 "data/maps/LoneTreeCape/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 335 "data/maps/LoneTreeCape/scripts.pory"
	.string "Well, it's time to head back to\n"
# 336 "data/maps/LoneTreeCape/scripts.pory"
	.string "the LAB.$"
# 337 "data/maps/LoneTreeCape/scripts.pory"

# 338 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 339 "data/maps/LoneTreeCape/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 340 "data/maps/LoneTreeCape/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 341 "data/maps/LoneTreeCape/scripts.pory"

# 342 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 343 "data/maps/LoneTreeCape/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 344 "data/maps/LoneTreeCape/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 345 "data/maps/LoneTreeCape/scripts.pory"
	.string "Since we're here, how about a little\n"
# 346 "data/maps/LoneTreeCape/scripts.pory"
	.string "battle?\p"
# 347 "data/maps/LoneTreeCape/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 348 "data/maps/LoneTreeCape/scripts.pory"
	.string "about!$"
# 349 "data/maps/LoneTreeCape/scripts.pory"

# 350 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_BrendanDefeated:
# 351 "data/maps/LoneTreeCape/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 352 "data/maps/LoneTreeCape/scripts.pory"

# 353 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 354 "data/maps/LoneTreeCape/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 355 "data/maps/LoneTreeCape/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 356 "data/maps/LoneTreeCape/scripts.pory"
	.string "out for you now.\p"
# 357 "data/maps/LoneTreeCape/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 358 "data/maps/LoneTreeCape/scripts.pory"
	.string "even though you just got it.\p"
# 359 "data/maps/LoneTreeCape/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 360 "data/maps/LoneTreeCape/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 361 "data/maps/LoneTreeCape/scripts.pory"
	.string "We should head back to the LAB.$"
# 362 "data/maps/LoneTreeCape/scripts.pory"

# 363 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 364 "data/maps/LoneTreeCape/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 365 "data/maps/LoneTreeCape/scripts.pory"
	.string "I should have brought a POTION…$"
# 366 "data/maps/LoneTreeCape/scripts.pory"

# 367 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_ShortcutToOldale:
# 368 "data/maps/LoneTreeCape/scripts.pory"
	.string "If you cross the sea from here,\n"
# 369 "data/maps/LoneTreeCape/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 370 "data/maps/LoneTreeCape/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 371 "data/maps/LoneTreeCape/scripts.pory"

# 372 "data/maps/LoneTreeCape/scripts.pory"
Route103_Text_RouteSign:
# 373 "data/maps/LoneTreeCape/scripts.pory"
	.string "ROUTE 103\n"
# 374 "data/maps/LoneTreeCape/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"

LoneTreeCape_Text_TianaIntro::
# 10 "data/maps/LoneTreeCape/scripts.pory"
	.string "Did you feel the tug of our\n"
	.string "soul-soothing fragrance?$"

LoneTreeCape_Text_TianaDefeated::
# 14 "data/maps/LoneTreeCape/scripts.pory"
	.string "You weren't led astray by our aroma…$"

LoneTreeCape_Text_TianaPostBattle::
# 18 "data/maps/LoneTreeCape/scripts.pory"
	.string "Aromatherapy is a form of mental\n"
	.string "healing that works with fragrances.$"
