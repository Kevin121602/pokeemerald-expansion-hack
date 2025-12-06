# 1 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 2 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_MapScripts::
# 3 "data/maps/Route113_GlassWorkshop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_GlassWorkshop_OnTransition
# 4 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.byte 0
# 5 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 6 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_OnTransition:
# 7 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_LANDMARK_GLASS_WORKSHOP
# 8 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 9 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 10 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_Trader::
# 11 "data/maps/Route113_GlassWorkshop/scripts.pory"
	lock
# 12 "data/maps/Route113_GlassWorkshop/scripts.pory"
	faceplayer
# 13 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_set FLAG_ROUTE_113_NPC_TRADE_COMPLETED, Route113_GlassWorkshop_EventScript_TradeCompleted
# 14 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GALARIAN_CORSOLA
# 15 "data/maps/Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 16 "data/maps/Route113_GlassWorkshop/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 17 "data/maps/Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 18 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 19 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route113_GlassWorkshop_EventScript_DeclineTrade
# 20 "data/maps/Route113_GlassWorkshop/scripts.pory"
	special ChoosePartyMon
# 21 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitstate
# 22 "data/maps/Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 23 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route113_GlassWorkshop_EventScript_DeclineTrade
# 24 "data/maps/Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 25 "data/maps/Route113_GlassWorkshop/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 26 "data/maps/Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 27 "data/maps/Route113_GlassWorkshop/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Route113_GlassWorkshop_EventScript_NotRequestedMon
# 28 "data/maps/Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 29 "data/maps/Route113_GlassWorkshop/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 30 "data/maps/Route113_GlassWorkshop/scripts.pory"
	special CreateInGameTradePokemon
# 31 "data/maps/Route113_GlassWorkshop/scripts.pory"
	special DoInGameTradeScene
# 32 "data/maps/Route113_GlassWorkshop/scripts.pory"
	waitstate
# 33 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 34 "data/maps/Route113_GlassWorkshop/scripts.pory"
	setflag FLAG_ROUTE_113_NPC_TRADE_COMPLETED
# 35 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 36 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 37 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 38 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_DeclineTrade::
# 39 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 40 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 41 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 42 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 43 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_NotRequestedMon::
# 44 "data/maps/Route113_GlassWorkshop/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 45 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 46 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 47 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 48 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 49 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_EventScript_TradeCompleted::
# 50 "data/maps/Route113_GlassWorkshop/scripts.pory"
	msgbox Route113_GlassWorkshop_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 51 "data/maps/Route113_GlassWorkshop/scripts.pory"
	release
# 52 "data/maps/Route113_GlassWorkshop/scripts.pory"
	end
# 53 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 54 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_IllTradeIfYouWant:
# 55 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I fished up this Corsola, but I\n"
# 56 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "think there's something wrong with\l"
# 57 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "it. It looks so gloomy…\p"
# 58 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "If you have a Corsola of your own,\n"
# 59 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "I'll happily trade you.$"
# 60 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 61 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_PleaseBeGoodToMyPokemon:
# 62 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Thanks!\n"
# 63 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "This one looks a lot more lively.$"
# 64 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 65 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_DoesntLookLikeMonToMe:
# 66 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 67 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 68 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 69 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_YouDontWantToThatsOkay:
# 70 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "If you don't want to, that's fine.\n"
# 71 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "But this Corsola is really bringing\l"
# 72 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "down the atmosphere around here…$"
# 73 "data/maps/Route113_GlassWorkshop/scripts.pory"

# 74 "data/maps/Route113_GlassWorkshop/scripts.pory"
Route113_GlassWorkshop_Text_AnyPokemonCanBeCute:
# 75 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "Maybe it was all this soot that made\n"
# 76 "data/maps/Route113_GlassWorkshop/scripts.pory"
	.string "my Corsola so gloomy…$"
