# 1 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 2 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
.set LOCALID_PHILIP, 2
# 3 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 4 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_MapScripts::
# 5 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
# 6 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame
# 7 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
# 8 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.byte 0
# 9 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 10 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnFrame:
# 11 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
# 12 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
# 13 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
# 14 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.2byte 0
# 15 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 16 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
# 17 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	lockall
# 18 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	@ pyramid_updatelight, cant use macro because it straddles the loop
# 19 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
# 20 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8005, 4
# 21 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
# 22 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_0x8007, SE_SAVE
# 23 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 24 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
# 25 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special CallBattlePyramidFunction
# 26 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	delay 2
# 27 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
# 28 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 29 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 30 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 32 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
# 33 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special ShowMapNamePopup
# 34 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 0
# 35 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 36 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 37 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
# 38 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	playbgm MUS_B_PYRAMID, FALSE
# 39 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
# 40 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 41 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 42 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnResume:
# 43 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setfloorpal
# 44 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_getstatus
# 45 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	switch VAR_TEMP_CHALLENGE_STATUS
# 46 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 47 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
# 48 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
# 49 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
# 50 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 51 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 52 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
# 53 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 54 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 55 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 56 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
# 57 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 58 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
# 59 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_resetparty
# 60 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 61 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 62 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
# 63 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
# 64 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
# 65 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
# 66 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
# 67 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_clearhelditems
# 68 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special HealPlayerParty
# 69 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
# 70 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 71 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 73 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
# 74 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_save CHALLENGE_STATUS_SAVING
# 75 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	special SavePlayerParty
# 76 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 77 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_settrainers
# 78 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 79 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 80 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 81 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 82 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_OnTransition:
# 83 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
# 84 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_TEMP_F, 1
# 85 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 87 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
# 88 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
# 89 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	return
# 90 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 91 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToNextFloor::
# 92 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	call BattleFrontier_EventScript_IncrementWinStreak
# 93 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
# 94 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	addvar VAR_RESULT, 1
# 95 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
# 96 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop
# 97 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_seedfloor
# 98 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 99 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	setvar VAR_RESULT, 0
# 100 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
# 101 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 102 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 103 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 104 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_WarpToTop::
# 105 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
# 106 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitstate
# 107 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 108 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 109 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ TRAINER_PHILLIP is used as a placeholder
# 110 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_TrainerBattle::
	trainerbattle TRAINER_BATTLE_HILL, LOCALID_NONE, TRAINER_PHILLIP, BattleFacility_TrainerBattle_PlaceholderText, BattleFacility_TrainerBattle_PlaceholderText, NULL, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, FALSE, FALSE, FALSE
	pyramid_showhint
