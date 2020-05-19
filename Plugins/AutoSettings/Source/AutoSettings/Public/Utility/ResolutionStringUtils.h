// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ResolutionStringUtils.generated.h"

/**
 * Helpers for dealing with strings combining resolution with window mode, for example "1920x1080wf"
 */
UCLASS()
class AUTOSETTINGS_API UResolutionStringUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	// Converts resolution string to pixels only
	// e.g. "1920x1080wf" -> "1920x1080"
	static FString GetPixelsString(FString ResolutionString);

	// Gets IntPoint representing pixels from resolution string
	static FIntPoint GetPixels(FString ResolutionString);

	// Gets window mode flag from resolution string
	// e.g. "1920x1080wf" -> "wf"
	static FString GetMode(FString ResolutionString);

	// Gets string representing pixels in "1920x1080" format
	static FString PointToString(FIntPoint Pixels);
	
};
