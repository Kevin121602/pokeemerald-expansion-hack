EventScript_FeaturesMenu_NoHeartScales::
	msgbox Text_NoHeartScales
	releaseall
	end

EventScript_FeaturesMenu_NoBottleCaps::
	msgbox Text_NoBottleCaps
	releaseall
	end

EventScript_FeaturesMenu_IncreaseLevelCap::
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_FeaturesMenu_Exit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, EventScript_FeaturesMenu_Exit
	special CanLevelCapBeIncreased
	goto_if_eq VAR_RESULT, FALSE, EventScript_FeaturesMenu_LevelCapAt100
	special BufferMonNickname
	msgbox Text_IncreaseLevelCap, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special IncreaseLevelCap
	msgbox Text_LevelCapIncreased
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeAbility::
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_FeaturesMenu_Exit
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, EventScript_FeaturesMenu_Exit
	special IsMonWeezingGalar
	goto_if_eq VAR_RESULT, TRUE, EventScript_FeaturesMenu_AfraidOfHeights
	special IsHiddenAbility
	goto_if_eq VAR_RESULT, TRUE, EventScript_FeaturesMenu_ChangeHiddenAbility
	special CanChangeAbility
	goto_if_eq VAR_RESULT, FALSE, EventScript_FeaturesMenu_CantChangeAbility
	special BufferMonNicknameAndAbility
	msgbox Text_ChangeAbility, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeAbility
	removeitem ITEM_HEART_SCALE
	msgbox Text_AbilityChanged
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeIV::
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_FeaturesMenu_Exit
	multichoice 0, 0, MULTI_CHANGE_IV, FALSE
	switch VAR_RESULT
	case 0, EventScript_FeaturesMenu_ChangeHP
	case 1, EventScript_FeaturesMenu_ChangeAttack
	case 2, EventScript_FeaturesMenu_ChangeDefense
	case 3, EventScript_FeaturesMenu_ChangeSpAttack
	case 4, EventScript_FeaturesMenu_ChangeSpDefense
	case 5, EventScript_FeaturesMenu_ChangeSpeed
	case 6, EventScript_FeaturesMenu_Exit
	case MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	releaseall
	end

EventScript_FeaturesMenu_ChangeNature::
	special ChoosePartyMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_FeaturesMenu_Exit
	copyvar VAR_0x8005, VAR_0x8004
	checkitem ITEM_HEART_SCALE, 3
	goto_if_eq VAR_RESULT, TRUE EventScript_FeaturesMenu_ChangeNature3
	checkitem ITEM_HEART_SCALE, 2
	goto_if_eq VAR_RESULT, TRUE EventScript_FeaturesMenu_ChangeNature2
	multichoice 0, 0, MULTI_CHANGE_NATURE_1, FALSE
	goto_if_eq VAR_RESULT, 3 EventScript_FeaturesMenu_Exit
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	copyvar VAR_0x8006, VAR_RESULT
	goto EventScript_FeaturesMenu_ChangeNature1Scale
	releaseall
	end

EventScript_FeaturesMenu_ChangeNature3::
	setvar VAR_0x8004, SCROLL_CHANGE_NATURE_THREE_SCALES
	special ShowScrollableMultichoice
	waitstate
	goto_if_eq VAR_RESULT, 21 EventScript_FeaturesMenu_Exit
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	copyvar VAR_0x8006, VAR_RESULT
	goto_if_lt VAR_RESULT, 3, EventScript_FeaturesMenu_ChangeNature1Scale
	goto_if_lt VAR_RESULT, 11, EventScript_FeaturesMenu_ChangeNature2Scales
	goto EventScript_FeaturesMenu_ChangeNature3Scales
	releaseall
	end

