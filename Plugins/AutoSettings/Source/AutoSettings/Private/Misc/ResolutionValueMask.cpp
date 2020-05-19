// Copyright Sam Bonifacio. All Rights Reserved.

#include "Misc/ResolutionValueMask.h"
#include "Utility/ResolutionStringUtils.h"

FString UResolutionValueMask::MaskValue_Implementation(const FString& ConsoleValue) const
{
	return UResolutionStringUtils::GetPixelsString(ConsoleValue);
}

FString UResolutionValueMask::RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const
{
	return SettingValue + UResolutionStringUtils::GetMode(ConsoleValue);
}
