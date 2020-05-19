// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "SettingOption.h"
#include "SettingOptionFactory.generated.h"

/**
 * Base factory class for constructing a set of options for a setting
 */
UCLASS(abstract, Blueprintable)
class AUTOSETTINGS_API USettingOptionFactory : public UObject
{
	GENERATED_BODY()
	
public:

	// Override to construct options dynamically
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Setting Option Factory")
	TArray<FSettingOption> ConstructOptions() const;
	
};
