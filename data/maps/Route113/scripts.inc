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
	msgbox Route113_EventScript_CherylDefeated_Text_0
# 56 "data/maps/Route113/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 57 "data/maps/Route113/scripts.pory"
	setflag FLAG_DEFEATED_CHERYL
# 58 "data/maps/Route113/scripts.pory"
	setvar VAR_STAT_TRAINERS_STATE, 2
# 59 "data/maps/Route113/scripts.pory"
	release
	end


# 63 "data/maps/Route113/scripts.pory"

# 64 "data/maps/Route113/scripts.pory"
Route113_MapScripts::
# 65 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
# 66 "data/maps/Route113/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
# 67 "data/maps/Route113/scripts.pory"
	.byte 0
# 68 "data/maps/Route113/scripts.pory"

# 69 "data/maps/Route113/scripts.pory"
Route113_OnResume:
# 70 "data/maps/Route113/scripts.pory"
	setstepcallback STEP_CB_ASH
# 71 "data/maps/Route113/scripts.pory"
	end
# 72 "data/maps/Route113/scripts.pory"

# 73 "data/maps/Route113/scripts.pory"
Route113_OnTransition:
# 74 "data/maps/Route113/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 75 "data/maps/Route113/scripts.pory"
	call Route113_EventScript_CheckSetAshWeather
# 76 "data/maps/Route113/scripts.pory"
	end
# 77 "data/maps/Route113/scripts.pory"

# 78 "data/maps/Route113/scripts.pory"
Route113_EventScript_CheckSetAshWeather::
# 79 "data/maps/Route113/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 80 "data/maps/Route113/scripts.pory"
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
# 81 "data/maps/Route113/scripts.pory"
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
# 82 "data/maps/Route113/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 83 "data/maps/Route113/scripts.pory"
	return
# 84 "data/maps/Route113/scripts.pory"

# 85 "data/maps/Route113/scripts.pory"
Route113_EventScript_DontSetAshWeather::
# 86 "data/maps/Route113/scripts.pory"
	return
# 87 "data/maps/Route113/scripts.pory"

# 88 "data/maps/Route113/scripts.pory"
Route113_EventScript_Gentleman::
# 89 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_AshCanBeFashionedIntoGlass, MSGBOX_NPC
# 90 "data/maps/Route113/scripts.pory"
	end
# 91 "data/maps/Route113/scripts.pory"

# 92 "data/maps/Route113/scripts.pory"
Route113_EventScript_NinjaBoy::
# 93 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_FunWalkingThroughAsh, MSGBOX_NPC
# 94 "data/maps/Route113/scripts.pory"
	end
# 95 "data/maps/Route113/scripts.pory"

# 96 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSign111::
# 97 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSign111, MSGBOX_SIGN
# 98 "data/maps/Route113/scripts.pory"
	end
# 99 "data/maps/Route113/scripts.pory"

# 100 "data/maps/Route113/scripts.pory"
Route113_EventScript_RouteSignFallarbor::
# 101 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_RouteSignFallarbor, MSGBOX_SIGN
# 102 "data/maps/Route113/scripts.pory"
	end
# 103 "data/maps/Route113/scripts.pory"

# 104 "data/maps/Route113/scripts.pory"
Route113_EventScript_GlassWorkshopSign::
# 105 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_GlassWorkshopSign, MSGBOX_SIGN
# 106 "data/maps/Route113/scripts.pory"
	end
# 107 "data/maps/Route113/scripts.pory"

# 108 "data/maps/Route113/scripts.pory"
Route113_EventScript_TrainerTipsRegisterKeyItems::
# 109 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TrainerTipsRegisterKeyItems, MSGBOX_SIGN
# 110 "data/maps/Route113/scripts.pory"
	end
# 111 "data/maps/Route113/scripts.pory"

# 112 "data/maps/Route113/scripts.pory"
Route113_EventScript_Jaylen::
# 113 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, Route113_Text_JaylenIntro, Route113_Text_JaylenDefeat
# 114 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route113/scripts.pory"
	end
# 116 "data/maps/Route113/scripts.pory"

# 117 "data/maps/Route113/scripts.pory"
Route113_EventScript_Dillon::
# 118 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_DILLON, Route113_Text_DillonIntro, Route113_Text_DillonDefeat
# 119 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route113/scripts.pory"
	end
