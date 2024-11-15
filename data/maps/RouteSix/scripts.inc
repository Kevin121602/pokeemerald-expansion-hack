# 1 "data/maps/RouteSix/scripts.pory"

# 2 "data/maps/RouteSix/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 3 "data/maps/RouteSix/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 4 "data/maps/RouteSix/scripts.pory"

# 5 "data/maps/RouteSix/scripts.pory"
RouteSix_MapScripts::
# 6 "data/maps/RouteSix/scripts.pory"
	.byte 0
# 7 "data/maps/RouteSix/scripts.pory"

# 8 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 9 "data/maps/RouteSix/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 10 "data/maps/RouteSix/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE_SIX, 0
# 11 "data/maps/RouteSix/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE_SIX, 0
# 12 "data/maps/RouteSix/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 13 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 14 "data/maps/RouteSix/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 15 "data/maps/RouteSix/scripts.pory"
	switch VAR_FACING
# 16 "data/maps/RouteSix/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 17 "data/maps/RouteSix/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 18 "data/maps/RouteSix/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 19 "data/maps/RouteSix/scripts.pory"
	end
# 20 "data/maps/RouteSix/scripts.pory"

# 21 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 22 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 23 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 24 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 25 "data/maps/RouteSix/scripts.pory"
	end
# 26 "data/maps/RouteSix/scripts.pory"

# 27 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 28 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 29 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 30 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 31 "data/maps/RouteSix/scripts.pory"
	end
# 32 "data/maps/RouteSix/scripts.pory"

# 33 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 34 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 35 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 36 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 37 "data/maps/RouteSix/scripts.pory"
	end
# 38 "data/maps/RouteSix/scripts.pory"

# 39 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 40 "data/maps/RouteSix/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE_SIX
# 41 "data/maps/RouteSix/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 42 "data/maps/RouteSix/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 43 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 44 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 45 "data/maps/RouteSix/scripts.pory"
	delay 50
# 46 "data/maps/RouteSix/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 47 "data/maps/RouteSix/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 48 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 49 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 50 "data/maps/RouteSix/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 51 "data/maps/RouteSix/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 52 "data/maps/RouteSix/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 53 "data/maps/RouteSix/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 54 "data/maps/RouteSix/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 55 "data/maps/RouteSix/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 56 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 57 "data/maps/RouteSix/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 58 "data/maps/RouteSix/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 59 "data/maps/RouteSix/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE_SIX
# 60 "data/maps/RouteSix/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 61 "data/maps/RouteSix/scripts.pory"
	closemessage
# 62 "data/maps/RouteSix/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 63 "data/maps/RouteSix/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE_SIX
# 64 "data/maps/RouteSix/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 65 "data/maps/RouteSix/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 66 "data/maps/RouteSix/scripts.pory"
	release
# 67 "data/maps/RouteSix/scripts.pory"
	end
# 68 "data/maps/RouteSix/scripts.pory"

# 69 "data/maps/RouteSix/scripts.pory"
Route109_Movement_SailToDewford:
# 70 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_down
# 71 "data/maps/RouteSix/scripts.pory"
	walk_down
# 72 "data/maps/RouteSix/scripts.pory"
	walk_down
# 73 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 74 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 75 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 76 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 77 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 78 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 79 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 80 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 81 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 82 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 83 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 84 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 85 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 86 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 87 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 88 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 89 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 90 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 91 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 92 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 93 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 94 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 95 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 96 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 97 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 98 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 99 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 100 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 101 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 102 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 103 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 104 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 105 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 106 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 107 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 108 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 109 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 110 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 111 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 112 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 113 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 114 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 115 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 116 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 117 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 118 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 119 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 120 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 121 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 122 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 123 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 124 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 125 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 126 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 127 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 128 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 129 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 130 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 131 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 132 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 133 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 134 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 135 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 136 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 137 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 138 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 139 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 140 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 141 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 142 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 143 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 144 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 145 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 146 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 147 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 148 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 149 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 150 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 151 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 152 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 153 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 154 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 155 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 156 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 157 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 158 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 159 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 160 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 161 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 162 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 163 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 164 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 165 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 166 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 167 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 168 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 169 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 170 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 171 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 172 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 173 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 174 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 175 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 176 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 177 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 178 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 179 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 180 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 181 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 182 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 183 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 184 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 185 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 186 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 187 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 188 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 189 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 190 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 191 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 192 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 193 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 194 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 195 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 196 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 197 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 198 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 199 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 200 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 201 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 202 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 203 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 204 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 205 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 206 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 207 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 208 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 209 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 210 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 211 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 212 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 213 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 214 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 215 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 216 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 217 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 218 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 219 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 220 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 221 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 222 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 223 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 224 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 225 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 226 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 227 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 228 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 229 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 230 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 231 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 232 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 233 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 234 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 235 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 236 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 237 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 238 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 239 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 240 "data/maps/RouteSix/scripts.pory"
	walk_left
