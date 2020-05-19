// Copyright Sam Bonifacio. All Rights Reserved.

#include "Misc/SettingValueMask.h"
#include "Misc/AutoSettingsLogs.h"

FString USettingValueMask::MaskValue_Implementation(const FString& ConsoleValue) const
{
	UE_LOG(LogAutoSettings, Error, TEXT("Undefined setting mask applied"));
	return ConsoleValue;
}

FString USettingValueMask::RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const
{
	UE_LOG(LogAutoSettings, Error, TEXT("Undefined setting mask applied"));
	return SettingValue;
}
