RouteSeven_MapScripts::
	.byte 0


RouteSeven_EventScript_Tommy::
# 4 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RouteSeven_Text_TommyIntro, RouteSeven_Text_TommyDefeat
# 5 "data/maps/RouteSeven/scripts.pory"
	msgbox RouteSeven_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end


RouteSeven_EventScript_Janice::
# 22 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_JANICE, RouteSeven_Text_JaniceIntro, RouteSeven_Text_JaniceDefeat
# 23 "data/maps/RouteSeven/scripts.pory"
	msgbox RouteSeven_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


RouteSeven_EventScript_Calvin::
# 40 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, RouteSeven_Text_CalvinIntro, RouteSeven_Text_CalvinDefeat
# 41 "data/maps/RouteSeven/scripts.pory"
	msgbox RouteSeven_Text_CalvinPostBattle, MSGBOX_AUTOCLOSE
	end


RouteSeven_EventScript_Sally::
# 58 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_SALLY, RouteSeven_Text_SallyIntro, RouteSeven_Text_SallyDefeat
# 59 "data/maps/RouteSeven/scripts.pory"
	msgbox RouteSeven_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end


# 75 "data/maps/RouteSeven/scripts.pory"

# 76 "data/maps/RouteSeven/scripts.pory"
Route105_MapScripts::
# 77 "data/maps/RouteSeven/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route105_OnLoad
# 78 "data/maps/RouteSeven/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route105_OnTransition
# 79 "data/maps/RouteSeven/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route105_OnFrame
# 80 "data/maps/RouteSeven/scripts.pory"
	.byte 0
# 81 "data/maps/RouteSeven/scripts.pory"

# 82 "data/maps/RouteSeven/scripts.pory"
Route105_OnLoad:
# 83 "data/maps/RouteSeven/scripts.pory"
	end
# 84 "data/maps/RouteSeven/scripts.pory"

# 85 "data/maps/RouteSeven/scripts.pory"
Route105_CloseRegiEntrance::
# 86 "data/maps/RouteSeven/scripts.pory"
	return
# 87 "data/maps/RouteSeven/scripts.pory"

# 88 "data/maps/RouteSeven/scripts.pory"
Route105_OnTransition:
# 89 "data/maps/RouteSeven/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 90 "data/maps/RouteSeven/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_NORTH, AbnormalWeather_StartKyogreWeather
# 91 "data/maps/RouteSeven/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_105_SOUTH, AbnormalWeather_StartKyogreWeather
# 92 "data/maps/RouteSeven/scripts.pory"
	end
# 93 "data/maps/RouteSeven/scripts.pory"

# 94 "data/maps/RouteSeven/scripts.pory"
Route105_OnFrame:
# 95 "data/maps/RouteSeven/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 96 "data/maps/RouteSeven/scripts.pory"
	.2byte 0
# 97 "data/maps/RouteSeven/scripts.pory"

# 98 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Foster::
# 99 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, Route105_Text_FosterIntro, Route105_Text_FosterDefeated
# 100 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_FosterPostBattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/RouteSeven/scripts.pory"
	end
# 102 "data/maps/RouteSeven/scripts.pory"

# 103 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Luis::
# 104 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_LUIS, Route105_Text_LuisIntro, Route105_Text_LuisDefeated
# 105 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 106 "data/maps/RouteSeven/scripts.pory"
	end
# 107 "data/maps/RouteSeven/scripts.pory"

# 108 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Dominik::
# 109 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_DOMINIK, Route105_Text_DominikIntro, Route105_Text_DominikDefeated
# 110 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_DominikPostBattle, MSGBOX_AUTOCLOSE
# 111 "data/maps/RouteSeven/scripts.pory"
	end
# 112 "data/maps/RouteSeven/scripts.pory"

# 113 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Beverly::
# 114 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_BEVERLY, Route105_Text_BeverlyIntro, Route105_Text_BeverlyDefeated
# 115 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_PostBattle, MSGBOX_AUTOCLOSE
# 116 "data/maps/RouteSeven/scripts.pory"
	end
# 117 "data/maps/RouteSeven/scripts.pory"

# 118 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Imani::
# 119 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_IMANI, Route105_Text_ImaniIntro, Route105_Text_ImaniDefeated
# 120 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_ImaniPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/RouteSeven/scripts.pory"
	end
# 122 "data/maps/RouteSeven/scripts.pory"

# 123 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Josue::
# 124 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_JOSUE, Route105_Text_JosueIntro, Route105_Text_JosueDefeated
# 125 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_JosuePostBattle, MSGBOX_AUTOCLOSE
# 126 "data/maps/RouteSeven/scripts.pory"
	end
# 127 "data/maps/RouteSeven/scripts.pory"

# 128 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_Andres::
# 129 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_single TRAINER_ANDRES_1, Route105_Text_AndresIntro, Route105_Text_AndresDefeated, Route105_EventScript_AndresRegisterMatchCallAfterBattle
# 130 "data/maps/RouteSeven/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 131 "data/maps/RouteSeven/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route105_EventScript_AndresRematch
# 132 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_AndresPostBattle, MSGBOX_DEFAULT
# 133 "data/maps/RouteSeven/scripts.pory"
	release
# 134 "data/maps/RouteSeven/scripts.pory"
	end
