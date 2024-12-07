RouteSix_MapScripts::
	.byte 0


RouteSix_EventScript_Autumn::
# 4 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, RouteSix_Text_AutumnIntro, RouteSix_Text_AutumnDefeat
# 5 "data/maps/RouteSix/scripts.pory"
	msgbox RouteSix_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end


RouteSix_EventScript_Drew::
# 22 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_DREW, RouteSix_Text_DrewIntro, RouteSix_Text_DrewDefeat
# 23 "data/maps/RouteSix/scripts.pory"
	msgbox RouteSix_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
	end


RouteSix_EventScript_FindMuscleBand::
# 40 "data/maps/RouteSix/scripts.pory"
	finditem ITEM_MUSCLE_BAND
	end


# 44 "data/maps/RouteSix/scripts.pory"

# 45 "data/maps/RouteSix/scripts.pory"
@ NOTE: Route 109's sail to Dewford script references local IDs from Dewford's map.
# 46 "data/maps/RouteSix/scripts.pory"
@  These are labeled in DewfordTown/scripts.inc
# 47 "data/maps/RouteSix/scripts.pory"

# 48 "data/maps/RouteSix/scripts.pory"
Route109_MapScripts::
# 49 "data/maps/RouteSix/scripts.pory"
	.byte 0
# 50 "data/maps/RouteSix/scripts.pory"

# 51 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_StartDepartForDewford::
# 52 "data/maps/RouteSix/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 53 "data/maps/RouteSix/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE_SIX, 0
# 54 "data/maps/RouteSix/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE_SIX, 0
# 55 "data/maps/RouteSix/scripts.pory"
	applymovement LOCALID_BRINEY_R109, Route109_Movement_BrineyEnterBoat
# 56 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 57 "data/maps/RouteSix/scripts.pory"
	removeobject LOCALID_BRINEY_R109
# 58 "data/maps/RouteSix/scripts.pory"
	switch VAR_FACING
# 59 "data/maps/RouteSix/scripts.pory"
	case DIR_SOUTH, Route109_EventScript_EnterBoatSouth
# 60 "data/maps/RouteSix/scripts.pory"
	case DIR_WEST, Route109_EventScript_EnterBoatWest
# 61 "data/maps/RouteSix/scripts.pory"
	case DIR_EAST, Route109_EventScript_EnterBoatEast
# 62 "data/maps/RouteSix/scripts.pory"
	end
# 63 "data/maps/RouteSix/scripts.pory"

# 64 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_EnterBoatSouth::
# 65 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatSouth
# 66 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 67 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 68 "data/maps/RouteSix/scripts.pory"
	end
# 69 "data/maps/RouteSix/scripts.pory"

# 70 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_EnterBoatEast::
# 71 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatEast
# 72 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 73 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 74 "data/maps/RouteSix/scripts.pory"
	end
# 75 "data/maps/RouteSix/scripts.pory"

# 76 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_EnterBoatWest::
# 77 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerEnterBoatWest
# 78 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 79 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DoSailToDewford
# 80 "data/maps/RouteSix/scripts.pory"
	end
# 81 "data/maps/RouteSix/scripts.pory"

# 82 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_DoSailToDewford::
# 83 "data/maps/RouteSix/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE_SIX
# 84 "data/maps/RouteSix/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 85 "data/maps/RouteSix/scripts.pory"
	applymovement LOCALID_BOAT_R109, Route109_Movement_SailToDewford
# 86 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_SailToDewford
# 87 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 88 "data/maps/RouteSix/scripts.pory"
	delay 50