EventScript_FeaturesMenu_ChangeNature2::
	setvar VAR_0x8004, SCROLL_CHANGE_NATURE_TWO_SCALES
	special ShowScrollableMultichoice
	waitstate
	goto_if_eq VAR_RESULT, 11 EventScript_FeaturesMenu_Exit
	goto_if_eq VAR_RESULT, MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	copyvar VAR_0x8006, VAR_RESULT
	goto_if_lt VAR_RESULT, 3, EventScript_FeaturesMenu_ChangeNature1Scale
	goto EventScript_FeaturesMenu_ChangeNature2Scales
	releaseall
	end

EventScript_FeaturesMenu_ChangeNature1Scale::
	special BufferNameAndNature
	msgbox Text_ChangeNameToNature, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeNature
	msgbox Text_NameChangedToNature
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeNature2Scales::
	special BufferNameAndNature
	msgbox Text_ChangeNameToNature, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeNature
	msgbox Text_NameChangedToNature
	removeitem ITEM_HEART_SCALE, 2
	msgbox Text_SpentTwoHeartScales
	releaseall
	end

EventScript_FeaturesMenu_ChangeNature3Scales::
	special BufferNameAndNature
	msgbox Text_ChangeNameToNature, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeNature
	msgbox Text_NameChangedToNature
	removeitem ITEM_HEART_SCALE, 3
	msgbox Text_SpentThreeHeartScales
	releaseall
	end

EventScript_FeaturesMenu_ChangeHP::
	qtyselect 31, 31
	special BufferNameAndVarResult
	msgbox Text_IncreaseHPtoNumber, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeHPIV
	msgbox Text_HPChanged
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeAttack::
	qtyselect 31, 31
	special BufferNameAndVarResult
	msgbox Text_IncreaseAttacktoNumber, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeAttackIV
	msgbox Text_AttackChanged
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeDefense::
	qtyselect 31, 31
	special BufferNameAndVarResult
	msgbox Text_IncreaseDefensetoNumber, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeDefenseIV
	msgbox Text_DefenseChanged
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeSpAttack::
	qtyselect 31, 31
	special BufferNameAndVarResult
	msgbox Text_IncreaseSpAtktoNumber, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeSpAttackIV
	msgbox Text_SpAttackChanged
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeSpDefense::
	qtyselect 31, 31
	special BufferNameAndVarResult
	msgbox Text_IncreaseSpDeftoNumber, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeSpDefenseIV
	msgbox Text_SpDefenseChanged
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_ChangeSpeed::
	qtyselect 31, 31
	special BufferNameAndVarResult
	msgbox Text_IncreaseSpeedtoNumber, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	special ChangeSpeedIV
	msgbox Text_SpeedChanged
	removeitem ITEM_HEART_SCALE
	msgbox Text_SpentHeartScale
	releaseall
	end

EventScript_FeaturesMenu_BottleCapMenu::
	multichoice 0, 0, MULTI_BOTTLE_CAP_MENU, FALSE
	switch VAR_RESULT
	case 0, EventScript_FeaturesMenu_SwitchItemsMenu
	case 1, EventScript_FeaturesMenu_BerriesMenu
	case 2, EventScript_FeaturesMenu_BoostItemsMenu
	case 3, EventScript_FeaturesMenu_HerbsMenu
	case 6, EventScript_FeaturesMenu_Exit
	case MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	releaseall
	end

EventScript_FeaturesMenu_SwitchItemsMenu::
	multichoice 0, 0, MULTI_SWITCH_ITEM_MENU, FALSE
	switch VAR_RESULT
	case 0, EventScript_FeaturesMenu_GiveEjectPack
	case 1, EventScript_FeaturesMenu_GiveEjectButton
	case 2, EventScript_FeaturesMenu_GiveRedCard
	case MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	releaseall
	end

