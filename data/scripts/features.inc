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

EventScript_FeaturesMenu_Exit::
	releaseall
	end

EventScript_FeaturesMenu_LevelCapAt100::
	msgbox Text_CannotIncreaseLevelCap
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