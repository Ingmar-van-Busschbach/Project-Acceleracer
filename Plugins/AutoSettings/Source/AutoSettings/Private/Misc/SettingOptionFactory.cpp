// Copyright Sam Bonifacio. All Rights Reserved.

#include "Misc/SettingOptionFactory.h"
#include "Misc/AutoSettingsLogs.h"

TArray<FSettingOption> USettingOptionFactory::ConstructOptions_Implementation() const
{
	UE_LOG(LogAutoSettings, Error, TEXT("Default ConstructOptions called, no options constructed"));
	return TArray<FSettingOption>();
}