# 241 "data/maps/RouteSix/scripts.pory"
	walk_left
# 242 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_down
# 243 "data/maps/RouteSix/scripts.pory"
	step_end
# 244 "data/maps/RouteSix/scripts.pory"

# 245 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 246 "data/maps/RouteSix/scripts.pory"
	walk_down
# 247 "data/maps/RouteSix/scripts.pory"
	walk_down
# 248 "data/maps/RouteSix/scripts.pory"
	step_end
# 249 "data/maps/RouteSix/scripts.pory"

# 250 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 251 "data/maps/RouteSix/scripts.pory"
	walk_down
# 252 "data/maps/RouteSix/scripts.pory"
	walk_down
# 253 "data/maps/RouteSix/scripts.pory"
	walk_left
# 254 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_right
# 255 "data/maps/RouteSix/scripts.pory"
	step_end
# 256 "data/maps/RouteSix/scripts.pory"

# 257 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 258 "data/maps/RouteSix/scripts.pory"
	walk_right
# 259 "data/maps/RouteSix/scripts.pory"
	walk_down
# 260 "data/maps/RouteSix/scripts.pory"
	step_end
# 261 "data/maps/RouteSix/scripts.pory"

# 262 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 263 "data/maps/RouteSix/scripts.pory"
	walk_left
# 264 "data/maps/RouteSix/scripts.pory"
	walk_down
# 265 "data/maps/RouteSix/scripts.pory"
	step_end
# 266 "data/maps/RouteSix/scripts.pory"

# 267 "data/maps/RouteSix/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 268 "data/maps/RouteSix/scripts.pory"
	walk_down
# 269 "data/maps/RouteSix/scripts.pory"
	step_end
# 270 "data/maps/RouteSix/scripts.pory"

# 271 "data/maps/RouteSix/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 272 "data/maps/RouteSix/scripts.pory"
	walk_down
# 273 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_left
# 274 "data/maps/RouteSix/scripts.pory"
	step_end
# 275 "data/maps/RouteSix/scripts.pory"

# 276 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_MrBriney::
# 277 "data/maps/RouteSix/scripts.pory"
	lock
# 278 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 279 "data/maps/RouteSix/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 280 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 281 "data/maps/RouteSix/scripts.pory"
	end
# 282 "data/maps/RouteSix/scripts.pory"

# 283 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 284 "data/maps/RouteSix/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 285 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 286 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 287 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 288 "data/maps/RouteSix/scripts.pory"
	end
# 289 "data/maps/RouteSix/scripts.pory"

# 290 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 291 "data/maps/RouteSix/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 292 "data/maps/RouteSix/scripts.pory"
	waitmessage
# 293 "data/maps/RouteSix/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 294 "data/maps/RouteSix/scripts.pory"
	switch VAR_RESULT
# 295 "data/maps/RouteSix/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 296 "data/maps/RouteSix/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 297 "data/maps/RouteSix/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 298 "data/maps/RouteSix/scripts.pory"
	end
# 299 "data/maps/RouteSix/scripts.pory"

# 300 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SailToDewford::
# 301 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 302 "data/maps/RouteSix/scripts.pory"
	closemessage
# 303 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 304 "data/maps/RouteSix/scripts.pory"
	end
# 305 "data/maps/RouteSix/scripts.pory"

# 306 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_StayHere::
# 307 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 308 "data/maps/RouteSix/scripts.pory"
	release
# 309 "data/maps/RouteSix/scripts.pory"
	end
