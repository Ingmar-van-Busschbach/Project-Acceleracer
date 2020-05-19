// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Misc/SettingOptionFactory.h"
#include "ResolutionOptionFactory.generated.h"

/**
 * Factory class for constructing a set of options for supported fullscreen resolutions
 */
UCLASS()
class AUTOSETTINGS_API UResolutionOptionFactory : public USettingOptionFactory
{
	GENERATED_BODY()
	
	// Construct options for supported resolutions
	virtual TArray<FSettingOption> ConstructOptions_Implementation() const override;
	
};
