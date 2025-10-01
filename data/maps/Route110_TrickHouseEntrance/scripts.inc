Route110_TrickHouseEntrance_Apprentice::
# 2 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lock
# 3 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	faceplayer
# 4 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_0
# 9 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 10 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 11 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 21, 0, MULTI_TRICK_HOUSE_GIFTS, FALSE
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_2
# 12 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_2
# 16 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, VAR_TRICK_HOUSE_LEVEL
	goto_if_gt Route110_TrickHouseEntrance_Apprentice_7
# 22 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_11
# 61 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_12
# 102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_13
# 144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_Apprentice_14
# 193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_Apprentice_15
# 242 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_Apprentice_16
# 284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_Apprentice_17
# 326 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_Apprentice_18
Route110_TrickHouseEntrance_Apprentice_9:
# 376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_2:
# 13 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_7:
# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_1
# 19 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_11:
# 24 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_1, Route110_TrickHouseEntrance_Apprentice_20
# 30 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_1, Route110_TrickHouseEntrance_Apprentice_43
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_4, MSGBOX_YESNO
# 39 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_67
# 43 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 44 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_93
# 51 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_94
Route110_TrickHouseEntrance_Apprentice_91:
# 58 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_1
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_12:
# 62 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_2, Route110_TrickHouseEntrance_Apprentice_23
# 68 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_2, Route110_TrickHouseEntrance_Apprentice_46
# 73 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_6, MSGBOX_YESNO
# 76 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_70
# 80 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 81 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_97
# 88 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_98
Route110_TrickHouseEntrance_Apprentice_95:
# 95 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 96 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_127
Route110_TrickHouseEntrance_Apprentice_126:
# 99 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_2
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_13:
# 103 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_3, Route110_TrickHouseEntrance_Apprentice_26
# 109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_3, Route110_TrickHouseEntrance_Apprentice_49
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_10, MSGBOX_YESNO
# 118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_73
# 122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_101
# 130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_102
Route110_TrickHouseEntrance_Apprentice_99:
# 137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_130
Route110_TrickHouseEntrance_Apprentice_129:
# 141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_3
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_14:
# 145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_4, Route110_TrickHouseEntrance_Apprentice_29
# 151 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_4, Route110_TrickHouseEntrance_Apprentice_52
# 156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_13, MSGBOX_YESNO
# 161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_76
# 165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_105
# 173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_106
# 179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_107
Route110_TrickHouseEntrance_Apprentice_103:
# 186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 187 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_133
Route110_TrickHouseEntrance_Apprentice_132:
# 190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_4
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_15:
# 194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_5, Route110_TrickHouseEntrance_Apprentice_32
# 200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_5, Route110_TrickHouseEntrance_Apprentice_55
# 205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_17, MSGBOX_YESNO
# 210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_79
# 214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_110
# 222 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_111
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_112
Route110_TrickHouseEntrance_Apprentice_108:
# 235 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 236 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_136
Route110_TrickHouseEntrance_Apprentice_135:
# 239 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_5
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_16:
# 243 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_6, Route110_TrickHouseEntrance_Apprentice_35
# 249 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_6, Route110_TrickHouseEntrance_Apprentice_58
# 254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_21, MSGBOX_YESNO
# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_82
# 262 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 264 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_115
# 270 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_116
Route110_TrickHouseEntrance_Apprentice_113:
# 277 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 278 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_139
Route110_TrickHouseEntrance_Apprentice_138:
# 281 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_6
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_17:
# 285 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_7, Route110_TrickHouseEntrance_Apprentice_38
# 291 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_7, Route110_TrickHouseEntrance_Apprentice_61
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_24, MSGBOX_YESNO
# 300 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_85
# 304 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 305 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 306 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_119
# 312 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_120
Route110_TrickHouseEntrance_Apprentice_117:
# 319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 320 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_142
Route110_TrickHouseEntrance_Apprentice_141:
# 323 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_7
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_18:
# 327 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_8, Route110_TrickHouseEntrance_Apprentice_41
# 333 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_8, Route110_TrickHouseEntrance_Apprentice_64
# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_27, MSGBOX_YESNO
# 343 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_88
# 347 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 348 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 349 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_123
# 355 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_124
# 361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_125
Route110_TrickHouseEntrance_Apprentice_121:
# 368 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 369 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_145
Route110_TrickHouseEntrance_Apprentice_144:
# 372 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_8
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_20:
# 25 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 27 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_23:
# 63 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 65 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_26:
# 104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_29:
# 146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_32:
# 195 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_35:
# 244 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 246 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_38:
# 286 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_41:
# 328 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 330 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_43:
# 31 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 32 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_46:
# 69 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 70 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_49:
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_52:
# 152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_55:
# 201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_58:
# 250 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 251 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_61:
# 292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 293 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_64:
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 335 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_67:
# 40 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_70:
# 77 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_73:
# 119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_76:
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_79:
# 211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_82:
# 259 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_85:
# 301 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_88:
# 344 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_93:
# 46 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SANDSHREW, 5, , , , , , , , , , , , , , , , , , MOVE_SCRATCH, MOVE_POISON_STING, MOVE_SAND_ATTACK, MOVE_SPIKY_SHIELD
# 47 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 48 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_5
# 49 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 50 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_91

