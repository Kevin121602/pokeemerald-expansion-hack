# 1 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_MapScripts::
# 3 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHousePuzzle7_OnResume
# 4 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle7_OnTransition
# 5 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle7_OnLoad
# 6 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHousePuzzle7_OnFrame
# 7 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.byte 0
# 8 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 9 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Puzzle Room 7 in RSE uses whatever puzzle Mossdeep Gym uses
# 10 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Because Mossdeep Gym was redesigned for Emerald, theres a good deal of leftover script from the old R/S puzzle
# 11 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 12 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnResume:
# 13 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
# 14 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles::
# 17 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 18 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 19 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 20 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 21 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 22 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 23 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 24 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Leftover from R/S, none of the below metatile scripts are ever called
# 25 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn::
# 26 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 27 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 28 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 29 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 30 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn::
# 31 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 32 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 33 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 34 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 35 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn::
# 36 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Up, FALSE
# 37 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 38 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 39 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 40 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn::
# 41 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right_Alt, FALSE
# 42 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 43 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 44 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 45 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn::
# 46 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 47 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_On, TRUE
# 48 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 49 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 50 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff::
# 51 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 13, 17, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 52 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 16, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 53 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 54 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 55 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff::
# 56 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 13, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left, FALSE
# 57 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 12, 11, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 58 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 59 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 60 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff::
# 61 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 12, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Down, FALSE
# 62 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 5, 10, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 63 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 64 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 65 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff::
# 66 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 6, 6, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Left_Alt, FALSE
# 67 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 4, 4, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 68 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 69 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 70 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff::
# 71 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 8, 4, METATILE_TrickHousePuzzle_Arrow_RedOnBlack_Right, FALSE
# 72 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setmetatile 7, 5, METATILE_TrickHousePuzzle_Lever_Off, TRUE
# 73 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	return
# 74 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 75 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnTransition:
# 76 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_EventScript_TeleportedTransition
# 77 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 78 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 79 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 80 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 81 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 82 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 83 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 84 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportedTransition::
# 85 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 86 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 87 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnLoad:
# 88 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_EventScript_UpdateSwitchMetatiles
# 89 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 90 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 91 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_OnFrame:
# 92 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1, Route110_TrickHousePuzzle7_EventScript_ClearState2
# 93 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.2byte 0
# 94 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 95 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_ClearState2::
# 96 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 0
# 97 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 98 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 99 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Scroll::
# 100 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 101 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle7_EventScript_FoundScroll
# 102 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 103 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 104 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 105 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_FoundScroll::
# 106 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 1
# 107 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 108 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 109 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 110 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused, leftover from R/S
# 111 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_TeleportPad::
# 112 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 113 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE_2, 1
# 114 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitstate
# 115 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 116 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 117 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 118 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 119 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch1::
# 120 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 121 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 122 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOn
# 123 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1MetatilesOff
# 124 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 125 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 126 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1On
# 127 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1, Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off
# 128 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 129 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 130 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch2::
# 131 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 132 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 133 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOn
# 134 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2MetatilesOff
# 135 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 136 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 137 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2On
# 138 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2, Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off
# 139 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 140 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 141 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch3::
# 142 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 143 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 144 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOn
# 145 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3MetatilesOff
# 146 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 147 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 148 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3On
# 149 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3, Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off
# 150 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 151 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 152 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch4::
# 153 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 154 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 155 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOn
# 156 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4MetatilesOff
# 157 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 158 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 159 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4On
# 160 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4, Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off
# 161 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 162 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 163 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Switch5::
# 164 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	lockall
# 165 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	delay 32
# 166 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOn
# 167 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	call_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5MetatilesOff
# 168 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	special DrawWholeMapView
# 169 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_CLICK
# 170 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_unset FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5On
# 171 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	goto_if_set FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5, Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off
# 172 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 173 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 174 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ All the below switch scripts are unused leftover from R/S
# 175 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1On::
# 176 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 177 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 178 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 179 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 180 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch1Off::
# 181 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1
# 182 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 183 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 184 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 185 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2On::
# 186 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 187 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 188 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 189 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 190 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch2Off::
# 191 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2
# 192 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 193 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 194 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 195 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3On::
# 196 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 197 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 198 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 199 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 200 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch3Off::
# 201 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3
# 202 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 203 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 204 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 205 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4On::
# 206 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 207 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 208 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 209 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 210 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch4Off::
# 211 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4
# 212 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 213 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 214 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 215 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5On::
# 216 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	setflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 217 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 218 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 219 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 220 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_SetSwitch5Off::
# 221 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	clearflag FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5
# 222 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	releaseall
# 223 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 224 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 225 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ From here is where the new, actually used puzzle scripts begin
# 226 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_YellowButton::
# 227 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 228 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 229 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 230 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 231 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 0
# 232 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 233 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 234 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 236 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 237 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 238 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_BlueButton::
# 239 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 240 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 241 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 242 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 243 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 1
# 244 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 245 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 246 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 248 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 249 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 250 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_GreenButton::
# 251 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 252 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 253 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 254 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 255 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 2
# 256 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 257 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 258 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 260 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 261 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 262 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_PurpleButton::
# 263 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 264 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 265 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 266 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 267 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 3
# 268 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 270 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 272 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 273 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 274 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
@ Unused
# 275 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_RedButton::
# 276 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_SWITCH
# 277 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitse
# 278 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	playse SE_REPEL
# 279 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	initrotatingtilepuzzle TRUE
# 280 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	moverotatingtileobjects 4
# 281 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 282 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	turnrotatingtileobjects
# 283 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	waitmovement 0
# 284 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	freerotatingtilepuzzle
# 285 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 286 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 287 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Joshua::
# 288 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_JOSHUA, Route110_TrickHousePuzzle7_Text_JoshuaIntro, Route110_TrickHousePuzzle7_Text_JoshuaDefeat
# 289 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 291 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 292 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Patricia::
# 293 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_PATRICIA, Route110_TrickHousePuzzle7_Text_PatriciaIntro, Route110_TrickHousePuzzle7_Text_PatriciaDefeat
# 294 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 296 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 297 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alexis::
# 298 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALEXIS, Route110_TrickHousePuzzle7_Text_AlexisIntro, Route110_TrickHousePuzzle7_Text_AlexisDefeat
# 299 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 301 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 302 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Mariela::
# 303 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_MARIELA, Route110_TrickHousePuzzle7_Text_MarielaIntro, Route110_TrickHousePuzzle7_Text_MarielaDefeat
# 304 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_MarielaPostBattle, MSGBOX_AUTOCLOSE
# 305 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 306 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 307 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Alvaro::
# 308 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_ALVARO, Route110_TrickHousePuzzle7_Text_AlvaroIntro, Route110_TrickHousePuzzle7_Text_AlvaroDefeat
# 309 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_AlvaroPostBattle, MSGBOX_AUTOCLOSE
# 310 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 311 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 312 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Everett::
# 313 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	trainerbattle_single TRAINER_EVERETT, Route110_TrickHousePuzzle7_Text_EverettIntro, Route110_TrickHousePuzzle7_Text_EverettDefeat
# 314 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_EverettPostBattle, MSGBOX_AUTOCLOSE
# 315 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	end
# 316 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 317 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened::
# 318 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 319 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "on the door.\p"
# 320 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "“TRICK MASTER is huggable.”\n"
# 321 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "… … … … … … … …\p"
# 322 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The lock clicked open!$"
# 323 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 324 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaIntro:
# 325 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "The TRICK MASTER always vanishes\n"
# 326 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "like smoke. How does he do it?$"
# 327 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 328 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaDefeat:
# 329 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Aiyeeeh! You're much too strong!\n"
# 330 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "How do you do it?$"
# 331 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 332 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_JoshuaPostBattle:
# 333 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I wish I could appear and disappear as\n"
# 334 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "if I were smoke, too.$"
# 335 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 336 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaIntro:
# 337 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Going around the same spot…\n"
# 338 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It begets ill fortune…$"
# 339 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 340 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaDefeat:
# 341 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Defeated!\n"
# 342 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's a bad sign…$"
# 343 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 344 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_PatriciaPostBattle:
# 345 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I've circled the same spot over ten\n"
# 346 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "times now… It's ill fortune…$"
# 347 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 348 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisIntro:
# 349 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Whoever wins will get through here\n"
# 350 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "first. That's the feeling I get.$"
# 351 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 352 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisDefeat:
# 353 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh!\n"
# 354 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, go ahead, then!$"
# 355 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 356 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlexisPostBattle:
# 357 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're solving all the puzzles in the\n"
# 358 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "TRICK HOUSE. That's the feeling I get.$"
# 359 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 360 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaIntro:
# 361 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Nufufufu, here at last!\n"
# 362 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Let's get right with it!$"
# 363 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 364 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaDefeat:
# 365 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "You're so casual about winning!$"
# 366 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 367 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_MarielaPostBattle:
# 368 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Humph! I'm not upset!\n"
# 369 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Not me!$"
# 370 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 371 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroIntro:
# 372 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I ever so closely watched you coming!$"
# 373 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 374 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroDefeat:
# 375 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "This outcome I didn't see coming…$"
# 376 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 377 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_AlvaroPostBattle:
# 378 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Well, anyway, we both picked a weird\n"
# 379 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "place to get acquainted.\p"
# 380 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "As one weirdo to another,\n"
# 381 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "let's do our best!$"
# 382 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 383 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettIntro:
# 384 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "It's awfully cramped in here…$"
# 385 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 386 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettDefeat:
# 387 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "Oh, yes, strong you are.$"
# 388 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"

# 389 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
Route110_TrickHousePuzzle7_Text_EverettPostBattle:
# 390 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "I was hoping to switch places with you\n"
# 391 "data/maps/Route110_TrickHousePuzzle7/scripts.pory"
	.string "when I beat you, but…$"
