Route114_LanettesHouse_EventScript_FurfrouHaircut::
# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_EventScript_FurfrouHaircut_Text_0
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
	end


# 9 "data/maps/Route114_LanettesHouse/scripts.pory"

# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"

# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition:
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"

# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette::
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_OfferAdvice
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowNoRoomForDecor
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_DOLL_LANETTE
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"

# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_OfferAdvice::
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"

# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook::
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"

# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2::
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"

# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3::
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"

# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC::
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"

# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EverythingClutteredKeepThis:
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "LANETTE: Oh! {PLAYER}{KUN}!\p"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "I'm sorry everything is so cluttered…\n"
# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When I get engrossed in research,\l"
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "things end up this way…\p"
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "This is embarrassing… Please keep\n"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "this a secret in exchange for this.$"
# 64 "data/maps/Route114_LanettesHouse/scripts.pory"

# 65 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_OrganizeYourBoxes:
# 66 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "May I offer advice about my Pokémon\n"
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Storage System?\p"
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "You should organize your BOXES so you\n"
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "can tell which Pokémon are in them.$"
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"

# 71 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1:
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's Lanette's research notes.\n"
# 73 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's information about Boxes.\p"
# 74 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Design Boxes to hold 30 Pokémon each.\p"
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Each Trainer should be able to store\n"
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "420 Pokémon on the PC system.\p"
# 77 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"

# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2:
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A marking system should be added to\n"
# 81 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "make Pokémon easier to organize.\p"
# 82 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The name and wallpaper design of each\n"
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Box will be made changeable to please\l"
# 84 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the stored Pokémon.\p"
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"

# 87 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3:
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When storing a Pokémon, it should be\n"
# 89 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "sent to the Box inspected last.\p"
# 90 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "If that Box is full, the received\n"
# 91 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Pokémon is stored in the next Box.\p"
# 92 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "In other words, when a Box is examined,\n"
# 93 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "it is automatically selected as the Box\l"
# 94 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "to which Pokémon are sent.$"
# 95 "data/maps/Route114_LanettesHouse/scripts.pory"

# 96 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook:
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER} closed the notebook.$"
# 98 "data/maps/Route114_LanettesHouse/scripts.pory"

# 99 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill:
# 100 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's an e-mail from someone on\n"
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the PC.\p"
# 102 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“… … … … … … …\p"
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Your Storage System offers more\n"
# 104 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "convenience than mine.\p"
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“It has a lot of user-friendly features\n"
# 106 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "that make it fun and useful, too.\p"
# 107 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“It makes me proud that I played\n"
# 108 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "a part in its development.\p"
# 109 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Here's hoping that you'll continue\n"
# 110 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "research in Storage Systems.\p"
# 111 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“From Bill\n"
# 112 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "… … … … … … … …”$"

Route114_LanettesHouse_EventScript_FurfrouHaircut_Text_0:
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Placeholder for Furfrou form changer\n"
	.string "NPC.$"
