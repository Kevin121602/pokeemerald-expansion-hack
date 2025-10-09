# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts::
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne::
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 13 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 14 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 15 "data/maps/RustboroCity_Gym/scripts.pory"

# 16 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated::
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 1
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 1
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 33 "data/maps/RustboroCity_Gym/scripts.pory"

# 34 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTombGiveOtherItems, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveFloatStone
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 42 "data/maps/RustboroCity_Gym/scripts.pory"

# 43 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveFloatStone::
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_FLOAT_STONE
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainFloatStoneAndHeartScales, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 50 "data/maps/RustboroCity_Gym/scripts.pory"

# 51 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 55 "data/maps/RustboroCity_Gym/scripts.pory"

# 56 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 60 "data/maps/RustboroCity_Gym/scripts.pory"

# 61 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Gym/scripts.pory"

# 66 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 70 "data/maps/RustboroCity_Gym/scripts.pory"

# 71 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 78 "data/maps/RustboroCity_Gym/scripts.pory"

# 79 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 83 "data/maps/RustboroCity_Gym/scripts.pory"

# 84 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 89 "data/maps/RustboroCity_Gym/scripts.pory"

# 90 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 95 "data/maps/RustboroCity_Gym/scripts.pory"

# 96 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 100 "data/maps/RustboroCity_Gym/scripts.pory"

# 101 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 105 "data/maps/RustboroCity_Gym/scripts.pory"

# 106 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 120 "data/maps/RustboroCity_Gym/scripts.pory"

# 121 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no Trainer, not me, but I can\n"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Every Gym in the Hoenn region will\n"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "heal the player before each battle,\p"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and every Gym in the Hoenn region has\n"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a particular Field Effect.\p"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Here in Rustboro, all Rock, Ground,\n"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "and Steel-type attacks that effect\l"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "stats will have their effect doubled!\p"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "How cool is that?\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"

# 137 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your Trainer Card.\p"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge you got should be\n"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 144 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the Championship!\p"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"

# 149 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly!\n"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"

# 153 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Rock\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against Roxanne!$"
# 163 "data/maps/RustboroCity_Gym/scripts.pory"

# 164 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"

# 167 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is stronger than me by\n"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 171 "data/maps/RustboroCity_Gym/scripts.pory"

# 172 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Rock Pokémon need room to\n"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"

# 178 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"

# 182 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the Rock type at her young age.$"
# 186 "data/maps/RustboroCity_Gym/scripts.pory"

# 187 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 188 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I dont think I introduced\n"
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "myself earlier.\p"
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I am Roxanne, the Rustboro Pokémon\n"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Leader.\p"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a Gym Leader so that I might\n"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Trainer's School in battle.\p"
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"

# 198 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon League's rules state\n"
# 205 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that Trainers are to be given this\l"
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a Gym Leader.\p"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "League Stone Badge.$"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"

# 210 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Roxanne.$"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"

# 214 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge enables your Pokémon\n"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to use the move Cut outside of battle.\p"
# 217 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 218 "data/maps/RustboroCity_Gym/scripts.pory"

# 219 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTombGiveOtherItems:
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That Technical Machine contains Rock\n"
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Tomb.\p"
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers Speed.\p"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a Pokémon.\p"
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.\p"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I don't think I thanked you properly\n"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "for helping me at the Tunnel.\p"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Here, you can have this stone from\n"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "my collection.$"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"

# 233 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainFloatStoneAndHeartScales:
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This Float Stone halves the weight\n"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of any Pokémon that holds it!\p"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You may find this useful as well.$"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"

# 238 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other Gym Leaders.\p"
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many Trainers, you should\n"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"

# 244 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym$"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"

# 247 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne's Certified Trainers:\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"

# 252 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"

# 269 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"

# 273 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"

# 281 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"

# 285 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 288 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"

# 291 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 292 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"
