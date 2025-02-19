OldaleMeadow_House1_MapScripts::
	.byte 0

OldaleMeadow_House1_EventScript_HiddenPowerTutor::
	lock
	faceplayer
	msgbox OldaleMeadow_House1_Text_HiddenPower, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_HiddenPowerDeclined
	setvar VAR_0x8005, MOVE_HIDDEN_POWER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_HiddenPowerDeclined
	releaseall
	end

MoveTutor_EventScript_HiddenPowerDeclined:
	releaseall
	end

OldaleMeadow_House1_Text_HiddenPower:
	.string "The solitude of this house helps\n"
	.string "me to draw out my full potential!\p"
	.string "Would you like me to help draw\n"
	.string "out your Pokémon's potential?$"