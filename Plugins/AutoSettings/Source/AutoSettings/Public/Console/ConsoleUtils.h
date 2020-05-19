// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "HAL/IConsoleManager.h"
#include "ConsoleUtils.generated.h"

/**
 * Static utility functions for interacting with console and console variables
 */
UCLASS()
class AUTOSETTINGS_API UConsoleUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	// Returns the CVar with the specified name
	static IConsoleVariable* GetCVar(FName Name);

	// True if the CVar with the specified name is registered
	UFUNCTION(BlueprintPure, Category = "Console")
	static bool IsCVarRegistered(FName Name);

	// Register a new integer CVar
	static void RegisterIntCVar(FName Name, int32 DefaultValue, const FString& Help);

	// Register a new integer CVar using a boolean default value (false = 0, true = 1)
	static void RegisterBoolCVar(FName Name, bool DefaultValue, const FString& Help);

	// Register a new float CVar
	static void RegisterFloatCVar(FName Name, float DefaultValue, const FString& Help);

	// Register a new string CVar
	static void RegisterStringCVar(FName Name, const FString& DefaultValue, const FString& Help);

	// Get current value of CVar
	UFUNCTION(BlueprintPure, Category = "Console")
	static int32 GetIntCVar(FName Name);

	// Get current value of int CVar as bool
	UFUNCTION(BlueprintPure, Category = "Console")
	static bool GetBoolCVar(FName Name);

	// Get current value of CVar
	UFUNCTION(BlueprintPure, Category = "Console")
	static float GetFloatCVar(FName Name);

	// Get current value of CVar
	UFUNCTION(BlueprintPure, Category = "Console")
	static FString GetStringCVar(FName Name);

	// Set value of CVar
	UFUNCTION(BlueprintCallable, Category = "Console")
	static void SetIntCVar(FName Name, int32 Value);

	// Set value of int CVar as bool
	UFUNCTION(BlueprintCallable, Category = "Console")
	static void SetBoolCVar(FName Name, bool Value);

	// Set value of CVar
	UFUNCTION(BlueprintCallable, Category = "Console")
	static void SetFloatCVar(FName Name, float Value);

	// Set value of CVar
	UFUNCTION(BlueprintCallable, Category = "Console")
	static void SetStringCVar(FName Name, FString Value);

private:
	// Used to preserve priority flags when setting CVar
	static EConsoleVariableFlags PreserveFlags(IConsoleVariable* CVar);
	
};
