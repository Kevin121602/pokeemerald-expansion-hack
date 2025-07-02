Route113_EventScript_CherylTriggered::
# 4 "data/maps/Route113/scripts.pory"
	lock
# 5 "data/maps/Route113/scripts.pory"
	playse SE_PIN
# 6 "data/maps/Route113/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 7 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 8 "data/maps/Route113/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 9 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 10 "data/maps/Route113/scripts.pory"
	goto Route113_EventScript_Cheryl
# 11 "data/maps/Route113/scripts.pory"
	release
	end


Route113_EventScript_Cheryl::
# 16 "data/maps/Route113/scripts.pory"
	lock
# 17 "data/maps/Route113/scripts.pory"
	faceplayer
# 18 "data/maps/Route113/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 19 "data/maps/Route113/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, TRAINER_CHERYL_ROUTE_113, 18, Route113_Text_CherylIntro, Route113_EventScript_CherylDefeat, Route113_EventScript_CherylDefeated
# 20 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Cheryl_Text_0
# 23 "data/maps/Route113/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 24 "data/maps/Route113/scripts.pory"
	release
	end


# 45 "data/maps/Route113/scripts.pory"
Route113_Movement_FaceUp:
# 46 "data/maps/Route113/scripts.pory"
	face_up
# 47 "data/maps/Route113/scripts.pory"
	step_end

Route113_EventScript_CherylDefeated::
# 51 "data/maps/Route113/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 52 "data/maps/Route113/scripts.pory"
	msgbox Route113_EventScript_Cheryl_Text_0
# 55 "data/maps/Route113/scripts.pory"
	setflag FLAG_DEFEATED_CHERYL
# 56 "data/maps/Route113/scripts.pory"
	setvar VAR_STAT_TRAINERS_STATE, 2
# 57 "data/maps/Route113/scripts.pory"
	release
	end


# 61 "data/maps/Route113/scripts.pory"

# 62 "data/maps/Route113/scripts.pory"
Route113_MapScripts::
# 63 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 64 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
# 65 "data/maps/Route113/scripts.pory"
	.byte 0
# 66 "data/maps/Route113/scripts.pory"

# 67 "data/maps/Route113/scripts.pory"
Route113_OnResume:
# 68 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
# 69 "data/maps/Route113/scripts.pory"
	end
# 70 "data/maps/Route113/scripts.pory"

# 71 "data/maps/Route113/scripts.pory"
Route113_OnTransition:
# 72 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 73 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
# 74 "data/maps/Route113/scripts.pory"
	end
# 75 "data/maps/Route113/scripts.pory"

# 76 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather::
# 77 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 78 "data/maps/Route113/scripts.pory"
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
# 79 "data/maps/Route113/scripts.pory"
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
# 80 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 81 "data/maps/Route113/scripts.pory"
	return
# 82 "data/maps/Route113/scripts.pory"

# 83 "data/maps/Route113/scripts.pory"
Route113_EventScript_DontSetAshWeather::
# 84 "data/maps/Route113/scripts.pory"
	return
# 85 "data/maps/Route113/scripts.pory"

# 86 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 87 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 88 "data/maps/Route113/scripts.pory"
	end
# 89 "data/maps/Route113/scripts.pory"

# 90 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 91 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 92 "data/maps/Route113/scripts.pory"
	end
# 93 "data/maps/Route113/scripts.pory"

# 94 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 95 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 96 "data/maps/Route113/scripts.pory"
	end
# 97 "data/maps/Route113/scripts.pory"

# 98 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 99 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 100 "data/maps/Route113/scripts.pory"
	end
# 101 "data/maps/Route113/scripts.pory"

# 102 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 103 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 104 "data/maps/Route113/scripts.pory"
	end
# 105 "data/maps/Route113/scripts.pory"

# 106 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 107 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 108 "data/maps/Route113/scripts.pory"
	end
# 109 "data/maps/Route113/scripts.pory"

# 110 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 111 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 112 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route113/scripts.pory"
	end
# 114 "data/maps/Route113/scripts.pory"

# 115 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 116 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 117 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route113/scripts.pory"
	end
