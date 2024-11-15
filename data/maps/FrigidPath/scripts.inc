# 1 "data/maps/FrigidPath/scripts.pory"

# 2 "data/maps/FrigidPath/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 3 "data/maps/FrigidPath/scripts.pory"
.set LOCALID_BRINEY, 5
# 4 "data/maps/FrigidPath/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/FrigidPath/scripts.pory"
.set LOCALID_PEEKO, 7
# 6 "data/maps/FrigidPath/scripts.pory"
.equ LOCALID_WANDA, 10
# 7 "data/maps/FrigidPath/scripts.pory"

# 8 "data/maps/FrigidPath/scripts.pory"
FrigidPath_MapScripts::
# 9 "data/maps/FrigidPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 10 "data/maps/FrigidPath/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 11 "data/maps/FrigidPath/scripts.pory"
	.byte 0
# 12 "data/maps/FrigidPath/scripts.pory"

# 13 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_OnFrame:
# 14 "data/maps/FrigidPath/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 15 "data/maps/FrigidPath/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 16 "data/maps/FrigidPath/scripts.pory"
	.2byte 0
# 17 "data/maps/FrigidPath/scripts.pory"

# 18 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_OnTransition:
# 19 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 20 "data/maps/FrigidPath/scripts.pory"
	end
# 21 "data/maps/FrigidPath/scripts.pory"

# 22 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 23 "data/maps/FrigidPath/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 24 "data/maps/FrigidPath/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 25 "data/maps/FrigidPath/scripts.pory"
	return
# 26 "data/maps/FrigidPath/scripts.pory"

# 27 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 28 "data/maps/FrigidPath/scripts.pory"
	lock
# 29 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 30 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 31 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 32 "data/maps/FrigidPath/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 33 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 34 "data/maps/FrigidPath/scripts.pory"
	release
# 35 "data/maps/FrigidPath/scripts.pory"
	end
# 36 "data/maps/FrigidPath/scripts.pory"

# 37 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 38 "data/maps/FrigidPath/scripts.pory"
	lock
# 39 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 40 "data/maps/FrigidPath/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 41 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_TEMP_1
# 42 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 43 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 44 "data/maps/FrigidPath/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 45 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 46 "data/maps/FrigidPath/scripts.pory"
	release
# 47 "data/maps/FrigidPath/scripts.pory"
	end
# 48 "data/maps/FrigidPath/scripts.pory"

# 49 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 50 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 51 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 52 "data/maps/FrigidPath/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 53 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 54 "data/maps/FrigidPath/scripts.pory"
	release
# 55 "data/maps/FrigidPath/scripts.pory"
	end
# 56 "data/maps/FrigidPath/scripts.pory"

# 57 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 58 "data/maps/FrigidPath/scripts.pory"
	lockall
# 59 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 60 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 61 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 62 "data/maps/FrigidPath/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 63 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 64 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 65 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 66 "data/maps/FrigidPath/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 67 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 68 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 69 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 70 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 71 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 72 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 73 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 74 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 75 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 76 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 77 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 78 "data/maps/FrigidPath/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 79 "data/maps/FrigidPath/scripts.pory"
	releaseall
# 80 "data/maps/FrigidPath/scripts.pory"
	end
# 81 "data/maps/FrigidPath/scripts.pory"

# 82 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 83 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 84 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 85 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 86 "data/maps/FrigidPath/scripts.pory"
	return
# 87 "data/maps/FrigidPath/scripts.pory"

# 88 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 89 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 90 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 91 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 92 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 94 "data/maps/FrigidPath/scripts.pory"
	return
# 95 "data/maps/FrigidPath/scripts.pory"

# 96 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 97 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 98 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 99 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 100 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 101 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 102 "data/maps/FrigidPath/scripts.pory"
	return
# 103 "data/maps/FrigidPath/scripts.pory"

# 104 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 105 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 106 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 107 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 109 "data/maps/FrigidPath/scripts.pory"
	return
# 110 "data/maps/FrigidPath/scripts.pory"

# 111 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 112 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 113 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 114 "data/maps/FrigidPath/scripts.pory"
	return
