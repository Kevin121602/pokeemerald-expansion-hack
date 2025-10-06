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
# 98 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_13
# 140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_Apprentice_14
# 189 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_Apprentice_15
# 238 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_Apprentice_16
# 280 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_Apprentice_17
# 322 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_Apprentice_18
Route110_TrickHouseEntrance_Apprentice_9:
# 372 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
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
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_2
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_13:
# 99 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_3, Route110_TrickHouseEntrance_Apprentice_26
# 105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_3, Route110_TrickHouseEntrance_Apprentice_49
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_9, MSGBOX_YESNO
# 114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_73
# 118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_101
# 126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_102
Route110_TrickHouseEntrance_Apprentice_99:
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12, MSGBOX_YESNO
# 134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_127
Route110_TrickHouseEntrance_Apprentice_126:
# 137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_3
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_14:
# 141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_4, Route110_TrickHouseEntrance_Apprentice_29
# 147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_4, Route110_TrickHouseEntrance_Apprentice_52
# 152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_13, MSGBOX_YESNO
# 157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_76
# 161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_105
# 169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_106
# 175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_107
Route110_TrickHouseEntrance_Apprentice_103:
# 182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12, MSGBOX_YESNO
# 183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_130
Route110_TrickHouseEntrance_Apprentice_129:
# 186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_4
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_15:
# 190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_5, Route110_TrickHouseEntrance_Apprentice_32
# 196 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_5, Route110_TrickHouseEntrance_Apprentice_55
# 201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_17, MSGBOX_YESNO
# 206 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_79
# 210 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 211 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_110
# 218 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_111
# 224 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_112
Route110_TrickHouseEntrance_Apprentice_108:
# 231 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12, MSGBOX_YESNO
# 232 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_133
Route110_TrickHouseEntrance_Apprentice_132:
# 235 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_5
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_16:
# 239 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_6, Route110_TrickHouseEntrance_Apprentice_35
# 245 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_6, Route110_TrickHouseEntrance_Apprentice_58
# 250 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_21, MSGBOX_YESNO
# 254 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_82
# 258 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 259 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 260 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_115
# 266 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_116
Route110_TrickHouseEntrance_Apprentice_113:
# 273 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12, MSGBOX_YESNO
# 274 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_136
Route110_TrickHouseEntrance_Apprentice_135:
# 277 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_6
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_17:
# 281 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_7, Route110_TrickHouseEntrance_Apprentice_38
# 287 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_7, Route110_TrickHouseEntrance_Apprentice_61
# 292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_24, MSGBOX_YESNO
# 296 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_85
# 300 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 2
# 301 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 302 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_119
# 308 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_120
Route110_TrickHouseEntrance_Apprentice_117:
# 315 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12, MSGBOX_YESNO
# 316 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_139
Route110_TrickHouseEntrance_Apprentice_138:
# 319 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_RECIEVED_TRICK_HOUSE_GIFT_7
	goto Route110_TrickHouseEntrance_Apprentice_9

Route110_TrickHouseEntrance_Apprentice_18:
# 323 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_unset FLAG_BEAT_TRICK_HOUSE_PUZZLE_8, Route110_TrickHouseEntrance_Apprentice_41
# 329 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_set FLAG_RECIEVED_TRICK_HOUSE_GIFT_8, Route110_TrickHouseEntrance_Apprentice_64
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_27, MSGBOX_YESNO
# 339 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_88
# 343 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	random 3
# 344 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 345 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_Apprentice_123
# 351 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_Apprentice_124
# 357 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_Apprentice_125
Route110_TrickHouseEntrance_Apprentice_121:
# 364 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_12, MSGBOX_YESNO
# 365 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route110_TrickHouseEntrance_Apprentice_142
Route110_TrickHouseEntrance_Apprentice_141:
# 368 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
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
# 100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_29:
# 142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_32:
# 191 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_35:
# 240 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 242 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_38:
# 282 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 284 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_41:
# 324 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_2
# 326 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
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
# 106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_52:
# 148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 149 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_55:
# 197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_58:
# 246 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 247 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_61:
# 288 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 289 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_64:
# 330 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_3
# 331 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
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
# 115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_76:
# 158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_79:
# 207 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_82:
# 255 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_85:
# 297 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	release
	end

