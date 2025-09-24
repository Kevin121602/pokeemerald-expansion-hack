# 1 "data/maps/Route115/scripts.pory"

# 2 "data/maps/Route115/scripts.pory"
Route115_MapScripts::
# 3 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route115_OnLoad
# 4 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route115_OnTransition
# 5 "data/maps/Route115/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route115_OnFrame
# 6 "data/maps/Route115/scripts.pory"
	.byte 0
# 7 "data/maps/Route115/scripts.pory"

# 8 "data/maps/Route115/scripts.pory"
Route115_OnLoad:
# 9 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_EventScript_PlaceTilesRoute115West
# 10 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_EventScript_PlaceTilesRoute115East
# 11 "data/maps/Route115/scripts.pory"
	end
# 12 "data/maps/Route115/scripts.pory"

# 13 "data/maps/Route115/scripts.pory"
Route115_OnTransition:
# 14 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 15 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_WEST, AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route115/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_115_EAST, AbnormalWeather_StartGroudonWeather
# 17 "data/maps/Route115/scripts.pory"
	end
# 18 "data/maps/Route115/scripts.pory"

# 19 "data/maps/Route115/scripts.pory"
Route115_OnFrame:
# 20 "data/maps/Route115/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 21 "data/maps/Route115/scripts.pory"
	.2byte 0
# 22 "data/maps/Route115/scripts.pory"

# 23 "data/maps/Route115/scripts.pory"
Route115_EventScript_Woman::
# 24 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NeverKnowWhenCavePokemonWillAppear, MSGBOX_NPC
# 25 "data/maps/Route115/scripts.pory"
	end
# 26 "data/maps/Route115/scripts.pory"

# 27 "data/maps/Route115/scripts.pory"
Route115_EventScript_RouteSignRustboro::
# 28 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_RouteSignRustboro, MSGBOX_SIGN
# 29 "data/maps/Route115/scripts.pory"
	end
# 30 "data/maps/Route115/scripts.pory"

# 31 "data/maps/Route115/scripts.pory"
Route115_EventScript_MeteorFallsSign::
# 32 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MeteorFallsSign, MSGBOX_SIGN
# 33 "data/maps/Route115/scripts.pory"
	end
# 34 "data/maps/Route115/scripts.pory"

# 35 "data/maps/Route115/scripts.pory"
Route115_EventScript_Timothy::
# 36 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_TIMOTHY_1, Route115_Text_TimothyIntro, Route115_Text_TimothyDefeat
# 37 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostBattle, MSGBOX_DEFAULT
# 38 "data/maps/Route115/scripts.pory"
	release
# 39 "data/maps/Route115/scripts.pory"
	end
# 40 "data/maps/Route115/scripts.pory"

# 41 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterTimothy::
# 42 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 43 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyRegister, MSGBOX_DEFAULT
# 45 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_TIMOTHY_1
# 46 "data/maps/Route115/scripts.pory"
	release
# 47 "data/maps/Route115/scripts.pory"
	end
# 48 "data/maps/Route115/scripts.pory"

# 49 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchTimothy::
# 50 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_TIMOTHY_1, Route115_Text_TimothyRematchIntro, Route115_Text_TimothyRematchDefeat
# 51 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_TimothyPostRematch, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route115/scripts.pory"
	end
# 53 "data/maps/Route115/scripts.pory"

# 54 "data/maps/Route115/scripts.pory"
Route115_EventScript_Koichi::
# 55 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KOICHI, Route115_Text_KoichiIntro, Route115_Text_KoichiDefeat
# 56 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KoichiPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route115/scripts.pory"
	end
# 58 "data/maps/Route115/scripts.pory"

# 59 "data/maps/Route115/scripts.pory"
Route115_EventScript_Nob::
# 60 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_NOB_1, Route115_Text_NobIntro, Route115_Text_NobDefeat
# 61 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostBattle, MSGBOX_DEFAULT
# 62 "data/maps/Route115/scripts.pory"
	release
# 63 "data/maps/Route115/scripts.pory"
	end
# 64 "data/maps/Route115/scripts.pory"

# 65 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterNob::
# 66 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 67 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobRegister, MSGBOX_DEFAULT
# 69 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_NOB_1
# 70 "data/maps/Route115/scripts.pory"
	release
# 71 "data/maps/Route115/scripts.pory"
	end
# 72 "data/maps/Route115/scripts.pory"

# 73 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchNob::
# 74 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_NOB_1, Route115_Text_NobRematchIntro, Route115_Text_NobRematchDefeat
# 75 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_NobPostRematch, MSGBOX_AUTOCLOSE
# 76 "data/maps/Route115/scripts.pory"
	end
# 77 "data/maps/Route115/scripts.pory"

