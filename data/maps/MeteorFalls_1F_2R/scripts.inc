# 1 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_MapScripts::
# 3 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 5 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas::
# 6 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat
# 7 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
# 8 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 9 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 10 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 11 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterNicolas::
# 12 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 13 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	waitmovement 0
# 14 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
# 15 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_NICOLAS_1
# 16 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 17 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 18 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 19 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchNicolas::
# 20 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
# 21 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
# 22 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 23 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 24 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John::
# 25 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons
# 26 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
# 27 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 28 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 29 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJohn::
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 34 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJohn::
# 37 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
# 38 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
# 39 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 40 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay::
# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
# 44 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 45 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 46 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 47 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJay::
# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 50 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 51 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 52 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 53 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJay::
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 58 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasIntro:
# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "This is where we Dragon users do our\n"
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "training.\p"
# 61 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The Champion even visits.\n"
# 62 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Now do you see how special it is here?$"
# 63 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 64 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasDefeat:
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 68 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostBattle:
# 69 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The road ahead remains long and harsh.\p"
# 70 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "When will my Pokémon and I become\n"
# 71 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "the best?$"
# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRegister:
# 74 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I want to know more about your power.\n"
# 75 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Let me register you in my Pokénav.$"
# 76 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchIntro:
# 78 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Since we met, we have trained hard\n"
# 79 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "with our sights on number one.\p"
# 80 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Help us see how much stronger we've\n"
# 81 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "become!$"
# 82 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 83 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 85 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 86 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 87 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostRematch:
# 88 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "You've obviously kept up your\n"
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Pokémon training.\p"
# 90 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "So long as you remain strong, I, too,\n"
# 91 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "can become stronger!$"
# 92 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 93 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnIntro:
# 94 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: We've always battled Pokémon\n"
# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 96 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 97 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 98 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnDefeat:
# 99 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: Oh, my.\n"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 101 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 102 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostBattle:
# 103 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: We've been married for\n"
# 104 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 105 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Come to think of it, I've yet to beat\n"
# 106 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "my dear wife in a battle.$"
# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 108 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
# 109 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\p"
# 110 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 111 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more Pokémon.$"
# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 113 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRegister:
# 114 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Young TRAINER, if the chance\n"
# 115 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "arises, will you battle with us again?$"
# 116 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 117 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayIntro:
# 118 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: We've been married for\n"
# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 120 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The bond we share as a couple could\n"
# 121 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "never be broken.$"
# 122 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 123 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayDefeat:
# 124 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Oh, dear.\n"
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 126 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 127 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostBattle:
# 128 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Fifty years of marriage…\p"
# 129 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If we ever argued, we always settled\n"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "it with a Pokémon battle…$"
# 131 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 132 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayNotEnoughMons:
# 133 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Well, well, aren't you a young\n"
# 134 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Trainer?\p"
# 135 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 136 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more Pokémon.$"
# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 138 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchIntro:
# 139 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: We've always battled Pokémon\n"
# 140 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 141 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 142 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchDefeat:
# 144 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Oh, my.\n"
# 145 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 146 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 147 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostRematch:
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Married for fifty years…\p"
# 149 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "On reflection, the dear wife and I,\n"
# 150 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "we battled day in and day out…$"
# 151 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 152 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
# 153 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\p"
# 154 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more Pokémon.$"
# 156 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 157 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchIntro:
# 158 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: We've been married for\n"
# 159 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've supported each other all that\n"
# 161 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "time. We've made ourselves strong.$"
# 162 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 163 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchDefeat:
# 164 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Oh, dear.\n"
# 165 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 167 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostRematch:
# 168 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Fifty years of marriage…\n"
# 169 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Many things have happened.\p"
# 170 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I hope that we will continue to make\n"
# 171 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "happy memories together.$"
# 172 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
# 174 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Well, well, aren't you a young\n"
# 175 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "TRAINER?\p"
# 176 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 177 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more Pokémon.$"