# 115 "data/maps/FrigidPath/scripts.pory"

# 116 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 117 "data/maps/FrigidPath/scripts.pory"
	return
# 118 "data/maps/FrigidPath/scripts.pory"

# 119 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 120 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 121 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 122 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 123 "data/maps/FrigidPath/scripts.pory"
	return
# 124 "data/maps/FrigidPath/scripts.pory"

# 125 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 126 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
# 127 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 128 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 129 "data/maps/FrigidPath/scripts.pory"
	return
# 130 "data/maps/FrigidPath/scripts.pory"

# 131 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 132 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 133 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 134 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 135 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 136 "data/maps/FrigidPath/scripts.pory"
	return
# 137 "data/maps/FrigidPath/scripts.pory"

# 138 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 139 "data/maps/FrigidPath/scripts.pory"
	playse SE_PIN
# 140 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 141 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 142 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 143 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 144 "data/maps/FrigidPath/scripts.pory"
	return
# 145 "data/maps/FrigidPath/scripts.pory"

# 146 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 147 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 148 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 149 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 150 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 151 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 152 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 153 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 154 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 155 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 156 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 157 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 158 "data/maps/FrigidPath/scripts.pory"
	step_end
# 159 "data/maps/FrigidPath/scripts.pory"

# 160 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 161 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 162 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 163 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 164 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 165 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 166 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 167 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 168 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 169 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 170 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 171 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 172 "data/maps/FrigidPath/scripts.pory"
	step_end
# 173 "data/maps/FrigidPath/scripts.pory"

# 174 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 175 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 176 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 177 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 178 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 179 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 180 "data/maps/FrigidPath/scripts.pory"
	step_end
# 181 "data/maps/FrigidPath/scripts.pory"

# 182 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 183 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 184 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 185 "data/maps/FrigidPath/scripts.pory"
	step_end
# 186 "data/maps/FrigidPath/scripts.pory"

# 187 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 188 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 189 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 190 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 191 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 192 "data/maps/FrigidPath/scripts.pory"
	step_end
# 193 "data/maps/FrigidPath/scripts.pory"

# 194 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 195 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 196 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 198 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 199 "data/maps/FrigidPath/scripts.pory"
	step_end
# 200 "data/maps/FrigidPath/scripts.pory"

# 201 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 202 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 203 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 204 "data/maps/FrigidPath/scripts.pory"
	step_end
# 205 "data/maps/FrigidPath/scripts.pory"

# 206 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 207 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 208 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_left
# 209 "data/maps/FrigidPath/scripts.pory"
	step_end
# 210 "data/maps/FrigidPath/scripts.pory"

# 211 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 212 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 213 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 214 "data/maps/FrigidPath/scripts.pory"
	step_end
# 215 "data/maps/FrigidPath/scripts.pory"

# 216 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 217 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 218 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 219 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 220 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 221 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 222 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 223 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 224 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 225 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 226 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 227 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 228 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 229 "data/maps/FrigidPath/scripts.pory"
	step_end
# 230 "data/maps/FrigidPath/scripts.pory"

# 231 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 232 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 233 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 234 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 235 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 236 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 237 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 238 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 239 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 240 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 241 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 242 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 243 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 244 "data/maps/FrigidPath/scripts.pory"
	step_end
# 245 "data/maps/FrigidPath/scripts.pory"

# 246 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 247 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 248 "data/maps/FrigidPath/scripts.pory"
	step_end
# 249 "data/maps/FrigidPath/scripts.pory"

# 250 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 251 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_up
# 252 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_up
# 253 "data/maps/FrigidPath/scripts.pory"
	walk_fast_up
# 254 "data/maps/FrigidPath/scripts.pory"
	walk_fast_right
# 255 "data/maps/FrigidPath/scripts.pory"
	step_end
# 256 "data/maps/FrigidPath/scripts.pory"

# 257 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 258 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_right
# 259 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_right
# 260 "data/maps/FrigidPath/scripts.pory"
	walk_fast_right
# 261 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 262 "data/maps/FrigidPath/scripts.pory"
	step_end
