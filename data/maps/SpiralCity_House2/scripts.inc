SpiralCity_House2_MapScripts::
	.byte 0


SpiralCity_House2_EventScript_TradeFarfetchd::
# 4 "data/maps/SpiralCity_House2/scripts.pory"
	lock
# 5 "data/maps/SpiralCity_House2/scripts.pory"
	faceplayer
# 6 "data/maps/SpiralCity_House2/scripts.pory"
	goto_if_set FLAG_SPIRAL_CITY_TRADE_COMPLETED, SpiralCity_House2_EventScript_TradeFarfetchd_2
# 11 "data/maps/SpiralCity_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GALARIAN_FARFETCHD
# 12 "data/maps/SpiralCity_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 13 "data/maps/SpiralCity_House2/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 14 "data/maps/SpiralCity_House2/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 15 "data/maps/SpiralCity_House2/scripts.pory"
	msgbox SpiralCity_House2_EventScript_TradeFarfetchd_Text_1, MSGBOX_YESNO
# 16 "data/maps/SpiralCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SpiralCity_House2_EventScript_TradeFarfetchd_5
SpiralCity_House2_EventScript_TradeFarfetchd_4:
# 19 "data/maps/SpiralCity_House2/scripts.pory"
	special ChoosePartyMon
# 20 "data/maps/SpiralCity_House2/scripts.pory"
	waitstate
# 21 "data/maps/SpiralCity_House2/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 22 "data/maps/SpiralCity_House2/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq SpiralCity_House2_EventScript_TradeFarfetchd_8
SpiralCity_House2_EventScript_TradeFarfetchd_7:
# 26 "data/maps/SpiralCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 27 "data/maps/SpiralCity_House2/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 28 "data/maps/SpiralCity_House2/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 29 "data/maps/SpiralCity_House2/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne SpiralCity_House2_EventScript_TradeFarfetchd_11
SpiralCity_House2_EventScript_TradeFarfetchd_10:
# 32 "data/maps/SpiralCity_House2/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 33 "data/maps/SpiralCity_House2/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 34 "data/maps/SpiralCity_House2/scripts.pory"
	special CreateInGameTradePokemon
# 35 "data/maps/SpiralCity_House2/scripts.pory"
	special DoInGameTradeScene
# 36 "data/maps/SpiralCity_House2/scripts.pory"
	waitstate
# 37 "data/maps/SpiralCity_House2/scripts.pory"
	msgbox SpiralCity_House2_EventScript_TradeFarfetchd_Text_0
# 38 "data/maps/SpiralCity_House2/scripts.pory"
	setflag FLAG_SPIRAL_CITY_TRADE_COMPLETED
# 39 "data/maps/SpiralCity_House2/scripts.pory"
	releaseall
	end

SpiralCity_House2_EventScript_TradeFarfetchd_2:
# 7 "data/maps/SpiralCity_House2/scripts.pory"
	msgbox SpiralCity_House2_EventScript_TradeFarfetchd_Text_0
# 8 "data/maps/SpiralCity_House2/scripts.pory"
	release
	end

SpiralCity_House2_EventScript_TradeFarfetchd_5:
# 17 "data/maps/SpiralCity_House2/scripts.pory"
	goto SpiralCity_House2_EventScript_Decline
	goto SpiralCity_House2_EventScript_TradeFarfetchd_4

SpiralCity_House2_EventScript_TradeFarfetchd_8:
# 24 "data/maps/SpiralCity_House2/scripts.pory"
	goto SpiralCity_House2_EventScript_Decline
	goto SpiralCity_House2_EventScript_TradeFarfetchd_7

SpiralCity_House2_EventScript_TradeFarfetchd_11:
# 30 "data/maps/SpiralCity_House2/scripts.pory"
	goto SpiralCity_House2_EventScript_NotRequestedMon
	goto SpiralCity_House2_EventScript_TradeFarfetchd_10


SpiralCity_House2_EventScript_Decline::
# 44 "data/maps/SpiralCity_House2/scripts.pory"
	msgbox SpiralCity_House2_EventScript_Decline_Text_0
# 45 "data/maps/SpiralCity_House2/scripts.pory"
	release
	end


SpiralCity_House2_EventScript_NotRequestedMon::
# 50 "data/maps/SpiralCity_House2/scripts.pory"
	msgbox SpiralCity_House2_EventScript_NotRequestedMon_Text_0
# 51 "data/maps/SpiralCity_House2/scripts.pory"
	release
	end


# 55 "data/maps/SpiralCity_House2/scripts.pory"

# 56 "data/maps/SpiralCity_House2/scripts.pory"
RustboroCity_House2_MapScripts::
# 57 "data/maps/SpiralCity_House2/scripts.pory"
	.byte 0
# 58 "data/maps/SpiralCity_House2/scripts.pory"

# 59 "data/maps/SpiralCity_House2/scripts.pory"
RustboroCity_House2_EventScript_PokefanF::
# 60 "data/maps/SpiralCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_TrainerSchoolExcellent, MSGBOX_NPC
# 61 "data/maps/SpiralCity_House2/scripts.pory"
	end
# 62 "data/maps/SpiralCity_House2/scripts.pory"

# 63 "data/maps/SpiralCity_House2/scripts.pory"
RustboroCity_House2_EventScript_LittleGirl::
# 64 "data/maps/SpiralCity_House2/scripts.pory"
	msgbox RustboroCity_House2_Text_RoxanneKnowsALot, MSGBOX_NPC
# 65 "data/maps/SpiralCity_House2/scripts.pory"
	end
# 66 "data/maps/SpiralCity_House2/scripts.pory"

# 67 "data/maps/SpiralCity_House2/scripts.pory"
RustboroCity_House2_Text_TrainerSchoolExcellent:
# 68 "data/maps/SpiralCity_House2/scripts.pory"
	.string "The TRAINER'S SCHOOL is excellent.\p"
# 69 "data/maps/SpiralCity_House2/scripts.pory"
	.string "If you study there, you could even\n"
# 70 "data/maps/SpiralCity_House2/scripts.pory"
	.string "become a GYM LEADER.$"
# 71 "data/maps/SpiralCity_House2/scripts.pory"

# 72 "data/maps/SpiralCity_House2/scripts.pory"
RustboroCity_House2_Text_RoxanneKnowsALot:
# 73 "data/maps/SpiralCity_House2/scripts.pory"
	.string "ROXANNE, the GYM LEADER, really knows\n"
# 74 "data/maps/SpiralCity_House2/scripts.pory"
	.string "a lot about POKéMON.\p"
# 75 "data/maps/SpiralCity_House2/scripts.pory"
	.string "She's really strong, too!$"

SpiralCity_House2_EventScript_TradeFarfetchd_Text_0:
# 7 "data/maps/SpiralCity_House2/scripts.pory"
	.string "You can increase Farfetch'd's critical\n"
	.string "hit rate with a Leek!$"

SpiralCity_House2_EventScript_TradeFarfetchd_Text_1:
# 15 "data/maps/SpiralCity_House2/scripts.pory"
	.string "Do you have a Farfetch'd from Kanto? I\n"
	.string "have one from Galar, would you like to\l"
	.string "trade them?$"

SpiralCity_House2_EventScript_Decline_Text_0:
# 44 "data/maps/SpiralCity_House2/scripts.pory"
	.string "Oh well…$"

SpiralCity_House2_EventScript_NotRequestedMon_Text_0:
# 50 "data/maps/SpiralCity_House2/scripts.pory"
	.string "That's not a Farfetch'd…$"
