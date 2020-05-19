// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Misc/SettingValueMask.h"
#include "ResolutionValueMask.generated.h"

/**
 * SettingValueMask for splitting and recombining the r.SetRes CVar into Resolution
 */
UCLASS()
class AUTOSETTINGS_API UResolutionValueMask : public USettingValueMask
{
	GENERATED_BODY()
	
public:

	// Get the pixel dimensions of r.setres console variable
	virtual FString MaskValue_Implementation(const FString& ConsoleValue) const override;

	// Combine a modified pixel dimensions string with the existing window mode of r.setres console variable
	virtual FString RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const override;
	
};