# 263 "data/maps/FrigidPath/scripts.pory"

# 264 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 265 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_TEMP_1, 1
# 266 "data/maps/FrigidPath/scripts.pory"
	end
# 267 "data/maps/FrigidPath/scripts.pory"

# 268 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 269 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_TEMP_1, 2
# 270 "data/maps/FrigidPath/scripts.pory"
	end
# 271 "data/maps/FrigidPath/scripts.pory"

# 272 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 273 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_TEMP_1, 3
# 274 "data/maps/FrigidPath/scripts.pory"
	end
# 275 "data/maps/FrigidPath/scripts.pory"

# 276 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 277 "data/maps/FrigidPath/scripts.pory"
	lockall
# 278 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 279 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 280 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 281 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 282 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 283 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 284 "data/maps/FrigidPath/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 285 "data/maps/FrigidPath/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 286 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 287 "data/maps/FrigidPath/scripts.pory"
	releaseall
# 288 "data/maps/FrigidPath/scripts.pory"
	end
# 289 "data/maps/FrigidPath/scripts.pory"

# 290 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 291 "data/maps/FrigidPath/scripts.pory"
	lock_facing_direction
# 292 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 293 "data/maps/FrigidPath/scripts.pory"
	unlock_facing_direction
# 294 "data/maps/FrigidPath/scripts.pory"
	step_end
# 295 "data/maps/FrigidPath/scripts.pory"

# 296 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 297 "data/maps/FrigidPath/scripts.pory"
	lock
# 298 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 299 "data/maps/FrigidPath/scripts.pory"
	waitse
# 300 "data/maps/FrigidPath/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 301 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 302 "data/maps/FrigidPath/scripts.pory"
	waitmoncry
# 303 "data/maps/FrigidPath/scripts.pory"
	release
# 304 "data/maps/FrigidPath/scripts.pory"
	end
# 305 "data/maps/FrigidPath/scripts.pory"

# 306 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 307 "data/maps/FrigidPath/scripts.pory"
	lock
# 308 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 309 "data/maps/FrigidPath/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 310 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 311 "data/maps/FrigidPath/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 312 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 313 "data/maps/FrigidPath/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 314 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 315 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 316 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 317 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 318 "data/maps/FrigidPath/scripts.pory"
	removeobject LOCALID_GRUNT
# 319 "data/maps/FrigidPath/scripts.pory"
	delay 50
# 320 "data/maps/FrigidPath/scripts.pory"
	addobject LOCALID_BRINEY
# 321 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 322 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 323 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 324 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 325 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 326 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 327 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 328 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 329 "data/maps/FrigidPath/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 330 "data/maps/FrigidPath/scripts.pory"
	waitmessage
# 331 "data/maps/FrigidPath/scripts.pory"
	waitse
# 332 "data/maps/FrigidPath/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 333 "data/maps/FrigidPath/scripts.pory"
	waitbuttonpress
# 334 "data/maps/FrigidPath/scripts.pory"
	waitmoncry
# 335 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 336 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 337 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 338 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 339 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 340 "data/maps/FrigidPath/scripts.pory"
	removeobject LOCALID_BRINEY
# 341 "data/maps/FrigidPath/scripts.pory"
	removeobject LOCALID_PEEKO
# 342 "data/maps/FrigidPath/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 343 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 344 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 4
# 345 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 346 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 347 "data/maps/FrigidPath/scripts.pory"
	release
# 348 "data/maps/FrigidPath/scripts.pory"
	end
# 349 "data/maps/FrigidPath/scripts.pory"

# 350 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 351 "data/maps/FrigidPath/scripts.pory"
	face_down
# 352 "data/maps/FrigidPath/scripts.pory"
	lock_facing_direction
# 353 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 354 "data/maps/FrigidPath/scripts.pory"
	unlock_facing_direction
# 355 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_left
# 356 "data/maps/FrigidPath/scripts.pory"
	step_end
# 357 "data/maps/FrigidPath/scripts.pory"

# 358 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 359 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 360 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 361 "data/maps/FrigidPath/scripts.pory"
	step_end