Route110_TrickHouseEntrance_Apprentice_88:
# 340 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
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
	givemon SPECIES_SOLROCK, 15, , , , , , , , , , , , , , , , , , MOVE_HYPNOSIS, MOVE_HEAL_BLOCK, MOVE_ROCK_TOMB, MOVE_PHOTON_GEYSER
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
	givemon SPECIES_LUNATONE, 15, , , , , , , , , , , , , , , , , , MOVE_HYPNOSIS, MOVE_EMBARGO, MOVE_ANCIENT_POWER, MOVE_PHOTON_GEYSER
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
# 121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MURKROW, 20
# 122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_10
# 124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_99

Route110_TrickHouseEntrance_Apprentice_102:
# 127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MISDREAVUS, 20
# 128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_11
# 130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_99

Route110_TrickHouseEntrance_Apprentice_105:
# 164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_JYNX, 30
# 165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_14
# 167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_106:
# 170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_ELECTIVIRE, 30
# 171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_15
# 173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_107:
# 176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_MAGMORTAR, 30
# 177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_16
# 179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_103

Route110_TrickHouseEntrance_Apprentice_110:
# 213 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONLEE, 20
# 214 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_18
# 216 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 217 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_111:
# 219 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONCHAN, 20
# 220 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 221 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_19
# 222 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 223 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_112:
# 225 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_HITMONTOP, 30
# 226 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_20
# 228 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 229 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_108

Route110_TrickHouseEntrance_Apprentice_115:
# 261 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_RELICANTH, 40
# 262 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_22
# 264 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 265 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_113

Route110_TrickHouseEntrance_Apprentice_116:
# 267 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_AERODACTYL, 40
# 268 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_23
# 270 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 271 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_113

Route110_TrickHouseEntrance_Apprentice_119:
# 303 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_TOGETIC, 25
# 304 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 305 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_25
# 306 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 307 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_117

Route110_TrickHouseEntrance_Apprentice_120:
# 309 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_CLEFAIRY, 25
# 310 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_26
# 312 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 313 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_117

Route110_TrickHouseEntrance_Apprentice_123:
# 346 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_PINSIR, 50
# 347 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 348 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_28
# 349 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 350 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_124:
# 352 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_KLEAVOR, 50
# 353 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_29
# 355 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 356 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_125:
# 358 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givemon SPECIES_SCIZOR, 50
# 359 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Apprentice_Text_30
# 361 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmessage
# 362 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
	goto Route110_TrickHouseEntrance_Apprentice_121

Route110_TrickHouseEntrance_Apprentice_127:
# 135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_126

Route110_TrickHouseEntrance_Apprentice_130:
# 184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_129

Route110_TrickHouseEntrance_Apprentice_133:
# 233 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_132

Route110_TrickHouseEntrance_Apprentice_136:
# 275 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_135

Route110_TrickHouseEntrance_Apprentice_139:
# 317 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_138

Route110_TrickHouseEntrance_Apprentice_142:
# 366 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Route110_TrickHouseEntrance_Apprentice_141