# 89 "data/maps/RouteSix/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 90 "data/maps/RouteSix/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 91 "data/maps/RouteSix/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route109_Movement_PlayerExitBoat
# 92 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 93 "data/maps/RouteSix/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 94 "data/maps/RouteSix/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 95 "data/maps/RouteSix/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 96 "data/maps/RouteSix/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 97 "data/maps/RouteSix/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 98 "data/maps/RouteSix/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route109_Movement_BrineyExitBoat
# 99 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 100 "data/maps/RouteSix/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 101 "data/maps/RouteSix/scripts.pory"
	setflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 102 "data/maps/RouteSix/scripts.pory"
	hideobjectat LOCALID_BOAT_R109, MAP_ROUTE_SIX
# 103 "data/maps/RouteSix/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 104 "data/maps/RouteSix/scripts.pory"
	closemessage
# 105 "data/maps/RouteSix/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 106 "data/maps/RouteSix/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE_SIX
# 107 "data/maps/RouteSix/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 108 "data/maps/RouteSix/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 109 "data/maps/RouteSix/scripts.pory"
	release
# 110 "data/maps/RouteSix/scripts.pory"
	end
# 111 "data/maps/RouteSix/scripts.pory"

# 112 "data/maps/RouteSix/scripts.pory"
Route109_Movement_SailToDewford:
# 113 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_down
# 114 "data/maps/RouteSix/scripts.pory"
	walk_down
# 115 "data/maps/RouteSix/scripts.pory"
	walk_down
# 116 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 117 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 118 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 119 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 120 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 121 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 122 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 123 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 124 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 125 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 126 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 127 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 128 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 129 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 130 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 131 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 132 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 133 "data/maps/RouteSix/scripts.pory"
	walk_faster_down
# 134 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 135 "data/maps/RouteSix/scripts.pory"
	walk_fast_down
# 136 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 137 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
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
	walk_faster_left
# 232 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 233 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 234 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 235 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 236 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 237 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 238 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 239 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 240 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 241 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 242 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 243 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 244 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 245 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 246 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 247 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 248 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 249 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 250 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 251 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 252 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 253 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 254 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 255 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 256 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 257 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 258 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 259 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 260 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 261 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 262 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 263 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 264 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 265 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 266 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 267 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 268 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 269 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 270 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 271 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 272 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 273 "data/maps/RouteSix/scripts.pory"
	walk_faster_left
# 274 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 275 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 276 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 277 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 278 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 279 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 280 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 281 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 282 "data/maps/RouteSix/scripts.pory"
	walk_fast_left
# 283 "data/maps/RouteSix/scripts.pory"
	walk_left
# 284 "data/maps/RouteSix/scripts.pory"
	walk_left
# 285 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_down
# 286 "data/maps/RouteSix/scripts.pory"
	step_end
# 287 "data/maps/RouteSix/scripts.pory"

# 288 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerEnterBoatSouth:
# 289 "data/maps/RouteSix/scripts.pory"
	walk_down
# 290 "data/maps/RouteSix/scripts.pory"
	walk_down
# 291 "data/maps/RouteSix/scripts.pory"
	step_end
# 292 "data/maps/RouteSix/scripts.pory"

# 293 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerExitBoat:
# 294 "data/maps/RouteSix/scripts.pory"
	walk_down
# 295 "data/maps/RouteSix/scripts.pory"
	walk_down
# 296 "data/maps/RouteSix/scripts.pory"
	walk_left
# 297 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_right
# 298 "data/maps/RouteSix/scripts.pory"
	step_end
# 299 "data/maps/RouteSix/scripts.pory"

# 300 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerEnterBoatEast:
# 301 "data/maps/RouteSix/scripts.pory"
	walk_right
# 302 "data/maps/RouteSix/scripts.pory"
	walk_down
# 303 "data/maps/RouteSix/scripts.pory"
	step_end
# 304 "data/maps/RouteSix/scripts.pory"

# 305 "data/maps/RouteSix/scripts.pory"
Route109_Movement_PlayerEnterBoatWest:
# 306 "data/maps/RouteSix/scripts.pory"
	walk_left
# 307 "data/maps/RouteSix/scripts.pory"
	walk_down
# 308 "data/maps/RouteSix/scripts.pory"
	step_end
