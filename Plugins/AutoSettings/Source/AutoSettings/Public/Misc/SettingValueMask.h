// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "SettingValueMask.generated.h"

/**
 * Represents transformations that can be applied to a setting value to add or subtract subsections that the setting doesn't care about
 * e.g. Resolution CVar (r.SetRes) can be in the form of "1920x1080wf" - you might want one setting that cares about the pixel dimensions (1920x1080) and another that cares about the window mode (wf)
 */
UCLASS(abstract, EditInlineNew, DefaultToInstanced, Blueprintable)
class AUTOSETTINGS_API USettingValueMask : public UObject
{
	GENERATED_BODY()
	
public:
	// Extract the value that the setting cares about from the full console value
	UFUNCTION(BlueprintNativeEvent, Category = "Setting Value Mask")
	FString MaskValue(const FString& ConsoleValue) const;

	// Transform a setting value back into a new console value, using the current console value for parts we don't care about
	UFUNCTION(BlueprintNativeEvent, Category = "Setting Value Mask")
	FString RecombineValues(const FString& SettingValue, const FString& ConsoleValue) const;
	

};
