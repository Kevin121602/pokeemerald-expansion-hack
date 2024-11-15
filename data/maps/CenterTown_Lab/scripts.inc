# 1 "data/maps/CenterTown_Lab/scripts.pory"

# 2 "data/maps/CenterTown_Lab/scripts.pory"
.set LOCALID_BIRCH, 2
# 3 "data/maps/CenterTown_Lab/scripts.pory"

# 4 "data/maps/CenterTown_Lab/scripts.pory"

# 5 "data/maps/CenterTown_Lab/scripts.pory"

# 6 "data/maps/CenterTown_Lab/scripts.pory"
CenterTown_Lab_MapScripts::
# 7 "data/maps/CenterTown_Lab/scripts.pory"
	.byte 0
# 8 "data/maps/CenterTown_Lab/scripts.pory"

# 9 "data/maps/CenterTown_Lab/scripts.pory"
	@ State descriptions for VAR_DEX_UPGRADE_JOHTO_STARTER_STATE
# 10 "data/maps/CenterTown_Lab/scripts.pory"
	@ 1: Beat Elite Four, Dex upgrade ready
# 11 "data/maps/CenterTown_Lab/scripts.pory"
	@ 2: Received National Dex
# 12 "data/maps/CenterTown_Lab/scripts.pory"
	@ 3: Left lab after receiving National Dex
# 13 "data/maps/CenterTown_Lab/scripts.pory"
	@ 4: Entered lab after catching all Hoenn mons
# 14 "data/maps/CenterTown_Lab/scripts.pory"
	@ 5: Birch told player to choose Johto starter
# 15 "data/maps/CenterTown_Lab/scripts.pory"
	@ 6: Chose Johto starter
# 16 "data/maps/CenterTown_Lab/scripts.pory"

# 17 "data/maps/CenterTown_Lab/scripts.pory"
	@ State descriptions for VAR_BIRCH_LAB_STATE
# 18 "data/maps/CenterTown_Lab/scripts.pory"
	@ 1: Never occurs
# 19 "data/maps/CenterTown_Lab/scripts.pory"
	@ 2: Chose starter
# 20 "data/maps/CenterTown_Lab/scripts.pory"
	@ 3: Received starter in lab
# 21 "data/maps/CenterTown_Lab/scripts.pory"
	@ 4: Defeated rival on Route 103
# 22 "data/maps/CenterTown_Lab/scripts.pory"
	@ 5: Received pokedex
# 23 "data/maps/CenterTown_Lab/scripts.pory"

# 24 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnTransition:
# 25 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 26 "data/maps/CenterTown_Lab/scripts.pory"

# 27 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CheckReadyForJohtoStarter::
# 28 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 29 "data/maps/CenterTown_Lab/scripts.pory"

# 30 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetReadyForJohtoStarter::
# 31 "data/maps/CenterTown_Lab/scripts.pory"

# 32 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetJohtoStarterLayout::
# 33 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 34 "data/maps/CenterTown_Lab/scripts.pory"

# 35 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetAfterJohtoStarterLayout::
# 36 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 37 "data/maps/CenterTown_Lab/scripts.pory"

# 38 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnWarp:
# 39 "data/maps/CenterTown_Lab/scripts.pory"
	.2byte 0
# 40 "data/maps/CenterTown_Lab/scripts.pory"

# 41 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetPlayerPosForReceiveStarter::
# 42 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 43 "data/maps/CenterTown_Lab/scripts.pory"

# 44 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForDexUpgrade::
# 45 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 46 "data/maps/CenterTown_Lab/scripts.pory"

# 47 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AddRivalObject::
# 48 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 49 "data/maps/CenterTown_Lab/scripts.pory"

# 50 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SetObjectPosForJohtoStarters::
# 51 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 52 "data/maps/CenterTown_Lab/scripts.pory"

# 53 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_OnFrame:
# 54 "data/maps/CenterTown_Lab/scripts.pory"
	.2byte 0
# 55 "data/maps/CenterTown_Lab/scripts.pory"

# 56 "data/maps/CenterTown_Lab/scripts.pory"
@ The starter is technically given prior to this on Route 101 by special ChooseStarter
# 57 "data/maps/CenterTown_Lab/scripts.pory"
@ This is just where the game tells you its yours and lets you nickname it
# 58 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveStarterEvent::
# 59 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 60 "data/maps/CenterTown_Lab/scripts.pory"

# 61 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_NicknameStarter::
# 62 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 63 "data/maps/CenterTown_Lab/scripts.pory"

# 64 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GoSeeRival::
# 65 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 66 "data/maps/CenterTown_Lab/scripts.pory"

# 67 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AgreeToSeeRival::
# 68 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 69 "data/maps/CenterTown_Lab/scripts.pory"

# 70 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_DeclineSeeingRival::
# 71 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 72 "data/maps/CenterTown_Lab/scripts.pory"

# 73 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedexEvent::
# 74 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 75 "data/maps/CenterTown_Lab/scripts.pory"

# 76 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForPokedex:
# 77 "data/maps/CenterTown_Lab/scripts.pory"
	step_end
# 78 "data/maps/CenterTown_Lab/scripts.pory"

# 79 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_UpgradeToNationalDex::
# 80 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 81 "data/maps/CenterTown_Lab/scripts.pory"

# 82 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayUpgradeComment::
# 83 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 84 "data/maps/CenterTown_Lab/scripts.pory"

# 85 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanUpgradeComment::
# 86 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 87 "data/maps/CenterTown_Lab/scripts.pory"

