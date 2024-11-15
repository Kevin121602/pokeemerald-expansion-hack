# 1 "data/maps/RouteSeven/scripts.pory"

# 2 "data/maps/RouteSeven/scripts.pory"
RouteSeven_MapScripts::
# 3 "data/maps/RouteSeven/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 4 "data/maps/RouteSeven/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 5 "data/maps/RouteSeven/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 6 "data/maps/RouteSeven/scripts.pory"
	.byte 0
# 7 "data/maps/RouteSeven/scripts.pory"

# 8 "data/maps/RouteSeven/scripts.pory"
Route105_OnLoad:
# 9 "data/maps/RouteSeven/scripts.pory"
	end
# 10 "data/maps/RouteSeven/scripts.pory"

# 11 "data/maps/RouteSeven/scripts.pory"
Route105_CloseRegiEntrance::
# 12 "data/maps/RouteSeven/scripts.pory"
	return
# 13 "data/maps/RouteSeven/scripts.pory"

# 14 "data/maps/RouteSeven/scripts.pory"
Route105_OnTransition:
# 15 "data/maps/RouteSeven/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 16 "data/maps/RouteSeven/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 17 "data/maps/RouteSeven/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 18 "data/maps/RouteSeven/scripts.pory"
	end
# 19 "data/maps/RouteSeven/scripts.pory"

# 20 "data/maps/RouteSeven/scripts.pory"
Route105_OnFrame:
# 21 "data/maps/RouteSeven/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 22 "data/maps/RouteSeven/scripts.pory"
	.2byte 0
# 23 "data/maps/RouteSeven/scripts.pory"

# 24 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Foster::
# 25 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 26 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/RouteSeven/scripts.pory"
	end
# 28 "data/maps/RouteSeven/scripts.pory"

# 29 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Luis::
# 30 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 31 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/RouteSeven/scripts.pory"
	end
# 33 "data/maps/RouteSeven/scripts.pory"

# 34 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Dominik::
# 35 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 36 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/RouteSeven/scripts.pory"
	end
# 38 "data/maps/RouteSeven/scripts.pory"

# 39 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Beverly::
# 40 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 41 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/RouteSeven/scripts.pory"
	end
# 43 "data/maps/RouteSeven/scripts.pory"

# 44 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Imani::
# 45 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 46 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/RouteSeven/scripts.pory"
	end
# 48 "data/maps/RouteSeven/scripts.pory"

# 49 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Josue::
# 50 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 51 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/RouteSeven/scripts.pory"
	end
# 53 "data/maps/RouteSeven/scripts.pory"

# 54 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Andres::
# 55 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 56 "data/maps/RouteSeven/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 57 "data/maps/RouteSeven/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 58 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 59 "data/maps/RouteSeven/scripts.pory"
	release
# 60 "data/maps/RouteSeven/scripts.pory"
	end
# 61 "data/maps/RouteSeven/scripts.pory"

# 62 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 63 "data/maps/RouteSeven/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 64 "data/maps/RouteSeven/scripts.pory"
	waitmovement 0
# 65 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 66 "data/maps/RouteSeven/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 67 "data/maps/RouteSeven/scripts.pory"
	release
# 68 "data/maps/RouteSeven/scripts.pory"
	end
# 69 "data/maps/RouteSeven/scripts.pory"

# 70 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_AndresRematch::
# 71 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 72 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/RouteSeven/scripts.pory"
	end
# 74 "data/maps/RouteSeven/scripts.pory"

# 75 "data/maps/RouteSeven/scripts.pory"
Route104_Text_DadPokenavCall:
# 76 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … …\n"
# 77 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … Beep!\p"
# 78 "data/maps/RouteSeven/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 79 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … …\n"
# 80 "data/maps/RouteSeven/scripts.pory"
	.string "Where are you now?\l"
# 81 "data/maps/RouteSeven/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 82 "data/maps/RouteSeven/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 83 "data/maps/RouteSeven/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 84 "data/maps/RouteSeven/scripts.pory"
	.string "to give you a call.\p"
# 85 "data/maps/RouteSeven/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 86 "data/maps/RouteSeven/scripts.pory"
	.string "so that's fine with me.\p"
# 87 "data/maps/RouteSeven/scripts.pory"
	.string "You take care now.\p"
# 88 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … …\n"
# 89 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … Click!$"
# 90 "data/maps/RouteSeven/scripts.pory"

# 91 "data/maps/RouteSeven/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 92 "data/maps/RouteSeven/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 93 "data/maps/RouteSeven/scripts.pory"
	.string "in the POKéNAV.$"
