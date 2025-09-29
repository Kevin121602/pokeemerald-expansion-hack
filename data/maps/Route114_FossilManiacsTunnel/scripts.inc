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
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
# 40 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	goto_if_unset FLAG_RECIEVED_TM_DIG, Route114_FossilManiacsTunnel_EventScript_GiveDig
# 41 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 42 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 43 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 44 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_GiveDig::
# 45 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	giveitem ITEM_TM_DIG
# 46 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_IDontEvenWantDig, MSGBOX_DEFAULT
# 47 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	setflag FLAG_RECIEVED_TM_DIG
# 48 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 49 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 50 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 51 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
# 52 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
# 53 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 54 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 55 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 56 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
# 57 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
# 58 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	release
# 59 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	end
# 60 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 61 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
# 62 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm the Fossil Maniac…\n"
# 63 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I'm a nice guy who loves Fossils…\p"
# 64 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Do you want a Fossil?\p"
# 65 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Too bad, Devon Corp already came and\n"
# 66 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "took all of my fossils…\p"
# 67 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "All that's left is crummy sand…$"
# 68 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 69 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_IDontEvenWantDig:
# 70 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I used this to clear the tunnel,\n"
# 71 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "but I don't even want it anymore…$"
# 72 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 73 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
# 74 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "You found a FOSSIL, didn't you?\n"
# 75 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "That's so nice… It's so dreamy…\p"
# 76 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "What are you going to do with that\n"
# 77 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSIL?\p"
# 78 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "From what I've heard, DEVON is doing\n"
# 79 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "research on reviving Pokémon from\l"
# 80 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS…\p"
# 81 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I love my FOSSILS, so I would never\n"
# 82 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "do anything like that…$"
# 83 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 84 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
# 85 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "FOSSILS are so… Wonderful…\n"
# 86 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's so dreamy…$"
# 87 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"

# 88 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
# 89 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "Oh…\n"
# 90 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "It's not safe that way…\p"
# 91 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I was digging away, you see…\n"
# 92 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "When the whole wall collapsed…\p"
# 93 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "I think there's a giant cavern\n"
# 94 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "underneath now…\p"
# 95 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "But I've left it alone because I don't\n"
# 96 "data/maps/Route114_FossilManiacsTunnel/scripts.pory"
	.string "think there are any FOSSILS there…$"