# 376 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 377 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
.set LOCALID_TRICK_MASTER, 1
# 378 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 379 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_MapScripts::
# 380 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEntrance_OnTransition
# 381 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEntrance_OnFrame
# 382 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEntrance_OnWarp
# 383 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.byte 0
# 384 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 385 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ State descriptions for VAR_TRICK_HOUSE_ENTRANCE_STATE
# 386 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 0: Trick Master is hiding
# 387 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 1: Trick Master has left at start of challenge
# 388 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 2: Trick Master ready to give normal reward from previous challenge (if bag was full)
# 389 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 3: Trick Master still making next puzzle
# 390 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 4: Finished final puzzle
# 391 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 5: Completed previous challenge
# 392 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	@ 6: 'Trick Master' mechadoll ready to give Tent reward from final challenge (if bag was full)
# 393 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 394 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnTransition:
# 395 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setflag FLAG_LANDMARK_TRICK_HOUSE
# 396 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 1, Route110_TrickHouseEntrance_EventScript_EnterFromCorridor
# 397 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PRIZE_PICKUP, 1, Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward
# 398 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor
# 399 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 400 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 401 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle
# 402 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 403 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger
# 404 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1
# 405 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2
# 406 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3
# 407 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 408 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 409 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetReadyToGiveReward::
# 410 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 411 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward
# 412 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 2
# 413 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 414 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 415 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyToGiveTentReward::
# 416 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 6
# 417 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 418 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 419 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterFromCorridor::
# 420 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTER_FROM_CORRIDOR, 0
# 421 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 422 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 423 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 424 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 425 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForNextPuzzle::
# 426 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 427 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2
# 428 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3
# 429 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4
# 430 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5
# 431 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6
# 432 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7
# 433 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8
# 434 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_FinishedPuzzles
# 435 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 436 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 437 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle2::
# 438 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_HEAT_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 439 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 440 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 441 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle3::
# 442 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_KNUCKLE_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 443 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 444 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 445 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle4::
# 446 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_BALANCE_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 447 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 448 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 449 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle5::
# 450 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_RAIN_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 451 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 452 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 453 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle6::
# 454 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_FEATHER_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 455 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 456 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 457 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle7::
# 458 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_MIND_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 459 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 460 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 461 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckReadyForPuzzle8::
# 462 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_unset FLAG_DYNAMO_BADGE_TRICK_HOUSE_OPEN, Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle
# 463 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 464 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 465 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FinishedPuzzles::
# 466 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 4
# 467 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 468 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 469 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_NotReadyForPuzzle::
# 470 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 471 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 472 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 473 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MoveTrickMasterToDoor::
# 474 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxyperm LOCALID_TRICK_MASTER, 5, 2
# 475 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 476 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 477 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReadyBeingWatchedTrigger::
# 478 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 479 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 480 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 481 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched1::
# 482 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 483 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 484 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 485 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched2::
# 486 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 487 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 488 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 489 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetNotBeingWatched3::
# 490 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 491 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 492 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 493 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnWarp:
# 494 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_TrickMasterFound
# 495 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 0, Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot
# 496 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 1, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 497 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 2, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 498 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 3, Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor
# 499 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 4, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 500 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 5, Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster
# 501 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_ENTRANCE_STATE, 6, Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor
# 502 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 503 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 504 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterFound::
# 505 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 506 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 507 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 508 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 509 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 510 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 511 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterHidingSpot::
# 512 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 513 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	hideobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
# 514 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 515 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1
# 516 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2
# 517 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3
# 518 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4
# 519 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5
# 520 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6
# 521 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7
# 522 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8
# 523 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 524 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 525 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle1::
# 526 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 6, 3
# 527 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 528 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 529 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle2::
# 530 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 5
# 531 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 532 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 533 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle3::
# 534 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 9, 1
# 535 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 536 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 537 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle4::
# 538 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 3, 1
# 539 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 540 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 541 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle5::
# 542 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 0, 5
# 543 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 544 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 545 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle6::
# 546 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 11, 1
# 547 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 548 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 549 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle7::
# 550 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 8, 1
# 551 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 552 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 553 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetHidingSpotPuzzle8::
# 554 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 4, 4
# 555 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 556 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 557 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_RemoveTrickMaster::
# 558 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 559 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 560 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 561 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterFacingDoor::
# 562 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 563 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 564 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_NORTH
# 565 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 566 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 567 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_SetTrickMasterInFrontOfDoor::
# 568 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 569 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setobjectxy LOCALID_TRICK_MASTER, 5, 2
# 570 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_SOUTH
# 571 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 572 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 573 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_OnFrame:
# 574 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	map_script_2 VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1, Route110_TrickHouseEntrance_EventScript_BeginChallenge
# 575 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.2byte 0
# 576 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 577 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_BeginChallenge::
# 578 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 579 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 580 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_MeetTrickMaster
# 581 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse, MSGBOX_DEFAULT
# 582 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 583 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 584 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 585 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 586 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 587 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 588 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 589 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 590 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 1
# 591 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 0
# 592 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 593 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 594 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 595 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_UnusedRelease::
# 596 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 597 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 598 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 599 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMaster::
# 600 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 601 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 602 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_FoundTrickMaster
# 603 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_GiveReward
# 604 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle
# 605 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_MechadollReward
# 606 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 607 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 608 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundTrickMaster::
# 609 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 610 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 611 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 612 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 613 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 614 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk
# 615 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_FoundBehindTree
# 616 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_FoundInDresser
# 617 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow
# 618 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_FoundInPlanter
# 619 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_FoundInCupboard
# 620 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_FoundBehindWindow
# 621 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion
# 622 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 623 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_FOUND_TRICK_MASTER, 1
# 624 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warpsilent MAP_ROUTE110_TRICK_HOUSE_ENTRANCE, 6, 2
# 625 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 626 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 627 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 628 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 629 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathDesk::
# 630 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk, MSGBOX_DEFAULT
# 631 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 632 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 633 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindTree::
# 634 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindTree, MSGBOX_DEFAULT
# 635 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 636 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 637 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInDresser::
# 638 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInDresser, MSGBOX_DEFAULT
# 639 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 640 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 641 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeyondWindow::
# 642 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConealedBeyondWindow, MSGBOX_DEFAULT
# 643 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 644 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 645 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInPlanter::
# 646 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInPlanter, MSGBOX_DEFAULT
# 647 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 648 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 649 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundInCupboard::
# 650 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedInCupboard, MSGBOX_DEFAULT
# 651 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 652 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 653 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBehindWindow::
# 654 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBehindWindow, MSGBOX_DEFAULT
# 655 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 656 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 657 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_FoundBeneathCushion::
# 658 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion, MSGBOX_DEFAULT
# 659 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 660 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 661 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterSpin:
# 662 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 663 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 664 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_left
# 665 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 666 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_down
# 667 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 668 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_right
# 669 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay_4
# 670 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 671 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 672 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouse_Movement_TrickMasterJumpAway:
# 673 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	face_up
# 674 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	disable_anim
# 675 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 676 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 677 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 678 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 679 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 680 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	slide_up
# 681 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 682 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 683 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MeetTrickMaster::
# 684 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster, MSGBOX_DEFAULT
# 685 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 686 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 687 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_StillMakingPuzzle::
# 688 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick, MSGBOX_DEFAULT
# 689 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 690 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 691 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 692 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 693 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_ExclamationMark
# 694 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 695 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_Delay48
# 696 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 697 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges, MSGBOX_DEFAULT
# 698 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 699 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 700 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 701 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 702 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 703 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveReward::
# 704 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 705 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 706 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward, MSGBOX_DEFAULT
# 707 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward
# 708 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward
# 709 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 3, Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward
# 710 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 4, Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward
# 711 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 5, Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward
# 712 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 6, Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward
# 713 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 7, Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward
# 714 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 715 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 716 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle1Reward::
# 717 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 718 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 719 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 720 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 721 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 722 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 723 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 724 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle2Reward::
# 725 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 726 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 727 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 728 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 729 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 730 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 731 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 732 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle3Reward::
# 733 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_HARD_STONE
# 734 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 735 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 736 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 737 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 738 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 739 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 740 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle4Reward::
# 741 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 742 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 743 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 744 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 745 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 746 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 747 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 748 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle5Reward::
# 749 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 750 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 751 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 752 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 753 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 754 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 755 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 756 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle6Reward::
# 757 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_MAGNET
# 758 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 759 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 760 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 761 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 762 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 763 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 764 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GivePuzzle7Reward::
# 765 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	giveitem ITEM_PP_MAX
# 766 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_GotReward
# 767 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 768 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward, MSGBOX_DEFAULT
# 769 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 770 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 771 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 772 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GotReward::
# 773 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 774 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 3
# 775 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFasterUp
# 776 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 777 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 778 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 779 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 780 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_MechadollReward::
# 781 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 782 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 783 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_MechadollWhichTent, MSGBOX_DEFAULT
# 784 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_ChooseTent
# 785 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_TrickHouseEntrance_EventScript_ReceivedTent
# 786 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, Common_EventScript_NoRoomForDecor
# 787 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_PCFullAgain, MSGBOX_DEFAULT
# 788 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 789 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 790 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 791 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ChooseTent::
# 792 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	multichoice 0, 0, MULTI_TENT, TRUE
# 793 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_RESULT
# 794 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_GiveRedTent
# 795 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto Route110_TrickHouseEntrance_EventScript_GiveBlueTent
# 796 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 797 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveRedTent::
# 798 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_RED_TENT
# 799 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 800 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 801 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GiveBlueTent::
# 802 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 803 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 804 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 805 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ReceivedTent::
# 806 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ThenFarewell, MSGBOX_DEFAULT
# 807 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 808 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHousePuzzle5_Movement_MechadollShake
# 809 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 810 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 811 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 812 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_M_EXPLOSION
# 813 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 814 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 815 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 816 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 817 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 5
# 818 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 819 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 820 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 821 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_Door::
# 822 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 823 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_ENTRANCE_STATE
# 824 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_ItsAScroll
# 825 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_GoInHolePrompt
# 826 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote
# 827 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage
# 828 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 829 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 830 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_ItsAScroll::
# 831 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 832 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 833 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 834 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 835 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_GoInHolePrompt::
# 836 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll, MSGBOX_YESNO
# 837 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	closemessage
# 838 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom
# 839 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 840 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 841 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 842 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom::
# 843 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 5, 1, METATILE_GenericBuilding_TrickHouse_Stairs_Down, FALSE
# 844 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 845 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 20
# 846 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 847 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 848 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEntrance_Movement_EnterRoom
# 849 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitmovement 0
# 850 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 851 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2
# 852 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1
# 853 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6
# 854 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7
# 855 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3
# 856 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4
# 857 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5
# 858 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8
# 859 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 860 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 861 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Movement_EnterRoom:
# 862 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	set_invisible
# 863 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	step_end
# 864 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 865 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom1::
# 866 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE1, 0, 21
# 867 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 868 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 869 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 870 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 871 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom2::
# 872 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE2, 0, 21
# 873 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 874 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 875 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 876 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 877 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom3::
# 878 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE3, 0, 21
# 879 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 880 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 881 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 882 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 883 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom4::
# 884 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE4, 0, 21
# 885 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 886 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 887 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 888 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 889 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom5::
# 890 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE5, 0, 21
# 891 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 892 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 893 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 894 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 895 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom6::
# 896 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE6, 0, 21
# 897 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 898 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 899 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 900 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 901 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom7::
# 902 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE7, 0, 21
# 903 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 904 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 905 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 906 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 907 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_EnterPuzzleRoom8::
# 908 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	warp MAP_ROUTE110_TRICK_HOUSE_PUZZLE8, 0, 21
# 909 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitstate
# 910 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 911 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 912 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 913 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote::
# 914 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 915 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 916 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 917 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 918 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_CheckLevelForMessage::
# 919 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_LEVEL, 8, Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2
# 920 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_ItsAScroll, MSGBOX_DEFAULT
# 921 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 922 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 923 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 924 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_LeftOnJourneyNote2::
# 925 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote, MSGBOX_DEFAULT
# 926 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 927 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 928 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 929 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_Door::
# 930 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 931 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 932 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 0, Route110_TrickHousePuzzle2_EventScript_Door
# 933 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 1, Route110_TrickHousePuzzle1_EventScript_Door
# 934 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 2, Route110_TrickHousePuzzle6_EventScript_Door
# 935 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 3, Route110_TrickHousePuzzle7_EventScript_Door
# 936 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 4, Route110_TrickHousePuzzle3_EventScript_Door
# 937 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 5, Route110_TrickHousePuzzle4_EventScript_Door
# 938 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 6, Route110_TrickHousePuzzle5_EventScript_Door
# 939 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	case 7, Route110_TrickHousePuzzle8_EventScript_Door
# 940 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 941 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 942 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle1_EventScript_Door::
# 943 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 944 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 945 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 946 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2
# 947 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 948 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 949 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 950 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 951 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 952 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle2_EventScript_Door::
# 953 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_2_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 954 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle2_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 955 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 956 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_2_STATE, 2
# 957 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 958 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 959 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 960 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 961 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 962 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle3_EventScript_Door::
# 963 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_3_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 964 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle3_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 965 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 966 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_3_STATE, 2
# 967 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 968 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 969 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 970 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 971 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 972 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle4_EventScript_Door::
# 973 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 974 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 975 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 976 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 2
# 977 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 978 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 979 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 980 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 981 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 982 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle5_EventScript_Door::
# 983 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_5_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 984 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle5_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 985 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 986 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_5_STATE, 2
# 987 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 988 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 989 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 990 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 991 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 992 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle6_EventScript_Door::
# 993 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 994 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 995 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 996 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 2
# 997 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 998 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 999 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1000 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1001 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1002 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle7_EventScript_Door::
# 1003 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_7_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1004 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle7_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1005 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1006 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_7_STATE, 2
# 1007 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1008 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1009 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1010 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1011 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1012 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle8_EventScript_Door::
# 1013 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle_EventScript_DoorLocked
# 1014 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened, MSGBOX_DEFAULT
# 1015 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playse SE_PIN
# 1016 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 2
# 1017 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
# 1018 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	special DrawWholeMapView
# 1019 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1020 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1021 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1022 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_DoorLocked::
# 1023 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere, MSGBOX_DEFAULT
# 1024 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1025 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1026 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1027 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_ReadScrollAgain::
# 1028 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt, MSGBOX_DEFAULT
# 1029 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1030 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1031 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1032 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_EventScript_FoundScroll::
# 1033 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1034 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	message Route110_TrickHousePuzzle_Text_FoundAScroll
# 1035 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfanfare
# 1036 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHousePuzzle_Text_MemorizedSecretCode, MSGBOX_DEFAULT
# 1037 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1038 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1039 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1040 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_TrickMasterHiding::
# 1041 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	lockall
# 1042 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	msgbox Route110_TrickHouseEntrance_Text_YoureBeingWatched, MSGBOX_DEFAULT
# 1043 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	releaseall
# 1044 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 0, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1
# 1045 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 1, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2
# 1046 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call_if_eq VAR_TRICK_HOUSE_LEVEL, 2, Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3
# 1047 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 1
# 1048 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	end
# 1049 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1050 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle1::
# 1051 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 6  @ x
# 1052 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 3  @ y
# 1053 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1054 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1055 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1056 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle2::
# 1057 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 11  @ x
# 1058 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 5   @ y
# 1059 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1060 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1061 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1062 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle3::
# 1063 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8004, 9  @ x
# 1064 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8005, 2  @ y
# 1065 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
# 1066 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1067 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1068 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle::
# 1069 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	setvar VAR_0x8006, 0
# 1070 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	dofieldeffectsparkle VAR_0x8004, VAR_0x8005, VAR_0x8006
# 1071 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 1072 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	delay 10
# 1073 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	return
# 1074 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1075 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureBeingWatched:
# 1076 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You're being watched…$"
# 1077 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1078 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk:
# 1079 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1080 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1081 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this desk? You're sharp!$"
# 1082 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1083 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindTree:
# 1084 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1085 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1086 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this tree? You're sharp!$"
# 1087 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1088 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInDresser:
# 1089 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1090 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1091 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this dresser? You're sharp!$"
# 1092 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1093 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConealedBeyondWindow:
# 1094 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1095 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1096 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beyond this window? You're sharp!$"
# 1097 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1098 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInPlanter:
# 1099 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1100 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1101 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this planter? You're sharp!$"
# 1102 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1103 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedInCupboard:
# 1104 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1105 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1106 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "in this cupboard? You're sharp!$"
# 1107 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1108 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBehindWindow:
# 1109 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1111 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "behind this window? You're sharp!$"
# 1112 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1113 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion:
# 1114 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? Grrr…\p"
# 1115 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "How did you know I concealed myself\n"
# 1116 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "beneath this cushion? You're sharp!$"
# 1117 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1118 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster:
# 1119 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Behold!\p"
# 1120 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For I am the greatest living mystery\n"
# 1121 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "of a man in all of Hoenn!\l"
# 1122 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "They call me…\p"
# 1123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The Trick Master!\n"
# 1124 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Wahahaha! Glad to meet you!$"
# 1125 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1126 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse:
# 1127 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You, you've come to challenge\n"
# 1128 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "my Trick house, haven't you?\p"
# 1129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "That's why you're here, isn't it?\n"
# 1130 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, it is!\p"
# 1131 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Consider your challenge accepted!\p"
# 1132 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Enter through the scroll there,\n"
# 1133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and let your challenge commence!\p"
# 1134 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I shall be waiting in the back!$"
# 1135 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1136 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ItsAScroll:
# 1137 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's a scroll.$"
# 1138 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1139 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll:
# 1140 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a big hole behind the scroll!\p"
# 1141 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Want to go in?$"
# 1142 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1143 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote:
# 1144 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "There is a note affixed to the scroll…\p"
# 1145 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "“I am leaving on a journey.\n"
# 1146 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Don't look for me. Trick Master”$"
# 1147 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1148 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick:
# 1149 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "For the next time, I'll use this trick,\n"
# 1150 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "and that scheme, and those ruses…\p"
# 1151 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Mufufufu… If I may say so, it's\n"
# 1152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "brilliantly difficult, even for me!$"
# 1153 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1154 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges:
# 1155 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah? What?!\n"
# 1156 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Oh, it's you!\p"
# 1157 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'm in the midst of devising new tricky\n"
# 1158 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "challenges!\p"
# 1159 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "It's not too much to ask for a bit more\n"
# 1160 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "time for me to think, is it now?\l"
# 1161 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "You wouldn't begrudge me that?\l"
# 1162 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Come back in a little while!$"
# 1163 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1164 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward:
# 1165 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Ah, it's you! You're here to accept the\n"
# 1166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "reward from before, isn't that right?\l"
# 1167 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Yes, right I am!\p"
# 1168 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Here!\n"
# 1169 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "I'll give it to you now!$"
# 1170 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1171 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward:
# 1172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Hah?\n"
# 1173 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Did you not come to claim your reward?$"
# 1174 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1175 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_MechadollWhichTent:
# 1176 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MECHADOLL 5 I AM!\n"
# 1177 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "IF REWARD IS NOT TAKEN BY YOU,\l"
# 1178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN Trick Master YOU CANNOT FOLLOW.\p"
# 1179 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "RED TENT OR BLUE TENT,\n"
# 1180 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "WHICH DO YOU PREFER?$"
# 1181 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1182 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_ThenFarewell:
# 1183 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "THEN FAREWELL.$"
# 1184 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1185 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_PCFullAgain:
# 1186 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "YOUR PC STATUS: FULL AGAIN.\n"
# 1187 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "MEAN, YOU ARE.$"
# 1188 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1189 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_FoundAScroll:
# 1190 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} found a scroll.$"
# 1191 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1192 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_MemorizedSecretCode:
# 1193 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} memorized the secret code\n"
# 1194 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "written on the scroll.$"
# 1195 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1196 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt:
# 1197 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "A secret code is written on it.$"
# 1198 "data/maps/Route110_TrickHouseEntrance/scripts.pory"

