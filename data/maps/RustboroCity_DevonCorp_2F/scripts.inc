RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew::
# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECIEVED_COMMON_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_2
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_1, MSGBOX_YESNO
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_5
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_3
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	random 10
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_10
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_11
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_12
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_13
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_14
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_15
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_16
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_17
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_18
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_19
RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8:
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_0
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECIEVED_COMMON_FOSSIL
RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_1:
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_2:
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_0
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_1

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_5:
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_2
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_10:
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_OMANYTE, 10
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_4
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_11:
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_KABUTO, 10
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_5
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_12:
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 10
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_6
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_13:
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 10
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_7
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_14:
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_CRANIDOS, 10
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_8
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_15:
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_SHIELDON, 10
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_9
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_16:
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ARCHEN, 10
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_10
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_17:
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_11
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_18:
# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_AMAURA, 10
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_12
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_19:
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_TYRUNT, 10
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_13
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_8


# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ .set LOCALID_FOSSIL_SCIENTIST, 5
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 1, RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 2, RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 362 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with Pokémon.\p"
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Poké Balls…\p"
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Poké Balls!\p"
# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Repeat Ball makes it easier to\n"
# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch Pokémon you've caught before.\p"
# 381 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Timer Ball gets better at catching\n"
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon the longer a battle runs.\p"
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Corporation.\p"
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the Pokénav!\p"
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a Pokénav!\p"
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "President's desire to learn about\l"
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of Pokémon.\p"
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the Pokénav out.$"
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon…\p"
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects Pokémon from fossils…\p"
# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a Pokémon fossil?\p"
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that Pokémon\n"
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Devon's technological expertise\n"
# 425 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one Pokémon at a time.\p"
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Fossil Regenerator, which I made,\n"
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 446 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized Pokémon has been\n"
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient Pokémon.\n"
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 456 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Researcher.$"
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many Pokémon.\n"
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the Pokénav…\p"
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_0:
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I hope you find that fossil Pokémon\n"
	.string "useful!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_1:
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Mr. Stone told me all about what you\n"
	.string "did for us!\p"
	.string "I've been working on a machine to\n"
	.string "bring fossil Pokémon back to life.\p"
	.string "In fact, I just revived one right now!\n"
	.string "Would you like to have it?$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_2:
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let me know if you change your mind.$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_3:
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's see, where did I put it?\p"
	.string "…\p"
	.string "…\p"
	.string "Here it is!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_4:
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Omanyte!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_5:
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Kabuto!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_6:
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Lileep!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_7:
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Anorith!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_8:
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Cranidos!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_9:
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Shieldon!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_10:
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Archen!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_11:
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Tirtouga!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_12:
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Amaura!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_13:
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} recieved Tyrunt!$"