# 88 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchRetrievePokedexes:
# 89 "data/maps/CenterTown_Lab/scripts.pory"
	step_end
# 90 "data/maps/CenterTown_Lab/scripts.pory"

# 91 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_BirchReturnPokedex:
# 92 "data/maps/CenterTown_Lab/scripts.pory"
	step_end
# 93 "data/maps/CenterTown_Lab/scripts.pory"

# 94 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChooseJohtoStarter::
# 95 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 96 "data/maps/CenterTown_Lab/scripts.pory"

# 97 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_PlayerEnterLabForJohtoStarter:
# 98 "data/maps/CenterTown_Lab/scripts.pory"
	step_end
# 99 "data/maps/CenterTown_Lab/scripts.pory"

# 100 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Aide::
# 101 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 102 "data/maps/CenterTown_Lab/scripts.pory"

# 103 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideAlreadyMet::
# 104 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 105 "data/maps/CenterTown_Lab/scripts.pory"

# 106 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AideReceivedStarter::
# 107 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 108 "data/maps/CenterTown_Lab/scripts.pory"

# 109 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Cyndaquil::
# 110 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 111 "data/maps/CenterTown_Lab/scripts.pory"

# 112 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Totodile::
# 113 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 114 "data/maps/CenterTown_Lab/scripts.pory"

# 115 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Chikorita::
# 116 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 117 "data/maps/CenterTown_Lab/scripts.pory"

# 118 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_AlreadyChoseJohtoStarter::
# 119 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 120 "data/maps/CenterTown_Lab/scripts.pory"

# 121 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TakeYourTime::
# 122 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 123 "data/maps/CenterTown_Lab/scripts.pory"

# 124 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveCyndaquil::
# 125 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 126 "data/maps/CenterTown_Lab/scripts.pory"

# 127 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToParty::
# 128 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 129 "data/maps/CenterTown_Lab/scripts.pory"

# 130 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendCyndaquilToPC::
# 131 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 132 "data/maps/CenterTown_Lab/scripts.pory"

# 133 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CyndaquilTransferredToPC::
# 134 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 135 "data/maps/CenterTown_Lab/scripts.pory"

# 136 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedCyndaquil::
# 137 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 138 "data/maps/CenterTown_Lab/scripts.pory"

# 139 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveTotodile::
# 140 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 141 "data/maps/CenterTown_Lab/scripts.pory"

# 142 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToParty::
# 143 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 144 "data/maps/CenterTown_Lab/scripts.pory"

# 145 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendTotodileToPC::
# 146 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 147 "data/maps/CenterTown_Lab/scripts.pory"

# 148 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TotodileTransferredToPC::
# 149 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 150 "data/maps/CenterTown_Lab/scripts.pory"

# 151 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedTotodile::
# 152 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 153 "data/maps/CenterTown_Lab/scripts.pory"

# 154 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GiveChikorita::
# 155 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 156 "data/maps/CenterTown_Lab/scripts.pory"

# 157 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToParty::
# 158 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 159 "data/maps/CenterTown_Lab/scripts.pory"

# 160 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_SendChikoritaToPC::
# 161 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 162 "data/maps/CenterTown_Lab/scripts.pory"

# 163 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ChikoritaTransferredToPC::
# 164 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 165 "data/maps/CenterTown_Lab/scripts.pory"

# 166 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedChikorita::
# 167 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 168 "data/maps/CenterTown_Lab/scripts.pory"

# 169 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivedJohtoStarter::
# 170 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 171 "data/maps/CenterTown_Lab/scripts.pory"

# 172 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Birch::
# 173 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 174 "data/maps/CenterTown_Lab/scripts.pory"

# 175 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_CanHaveAnyOneOfRarePokemon::
# 176 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon, MSGBOX_DEFAULT
# 177 "data/maps/CenterTown_Lab/scripts.pory"
	release
# 178 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 179 "data/maps/CenterTown_Lab/scripts.pory"

# 180 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GrassyPatchWaiting::
# 181 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 182 "data/maps/CenterTown_Lab/scripts.pory"

# 183 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_TryRatePokedexOrRegister::
# 184 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 185 "data/maps/CenterTown_Lab/scripts.pory"

# 186 "data/maps/CenterTown_Lab/scripts.pory"
EventScript_RegisterProfBirch::
# 187 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox MatchCall_Text_BirchRegisterCall, MSGBOX_DEFAULT
# 188 "data/maps/CenterTown_Lab/scripts.pory"
	closemessage
# 189 "data/maps/CenterTown_Lab/scripts.pory"
	delay 30
# 190 "data/maps/CenterTown_Lab/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 191 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox MatchCall_Text_RegisteredBirch, MSGBOX_DEFAULT
# 192 "data/maps/CenterTown_Lab/scripts.pory"
	waitfanfare
# 193 "data/maps/CenterTown_Lab/scripts.pory"
	closemessage
# 194 "data/maps/CenterTown_Lab/scripts.pory"
	delay 30
# 195 "data/maps/CenterTown_Lab/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 196 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 197 "data/maps/CenterTown_Lab/scripts.pory"
	release
# 198 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 199 "data/maps/CenterTown_Lab/scripts.pory"

# 200 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_GivePokedex::
# 201 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex, MSGBOX_DEFAULT
# 202 "data/maps/CenterTown_Lab/scripts.pory"
	call LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex
# 203 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex, MSGBOX_DEFAULT
# 204 "data/maps/CenterTown_Lab/scripts.pory"
	closemessage
