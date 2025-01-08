SpiralCave_MapScripts::
	.byte 0


SpiralCave_EventScript_Marc::
# 4 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_single TRAINER_MARC, SpiralCave_Text_MarcIntro, SpiralCave_Text_MarcDefeat
# 5 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralCave_EventScript_Eli::
# 24 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_single TRAINER_ELI, SpiralCave_Text_EliIntro, SpiralCave_Text_EliDefeat
# 25 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralCave_EventScript_Dillon::
# 46 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_single TRAINER_DILLON, SpiralCave_Text_DillonIntro, SpiralCave_Text_DillonDefeat
# 47 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_DillonPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralCave_EventScript_Jaylen::
# 65 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_single TRAINER_JAYLEN, SpiralCave_Text_JaylenIntro, SpiralCave_Text_JaylenDefeat
# 66 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_JaylenPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralCave_EventScript_Amy::
# 87 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_single TRAINER_AMY_AND_LIV_1, SpiralCave_Text_AmyIntro, SpiralCave_Text_AmyDefeat
# 88 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralCave_EventScript_Liv::
# 109 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_single TRAINER_AMY_AND_LIV_1, SpiralCave_Text_LivIntro, SpiralCave_Text_LivDefeat
# 110 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end


SpiralCave_EventScript_Wally::
# 130 "data/maps/SpiralCave/scripts.pory"
	lock
# 131 "data/maps/SpiralCave/scripts.pory"
	faceplayer
# 132 "data/maps/SpiralCave/scripts.pory"
	goto_if_unset FLAG_DEFEATED_WALLY, SpiralCave_EventScript_Wally_2
SpiralCave_EventScript_Wally_1:
# 147 "data/maps/SpiralCave/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY, SpiralCave_EventScript_Wally_5
SpiralCave_EventScript_Wally_4:
# 150 "data/maps/SpiralCave/scripts.pory"
	releaseall
	end

SpiralCave_EventScript_Wally_2:
# 133 "data/maps/SpiralCave/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 134 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_WallyIntro
# 135 "data/maps/SpiralCave/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, SpiralCave_Text_WallyDefeat
# 136 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_WallyPostBattle
# 137 "data/maps/SpiralCave/scripts.pory"
	setflag FLAG_DEFEATED_WALLY
# 138 "data/maps/SpiralCave/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 139 "data/maps/SpiralCave/scripts.pory"
	playfanfare MUS_DP_OBTAIN_BADGE
# 140 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_EventScript_Wally_Text_0
# 141 "data/maps/SpiralCave/scripts.pory"
	waitmessage
# 142 "data/maps/SpiralCave/scripts.pory"
	waitfanfare
# 143 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_Text_WallyRewards
# 144 "data/maps/SpiralCave/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 145 "data/maps/SpiralCave/scripts.pory"
	giveitem ITEM_TM_DEFOG
	goto SpiralCave_EventScript_Wally_1

SpiralCave_EventScript_Wally_5:
# 148 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_EventScript_Wally_Text_1
	goto SpiralCave_EventScript_Wally_4


SpiralCave_EventScript_Ralts::
# 177 "data/maps/SpiralCave/scripts.pory"
	lock
# 178 "data/maps/SpiralCave/scripts.pory"
	faceplayer
# 179 "data/maps/SpiralCave/scripts.pory"
	msgbox SpiralCave_EventScript_Ralts_Text_0
# 180 "data/maps/SpiralCave/scripts.pory"
	releaseall
	end


# 184 "data/maps/SpiralCave/scripts.pory"

# 185 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_MapScripts::
# 186 "data/maps/SpiralCave/scripts.pory"
	.byte 0
# 187 "data/maps/SpiralCave/scripts.pory"

# 188 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 189 "data/maps/SpiralCave/scripts.pory"
	lock
# 190 "data/maps/SpiralCave/scripts.pory"
	faceplayer
# 191 "data/maps/SpiralCave/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 192 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 193 "data/maps/SpiralCave/scripts.pory"
	giveitem ITEM_HM_FLASH
# 194 "data/maps/SpiralCave/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 195 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 196 "data/maps/SpiralCave/scripts.pory"
	release
# 197 "data/maps/SpiralCave/scripts.pory"
	end
# 198 "data/maps/SpiralCave/scripts.pory"

# 199 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 200 "data/maps/SpiralCave/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 201 "data/maps/SpiralCave/scripts.pory"
	release
# 202 "data/maps/SpiralCave/scripts.pory"
	end
# 203 "data/maps/SpiralCave/scripts.pory"

# 204 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 205 "data/maps/SpiralCave/scripts.pory"
	.string "Hey, you.\n"
# 206 "data/maps/SpiralCave/scripts.pory"
	.string "It gets awfully dark ahead.\l"
# 207 "data/maps/SpiralCave/scripts.pory"
	.string "It'll be tough trying to explore.\p"
# 208 "data/maps/SpiralCave/scripts.pory"
	.string "That guy who came by earlier…\n"
# 209 "data/maps/SpiralCave/scripts.pory"
	.string "STEVEN, I think it was.\p"
# 210 "data/maps/SpiralCave/scripts.pory"
	.string "He knew how to use FLASH, so he ought\n"
# 211 "data/maps/SpiralCave/scripts.pory"
	.string "to be all right, but…\p"
# 212 "data/maps/SpiralCave/scripts.pory"
	.string "Well, for us HIKERS, helping out those\n"
# 213 "data/maps/SpiralCave/scripts.pory"
	.string "that we meet is our motto.\p"
# 214 "data/maps/SpiralCave/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 215 "data/maps/SpiralCave/scripts.pory"

# 216 "data/maps/SpiralCave/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 217 "data/maps/SpiralCave/scripts.pory"
	.string "Teach that hidden move FLASH to\n"
