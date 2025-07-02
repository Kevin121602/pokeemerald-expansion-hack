FallarborTown_EventScript_KingsRockMart::
# 2 "data/maps/FallarborTown/scripts.pory"
	lock
# 3 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 4 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_KingsRockMart_Text_0
# 7 "data/maps/FallarborTown/scripts.pory"
	waitmessage
# 8 "data/maps/FallarborTown/scripts.pory"
	pokemart KingsRockMart
# 9 "data/maps/FallarborTown/scripts.pory"
	release
	end


	.align 2
# 13 "data/maps/FallarborTown/scripts.pory"
KingsRockMart:
# 14 "data/maps/FallarborTown/scripts.pory"
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_NONE

# 17 "data/maps/FallarborTown/scripts.pory"

# 18 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 19 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 20 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 21 "data/maps/FallarborTown/scripts.pory"

# 22 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 23 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 24 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 25 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 26 "data/maps/FallarborTown/scripts.pory"
	end
# 27 "data/maps/FallarborTown/scripts.pory"

# 28 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 29 "data/maps/FallarborTown/scripts.pory"
	lock
# 30 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 31 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 32 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 33 "data/maps/FallarborTown/scripts.pory"
	release
# 34 "data/maps/FallarborTown/scripts.pory"
	end
# 35 "data/maps/FallarborTown/scripts.pory"

# 36 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 37 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 38 "data/maps/FallarborTown/scripts.pory"
	release
# 39 "data/maps/FallarborTown/scripts.pory"
	end
# 40 "data/maps/FallarborTown/scripts.pory"

# 41 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 42 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 43 "data/maps/FallarborTown/scripts.pory"
	end
# 44 "data/maps/FallarborTown/scripts.pory"

# 45 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 46 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 47 "data/maps/FallarborTown/scripts.pory"
	end
# 48 "data/maps/FallarborTown/scripts.pory"

# 49 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 50 "data/maps/FallarborTown/scripts.pory"
	lock
# 51 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 52 "data/maps/FallarborTown/scripts.pory"
	waitse
# 53 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 54 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 55 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 56 "data/maps/FallarborTown/scripts.pory"
	release
# 57 "data/maps/FallarborTown/scripts.pory"
	end
# 58 "data/maps/FallarborTown/scripts.pory"

# 59 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 60 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 61 "data/maps/FallarborTown/scripts.pory"
	end
# 62 "data/maps/FallarborTown/scripts.pory"

# 63 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 64 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 65 "data/maps/FallarborTown/scripts.pory"
	end
# 66 "data/maps/FallarborTown/scripts.pory"

# 67 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 68 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 69 "data/maps/FallarborTown/scripts.pory"
	end
# 70 "data/maps/FallarborTown/scripts.pory"

# 71 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 72 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 73 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 74 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 75 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 76 "data/maps/FallarborTown/scripts.pory"

# 77 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 82 "data/maps/FallarborTown/scripts.pory"

# 83 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 84 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 85 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 86 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 87 "data/maps/FallarborTown/scripts.pory"

# 88 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 89 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 90 "data/maps/FallarborTown/scripts.pory"

# 91 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 94 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 95 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 97 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 98 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 99 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 100 "data/maps/FallarborTown/scripts.pory"

# 101 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 102 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 103 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 104 "data/maps/FallarborTown/scripts.pory"

# 105 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 106 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 107 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 108 "data/maps/FallarborTown/scripts.pory"

# 109 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 110 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 111 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_EventScript_KingsRockMart_Text_0:
# 4 "data/maps/FallarborTown/scripts.pory"
	.string "Welcome to the King's Rock Store!\p"
	.string "The one stop shop for all your flinging\n"
	.string "and flinching needs!$"