# 309 "data/maps/RouteSix/scripts.pory"

# 310 "data/maps/RouteSix/scripts.pory"
Route109_Movement_BrineyEnterBoat:
# 311 "data/maps/RouteSix/scripts.pory"
	walk_down
# 312 "data/maps/RouteSix/scripts.pory"
	step_end
# 313 "data/maps/RouteSix/scripts.pory"

# 314 "data/maps/RouteSix/scripts.pory"
Route109_Movement_BrineyExitBoat:
# 315 "data/maps/RouteSix/scripts.pory"
	walk_down
# 316 "data/maps/RouteSix/scripts.pory"
	walk_in_place_faster_left
# 317 "data/maps/RouteSix/scripts.pory"
	step_end
# 318 "data/maps/RouteSix/scripts.pory"

# 319 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_MrBriney::
# 320 "data/maps/RouteSix/scripts.pory"
	lock
# 321 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 322 "data/maps/RouteSix/scripts.pory"
	goto_if_unset FLAG_DELIVERED_DEVON_GOODS, Route109_EventScript_HaveNotDeliveredDevonGood
# 323 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_DeliveredDevonGoods
# 324 "data/maps/RouteSix/scripts.pory"
	end
# 325 "data/maps/RouteSix/scripts.pory"

# 326 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_HaveNotDeliveredDevonGood::
# 327 "data/maps/RouteSix/scripts.pory"
	message Route109_Text_BrineySailToDewfordQuestion
# 328 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineySailToDewfordQuestion, MSGBOX_YESNO
# 329 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route109_EventScript_StayHere
# 330 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_SailToDewford
# 331 "data/maps/RouteSix/scripts.pory"
	end
# 332 "data/maps/RouteSix/scripts.pory"

# 333 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_DeliveredDevonGoods::
# 334 "data/maps/RouteSix/scripts.pory"
	message Route109_Text_BrineyWhereAreWeBound
# 335 "data/maps/RouteSix/scripts.pory"
	waitmessage
# 336 "data/maps/RouteSix/scripts.pory"
	multichoicedefault 21, 8, MULTI_BRINEY_OFF_DEWFORD, 1, FALSE
# 337 "data/maps/RouteSix/scripts.pory"
	switch VAR_RESULT
# 338 "data/maps/RouteSix/scripts.pory"
	case 0, Route109_EventScript_SailToDewford
# 339 "data/maps/RouteSix/scripts.pory"
	case 1, Route109_EventScript_ChoseNotToSail
# 340 "data/maps/RouteSix/scripts.pory"
	case MULTI_B_PRESSED, Route109_EventScript_ChoseNotToSail
# 341 "data/maps/RouteSix/scripts.pory"
	end
# 342 "data/maps/RouteSix/scripts.pory"

# 343 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SailToDewford::
# 344 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineyDewfordItIs, MSGBOX_DEFAULT
# 345 "data/maps/RouteSix/scripts.pory"
	closemessage
# 346 "data/maps/RouteSix/scripts.pory"
	goto Route109_EventScript_StartDepartForDewford
# 347 "data/maps/RouteSix/scripts.pory"
	end
# 348 "data/maps/RouteSix/scripts.pory"

# 349 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_StayHere::
# 350 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineyDeliverDevonGoods, MSGBOX_DEFAULT
# 351 "data/maps/RouteSix/scripts.pory"
	release
# 352 "data/maps/RouteSix/scripts.pory"
	end
# 353 "data/maps/RouteSix/scripts.pory"

# 354 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_ChoseNotToSail::
# 355 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_BrineyTellMeWhenYouNeedToSail, MSGBOX_DEFAULT
# 356 "data/maps/RouteSix/scripts.pory"
	release
# 357 "data/maps/RouteSix/scripts.pory"
	end
# 358 "data/maps/RouteSix/scripts.pory"