# 362 "data/maps/FrigidPath/scripts.pory"

# 363 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 364 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 365 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 366 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 367 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 368 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 369 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 370 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 371 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 372 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 373 "data/maps/FrigidPath/scripts.pory"
	step_end
# 374 "data/maps/FrigidPath/scripts.pory"

# 375 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 376 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 377 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 378 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 379 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 380 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 381 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 382 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 383 "data/maps/FrigidPath/scripts.pory"
	step_end
# 384 "data/maps/FrigidPath/scripts.pory"

# 385 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 386 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 387 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 388 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 389 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 390 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 391 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 392 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 393 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 394 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 395 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 396 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 397 "data/maps/FrigidPath/scripts.pory"
	step_end
# 398 "data/maps/FrigidPath/scripts.pory"

# 399 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 400 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 401 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 402 "data/maps/FrigidPath/scripts.pory"
	delay_4
# 403 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_left
# 404 "data/maps/FrigidPath/scripts.pory"
	step_end
# 405 "data/maps/FrigidPath/scripts.pory"

# 406 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 407 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 408 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 409 "data/maps/FrigidPath/scripts.pory"
	step_end
# 410 "data/maps/FrigidPath/scripts.pory"

# 411 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 412 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 413 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 414 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 415 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 416 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 417 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 418 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 419 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 420 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 421 "data/maps/FrigidPath/scripts.pory"
	step_end
# 422 "data/maps/FrigidPath/scripts.pory"

# 423 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 424 "data/maps/FrigidPath/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 425 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 426 "data/maps/FrigidPath/scripts.pory"
	end
# 427 "data/maps/FrigidPath/scripts.pory"

# 428 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 429 "data/maps/FrigidPath/scripts.pory"
	.string "What, are you coming?\n"
# 430 "data/maps/FrigidPath/scripts.pory"
	.string "Come and get some, then!$"
# 431 "data/maps/FrigidPath/scripts.pory"

# 432 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_Peeko:
# 433 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 434 "data/maps/FrigidPath/scripts.pory"

# 435 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 436 "data/maps/FrigidPath/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 437 "data/maps/FrigidPath/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 438 "data/maps/FrigidPath/scripts.pory"
	.string "be worthless!\p"
# 439 "data/maps/FrigidPath/scripts.pory"
	.string "And to think I made a getaway…\n"
# 440 "data/maps/FrigidPath/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 441 "data/maps/FrigidPath/scripts.pory"
	.string "Hey! You!\n"
# 442 "data/maps/FrigidPath/scripts.pory"
	.string "So you want to battle me?$"
# 443 "data/maps/FrigidPath/scripts.pory"

# 444 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 445 "data/maps/FrigidPath/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 446 "data/maps/FrigidPath/scripts.pory"
	.string "a dead end!$"
# 447 "data/maps/FrigidPath/scripts.pory"

# 448 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 449 "data/maps/FrigidPath/scripts.pory"
	.string "This is plain not right…\p"
# 450 "data/maps/FrigidPath/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 451 "data/maps/FrigidPath/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 452 "data/maps/FrigidPath/scripts.pory"
	.string "All I had to do was steal some package\n"
# 453 "data/maps/FrigidPath/scripts.pory"
	.string "from DEVON.\p"
# 454 "data/maps/FrigidPath/scripts.pory"
	.string "Tch!\n"
# 455 "data/maps/FrigidPath/scripts.pory"
	.string "You want it back that badly, take it!$"
# 456 "data/maps/FrigidPath/scripts.pory"

# 457 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 458 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO!\n"
# 459 "data/maps/FrigidPath/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 460 "data/maps/FrigidPath/scripts.pory"

# 461 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 462 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 463 "data/maps/FrigidPath/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 464 "data/maps/FrigidPath/scripts.pory"
	.string "And, you are?\p"
# 465 "data/maps/FrigidPath/scripts.pory"
	.string "… … … … … … … …\n"
# 466 "data/maps/FrigidPath/scripts.pory"
	.string "… … … … … … … …\p"
# 467 "data/maps/FrigidPath/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 468 "data/maps/FrigidPath/scripts.pory"
	.string "I sincerely thank you!\p"