EventScript_FeaturesMenu_BerriesMenu::
	setvar VAR_0x8004, SCROLL_BERRY_MENU
	special ShowScrollableMultichoice
	waitstate
	switch VAR_RESULT
	case 0, EventScript_FeaturesMenu_GiveLiechiBerry
	case 1, EventScript_FeaturesMenu_GiveGanlonBerry
	case 2, EventScript_FeaturesMenu_GiveSalacBerry
	case 3, EventScript_FeaturesMenu_GivePetayaBerry
	case 4, EventScript_FeaturesMenu_GiveApicotBerry
	case 5, EventScript_FeaturesMenu_GiveLansatBerry
	case 6, EventScript_FeaturesMenu_GiveStarfBerry
	case 7, EventScript_FeaturesMenu_GiveMicleBerry
	case 8, EventScript_FeaturesMenu_GiveCustapBerry
	case 9, EventScript_FeaturesMenu_GiveJabocaBerry
	case 10, EventScript_FeaturesMenu_GiveRowapBerry
	case 11, EventScript_FeaturesMenu_GiveKeeBerry
	case 12, EventScript_FeaturesMenu_GiveMarangaBerry
	case MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	releaseall
	end

EventScript_FeaturesMenu_BoostItemsMenu::
	multichoice 0, 0, MULTI_BOOST_ITEM_MENU, FALSE
	switch VAR_RESULT
	case 0, EventScript_FeaturesMenu_GiveAbsorbBulb
	case 1, EventScript_FeaturesMenu_GiveCellBattery
	case 2, EventScript_FeaturesMenu_GiveLuminousMoss
	case 3, EventScript_FeaturesMenu_GiveSnowball
	case 4, EventScript_FeaturesMenu_GiveAdrenalineOrb
	case 5, EventScript_FeaturesMenu_GiveRoomService
	case 6, EventScript_FeaturesMenu_GiveThroatSpray
	case 7, EventScript_FeaturesMenu_GiveBoosterEnergy
	case MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	releaseall
	end

EventScript_FeaturesMenu_HerbsMenu::
	multichoice 0, 0, MULTI_HERB_MENU, FALSE
	switch VAR_RESULT
	case 0, EventScript_FeaturesMenu_GiveMentalHerb
	case 1, EventScript_FeaturesMenu_GivePowerHerb
	case 2, EventScript_FeaturesMenu_GiveWhiteHerb
	case MULTI_B_PRESSED, EventScript_FeaturesMenu_Exit
	releaseall
	end 

EventScript_FeaturesMenu_GiveEjectPack::
	msgbox Text_BuyEjectPack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_EJECT_PACK
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveEjectButton::
	msgbox Text_BuyEjectButton, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_EJECT_BUTTON
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveRedCard::
	msgbox Text_BuyRedCard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_RED_CARD
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveLiechiBerry::
	msgbox Text_BuyLiechiBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_LIECHI_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveGanlonBerry::
	msgbox Text_BuyGanlonBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_GANLON_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveSalacBerry::
	msgbox Text_BuySalacBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_SALAC_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GivePetayaBerry::
	msgbox Text_BuyPetayaBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_PETAYA_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveApicotBerry::
	msgbox Text_BuyApicotBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_APICOT_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveLansatBerry::
	msgbox Text_BuyLansatBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_LANSAT_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveStarfBerry::
	msgbox Text_BuyStarfBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_STARF_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveMicleBerry::
	msgbox Text_BuyMicleBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_MICLE_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveCustapBerry::
	msgbox Text_BuyCustapBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_CUSTAP_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveJabocaBerry::
	msgbox Text_BuyJabocaBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_JABOCA_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveRowapBerry::
	msgbox Text_BuyRowapBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_ROWAP_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveKeeBerry::
	msgbox Text_BuyKeeBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_KEE_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveMarangaBerry::
	msgbox Text_BuyMarangaBerry, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_MARANGA_BERRY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveAbsorbBulb::
	msgbox Text_BuyAbsorbBulb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_ABSORB_BULB
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveCellBattery::
	msgbox Text_BuyCellBattery, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_CELL_BATTERY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveLuminousMoss::
	msgbox Text_BuyLuminousMoss, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_LUMINOUS_MOSS
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveSnowball::
	msgbox Text_BuySnowball, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_SNOWBALL
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveAdrenalineOrb::
	msgbox Text_BuyAdrenalineOrb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_ADRENALINE_ORB
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveRoomService::
	msgbox Text_BuyRoomService, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_ROOM_SERVICE
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveThroatSpray::
	msgbox Text_BuyThroatSpray, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_THROAT_SPRAY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveBoosterEnergy::
	msgbox Text_BuyBoosterEnergy, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_BOOSTER_ENERGY
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveMentalHerb::
	msgbox Text_BuyMentalHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_MENTAL_HERB
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GivePowerHerb::
	msgbox Text_BuyPowerHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_POWER_HERB
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_GiveWhiteHerb::
	msgbox Text_BuyWhiteHerb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_FeaturesMenu_Exit
	giveitem ITEM_WHITE_HERB
	removeitem ITEM_BOTTLE_CAP
	msgbox Text_SpentBottleCap
	releaseall
	end