# 1199 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere:
# 1200 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The door is locked.\p"
# 1201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "…On closer inspection, this is written\n"
# 1202 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
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
# 110 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The third reward is either a Murkrow\n"
	.string "with Oblivion Wing, or a Misdreavus\l"
	.string "with Moongeist Beam.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_10:
# 123 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Murkrow!$"

Route110_TrickHouseEntrance_Apprentice_Text_11:
# 129 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Misdreavus!$"

Route110_TrickHouseEntrance_Apprentice_Text_12:
# 133 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "Give this Pokémon a nickname?$"

Route110_TrickHouseEntrance_Apprentice_Text_13:
# 152 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The fourth reward is either a Jynx\n"
	.string "with Psycho Boost, an Electivire with\p"
	.string "Volt Tackle, or a Magmortar with\n"
	.string "Armor Cannon.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_14:
# 166 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Jynx!$"

Route110_TrickHouseEntrance_Apprentice_Text_15:
# 172 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Electivire!$"

Route110_TrickHouseEntrance_Apprentice_Text_16:
# 178 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Magmortar!$"

Route110_TrickHouseEntrance_Apprentice_Text_17:
# 201 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The fifth reward is either a Hitmonlee\n"
	.string "with Thunderous Kick, a Hitmonchan\p"
	.string "with Wicked Blow, or a Hitmontop with\n"
	.string "Surging Strikes.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_18:
