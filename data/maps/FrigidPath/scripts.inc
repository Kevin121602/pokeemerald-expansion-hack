FrigidPath_MapScripts::
	.byte 0


FrigidPath_EventScript_Sawyer::
# 4 "data/maps/FrigidPath/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_1, FrigidPath_Text_SawyerIntro, FrigidPath_Text_SawyerDefeat
# 5 "data/maps/FrigidPath/scripts.pory"
	msgbox FrigidPath_Text_SawyerPostBattle, MSGBOX_AUTOCLOSE
	end


FrigidPath_EventScript_FindEscapeRope::
# 22 "data/maps/FrigidPath/scripts.pory"
	finditem ITEM_ESCAPE_ROPE
	end


# 26 "data/maps/FrigidPath/scripts.pory"

# 27 "data/maps/FrigidPath/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 28 "data/maps/FrigidPath/scripts.pory"
.set LOCALID_BRINEY, 5
# 29 "data/maps/FrigidPath/scripts.pory"
.set LOCALID_GRUNT, 6
# 30 "data/maps/FrigidPath/scripts.pory"
.set LOCALID_PEEKO, 7
# 31 "data/maps/FrigidPath/scripts.pory"
.equ LOCALID_WANDA, 10
# 32 "data/maps/FrigidPath/scripts.pory"

# 33 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_MapScripts::
# 34 "data/maps/FrigidPath/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 35 "data/maps/FrigidPath/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 36 "data/maps/FrigidPath/scripts.pory"
	.byte 0
# 37 "data/maps/FrigidPath/scripts.pory"

# 38 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_OnFrame:
# 39 "data/maps/FrigidPath/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 4, RusturfTunnel_EventScript_ClearTunnelScene
# 40 "data/maps/FrigidPath/scripts.pory"
	map_script_2 VAR_RUSTURF_TUNNEL_STATE, 5, RusturfTunnel_EventScript_ClearTunnelScene
# 41 "data/maps/FrigidPath/scripts.pory"
	.2byte 0
# 42 "data/maps/FrigidPath/scripts.pory"

# 43 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_OnTransition:
# 44 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 45 "data/maps/FrigidPath/scripts.pory"
	end
# 46 "data/maps/FrigidPath/scripts.pory"

# 47 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 48 "data/maps/FrigidPath/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 49 "data/maps/FrigidPath/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 50 "data/maps/FrigidPath/scripts.pory"
	return
# 51 "data/maps/FrigidPath/scripts.pory"

# 52 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 53 "data/maps/FrigidPath/scripts.pory"
	lock
# 54 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 55 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 56 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 57 "data/maps/FrigidPath/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 58 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 59 "data/maps/FrigidPath/scripts.pory"
	release
# 60 "data/maps/FrigidPath/scripts.pory"
	end
# 61 "data/maps/FrigidPath/scripts.pory"

# 62 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 63 "data/maps/FrigidPath/scripts.pory"
	lock
# 64 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 65 "data/maps/FrigidPath/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 66 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_TEMP_1
# 67 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 68 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 69 "data/maps/FrigidPath/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 70 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 71 "data/maps/FrigidPath/scripts.pory"
	release
# 72 "data/maps/FrigidPath/scripts.pory"
	end
# 73 "data/maps/FrigidPath/scripts.pory"

# 74 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 75 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 76 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 77 "data/maps/FrigidPath/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 78 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 79 "data/maps/FrigidPath/scripts.pory"
	release
# 80 "data/maps/FrigidPath/scripts.pory"
	end
# 81 "data/maps/FrigidPath/scripts.pory"

# 82 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 83 "data/maps/FrigidPath/scripts.pory"
	lockall
# 84 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 85 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 86 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 87 "data/maps/FrigidPath/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 88 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 89 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 90 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 91 "data/maps/FrigidPath/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 92 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 93 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 94 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 95 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 96 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 97 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 98 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 99 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 100 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 101 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 102 "data/maps/FrigidPath/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 103 "data/maps/FrigidPath/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 104 "data/maps/FrigidPath/scripts.pory"
	releaseall
