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
