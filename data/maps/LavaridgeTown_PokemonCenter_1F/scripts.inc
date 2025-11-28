# 1 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 11 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Youngster::
# 23 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate, MSGBOX_NPC
# 24 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Woman::
# 27 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether, MSGBOX_NPC
# 28 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Gentleman::
# 31 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo, MSGBOX_NPC
# 32 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_Trader::
# 35 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	lock
# 36 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 37 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, LavaridgeTown_PokemonCenter_1F_EventScript_NeedHeatBadge
# 38 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_LAVARIDGE_NPC_TRADE_COMPLETED, LavaridgeTown_PokemonCenter_1F_EventScript_TradeCompleted
# 39 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HISUIAN_GROWLITHE
# 40 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 41 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 42 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 43 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 44 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_PokemonCenter_1F_EventScript_ArcanineTrade
# 45 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 46 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 47 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 48 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LavaridgeTown_PokemonCenter_1F_EventScript_DeclineTrade
# 49 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 50 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 51 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 52 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon1
# 53 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 54 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 55 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special CreateInGameTradePokemon
# 56 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special DoInGameTradeScene
# 57 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 58 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 59 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_LAVARIDGE_NPC_TRADE_COMPLETED
# 60 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 61 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 62 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 63 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_ArcanineTrade::
# 64 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HISUIAN_ARCANINE
# 65 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 66 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 67 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 68 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_HowAboutArcanine, MSGBOX_YESNO
# 69 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_PokemonCenter_1F_EventScript_DeclineTrade
# 70 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special ChoosePartyMon
# 71 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 72 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 73 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LavaridgeTown_PokemonCenter_1F_EventScript_DeclineTrade
# 74 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 75 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 76 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 77 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon2
# 78 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 79 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 80 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special CreateInGameTradePokemon
# 81 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	special DoInGameTradeScene
# 82 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	waitstate
# 83 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 84 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_LAVARIDGE_NPC_TRADE_COMPLETED
# 85 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 86 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 87 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 88 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_NeedHeatBadge::
# 89 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_LookingForHeatBadge, MSGBOX_DEFAULT
# 90 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 91 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 92 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_DeclineTrade::
# 94 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 95 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 96 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 97 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 98 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon1::
# 99 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeGrowlitheToMe, MSGBOX_DEFAULT
# 100 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 101 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 102 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 103 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_NotRequestedMon2::
# 104 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeArcanineToMe, MSGBOX_DEFAULT
# 105 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 106 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 107 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 108 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_EventScript_TradeCompleted::
# 109 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	msgbox LavaridgeTown_PokemonCenter_1F_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 110 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	release
# 111 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	end
# 112 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 113 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_IllTradeIfYouWant:
# 114 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I'm looking for someone to trade my\n"
# 115 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Growlithe with.\p"
# 116 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Are you interested? I'm looking for a\n"
# 117 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Growlithe of your own.$"
# 118 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 119 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HowAboutArcanine:
# 120 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "How about an Arcanine?$"
# 121 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 122 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_PleaseBeGoodToMyPokemon:
# 123 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "My Pokémon looks very happy to be\n"
# 124 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "with you!$"
# 125 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 126 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeGrowlitheToMe:
# 127 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 128 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "a Growltihe to me.$"
# 129 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 130 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_DoesntLookLikeArcanineToMe:
# 131 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 132 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "an Arcanine to me.$"
# 133 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 134 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_LookingForHeatBadge:
# 135 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I'm looking for someone to trade my\n"
# 136 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Growlithe with.\p"
# 137 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "But not just any Trainer will do, I'm\n"
# 138 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "looking for someone with the Heat Badge.$"
# 139 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 140 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_YouDontWantToThatsOkay:
# 141 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's a shame…$"
# 142 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 143 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_AnyPokemonCanBeCute:
# 144 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "My Pokémon looks very happy to be\n"
# 145 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "with you!$"
# 146 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 147 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersPokemonSpendTimeTogether:
# 148 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I think Pokémon get closer to their\n"
# 149 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Trainers if they spend time together.\p"
# 150 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "The longer the better.\n"
# 151 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "That's what I think.$"
# 152 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 153 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_HotSpringCanInvigorate:
# 154 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "It's sort of magical how just sitting\n"
# 155 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "in a hot-spring pool can invigorate.\p"
# 156 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "I wish I could let my Pokémon\n"
# 157 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "soak, too.$"
# 158 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"

# 159 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
LavaridgeTown_PokemonCenter_1F_Text_TrainersShouldRestToo:
# 160 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "Hohoho! Hey, kid, you can reach\n"
# 161 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "the hot springs from here.\p"
# 162 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "If Pokémon are getting rest, so too\n"
# 163 "data/maps/LavaridgeTown_PokemonCenter_1F/scripts.pory"
	.string "should their Trainers.$"
