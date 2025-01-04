SpiralCity_House1_MapScripts::
	.byte 0


SpiralCity_House1_EventScript_RockSmashTutor::
# 4 "data/maps/SpiralCity_House1/scripts.pory"
	lock
# 5 "data/maps/SpiralCity_House1/scripts.pory"
	faceplayer
# 6 "data/maps/SpiralCity_House1/scripts.pory"
	msgbox RockSmashTeach, MSGBOX_YESNO
# 7 "data/maps/SpiralCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SpiralCity_House1_EventScript_RockSmashTutor_2
SpiralCity_House1_EventScript_RockSmashTutor_1:
# 10 "data/maps/SpiralCity_House1/scripts.pory"
	setvar VAR_0x8005, MOVE_ROCK_SMASH
# 11 "data/maps/SpiralCity_House1/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 12 "data/maps/SpiralCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SpiralCity_House1_EventScript_RockSmashTutor_5
SpiralCity_House1_EventScript_RockSmashTutor_4:
# 15 "data/maps/SpiralCity_House1/scripts.pory"
	goto SpiralCity_House1_EventScript_RockSmashEnd
	end

SpiralCity_House1_EventScript_RockSmashTutor_2:
# 8 "data/maps/SpiralCity_House1/scripts.pory"
	goto SpiralCity_House1_EventScript_RockSmashEnd
	goto SpiralCity_House1_EventScript_RockSmashTutor_1

SpiralCity_House1_EventScript_RockSmashTutor_5:
# 13 "data/maps/SpiralCity_House1/scripts.pory"
	goto SpiralCity_House1_EventScript_RockSmashEnd
	goto SpiralCity_House1_EventScript_RockSmashTutor_4


SpiralCity_House1_EventScript_RockSmashEnd::
# 20 "data/maps/SpiralCity_House1/scripts.pory"
	releaseall
	end


# 32 "data/maps/SpiralCity_House1/scripts.pory"

# 33 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 34 "data/maps/SpiralCity_House1/scripts.pory"
	.byte 0
# 35 "data/maps/SpiralCity_House1/scripts.pory"

# 36 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 37 "data/maps/SpiralCity_House1/scripts.pory"
	lock
# 38 "data/maps/SpiralCity_House1/scripts.pory"
	faceplayer
# 39 "data/maps/SpiralCity_House1/scripts.pory"
	goto_if_set FLAG_SPIRAL_CITY_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 40 "data/maps/SpiralCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GALARIAN_FARFETCHD
# 41 "data/maps/SpiralCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 42 "data/maps/SpiralCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 43 "data/maps/SpiralCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 44 "data/maps/SpiralCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 45 "data/maps/SpiralCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_House1_EventScript_DeclineTrade
# 46 "data/maps/SpiralCity_House1/scripts.pory"
	special ChoosePartyMon
# 47 "data/maps/SpiralCity_House1/scripts.pory"
	waitstate
# 48 "data/maps/SpiralCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 49 "data/maps/SpiralCity_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_House1_EventScript_DeclineTrade
# 50 "data/maps/SpiralCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 51 "data/maps/SpiralCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 52 "data/maps/SpiralCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 53 "data/maps/SpiralCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, RustboroCity_House1_EventScript_NotRequestedMon
# 54 "data/maps/SpiralCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 55 "data/maps/SpiralCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 56 "data/maps/SpiralCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 57 "data/maps/SpiralCity_House1/scripts.pory"
	special DoInGameTradeScene
# 58 "data/maps/SpiralCity_House1/scripts.pory"
	waitstate
# 59 "data/maps/SpiralCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 60 "data/maps/SpiralCity_House1/scripts.pory"
	setflag FLAG_SPIRAL_CITY_TRADE_COMPLETED
# 61 "data/maps/SpiralCity_House1/scripts.pory"
	release
# 62 "data/maps/SpiralCity_House1/scripts.pory"
	end
# 63 "data/maps/SpiralCity_House1/scripts.pory"

# 64 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 65 "data/maps/SpiralCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 66 "data/maps/SpiralCity_House1/scripts.pory"
	release
# 67 "data/maps/SpiralCity_House1/scripts.pory"
	end
# 68 "data/maps/SpiralCity_House1/scripts.pory"

# 69 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 70 "data/maps/SpiralCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 71 "data/maps/SpiralCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 72 "data/maps/SpiralCity_House1/scripts.pory"
	release
# 73 "data/maps/SpiralCity_House1/scripts.pory"
	end
# 74 "data/maps/SpiralCity_House1/scripts.pory"

# 75 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 76 "data/maps/SpiralCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 77 "data/maps/SpiralCity_House1/scripts.pory"
	release
# 78 "data/maps/SpiralCity_House1/scripts.pory"
	end
# 79 "data/maps/SpiralCity_House1/scripts.pory"

# 80 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 81 "data/maps/SpiralCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 82 "data/maps/SpiralCity_House1/scripts.pory"
	end
# 83 "data/maps/SpiralCity_House1/scripts.pory"

# 84 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 85 "data/maps/SpiralCity_House1/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
# 86 "data/maps/SpiralCity_House1/scripts.pory"
	.string "Sure, I knew that.\p"
# 87 "data/maps/SpiralCity_House1/scripts.pory"
	.string "But if you really want, I'm willing\n"
# 88 "data/maps/SpiralCity_House1/scripts.pory"
	.string "to trade it to you.\p"
# 89 "data/maps/SpiralCity_House1/scripts.pory"
	.string "I'll trade you my {STR_VAR_2} for\n"
# 90 "data/maps/SpiralCity_House1/scripts.pory"
	.string "a {STR_VAR_1} if you want.$"
# 91 "data/maps/SpiralCity_House1/scripts.pory"

# 92 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 93 "data/maps/SpiralCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 94 "data/maps/SpiralCity_House1/scripts.pory"
	.string "Please be good to my POKéMON.$"
# 95 "data/maps/SpiralCity_House1/scripts.pory"

# 96 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 97 "data/maps/SpiralCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 98 "data/maps/SpiralCity_House1/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 99 "data/maps/SpiralCity_House1/scripts.pory"

# 100 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 101 "data/maps/SpiralCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 102 "data/maps/SpiralCity_House1/scripts.pory"
	.string "But my POKéMON is cute, you know…$"
# 103 "data/maps/SpiralCity_House1/scripts.pory"

# 104 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 105 "data/maps/SpiralCity_House1/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
# 106 "data/maps/SpiralCity_House1/scripts.pory"
	.string "it with care and kindness.$"
# 107 "data/maps/SpiralCity_House1/scripts.pory"

# 108 "data/maps/SpiralCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 109 "data/maps/SpiralCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
# 110 "data/maps/SpiralCity_House1/scripts.pory"
	.string "sorts of POKéMON and people.\p"
# 111 "data/maps/SpiralCity_House1/scripts.pory"
	.string "I find that fascinating, so I go to all\n"
# 112 "data/maps/SpiralCity_House1/scripts.pory"
	.string "sorts of places.$"

RockSmashTeach::
# 24 "data/maps/SpiralCity_House1/scripts.pory"
	.string "I'm the Rock Smash Guy!\p"
	.string "Or at least I used to be…\n"
	.string "But I can't find any breakable rocks\l"
	.string "around here.\p"
	.string "I can still teach Rock Smash, do you\n"
	.string "want to learn it?$"