# 359 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SeashoreHouseGirl::
# 360 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ChillAtMyPapasSpot, MSGBOX_NPC
# 361 "data/maps/RouteSix/scripts.pory"
	end
# 362 "data/maps/RouteSix/scripts.pory"

# 363 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SandCastleBoy::
# 364 "data/maps/RouteSix/scripts.pory"
	lock
# 365 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 366 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_SandCastleTakingLongTime, MSGBOX_DEFAULT
# 367 "data/maps/RouteSix/scripts.pory"
	closemessage
# 368 "data/maps/RouteSix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 369 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 370 "data/maps/RouteSix/scripts.pory"
	release
# 371 "data/maps/RouteSix/scripts.pory"
	end
# 372 "data/maps/RouteSix/scripts.pory"

# 373 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SoftSandGirl::
# 374 "data/maps/RouteSix/scripts.pory"
	lock
# 375 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 376 "data/maps/RouteSix/scripts.pory"
	special GetPlayerBigGuyGirlString
# 377 "data/maps/RouteSix/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFT_SAND, Route109_EventScript_AlreadyReceivedSoftSand
# 378 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 379 "data/maps/RouteSix/scripts.pory"
	giveitem ITEM_SOFT_SAND
# 380 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 381 "data/maps/RouteSix/scripts.pory"
	closemessage
# 382 "data/maps/RouteSix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 383 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 384 "data/maps/RouteSix/scripts.pory"
	setflag FLAG_RECEIVED_SOFT_SAND
# 385 "data/maps/RouteSix/scripts.pory"
	release
# 386 "data/maps/RouteSix/scripts.pory"
	end
# 387 "data/maps/RouteSix/scripts.pory"

# 388 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_AlreadyReceivedSoftSand::
# 389 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_WereGoingToMakeBigCastle, MSGBOX_DEFAULT
# 390 "data/maps/RouteSix/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 391 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 392 "data/maps/RouteSix/scripts.pory"
	release
# 393 "data/maps/RouteSix/scripts.pory"
	end
# 394 "data/maps/RouteSix/scripts.pory"

# 395 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Woman::
# 396 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LittleKidsDartAround, MSGBOX_NPC
# 397 "data/maps/RouteSix/scripts.pory"
	end
# 398 "data/maps/RouteSix/scripts.pory"

# 399 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_OldMan::
# 400 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ZigzagoonPicksUpLitter, MSGBOX_NPC
# 401 "data/maps/RouteSix/scripts.pory"
	end
# 402 "data/maps/RouteSix/scripts.pory"

# 403 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Zigzagoon::
# 404 "data/maps/RouteSix/scripts.pory"
	lock
# 405 "data/maps/RouteSix/scripts.pory"
	faceplayer
# 406 "data/maps/RouteSix/scripts.pory"
	waitse
# 407 "data/maps/RouteSix/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 408 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ZigzagoonCry, MSGBOX_DEFAULT
# 409 "data/maps/RouteSix/scripts.pory"
	waitmoncry
# 410 "data/maps/RouteSix/scripts.pory"
	release
# 411 "data/maps/RouteSix/scripts.pory"
	end
# 412 "data/maps/RouteSix/scripts.pory"

# 413 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_SeashoreHouseSign::
# 414 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_SeashoreHouseSign, MSGBOX_SIGN
# 415 "data/maps/RouteSix/scripts.pory"
	end
# 416 "data/maps/RouteSix/scripts.pory"

# 417 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_TrainerTipsSign::
# 418 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_TrainerTipsSign, MSGBOX_SIGN
# 419 "data/maps/RouteSix/scripts.pory"
	end
# 420 "data/maps/RouteSix/scripts.pory"

# 421 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_David::
# 422 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_DAVID, Route109_Text_DavidIntro, Route109_Text_DavidDefeated
# 423 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_DavidPostBattle, MSGBOX_AUTOCLOSE
# 424 "data/maps/RouteSix/scripts.pory"
	end