# 135 "data/maps/RouteSeven/scripts.pory"

# 136 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_AndresRegisterMatchCallAfterBattle::
# 137 "data/maps/RouteSeven/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 138 "data/maps/RouteSeven/scripts.pory"
	waitmovement 0
# 139 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_AndresRegister, MSGBOX_DEFAULT
# 140 "data/maps/RouteSeven/scripts.pory"
	register_matchcall TRAINER_ANDRES_1
# 141 "data/maps/RouteSeven/scripts.pory"
	release
# 142 "data/maps/RouteSeven/scripts.pory"
	end
# 143 "data/maps/RouteSeven/scripts.pory"

# 144 "data/maps/RouteSeven/scripts.pory"
Route105_EventScript_AndresRematch::
# 145 "data/maps/RouteSeven/scripts.pory"
	trainerbattle_rematch TRAINER_ANDRES_1, Route105_Text_AndresRematchIntro, Route105_Text_AndresRematchDefeated
# 146 "data/maps/RouteSeven/scripts.pory"
	msgbox Route105_Text_AndresRematchPostBattle, MSGBOX_AUTOCLOSE
# 147 "data/maps/RouteSeven/scripts.pory"
	end
# 148 "data/maps/RouteSeven/scripts.pory"

# 149 "data/maps/RouteSeven/scripts.pory"
Route104_Text_DadPokenavCall:
# 150 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … …\n"
# 151 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … Beep!\p"
# 152 "data/maps/RouteSeven/scripts.pory"
	.string "DAD: Oh, {PLAYER}?\p"
# 153 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … …\n"
# 154 "data/maps/RouteSeven/scripts.pory"
	.string "Where are you now?\l"
# 155 "data/maps/RouteSeven/scripts.pory"
	.string "It sounds windy wherever you are.\p"
# 156 "data/maps/RouteSeven/scripts.pory"
	.string "I just heard from DEVON's MR. STONE\n"
# 157 "data/maps/RouteSeven/scripts.pory"
	.string "about your POKéNAV, so I decided\l"
# 158 "data/maps/RouteSeven/scripts.pory"
	.string "to give you a call.\p"
# 159 "data/maps/RouteSeven/scripts.pory"
	.string "It sounds like you're doing fine,\n"
# 160 "data/maps/RouteSeven/scripts.pory"
	.string "so that's fine with me.\p"
# 161 "data/maps/RouteSeven/scripts.pory"
	.string "You take care now.\p"
# 162 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … …\n"
# 163 "data/maps/RouteSeven/scripts.pory"
	.string "… … … … … Click!$"
# 164 "data/maps/RouteSeven/scripts.pory"

# 165 "data/maps/RouteSeven/scripts.pory"
Route104_Text_RegisteredDadInPokenav:
# 166 "data/maps/RouteSeven/scripts.pory"
	.string "Registered DAD NORMAN\n"
# 167 "data/maps/RouteSeven/scripts.pory"
	.string "in the POKéNAV.$"

RouteSeven_Text_TommyIntro::
# 9 "data/maps/RouteSeven/scripts.pory"
	.string "If you can't beat me, you won't stand a\n"
	.string "chance against stronger trainers!$"

RouteSeven_Text_TommyDefeat::
# 13 "data/maps/RouteSeven/scripts.pory"
	.string "Wow! You've got some potential!$"

RouteSeven_Text_TommyPostBattle::
# 17 "data/maps/RouteSeven/scripts.pory"
	.string "Wally is stronger than me by several\n"
	.string "times. You'd better be on your guard!$"

RouteSeven_Text_JaniceIntro::
# 27 "data/maps/RouteSeven/scripts.pory"
	.string "Let me teach you how strong my\n"
	.string "adorable Pokémon is!$"

RouteSeven_Text_JaniceDefeat::
# 31 "data/maps/RouteSeven/scripts.pory"
	.string "You're a notch above me…$"

RouteSeven_Text_JanicePostBattle::
# 35 "data/maps/RouteSeven/scripts.pory"
	.string "Pokémon that possess cuteness and\n"
	.string "power, that's ideal, I think.$"

RouteSeven_Text_CalvinIntro::
# 45 "data/maps/RouteSeven/scripts.pory"
	.string "If you have Pokémon with you, then\n"
	.string "you're an official Pokémon Trainer! You\l"
	.string "can't say no to my challenge!$"

RouteSeven_Text_CalvinDefeat::
# 49 "data/maps/RouteSeven/scripts.pory"
	.string "Arrgh, I lost… I should have trained\n"
	.string "mine more…$"

RouteSeven_Text_CalvinPostBattle::
# 53 "data/maps/RouteSeven/scripts.pory"
	.string "Listen, you. If you're strong, you\n"
	.string "should have told me before!$"

RouteSeven_Text_SallyIntro::
# 63 "data/maps/RouteSeven/scripts.pory"
	.string "I'll hack and slash my way to victory\n"
	.string "with the Aerial Ace we just learned!$"

RouteSeven_Text_SallyDefeat::
# 67 "data/maps/RouteSeven/scripts.pory"
	.string "Why are you so serious?$"

RouteSeven_Text_SallyPostBattle::
# 71 "data/maps/RouteSeven/scripts.pory"
	.string "I never get tired of hacking and\n"
	.string "slashing!$"