# 310 "data/maps/RouteSix/scripts.pory"

# 311 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 312 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 313 "data/maps/RouteSix/scripts.pory"
	release
# 314 "data/maps/RouteSix/scripts.pory"
	end
# 315 "data/maps/RouteSix/scripts.pory"

# 316 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 317 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 318 "data/maps/RouteSix/scripts.pory"
	end
# 319 "data/maps/RouteSix/scripts.pory"

# 320 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 321 "data/maps/RouteSix/scripts.pory"
	lock
# 322 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 323 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 324 "data/maps/RouteSix/scripts.pory"
	closemessage
# 325 "data/maps/RouteSix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 326 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 327 "data/maps/RouteSix/scripts.pory"
	release
# 328 "data/maps/RouteSix/scripts.pory"
	end
# 329 "data/maps/RouteSix/scripts.pory"

# 330 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 331 "data/maps/RouteSix/scripts.pory"
	lock
# 332 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 333 "data/maps/RouteSix/scripts.pory"
	special GetPlayerBigGuyGirlString
# 334 "data/maps/RouteSix/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 335 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 336 "data/maps/RouteSix/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 337 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 338 "data/maps/RouteSix/scripts.pory"
	closemessage
# 339 "data/maps/RouteSix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 340 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 341 "data/maps/RouteSix/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 342 "data/maps/RouteSix/scripts.pory"
	release
# 343 "data/maps/RouteSix/scripts.pory"
	end
# 344 "data/maps/RouteSix/scripts.pory"

# 345 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 346 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 347 "data/maps/RouteSix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 348 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 349 "data/maps/RouteSix/scripts.pory"
	release
# 350 "data/maps/RouteSix/scripts.pory"
	end
# 351 "data/maps/RouteSix/scripts.pory"

# 352 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Woman::
# 353 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 354 "data/maps/RouteSix/scripts.pory"
	end
# 355 "data/maps/RouteSix/scripts.pory"

# 356 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_OldMan::
# 357 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 358 "data/maps/RouteSix/scripts.pory"
	end
# 359 "data/maps/RouteSix/scripts.pory"

# 360 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Zigzagoon::
# 361 "data/maps/RouteSix/scripts.pory"
	lock
# 362 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 363 "data/maps/RouteSix/scripts.pory"
	waitse
# 364 "data/maps/RouteSix/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 365 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 366 "data/maps/RouteSix/scripts.pory"
	waitmoncry
# 367 "data/maps/RouteSix/scripts.pory"
	release
# 368 "data/maps/RouteSix/scripts.pory"
	end
# 369 "data/maps/RouteSix/scripts.pory"

# 370 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 371 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 372 "data/maps/RouteSix/scripts.pory"
	end
# 373 "data/maps/RouteSix/scripts.pory"

# 374 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 375 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 376 "data/maps/RouteSix/scripts.pory"
	end
# 377 "data/maps/RouteSix/scripts.pory"

# 378 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_David::
# 379 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 380 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 381 "data/maps/RouteSix/scripts.pory"
	end
# 382 "data/maps/RouteSix/scripts.pory"

# 383 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Alice::
# 384 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 385 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 386 "data/maps/RouteSix/scripts.pory"
	end
# 387 "data/maps/RouteSix/scripts.pory"

# 388 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Huey::
# 389 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 390 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 391 "data/maps/RouteSix/scripts.pory"
	end
# 392 "data/maps/RouteSix/scripts.pory"

# 393 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Edmond::
# 394 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 395 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 396 "data/maps/RouteSix/scripts.pory"
	end
# 397 "data/maps/RouteSix/scripts.pory"

# 398 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Ricky::
# 399 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 400 "data/maps/RouteSix/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 401 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 402 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 403 "data/maps/RouteSix/scripts.pory"
	release
# 404 "data/maps/RouteSix/scripts.pory"
	end
# 405 "data/maps/RouteSix/scripts.pory"

# 406 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 407 "data/maps/RouteSix/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 408 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 409 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 410 "data/maps/RouteSix/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 411 "data/maps/RouteSix/scripts.pory"
	release
# 412 "data/maps/RouteSix/scripts.pory"
	end
# 413 "data/maps/RouteSix/scripts.pory"

