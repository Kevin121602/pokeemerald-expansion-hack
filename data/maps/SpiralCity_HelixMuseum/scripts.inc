# 1 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 2 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 3 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 4 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
SpiralCity_HelixMuseum_MapScripts::
# 5 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 6 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.byte 0
# 7 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 8 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition:
# 9 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 10 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 11 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 12 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
# 13 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GUARD, 14, 2
# 14 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	setobjectmovementtype LOCALID_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	return
# 16 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 17 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee::
# 18 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 19 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 20 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 21 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 22 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 23 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 24 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 25 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 26 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
# 27 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 28 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 29 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 30 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 31 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
# 32 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 33 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 34 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 35 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 36 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard::
# 37 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 38 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 39 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 40 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 41 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 42 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 43 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 44 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 45 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 46 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
# 47 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 48 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 49 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 50 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 51 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
# 52 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 53 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 54 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 55 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 56 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter::
# 57 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	lock
# 58 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	faceplayer
# 59 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 60 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 61 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 62 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 63 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 64 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 65 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 66 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
# 67 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 68 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 69 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 70 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 71 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
# 72 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 73 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	release
# 74 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 75 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 76 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
# 77 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 78 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 79 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 80 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
# 81 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 82 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	end
# 83 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 84 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
# 85 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Hello and welcome to the DEVON\n"
# 86 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "CORPORATION.\p"
# 87 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "We're proud producers of items and\n"
# 88 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "medicine that enhance your life.$"
# 89 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 90 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
# 91 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "One of our research staff stupidly\n"
# 92 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "got robbed of an important parcel.$"
# 93 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 94 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
# 95 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Hey, those RUNNING SHOES!\n"
# 96 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "They're one of our products!\p"
# 97 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 98 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "using something we made.$"
# 99 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 100 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
# 101 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "That stolen parcel…\p"
# 102 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 103 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "anything that anyone can use.\p"
# 104 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 105 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "have been very bright.$"
# 106 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 107 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
# 108 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "It sounds like they've recovered\n"
# 109 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "the ripped-off DEVON GOODS.$"
# 110 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 111 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
# 112 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 113 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "are allowed to enter here.$"
# 114 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 115 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
# 116 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "It's beyond stupid.\n"
# 117 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "How could we get robbed?$"
# 118 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 119 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
# 120 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Hi, there!\n"
# 121 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "You're always welcome here!$"
# 122 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 123 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
# 124 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 125 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "displayed in the glass case.\p"
# 126 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "There's a panel with some writing\n"
# 127 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "on it…\p"
# 128 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“DEVON CORPORATION got its start as\n"
# 129 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 130 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“The company also produced iron from\n"
# 131 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "filings in the sand.\p"
# 132 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“From that humble start as a producer\n"
# 133 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "of raw materials, DEVON developed.\p"
# 134 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“DEVON is now a manufacturer of a wide\n"
# 135 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "range of industrial products.”$"
# 136 "data/maps/SpiralCity_HelixMuseum/scripts.pory"

# 137 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay:
# 138 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "Prototypes and test products fill\n"
# 139 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "the glass display case.\p"
# 140 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "There's a panel with a description…\p"
# 141 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“In addition to industrial products,\n"
# 142 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "DEVON now markets sundries and\l"
# 143 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 144 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "“Recently, DEVON has begun marketing\n"
# 145 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "tools for POKéMON TRAINERS, including\l"
# 146 "data/maps/SpiralCity_HelixMuseum/scripts.pory"
	.string "POKé BALLS and POKéNAV systems.”$"
