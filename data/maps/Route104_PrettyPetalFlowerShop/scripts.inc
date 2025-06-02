# 1 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 2 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
.set LOCALID_OWNER, 1
# 3 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 4 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_MapScripts::
# 5 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
# 6 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.byte 0
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 8 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition:
# 9 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 10 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
# 11 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 12 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 13 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner::
# 14 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_OWNER, 4, 6
# 15 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 16 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 17 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_HelpingHandTutor::
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 19 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 20 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_HelpingHand, MSGBOX_YESNO
# 21 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_HelpingHandDeclined
# 22 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
# 23 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 24 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HelpingHandDeclined
# 25 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	releaseall
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 28 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
MoveTutor_EventScript_HelpingHandDeclined:
# 29 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	releaseall
# 30 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 31 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 32 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 33 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 34 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 35 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
# 36 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 37 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
# 38 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 39 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
# 40 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 41 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 42 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 43 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 44 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 45 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet::
# 46 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 48 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 49 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 50 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 51 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 52 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries::
# 53 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
# 54 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 55 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 56 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries::
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
# 58 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 59 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
# 61 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 62 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 64 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 65 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 66 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 67 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 68 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.align 2
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
# 70 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_RED_PLANT
# 71 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 72 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 73 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 74 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_BIG_PLANT
# 75 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
# 76 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_NONE
# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 78 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 83 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
# 84 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 85 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 86 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 87 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 88 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 90 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 91 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 92 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 93 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 95 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 96 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 99 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 100 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 101 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 102 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 103 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 104 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
# 105 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 106 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 107 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 108 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 109 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Text_HelpingHand:
# 110 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "I like helping out at this shop!\l"
# 111 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "But sometimes I wish I got paid\n"
# 112 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "more than minimum wage…\p"
# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Would you like to learn how to\n"
# 114 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "give a HELPING HAND?$"
