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
	release
# 27 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 28 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 29 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJohn::
# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 34 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJohn::
# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
# 37 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
# 38 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 39 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 40 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay::
# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons
# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 44 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 45 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 46 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJay::
# 47 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 50 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 51 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 52 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJay::
# 53 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasIntro:
# 58 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "This is where we DRAGON users do our\n"
# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "training.\p"
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The CHAMPION even visits.\n"
# 61 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Now do you see how special it is here?$"
# 62 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 63 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasDefeat:
# 64 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostBattle:
# 68 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The road ahead remains long and harsh.\p"
# 69 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "When will my POKéMON and I become\n"
# 70 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "the best?$"
# 71 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRegister:
# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I want to know more about your power.\n"
# 74 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Let me register you in my POKéNAV.$"
# 75 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 76 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchIntro:
# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Since we met, we have trained hard\n"
# 78 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "with our sights on number one.\p"
# 79 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Help us see how much stronger we've\n"
# 80 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "become!$"
# 81 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 82 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchDefeat:
# 83 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 85 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 86 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostRematch:
# 87 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "You've obviously kept up your\n"
# 88 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "POKéMON training.\p"
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "So long as you remain strong, I, too,\n"
# 90 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "can become stronger!$"
# 91 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 92 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnIntro:
# 93 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: We've always battled POKéMON\n"
# 94 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 96 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 97 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnDefeat:
# 98 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Oh, my.\n"
# 99 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 101 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostBattle:
# 102 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: We've been married for\n"
# 103 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 104 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Come to think of it, I've yet to beat\n"
# 105 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "my dear wife in a battle.$"
# 106 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnNotEnoughMons:
# 108 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\p"
# 109 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 110 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more POKéMON.$"
# 111 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRegister:
# 113 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Young TRAINER, if the chance\n"
# 114 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "arises, will you battle with us again?$"
# 115 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 116 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayIntro:
# 117 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: We've been married for\n"
# 118 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The bond we share as a couple could\n"
# 120 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "never be broken.$"
# 121 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 122 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayDefeat:
# 123 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Oh, dear.\n"
# 124 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 126 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostBattle:
# 127 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Fifty years of marriage…\p"
# 128 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If we ever argued, we always settled\n"
# 129 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "it with a POKéMON battle…$"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 131 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayNotEnoughMons:
# 132 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Well, well, aren't you a young\n"
# 133 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "TRAINER?\p"
# 134 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 135 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more POKéMON.$"
# 136 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchIntro:
# 138 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: We've always battled POKéMON\n"
# 139 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 140 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 141 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 142 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchDefeat:
# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Oh, my.\n"
# 144 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 145 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 146 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostRematch:
# 147 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Married for fifty years…\p"
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "On reflection, the dear wife and I,\n"
# 149 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "we battled day in and day out…$"
# 150 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 151 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons:
# 152 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JOHN: Well, well, what a young TRAINER!\p"
# 153 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 154 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more POKéMON.$"
# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 156 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchIntro:
# 157 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: We've been married for\n"
# 158 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 159 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've supported each other all that\n"
# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "time. We've made ourselves strong.$"
# 161 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 162 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchDefeat:
# 163 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Oh, dear.\n"
# 164 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 165 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostRematch:
# 167 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Fifty years of marriage…\n"
# 168 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Many things have happened.\p"
# 169 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I hope that we will continue to make\n"
# 170 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "happy memories together.$"
# 171 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 172 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons:
# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "JAY: Well, well, aren't you a young\n"
# 174 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "TRAINER?\p"
# 175 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 176 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more POKéMON.$"