Route110_TrickHouseEntrance_Apprentice_94:
# 52 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SANDSHREW_ALOLAN, 5, , , , , , , , , , , , , , , , , , MOVE_BIDE, MOVE_SCRATCH, MOVE_MIST, MOVE_SPIKY_SHIELD
# 53 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 54 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_5
# 55 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 56 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_91

Route110_TrickHouseEntrance_Apprentice_97:
# 83 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SOLROCK, 15
# 84 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 85 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_7
# 86 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 87 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_95

Route110_TrickHouseEntrance_Apprentice_98:
# 89 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_LUNATONE, 15
# 90 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 91 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_8
# 92 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 93 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_95

Route110_TrickHouseEntrance_Apprentice_101:
# 125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MURKROW, 20
# 126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_11
# 128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_99

Route110_TrickHouseEntrance_Apprentice_102:
# 131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MISDREAVUS, 20
# 132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12
# 134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_99

Route110_TrickHouseEntrance_Apprentice_105:
# 168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_JYNX, 30
# 169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_14
# 171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_106:
# 174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_ELECTIVIRE, 30
# 175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_15
# 177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_107:
# 180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MAGMORTAR, 30
# 181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_16
# 183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_110:
# 217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONLEE, 20
# 218 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_18
# 220 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 221 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_111:
# 223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONCHAN, 20
# 224 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 225 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_19
# 226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_112:
# 229 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONTOP, 30
# 230 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_20
# 232 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 233 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_115:
# 265 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_RELICANTH, 40
# 266 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 267 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_22
# 268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_113

Route110_TrickHouseEntrance_Apprentice_116:
# 271 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_AERODACTYL, 40
# 272 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_23
# 274 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 275 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_113

Route110_TrickHouseEntrance_Apprentice_119:
# 307 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_TOGETIC, 25
# 308 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_25
# 310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_117

Route110_TrickHouseEntrance_Apprentice_120:
# 313 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_CLEFAIRY, 25
# 314 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_26
# 316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_117

Route110_TrickHouseEntrance_Apprentice_123:
# 350 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_PINSIR, 50
# 351 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_28
# 353 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_124:
# 356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_KLEAVOR, 50
# 357 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 358 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_29
# 359 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_125:
# 362 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SCIZOR, 50
# 363 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 364 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_30
# 365 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_127:
# 97 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_126

Route110_TrickHouseEntrance_Apprentice_130:
# 139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_129

Route110_TrickHouseEntrance_Apprentice_133:
# 188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_132

Route110_TrickHouseEntrance_Apprentice_136:
# 237 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_135

Route110_TrickHouseEntrance_Apprentice_139:
# 279 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_138

Route110_TrickHouseEntrance_Apprentice_142:
# 321 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_141

Route110_TrickHouseEntrance_Apprentice_145:
# 370 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_144