# 121 "data/maps/Route113/scripts.pory"

# 122 "data/maps/Route113/scripts.pory"
Route113_EventScript_Madeline::
# 123 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_MADELINE_1, Route113_Text_MadelineIntro, Route113_Text_MadelineDefeat, Route113_EventScript_RegisterMadeline
# 124 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 125 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchMadeline
# 126 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostBattle, MSGBOX_DEFAULT
# 127 "data/maps/Route113/scripts.pory"
	release
# 128 "data/maps/Route113/scripts.pory"
	end
# 129 "data/maps/Route113/scripts.pory"

# 130 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterMadeline::
# 131 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 132 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 133 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelineRegister, MSGBOX_DEFAULT
# 134 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_MADELINE_1
# 135 "data/maps/Route113/scripts.pory"
	release
# 136 "data/maps/Route113/scripts.pory"
	end
# 137 "data/maps/Route113/scripts.pory"

# 138 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchMadeline::
# 139 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_MADELINE_1, Route113_Text_MadelineRematchIntro, Route113_Text_MadelineRematchDefeat
# 140 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_MadelinePostRematch, MSGBOX_AUTOCLOSE
# 141 "data/maps/Route113/scripts.pory"
	end
# 142 "data/maps/Route113/scripts.pory"

# 143 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lao::
# 144 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAO_1, Route113_Text_LaoIntro, Route113_Text_LaoDefeat, Route113_EventScript_RegisterLao
# 145 "data/maps/Route113/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 146 "data/maps/Route113/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route113_EventScript_RematchLao
# 147 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostBattle, MSGBOX_DEFAULT
# 148 "data/maps/Route113/scripts.pory"
	release
# 149 "data/maps/Route113/scripts.pory"
	end
# 150 "data/maps/Route113/scripts.pory"

# 151 "data/maps/Route113/scripts.pory"
Route113_EventScript_RegisterLao::
# 152 "data/maps/Route113/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 153 "data/maps/Route113/scripts.pory"
	waitmovement 0
# 154 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoRegister, MSGBOX_DEFAULT
# 155 "data/maps/Route113/scripts.pory"
	register_matchcall TRAINER_LAO_1
# 156 "data/maps/Route113/scripts.pory"
	release
# 157 "data/maps/Route113/scripts.pory"
	end
# 158 "data/maps/Route113/scripts.pory"

# 159 "data/maps/Route113/scripts.pory"
Route113_EventScript_RematchLao::
# 160 "data/maps/Route113/scripts.pory"
	trainerbattle_rematch TRAINER_LAO_1, Route113_Text_LaoRematchIntro, Route113_Text_LaoRematchDefeat
# 161 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LaoPostRematch, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route113/scripts.pory"
	end
# 163 "data/maps/Route113/scripts.pory"

# 164 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lung::
# 165 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LUNG, Route113_Text_LungIntro, Route113_Text_LungDefeat
# 166 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LungPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route113/scripts.pory"
	end
# 168 "data/maps/Route113/scripts.pory"

# 169 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tori::
# 170 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_ToriIntro, Route113_Text_ToriDefeat, Route113_Text_ToriNotEnoughMons
# 171 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_ToriPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route113/scripts.pory"
	end
# 173 "data/maps/Route113/scripts.pory"

# 174 "data/maps/Route113/scripts.pory"
Route113_EventScript_Tia::
# 175 "data/maps/Route113/scripts.pory"
	trainerbattle_double TRAINER_TORI_AND_TIA, Route113_Text_TiaIntro, Route113_Text_TiaDefeat, Route113_Text_TiaNotEnoughMons
# 176 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_TiaPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route113/scripts.pory"
	end
# 178 "data/maps/Route113/scripts.pory"

# 179 "data/maps/Route113/scripts.pory"
Route113_EventScript_Sophie::
# 180 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_SOPHIE, Route113_Text_SophieIntro, Route113_Text_SophieDefeat
# 181 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_SophiePostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route113/scripts.pory"
	end
# 183 "data/maps/Route113/scripts.pory"

# 184 "data/maps/Route113/scripts.pory"
Route113_EventScript_Coby::
# 185 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_COBY, Route113_Text_CobyIntro, Route113_Text_CobyDefeat
# 186 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_CobyPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route113/scripts.pory"
	end
