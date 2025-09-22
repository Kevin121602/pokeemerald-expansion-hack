Mart_BottleCap_Vendor::
# 2 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 4 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_1, Mart_BottleCap_Vendor_2
Mart_BottleCap_Vendor_1:
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Mart_BottleCap_Vendor_5
Mart_BottleCap_Vendor_4:
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Mart_BottleCap_Vendor_8
Mart_BottleCap_Vendor_7:
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Mart_BottleCap_Vendor_13
Mart_BottleCap_Vendor_12:
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Mart_BottleCap_Vendor_18
Mart_BottleCap_Vendor_17:
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Mart_BottleCap_Vendor_23
Mart_BottleCap_Vendor_22:
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Mart_BottleCap_Vendor_28
Mart_BottleCap_Vendor_27:
# 54 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Mart_BottleCap_Vendor_33
Mart_BottleCap_Vendor_32:
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mart_BottleCap_Vendor_38
Mart_BottleCap_Vendor_37:
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_9
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	release
	end

Mart_BottleCap_Vendor_2:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_0
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_1
	goto Mart_BottleCap_Vendor_1

Mart_BottleCap_Vendor_5:
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_2, Mart_BottleCap_Vendor_10
	goto Mart_BottleCap_Vendor_4

Mart_BottleCap_Vendor_8:
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_3, Mart_BottleCap_Vendor_15
	goto Mart_BottleCap_Vendor_7

Mart_BottleCap_Vendor_10:
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_1
# 15 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 16 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_2
	goto Mart_BottleCap_Vendor_4

Mart_BottleCap_Vendor_13:
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_4, Mart_BottleCap_Vendor_20
	goto Mart_BottleCap_Vendor_12

Mart_BottleCap_Vendor_15:
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_2
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_3
	goto Mart_BottleCap_Vendor_7

Mart_BottleCap_Vendor_18:
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_5, Mart_BottleCap_Vendor_25
	goto Mart_BottleCap_Vendor_17

Mart_BottleCap_Vendor_20:
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_3
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 30 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_4
	goto Mart_BottleCap_Vendor_12

Mart_BottleCap_Vendor_23:
# 41 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_6, Mart_BottleCap_Vendor_30
	goto Mart_BottleCap_Vendor_22

Mart_BottleCap_Vendor_25:
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_4
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_5
	goto Mart_BottleCap_Vendor_17

Mart_BottleCap_Vendor_28:
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_7, Mart_BottleCap_Vendor_35
	goto Mart_BottleCap_Vendor_27

Mart_BottleCap_Vendor_30:
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_5
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_6
	goto Mart_BottleCap_Vendor_22

Mart_BottleCap_Vendor_33:
# 55 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_8, Mart_BottleCap_Vendor_40
	goto Mart_BottleCap_Vendor_32

Mart_BottleCap_Vendor_35:
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_6
# 50 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 51 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_7
	goto Mart_BottleCap_Vendor_27

Mart_BottleCap_Vendor_38:
# 62 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_unset FLAG_RECIEVED_BOTTLE_CAP_9, Mart_BottleCap_Vendor_42
	goto Mart_BottleCap_Vendor_37

Mart_BottleCap_Vendor_40:
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_7
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 58 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_8
	goto Mart_BottleCap_Vendor_32

Mart_BottleCap_Vendor_42:
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox Mart_BottleCap_Vendor_Text_8
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
	giveitem ITEM_BOTTLE_CAP
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	setflag FLAG_RECIEVED_BOTTLE_CAP_9
	goto Mart_BottleCap_Vendor_37


# 74 "data/maps/OldaleTown_Mart/scripts.pory"

# 75 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts::
# 76 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 77 "data/maps/OldaleTown_Mart/scripts.pory"

# 78 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk::
# 79 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 80 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 81 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 82 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 83 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 84 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 85 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 86 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 87 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 88 "data/maps/OldaleTown_Mart/scripts.pory"

# 89 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 90 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic:
# 91 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 92 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 93 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 94 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 95 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 96 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 97 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 98 "data/maps/OldaleTown_Mart/scripts.pory"

# 99 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems::
# 100 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Expanded
# 101 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 102 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 103 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 104 "data/maps/OldaleTown_Mart/scripts.pory"

# 105 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 106 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded:
# 107 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 108 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 109 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 110 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 111 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 112 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 113 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 114 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 115 "data/maps/OldaleTown_Mart/scripts.pory"

# 116 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman::
# 117 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 118 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 119 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 120 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 121 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 122 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 123 "data/maps/OldaleTown_Mart/scripts.pory"

# 124 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock::
# 125 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 126 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 127 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 128 "data/maps/OldaleTown_Mart/scripts.pory"

# 129 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy::
# 130 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 131 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 132 "data/maps/OldaleTown_Mart/scripts.pory"

# 133 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut:
# 134 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 135 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any Poké Balls.$"
# 136 "data/maps/OldaleTown_Mart/scripts.pory"

# 137 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls:
# 138 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of Poké Balls\n"
# 139 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of Pokémon!$"
# 140 "data/maps/OldaleTown_Mart/scripts.pory"

# 141 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion:
# 142 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a Pokémon gets hurt and loses its HP\n"
# 143 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 144 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your Pokémon from fainting,\n"
# 145 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a Potion.$"

Mart_BottleCap_Vendor_Text_0:
# 5 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "You look like a new face.\p"
	.string "We're giving away Bottle Caps as part of\n"
	.string "a promotional event.\p"
	.string "Here you go, on the house!$"

Mart_BottleCap_Vendor_Text_1:
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Stone Badge?$"

Mart_BottleCap_Vendor_Text_2:
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Heat Badge?$"

Mart_BottleCap_Vendor_Text_3:
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Knuckle Badge?$"

Mart_BottleCap_Vendor_Text_4:
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Balance Badge?$"

Mart_BottleCap_Vendor_Text_5:
# 42 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Rain Badge?$"

Mart_BottleCap_Vendor_Text_6:
# 49 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Feather Badge?$"

Mart_BottleCap_Vendor_Text_7:
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Mind Badge?$"

Mart_BottleCap_Vendor_Text_8:
# 63 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Oh is that the Dynamo Badge?$"

Mart_BottleCap_Vendor_Text_9:
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "Bottle Caps can be spent on a variety\n"
	.string "of rare items, use them wisely.$"
