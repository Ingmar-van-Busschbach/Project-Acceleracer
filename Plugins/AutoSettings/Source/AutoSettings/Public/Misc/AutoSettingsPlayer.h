// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Misc/AutoSettingsConfig.h"
#include "InputMapping/InputMappingManager.h"
#include "AutoSettingsPlayer.generated.h"

UINTERFACE(MinimalAPI)
class UAutoSettingsPlayer : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for AutoSettings to interact with a PlayerController
 */
class AUTOSETTINGS_API IAutoSettingsPlayer
{
	GENERATED_BODY()

public:

	static FString GetUniquePlayerIdentifier(const APlayerController* PlayerController);
	static FString GetUniquePlayerIdentifier_Default(const APlayerController* PlayerController);

	// This should return a unique identifier for the player that can be used as a key to store custom input overrides
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Auto Settings")
	FString GetUniquePlayerIdentifier() const;
	virtual FString GetUniquePlayerIdentifier_Implementation() const;

	// ----

	static FInputMappingPreset GetDefaultInputMappingPreset(const APlayerController* PlayerController);
	static FInputMappingPreset GetDefaultInputMappingPreset_Default();

	// Override to determine which preset the player should use by default
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Input Mapping")
	FInputMappingPreset GetDefaultInputMappingPreset() const;
	virtual FInputMappingPreset GetDefaultInputMappingPreset_Implementation() const;

	// ----

	static bool GetInputMappings(const APlayerController* PlayerController, FPlayerInputMappings& InputMappings);

	// Override to store input mappings
	// This is called whenever AutoSettings needs to get a player's current mappings
	// e.g. Get input mappings from a user's profile
	// See SaveInputMappings()
	UFUNCTION(BlueprintNativeEvent)
	bool GetInputMappings(FPlayerInputMappings& InputMappings) const;
	virtual bool GetInputMappings_Implementation(FPlayerInputMappings& InputMappings) const;

	// ----

	static void SaveInputMappings(APlayerController* PlayerController, FPlayerInputMappings InputMappings);

	// Override to implement custom saving logic
	// This is called whenever the user's input mappings are modified
	// e.g. Save input mappings in a user's save file
	// See GetInputMappings()
	UFUNCTION(BlueprintNativeEvent)
	void SaveInputMappings(FPlayerInputMappings InputMappings);
	virtual void SaveInputMappings_Implementation(FPlayerInputMappings InputMappings);
	
};