# 205 "data/maps/CenterTown_Lab/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer
# 206 "data/maps/CenterTown_Lab/scripts.pory"
	waitmovement 0
# 207 "data/maps/CenterTown_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 208 "data/maps/CenterTown_Lab/scripts.pory"
	waitmovement 0
# 209 "data/maps/CenterTown_Lab/scripts.pory"
	checkplayergender
# 210 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls
# 211 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls
# 212 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 5
# 213 "data/maps/CenterTown_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 214 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 215 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 4
# 216 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 3
# 217 "data/maps/CenterTown_Lab/scripts.pory"
	releaseall
# 218 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 219 "data/maps/CenterTown_Lab/scripts.pory"

# 220 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayGivePokeBalls::
# 221 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 222 "data/maps/CenterTown_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 223 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls
# 224 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls, MSGBOX_DEFAULT
# 225 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_RESULT, 0
# 226 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 227 "data/maps/CenterTown_Lab/scripts.pory"

# 228 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanGivePokeBalls::
# 229 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese, MSGBOX_DEFAULT
# 230 "data/maps/CenterTown_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 231 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls
# 232 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls, MSGBOX_DEFAULT
# 233 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_RESULT, 1
# 234 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 235 "data/maps/CenterTown_Lab/scripts.pory"

# 236 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ReceivePokedex::
# 237 "data/maps/CenterTown_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 238 "data/maps/CenterTown_Lab/scripts.pory"
	message LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
# 239 "data/maps/CenterTown_Lab/scripts.pory"
	waitfanfare
# 240 "data/maps/CenterTown_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 241 "data/maps/CenterTown_Lab/scripts.pory"
	special SetUnlockedPokedexFlags
# 242 "data/maps/CenterTown_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 243 "data/maps/CenterTown_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 244 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 245 "data/maps/CenterTown_Lab/scripts.pory"

# 246 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PokemonAwait::
# 247 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait, MSGBOX_DEFAULT
# 248 "data/maps/CenterTown_Lab/scripts.pory"
	release
# 249 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 250 "data/maps/CenterTown_Lab/scripts.pory"

# 251 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayNoRoomForPokeBalls::
# 252 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull, MSGBOX_DEFAULT
# 253 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 254 "data/maps/CenterTown_Lab/scripts.pory"

# 255 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanNoRoomForPokeBalls::
# 256 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull, MSGBOX_DEFAULT
# 257 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 258 "data/maps/CenterTown_Lab/scripts.pory"

# 259 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Movement_RivalApproachPlayer:
# 260 "data/maps/CenterTown_Lab/scripts.pory"
	walk_down
# 261 "data/maps/CenterTown_Lab/scripts.pory"
	walk_in_place_faster_left
# 262 "data/maps/CenterTown_Lab/scripts.pory"
	step_end
# 263 "data/maps/CenterTown_Lab/scripts.pory"

# 264 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Machine::
# 265 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine, MSGBOX_SIGN
# 266 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 267 "data/maps/CenterTown_Lab/scripts.pory"

# 268 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Rival::
# 269 "data/maps/CenterTown_Lab/scripts.pory"
	lock
# 270 "data/maps/CenterTown_Lab/scripts.pory"
	faceplayer
# 271 "data/maps/CenterTown_Lab/scripts.pory"
	goto_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 5, LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans
# 272 "data/maps/CenterTown_Lab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 6, LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier
# 273 "data/maps/CenterTown_Lab/scripts.pory"
	goto_if_ge VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork
# 274 "data/maps/CenterTown_Lab/scripts.pory"
	checkplayergender
# 275 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext
# 276 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext
# 277 "data/maps/CenterTown_Lab/scripts.pory"
	release
# 278 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 279 "data/maps/CenterTown_Lab/scripts.pory"

# 280 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhereShouldIGoNext::
# 281 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 282 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 283 "data/maps/CenterTown_Lab/scripts.pory"

# 284 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanWhereShouldIGoNext::
# 285 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 286 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 287 "data/maps/CenterTown_Lab/scripts.pory"

# 288 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalFuturePlans::
# 289 "data/maps/CenterTown_Lab/scripts.pory"
	checkplayergender
# 290 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere
# 291 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly
# 292 "data/maps/CenterTown_Lab/scripts.pory"
	release
# 293 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 294 "data/maps/CenterTown_Lab/scripts.pory"

# 295 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayWhatNextImStayingHere::
# 296 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere, MSGBOX_DEFAULT
# 297 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 298 "data/maps/CenterTown_Lab/scripts.pory"

# 299 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanPreferCollectingSlowly:
# 300 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly, MSGBOX_DEFAULT
# 301 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 302 "data/maps/CenterTown_Lab/scripts.pory"

# 303 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalHaveYouGoneToBattleFrontier::
# 304 "data/maps/CenterTown_Lab/scripts.pory"
	checkplayergender
# 305 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier
# 306 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier
# 307 "data/maps/CenterTown_Lab/scripts.pory"
	release
# 308 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 309 "data/maps/CenterTown_Lab/scripts.pory"

# 310 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayHaveYouGoneToBattleFrontier::
# 311 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 312 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 313 "data/maps/CenterTown_Lab/scripts.pory"

# 314 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanHaveYouGoneToBattleFrontier::
# 315 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier, MSGBOX_DEFAULT
# 316 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 317 "data/maps/CenterTown_Lab/scripts.pory"

# 318 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_RivalTakeBreakFromFieldwork::
# 319 "data/maps/CenterTown_Lab/scripts.pory"
	checkplayergender