# 105 "data/maps/FrigidPath/scripts.pory"
	end
# 106 "data/maps/FrigidPath/scripts.pory"

# 107 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 108 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend1
# 109 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda1
# 110 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 111 "data/maps/FrigidPath/scripts.pory"
	return
# 112 "data/maps/FrigidPath/scripts.pory"

# 113 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 114 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 115 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 116 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 117 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 118 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 119 "data/maps/FrigidPath/scripts.pory"
	return
# 120 "data/maps/FrigidPath/scripts.pory"

# 121 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 122 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBoyfriend
# 123 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendApproachWanda
# 124 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 125 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, Common_Movement_WalkInPlaceFasterDown
# 126 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 127 "data/maps/FrigidPath/scripts.pory"
	return
# 128 "data/maps/FrigidPath/scripts.pory"

# 129 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 130 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_WalkInPlaceFasterUp
# 131 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 132 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 133 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 134 "data/maps/FrigidPath/scripts.pory"
	return
# 135 "data/maps/FrigidPath/scripts.pory"

# 136 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 137 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_BoyfriendFaceRight
# 138 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 139 "data/maps/FrigidPath/scripts.pory"
	return
# 140 "data/maps/FrigidPath/scripts.pory"

# 141 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 142 "data/maps/FrigidPath/scripts.pory"
	return
# 143 "data/maps/FrigidPath/scripts.pory"

# 144 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 145 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 146 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendApproachPlayer
# 147 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 148 "data/maps/FrigidPath/scripts.pory"
	return
# 149 "data/maps/FrigidPath/scripts.pory"

# 150 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 151 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit1
# 152 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit1
# 153 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 154 "data/maps/FrigidPath/scripts.pory"
	return
# 155 "data/maps/FrigidPath/scripts.pory"

# 156 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 157 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchWandaExit
# 158 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDA, RusturfTunnel_Movement_WandaExit
# 159 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, RusturfTunnel_Movement_WandasBoyfriendExit
# 160 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 161 "data/maps/FrigidPath/scripts.pory"
	return
# 162 "data/maps/FrigidPath/scripts.pory"

# 163 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 164 "data/maps/FrigidPath/scripts.pory"
	playse SE_PIN
# 165 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_ExclamationMark
# 166 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 167 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_WANDAS_BF, Common_Movement_Delay48
# 168 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 169 "data/maps/FrigidPath/scripts.pory"
	return
# 170 "data/maps/FrigidPath/scripts.pory"

# 171 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 172 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 173 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 174 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 175 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 176 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 177 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 178 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 179 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 180 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 181 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 182 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 183 "data/maps/FrigidPath/scripts.pory"
	step_end
# 184 "data/maps/FrigidPath/scripts.pory"

# 185 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 186 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 187 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 188 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 189 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 190 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 191 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 192 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 193 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 194 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 195 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 196 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 197 "data/maps/FrigidPath/scripts.pory"
	step_end
# 198 "data/maps/FrigidPath/scripts.pory"

# 199 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 200 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 201 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 203 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 204 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 205 "data/maps/FrigidPath/scripts.pory"
	step_end
# 206 "data/maps/FrigidPath/scripts.pory"

# 207 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 208 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 209 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 210 "data/maps/FrigidPath/scripts.pory"
	step_end
# 211 "data/maps/FrigidPath/scripts.pory"

# 212 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 213 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 214 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 215 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 216 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 217 "data/maps/FrigidPath/scripts.pory"
	step_end
# 218 "data/maps/FrigidPath/scripts.pory"

# 219 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 220 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 221 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_down
# 222 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 223 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 224 "data/maps/FrigidPath/scripts.pory"
	step_end
# 225 "data/maps/FrigidPath/scripts.pory"

# 226 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 227 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 228 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 229 "data/maps/FrigidPath/scripts.pory"
	step_end
# 230 "data/maps/FrigidPath/scripts.pory"

# 231 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 232 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 233 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_left
# 234 "data/maps/FrigidPath/scripts.pory"
	step_end
