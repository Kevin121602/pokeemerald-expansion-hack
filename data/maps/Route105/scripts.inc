Route105_EventScript_BridgeWorkers::
# 2 "data/maps/Route105/scripts.pory"
	lock
# 3 "data/maps/Route105/scripts.pory"
	faceplayer
# 4 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_BridgeWorkers_Text_0
# 5 "data/maps/Route105/scripts.pory"
	release
	end


# 9 "data/maps/Route105/scripts.pory"

# 10 "data/maps/Route105/scripts.pory"
Route105_MapScripts::
# 11 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 12 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 13 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 14 "data/maps/Route105/scripts.pory"
	.byte 0
# 15 "data/maps/Route105/scripts.pory"

# 16 "data/maps/Route105/scripts.pory"
Route105_OnLoad:
# 17 "data/maps/Route105/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
# 18 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
# 19 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
# 20 "data/maps/Route105/scripts.pory"
	end
# 21 "data/maps/Route105/scripts.pory"

# 22 "data/maps/Route105/scripts.pory"
Route105_CloseRegiEntrance::
# 23 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 24 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
# 25 "data/maps/Route105/scripts.pory"
	return
# 26 "data/maps/Route105/scripts.pory"

# 27 "data/maps/Route105/scripts.pory"
Route105_OnTransition:
# 28 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 29 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 30 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 31 "data/maps/Route105/scripts.pory"
	end
# 32 "data/maps/Route105/scripts.pory"

# 33 "data/maps/Route105/scripts.pory"
Route105_OnFrame:
# 34 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 35 "data/maps/Route105/scripts.pory"
	.2byte 0
# 36 "data/maps/Route105/scripts.pory"

# 37 "data/maps/Route105/scripts.pory"
Route105_EventScript_Foster::
# 38 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 39 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route105/scripts.pory"
	end
# 41 "data/maps/Route105/scripts.pory"

# 42 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 43 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 44 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 45 "data/maps/Route105/scripts.pory"
	end
# 46 "data/maps/Route105/scripts.pory"

# 47 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 48 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 49 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/Route105/scripts.pory"
	end
# 51 "data/maps/Route105/scripts.pory"

# 52 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 53 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 54 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 55 "data/maps/Route105/scripts.pory"
	end
# 56 "data/maps/Route105/scripts.pory"

# 57 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 58 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 59 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/Route105/scripts.pory"
	end
# 61 "data/maps/Route105/scripts.pory"

# 62 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 63 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 64 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route105/scripts.pory"
	end
# 66 "data/maps/Route105/scripts.pory"

# 67 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 68 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 69 "data/maps/Route105/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 70 "data/maps/Route105/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 71 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 72 "data/maps/Route105/scripts.pory"
	release
# 73 "data/maps/Route105/scripts.pory"
	end
# 74 "data/maps/Route105/scripts.pory"

# 75 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 76 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 77 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 79 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 80 "data/maps/Route105/scripts.pory"
	release
# 81 "data/maps/Route105/scripts.pory"
	end
# 82 "data/maps/Route105/scripts.pory"

# 83 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 84 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 85 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/Route105/scripts.pory"
	end
# 87 "data/maps/Route105/scripts.pory"

# 88 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall:
# 89 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 90 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 91 "data/maps/Route105/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 92 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 93 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 94 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 95 "data/maps/Route105/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 96 "data/maps/Route105/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 97 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 98 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 99 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 100 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 101 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 102 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 103 "data/maps/Route105/scripts.pory"

# 104 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 105 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 106 "data/maps/Route105/scripts.pory"
	.string "in the POKéNAV.$"

Route105_EventScript_BridgeWorkers_Text_0:
# 4 "data/maps/Route105/scripts.pory"
	.string "We're still working on the bridge to\n"
	.string "DEWFORD TOWN.$"