# 218 "data/maps/SpiralCave/scripts.pory"
	.string "a POKéMON and use it.\p"
# 219 "data/maps/SpiralCave/scripts.pory"
	.string "It lights up even the inky darkness\n"
# 220 "data/maps/SpiralCave/scripts.pory"
	.string "of caves.\p"
# 221 "data/maps/SpiralCave/scripts.pory"
	.string "But, to use it, you need the GYM BADGE\n"
# 222 "data/maps/SpiralCave/scripts.pory"
	.string "from DEWFORD's POKéMON GYM.$"

SpiralCave_EventScript_Wally_Text_0:
# 140 "data/maps/SpiralCave/scripts.pory"
	.string "Cleared the Spiral Island trial!$"

SpiralCave_EventScript_Wally_Text_1:
# 148 "data/maps/SpiralCave/scripts.pory"
	.string "Defog lets you remove hazards and\n"
	.string "lower evasion, it's very handy!$"

SpiralCave_EventScript_Ralts_Text_0:
# 179 "data/maps/SpiralCave/scripts.pory"
	.string "...$"

SpiralCave_Text_MarcIntro::
# 9 "data/maps/SpiralCave/scripts.pory"
	.string "My Rock Pokémon need room to rampage!$"

SpiralCave_Text_MarcDefeat::
# 13 "data/maps/SpiralCave/scripts.pory"
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

SpiralCave_Text_MarcPostBattle::
# 18 "data/maps/SpiralCave/scripts.pory"
	.string "I have to hand it to our Leader.\p"
	.string "His battling skills are formidable!$"

SpiralCave_Text_EliIntro::
# 29 "data/maps/SpiralCave/scripts.pory"
	.string "As much as I love mountains,\n"
	.string "I especially love volcanoes.$"

SpiralCave_Text_EliDefeat::
# 34 "data/maps/SpiralCave/scripts.pory"
	.string "Well, it seems to me I lost without\n"
	.string "ever being in control.$"

SpiralCave_Text_EliPostBattle::
# 39 "data/maps/SpiralCave/scripts.pory"
	.string "I stay here because I became a fan\n"
	.string "of Wally's power.\p"
	.string "Hehehehe.$"

SpiralCave_Text_DillonIntro::
# 51 "data/maps/SpiralCave/scripts.pory"
	.string "Be very wary of my trapping techniques!$"

SpiralCave_Text_DillonDefeat::
# 55 "data/maps/SpiralCave/scripts.pory"
	.string "You're some kind of strong!$"

SpiralCave_Text_DillonPostBattle::
# 59 "data/maps/SpiralCave/scripts.pory"
	.string "Ouch! Owww! I can't see!\n"
	.string "I got dust in my eyes!$"

SpiralCave_Text_JaylenIntro::
# 70 "data/maps/SpiralCave/scripts.pory"
	.string "Can you guess why it's so cool\n"
	.string "around here?$"

SpiralCave_Text_JaylenDefeat::
# 75 "data/maps/SpiralCave/scripts.pory"
	.string "Peeuuw!\n"
	.string "That stinks!$"

SpiralCave_Text_JaylenPostBattle::
# 80 "data/maps/SpiralCave/scripts.pory"
	.string "We're deep underground,\n"
	.string "so it doesn't get very warm.\p"
	.string "That's good for me--I can't stand heat!$"

SpiralCave_Text_AmyIntro::
# 92 "data/maps/SpiralCave/scripts.pory"
	.string "Amy: I'm Amy.\n"
	.string "And this is my little sister Liv.\l"
	.string "We battle together!$"

SpiralCave_Text_AmyDefeat::
# 98 "data/maps/SpiralCave/scripts.pory"
	.string "Amy: Uh-oh, we lost.$"

SpiralCave_Text_AmyPostBattle::
# 102 "data/maps/SpiralCave/scripts.pory"
	.string "Amy: You have to think about all\n"
	.string "kinds of things when you're battling\l"
	.string "against two Trainers.$"

SpiralCave_Text_LivIntro::
# 114 "data/maps/SpiralCave/scripts.pory"
	.string "Liv: We battle together as one\n"
	.string "team.$"

SpiralCave_Text_LivDefeat::
# 119 "data/maps/SpiralCave/scripts.pory"
	.string "Liv: Oh, we lost, big sister…$"

SpiralCave_Text_LivPostBattle::
# 123 "data/maps/SpiralCave/scripts.pory"
	.string "Liv: We work perfectly together,\n"
	.string "me and my big sister…\p"
	.string "But we still lost…$"

SpiralCave_Text_WallyIntro::
# 154 "data/maps/SpiralCave/scripts.pory"
	.string "Hi there, my name's Wally!\n"
	.string "I traveled here from the hoenn region.\p"
	.string "I was appointed as the trial captain of\n"
	.string "this island because my team was the\l"
	.string "perfect fit for this cave's field\l"
	.string "effect.\p"
	.string "Oh, my Ralts? It's not ready for battle\n"
	.string "yet.\p"
	.string "Lets go!$"

SpiralCave_Text_WallyPostBattle::
# 162 "data/maps/SpiralCave/scripts.pory"
	.string "Wow, your potential reminds me of the\n"
	.string "trainer who helped me catch my first\l"
	.string "Pokémon.\p"
	.string "I have a feeling you'll go a long way.$"

SpiralCave_Text_WallyRewards::
# 167 "data/maps/SpiralCave/scripts.pory"
	.string "The level cap is now 23, and you can now\n"
	.string "access all of this islands' Move Tutors\l"
	.string "with the L menu.\p"
	.string "Take these with you as well$"

SpiralCave_Text_WallyDefeat::
# 172 "data/maps/SpiralCave/scripts.pory"
	.string "I lost…$"