# 425 "data/maps/RouteSix/scripts.pory"

# 426 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Alice::
# 427 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_ALICE, Route109_Text_AliceIntro, Route109_Text_AliceDefeated
# 428 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_AlicePostBattle, MSGBOX_AUTOCLOSE
# 429 "data/maps/RouteSix/scripts.pory"
	end
# 430 "data/maps/RouteSix/scripts.pory"

# 431 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Huey::
# 432 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_HUEY, Route109_Text_HueyIntro, Route109_Text_HueyDefeated
# 433 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_HueyPostBattle, MSGBOX_AUTOCLOSE
# 434 "data/maps/RouteSix/scripts.pory"
	end
# 435 "data/maps/RouteSix/scripts.pory"

# 436 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Edmond::
# 437 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_EDMOND, Route109_Text_EdmondIntro, Route109_Text_EdmondDefeated
# 438 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 439 "data/maps/RouteSix/scripts.pory"
	end
# 440 "data/maps/RouteSix/scripts.pory"

# 441 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Ricky::
# 442 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_RICKY_1, Route109_Text_RickyIntro, Route109_Text_RickyDefeated, Route109_EventScript_RickyRegisterMatchCallAfterBattle
# 443 "data/maps/RouteSix/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 444 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_RickyRematch
# 445 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_RickyPostBattle, MSGBOX_DEFAULT
# 446 "data/maps/RouteSix/scripts.pory"
	release
# 447 "data/maps/RouteSix/scripts.pory"
	end
# 448 "data/maps/RouteSix/scripts.pory"

# 449 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_RickyRegisterMatchCallAfterBattle::
# 450 "data/maps/RouteSix/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 451 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 452 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_RickyRegister, MSGBOX_DEFAULT
# 453 "data/maps/RouteSix/scripts.pory"
	register_matchcall TRAINER_RICKY_1
# 454 "data/maps/RouteSix/scripts.pory"
	release
# 455 "data/maps/RouteSix/scripts.pory"
	end
# 456 "data/maps/RouteSix/scripts.pory"

# 457 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_RickyRematch::
# 458 "data/maps/RouteSix/scripts.pory"
	trainerbattle_rematch TRAINER_RICKY_1, Route109_Text_RickyRematchIntro, Route109_Text_RickyRematchDefeated
# 459 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_RickyRematchPostBattle, MSGBOX_AUTOCLOSE
# 460 "data/maps/RouteSix/scripts.pory"
	end
# 461 "data/maps/RouteSix/scripts.pory"

# 462 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Lola::
# 463 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_LOLA_1, Route109_Text_LolaIntro, Route109_Text_LolaDefeated, Route109_EventScript_LolaRegisterMatchCallAfterBattle
# 464 "data/maps/RouteSix/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 465 "data/maps/RouteSix/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route109_EventScript_LolaRematch
# 466 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LolaPostBattle, MSGBOX_DEFAULT
# 467 "data/maps/RouteSix/scripts.pory"
	release
# 468 "data/maps/RouteSix/scripts.pory"
	end
# 469 "data/maps/RouteSix/scripts.pory"

# 470 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_LolaRegisterMatchCallAfterBattle::
# 471 "data/maps/RouteSix/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 472 "data/maps/RouteSix/scripts.pory"
	waitmovement 0
# 473 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LolaRegister, MSGBOX_DEFAULT
# 474 "data/maps/RouteSix/scripts.pory"
	register_matchcall TRAINER_LOLA_1
# 475 "data/maps/RouteSix/scripts.pory"
	release
# 476 "data/maps/RouteSix/scripts.pory"
	end
# 477 "data/maps/RouteSix/scripts.pory"

# 478 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_LolaRematch::
# 479 "data/maps/RouteSix/scripts.pory"
	trainerbattle_rematch TRAINER_LOLA_1, Route109_Text_LolaRematchIntro, Route109_Text_LolaRematchDefeated