EventScript_FeaturesMenu_Exit::
	releaseall
	end

@ placeholder
EventScript_FeaturesMenu_ChangeHiddenAbility::
	releaseall
	end

EventScript_FeaturesMenu_LevelCapAt100::
	msgbox Text_CannotIncreaseLevelCap
	releaseall
	end

EventScript_FeaturesMenu_AfraidOfHeights::
	special BufferMonNickname
	msgbox Text_AfraidOfHeights
	releaseall
	end

EventScript_FeaturesMenu_CantChangeAbility::
	special BufferMonNickname
	msgbox Text_CantChangeAbility
	releaseall
	end

Text_ChangeNameToNature::
	.string "Change {STR_VAR_1}'s Nature to\n"
	.string "{STR_VAR_2}?$"

Text_NameChangedToNature::
	.string "{STR_VAR_1}'s Nature has been\n"
	.string "changed to {STR_VAR_2}!$"

Text_HPChanged::
	.string "{STR_VAR_1}'s HP IV has been changed to\n"
	.string "{STR_VAR_2}!$"

Text_AttackChanged::
	.string "{STR_VAR_1}'s Attack IV has been\n"
	.string "changed to {STR_VAR_2}!$"

Text_DefenseChanged::
	.string "{STR_VAR_1}'s Defense IV has been\n"
	.string "changed to {STR_VAR_2}!$"

Text_SpAttackChanged::
	.string "{STR_VAR_1}'s Special Attack IV has\n"
	.string "been changed to {STR_VAR_2}!$"

Text_SpDefenseChanged::
	.string "{STR_VAR_1}'s Special Defense IV has\n"
	.string "been changed to {STR_VAR_2}!$"

Text_SpeedChanged::
	.string "{STR_VAR_1}'s Speed IV has been\n"
	.string "changed to {STR_VAR_2}!$"

Text_IncreaseHPtoNumber::
	.string "Change {STR_VAR_1}'s HP IV to {STR_VAR_2}?$"

Text_IncreaseAttacktoNumber::
	.string "Change {STR_VAR_1}'s Attack IV to {STR_VAR_2}?$"

Text_IncreaseDefensetoNumber::
	.string "Change {STR_VAR_1}'s Defense IV to {STR_VAR_2}?$"

Text_IncreaseSpAtktoNumber::
	.string "Change {STR_VAR_1}'s Special Attack IV\n"
	.string "to {STR_VAR_2}?$"

Text_IncreaseSpDeftoNumber::
	.string "Change {STR_VAR_1}'s Special Defense IV\n"
	.string "to {STR_VAR_2}?$"

Text_IncreaseSpeedtoNumber::
	.string "Change {STR_VAR_1}'s Speed IV to {STR_VAR_2}?$"

Text_NoHeartScales::
    .string "You don't have any Heart Scales!$"

Text_NoBottleCaps::
    .string "You don't have any Bottle Caps!$"

Text_CannotIncreaseLevelCap::
    .string "Level Cap cannot be increased past\n"
	.string "100.$"

Text_IncreaseLevelCap::
	.string "Increase {STR_VAR_1}'s level cap?$"

