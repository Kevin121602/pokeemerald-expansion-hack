SpiralCity_HelixMuseum_MapScripts::
	.byte 0


SpiralCity_HelixMuseum_EventScript_FossilGuy::
# 4 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 5 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 6 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	compare VAR_SPIRAL_CITY_STATE, 1
	goto_if_le SpiralCity_HelixMuseum_EventScript_FossilGuy_2
SpiralCity_HelixMuseum_EventScript_FossilGuy_1:
# 10 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_unset FLAG_RECIEVED_COMMON_FOSSIL, SpiralCity_HelixMuseum_EventScript_FossilGuy_5
SpiralCity_HelixMuseum_EventScript_FossilGuy_4:
# 82 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RECIEVED_COMMON_FOSSIL, SpiralCity_HelixMuseum_EventScript_FossilGuy_8
SpiralCity_HelixMuseum_EventScript_FossilGuy_7:
# 85 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	releaseall
	end

SpiralCity_HelixMuseum_EventScript_FossilGuy_2:
# 7 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox ThanksForRecovering
# 8 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 2
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_1

SpiralCity_HelixMuseum_EventScript_FossilGuy_5:
# 11 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_0, MSGBOX_YESNO
# 12 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SpiralCity_HelixMuseum_EventScript_FossilGuy_11
SpiralCity_HelixMuseum_EventScript_FossilGuy_10:
# 15 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SpiralCity_HelixMuseum_EventScript_FossilGuy_13
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_4

SpiralCity_HelixMuseum_EventScript_FossilGuy_8:
# 83 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_11
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_7

SpiralCity_HelixMuseum_EventScript_FossilGuy_11:
# 13 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox ThatsAShame
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_10

SpiralCity_HelixMuseum_EventScript_FossilGuy_13:
# 16 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	random 10
# 17 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 0, SpiralCity_HelixMuseum_EventScript_FossilGuy_17
# 24 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 1, SpiralCity_HelixMuseum_EventScript_FossilGuy_18
# 30 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 2, SpiralCity_HelixMuseum_EventScript_FossilGuy_19
# 36 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 3, SpiralCity_HelixMuseum_EventScript_FossilGuy_20
# 42 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 4, SpiralCity_HelixMuseum_EventScript_FossilGuy_21
# 48 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 5, SpiralCity_HelixMuseum_EventScript_FossilGuy_22
# 54 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 6, SpiralCity_HelixMuseum_EventScript_FossilGuy_23
# 60 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 7, SpiralCity_HelixMuseum_EventScript_FossilGuy_24
# 66 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 8, SpiralCity_HelixMuseum_EventScript_FossilGuy_25
# 72 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	case 9, SpiralCity_HelixMuseum_EventScript_FossilGuy_26
SpiralCity_HelixMuseum_EventScript_FossilGuy_15:
# 79 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	setflag FLAG_RECIEVED_COMMON_FOSSIL
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_4

SpiralCity_HelixMuseum_EventScript_FossilGuy_17:
# 18 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_OMANYTE, 5
# 19 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 20 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_1
# 21 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 22 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 23 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_18:
# 24 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_KABUTO, 5
# 25 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 26 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_2
# 27 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 28 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 29 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_19:
# 30 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_LILEEP, 5
# 31 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 32 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_3
# 33 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 34 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 35 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_20:
# 36 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_ANORITH, 5
# 37 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 38 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_4
# 39 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 40 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 41 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_21:
# 42 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_CRANIDOS, 5
# 43 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 44 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_5
# 45 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 46 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 47 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_22:
# 48 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_SHIELDON, 5
# 49 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 50 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_6
# 51 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 52 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 53 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_23:
# 54 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_TIRTOUGA, 5
# 55 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 56 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_7
# 57 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 58 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 59 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_24:
# 60 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_ARCHEN, 5
# 61 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 62 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_8
# 63 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 64 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 65 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_25:
# 66 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_TYRUNT, 5
# 67 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 68 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_9
# 69 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 70 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 71 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15

SpiralCity_HelixMuseum_EventScript_FossilGuy_26:
# 72 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	givemon SPECIES_AMAURA, 5
# 73 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 74 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_10
# 75 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitmessage
# 76 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	waitfanfare
# 77 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call NicknamePartyMon
	goto SpiralCity_HelixMuseum_EventScript_FossilGuy_15


