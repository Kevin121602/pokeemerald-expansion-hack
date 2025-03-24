EventScript_FeaturesMenu_NoHeartScales::
	msgbox Text_NoHeartScales
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
	multichoice 0, 0, MULTI_CHANGE_IV, TRUE
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

Text_HPChanged::
	.string "{STR_VAR_1}'s HP has been changed to\n"
	.string "{STR_VAR_2}!$"

Text_AttackChanged::
	.string "{STR_VAR_1}'s Attack has been changed\n"
	.string "to {STR_VAR_2}!$"

Text_DefenseChanged::
	.string "{STR_VAR_1}'s Defense has been changed\n"
	.string "to {STR_VAR_2}!$"

Text_SpAttackChanged::
	.string "{STR_VAR_1}'s Special Attack has been\n"
	.string "changed to {STR_VAR_2}!$"

Text_SpDefenseChanged::
	.string "{STR_VAR_1}'s Special Defense has been\n"
	.string "changed to {STR_VAR_2}!$"

Text_SpeedChanged::
	.string "{STR_VAR_1}'s Speed has been changed\n"
	.string "to {STR_VAR_2}!$"

Text_IncreaseHPtoNumber::
	.string "Change {STR_VAR_1}'s HP to {STR_VAR_2}?$"

Text_IncreaseAttacktoNumber::
	.string "Change {STR_VAR_1}'s Attack to {STR_VAR_2}?$"

Text_IncreaseDefensetoNumber::
	.string "Change {STR_VAR_1}'s Defense to {STR_VAR_2}?$"

Text_IncreaseSpAtktoNumber::
	.string "Change {STR_VAR_1}'s Special Attack\n"
	.string "to {STR_VAR_2}?$"

Text_IncreaseSpDeftoNumber::
	.string "Change {STR_VAR_1}'s Special Defense\n"
	.string "to {STR_VAR_2}?$"

Text_IncreaseSpeedtoNumber::
	.string "Change {STR_VAR_1}'s Speed to {STR_VAR_2}?$"

Text_NoHeartScales::
    .string "You don't have any Heart Scales!$"

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