# 380 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
.set LOCALID_TRICK_MASTER, 1
# 382 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 383 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_MapScripts::
# 384 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEntrance_OnTransition
# 385 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_OnFrame
# 386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEntrance_OnWarp
# 387 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.byte 0
# 388 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 389 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ State descriptions for VAR_TRICK_HOUSE_ENTRANCE_STATE
# 390 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 0: Trick Master is hiding
# 391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 1: Trick Master has left at start of challenge
# 392 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 2: Trick Master ready to give normal reward from previous challenge (if bag was full)
# 393 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 3: Trick Master still making next puzzle
# 394 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 4: Finished final puzzle
# 395 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 5: Completed previous challenge
# 396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 6: 'Trick Master' mechadoll ready to give Tent reward from final challenge (if bag was full)
# 397 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 398 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition:
# 399 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_LANDMARK_TRICK_HOUSE
# 400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 1, Route110_TrickHouseEntrance_EventScript_EnterFromCorridor
# 401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PRIZE_PICKUP, 1, Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward
# 402 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor
# 403 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 404 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 405 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger
# 408 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1
# 409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2
# 410 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3
# 411 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 412 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 413 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward::
# 414 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 415 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward
# 416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 2
# 417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 418 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward::
# 420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 6
# 421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 422 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 423 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterFromCorridor::
# 424 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 0
# 425 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 426 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 427 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 428 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 429 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle::
# 430 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 431 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2
# 432 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3
# 433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4
# 434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5
# 435 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6
# 436 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7
# 437 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8
# 438 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_FinishedPuzzles
# 439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 441 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2::
# 442 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_HEAT_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 443 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 444 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 445 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3::
# 446 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_KNUCKLE_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4::
# 450 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BALANCE_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 451 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 452 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 453 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5::
# 454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_RAIN_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 455 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6::
# 458 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_FEATHER_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 461 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7::
# 462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_MIND_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 464 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8::
# 466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_DYNAMO_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 467 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FinishedPuzzles::
# 470 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 4
# 471 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 472 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 473 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle::
# 474 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 475 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 477 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor::
# 478 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxyperm LOCALID_TRICK_MASTER, 5, 2
# 479 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 481 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger::
# 482 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 483 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 484 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 485 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1::
# 486 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 487 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 488 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 489 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2::
# 490 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 491 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 492 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 493 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3::
# 494 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 495 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 496 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 497 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnWarp:
# 498 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_TrickMasterFound
# 499 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot
# 500 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 1, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 502 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 503 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 4, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 504 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 505 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 6, Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor
# 506 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 507 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterFound::
# 509 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 510 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 511 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 512 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 513 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 514 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot::
# 516 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 517 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	hideobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 518 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 519 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1
# 520 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2
# 521 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3
# 522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4
# 523 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5
# 524 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6
# 525 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7
# 526 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8
# 527 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 528 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1::
# 530 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 6, 3
# 531 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 532 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 533 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2::
# 534 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 5
# 535 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 536 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 537 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3::
# 538 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 9, 1
# 539 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 540 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 541 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4::
# 542 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 3, 1
# 543 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 544 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 545 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5::
# 546 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 0, 5
# 547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 548 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 549 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6::
# 550 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 1
# 551 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 552 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 553 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7::
# 554 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 8, 1
# 555 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 556 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 557 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8::
# 558 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 4, 4
# 559 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 560 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 561 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster::
# 562 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 563 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 564 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 565 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor::
# 566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 567 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 568 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_NORTH
# 569 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 570 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 571 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor::
# 572 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 573 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 574 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_SOUTH
# 575 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 576 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 577 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnFrame:
# 578 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_BeginChallenge
# 579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 580 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 581 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge::
# 582 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 583 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 584 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_MeetTrickMaster
# 585 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse, MSGBOX_DEFAULT
# 586 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 587 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 588 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 589 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 590 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 591 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 592 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 593 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 594 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 1
# 595 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 0
# 596 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 597 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 598 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 599 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_UnusedRelease::
# 600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 601 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 602 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 603 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster::
# 604 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 605 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 606 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster
# 607 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_GiveReward
# 608 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle
# 609 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_MechadollReward
# 610 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 611 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 612 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster::
# 613 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 615 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 617 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 618 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk
# 619 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_FoundBehindTree
# 620 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_FoundInDresser
# 621 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow
# 622 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_FoundInPlanter
# 623 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_FoundInCupboard
# 624 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_FoundBehindWindow
# 625 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion
# 626 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
# 628 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warpsilent MAP_ROUTE110_TRICK_HOUSE_ENTRANCE, 6, 2
# 629 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 630 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 631 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 633 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk::
# 634 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk, MSGBOX_DEFAULT
# 635 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 637 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindTree::
# 638 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindTree, MSGBOX_DEFAULT
# 639 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 640 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 641 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInDresser::
# 642 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInDresser, MSGBOX_DEFAULT
# 643 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 644 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 645 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow::
# 646 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConealedBeyondWindow, MSGBOX_DEFAULT
# 647 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 648 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 649 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInPlanter::
# 650 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInPlanter, MSGBOX_DEFAULT
# 651 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 652 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 653 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInCupboard::
# 654 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInCupboard, MSGBOX_DEFAULT
# 655 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 656 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 657 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindWindow::
# 658 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindWindow, MSGBOX_DEFAULT
# 659 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 660 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 661 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion::
# 662 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion, MSGBOX_DEFAULT
# 663 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 664 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 665 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterSpin:
# 666 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 667 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 668 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 669 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 670 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_down
# 671 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 672 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 673 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 674 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 675 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 676 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterJumpAway:
# 677 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 678 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	disable_anim
# 679 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 680 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 681 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 682 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 683 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 684 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 685 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 686 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 687 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MeetTrickMaster::
# 688 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster, MSGBOX_DEFAULT
# 689 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 690 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 691 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle::
# 692 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick, MSGBOX_DEFAULT
# 693 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 694 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 695 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 696 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 697 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_ExclamationMark
# 698 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 699 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_Delay48
# 700 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 701 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges, MSGBOX_DEFAULT
# 702 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 703 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 704 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 705 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 706 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 707 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward::
# 708 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 709 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 710 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward, MSGBOX_DEFAULT
# 711 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward
# 712 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward
# 713 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward
# 714 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward
# 715 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward
# 716 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward
# 717 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward
# 718 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 719 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 720 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward::
# 721 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 722 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 723 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 724 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 725 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 726 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 727 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 728 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward::
# 729 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 730 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 731 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 732 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 733 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 734 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 735 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 736 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward::
# 737 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_HARD_STONE
# 738 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 739 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 740 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 741 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 742 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 743 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 744 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward::
# 745 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 746 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 747 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 748 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 749 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 750 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 751 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 752 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward::
# 753 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 754 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 755 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 756 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 757 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 758 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 759 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 760 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward::
# 761 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_MAGNET
# 762 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 763 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 764 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 765 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 766 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 767 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 768 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward::
# 769 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_PP_MAX
# 770 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 771 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 772 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 773 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 774 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 775 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 776 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GotReward::
# 777 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 778 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 779 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 780 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 781 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 782 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 783 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 784 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward::
# 785 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 786 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 787 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_MechadollWhichTent, MSGBOX_DEFAULT
# 788 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_ChooseTent
# 789 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_ReceivedTent
# 790 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_NoRoomForDecor
# 791 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_PCFullAgain, MSGBOX_DEFAULT
# 792 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 793 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 794 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 795 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ChooseTent::
# 796 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 797 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 798 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_GiveRedTent
# 799 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveBlueTent
# 800 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 801 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveRedTent::
# 802 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_RED_TENT
# 803 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 804 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 805 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveBlueTent::
# 806 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 807 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 808 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 809 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReceivedTent::
# 810 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ThenFarewell, MSGBOX_DEFAULT
# 811 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 812 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 813 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 814 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 815 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 816 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 817 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 818 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 819 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 820 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 821 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 822 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 823 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 824 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 825 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door::
# 826 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 827 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 828 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ItsAScroll
# 829 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_GoInHolePrompt
# 830 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote
# 831 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage
# 832 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 833 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 834 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ItsAScroll::
# 835 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 836 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 837 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 838 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 839 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GoInHolePrompt::
# 840 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll, MSGBOX_YESNO
# 841 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 842 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom
# 843 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 844 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 845 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 846 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom::
# 847 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_TrickHouse_Stairs_Down, FALSE
# 848 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 849 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 850 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 851 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 852 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEntrance_Movement_EnterRoom
# 853 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 854 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 855 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2
# 856 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1
# 857 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6
# 858 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7
# 859 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3
# 860 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4
# 861 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5
# 862 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8
# 863 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 864 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 865 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Movement_EnterRoom:
# 866 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	set_invisible
# 867 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 868 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 869 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1::
# 870 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE1, 0, 21
# 871 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 872 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 873 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 874 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 875 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2::
# 876 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE2, 0, 21
# 877 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 878 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 879 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 880 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 881 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3::
# 882 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE3, 0, 21
# 883 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 884 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 885 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 886 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 887 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4::
# 888 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE4, 0, 21
# 889 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 890 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 891 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 892 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 893 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5::
# 894 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 895 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 896 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 897 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 898 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 899 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6::
# 900 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE6, 0, 21
# 901 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 902 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 903 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 904 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 905 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7::
# 906 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 0, 21
# 907 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 908 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 909 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 910 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 911 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8::
# 912 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE8, 0, 21
# 913 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 914 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 915 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 916 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 917 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote::
# 918 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 919 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 920 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 921 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 922 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage::
# 923 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2
# 924 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 925 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 926 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 927 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 928 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2::
# 929 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 930 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 931 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 932 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 933 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door::
# 934 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 935 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 936 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHousePuzzle2_EventScript_Door
# 937 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHousePuzzle1_EventScript_Door
# 938 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHousePuzzle6_EventScript_Door
# 939 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHousePuzzle7_EventScript_Door
# 940 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHousePuzzle3_EventScript_Door
# 941 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHousePuzzle4_EventScript_Door
# 942 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHousePuzzle5_EventScript_Door
# 943 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHousePuzzle8_EventScript_Door
# 944 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 945 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 946 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Door::
# 947 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 948 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 949 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 950 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
# 951 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 952 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 953 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 954 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 955 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 956 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Door::
# 957 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 958 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 959 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 960 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 2
# 961 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 962 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 963 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 964 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 965 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 966 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Door::
# 967 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 968 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 969 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 970 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 2
# 971 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 972 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 973 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 974 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 975 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 976 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Door::
# 977 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 978 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 979 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 980 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 2
# 981 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 982 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 983 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 984 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 985 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 986 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Door::
# 987 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 988 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 989 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 990 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 2
# 991 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 992 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 993 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 994 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 995 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 996 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Door::
# 997 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 998 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 999 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1000 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 2
# 1001 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1002 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1003 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1004 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1005 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1006 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Door::
# 1007 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1008 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1009 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1010 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 2
# 1011 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1012 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1013 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1014 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1015 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1016 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Door::
# 1017 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1018 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1019 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1020 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 2
# 1021 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1022 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1023 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1024 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1025 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1026 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_DoorLocked::
# 1027 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere, MSGBOX_DEFAULT
# 1028 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1029 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1030 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1031 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_ReadScrollAgain::
# 1032 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt, MSGBOX_DEFAULT
# 1033 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1034 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1035 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1036 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_FoundScroll::
# 1037 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1038 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	message Route110_TrickHousePuzzle_Text_FoundAScroll
# 1039 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
# 1040 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_MemorizedSecretCode, MSGBOX_DEFAULT
# 1041 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1042 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1043 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1044 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding::
# 1045 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 1046 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureBeingWatched, MSGBOX_DEFAULT
# 1047 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1048 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1
# 1049 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2
# 1050 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3
# 1051 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 1052 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1053 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1054 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1::
# 1055 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 6  @ x
# 1056 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 3  @ y
# 1057 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1058 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1059 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1060 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2::
# 1061 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 11  @ x
# 1062 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 5   @ y
# 1063 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1064 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1065 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1066 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3::
# 1067 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 9  @ x
# 1068 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 2  @ y
# 1069 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1070 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1071 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1072 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle::
# 1073 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 1074 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	dofieldeffectsparkle VAR_0x8004, VAR_0x8005, VAR_0x8006
# 1075 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 1076 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 10
# 1077 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1078 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1079 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureBeingWatched:
# 1080 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You're being watched…$"
# 1081 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1082 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk:
# 1083 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1084 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1085 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this desk? You're sharp!$"
# 1086 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1087 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindTree:
# 1088 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1089 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1090 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this tree? You're sharp!$"
# 1091 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1092 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInDresser:
# 1093 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1094 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1095 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this dresser? You're sharp!$"
# 1096 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1097 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConealedBeyondWindow:
# 1098 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1099 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beyond this window? You're sharp!$"
# 1101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInPlanter:
# 1103 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this planter? You're sharp!$"
# 1106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInCupboard:
# 1108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this cupboard? You're sharp!$"
# 1111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindWindow:
# 1113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this window? You're sharp!$"
# 1116 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1117 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion:
# 1118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this cushion? You're sharp!$"
# 1121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster:
# 1123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Behold!\p"
# 1124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For I am the greatest living mystery\n"
# 1125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "of a man in all of Hoenn!\l"
# 1126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "They call me…\p"
# 1127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The Trick Master!\n"
# 1128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Wahahaha! Glad to meet you!$"
# 1129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse:
# 1131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You, you've come to challenge\n"
# 1132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "my Trick house, haven't you?\p"
# 1133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "That's why you're here, isn't it?\n"
# 1134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, it is!\p"
# 1135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Consider your challenge accepted!\p"
# 1136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Enter through the scroll there,\n"
# 1137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and let your challenge commence!\p"
# 1138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I shall be waiting in the back!$"
# 1139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ItsAScroll:
# 1141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's a scroll.$"
# 1142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll:
# 1144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a big hole behind the scroll!\p"
# 1145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Want to go in?$"
# 1146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote:
# 1148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a note affixed to the scroll…\p"
# 1149 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "“I am leaving on a journey.\n"
# 1150 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Don't look for me. Trick Master”$"
# 1151 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick:
# 1153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For the next time, I'll use this trick,\n"
# 1154 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and that scheme, and those ruses…\p"
# 1155 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Mufufufu… If I may say so, it's\n"
# 1156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "brilliantly difficult, even for me!$"
# 1157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges:
# 1159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? What?!\n"
# 1160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Oh, it's you!\p"
# 1161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'm in the midst of devising new tricky\n"
# 1162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "challenges!\p"
# 1163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's not too much to ask for a bit more\n"
# 1164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "time for me to think, is it now?\l"
# 1165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You wouldn't begrudge me that?\l"
# 1166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Come back in a little while!$"
# 1167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward:
# 1169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Ah, it's you! You're here to accept the\n"
# 1170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "reward from before, isn't that right?\l"
# 1171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, right I am!\p"
# 1172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Here!\n"
# 1173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'll give it to you now!$"
# 1174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward:
# 1176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah?\n"
# 1177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Did you not come to claim your reward?$"
# 1178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_MechadollWhichTent:
# 1180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MECHADOLL 5 I AM!\n"
# 1181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "IF REWARD IS NOT TAKEN BY YOU,\l"
# 1182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN TRICK MASTER YOU CANNOT FOLLOW.\p"
# 1183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "RED TENT OR BLUE TENT,\n"
# 1184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "WHICH DO YOU PREFER?$"
# 1185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ThenFarewell:
# 1187 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN FAREWELL.$"
# 1188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1189 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_PCFullAgain:
# 1190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\n"
# 1191 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MEAN, YOU ARE.$"
# 1192 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_FoundAScroll:
# 1194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} found a scroll.$"
# 1195 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1196 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_MemorizedSecretCode:
# 1197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} memorized the secret code\n"
# 1198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "written on the scroll.$"
# 1199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt:
# 1201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "A secret code is written on it.$"
# 1202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1203 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere:
# 1204 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The door is locked.\p"
# 1205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "…On closer inspection, this is written\n"
# 1206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "on it: “Write the secret code here.”$"

