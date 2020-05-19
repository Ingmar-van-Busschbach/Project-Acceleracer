// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once
#include "SettingOption.generated.h"

// Display label / internal value pair
USTRUCT(Blueprintable)
struct FSettingOption
{
	GENERATED_BODY()

	// Display label
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Option")
	FText Label;

	// Internal value that the console variable will be set to - If blank will use the array index of the element
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Option")
	FString Value;

	FSettingOption() {};

	FSettingOption(FText InLabel, FString InValue)
	{
		Label = InLabel;
		Value = InValue;
	}

};
