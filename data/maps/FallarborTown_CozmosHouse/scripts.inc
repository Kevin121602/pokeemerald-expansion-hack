FallarborTown_CozmosHouse_EventScript_MiniorForms::
# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_EventScript_MiniorForms_Text_0
# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
	end


# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts::
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo::
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_METEORITE
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_TM_ACROBATICS
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM_RETURN
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife::
# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 76 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
# 77 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh…\n"
# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I never should have let myself be\l"
# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "conned into telling TEAM MAGMA where\l"
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "you can find METEORITES…\p"
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That METEORITE from METEOR FALLS…\n"
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "It's never going to be mine now…$"
# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh!\n"
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Hah?\p"
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That item…\p"
# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Could it be?\p"
# 89 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Is it the METEORITE that TEAM MAGMA\n"
# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "took from METEOR FALLS?\p"
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please, may I have it?\p"
# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this TM?$"
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: This TM, it represents\n"
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "my feeling of gratitude.\l"
# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please use it!$"
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, I can't believe it.\n"
# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really, really great!\p"
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really going to help my research!$"
# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Oh, but…\n"
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm crushed with disappointment…$"
# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO: Please, may I have that\n"
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "METEORITE?\p"
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 113 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this TM?$"
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 115 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "PROF. COZMO went off to METEOR FALLS\n"
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "on ROUTE 114 with some people from\l"
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "TEAM MAGMA.$"
# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 120 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
# 121 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor PROF. COZMO…\n"
# 122 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
# 123 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 124 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
# 125 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Look at PROF. COZMO…\n"
# 126 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so happy! I think it's cute.$"

FallarborTown_CozmosHouse_EventScript_MiniorForms_Text_0:
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Placeholder for Minior form changer\n"
	.string "NPC.$"