# 480 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_LolaRematchPostBattle, MSGBOX_AUTOCLOSE
# 481 "data/maps/RouteSix/scripts.pory"
	end
# 482 "data/maps/RouteSix/scripts.pory"

# 483 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Austina::
# 484 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_AUSTINA, Route109_Text_AustinaIntro, Route109_Text_AustinaDefeated
# 485 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 486 "data/maps/RouteSix/scripts.pory"
	end
# 487 "data/maps/RouteSix/scripts.pory"

# 488 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Gwen::
# 489 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route109_Text_GwenIntro, Route109_Text_GwenDefeated
# 490 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
# 491 "data/maps/RouteSix/scripts.pory"
	end
# 492 "data/maps/RouteSix/scripts.pory"

# 493 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Carter::
# 494 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_CARTER, Route109_Text_CarterIntro, Route109_Text_CarterDefeated
# 495 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_CarterPostBattle, MSGBOX_AUTOCLOSE
# 496 "data/maps/RouteSix/scripts.pory"
	end
# 497 "data/maps/RouteSix/scripts.pory"

# 498 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Paul::
# 499 "data/maps/RouteSix/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_PaulIntro, Route109_Text_PaulDefeated, Route109_Text_PaulNotEnoughPokemon
# 500 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 501 "data/maps/RouteSix/scripts.pory"
	end
# 502 "data/maps/RouteSix/scripts.pory"

# 503 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Mel::
# 504 "data/maps/RouteSix/scripts.pory"
	trainerbattle_double TRAINER_MEL_AND_PAUL, Route109_Text_MelIntro, Route109_Text_MelDefeated, Route109_Text_MelNotEnoughPokemon
# 505 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_MelPostBattle, MSGBOX_AUTOCLOSE
# 506 "data/maps/RouteSix/scripts.pory"
	end
# 507 "data/maps/RouteSix/scripts.pory"

# 508 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Chandler::
# 509 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_CHANDLER, Route109_Text_ChandlerIntro, Route109_Text_ChandlerDefeated
# 510 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ChandlerPostBattle, MSGBOX_AUTOCLOSE
# 511 "data/maps/RouteSix/scripts.pory"
	end
# 512 "data/maps/RouteSix/scripts.pory"

# 513 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Hailey::
# 514 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_HAILEY, Route109_Text_HaileyIntro, Route109_Text_HaileyDefeated
# 515 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_HaileyPostBattle, MSGBOX_AUTOCLOSE
# 516 "data/maps/RouteSix/scripts.pory"
	end
# 517 "data/maps/RouteSix/scripts.pory"

# 518 "data/maps/RouteSix/scripts.pory"
Route109_EventScript_Elijah::
# 519 "data/maps/RouteSix/scripts.pory"
	trainerbattle_single TRAINER_ELIJAH, Route109_Text_ElijahIntro, Route109_Text_ElijahDefeated
# 520 "data/maps/RouteSix/scripts.pory"
	msgbox Route109_Text_ElijahPostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/RouteSix/scripts.pory"
	end
# 522 "data/maps/RouteSix/scripts.pory"

# 523 "data/maps/RouteSix/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateportDeliverGoods:
# 524 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 525 "data/maps/RouteSix/scripts.pory"
	.string "We've made land in SLATEPORT!\p"
# 526 "data/maps/RouteSix/scripts.pory"
	.string "I suppose you're going to visit CAPT.\n"
# 527 "data/maps/RouteSix/scripts.pory"
	.string "STERN and deliver the DEVON GOODS?$"
# 528 "data/maps/RouteSix/scripts.pory"

# 529 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineySailToDewfordQuestion:
# 530 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: I thought you're supposed\n"
# 531 "data/maps/RouteSix/scripts.pory"
	.string "to deliver the DEVON GOODS.\p"
# 532 "data/maps/RouteSix/scripts.pory"
	.string "Would you like to sail back to\n"