# 320 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork
# 321 "data/maps/CenterTown_Lab/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork
# 322 "data/maps/CenterTown_Lab/scripts.pory"
	release
# 323 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 324 "data/maps/CenterTown_Lab/scripts.pory"

# 325 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_MayTakeBreakFromFieldwork::
# 326 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 327 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 328 "data/maps/CenterTown_Lab/scripts.pory"

# 329 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_BrendanTakeBreakFromFieldwork::
# 330 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork, MSGBOX_DEFAULT
# 331 "data/maps/CenterTown_Lab/scripts.pory"
	return
# 332 "data/maps/CenterTown_Lab/scripts.pory"

# 333 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_PC::
# 334 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch, MSGBOX_SIGN
# 335 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 336 "data/maps/CenterTown_Lab/scripts.pory"

# 337 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Bookshelf::
# 338 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon, MSGBOX_SIGN
# 339 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 340 "data/maps/CenterTown_Lab/scripts.pory"

# 341 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_Book::
# 342 "data/maps/CenterTown_Lab/scripts.pory"
	msgbox LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead, MSGBOX_SIGN
# 343 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 344 "data/maps/CenterTown_Lab/scripts.pory"

# 345 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_EventScript_ScottAboardSSTidalCall::
# 346 "data/maps/CenterTown_Lab/scripts.pory"
	lockall
# 347 "data/maps/CenterTown_Lab/scripts.pory"
	pokenavcall LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall
# 348 "data/maps/CenterTown_Lab/scripts.pory"
	waitmessage
# 349 "data/maps/CenterTown_Lab/scripts.pory"
	clearflag FLAG_SCOTT_CALL_BATTLE_FRONTIER
# 350 "data/maps/CenterTown_Lab/scripts.pory"
	releaseall
# 351 "data/maps/CenterTown_Lab/scripts.pory"
	end
# 352 "data/maps/CenterTown_Lab/scripts.pory"

# 353 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork:
# 354 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Hunh? PROF. BIRCH?\p"
# 355 "data/maps/CenterTown_Lab/scripts.pory"
	.string "The PROF's away on fieldwork.\n"
# 356 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Ergo, he isn't here.\p"
# 357 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Oh, let me explain what fieldwork is.\p"
# 358 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It is to study things in the natural\n"
# 359 "data/maps/CenterTown_Lab/scripts.pory"
	.string "environment, like fields and mountains,\l"
# 360 "data/maps/CenterTown_Lab/scripts.pory"
	.string "instead of a laboratory.\p"
# 361 "data/maps/CenterTown_Lab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 362 "data/maps/CenterTown_Lab/scripts.pory"
	.string "He's the type of person who would\l"
# 363 "data/maps/CenterTown_Lab/scripts.pory"
	.string "rather go outside and experience\l"
# 364 "data/maps/CenterTown_Lab/scripts.pory"
	.string "things than read about them here.$"
# 365 "data/maps/CenterTown_Lab/scripts.pory"

# 366 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork:
# 367 "data/maps/CenterTown_Lab/scripts.pory"
	.string "The PROF isn't one for doing desk work.\n"
# 368 "data/maps/CenterTown_Lab/scripts.pory"
	.string "He's the type of person who would\l"
# 369 "data/maps/CenterTown_Lab/scripts.pory"
	.string "rather go outside and experience\l"
# 370 "data/maps/CenterTown_Lab/scripts.pory"
	.string "things than read about them here.$"
# 371 "data/maps/CenterTown_Lab/scripts.pory"

# 372 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo:
# 373 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH is studying the habitats\n"
# 374 "data/maps/CenterTown_Lab/scripts.pory"
	.string "and distribution of POKéMON.\p"
# 375 "data/maps/CenterTown_Lab/scripts.pory"
	.string "The PROF enjoys {RIVAL}'s help, too.\n"
# 376 "data/maps/CenterTown_Lab/scripts.pory"
	.string "There's a lot of love there.$"
# 377 "data/maps/CenterTown_Lab/scripts.pory"

# 378 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon:
# 379 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: So, {PLAYER}{KUN}.\p"
# 380 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I've heard so much about you from\n"
# 381 "data/maps/CenterTown_Lab/scripts.pory"
	.string "your father.\p"
# 382 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I've heard that you don't have your\n"
# 383 "data/maps/CenterTown_Lab/scripts.pory"
	.string "own POKéMON yet.\p"
# 384 "data/maps/CenterTown_Lab/scripts.pory"
	.string "But the way you battled earlier,\n"
# 385 "data/maps/CenterTown_Lab/scripts.pory"
	.string "you pulled it off with aplomb!\p"
# 386 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I guess you have your father's blood\n"
# 387 "data/maps/CenterTown_Lab/scripts.pory"
	.string "in your veins after all!\p"
# 388 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Oh, yes. As thanks for rescuing me,\n"
# 389 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'd like you to have the POKéMON you\l"
# 390 "data/maps/CenterTown_Lab/scripts.pory"
	.string "used earlier.\p"
# 391 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"
# 392 "data/maps/CenterTown_Lab/scripts.pory"

# 393 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon:
# 394 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: While you're at it, why not\n"
# 395 "data/maps/CenterTown_Lab/scripts.pory"
	.string "give a nickname to that {STR_VAR_1}?$"
# 396 "data/maps/CenterTown_Lab/scripts.pory"

# 397 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival:
# 398 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: If you work at POKéMON\n"
# 399 "data/maps/CenterTown_Lab/scripts.pory"
	.string "and gain experience, I think you'll make\l"
