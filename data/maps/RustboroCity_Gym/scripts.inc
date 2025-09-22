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
	addvar VAR_PETALBURG_GYM_STATE, 1
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 1
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveRockTomb
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 34 "data/maps/RustboroCity_Gym/scripts.pory"

# 35 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb::
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTombGiveOtherItems, MSGBOX_DEFAULT
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GiveFloatStone
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 43 "data/maps/RustboroCity_Gym/scripts.pory"

# 44 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveFloatStone::
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_FLOAT_STONE
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainFloatStoneAndHeartScales, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"

# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 56 "data/maps/RustboroCity_Gym/scripts.pory"

# 57 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh::
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 61 "data/maps/RustboroCity_Gym/scripts.pory"

# 62 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy::
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 66 "data/maps/RustboroCity_Gym/scripts.pory"

# 67 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc::
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 71 "data/maps/RustboroCity_Gym/scripts.pory"

# 72 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide::
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 79 "data/maps/RustboroCity_Gym/scripts.pory"

# 80 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory::
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 84 "data/maps/RustboroCity_Gym/scripts.pory"

# 85 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue::
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Gym/scripts.pory"

# 91 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue::
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 96 "data/maps/RustboroCity_Gym/scripts.pory"

# 97 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified::
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 101 "data/maps/RustboroCity_Gym/scripts.pory"

# 102 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue::
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 106 "data/maps/RustboroCity_Gym/scripts.pory"

# 107 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne::
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 121 "data/maps/RustboroCity_Gym/scripts.pory"

# 122 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice:
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the CHAMPION?\p"
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no TRAINER, not me, but I can\n"
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon CHAMPIONSHIP together!\p"
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a TRAINER to collect\n"
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GYM BADGES, am I right?\p"
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But Gym LeaderS aren't pushovers!\p"
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE, the Gym Leader, is a user\n"
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of ROCK-type Pokémon.\p"
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The ROCK type is very durable, but\n"
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand WATER-type and\l"
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "GRASS-type moves.\p"
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Leader.\p"
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 143 "data/maps/RustboroCity_Gym/scripts.pory"

# 144 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory:
# 145 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your TRAINER CARD.\p"
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE you got should be\n"
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the CHAMPIONSHIP!\p"
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 155 "data/maps/RustboroCity_Gym/scripts.pory"

# 156 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro:
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 159 "data/maps/RustboroCity_Gym/scripts.pory"

# 160 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat:
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 162 "data/maps/RustboroCity_Gym/scripts.pory"

# 163 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle:
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 166 "data/maps/RustboroCity_Gym/scripts.pory"

# 167 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro:
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against ROXANNE!$"
# 170 "data/maps/RustboroCity_Gym/scripts.pory"

# 171 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat:
# 172 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 173 "data/maps/RustboroCity_Gym/scripts.pory"

# 174 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle:
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE is stronger than me by\n"
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 177 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 178 "data/maps/RustboroCity_Gym/scripts.pory"

# 179 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro:
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 182 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My ROCK Pokémon need room to\n"
# 183 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 184 "data/maps/RustboroCity_Gym/scripts.pory"

# 185 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat:
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 187 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 188 "data/maps/RustboroCity_Gym/scripts.pory"

# 189 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle:
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 192 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the ROCK type at her young age.$"
# 193 "data/maps/RustboroCity_Gym/scripts.pory"

# 194 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro:
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I dont think I introduced\n"
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "myself earlier.\p"
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I am ROXANNE, the RUSTBORO Pokémon\n"
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Leader.\p"
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a Gym Leader so that I might\n"
# 200 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 201 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINER'S SCHOOL in battle.\p"
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 204 "data/maps/RustboroCity_Gym/scripts.pory"

# 205 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat:
# 206 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 211 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon LEAGUE's rules state\n"
# 212 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that TRAINERS are to be given this\l"
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a Gym Leader.\p"
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "LEAGUE STONE BADGE.$"
# 216 "data/maps/RustboroCity_Gym/scripts.pory"

# 217 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge:
# 218 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the STONE BADGE\n"
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from ROXANNE.$"
# 220 "data/maps/RustboroCity_Gym/scripts.pory"

# 221 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
# 222 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The STONE BADGE enables your Pokémon\n"
# 223 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to use the move CUT outside of battle.\p"
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 225 "data/maps/RustboroCity_Gym/scripts.pory"

# 226 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTombGiveOtherItems:
# 227 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM69,\n"
# 228 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a Pokémon.\p"
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so think before you use it.\p"
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I don't think I thanked you properly\n"
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "for helping me at the Tunnel.\p"
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Here, you can have this stone from\n"
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "my collection.$"
# 239 "data/maps/RustboroCity_Gym/scripts.pory"

# 240 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainFloatStoneAndHeartScales:
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This Float Stone halves the weight\n"
# 242 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of any Pokémon that holds it!\p"
# 243 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You may find this useful as well.$"
# 244 "data/maps/RustboroCity_Gym/scripts.pory"

# 245 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle:
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other Gym LeaderS.\p"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"

# 251 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue:
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY Pokémon GYM$"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"

# 254 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified:
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "RUSTBORO CITY Pokémon Gym\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE'S CERTIFIED TRAINERS:\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"

# 259 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall:
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 265 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"

# 276 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne:
# 277 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader ROXANNE\n"
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"

# 280 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch:
# 281 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the Gym Leader here.\p"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 284 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"

# 288 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat:
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"

# 292 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch:
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 295 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"

# 298 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
# 299 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 300 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm ROXANNE, the Gym Leader here.\p"
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 305 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 306 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"