Route110_TrickHouseEntrance_Apprentice_Text_0:
# 4 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "They call me the Trick Apprentice,\n"
	.string "loyal protégé to the one and only\l"
	.string "Trick Master!\p"
	.string "Would you like to pick up any of\n"
	.string "your puzzle rewards?$"

Route110_TrickHouseEntrance_Apprentice_Text_1:
# 17 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The Trick Master hasn't even devised\n"
	.string "of that puzzle yet!$"

Route110_TrickHouseEntrance_Apprentice_Text_2:
# 25 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It looks like you haven't completed\n"
	.string "that puzzle.$"

Route110_TrickHouseEntrance_Apprentice_Text_3:
# 31 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You've already taken that reward.$"

Route110_TrickHouseEntrance_Apprentice_Text_4:
# 35 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The first reward is either a Sandshrew\n"
	.string "or an Alolan Sandshrew, both with\l"
	.string "Spiky Shield.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_5:
# 48 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Sandshrew!$"

Route110_TrickHouseEntrance_Apprentice_Text_6:
# 73 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The second reward is either a Solrock\n"
	.string "or Lunatone, both with Photon Geyser.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_7:
# 85 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Solrock!$"

Route110_TrickHouseEntrance_Apprentice_Text_8:
# 91 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Lunatone!$"