# 400 "data/maps/CenterTown_Lab/scripts.pory"
	.string "an extremely good TRAINER.\p"
# 401 "data/maps/CenterTown_Lab/scripts.pory"
	.string "My kid, {RIVAL}, is also studying\n"
# 402 "data/maps/CenterTown_Lab/scripts.pory"
	.string "POKéMON while helping me out.\p"
# 403 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{PLAYER}{KUN}, don't you think it might be\n"
# 404 "data/maps/CenterTown_Lab/scripts.pory"
	.string "a good idea to go see {RIVAL}?$"
# 405 "data/maps/CenterTown_Lab/scripts.pory"

# 406 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou:
# 407 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Great!\n"
# 408 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{RIVAL} should be happy, too.\p"
# 409 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Get {RIVAL} to teach you what it\n"
# 410 "data/maps/CenterTown_Lab/scripts.pory"
	.string "means to be a TRAINER.$"
# 411 "data/maps/CenterTown_Lab/scripts.pory"

# 412 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay:
# 413 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Oh, don't be that way.\n"
# 414 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You should go meet my kid.$"
# 415 "data/maps/CenterTown_Lab/scripts.pory"

# 416 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome:
# 417 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: {RIVAL}?\n"
# 418 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Gone home, I think.\p"
# 419 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Or maybe that kid's scrabbling around\n"
# 420 "data/maps/CenterTown_Lab/scripts.pory"
	.string "in tall grass again somewhere…\p"
# 421 "data/maps/CenterTown_Lab/scripts.pory"
	.string "If you or your POKéMON get tired,\n"
# 422 "data/maps/CenterTown_Lab/scripts.pory"
	.string "you should get some rest at home.$"
# 423 "data/maps/CenterTown_Lab/scripts.pory"

# 424 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex:
# 425 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Oh, hi, {PLAYER}{KUN}!\p"
# 426 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I heard you beat {RIVAL} on\n"
# 427 "data/maps/CenterTown_Lab/scripts.pory"
	.string "your first try. That's excellent!\p"
# 428 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{RIVAL}'s been helping with my research\n"
# 429 "data/maps/CenterTown_Lab/scripts.pory"
	.string "for a long time.\p"
# 430 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{RIVAL} has an extensive history as\n"
# 431 "data/maps/CenterTown_Lab/scripts.pory"
	.string "a TRAINER already.\p"
# 432 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Here, {PLAYER}{KUN}, I ordered this for my\n"
# 433 "data/maps/CenterTown_Lab/scripts.pory"
	.string "research, but I think you should have\l"
# 434 "data/maps/CenterTown_Lab/scripts.pory"
	.string "this POKéDEX.$"
# 435 "data/maps/CenterTown_Lab/scripts.pory"

# 436 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex:
# 437 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"
# 438 "data/maps/CenterTown_Lab/scripts.pory"

# 439 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex:
# 440 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: The POKéDEX is a high-tech\n"
# 441 "data/maps/CenterTown_Lab/scripts.pory"
	.string "tool that automatically makes a record\l"
# 442 "data/maps/CenterTown_Lab/scripts.pory"
	.string "of any POKéMON you meet or catch.\p"
# 443 "data/maps/CenterTown_Lab/scripts.pory"
	.string "My kid, {RIVAL}, goes everywhere\n"
# 444 "data/maps/CenterTown_Lab/scripts.pory"
	.string "with it.\p"
# 445 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Whenever my kid catches a rare POKéMON\n"
# 446 "data/maps/CenterTown_Lab/scripts.pory"
	.string "and records its data in the POKéDEX,\l"
# 447 "data/maps/CenterTown_Lab/scripts.pory"
	.string "why, {RIVAL} looks for me while I'm out\l"
# 448 "data/maps/CenterTown_Lab/scripts.pory"
	.string "doing fieldwork, and shows me.$"
# 449 "data/maps/CenterTown_Lab/scripts.pory"

# 450 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait:
# 451 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Countless POKéMON\n"
# 452 "data/maps/CenterTown_Lab/scripts.pory"
	.string "await you!\p"
# 453 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Argh, I'm getting the itch to get out\n"
# 454 "data/maps/CenterTown_Lab/scripts.pory"
	.string "and do fieldwork again!$"
# 455 "data/maps/CenterTown_Lab/scripts.pory"

# 456 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese:
# 457 "data/maps/CenterTown_Lab/scripts.pory"
	.string "MAY: Oh, wow, {PLAYER}{KUN}!\n"
# 458 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You got a POKéDEX, too!\p"
# 459 "data/maps/CenterTown_Lab/scripts.pory"
	.string "That's great! Just like me!\n"
# 460 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I've got something for you, too!$"
# 461 "data/maps/CenterTown_Lab/scripts.pory"

# 462 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls:
# 463 "data/maps/CenterTown_Lab/scripts.pory"
	.string "MAY: It's fun if you can get a lot of\n"
# 464 "data/maps/CenterTown_Lab/scripts.pory"
	.string "POKéMON!\p"
# 465 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'm going to look all over the place\n"
# 466 "data/maps/CenterTown_Lab/scripts.pory"
	.string "because I want different POKéMON.\p"
# 467 "data/maps/CenterTown_Lab/scripts.pory"
	.string "If I find any cute POKéMON, I'll catch\n"
# 468 "data/maps/CenterTown_Lab/scripts.pory"
	.string "them with POKé BALLS!$"