# 113 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitmessage
# 114 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	waitbuttonpress
# 115 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	closemessage
# 116 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	releaseall
# 117 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 118 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 119 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBall::
# 120 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_setitem
# 121 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	callstd STD_FIND_ITEM
# 122 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBallEnd
# 123 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	pyramid_hideitem
# 124 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_FindItemBallEnd::
# 125 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	end
# 126 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 127 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Retire::
# 128 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
# 129 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 130 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
@ Also used by Trainer Hill
# 131 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattleFacility_TrainerBattle_PlaceholderText:
# 132 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is a sample message.$"
# 133 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 134 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRest::
# 135 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Your BATTLE PYRAMID quest will be\n"
# 136 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "saved so that you may quit for now.\l"
# 137 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Is that okay?$"
# 138 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 139 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
gText_BattlePyramidConfirmRetire::
# 140 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you sure you want to quit your\n"
# 141 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "PYRAMID quest?$"
# 142 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 143 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp1::
# 144 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 145 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {UP_ARROW}$"
# 146 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 147 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft1::
# 148 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 149 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {LEFT_ARROW}$"
# 150 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 151 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight1::
# 152 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 153 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {RIGHT_ARROW}$"
# 154 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 155 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown1::
# 156 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This floor's exit is in\n"
# 157 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that direction: {DOWN_ARROW}$"
# 158 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 159 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp2::
# 160 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 161 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {UP_ARROW} direction.$"
# 162 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 163 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft2::
# 164 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 165 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {LEFT_ARROW} direction.$"
# 166 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 167 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight2::
# 168 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 169 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {RIGHT_ARROW} direction.$"
# 170 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 171 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown2::
# 172 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit on this floor is in\n"
# 173 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {DOWN_ARROW} direction.$"
# 174 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 175 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp3::
# 176 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 177 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {UP_ARROW} way.$"
# 178 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 179 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft3::
# 180 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 181 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {LEFT_ARROW} way.$"
# 182 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 183 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight3::
# 184 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 185 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {RIGHT_ARROW} way.$"
# 186 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 187 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown3::
# 188 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit is over\n"
# 189 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "that {DOWN_ARROW} way.$"
# 190 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 191 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp4::
# 192 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 193 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {UP_ARROW} direction.$"
# 194 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 195 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft4::
# 196 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 197 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {LEFT_ARROW} direction.$"
# 198 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 199 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight4::
# 200 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 201 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {RIGHT_ARROW} direction.$"
# 202 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 203 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown4::
# 204 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor, the exit is somewhere\n"
# 205 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "in the {DOWN_ARROW} direction.$"
# 206 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 207 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp5::
# 208 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 209 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {UP_ARROW} way.$"
# 210 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 211 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft5::
# 212 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 213 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {LEFT_ARROW} way.$"
# 214 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 215 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight5::
# 216 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 217 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {RIGHT_ARROW} way.$"
# 218 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 219 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown5::
# 220 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit?\n"
# 221 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "It's that {DOWN_ARROW} way.$"
# 222 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 223 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintUp6::
# 224 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 225 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {UP_ARROW} direction.$"
# 226 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 227 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintLeft6::
# 228 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 229 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {LEFT_ARROW} direction.$"
# 230 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 231 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintRight6::
# 232 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 233 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {RIGHT_ARROW} direction.$"
# 234 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 235 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ExitHintDown6::
# 236 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "The exit happens to be in\n"
# 237 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the {DOWN_ARROW} direction.$"
# 238 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 239 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining1::
# 240 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 241 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are eight items left to\n"
# 242 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 243 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 244 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining1::
# 245 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 246 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are seven items left to\n"
# 247 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 248 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 249 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining1::
# 250 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 251 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are six items left to\n"
# 252 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 253 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 254 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining1::
# 255 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 256 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are five items left to\n"
# 257 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 258 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 259 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining1::
# 260 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 261 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are four items left to\n"
# 262 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 263 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 264 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining1::
# 265 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 266 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are three items left to\n"
# 267 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 268 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 269 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining1::
# 270 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 271 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are two items left to\n"
# 272 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 273 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 274 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining1::
# 275 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 276 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There is one item left to\n"
# 277 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found.$"
# 278 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 279 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining1::
# 280 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Are you looking for items?\p"
# 281 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There isn't anything left to\n"
# 282 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "be found!$"
# 283 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 284 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining2::
# 285 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 286 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 287 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are eight items\n"
# 288 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 289 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 290 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining2::
# 291 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 292 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 293 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are seven items left\n"
# 294 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 295 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 296 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining2::
# 297 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 298 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 299 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are six items left\n"
# 300 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 301 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 302 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining2::
# 303 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 304 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 305 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are five items left\n"
# 306 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 307 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 308 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining2::
# 309 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 310 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 311 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are four items left\n"
# 312 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 313 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 314 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining2::
# 315 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 316 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 317 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are three items left\n"
# 318 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 319 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 320 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining2::
# 321 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 322 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 323 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are two items left\n"
# 324 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 325 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 326 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining2::
# 327 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 328 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 329 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There is just one item\n"
# 330 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 331 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 332 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining2::
# 333 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Because you won, I'll tell you\n"
# 334 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a little secret!\p"
# 335 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There isn't anything left\n"
# 336 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "lying around here.$"
# 337 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 338 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining3::
# 339 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 340 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are eight items left\n"
# 341 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 342 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 343 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining3::
# 344 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 345 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are seven items left\n"
# 346 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 347 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 348 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining3::
# 349 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 350 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are six items left\n"
# 351 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 352 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 353 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining3::
# 354 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 355 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are five items left\n"
# 356 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 357 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 358 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining3::
# 359 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 360 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are four items left\n"
# 361 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 362 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 363 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining3::
# 364 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 365 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are three items left\n"
# 366 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 367 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 368 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining3::
# 369 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 370 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are two items left\n"
# 371 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 372 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 373 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining3::
# 374 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 375 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there's but one item left\n"
# 376 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.$"
# 377 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 378 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining3::
# 379 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "How's your stock of items holding up?\p"
# 380 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I reckon there are no more items\n"
# 381 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "waiting to be found on this floor.\l"
# 382 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You take care now!$"
# 383 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 384 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining4::
# 385 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 386 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 387 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be eight more\n"
# 388 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 389 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 390 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining4::
# 391 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 392 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 393 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be seven more\n"
# 394 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 395 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 396 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining4::
# 397 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 398 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 399 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be six more\n"
# 400 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 401 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 402 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining4::
# 403 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 404 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 405 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be five more\n"
# 406 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 407 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 408 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining4::
# 409 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 410 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 411 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be four more\n"
# 412 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 413 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 414 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining4::
# 415 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 416 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 417 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be three more\n"
# 418 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 419 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 420 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining4::
# 421 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 422 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 423 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be two more\n"
# 424 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 425 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 426 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining4::
# 427 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 428 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 429 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appears to be only one more\n"
# 430 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "item on the ground.$"
# 431 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 432 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining4::
# 433 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You're strong, so you've earned\n"
# 434 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "a hint!\p"
# 435 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There appear to be no more\n"
# 436 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on the ground.$"
# 437 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 438 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining5::
# 439 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 440 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are eight items…$"
# 441 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 442 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining5::
# 443 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 444 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are seven items…$"
# 445 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 446 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining5::
# 447 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 448 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are six items…$"
# 449 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 450 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining5::
# 451 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 452 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are five items…$"
# 453 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 454 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining5::
# 455 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 456 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are four items…$"
# 457 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 458 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining5::
# 459 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 460 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are three items…$"
# 461 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 462 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining5::
# 463 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 464 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are two items…$"
# 465 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 466 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining5::
# 467 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 468 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there is one item…$"
# 469 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 470 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining5::
# 471 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "On this floor of the PYRAMID,\n"
# 472 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I hear there are no items…$"
# 473 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 474 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_EightItemsRemaining6::
# 475 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 476 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are eight more\n"
# 477 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 478 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 479 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenItemsRemaining6::
# 480 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 481 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are seven more\n"
# 482 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 483 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 484 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixItemsRemaining6::
# 485 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 486 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are six more\n"
# 487 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 488 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 489 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveItemsRemaining6::
# 490 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 491 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are five more\n"
# 492 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 493 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 494 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourItemsRemaining6::
# 495 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 496 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are four more\n"
# 497 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 498 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 499 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeItemsRemaining6::
# 500 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 501 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are three more\n"
# 502 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 503 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 504 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoItemsRemaining6::
# 505 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 506 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are two more\n"
# 507 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 508 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 509 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneItemRemaining6::
# 510 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 511 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there is one more\n"
# 512 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "item on this floor.$"
# 513 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 514 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroItemsRemaining6::
# 515 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Have you collected any items?\p"
# 516 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I believe there are no more\n"
# 517 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "items on this floor.$"
# 518 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 519 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining1::
# 520 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 521 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still seven tough\n"
# 522 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 523 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 524 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining1::
# 525 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 526 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still six tough\n"
# 527 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 528 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 529 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining1::
# 530 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 531 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still five tough\n"
# 532 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 533 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 534 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining1::
# 535 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 536 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still four tough\n"
# 537 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 538 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 539 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining1::
# 540 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 541 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still three tough\n"
# 542 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 543 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 544 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining1::
# 545 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 546 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are still two tough\n"
# 547 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINERS other than me!$"
# 548 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 549 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining1::
# 550 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 551 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there's still one tough\n"
# 552 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "TRAINER other than me!$"
# 553 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 554 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining1::
# 555 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You were really awesome!\p"
# 556 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There's no one left that\n"
# 557 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "can beat you!$"
# 558 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 559 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining2::
# 560 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 561 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are seven TRAINERS left!\n"
# 562 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 563 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 564 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining2::
# 565 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 566 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are six TRAINERS left!\n"
# 567 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 568 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 569 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining2::
# 570 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 571 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are five TRAINERS left!\n"
# 572 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 573 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 574 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining2::
# 575 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 576 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are four TRAINERS left!\n"
# 577 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 578 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 579 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining2::
# 580 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 581 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are three TRAINERS left!\n"
# 582 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 583 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 584 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining2::
# 585 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 586 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are two TRAINERS left!\n"
# 587 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Someone will humble you!$"
# 588 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 589 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining2::
# 590 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 591 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there's one TRAINER left!\n"
# 592 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "I'm sure you will be humbled!$"
# 593 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 594 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining2::
# 595 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "This is so upsetting!\p"
# 596 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are no more TRAINERS\n"
# 597 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "who can engage you!$"
# 598 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 599 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining3::
# 600 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 601 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are seven more TRAINERS\n"
# 602 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 603 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 604 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining3::
# 605 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 606 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are six more TRAINERS\n"
# 607 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 608 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 609 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining3::
# 610 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 611 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are five more TRAINERS\n"
# 612 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 613 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 614 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining3::
# 615 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 616 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are four more TRAINERS\n"
# 617 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 618 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 619 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining3::
# 620 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 621 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are three more TRAINERS\n"
# 622 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them all?$"
# 623 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 624 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining3::
# 625 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 626 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there are two more TRAINERS\n"
# 627 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you beat them both?$"
# 628 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 629 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining3::
# 630 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 631 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "But there's still one more TRAINER\n"
# 632 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor. Can you prevail?$"
# 633 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 634 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining3::
# 635 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "That's pretty impressive!\p"
# 636 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You've gone through all the TRAINERS\n"
# 637 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "on this floor.$"
# 638 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 639 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining4::
# 640 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 641 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the seven TRAINERS left on this floor.$"
# 642 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 643 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining4::
# 644 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 645 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the six TRAINERS left on this floor.$"
# 646 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 647 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining4::
# 648 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 649 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the five TRAINERS left on this floor.$"
# 650 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 651 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining4::
# 652 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 653 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the four TRAINERS left on this floor.$"
# 654 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 655 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining4::
# 656 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 657 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the three TRAINERS left on this floor.$"
# 658 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 659 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining4::
# 660 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could sweep through\n"
# 661 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the two TRAINERS left on this floor.$"
# 662 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 663 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining4::
# 664 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Maybe you could complete your sweep\n"
# 665 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "with the one TRAINER left on this floor.$"
# 666 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 667 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining4::
# 668 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There isn't a single person left who\n"
# 669 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "can defeat you now…$"
# 670 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 671 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining5::
# 672 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 673 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the seven expert TRAINERS who remain.$"
# 674 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 675 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining5::
# 676 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 677 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the six expert TRAINERS who remain.$"
# 678 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 679 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining5::
# 680 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 681 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the five expert TRAINERS who remain.$"
# 682 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 683 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining5::
# 684 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 685 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the four expert TRAINERS who remain.$"
# 686 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 687 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining5::
# 688 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 689 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the three expert TRAINERS who remain.$"
# 690 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 691 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining5::
# 692 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 693 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the two expert TRAINERS who remain.$"
# 694 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 695 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining5::
# 696 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "You may have what it takes to beat\n"
# 697 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the one expert TRAINER who remains.$"
# 698 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 699 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining5::
# 700 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Your skills are beyond reproach.\p"
# 701 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There are no more TRAINERS here\n"
# 702 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "who have any chance of beating you.$"
# 703 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 704 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SevenTrainersRemaining6::
# 705 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 706 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the seven remaining TRAINERS?$"
# 707 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 708 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_SixTrainersRemaining6::
# 709 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 710 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the six remaining TRAINERS?$"
# 711 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 712 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FiveTrainersRemaining6::
# 713 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 714 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the five remaining TRAINERS?$"
# 715 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 716 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_FourTrainersRemaining6::
# 717 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 718 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the four remaining TRAINERS?$"
# 719 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 720 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ThreeTrainersRemaining6::
# 721 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 722 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the three remaining TRAINERS?$"
# 723 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 724 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_TwoTrainersRemaining6::
# 725 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 726 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the two remaining TRAINERS?$"
# 727 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 728 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_OneTrainersRemaining6::
# 729 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "Can you keep winning against\n"
# 730 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "the last remaining TRAINER?$"
# 731 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"

# 732 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
BattlePyramid_Text_ZeroTrainersRemaining6::
# 733 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "There aren't any TRAINERS left that\n"
# 734 "data/maps/BattleFrontier_BattlePyramidFloor/scripts.pory"
	.string "can take you on now…$"