# 469 "data/maps/FrigidPath/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 470 "data/maps/FrigidPath/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 471 "data/maps/FrigidPath/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 472 "data/maps/FrigidPath/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 473 "data/maps/FrigidPath/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 474 "data/maps/FrigidPath/scripts.pory"
	.string "home.\p"
# 475 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 476 "data/maps/FrigidPath/scripts.pory"

# 477 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 478 "data/maps/FrigidPath/scripts.pory"
	.string "… …\p"
# 479 "data/maps/FrigidPath/scripts.pory"
	.string "Why can't they keep digging?\n"
# 480 "data/maps/FrigidPath/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 481 "data/maps/FrigidPath/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 482 "data/maps/FrigidPath/scripts.pory"
	.string "TOWN just beyond here…\p"
# 483 "data/maps/FrigidPath/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 484 "data/maps/FrigidPath/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 485 "data/maps/FrigidPath/scripts.pory"
	.string "her every day…\p"
# 486 "data/maps/FrigidPath/scripts.pory"
	.string "But this…\n"
# 487 "data/maps/FrigidPath/scripts.pory"
	.string "What am I to do?$"
# 488 "data/maps/FrigidPath/scripts.pory"

# 489 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 490 "data/maps/FrigidPath/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 491 "data/maps/FrigidPath/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 492 "data/maps/FrigidPath/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 493 "data/maps/FrigidPath/scripts.pory"

# 494 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 495 "data/maps/FrigidPath/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 496 "data/maps/FrigidPath/scripts.pory"
	.string "blocking the way.\p"
# 497 "data/maps/FrigidPath/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 498 "data/maps/FrigidPath/scripts.pory"
	.string "I'd like you to have this HM.$"
# 499 "data/maps/FrigidPath/scripts.pory"

# 500 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 501 "data/maps/FrigidPath/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 502 "data/maps/FrigidPath/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 503 "data/maps/FrigidPath/scripts.pory"
	.string "that, it would be able to move even\l"
# 504 "data/maps/FrigidPath/scripts.pory"
	.string "large boulders.$"
# 505 "data/maps/FrigidPath/scripts.pory"

# 506 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 507 "data/maps/FrigidPath/scripts.pory"
	.string "WANDA!\n"
# 508 "data/maps/FrigidPath/scripts.pory"
	.string "Now I can see you anytime!\p"
# 509 "data/maps/FrigidPath/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 510 "data/maps/FrigidPath/scripts.pory"
	.string "Please, take some rest at my home.$"
# 511 "data/maps/FrigidPath/scripts.pory"

# 512 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 513 "data/maps/FrigidPath/scripts.pory"
	.string "On the other side of this rock…\n"
# 514 "data/maps/FrigidPath/scripts.pory"
	.string "My boyfriend is there.\p"
# 515 "data/maps/FrigidPath/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 516 "data/maps/FrigidPath/scripts.pory"
	.string "to come see me.\p"
# 517 "data/maps/FrigidPath/scripts.pory"
	.string "He works his hands raw and rough\n"
# 518 "data/maps/FrigidPath/scripts.pory"
	.string "for the benefit of everyone.$"
# 519 "data/maps/FrigidPath/scripts.pory"

# 520 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 521 "data/maps/FrigidPath/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 522 "data/maps/FrigidPath/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 523 "data/maps/FrigidPath/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 524 "data/maps/FrigidPath/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 525 "data/maps/FrigidPath/scripts.pory"

# 526 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 527 "data/maps/FrigidPath/scripts.pory"
	.string "My POKéMON…\n"
# 528 "data/maps/FrigidPath/scripts.pory"
	.string "Ran out of power…$"
# 529 "data/maps/FrigidPath/scripts.pory"

# 530 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 531 "data/maps/FrigidPath/scripts.pory"
	.string "They halted development here to\n"
# 532 "data/maps/FrigidPath/scripts.pory"
	.string "protect POKéMON, right?\l"
# 533 "data/maps/FrigidPath/scripts.pory"
	.string "There's a feel-good story!$"