Route110_TrickHouseEntrance_Apprentice_Text_9:
# 95 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Give this Pokémon a nickname?$"

Route110_TrickHouseEntrance_Apprentice_Text_10:
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The third reward is either a Murkrow\n"
	.string "with Oblivion Wing, or a Misdreavus\l"
	.string "with Moongeist Beam.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_11:
# 127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Murkrow!$"

Route110_TrickHouseEntrance_Apprentice_Text_12:
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Misdreavus!$"

Route110_TrickHouseEntrance_Apprentice_Text_13:
# 156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The fourth reward is either a Jynx\n"
	.string "with Psycho Boost, an Electivire with\p"
	.string "Volt Tackle, or a Magmortar with\n"
	.string "Armor Cannon.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_14:
# 170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Jynx!$"

Route110_TrickHouseEntrance_Apprentice_Text_15:
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Electivire!$"

Route110_TrickHouseEntrance_Apprentice_Text_16:
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Magmortar!$"

Route110_TrickHouseEntrance_Apprentice_Text_17:
# 205 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The fifth reward is either a Hitmonlee\n"
	.string "with Thunderous Kick, a Hitmonchan\p"
	.string "with Wicked Blow, or a Hitmontop with\n"
	.string "Surging Strikes.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_18:
# 219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmonlee!$"