# 533 "data/maps/RouteSix/scripts.pory"
	.string "DEWFORD, then?$"
# 534 "data/maps/RouteSix/scripts.pory"

# 535 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyDewfordItIs:
# 536 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: DEWFORD it is, then!\p"
# 537 "data/maps/RouteSix/scripts.pory"
	.string "Anchors aweigh!\n"
# 538 "data/maps/RouteSix/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 539 "data/maps/RouteSix/scripts.pory"

# 540 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyDeliverDevonGoods:
# 541 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 542 "data/maps/RouteSix/scripts.pory"
	.string "the DEVON GOODS. I'll be waiting.$"
# 543 "data/maps/RouteSix/scripts.pory"

# 544 "data/maps/RouteSix/scripts.pory"
DewfordTown_Text_BrineyLandedInSlateport:
# 545 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Ahoy! We've made land in\n"
# 546 "data/maps/RouteSix/scripts.pory"
	.string "SLATEPORT!\p"
# 547 "data/maps/RouteSix/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 548 "data/maps/RouteSix/scripts.pory"
	.string "you want to set sail again!$"
# 549 "data/maps/RouteSix/scripts.pory"

# 550 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyWhereAreWeBound:
# 551 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 552 "data/maps/RouteSix/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 553 "data/maps/RouteSix/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 554 "data/maps/RouteSix/scripts.pory"

# 555 "data/maps/RouteSix/scripts.pory"
Route109_Text_BrineyTellMeWhenYouNeedToSail:
# 556 "data/maps/RouteSix/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 557 "data/maps/RouteSix/scripts.pory"
	.string "you need to set sail again!$"
# 558 "data/maps/RouteSix/scripts.pory"

# 559 "data/maps/RouteSix/scripts.pory"
Route109_Text_ChillAtMyPapasSpot:
# 560 "data/maps/RouteSix/scripts.pory"
	.string "Yo, TRAINERS!\n"
# 561 "data/maps/RouteSix/scripts.pory"
	.string "Whether you're hot to trot,\l"
# 562 "data/maps/RouteSix/scripts.pory"
	.string "or cool cat not,\l"
# 563 "data/maps/RouteSix/scripts.pory"
	.string "chill at my papa's spot!$"
# 564 "data/maps/RouteSix/scripts.pory"

# 565 "data/maps/RouteSix/scripts.pory"
Route109_Text_LittleKidsDartAround:
# 566 "data/maps/RouteSix/scripts.pory"
	.string "Little kids can dart around so quickly…\p"
# 567 "data/maps/RouteSix/scripts.pory"
	.string "You don't dare take your eyes off them\n"
# 568 "data/maps/RouteSix/scripts.pory"
	.string "for an instant. It's very taxing.\p"
# 569 "data/maps/RouteSix/scripts.pory"
	.string "Mine are with my POKéMON, so they\n"
# 570 "data/maps/RouteSix/scripts.pory"
	.string "should be okay, but…$"
# 571 "data/maps/RouteSix/scripts.pory"

# 572 "data/maps/RouteSix/scripts.pory"
Route109_Text_SandCastleTakingLongTime:
# 573 "data/maps/RouteSix/scripts.pory"
	.string "Our sand castle's taking a long time\n"
# 574 "data/maps/RouteSix/scripts.pory"
	.string "to make.$"
# 575 "data/maps/RouteSix/scripts.pory"

# 576 "data/maps/RouteSix/scripts.pory"
Route109_Text_YouCanHaveThis:
# 577 "data/maps/RouteSix/scripts.pory"
	.string "You can have this!$"
# 578 "data/maps/RouteSix/scripts.pory"

# 579 "data/maps/RouteSix/scripts.pory"
Route109_Text_WereGoingToMakeBigCastle:
# 580 "data/maps/RouteSix/scripts.pory"
	.string "We're going to get all the sand from\n"
# 581 "data/maps/RouteSix/scripts.pory"
	.string "the beach and make a big castle!\p"
