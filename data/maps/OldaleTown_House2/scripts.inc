OldaleTown_House2_EventScript_SawsbuckChanger::
# 2 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 3 "data/maps/OldaleTown_House2/scripts.pory"
	faceplayer
# 4 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_EventScript_SawsbuckChanger_Text_0
# 5 "data/maps/OldaleTown_House2/scripts.pory"
	release
	end


OldaleTown_House2_EventScript_VivillonChanger::
# 10 "data/maps/OldaleTown_House2/scripts.pory"
	lock
# 11 "data/maps/OldaleTown_House2/scripts.pory"
	faceplayer
# 12 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_EventScript_VivillonChanger_Text_0
# 13 "data/maps/OldaleTown_House2/scripts.pory"
	release
	end


# 17 "data/maps/OldaleTown_House2/scripts.pory"

# 18 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_MapScripts::
# 19 "data/maps/OldaleTown_House2/scripts.pory"
	.byte 0
# 20 "data/maps/OldaleTown_House2/scripts.pory"

# 21 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Woman::
# 22 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
# 23 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 24 "data/maps/OldaleTown_House2/scripts.pory"

# 25 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_EventScript_Man::
# 26 "data/maps/OldaleTown_House2/scripts.pory"
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
# 27 "data/maps/OldaleTown_House2/scripts.pory"
	end
# 28 "data/maps/OldaleTown_House2/scripts.pory"

# 29 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_PokemonLevelUp:
# 30 "data/maps/OldaleTown_House2/scripts.pory"
	.string "When Pokémon battle, they eventually\n"
# 31 "data/maps/OldaleTown_House2/scripts.pory"
	.string "level up and become stronger.$"
# 32 "data/maps/OldaleTown_House2/scripts.pory"

# 33 "data/maps/OldaleTown_House2/scripts.pory"
OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
# 34 "data/maps/OldaleTown_House2/scripts.pory"
	.string "If the Pokémon with you become\n"
# 35 "data/maps/OldaleTown_House2/scripts.pory"
	.string "stronger, you'll be able to go farther\l"
# 36 "data/maps/OldaleTown_House2/scripts.pory"
	.string "away from here.$"

OldaleTown_House2_EventScript_SawsbuckChanger_Text_0:
# 4 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Placeholder for Sawsbuck form NPC.$"

OldaleTown_House2_EventScript_VivillonChanger_Text_0:
# 12 "data/maps/OldaleTown_House2/scripts.pory"
	.string "Placeholder for Vivillon form NPC.$"