# 215 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmonlee!$"

Route110_TrickHouseEntrance_Apprentice_Text_19:
# 221 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmonchan!$"

Route110_TrickHouseEntrance_Apprentice_Text_20:
# 227 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Hitmontop!$"

Route110_TrickHouseEntrance_Apprentice_Text_21:
# 250 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The sixth reward is either a Relicanth\n"
	.string "with Wave Crash, or an Aerodactyl\l"
	.string "with Brave Bird.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_22:
# 263 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Relicanth!$"

Route110_TrickHouseEntrance_Apprentice_Text_23:
# 269 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Aerodactyl!$"

Route110_TrickHouseEntrance_Apprentice_Text_24:
# 292 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The seventh reward is either a Togetic\n"
	.string "with Aeroblast, or a Clefairy with\l"
	.string "Light of Ruin.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_25:
# 305 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Togetic!$"

Route110_TrickHouseEntrance_Apprentice_Text_26:
# 311 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Clefairy!$"

Route110_TrickHouseEntrance_Apprentice_Text_27:
# 334 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "The final reward is either a Pinsir\n"
	.string "with Extreme Speed, a Kleavor with\p"
	.string "Mighty Cleave, or a Scizor with\n"
	.string "Gear Grind.\p"
	.string "Do you want this reward?$"

Route110_TrickHouseEntrance_Apprentice_Text_28:
# 348 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Pinsir!$"

Route110_TrickHouseEntrance_Apprentice_Text_29:
# 354 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Kleavor!$"

Route110_TrickHouseEntrance_Apprentice_Text_30:
# 360 "data/maps/Route110_TrickHouseEntrance/scripts.pory"
	.string "{PLAYER} recieved Scizor!$"