# 235 "data/maps/FrigidPath/scripts.pory"

# 236 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 237 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 238 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_right
# 239 "data/maps/FrigidPath/scripts.pory"
	step_end
# 240 "data/maps/FrigidPath/scripts.pory"

# 241 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 242 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 243 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 244 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 245 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 246 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 247 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 248 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 249 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 250 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 251 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 252 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 253 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 254 "data/maps/FrigidPath/scripts.pory"
	step_end
# 255 "data/maps/FrigidPath/scripts.pory"

# 256 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 257 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 258 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 259 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 260 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 261 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 262 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 263 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 264 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 265 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 266 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 267 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 268 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 269 "data/maps/FrigidPath/scripts.pory"
	step_end
# 270 "data/maps/FrigidPath/scripts.pory"

# 271 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 272 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 273 "data/maps/FrigidPath/scripts.pory"
	step_end
# 274 "data/maps/FrigidPath/scripts.pory"

# 275 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 276 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_up
# 277 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_up
# 278 "data/maps/FrigidPath/scripts.pory"
	walk_fast_up
# 279 "data/maps/FrigidPath/scripts.pory"
	walk_fast_right
# 280 "data/maps/FrigidPath/scripts.pory"
	step_end
# 281 "data/maps/FrigidPath/scripts.pory"

# 282 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 283 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_right
# 284 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_fast_right
# 285 "data/maps/FrigidPath/scripts.pory"
	walk_fast_right
# 286 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 287 "data/maps/FrigidPath/scripts.pory"
	step_end
# 288 "data/maps/FrigidPath/scripts.pory"

# 289 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 290 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_TEMP_1, 1
# 291 "data/maps/FrigidPath/scripts.pory"
	end
# 292 "data/maps/FrigidPath/scripts.pory"

# 293 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 294 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_TEMP_1, 2
# 295 "data/maps/FrigidPath/scripts.pory"
	end
# 296 "data/maps/FrigidPath/scripts.pory"

# 297 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 298 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_TEMP_1, 3
# 299 "data/maps/FrigidPath/scripts.pory"
	end
# 300 "data/maps/FrigidPath/scripts.pory"

# 301 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 302 "data/maps/FrigidPath/scripts.pory"
	lockall
# 303 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 304 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 305 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 306 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 307 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 308 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 309 "data/maps/FrigidPath/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 310 "data/maps/FrigidPath/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 311 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 312 "data/maps/FrigidPath/scripts.pory"
	releaseall
# 313 "data/maps/FrigidPath/scripts.pory"
	end
# 314 "data/maps/FrigidPath/scripts.pory"

# 315 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 316 "data/maps/FrigidPath/scripts.pory"
	lock_facing_direction
# 317 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 318 "data/maps/FrigidPath/scripts.pory"
	unlock_facing_direction
# 319 "data/maps/FrigidPath/scripts.pory"
	step_end
# 320 "data/maps/FrigidPath/scripts.pory"

# 321 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 322 "data/maps/FrigidPath/scripts.pory"
	lock
# 323 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 324 "data/maps/FrigidPath/scripts.pory"
	waitse
# 325 "data/maps/FrigidPath/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 326 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 327 "data/maps/FrigidPath/scripts.pory"
	waitmoncry
# 328 "data/maps/FrigidPath/scripts.pory"
	release
# 329 "data/maps/FrigidPath/scripts.pory"
	end
# 330 "data/maps/FrigidPath/scripts.pory"

# 331 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 332 "data/maps/FrigidPath/scripts.pory"
	lock
# 333 "data/maps/FrigidPath/scripts.pory"
	faceplayer
# 334 "data/maps/FrigidPath/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 335 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 336 "data/maps/FrigidPath/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 337 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 338 "data/maps/FrigidPath/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 339 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 340 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 341 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 342 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 343 "data/maps/FrigidPath/scripts.pory"
	removeobject LOCALID_GRUNT
# 344 "data/maps/FrigidPath/scripts.pory"
	delay 50