SpiralCity_HelixMuseum_EventScript_RareFossilGuy::
# 100 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 101 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 102 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox SpiralCity_HelixMuseum_EventScript_RareFossilGuy_Text_0
# 103 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	releaseall
	end


# 107 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 108 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 109 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 110 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts::
# 111 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 112 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.byte 0
# 113 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 114 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition:
# 115 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 116 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 117 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 118 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 119 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
# 120 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 121 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	return
# 122 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 123 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 124 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 125 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 126 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 127 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 128 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 129 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 130 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 131 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 132 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 133 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 134 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 135 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 136 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 137 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 138 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 139 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 140 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 141 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 142 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 143 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 144 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 145 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 146 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 147 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 148 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 149 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 150 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 151 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 152 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 153 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 154 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 155 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 156 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 157 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 158 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 159 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 160 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 161 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 162 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 163 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 164 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 165 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 166 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 167 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 168 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 169 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 170 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 171 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 172 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 173 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 174 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 175 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 176 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 177 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 178 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 179 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 180 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 181 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 182 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 183 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 184 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 185 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 186 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 187 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 188 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 189 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 190 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 191 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Hello and welcome to the DEVON\n"
# 192 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "CORPORATION.\p"
# 193 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "We're proud producers of items and\n"
# 194 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "medicine that enhance your life.$"
# 195 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 196 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 197 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "One of our research staff stupidly\n"
# 198 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "got robbed of an important parcel.$"
# 199 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 200 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 201 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Hey, those RUNNING SHOES!\n"
# 202 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "They're one of our products!\p"
# 203 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 204 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "using something we made.$"
# 205 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 206 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 207 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "That stolen parcel…\p"
# 208 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 209 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "anything that anyone can use.\p"
# 210 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 211 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "have been very bright.$"
# 212 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 213 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 214 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "It sounds like they've recovered\n"
# 215 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "the ripped-off DEVON GOODS.$"
# 216 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 217 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 218 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 219 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "are allowed to enter here.$"
# 220 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 221 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 222 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "It's beyond stupid.\n"
# 223 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "How could we get robbed?$"
# 224 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 225 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 226 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Hi, there!\n"
# 227 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "You're always welcome here!$"
# 228 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 229 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 230 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 231 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "displayed in the glass case.\p"
# 232 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "There's a panel with some writing\n"
# 233 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "on it…\p"
# 234 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“DEVON CORPORATION got its start as\n"
# 235 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 236 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“The company also produced iron from\n"
# 237 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "filings in the sand.\p"
# 238 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“From that humble start as a producer\n"
# 239 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "of raw materials, DEVON developed.\p"
# 240 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“DEVON is now a manufacturer of a wide\n"
# 241 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "range of industrial products.”$"
# 242 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 243 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 244 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Prototypes and test products fill\n"
# 245 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "the glass display case.\p"
# 246 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "There's a panel with a description…\p"
# 247 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“In addition to industrial products,\n"
# 248 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "DEVON now markets sundries and\l"
# 249 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 250 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“Recently, DEVON has begun marketing\n"
# 251 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "tools for POKéMON TRAINERS, including\l"
# 252 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "POKé BALLS and POKéNAV systems.”$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_0:
# 11 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "We just revived a fossil Pokémon, would\n"
	.string "you like to have it?$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_1:
# 20 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Omantye!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_2:
# 26 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Kabuto!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_3:
# 32 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Lileep!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_4:
# 38 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Anorith!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_5:
# 44 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Cranidos!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_6:
# 50 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Shieldon!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_7:
# 56 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Tirtouga!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_8:
# 62 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Archen!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_9:
# 68 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Tyrunt!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_10:
# 74 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "{PLAYER} recieved Amaura!$"

SpiralCity_HelixMuseum_EventScript_FossilGuy_Text_11:
# 83 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "I hope you find that fossil Pokémon\n"
	.string "useful, {PLAYER}!$"

SpiralCity_HelixMuseum_EventScript_RareFossilGuy_Text_0:
# 102 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "I'm researching rare fossils.$"

ThanksForRecovering::
# 89 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Thanks again for recovering our notes,\n"
	.string "they contain important research on how\l"
	.string "to reverse speed stats.\p"
	.string "I wonder what that Galactic Grunt was\n"
	.string "gonna use them for…$"

ThatsAShame::
# 94 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Oh, that's a shame…\p"
	.string "Let me know if you change your mind.$"