# 469 "data/maps/CenterTown_Lab/scripts.pory"

# 470 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull:
# 471 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Oh? Your BAG's full.$"
# 472 "data/maps/CenterTown_Lab/scripts.pory"

# 473 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext:
# 474 "data/maps/CenterTown_Lab/scripts.pory"
	.string "MAY: I wonder where I should go look\n"
# 475 "data/maps/CenterTown_Lab/scripts.pory"
	.string "for POKéMON next?$"
# 476 "data/maps/CenterTown_Lab/scripts.pory"

# 477 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese:
# 478 "data/maps/CenterTown_Lab/scripts.pory"
	.string "BRENDAN: Huh…\n"
# 479 "data/maps/CenterTown_Lab/scripts.pory"
	.string "So you got a POKéDEX, too.\p"
# 480 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Well then, here.\n"
# 481 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'll give you these.$"
# 482 "data/maps/CenterTown_Lab/scripts.pory"

# 483 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls:
# 484 "data/maps/CenterTown_Lab/scripts.pory"
	.string "BRENDAN: You know it's more fun to\n"
# 485 "data/maps/CenterTown_Lab/scripts.pory"
	.string "have a whole bunch of POKéMON.\p"
# 486 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'm going to explore all over the place\n"
# 487 "data/maps/CenterTown_Lab/scripts.pory"
	.string "to find different POKéMON.\p"
# 488 "data/maps/CenterTown_Lab/scripts.pory"
	.string "If I find any cool POKéMON, you bet\n"
# 489 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'll try to get them with POKé BALLS.$"
# 490 "data/maps/CenterTown_Lab/scripts.pory"

# 491 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull:
# 492 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Hey, your BAG's full.$"
# 493 "data/maps/CenterTown_Lab/scripts.pory"

# 494 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext:
# 495 "data/maps/CenterTown_Lab/scripts.pory"
	.string "BRENDAN: Where should I look for\n"
# 496 "data/maps/CenterTown_Lab/scripts.pory"
	.string "POKéMON next…$"
# 497 "data/maps/CenterTown_Lab/scripts.pory"

# 498 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine:
# 499 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It's a serious-looking machine.\n"
# 500 "data/maps/CenterTown_Lab/scripts.pory"
	.string "The PROF must use this for research.$"
# 501 "data/maps/CenterTown_Lab/scripts.pory"

# 502 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch:
# 503 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It's a PC used for research.\n"
# 504 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Better not mess around with it.$"
# 505 "data/maps/CenterTown_Lab/scripts.pory"

# 506 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon:
# 507 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It's crammed with books on POKéMON.$"
# 508 "data/maps/CenterTown_Lab/scripts.pory"

# 509 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead:
# 510 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It's a book that's too hard to read.$"
# 511 "data/maps/CenterTown_Lab/scripts.pory"

# 512 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational:
# 513 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Now…\p"
# 514 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{PLAYER}{KUN} and {RIVAL}, I've had the two\n"
# 515 "data/maps/CenterTown_Lab/scripts.pory"
	.string "of you help me study POKéMON.\p"
# 516 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Thanks to your help, new facts\n"
# 517 "data/maps/CenterTown_Lab/scripts.pory"
	.string "are coming to light.\p"
# 518 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It appears that in the HOENN region,\n"
# 519 "data/maps/CenterTown_Lab/scripts.pory"
	.string "there are also POKéMON from other\l"
# 520 "data/maps/CenterTown_Lab/scripts.pory"
	.string "regions.\p"
# 521 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It goes to show how rich and varied\n"
# 522 "data/maps/CenterTown_Lab/scripts.pory"
	.string "the natural environments of HOENN\l"
# 523 "data/maps/CenterTown_Lab/scripts.pory"
	.string "happen to be.\p"
# 524 "data/maps/CenterTown_Lab/scripts.pory"
	.string "That's why I think it's necessary for\n"
# 525 "data/maps/CenterTown_Lab/scripts.pory"
	.string "me to upgrade your POKéDEX to\l"
# 526 "data/maps/CenterTown_Lab/scripts.pory"
	.string "the NATIONAL Mode.\p"
# 527 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Here, let me see your POKéDEX units.$"
# 528 "data/maps/CenterTown_Lab/scripts.pory"

# 529 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool:
# 530 "data/maps/CenterTown_Lab/scripts.pory"
	.string "MAY: Eheheh!\p"
# 531 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It's so cool that even my POKéDEX\n"
# 532 "data/maps/CenterTown_Lab/scripts.pory"
	.string "is getting updated!\p"
# 533 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It's because you went out and caught\n"
# 534 "data/maps/CenterTown_Lab/scripts.pory"
	.string "so many POKéMON, {PLAYER}{KUN}!$"
# 535 "data/maps/CenterTown_Lab/scripts.pory"

# 536 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe:
# 537 "data/maps/CenterTown_Lab/scripts.pory"
	.string "BRENDAN: I went out all over HOENN\n"
# 538 "data/maps/CenterTown_Lab/scripts.pory"
	.string "and checked out POKéMON.\p"
# 539 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You can thank me for getting\n"
# 540 "data/maps/CenterTown_Lab/scripts.pory"
	.string "the NATIONAL Mode POKéDEX.\p"
# 541 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Yep, you're lucky, {PLAYER}!$"
# 542 "data/maps/CenterTown_Lab/scripts.pory"

# 543 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone:
# 544 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Okay, all done!$"
# 545 "data/maps/CenterTown_Lab/scripts.pory"