# 345 "data/maps/FrigidPath/scripts.pory"
	addobject LOCALID_BRINEY
# 346 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 347 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 348 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 349 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 350 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 351 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 352 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 353 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 354 "data/maps/FrigidPath/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 355 "data/maps/FrigidPath/scripts.pory"
	waitmessage
# 356 "data/maps/FrigidPath/scripts.pory"
	waitse
# 357 "data/maps/FrigidPath/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 358 "data/maps/FrigidPath/scripts.pory"
	waitbuttonpress
# 359 "data/maps/FrigidPath/scripts.pory"
	waitmoncry
# 360 "data/maps/FrigidPath/scripts.pory"
	closemessage
# 361 "data/maps/FrigidPath/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 362 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 363 "data/maps/FrigidPath/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 364 "data/maps/FrigidPath/scripts.pory"
	waitmovement 0
# 365 "data/maps/FrigidPath/scripts.pory"
	removeobject LOCALID_BRINEY
# 366 "data/maps/FrigidPath/scripts.pory"
	removeobject LOCALID_PEEKO
# 367 "data/maps/FrigidPath/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 368 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 369 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_SPIRAL_CITY_STATE, 4
# 370 "data/maps/FrigidPath/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 371 "data/maps/FrigidPath/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 372 "data/maps/FrigidPath/scripts.pory"
	release
# 373 "data/maps/FrigidPath/scripts.pory"
	end
# 374 "data/maps/FrigidPath/scripts.pory"

# 375 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 376 "data/maps/FrigidPath/scripts.pory"
	face_down
# 377 "data/maps/FrigidPath/scripts.pory"
	lock_facing_direction
# 378 "data/maps/FrigidPath/scripts.pory"
	walk_up
# 379 "data/maps/FrigidPath/scripts.pory"
	unlock_facing_direction
# 380 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_left
# 381 "data/maps/FrigidPath/scripts.pory"
	step_end
# 382 "data/maps/FrigidPath/scripts.pory"

# 383 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 384 "data/maps/FrigidPath/scripts.pory"
	walk_down
# 385 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_up
# 386 "data/maps/FrigidPath/scripts.pory"
	step_end
# 387 "data/maps/FrigidPath/scripts.pory"

# 388 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 389 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 390 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 391 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 392 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 393 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 394 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 395 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 396 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 397 "data/maps/FrigidPath/scripts.pory"
	walk_fast_left
# 398 "data/maps/FrigidPath/scripts.pory"
	step_end
# 399 "data/maps/FrigidPath/scripts.pory"

# 400 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 401 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 402 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 403 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 404 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 405 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 406 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 407 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 408 "data/maps/FrigidPath/scripts.pory"
	step_end
# 409 "data/maps/FrigidPath/scripts.pory"

# 410 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 411 "data/maps/FrigidPath/scripts.pory"
	walk_left
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
	walk_left
# 422 "data/maps/FrigidPath/scripts.pory"
	step_end
# 423 "data/maps/FrigidPath/scripts.pory"

# 424 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 425 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 426 "data/maps/FrigidPath/scripts.pory"
	delay_8
# 427 "data/maps/FrigidPath/scripts.pory"
	delay_4
# 428 "data/maps/FrigidPath/scripts.pory"
	walk_in_place_faster_left
# 429 "data/maps/FrigidPath/scripts.pory"
	step_end
# 430 "data/maps/FrigidPath/scripts.pory"

# 431 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 432 "data/maps/FrigidPath/scripts.pory"
	delay_16
# 433 "data/maps/FrigidPath/scripts.pory"
	walk_right
# 434 "data/maps/FrigidPath/scripts.pory"
	step_end
# 435 "data/maps/FrigidPath/scripts.pory"

# 436 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 437 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 438 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 439 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 440 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 441 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 442 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 443 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 444 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 445 "data/maps/FrigidPath/scripts.pory"
	walk_left
# 446 "data/maps/FrigidPath/scripts.pory"
	step_end
# 447 "data/maps/FrigidPath/scripts.pory"