# 414 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_RickyRematch::
# 415 "data/maps/RouteSix/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 416 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 417 "data/maps/RouteSix/scripts.pory"
	end
# 418 "data/maps/RouteSix/scripts.pory"

# 419 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Lola::
# 420 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 421 "data/maps/RouteSix/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 422 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 423 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 424 "data/maps/RouteSix/scripts.pory"
	release
# 425 "data/maps/RouteSix/scripts.pory"
	end
# 426 "data/maps/RouteSix/scripts.pory"

# 427 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 428 "data/maps/RouteSix/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 429 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 430 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 431 "data/maps/RouteSix/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 432 "data/maps/RouteSix/scripts.pory"
	release
# 433 "data/maps/RouteSix/scripts.pory"
	end
# 434 "data/maps/RouteSix/scripts.pory"

# 435 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_LolaRematch::
# 436 "data/maps/RouteSix/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 437 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 438 "data/maps/RouteSix/scripts.pory"
	end
# 439 "data/maps/RouteSix/scripts.pory"

# 440 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Austina::
# 441 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 442 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 443 "data/maps/RouteSix/scripts.pory"
	end
# 444 "data/maps/RouteSix/scripts.pory"

# 445 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Gwen::
# 446 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 447 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 448 "data/maps/RouteSix/scripts.pory"
	end
# 449 "data/maps/RouteSix/scripts.pory"

# 450 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Carter::
# 451 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 452 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 453 "data/maps/RouteSix/scripts.pory"
	end
# 454 "data/maps/RouteSix/scripts.pory"

# 455 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Paul::
# 456 "data/maps/RouteSix/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 457 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 458 "data/maps/RouteSix/scripts.pory"
	end
# 459 "data/maps/RouteSix/scripts.pory"

# 460 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Mel::
# 461 "data/maps/RouteSix/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 462 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 463 "data/maps/RouteSix/scripts.pory"
	end
# 464 "data/maps/RouteSix/scripts.pory"

# 465 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Chandler::
# 466 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 467 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 468 "data/maps/RouteSix/scripts.pory"
	end
# 469 "data/maps/RouteSix/scripts.pory"

# 470 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Hailey::
# 471 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 472 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 473 "data/maps/RouteSix/scripts.pory"
	end
# 474 "data/maps/RouteSix/scripts.pory"

# 475 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Elijah::
# 476 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 477 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 478 "data/maps/RouteSix/scripts.pory"
	end
# 479 "data/maps/RouteSix/scripts.pory"

# 480 "data/maps/RouteSix/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 481 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 482 "data/maps/RouteSix/scripts.pory"
	.string "We've made land in SLATEPORT!\p"
# 483 "data/maps/RouteSix/scripts.pory"
	.string "I suppose you're going to visit CAPT.\n"
# 484 "data/maps/RouteSix/scripts.pory"
	.string "STERN and deliver the DEVON GOODS?$"
# 485 "data/maps/RouteSix/scripts.pory"

# 486 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 487 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: I thought you're supposed\n"
# 488 "data/maps/RouteSix/scripts.pory"
	.string "to deliver the DEVON GOODS.\p"
# 489 "data/maps/RouteSix/scripts.pory"
	.string "Would you like to sail back to\n"
# 490 "data/maps/RouteSix/scripts.pory"
	.string "DEWFORD, then?$"
# 491 "data/maps/RouteSix/scripts.pory"

# 492 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 493 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 494 "data/maps/RouteSix/scripts.pory"
	.string "Anchors aweigh!\n"
# 495 "data/maps/RouteSix/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 496 "data/maps/RouteSix/scripts.pory"

# 497 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 498 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 499 "data/maps/RouteSix/scripts.pory"
	.string "the DEVON GOODS. I'll be waiting.$"
# 500 "data/maps/RouteSix/scripts.pory"

# 501 "data/maps/RouteSix/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 502 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Ahoy! We've made land in\n"
# 503 "data/maps/RouteSix/scripts.pory"
	.string "SLATEPORT!\p"
# 504 "data/maps/RouteSix/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 505 "data/maps/RouteSix/scripts.pory"
	.string "you want to set sail again!$"
# 506 "data/maps/RouteSix/scripts.pory"