# 546 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational:
# 547 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{PLAYER}'s POKéDEX was upgraded\n"
# 548 "data/maps/CenterTown_Lab/scripts.pory"
	.string "to the NATIONAL Mode!$"
# 549 "data/maps/CenterTown_Lab/scripts.pory"

# 550 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2:
# 551 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: But listen.\n"
# 552 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You've become the CHAMPION,\l"
# 553 "data/maps/CenterTown_Lab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 554 "data/maps/CenterTown_Lab/scripts.pory"
	.string "There is no end to the road\n"
# 555 "data/maps/CenterTown_Lab/scripts.pory"
	.string "that is POKéMON.\p"
# 556 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 557 "data/maps/CenterTown_Lab/scripts.pory"
	.string "that's waiting for you!$"
# 558 "data/maps/CenterTown_Lab/scripts.pory"

# 559 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork:
# 560 "data/maps/CenterTown_Lab/scripts.pory"
	.string "MAY: I think I'll take a short break\n"
# 561 "data/maps/CenterTown_Lab/scripts.pory"
	.string "from fieldwork.\p"
# 562 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I think I'll help the PROF here for\n"
# 563 "data/maps/CenterTown_Lab/scripts.pory"
	.string "a while.$"
# 564 "data/maps/CenterTown_Lab/scripts.pory"

# 565 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork:
# 566 "data/maps/CenterTown_Lab/scripts.pory"
	.string "BRENDAN: For the time being,\n"
# 567 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'm taking a break from fieldwork.\p"
# 568 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'll be helping out the PROF here\n"
# 569 "data/maps/CenterTown_Lab/scripts.pory"
	.string "for a while.$"
# 570 "data/maps/CenterTown_Lab/scripts.pory"

# 571 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon:
# 572 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 573 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Let's have a look at your POKéDEX.\p"
# 574 "data/maps/CenterTown_Lab/scripts.pory"
	.string "… … … … … …\n"
# 575 "data/maps/CenterTown_Lab/scripts.pory"
	.string "… … … … … …\p"
# 576 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Yes, there's no doubt about it.\p"
# 577 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You really have completed the HOENN\n"
# 578 "data/maps/CenterTown_Lab/scripts.pory"
	.string "region's POKéDEX.\p"
# 579 "data/maps/CenterTown_Lab/scripts.pory"
	.string "That's more than just impressive.\p"
# 580 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I have a gift for you.\p"
# 581 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Consider it my show of appreciation\n"
# 582 "data/maps/CenterTown_Lab/scripts.pory"
	.string "for the fantastic work you've done.\p"
# 583 "data/maps/CenterTown_Lab/scripts.pory"
	.string "My gift is a rare POKéMON only found\n"
# 584 "data/maps/CenterTown_Lab/scripts.pory"
	.string "in another region!\p"
# 585 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You can have any one of these\n"
# 586 "data/maps/CenterTown_Lab/scripts.pory"
	.string "three POKéMON!$"
# 587 "data/maps/CenterTown_Lab/scripts.pory"

# 588 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon:
# 589 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: These are rare POKéMON\n"
# 590 "data/maps/CenterTown_Lab/scripts.pory"
	.string "only found in another region!\p"
# 591 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You can have any one of these\n"
# 592 "data/maps/CenterTown_Lab/scripts.pory"
	.string "three POKéMON!$"
# 593 "data/maps/CenterTown_Lab/scripts.pory"

# 594 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil:
# 595 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: The FIRE POKéMON\n"
# 596 "data/maps/CenterTown_Lab/scripts.pory"
	.string "CYNDAQUIL caught your eye!\p"
# 597 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You're as sharp as ever!\p"
# 598 "data/maps/CenterTown_Lab/scripts.pory"
	.string "So the CYNDAQUIL is your choice?$"
# 599 "data/maps/CenterTown_Lab/scripts.pory"

# 600 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile:
# 601 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: The WATER POKéMON\n"
# 602 "data/maps/CenterTown_Lab/scripts.pory"
	.string "TOTODILE is your choice!\p"
# 603 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You know how to pick a good one.\p"
# 604 "data/maps/CenterTown_Lab/scripts.pory"
	.string "So, you'll take the TOTODILE?$"
# 605 "data/maps/CenterTown_Lab/scripts.pory"

# 606 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita:
# 607 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: The GRASS POKéMON\n"
# 608 "data/maps/CenterTown_Lab/scripts.pory"
	.string "CHIKORITA is your choice!\p"
# 609 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You sure know what you're doing.\p"
# 610 "data/maps/CenterTown_Lab/scripts.pory"
	.string "So, you'll take the CHIKORITA?$"
# 611 "data/maps/CenterTown_Lab/scripts.pory"

# 612 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable:
# 613 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Take your time before\n"
# 614 "data/maps/CenterTown_Lab/scripts.pory"
	.string "you decide.\p"
# 615 "data/maps/CenterTown_Lab/scripts.pory"
	.string "They're all invaluable POKéMON.$"
# 616 "data/maps/CenterTown_Lab/scripts.pory"

# 617 "data/maps/CenterTown_Lab/scripts.pory"
@ Unused
# 618 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_PickedFinePokemon:
# 619 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: I see!\n"
# 620 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You picked a fine POKéMON!$"
# 621 "data/maps/CenterTown_Lab/scripts.pory"

# 622 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter:
# 623 "data/maps/CenterTown_Lab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\n"
# 624 "data/maps/CenterTown_Lab/scripts.pory"
	.string "from PROF. BIRCH!$"