# 448 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 449 "data/maps/FrigidPath/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 450 "data/maps/FrigidPath/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 451 "data/maps/FrigidPath/scripts.pory"
	end
# 452 "data/maps/FrigidPath/scripts.pory"

# 453 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 454 "data/maps/FrigidPath/scripts.pory"
	.string "What, are you coming?\n"
# 455 "data/maps/FrigidPath/scripts.pory"
	.string "Come and get some, then!$"
# 456 "data/maps/FrigidPath/scripts.pory"

# 457 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_Peeko:
# 458 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO: Pii pihyoh!$"
# 459 "data/maps/FrigidPath/scripts.pory"

# 460 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 461 "data/maps/FrigidPath/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 462 "data/maps/FrigidPath/scripts.pory"
	.string "That hostage POKéMON turned out to\n"
# 463 "data/maps/FrigidPath/scripts.pory"
	.string "be worthless!\p"
# 464 "data/maps/FrigidPath/scripts.pory"
	.string "And to think I made a getaway…\n"
# 465 "data/maps/FrigidPath/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 466 "data/maps/FrigidPath/scripts.pory"
	.string "Hey! You!\n"
# 467 "data/maps/FrigidPath/scripts.pory"
	.string "So you want to battle me?$"
# 468 "data/maps/FrigidPath/scripts.pory"

# 469 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 470 "data/maps/FrigidPath/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 471 "data/maps/FrigidPath/scripts.pory"
	.string "a dead end!$"
# 472 "data/maps/FrigidPath/scripts.pory"

# 473 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 474 "data/maps/FrigidPath/scripts.pory"
	.string "This is plain not right…\p"
# 475 "data/maps/FrigidPath/scripts.pory"
	.string "The BOSS told me this would be a\n"
# 476 "data/maps/FrigidPath/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 477 "data/maps/FrigidPath/scripts.pory"
	.string "All I had to do was steal some package\n"
# 478 "data/maps/FrigidPath/scripts.pory"
	.string "from DEVON.\p"
# 479 "data/maps/FrigidPath/scripts.pory"
	.string "Tch!\n"
# 480 "data/maps/FrigidPath/scripts.pory"
	.string "You want it back that badly, take it!$"
# 481 "data/maps/FrigidPath/scripts.pory"

# 482 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 483 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO!\n"
# 484 "data/maps/FrigidPath/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 485 "data/maps/FrigidPath/scripts.pory"

# 486 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 487 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO owes her life to you!\p"
# 488 "data/maps/FrigidPath/scripts.pory"
	.string "They call me MR. BRINEY.\n"
# 489 "data/maps/FrigidPath/scripts.pory"
	.string "And, you are?\p"
# 490 "data/maps/FrigidPath/scripts.pory"
	.string "… … … … … … … …\n"
# 491 "data/maps/FrigidPath/scripts.pory"
	.string "… … … … … … … …\p"
# 492 "data/maps/FrigidPath/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 493 "data/maps/FrigidPath/scripts.pory"
	.string "I sincerely thank you!\p"
# 494 "data/maps/FrigidPath/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 495 "data/maps/FrigidPath/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 496 "data/maps/FrigidPath/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 497 "data/maps/FrigidPath/scripts.pory"
	.string "by the sea near PETALBURG WOODS.\p"
# 498 "data/maps/FrigidPath/scripts.pory"
	.string "Come, PEEKO, we should make our way\n"
# 499 "data/maps/FrigidPath/scripts.pory"
	.string "home.\p"
# 500 "data/maps/FrigidPath/scripts.pory"
	.string "PEEKO: Pihyoh!$"
# 501 "data/maps/FrigidPath/scripts.pory"

# 502 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 503 "data/maps/FrigidPath/scripts.pory"
	.string "… …\p"
# 504 "data/maps/FrigidPath/scripts.pory"
	.string "Why can't they keep digging?\n"
# 505 "data/maps/FrigidPath/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 506 "data/maps/FrigidPath/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 507 "data/maps/FrigidPath/scripts.pory"
	.string "TOWN just beyond here…\p"
