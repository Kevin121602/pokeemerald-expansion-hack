# 1 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 2 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
.set LOCALID_FOSSIL_MANIAC, 1
# 3 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 4 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_MapScripts::
# 5 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
# 6 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
# 7 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.byte 0
# 8 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 9 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnTransition:
# 10 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
# 11 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 12 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 13 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
# 14 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
# 15 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
# 16 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 17 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 18 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_OnLoad:
# 19 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 20 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 21 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
# 22 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
# 23 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
# 24 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	return
# 25 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 26 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
# 27 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lockall
# 28 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
# 29 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 30 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
# 32 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setvar VAR_FOSSIL_MANIAC_STATE, 2
# 33 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	releaseall
# 34 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 35 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 36 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_FossilManiac::
# 37 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	lock
# 38 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	faceplayer
# 39 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the Fossil Maniac…\n"
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm a nice guy who loves Fossils…\p"
# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Do you want a Fossil?\p"
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Too bad, Devon Corp already came and\n"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "took all of my fossils…\p"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "All that's left is crummy sand…$"
# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a FOSSIL, didn't you?\n"
# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "That's so nice… It's so dreamy…\p"
# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "What are you going to do with that\n"
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSIL?\p"
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "From what I've heard, DEVON is doing\n"
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "research on reviving POKéMON from\l"
# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS…\p"
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I love my FOSSILS, so I would never\n"
# 75 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "do anything like that…$"
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS are so… Wonderful…\n"
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's so dreamy…$"
# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's not safe that way…\p"
# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I was digging away, you see…\n"
# 85 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "When the whole wall collapsed…\p"
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I think there's a giant cavern\n"
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "underneath now…\p"
# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But I've left it alone because I don't\n"
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "think there are any FOSSILS there…$"