# 188 "data/maps/Route113/scripts.pory"

# 189 "data/maps/Route113/scripts.pory"
Route113_EventScript_Lawrence::
# 190 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_LAWRENCE, Route113_Text_LawrenceIntro, Route113_Text_LawrenceDefeat
# 191 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_LawrencePostBattle, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route113/scripts.pory"
	end
# 193 "data/maps/Route113/scripts.pory"

# 194 "data/maps/Route113/scripts.pory"
Route113_EventScript_Wyatt::
# 195 "data/maps/Route113/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Route113_Text_WyattIntro, Route113_Text_WyattDefeat
# 196 "data/maps/Route113/scripts.pory"
	msgbox Route113_Text_WyattPostBattle, MSGBOX_AUTOCLOSE
# 197 "data/maps/Route113/scripts.pory"
	end
# 198 "data/maps/Route113/scripts.pory"

# 199 "data/maps/Route113/scripts.pory"
Route113_Text_AshCanBeFashionedIntoGlass:
# 200 "data/maps/Route113/scripts.pory"
	.string "Wahahaha! Today's technology is a\n"
# 201 "data/maps/Route113/scripts.pory"
	.string "wondrous thing!\p"
# 202 "data/maps/Route113/scripts.pory"
	.string "Take this volcanic ash here.\n"
# 203 "data/maps/Route113/scripts.pory"
	.string "It can be fashioned into glass.$"
# 204 "data/maps/Route113/scripts.pory"

# 205 "data/maps/Route113/scripts.pory"
Route113_Text_FunWalkingThroughAsh:
# 206 "data/maps/Route113/scripts.pory"
	.string "It's fun walking through the volcano's\n"
# 207 "data/maps/Route113/scripts.pory"
	.string "ashes on the ground and grass.\p"
# 208 "data/maps/Route113/scripts.pory"
	.string "You can see where you walked--it's\n"
# 209 "data/maps/Route113/scripts.pory"
	.string "really neat!$"
# 210 "data/maps/Route113/scripts.pory"

# 211 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSign111:
# 212 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 213 "data/maps/Route113/scripts.pory"
	.string "{RIGHT_ARROW} ROUTE 111$"
# 214 "data/maps/Route113/scripts.pory"

# 215 "data/maps/Route113/scripts.pory"
Route113_Text_RouteSignFallarbor:
# 216 "data/maps/Route113/scripts.pory"
	.string "ROUTE 113\n"
# 217 "data/maps/Route113/scripts.pory"
	.string "{LEFT_ARROW} FALLARBOR TOWN$"
# 218 "data/maps/Route113/scripts.pory"

# 219 "data/maps/Route113/scripts.pory"
Route113_Text_TrainerTipsRegisterKeyItems:
# 220 "data/maps/Route113/scripts.pory"
	.string "TRAINER TIPS\p"
# 221 "data/maps/Route113/scripts.pory"
	.string "You may register one of the KEY ITEMS\n"
# 222 "data/maps/Route113/scripts.pory"
	.string "in your BAG as SELECT.\p"
# 223 "data/maps/Route113/scripts.pory"
	.string "Simply press SELECT to use\n"
# 224 "data/maps/Route113/scripts.pory"
	.string "the registered item conveniently.$"
# 225 "data/maps/Route113/scripts.pory"

# 226 "data/maps/Route113/scripts.pory"
Route113_Text_GlassWorkshopSign:
# 227 "data/maps/Route113/scripts.pory"
	.string "GLASS WORKSHOP\n"
# 228 "data/maps/Route113/scripts.pory"
	.string "“Turning Volcanic Ash into Glass Items”$"

Route113_EventScript_Cheryl_Text_0:
# 20 "data/maps/Route113/scripts.pory"
	.string "Battling isn't easy.\p"
	.string "You have a bright future ahead of you,\n"
	.string "{PLAYER}.$"

Route113_EventScript_CherylDefeated_Text_0:
# 52 "data/maps/Route113/scripts.pory"
	.string "Battling isn't easy.\p"
	.string "You have a bright future ahead of you,\n"
	.string "{PLAYER}.\p"
	.string "You should take this, too.$"

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
