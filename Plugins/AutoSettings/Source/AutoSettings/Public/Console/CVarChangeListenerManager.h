// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "CVarChangeListener.h"
#include "CVarChangeListenerManager.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FIntCVarChangedSignature, int32, NewValue);
DECLARE_DYNAMIC_DELEGATE_OneParam(FBoolCVarChangedSignature, bool, NewValue);
DECLARE_DYNAMIC_DELEGATE_OneParam(FFloatCVarChangedSignature, float, NewValue);
DECLARE_DYNAMIC_DELEGATE_OneParam(FStringCVarChangedSignature, FString, NewValue);

/**
 * Manages console variable change listeners
 * Enables event-based listening for console variable changes in Blueprint
 * Avoids creating duplicate listeners for the same CVar
 */
UCLASS()
class AUTOSETTINGS_API UCVarChangeListenerManager : public UObject
{
	GENERATED_BODY()
	
public:

	// Get singleton instance
	static UCVarChangeListenerManager* Get();

	// Adds a callback function for an integer CVar, static version
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	UFUNCTION(BlueprintCallable, Category = "Console", meta = (DisplayName = "Add Int CVar Callback"))
	static void AddIntCVarCallbackStatic(FName Name, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Adds a callback function for an bool CVar, static version
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	UFUNCTION(BlueprintCallable, Category = "Console", meta = (DisplayName = "Add Bool CVar Callback"))
	static void AddBoolCVarCallbackStatic(FName Name, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Adds a callback function for an float CVar, static version
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	UFUNCTION(BlueprintCallable, Category = "Console", meta = (DisplayName = "Add Float CVar Callback"))
	static void AddFloatCVarCallbackStatic(FName Name, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Adds a callback function for an string CVar, static version
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	UFUNCTION(BlueprintCallable, Category = "Console", meta = (DisplayName = "Add String CVar Callback"))
	static void AddStringCVarCallbackStatic(FName Name, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Adds a callback function for an integer CVar
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	void AddIntCVarCallback(FName Name, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Adds a callback function for a bool CVar
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	void AddBoolCVarCallback(FName Name, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Adds a callback function for an float CVar
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	void AddFloatCVarCallback(FName Name, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately);

	// Adds a callback function for an string CVar
	// @param CallbackImmediately If true, will immediately fire the callback with current value
	void AddStringCVarCallback(FName Name, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately);

private:

	static UCVarChangeListenerManager* Singleton;

	UPROPERTY()
	TMap<FName, UCVarChangeListener*> Listeners;

	UCVarChangeListener* FindOrCreateListener(FName Name);
	
};
