Route105_EventScript_AquaGrunts::
# 2 "data/maps/Route105/scripts.pory"
	lock
# 3 "data/maps/Route105/scripts.pory"
	faceplayer
# 4 "data/maps/Route105/scripts.pory"
	msgbox Route105_EventScript_AquaGrunts_Text_0
# 7 "data/maps/Route105/scripts.pory"
	release
	end


# 11 "data/maps/Route105/scripts.pory"

# 12 "data/maps/Route105/scripts.pory"
Route105_MapScripts::
# 13 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 14 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 15 "data/maps/Route105/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 16 "data/maps/Route105/scripts.pory"
	.byte 0
# 17 "data/maps/Route105/scripts.pory"

# 18 "data/maps/Route105/scripts.pory"
Route105_OnLoad:
# 19 "data/maps/Route105/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route105_CloseRegiEntrance
# 20 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute105North
# 21 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute105South
# 22 "data/maps/Route105/scripts.pory"
	end
# 23 "data/maps/Route105/scripts.pory"

# 24 "data/maps/Route105/scripts.pory"
Route105_CloseRegiEntrance::
# 25 "data/maps/Route105/scripts.pory"
	setmetatile 9, 19, METATILE_General_RockWall_RockBase, TRUE
# 26 "data/maps/Route105/scripts.pory"
	setmetatile 9, 20, METATILE_General_RockWall_SandBase, TRUE
# 27 "data/maps/Route105/scripts.pory"
	return
# 28 "data/maps/Route105/scripts.pory"

# 29 "data/maps/Route105/scripts.pory"
Route105_OnTransition:
# 30 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 31 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 32 "data/maps/Route105/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 33 "data/maps/Route105/scripts.pory"
	end
# 34 "data/maps/Route105/scripts.pory"

# 35 "data/maps/Route105/scripts.pory"
Route105_OnFrame:
# 36 "data/maps/Route105/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 37 "data/maps/Route105/scripts.pory"
	.2byte 0
# 38 "data/maps/Route105/scripts.pory"

# 39 "data/maps/Route105/scripts.pory"
Route105_EventScript_Foster::
# 40 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 41 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route105/scripts.pory"
	end
# 43 "data/maps/Route105/scripts.pory"

# 44 "data/maps/Route105/scripts.pory"
Route105_EventScript_Luis::
# 45 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 46 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route105/scripts.pory"
	end
# 48 "data/maps/Route105/scripts.pory"

# 49 "data/maps/Route105/scripts.pory"
Route105_EventScript_Dominik::
# 50 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 51 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route105/scripts.pory"
	end
# 53 "data/maps/Route105/scripts.pory"

# 54 "data/maps/Route105/scripts.pory"
Route105_EventScript_Beverly::
# 55 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 56 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route105/scripts.pory"
	end
# 58 "data/maps/Route105/scripts.pory"

# 59 "data/maps/Route105/scripts.pory"
Route105_EventScript_Imani::
# 60 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 61 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route105/scripts.pory"
	end
# 63 "data/maps/Route105/scripts.pory"

# 64 "data/maps/Route105/scripts.pory"
Route105_EventScript_Josue::
# 65 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 66 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/Route105/scripts.pory"
	end
# 68 "data/maps/Route105/scripts.pory"

# 69 "data/maps/Route105/scripts.pory"
Route105_EventScript_Andres::
# 70 "data/maps/Route105/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 71 "data/maps/Route105/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 72 "data/maps/Route105/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 73 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 74 "data/maps/Route105/scripts.pory"
	release
# 75 "data/maps/Route105/scripts.pory"
	end
# 76 "data/maps/Route105/scripts.pory"

# 77 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 78 "data/maps/Route105/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 79 "data/maps/Route105/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 81 "data/maps/Route105/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 82 "data/maps/Route105/scripts.pory"
	release
# 83 "data/maps/Route105/scripts.pory"
	end
# 84 "data/maps/Route105/scripts.pory"

# 85 "data/maps/Route105/scripts.pory"
Route105_EventScript_AndresRematch::
# 86 "data/maps/Route105/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 87 "data/maps/Route105/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route105/scripts.pory"
	end
# 89 "data/maps/Route105/scripts.pory"

# 90 "data/maps/Route105/scripts.pory"
Route104_Text_DadPokenavCall:
# 91 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 92 "data/maps/Route105/scripts.pory"
	.string "… … … … … Beep!\p"
# 93 "data/maps/Route105/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 94 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 95 "data/maps/Route105/scripts.pory"
	.string "Where are you now?\l"
# 96 "data/maps/Route105/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 97 "data/maps/Route105/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 98 "data/maps/Route105/scripts.pory"
	.string "about your Pokénav, so I decided\l"
# 99 "data/maps/Route105/scripts.pory"
	.string "to give you a call.\p"
# 100 "data/maps/Route105/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 101 "data/maps/Route105/scripts.pory"
	.string "so that's fine with me.\p"
# 102 "data/maps/Route105/scripts.pory"
	.string "You take care now.\p"
# 103 "data/maps/Route105/scripts.pory"
	.string "… … … … … …\n"
# 104 "data/maps/Route105/scripts.pory"
	.string "… … … … … Click!$"
# 105 "data/maps/Route105/scripts.pory"

# 106 "data/maps/Route105/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 107 "data/maps/Route105/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 108 "data/maps/Route105/scripts.pory"
	.string "in the Pokénav.$"

Route105_EventScript_AquaGrunts_Text_0:
# 4 "data/maps/Route105/scripts.pory"
	.string "We have important business going on\n"
	.string "in Slateport City.\p"
	.string "Get lost!$"
