/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "EOSCoreEditorStyle.h"

class FEOSCoreEditorCommands : public TCommands<FEOSCoreEditorCommands>
{
public:
	FEOSCoreEditorCommands()
		: TCommands<FEOSCoreEditorCommands>(TEXT("EOSCoreEditor"), NSLOCTEXT("Contexts", "EOSCoreEditor", "EOSCoreEditor Plugin"), NAME_None, FEOSCoreEditorStyle::GetStyleSetName()) {}
	virtual void RegisterCommands() override;
public:
	TSharedPtr<FUICommandInfo> DonateAction;
	TSharedPtr<FUICommandInfo> HelpAction;
	TSharedPtr<FUICommandInfo> DiscordAction;
	TSharedPtr<FUICommandInfo> MarketplaceAction;
};