# 582 "data/maps/RouteSix/scripts.pory"
	.string "And then we're going to be a king and\n"
# 583 "data/maps/RouteSix/scripts.pory"
	.string "queen.\p"
# 584 "data/maps/RouteSix/scripts.pory"
	.string "We'll let you be a servant.$"
# 585 "data/maps/RouteSix/scripts.pory"

# 586 "data/maps/RouteSix/scripts.pory"
Route109_Text_ZigzagoonPicksUpLitter:
# 587 "data/maps/RouteSix/scripts.pory"
	.string "The water around these parts is clean.\p"
# 588 "data/maps/RouteSix/scripts.pory"
	.string "But, I get my ZIGZAGOON to pick up\n"
# 589 "data/maps/RouteSix/scripts.pory"
	.string "litter from the shoreline at times.\p"
# 590 "data/maps/RouteSix/scripts.pory"
	.string "Dirty water becomes rain and joins our\n"
# 591 "data/maps/RouteSix/scripts.pory"
	.string "rivers, which we drink from…\p"
# 592 "data/maps/RouteSix/scripts.pory"
	.string "If we pollute the sea, it all comes\n"
# 593 "data/maps/RouteSix/scripts.pory"
	.string "back to haunt us eventually.$"
# 594 "data/maps/RouteSix/scripts.pory"

# 595 "data/maps/RouteSix/scripts.pory"
Route109_Text_ZigzagoonCry:
# 596 "data/maps/RouteSix/scripts.pory"
	.string "ZIGZAGOON: Guguu?$"
# 597 "data/maps/RouteSix/scripts.pory"

# 598 "data/maps/RouteSix/scripts.pory"
Route109_Text_SeashoreHouseSign:
# 599 "data/maps/RouteSix/scripts.pory"
	.string "SEASHORE HOUSE\p"
# 600 "data/maps/RouteSix/scripts.pory"
	.string "“May hot battles rage on hot sands!\n"
# 601 "data/maps/RouteSix/scripts.pory"
	.string "The place for hot TRAINERS!”$"
# 602 "data/maps/RouteSix/scripts.pory"

# 603 "data/maps/RouteSix/scripts.pory"
Route109_Text_TrainerTipsSign:
# 604 "data/maps/RouteSix/scripts.pory"
	.string "TRAINER TIPS\p"
# 605 "data/maps/RouteSix/scripts.pory"
	.string "POKéMON at the same level may not\n"
# 606 "data/maps/RouteSix/scripts.pory"
	.string "always have identical stats.\p"
# 607 "data/maps/RouteSix/scripts.pory"
	.string "POKéMON raised by TRAINERS are said\n"
# 608 "data/maps/RouteSix/scripts.pory"
	.string "to grow stronger than wild POKéMON.$"

RouteSix_Text_AutumnIntro::
# 9 "data/maps/RouteSix/scripts.pory"
	.string "I climb this hill every day. I have\n"
	.string "confidence in my strength!$"

RouteSix_Text_AutumnDefeat::
# 13 "data/maps/RouteSix/scripts.pory"
	.string "Hmm… What went wrong?$"

RouteSix_Text_AutumnPostBattle::
# 17 "data/maps/RouteSix/scripts.pory"
	.string "What is that odd rock protrusion a\n"
	.string "little to the north?$"

RouteSix_Text_DrewIntro::
# 27 "data/maps/RouteSix/scripts.pory"
	.string "Did you just become a Trainer? We're\n"
	.string "both beginners!$"

RouteSix_Text_DrewDefeat::
# 31 "data/maps/RouteSix/scripts.pory"
	.string "I called you because I thought I could\n"
	.string "beat you…$"

RouteSix_Text_DrewPostBattle::
# 35 "data/maps/RouteSix/scripts.pory"
	.string "I haven't won once yet… I wish I would\n"
	.string "win soon…$"
