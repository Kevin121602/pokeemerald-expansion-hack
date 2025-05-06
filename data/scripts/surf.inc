EventScript_UseSurf::
	goto_if_unset FLAG_BADGE02_GET, EventScript_EndUseSurf
	checkitem ITEM_HM_SURF
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndUseSurf
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
