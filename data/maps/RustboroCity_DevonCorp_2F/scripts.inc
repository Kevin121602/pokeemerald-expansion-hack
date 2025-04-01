RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew::
# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lockall
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
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_14, MSGBOX_YESNO
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_21
RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_20:
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_0
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECIEVED_COMMON_FOSSIL
RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_1:
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	releaseall
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_2:
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_0
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_1

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_5:
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_2
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	releaseall
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

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_21:
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_20


# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 1, RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 2, RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 362 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with POKéMON.\p"
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS…\p"
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 381 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS!\p"
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The REPEAT BALL makes it easier to\n"
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch POKéMON you've caught before.\p"
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The TIMER BALL gets better at catching\n"
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON the longer a battle runs.\p"
# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a POKéNAV!\p"
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "PRESIDENT's desire to learn about\l"
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of POKéMON.\p"
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the POKéNAV out.$"
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON…\p"
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects POKéMON from fossils…\p"
# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a POKéMON fossil?\p"
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that POKéMON\n"
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 425 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DEVON's technological expertise\n"
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one POKéMON at a time.\p"
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 446 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized POKéMON has been\n"
# 456 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient POKéMON.\n"
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many POKéMON.\n"
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the POKéNAV…\p"
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 479 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 480 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_0:
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I hope you find that fossil POKéMON\n"
	.string "useful!$"

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_1:
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "MR. STONE told me all about what you\n"
	.string "did for us!\p"
	.string "I've been working on a machine to\n"
	.string "bring fossil POKéMON back to life.\p"
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

RustboroCity_DevonCorp_2F_EventScript_FossilScientistNew_Text_14:
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Give this Pokémon a nickname?$"
