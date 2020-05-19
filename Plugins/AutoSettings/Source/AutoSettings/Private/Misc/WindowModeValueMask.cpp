// Copyright Sam Bonifacio. All Rights Reserved.

#include "Misc/WindowModeValueMask.h"
#include "Utility/ResolutionStringUtils.h"

FString UWindowModeValueMask::MaskValue_Implementation(const FString& ConsoleValue) const
{
	return UResolutionStringUtils::GetMode(ConsoleValue);
}

FString UWindowModeValueMask::RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const
{
	return UResolutionStringUtils::GetPixelsString(ConsoleValue) + SettingValue;
}