# 625 "data/maps/CenterTown_Lab/scripts.pory"

# 626 "data/maps/CenterTown_Lab/scripts.pory"
@ Unused
# 627 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_NicknameJohtoStarter:
# 628 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Want to give a nickname to\n"
# 629 "data/maps/CenterTown_Lab/scripts.pory"
	.string "the {STR_VAR_1} you received?$"
# 630 "data/maps/CenterTown_Lab/scripts.pory"

# 631 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting:
# 632 "data/maps/CenterTown_Lab/scripts.pory"
	.string "PROF. BIRCH: Listen, {PLAYER}{KUN}.\n"
# 633 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You've completed the HOENN POKéDEX,\l"
# 634 "data/maps/CenterTown_Lab/scripts.pory"
	.string "but your POKéMON journey isn't over.\p"
# 635 "data/maps/CenterTown_Lab/scripts.pory"
	.string "There is no end to the road\n"
# 636 "data/maps/CenterTown_Lab/scripts.pory"
	.string "that is POKéMON.\p"
# 637 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Somewhere, there is a grassy patch\n"
# 638 "data/maps/CenterTown_Lab/scripts.pory"
	.string "that's waiting for you!$"
# 639 "data/maps/CenterTown_Lab/scripts.pory"

# 640 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone:
# 641 "data/maps/CenterTown_Lab/scripts.pory"
	.string "You received the promised POKéMON.\n"
# 642 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Better leave the others alone.$"
# 643 "data/maps/CenterTown_Lab/scripts.pory"

# 644 "data/maps/CenterTown_Lab/scripts.pory"
@ Unused
# 645 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_DontHaveAnyRoomForPokemon:
# 646 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Oh, you don't have any room for\n"
# 647 "data/maps/CenterTown_Lab/scripts.pory"
	.string "this POKéMON.$"
# 648 "data/maps/CenterTown_Lab/scripts.pory"

# 649 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayWhatNextImStayingHere:
# 650 "data/maps/CenterTown_Lab/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, after this…\n"
# 651 "data/maps/CenterTown_Lab/scripts.pory"
	.string "What are you going to do?\p"
# 652 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Are you going to keep battling\n"
# 653 "data/maps/CenterTown_Lab/scripts.pory"
	.string "and sharpening your skills?\p"
# 654 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Or are you going to try filling\n"
# 655 "data/maps/CenterTown_Lab/scripts.pory"
	.string "the NATIONAL POKéDEX?\p"
# 656 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'm staying here to help the PROF.$"
# 657 "data/maps/CenterTown_Lab/scripts.pory"

# 658 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly:
# 659 "data/maps/CenterTown_Lab/scripts.pory"
	.string "BRENDAN: Rather than collecting\n"
# 660 "data/maps/CenterTown_Lab/scripts.pory"
	.string "POKéMON, I prefer slowly and \l"
# 661 "data/maps/CenterTown_Lab/scripts.pory"
	.string "steadily raising the one I chose.$"
# 662 "data/maps/CenterTown_Lab/scripts.pory"

# 663 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier:
# 664 "data/maps/CenterTown_Lab/scripts.pory"
	.string "MAY: Oh, hi, {PLAYER}{KUN}!\n"
# 665 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Have you gone to that place,\l"
# 666 "data/maps/CenterTown_Lab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 667 "data/maps/CenterTown_Lab/scripts.pory"

# 668 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier:
# 669 "data/maps/CenterTown_Lab/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}!\n"
# 670 "data/maps/CenterTown_Lab/scripts.pory"
	.string "Have you gone out to that place,\l"
# 671 "data/maps/CenterTown_Lab/scripts.pory"
	.string "the BATTLE FRONTIER?$"
# 672 "data/maps/CenterTown_Lab/scripts.pory"

# 673 "data/maps/CenterTown_Lab/scripts.pory"
LittlerootTown_ProfessorBirchsLab_Text_ScottAboardSSTidalCall:
# 674 "data/maps/CenterTown_Lab/scripts.pory"
	.string "… … … … … …\n"
# 675 "data/maps/CenterTown_Lab/scripts.pory"
	.string "… … … … … Beep!\p"
# 676 "data/maps/CenterTown_Lab/scripts.pory"
	.string "SCOTT: Hi, hi, {PLAYER}!\n"
# 677 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It's me, SCOTT.\p"
# 678 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'm aboard the S.S. TIDAL now.\n"
# 679 "data/maps/CenterTown_Lab/scripts.pory"
	.string "It feels great to be on the sea!\p"
# 680 "data/maps/CenterTown_Lab/scripts.pory"
	.string "By the way…\p"
# 681 "data/maps/CenterTown_Lab/scripts.pory"
	.string "There's this place that I'd like to\n"
# 682 "data/maps/CenterTown_Lab/scripts.pory"
	.string "invite you to for a visit.\p"
# 683 "data/maps/CenterTown_Lab/scripts.pory"
	.string "If you're interested, board a ferry\n"
# 684 "data/maps/CenterTown_Lab/scripts.pory"
	.string "at either SLATEPORT or LILYCOVE.\p"
# 685 "data/maps/CenterTown_Lab/scripts.pory"
	.string "I'll fill you in on the details when\n"
# 686 "data/maps/CenterTown_Lab/scripts.pory"
	.string "we meet. I'll be waiting!\p"
# 687 "data/maps/CenterTown_Lab/scripts.pory"
	.string "… … … … … …\n"
# 688 "data/maps/CenterTown_Lab/scripts.pory"
	.string "… … … … … Click!$"
