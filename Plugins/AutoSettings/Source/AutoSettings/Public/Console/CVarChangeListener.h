// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "CVarChangeListener.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIntCVarChangedEvent, int32, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolCVarChangedEvent, bool, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFloatCVarChangedEvent, float, NewValue);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStringCVarChangedEvent, FString, NewValue);

/**
 * Observes a console variable and fires events when it changes
 */
UCLASS()
class AUTOSETTINGS_API UCVarChangeListener : public UObject
{
	GENERATED_BODY()
	
public:

	// Event triggered when the CVar value changes, with the new value as an integer parameter
	FIntCVarChangedEvent OnIntCVarChanged;

	// Event triggered when the CVar value changes, with the new value as a boolean parameter
	FBoolCVarChangedEvent OnBoolCVarChanged;

	// Event triggered when the CVar value changes, with the new value as an float parameter
	FFloatCVarChangedEvent OnFloatCVarChanged;

	// Event triggered when the CVar value changes, with the new value as a string parameter
	FStringCVarChangedEvent OnStringCVarChanged;

	// Initialize with the given CVar
	virtual void Init(IConsoleVariable* InCVar);

protected:
	IConsoleVariable* CVar;

	virtual void CVarSink();

private:
	FString CurrentValue;
	
};