Route110_TrickHouseEntrance_Apprentice_Text_19:
# 225 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmonchan!$"

Route110_TrickHouseEntrance_Apprentice_Text_20:
# 231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmontop!$"

Route110_TrickHouseEntrance_Apprentice_Text_21:
# 254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The sixth reward is either a Relicanth\n"
	.string "with Wave Crash, or an Aerodactyl\l"
	.string "with Brave Bird.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_22:
# 267 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Relicanth!$"

Route110_TrickHouseEntrance_Apprentice_Text_23:
# 273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Aerodactyl!$"

Route110_TrickHouseEntrance_Apprentice_Text_24:
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The seventh reward is either a Togetic\n"
	.string "with Aeroblast, or a Clefairy with\l"
	.string "Light of Ruin.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_25:
# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Togetic!$"

Route110_TrickHouseEntrance_Apprentice_Text_26:
# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Clefairy!$"

Route110_TrickHouseEntrance_Apprentice_Text_27:
# 338 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The final reward is either a Pinsir\n"
	.string "with Extreme Speed, a Kleavor with\p"
	.string "Mighty Cleave, or a Scizor with\n"
	.string "Gear Grind.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_28:
# 352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Pinsir!$"

Route110_TrickHouseEntrance_Apprentice_Text_29:
# 358 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Kleavor!$"

Route110_TrickHouseEntrance_Apprentice_Text_30:
# 364 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Scizor!$"