# 119 "data/maps/Route113/scripts.pory"

# 120 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline::
# 121 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 122 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
# 124 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 125 "data/maps/Route113/scripts.pory"
	release
# 126 "data/maps/Route113/scripts.pory"
	end
# 127 "data/maps/Route113/scripts.pory"

# 128 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 129 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 130 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 131 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 132 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 133 "data/maps/Route113/scripts.pory"
	release
# 134 "data/maps/Route113/scripts.pory"
	end
# 135 "data/maps/Route113/scripts.pory"

# 136 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 137 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 138 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 139 "data/maps/Route113/scripts.pory"
	end
# 140 "data/maps/Route113/scripts.pory"

# 141 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 142 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 143 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 144 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
# 145 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 146 "data/maps/Route113/scripts.pory"
	release
# 147 "data/maps/Route113/scripts.pory"
	end
# 148 "data/maps/Route113/scripts.pory"

# 149 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 150 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 151 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 153 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 154 "data/maps/Route113/scripts.pory"
	release
# 155 "data/maps/Route113/scripts.pory"
	end
# 156 "data/maps/Route113/scripts.pory"

# 157 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 158 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 159 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route113/scripts.pory"
	end
# 161 "data/maps/Route113/scripts.pory"

# 162 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 163 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 164 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route113/scripts.pory"
	end
# 166 "data/maps/Route113/scripts.pory"

# 167 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 168 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 169 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route113/scripts.pory"
	end
# 171 "data/maps/Route113/scripts.pory"

# 172 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 173 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 174 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route113/scripts.pory"
	end
# 176 "data/maps/Route113/scripts.pory"

# 177 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 178 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 179 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/Route113/scripts.pory"
	end
# 181 "data/maps/Route113/scripts.pory"

# 182 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 183 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 184 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 185 "data/maps/Route113/scripts.pory"
	end
# 186 "data/maps/Route113/scripts.pory"

# 187 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 188 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 189 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 190 "data/maps/Route113/scripts.pory"
	end
# 191 "data/maps/Route113/scripts.pory"

# 192 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 193 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 194 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 195 "data/maps/Route113/scripts.pory"
	end
# 196 "data/maps/Route113/scripts.pory"

# 197 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass:
# 198 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 199 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 200 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 201 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 202 "data/maps/Route113/scripts.pory"

# 203 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh:
# 204 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 205 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 206 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 207 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 208 "data/maps/Route113/scripts.pory"

# 209 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111:
# 210 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 211 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 111$"
# 212 "data/maps/Route113/scripts.pory"

# 213 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor:
# 214 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 215 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"
# 216 "data/maps/Route113/scripts.pory"

# 217 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems:
# 218 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
# 219 "data/maps/Route113/scripts.pory"
	.string "You may register one of the KEY ITEMS\n"
# 220 "data/maps/Route113/scripts.pory"
	.string "in your BAG as SELECT.\p"
# 221 "data/maps/Route113/scripts.pory"
	.string "Simply press SELECT to use\n"
# 222 "data/maps/Route113/scripts.pory"
	.string "the registered item conveniently.$"
# 223 "data/maps/Route113/scripts.pory"

# 224 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign:
# 225 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
# 226 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_EventScript_Cheryl_Text_0:
# 20 "data/maps/Route113/scripts.pory"
	.string "Battling isn't easy.\p"
	.string "You have a bright future ahead of you,\n"
	.string "{PLAYER}.$"

Route113_Text_CherylIntro::
# 28 "data/maps/Route113/scripts.pory"
	.string "Hello there, my name is Cheryl.\n"
	.string "And you are?\p"
	.string "I wanted to visit the Hot Springs in\n"
	.string "Lavaridge Town, but all this soot is in\l"
	.string "the way…\p"
	.string "I value my health a lot, which is why I\n"
	.string "fight with Pokémon that have a high HP\l"
	.string "stat!\p"
	.string "Would you like to keep me company with\n"
	.string "a battle?$"

Route113_EventScript_CherylDefeat::
# 41 "data/maps/Route113/scripts.pory"
	.string "I can't keep up with healing…$"