# 78 "data/maps/Route115/scripts.pory"
Route115_EventScript_Cyndy::
# 79 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_CYNDY_1, Route115_Text_CyndyIntro, Route115_Text_CyndyDefeat
# 80 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostBattle, MSGBOX_DEFAULT
# 81 "data/maps/Route115/scripts.pory"
	release
# 82 "data/maps/Route115/scripts.pory"
	end
# 83 "data/maps/Route115/scripts.pory"

# 84 "data/maps/Route115/scripts.pory"
Route115_EventScript_RegisterCyndy::
# 85 "data/maps/Route115/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 86 "data/maps/Route115/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyRegister, MSGBOX_DEFAULT
# 88 "data/maps/Route115/scripts.pory"
	register_matchcall TRAINER_CYNDY_1
# 89 "data/maps/Route115/scripts.pory"
	release
# 90 "data/maps/Route115/scripts.pory"
	end
# 91 "data/maps/Route115/scripts.pory"

# 92 "data/maps/Route115/scripts.pory"
Route115_EventScript_RematchCyndy::
# 93 "data/maps/Route115/scripts.pory"
	trainerbattle_rematch TRAINER_CYNDY_1, Route115_Text_CyndyRematchIntro, Route115_Text_CyndyRematchDefeat
# 94 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_CyndyPostRematch, MSGBOX_AUTOCLOSE
# 95 "data/maps/Route115/scripts.pory"
	end
# 96 "data/maps/Route115/scripts.pory"

# 97 "data/maps/Route115/scripts.pory"
Route115_EventScript_Hector::
# 98 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HECTOR, Route115_Text_HectorIntro, Route115_Text_HectorDefeat
# 99 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HectorPostBattle, MSGBOX_AUTOCLOSE
# 100 "data/maps/Route115/scripts.pory"
	end
# 101 "data/maps/Route115/scripts.pory"

# 102 "data/maps/Route115/scripts.pory"
Route115_EventScript_Kyra::
# 103 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_KYRA, Route115_Text_KyraIntro, Route115_Text_KyraDefeat
# 104 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_KyraPostBattle, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route115/scripts.pory"
	end
# 106 "data/maps/Route115/scripts.pory"

# 107 "data/maps/Route115/scripts.pory"
Route115_EventScript_Jaiden::
# 108 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_JAIDEN, Route115_Text_JaidenIntro, Route115_Text_JaidenDefeat
# 109 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_JaidenPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route115/scripts.pory"
	end
# 111 "data/maps/Route115/scripts.pory"

# 112 "data/maps/Route115/scripts.pory"
Route115_EventScript_Alix::
# 113 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_ALIX, Route115_Text_AlixIntro, Route115_Text_AlixDefeat
# 114 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_AlixPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route115/scripts.pory"
	end
# 116 "data/maps/Route115/scripts.pory"

# 117 "data/maps/Route115/scripts.pory"
Route115_EventScript_Helene::
# 118 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_HELENE, Route115_Text_HeleneIntro, Route115_Text_HeleneDefeat
# 119 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_HelenePostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route115/scripts.pory"
	end
# 121 "data/maps/Route115/scripts.pory"

# 122 "data/maps/Route115/scripts.pory"
Route115_EventScript_Marlene::
# 123 "data/maps/Route115/scripts.pory"
	trainerbattle_single TRAINER_MARLENE, Route115_Text_MarleneIntro, Route115_Text_MarleneDefeat
# 124 "data/maps/Route115/scripts.pory"
	msgbox Route115_Text_MarlenePostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route115/scripts.pory"
	end
# 126 "data/maps/Route115/scripts.pory"

# 127 "data/maps/Route115/scripts.pory"
Route115_Text_NeverKnowWhenCavePokemonWillAppear:
# 128 "data/maps/Route115/scripts.pory"
	.string "Exploring a cave isn't like walking\n"
# 129 "data/maps/Route115/scripts.pory"
	.string "on a road.\p"
# 130 "data/maps/Route115/scripts.pory"
	.string "You never know when wild Pokémon will\n"
# 131 "data/maps/Route115/scripts.pory"
	.string "appear. It's full of suspense.$"
# 132 "data/maps/Route115/scripts.pory"

# 133 "data/maps/Route115/scripts.pory"
Route115_Text_RouteSignRustboro:
# 134 "data/maps/Route115/scripts.pory"
	.string "Route 115\n"
# 135 "data/maps/Route115/scripts.pory"
	.string "{DOWN_ARROW} Rustboro City$"
# 136 "data/maps/Route115/scripts.pory"

# 137 "data/maps/Route115/scripts.pory"
Route115_Text_MeteorFallsSign:
# 138 "data/maps/Route115/scripts.pory"
	.string "Meteor Falls\n"
# 139 "data/maps/Route115/scripts.pory"
	.string "Fallarbor Town through here$"
