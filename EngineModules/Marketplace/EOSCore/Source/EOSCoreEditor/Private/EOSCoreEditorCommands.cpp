/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSCoreEditorCommands.h"

#define LOCTEXT_NAMESPACE "FEOSCoreEditorModule"

void FEOSCoreEditorCommands::RegisterCommands()
{
	UI_COMMAND(DonateAction, "Donate to Support eelDev!", "Support eelDev by Donating!", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(HelpAction, "Help & Documentation", "EOSCore:: Documentation", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(DiscordAction, "Discord Server", "eelDev Discord Server", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(MarketplaceAction, "Unreal Marketplace", "EOSCore:: Marketplace Page", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