# 507 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 508 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 509 "data/maps/RouteSix/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 510 "data/maps/RouteSix/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 511 "data/maps/RouteSix/scripts.pory"

# 512 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 513 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 514 "data/maps/RouteSix/scripts.pory"
	.string "you need to set sail again!$"
# 515 "data/maps/RouteSix/scripts.pory"

# 516 "data/maps/RouteSix/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 517 "data/maps/RouteSix/scripts.pory"
	.string "Yo, TRAINERS!\n"
# 518 "data/maps/RouteSix/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 519 "data/maps/RouteSix/scripts.pory"
	.string "or cool cat not,\l"
# 520 "data/maps/RouteSix/scripts.pory"
	.string "chill at my papa's spot!$"
# 521 "data/maps/RouteSix/scripts.pory"

# 522 "data/maps/RouteSix/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 523 "data/maps/RouteSix/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 524 "data/maps/RouteSix/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 525 "data/maps/RouteSix/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 526 "data/maps/RouteSix/scripts.pory"
	.string "Mine are with my POKéMON, so they\n"
# 527 "data/maps/RouteSix/scripts.pory"
	.string "should be okay, but…$"
# 528 "data/maps/RouteSix/scripts.pory"

# 529 "data/maps/RouteSix/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 530 "data/maps/RouteSix/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 531 "data/maps/RouteSix/scripts.pory"
	.string "to make.$"
# 532 "data/maps/RouteSix/scripts.pory"

# 533 "data/maps/RouteSix/scripts.pory"
Route109_Text_YouCanHaveThis:
# 534 "data/maps/RouteSix/scripts.pory"
	.string "You can have this!$"
# 535 "data/maps/RouteSix/scripts.pory"

# 536 "data/maps/RouteSix/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 537 "data/maps/RouteSix/scripts.pory"
	.string "We're going to get all the sand from\n"
# 538 "data/maps/RouteSix/scripts.pory"
	.string "the beach and make a big castle!\p"
# 539 "data/maps/RouteSix/scripts.pory"
	.string "And then we're going to be a king and\n"
# 540 "data/maps/RouteSix/scripts.pory"
	.string "queen.\p"
# 541 "data/maps/RouteSix/scripts.pory"
	.string "We'll let you be a servant.$"
# 542 "data/maps/RouteSix/scripts.pory"

# 543 "data/maps/RouteSix/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 544 "data/maps/RouteSix/scripts.pory"
	.string "The water around these parts is clean.\p"
# 545 "data/maps/RouteSix/scripts.pory"
	.string "But, I get my ZIGZAGOON to pick up\n"
# 546 "data/maps/RouteSix/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 547 "data/maps/RouteSix/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 548 "data/maps/RouteSix/scripts.pory"
	.string "rivers, which we drink from…\p"
# 549 "data/maps/RouteSix/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 550 "data/maps/RouteSix/scripts.pory"
	.string "back to haunt us eventually.$"
# 551 "data/maps/RouteSix/scripts.pory"

# 552 "data/maps/RouteSix/scripts.pory"
Route109_Text_ZigzagoonCry:
# 553 "data/maps/RouteSix/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"
# 554 "data/maps/RouteSix/scripts.pory"

# 555 "data/maps/RouteSix/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 556 "data/maps/RouteSix/scripts.pory"
	.string "SEASHORE HOUSE\p"
# 557 "data/maps/RouteSix/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 558 "data/maps/RouteSix/scripts.pory"
	.string "The place for hot TRAINERS!”$"
# 559 "data/maps/RouteSix/scripts.pory"

# 560 "data/maps/RouteSix/scripts.pory"
Route109_Text_TrainerTipsSign:
# 561 "data/maps/RouteSix/scripts.pory"
	.string "TRAINER TIPS\p"
# 562 "data/maps/RouteSix/scripts.pory"
	.string "POKéMON at the same level may not\n"
# 563 "data/maps/RouteSix/scripts.pory"
	.string "always have identical stats.\p"
# 564 "data/maps/RouteSix/scripts.pory"
	.string "POKéMON raised by TRAINERS are said\n"
# 565 "data/maps/RouteSix/scripts.pory"
	.string "to grow stronger than wild POKéMON.$"