Text_LevelCapIncreased::
	.string "{STR_VAR_1}'s level cap has been\n"
	.string "increased by {STR_VAR_2}!$"

Text_SpentHeartScale::
	.string "{PLAYER} spent one Heart Scale.$"

Text_SpentBottleCap::
	.string "{PLAYER} spent one Bottle Cap.$"

Text_SpentTwoHeartScales::
	.string "{PLAYER} spent two Heart Scales.$"

Text_SpentThreeHeartScales::
	.string "{PLAYER} spent three Heart Scales.$"

Text_AfraidOfHeights::
	.string "{STR_VAR_1} is afraid of heights.\n"
	.string "It would be best to keep its Levitate.$"

Text_CantChangeAbility::
	.string "{STR_VAR_1}'s ability can't be changed.$"

Text_ChangeAbility::
	.string "Change {STR_VAR_1}'s ability to\n"
	.string "{STR_VAR_2}?$"

Text_AbilityChanged::
	.string "{STR_VAR_1}'s ability has been\n"
	.string "changed to {STR_VAR_2}!$"

Text_BuyEjectPack::
	.string "Buy an Eject Pack for one Bottle Cap?$"

Text_BuyEjectButton::
	.string "Buy an Eject Button for one Bottle Cap?$"

Text_BuyRedCard::
	.string "Buy a Red Card for one Bottle Cap?$"

Text_BuyLiechiBerry::
	.string "Buy a Liechi Berry for one Bottle Cap?$"

Text_BuyGanlonBerry::
	.string "Buy a Ganlon Berry for one Bottle Cap?$"

Text_BuySalacBerry::
	.string "Buy a Salac Berry for one Bottle Cap?$"

Text_BuyPetayaBerry::
	.string "Buy a Petaya Berry for one Bottle Cap?$"

Text_BuyApicotBerry::
	.string "Buy an Apicot Berry for one Bottle Cap?$"

Text_BuyLansatBerry::
	.string "Buy a Lansat Berry for one Bottle Cap?$"

Text_BuyStarfBerry::
	.string "Buy a Starf Berry for one Bottle Cap?$"

Text_BuyMicleBerry::
	.string "Buy a Micle Berry for one Bottle Cap?$"

Text_BuyCustapBerry::
	.string "Buy a Custap Berry for one Bottle Cap?$"

Text_BuyJabocaBerry::
	.string "Buy a Jaboca Berry for one Bottle Cap?$"

Text_BuyRowapBerry::
	.string "Buy a Rowap Berry for one Bottle Cap?$"

Text_BuyKeeBerry::
	.string "Buy a Kee Berry for one Bottle Cap?$"

Text_BuyMarangaBerry::
	.string "Buy a Maranga Berry for one Bottle Cap?$"

Text_BuyAbsorbBulb::
	.string "Buy an Absorb Bulb for one Bottle Cap?$"

Text_BuyCellBattery::
	.string "Buy a Cell Battery for one Bottle Cap?$"

Text_BuyLuminousMoss::
	.string "Buy Luminous Moss for one Bottle Cap?$"

Text_BuySnowball::
	.string "Buy a Snowball for one Bottle Cap?$"

Text_BuyAdrenalineOrb::
	.string "Buy an Adrenaline Orb for one Bottle\n"
	.string "Cap?$"

Text_BuyRoomService::
	.string "Buy Room Service for one Bottle Cap?$"

Text_BuyThroatSpray::
	.string "Buy Throat Spray for one Bottle Cap?$"

Text_BuyBoosterEnergy::
	.string "Buy a Booster Energy for one Bottle\n"
	.string "Cap?$"

Text_BuyMentalHerb::
	.string "Buy a Mental Herb for one Bottle Cap?$"

Text_BuyPowerHerb::
	.string "Buy a Power Herb for one Bottle Cap?$"

Text_BuyWhiteHerb::
	.string "Buy a White Herb for one Bottle Cap?$"
