# 1 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 2 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 3 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_MapScripts::
# 4 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle5_OnTransition
# 5 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.byte 0
# 6 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 7 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_OnTransition:
# 8 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 0
# 9 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 0
# 10 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 0
# 11 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 0
# 12 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 0
# 13 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, 0
# 14 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 16 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Scroll::
# 17 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 18 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0, Route110_TrickHousePuzzle5_EventScript_FoundScroll
# 19 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
# 20 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 21 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 22 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_FoundScroll::
# 23 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 1
# 24 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
# 25 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 26 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 27 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1::
# 28 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 29 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Common_Movement_FacePlayer
# 30 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_1, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 32 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 33 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 34 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 35 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 36 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2::
# 37 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 38 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Common_Movement_FacePlayer
# 39 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 41 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 42 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 43 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 44 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 45 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3::
# 46 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 47 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Common_Movement_FacePlayer
# 48 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 49 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_3, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 50 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 51 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 52 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 53 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 54 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4::
# 55 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 56 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Common_Movement_FacePlayer
# 57 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 58 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_4, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 59 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 60 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 61 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 62 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 63 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5::
# 64 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 65 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Common_Movement_FacePlayer
# 66 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto_if_eq VAR_TEMP_5, 1, Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 68 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 69 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
# 70 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 71 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 72 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger0::
# 73 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 74 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 75 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 76 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 77 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 78 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger1::
# 79 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 80 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 81 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 82 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 83 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 84 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger2::
# 85 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 86 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 87 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 88 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 89 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 90 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger3::
# 91 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 92 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 93 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 94 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 95 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 96 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Trigger4::
# 97 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 98 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 99 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate
# 100 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 101 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 102 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger0::
# 103 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 104 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 105 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 106 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 107 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 108 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger1::
# 109 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 110 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 111 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 112 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 113 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 114 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger2::
# 115 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 116 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 117 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 118 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 119 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 120 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger3::
# 121 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 122 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 123 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 124 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 125 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 126 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger4::
# 127 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 128 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 129 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 130 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 131 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 132 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Trigger5::
# 133 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 134 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 135 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate
# 136 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 137 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 138 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger0::
# 139 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 140 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 141 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 142 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 143 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 144 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger1::
# 145 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 146 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 147 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 148 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 149 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 150 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger2::
# 151 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 152 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 153 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 154 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 155 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 156 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger3::
# 157 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 158 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 159 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 160 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 161 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 162 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Trigger4::
# 163 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 164 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 165 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate
# 166 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 167 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 168 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger0::
# 169 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 170 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 171 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 172 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 173 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 174 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger1::
# 175 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 176 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 1
# 177 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 178 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 179 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 180 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger2::
# 181 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 182 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 2
# 183 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 184 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 185 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 186 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger3::
# 187 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 188 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 3
# 189 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 190 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 191 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 192 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger4::
# 193 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 194 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 4
# 195 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 196 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 197 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 198 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@ Unused
# 199 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Trigger5::
# 200 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 201 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 5
# 202 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate
# 203 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 204 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 205 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Trigger0::
# 206 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	lockall
# 207 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_9, 0
# 208 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate
# 209 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 210 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 211 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Activate::
# 212 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_1, 1
# 213 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_1
# 214 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 215 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Common_Movement_ExclamationMark
# 216 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Common_Movement_Delay48
# 218 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 219 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 220 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 221 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 222 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 223 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Intro, MSGBOX_DEFAULT
# 224 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 225 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1
# 227 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2
# 228 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3
# 229 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 230 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 231 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Activate::
# 232 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_2, 1
# 233 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_2
# 234 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 235 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Common_Movement_ExclamationMark
# 236 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Common_Movement_Delay48
# 238 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 239 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1
# 240 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2
# 241 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3
# 242 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4
# 243 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 5, Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5
# 244 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Intro, MSGBOX_DEFAULT
# 245 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 246 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 247 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1
# 248 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2
# 249 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3
# 250 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 251 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 252 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Activate::
# 253 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_3, 1
# 254 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_3
# 255 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 256 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Common_Movement_ExclamationMark
# 257 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 258 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Common_Movement_Delay48
# 259 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 260 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 261 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 262 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 263 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 264 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Intro, MSGBOX_DEFAULT
# 265 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 266 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 267 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1
# 268 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2
# 269 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3
# 270 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 271 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 272 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Activate::
# 273 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_4, 1
# 274 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_4
# 275 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 276 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Common_Movement_ExclamationMark
# 277 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 278 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Common_Movement_Delay48
# 279 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 280 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 1, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1
# 281 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 2, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2
# 282 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 3, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3
# 283 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_9, 4, Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4
# 284 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Intro, MSGBOX_DEFAULT
# 285 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 286 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 287 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1
# 288 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2
# 289 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3
# 290 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 291 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 292 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Activate::
# 293 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_5, 1
# 294 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	setvar VAR_TEMP_8, LOCALID_MECHADOLL_5
# 295 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_PIN
# 296 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Common_Movement_ExclamationMark
# 297 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 298 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Common_Movement_Delay48
# 299 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 300 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Intro, MSGBOX_DEFAULT
# 301 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	random 3
# 302 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 303 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1
# 304 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2
# 305 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3
# 306 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 307 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 308 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz1::
# 309 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1, MSGBOX_DEFAULT
# 310 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q1, TRUE
# 311 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 312 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 313 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 314 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 315 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 316 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz2::
# 317 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2, MSGBOX_DEFAULT
# 318 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q2, TRUE
# 319 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 320 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 321 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 322 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 323 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 324 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1Quiz3::
# 325 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3, MSGBOX_DEFAULT
# 326 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL1_Q3, TRUE
# 327 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 328 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 329 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 330 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 331 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 332 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz1::
# 333 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1, MSGBOX_DEFAULT
# 334 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q1, TRUE
# 335 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 336 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 337 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 338 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 339 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 340 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz2::
# 341 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2, MSGBOX_DEFAULT
# 342 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q2, TRUE
# 343 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 344 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 345 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 346 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 347 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 348 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2Quiz3::
# 349 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3, MSGBOX_DEFAULT
# 350 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL2_Q3, TRUE
# 351 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 352 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 353 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 354 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 355 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 356 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz1::
# 357 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1, MSGBOX_DEFAULT
# 358 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q1, TRUE
# 359 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 360 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 361 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 362 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 363 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 364 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz2::
# 365 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2, MSGBOX_DEFAULT
# 366 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q2, TRUE
# 367 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 368 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 369 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 370 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 371 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 372 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3Quiz3::
# 373 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3, MSGBOX_DEFAULT
# 374 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL3_Q3, TRUE
# 375 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 376 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 377 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 378 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 379 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 380 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz1::
# 381 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1, MSGBOX_DEFAULT
# 382 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q1, TRUE
# 383 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 384 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 385 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 386 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 387 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 388 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz2::
# 389 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2, MSGBOX_DEFAULT
# 390 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q2, TRUE
# 391 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 392 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 393 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 394 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 395 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 396 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4Quiz3::
# 397 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3, MSGBOX_DEFAULT
# 398 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL4_Q3, TRUE
# 399 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 400 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 401 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 402 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 403 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 404 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz1::
# 405 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1, MSGBOX_DEFAULT
# 406 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q1, TRUE
# 407 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 408 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 1, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 409 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 410 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 411 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 412 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz2::
# 413 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2, MSGBOX_DEFAULT
# 414 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q2, TRUE
# 415 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 416 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 0, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 417 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 418 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 419 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 420 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5Quiz3::
# 421 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3, MSGBOX_DEFAULT
# 422 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	multichoice 0, 0, MULTI_MECHADOLL5_Q3, TRUE
# 423 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	switch VAR_RESULT
# 424 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	case 2, Route110_TrickHousePuzzle5_EventScript_CorrectAnswer
# 425 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer
# 426 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 427 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 428 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_IncorrectAnswer::
# 429 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 430 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_FAILURE
# 431 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_DisappointmentError, MSGBOX_DEFAULT
# 432 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 433 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 434 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 435 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 436 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 437 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_Wahahahaha, MSGBOX_DEFAULT
# 438 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 439 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WaitForNextChallenge, MSGBOX_DEFAULT
# 440 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	closemessage
# 441 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 442 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitstate
# 443 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
# 444 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 445 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 446 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_CorrectAnswer::
# 447 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitse
# 448 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	playse SE_SUCCESS
# 449 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	goto Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough
# 450 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 451 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 452 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_CorrectGoThrough::
# 453 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_CorrectGoThrough, MSGBOX_DEFAULT
# 454 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	releaseall
# 455 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	end
# 456 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 457 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@ Absurd redundancy in movement scripts that could be resolved by using VAR_TEMP_8 for applymovement instead
# 458 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@ Many of the below movement scripts arent even used, see below
# 459 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@   Mechadoll 2 is the only mechadoll to walk right, all the other WalkRight scripts are unused
# 460 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@   Mechadoll 5 never walks, all the Mechadoll5Walk scripts are unused
# 461 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
@   No mechadoll walks left 5 paces, all the WalkLeft5 scripts are unused
# 462 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft1::
# 463 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1
# 464 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft1
# 465 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1
# 466 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1
# 467 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft1
# 468 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 469 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 470 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft2::
# 471 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2
# 472 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft2
# 473 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2
# 474 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2
# 475 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft2
# 476 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 477 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 478 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft3::
# 479 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3
# 480 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft3
# 481 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3
# 482 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3
# 483 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft3
# 484 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 485 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 486 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft4::
# 487 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4
# 488 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft4
# 489 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4
# 490 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4
# 491 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft4
# 492 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 493 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 494 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkLeft5::
# 495 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft5
# 496 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft5
# 497 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft5
# 498 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft5
# 499 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft5
# 500 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 501 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 502 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight1::
# 503 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight1
# 504 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1
# 505 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight1
# 506 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight1
# 507 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight1
# 508 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 509 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 510 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight2::
# 511 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight2
# 512 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2
# 513 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight2
# 514 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight2
# 515 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight2
# 516 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 517 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 518 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight3::
# 519 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight3
# 520 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3
# 521 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight3
# 522 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight3
# 523 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight3
# 524 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 525 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 526 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight4::
# 527 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight4
# 528 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4
# 529 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight4
# 530 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight4
# 531 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight4
# 532 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 533 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 534 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_MechadollWalkRight5::
# 535 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight5
# 536 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5
# 537 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight5
# 538 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight5
# 539 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	call_if_eq VAR_TEMP_8, LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight5
# 540 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 541 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 542 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft1::
# 543 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 544 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 545 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 546 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 547 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft1::
# 548 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 549 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 550 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 551 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 552 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft1::
# 553 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 554 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 555 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 556 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 557 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft1::
# 558 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 559 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 560 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 561 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 562 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft1::
# 563 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft1
# 564 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 565 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 566 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 567 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft2::
# 568 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 569 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 570 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 571 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 572 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft2::
# 573 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 574 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 575 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 576 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 577 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft2::
# 578 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 579 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 580 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 581 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 582 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft2::
# 583 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 584 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 585 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 586 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 587 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft2::
# 588 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft2
# 589 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 590 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 591 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 592 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft3::
# 593 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 594 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 595 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 596 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 597 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft3::
# 598 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 599 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 600 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 601 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 602 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft3::
# 603 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 604 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 605 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 606 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 607 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft3::
# 608 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 609 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 610 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 611 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 612 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft3::
# 613 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft3
# 614 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 616 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 617 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft4::
# 618 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 619 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 620 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 621 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 622 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft4::
# 623 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 624 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 625 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 626 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 627 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft4::
# 628 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 629 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 631 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 632 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft4::
# 633 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 634 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 635 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 636 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 637 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft4::
# 638 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft4
# 639 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 640 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 641 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 642 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkLeft5::
# 643 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 644 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 645 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 646 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 647 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkLeft5::
# 648 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 649 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 650 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 651 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 652 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkLeft5::
# 653 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 654 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 655 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 656 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 657 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkLeft5::
# 658 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 659 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 661 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 662 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkLeft5::
# 663 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkLeft5
# 664 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 666 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 667 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight1::
# 668 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 669 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 670 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 671 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 672 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight1::
# 673 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 674 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 675 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 676 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 677 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight1::
# 678 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 679 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 680 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 681 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 682 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight1::
# 683 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 684 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 685 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 686 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 687 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight1::
# 688 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight1
# 689 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 690 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 691 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 692 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight2::
# 693 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 694 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 695 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 696 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 697 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight2::
# 698 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 699 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 700 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 701 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 702 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight2::
# 703 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 704 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 705 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 706 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 707 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight2::
# 708 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 709 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 710 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 711 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 712 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight2::
# 713 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight2
# 714 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 715 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 716 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 717 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight3::
# 718 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 719 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 720 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 721 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 722 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight3::
# 723 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 724 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 725 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 726 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 727 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight3::
# 728 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 729 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 730 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 731 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 732 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight3::
# 733 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 734 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 735 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 736 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 737 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight3::
# 738 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight3
# 739 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 740 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 741 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 742 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight4::
# 743 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 744 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 745 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 746 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 747 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight4::
# 748 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 749 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 750 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 751 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 752 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight4::
# 753 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 754 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 755 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 756 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 757 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight4::
# 758 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 759 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 760 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 761 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 762 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight4::
# 763 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight4
# 764 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 765 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 766 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 767 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll1WalkRight5::
# 768 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_1, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 769 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 770 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 771 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 772 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll2WalkRight5::
# 773 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_2, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 774 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 775 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 776 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 777 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll3WalkRight5::
# 778 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_3, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 779 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 780 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 781 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 782 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll4WalkRight5::
# 783 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_4, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 784 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 785 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 786 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 787 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Mechadoll5WalkRight5::
# 788 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	applymovement LOCALID_MECHADOLL_5, Route110_TrickHousePuzzle5_Movement_WalkRight5
# 789 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	waitmovement 0
# 790 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	return
# 791 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 792 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft1:
# 793 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 794 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 795 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 796 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft2:
# 797 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 798 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 799 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 800 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 801 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft3:
# 802 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 803 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 804 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 805 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 806 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 807 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft4:
# 808 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 809 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 810 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 811 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 812 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 813 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 814 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkLeft5:
# 815 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 816 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 817 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 818 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 819 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_left
# 820 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 821 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 822 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight1:
# 823 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 824 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 825 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 826 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight2:
# 827 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 828 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 829 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 830 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 831 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight3:
# 832 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 833 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 834 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 835 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 836 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 837 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight4:
# 838 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 839 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 840 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 841 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 842 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 843 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 844 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_WalkRight5:
# 845 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 846 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 847 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 848 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 849 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	walk_right
# 850 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 851 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 852 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Movement_MechadollShake:
# 853 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 854 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 855 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 856 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 857 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 858 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 859 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 860 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 861 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 862 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 863 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 864 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 865 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 866 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 867 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 868 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 869 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 870 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 871 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 872 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 873 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 874 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 875 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 876 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 877 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 878 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 879 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 880 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 881 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 882 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 883 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 884 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 885 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 886 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 887 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 888 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 889 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 890 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 891 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 892 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 893 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_left
# 894 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 895 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_right
# 896 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	delay_2
# 897 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	face_down
# 898 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	step_end
# 899 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 900 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened:
# 901 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "{PLAYER} wrote down the secret code\n"
# 902 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "on the door.\p"
# 903 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "“Trick Master is a genius.”\n"
# 904 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "… … … … … … … …\p"
# 905 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "The lock clicked open!$"
# 906 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 907 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Intro:
# 908 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 909 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 AM I!\p"
# 910 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "IF YOU ANSWER QUIZZES CORRECTLY,\n"
# 911 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THEN YOU WILL GO TO MECHADOLL 5.\l"
# 912 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THEN YOU CAN OBTAIN THE SECRET CODE.$"
# 913 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 914 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz1:
# 915 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 916 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these Pokémon is not found\n"
# 917 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "on ROUTE 110. Which one is it?$"
# 918 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 919 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz2:
# 920 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 921 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these Pokémon is not of the\n"
# 922 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "WATER type. Which one is it?$"
# 923 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 924 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll1Quiz3:
# 925 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1 QUIZ.\p"
# 926 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "One of these Pokémon does not use\n"
# 927 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "LEECH LIFE. Which one is it?$"
# 928 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 929 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_CorrectGoThrough:
# 930 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CONGRATULATIONS. CORRECT YOU ARE.\n"
# 931 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "GO THROUGH. PLEASE.$"
# 932 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 933 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_DisappointmentError:
# 934 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "BZZZT. DISAPPOINTMENT.\n"
# 935 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "ERROR.$"
# 936 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 937 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Wahahahaha:
# 938 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "WAHAHAHAHA! WAHAHAHAHA!\n"
# 939 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK!$"
# 940 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 941 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_WaitForNextChallenge:
# 942 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "YOUR NEXT CHALLENGE WE WAIT FOR.$"
# 943 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 944 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Intro:
# 945 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 946 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 AM I!\p"
# 947 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 1'S QUIZ DIFFICULTY LEVEL\n"
# 948 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "IS SET TOO LOW.$"
# 949 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 950 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz1:
# 951 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 952 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these Pokémon did WALLY\n"
# 953 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "borrow from your father?$"
# 954 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 955 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz2:
# 956 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 957 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these Pokémon was chasing\n"
# 958 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "PROF. BIRCH?$"
# 959 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 960 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll2Quiz3:
# 961 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 2 QUIZ.\p"
# 962 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which of these Pokémon did TEAM AQUA\n"
# 963 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "use in PETALBURG FOREST?$"
# 964 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 965 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Intro:
# 966 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 967 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 AM I!\p"
# 968 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MATTERS OF MONEY ARE MY SOLE FOCUS.$"
# 969 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 970 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz1:
# 971 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 972 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Which costs more?\n"
# 973 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Three HARBOR MAILS or one BURN HEAL?$"
# 974 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 975 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz2:
# 976 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 977 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Sell one GREAT BALL and buy\n"
# 978 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "one POTION. How much money remains?$"
# 979 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 980 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll3Quiz3:
# 981 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 3 QUIZ.\p"
# 982 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "Do one REPEL and SODA POP cost\n"
# 983 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "more than one SUPER POTION?$"
# 984 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 985 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Intro:
# 986 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 987 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 THAT IS ME!\p"
# 988 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MY QUIZ IS AN OBJECT OF BEAUTY.$"
# 989 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 990 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1:
# 991 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 992 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In SEASHORE HOUSE, were there more men\n"
# 993 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "or women?$"
# 994 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 995 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz2:
# 996 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 997 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In LAVARIDGE TOWN, were there more\n"
# 998 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "elderly men or elderly women?$"
# 999 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1000 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz3:
# 1001 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 4 QUIZ.\p"
# 1002 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In the TRAINER'S SCHOOL, how many\n"
# 1003 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "girl students were there?$"
# 1004 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1005 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Intro:
# 1006 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "CLICKETY-CLACK…\n"
# 1007 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 AM I!\p"
# 1008 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "THE MASTER'S BEST AND PROUDEST\n"
# 1009 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "ACHIEVEMENT AM I.$"
# 1010 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1011 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz1:
# 1012 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 1013 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In SLATEPORT's Pokémon FAN CLUB,\n"
# 1014 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "how many Pokémon were there?$"
# 1015 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1016 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz2:
# 1017 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 1018 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "In FORTREE CITY, how many\n"
# 1019 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "tree houses were there?$"
# 1020 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"

# 1021 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
Route110_TrickHousePuzzle5_Text_Mechadoll5Quiz3:
# 1022 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "MECHADOLL 5 QUIZ.\p"
# 1023 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "On the CYCLING ROAD, how many\n"
# 1024 "data/maps/Route110_TrickHousePuzzle5/scripts.pory"
	.string "TRIATHLETES were there?$"
