# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts::
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp:
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther::
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame:
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHMSurf::
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	giveitem ITEM_HM_SURF
# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 5
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad::
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHMSurf::
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad::
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally::
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom::
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHMSurf::
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally:
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's already left, our Wally.\p"
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder where he could have\n"
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gotten by now?$"
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing:
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our Wally is doing?$"
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "{PLAYER}{KUN}! Please excuse us for\n"
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "dragging you here this way.\p"
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY's become very healthy\n"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he went to VERDANTURF TOWN.\p"
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We owe it all to you!\p"
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "When WALLY left town, you helped\n"
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "him catch a Pokémon, right?\p"
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I think that made WALLY really\n"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "happy.\p"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Actually, not just WALLY.\n"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It made me, his father, happy too.\p"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Happy that he's gained such a great\n"
# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "friend as you.\p"
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "This isn't a bribe or anything, but\n"
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'd really like you to have this.$"
# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "If your Pokémon can SURF, you'll be\n"
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "able to go to all sorts of places.$"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon:
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY's coming home soon.\n"
# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm looking forward to that.$"
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity:
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met WALLY in\n"
# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "EVER GRANDE CITY?\p"
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He may have gotten healthy, but he\n"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "can't go somewhere far away like\l"
# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "that all by himself.$"
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy:
# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "WALLY was really happy when he told\n"
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "us that he caught a Pokémon.\p"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It's been ages since I've seen him\n"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "smile like that.$"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling:
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our WALLY left VERDANTURF TOWN\n"
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, WALLY is frail, but\n"
# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"
