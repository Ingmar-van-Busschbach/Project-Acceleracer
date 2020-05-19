// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Misc/SettingValueMask.h"
#include "WindowModeValueMask.generated.h"

/**
 * SettingValueMask for splitting and recombining the r.SetRes CVar into Window Mode
 */
UCLASS()
class AUTOSETTINGS_API UWindowModeValueMask : public USettingValueMask
{
	GENERATED_BODY()
	
public:

	// Get the window mode part of r.setres console variable
	virtual FString MaskValue_Implementation(const FString& ConsoleValue) const override;

	// Combine a modified window mode string with the existing pixel dimension part of r.setres console variable
	virtual FString RecombineValues_Implementation(const FString& SettingValue, const FString& ConsoleValue) const override;
	
};