# 508 "data/maps/FrigidPath/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 509 "data/maps/FrigidPath/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 510 "data/maps/FrigidPath/scripts.pory"
	.string "her every day…\p"
# 511 "data/maps/FrigidPath/scripts.pory"
	.string "But this…\n"
# 512 "data/maps/FrigidPath/scripts.pory"
	.string "What am I to do?$"
# 513 "data/maps/FrigidPath/scripts.pory"

# 514 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 515 "data/maps/FrigidPath/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 516 "data/maps/FrigidPath/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 517 "data/maps/FrigidPath/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 518 "data/maps/FrigidPath/scripts.pory"

# 519 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 520 "data/maps/FrigidPath/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 521 "data/maps/FrigidPath/scripts.pory"
	.string "blocking the way.\p"
# 522 "data/maps/FrigidPath/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 523 "data/maps/FrigidPath/scripts.pory"
	.string "I'd like you to have this HM.$"
# 524 "data/maps/FrigidPath/scripts.pory"

# 525 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 526 "data/maps/FrigidPath/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 527 "data/maps/FrigidPath/scripts.pory"
	.string "If a muscular POKéMON were to learn\n"
# 528 "data/maps/FrigidPath/scripts.pory"
	.string "that, it would be able to move even\l"
# 529 "data/maps/FrigidPath/scripts.pory"
	.string "large boulders.$"
# 530 "data/maps/FrigidPath/scripts.pory"

# 531 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 532 "data/maps/FrigidPath/scripts.pory"
	.string "WANDA!\n"
# 533 "data/maps/FrigidPath/scripts.pory"
	.string "Now I can see you anytime!\p"
# 534 "data/maps/FrigidPath/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 535 "data/maps/FrigidPath/scripts.pory"
	.string "Please, take some rest at my home.$"
# 536 "data/maps/FrigidPath/scripts.pory"

# 537 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 538 "data/maps/FrigidPath/scripts.pory"
	.string "On the other side of this rock…\n"
# 539 "data/maps/FrigidPath/scripts.pory"
	.string "My boyfriend is there.\p"
# 540 "data/maps/FrigidPath/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 541 "data/maps/FrigidPath/scripts.pory"
	.string "to come see me.\p"
# 542 "data/maps/FrigidPath/scripts.pory"
	.string "He works his hands raw and rough\n"
# 543 "data/maps/FrigidPath/scripts.pory"
	.string "for the benefit of everyone.$"
# 544 "data/maps/FrigidPath/scripts.pory"

# 545 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 546 "data/maps/FrigidPath/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 547 "data/maps/FrigidPath/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 548 "data/maps/FrigidPath/scripts.pory"
	.string "So why don't they call a POKéMON in\n"
# 549 "data/maps/FrigidPath/scripts.pory"
	.string "the mountains a mountain POKéMON?$"
# 550 "data/maps/FrigidPath/scripts.pory"

# 551 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 552 "data/maps/FrigidPath/scripts.pory"
	.string "My POKéMON…\n"
# 553 "data/maps/FrigidPath/scripts.pory"
	.string "Ran out of power…$"
# 554 "data/maps/FrigidPath/scripts.pory"

# 555 "data/maps/FrigidPath/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 556 "data/maps/FrigidPath/scripts.pory"
	.string "They halted development here to\n"
# 557 "data/maps/FrigidPath/scripts.pory"
	.string "protect POKéMON, right?\l"
# 558 "data/maps/FrigidPath/scripts.pory"
	.string "There's a feel-good story!$"

FrigidPath_Text_SawyerIntro::
# 9 "data/maps/FrigidPath/scripts.pory"
	.string "This is one fine cave! It's plenty\n"
	.string "chilly!$"

FrigidPath_Text_SawyerDefeat::
# 13 "data/maps/FrigidPath/scripts.pory"
	.string "Oh, you're real cool, too!$"

FrigidPath_Text_SawyerPostBattle::
# 17 "data/maps/FrigidPath/scripts.pory"
	.string "I think I need a dip in Seashell Beach!$"
