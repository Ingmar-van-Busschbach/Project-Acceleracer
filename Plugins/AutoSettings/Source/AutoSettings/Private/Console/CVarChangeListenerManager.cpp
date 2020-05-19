// Copyright Sam Bonifacio. All Rights Reserved.

#include "Console/CVarChangeListenerManager.h"
#include "Console/ConsoleUtils.h"
#include "Misc/AutoSettingsLogs.h"
#include "Misc/AutoSettingsError.h"

UCVarChangeListenerManager* UCVarChangeListenerManager::Singleton = nullptr;

UCVarChangeListenerManager* UCVarChangeListenerManager::Get()
{
	if (!Singleton)
	{
		Singleton = NewObject<UCVarChangeListenerManager>();
		Singleton->AddToRoot();
	}

	return Singleton;
}

void UCVarChangeListenerManager::AddIntCVarCallbackStatic(FName Name, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	Get()->AddIntCVarCallback(Name, ChangedCallback, CallbackImmediately);
}

void UCVarChangeListenerManager::AddBoolCVarCallbackStatic(FName Name, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	Get()->AddBoolCVarCallback(Name, ChangedCallback, CallbackImmediately);
}

void UCVarChangeListenerManager::AddFloatCVarCallbackStatic(FName Name, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	Get()->AddFloatCVarCallback(Name, ChangedCallback, CallbackImmediately);
}

void UCVarChangeListenerManager::AddStringCVarCallbackStatic(FName Name, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	Get()->AddStringCVarCallback(Name, ChangedCallback, CallbackImmediately);
}

void UCVarChangeListenerManager::AddIntCVarCallback(FName Name, FIntCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	if (!UConsoleUtils::IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Add Int CVar Callback", Name);
		return;
	}
	
	UCVarChangeListener* Listener = FindOrCreateListener(Name);
	if(!Listener)
	{
		// Failed to find CVar
		return;
	}
	if (Listener->OnIntCVarChanged.Contains(ChangedCallback))
	{
		UE_LOG(LogAutoSettings, Warning, TEXT("Cannot add callback for %s because it is already registered"), *Name.ToString());
	}
	else
	{
		Listener->OnIntCVarChanged.Add(ChangedCallback);
	}
	if (CallbackImmediately)
		ChangedCallback.Execute(UConsoleUtils::GetCVar(Name)->GetInt());
}

void UCVarChangeListenerManager::AddBoolCVarCallback(FName Name, FBoolCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	if (!UConsoleUtils::IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Add Bool CVar Callback", Name);
		return;
	}
	
	UCVarChangeListener* Listener = FindOrCreateListener(Name);
	if (!Listener)
	{
		// Failed to find CVar
		return;
	}
	if (Listener->OnBoolCVarChanged.Contains(ChangedCallback))
	{
		UE_LOG(LogAutoSettings, Warning, TEXT("Cannot add callback for %s because it is already registered"), *Name.ToString());
	}
	else
	{
		Listener->OnBoolCVarChanged.Add(ChangedCallback);
	}
	if (CallbackImmediately)
		ChangedCallback.Execute(UConsoleUtils::GetCVar(Name)->GetBool());
}

void UCVarChangeListenerManager::AddFloatCVarCallback(FName Name, FFloatCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	if (!UConsoleUtils::IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Add Float CVar Callback", Name);
		return;
	}
	
	UCVarChangeListener* Listener = FindOrCreateListener(Name);
	if (!Listener)
	{
		// Failed to find CVar
		return;
	}
	if (Listener->OnFloatCVarChanged.Contains(ChangedCallback))
	{
		UE_LOG(LogAutoSettings, Warning, TEXT("Cannot add callback for %s because it is already registered"), *Name.ToString());
	}
	else
	{
		Listener->OnFloatCVarChanged.Add(ChangedCallback);
	}
	if (CallbackImmediately)
		ChangedCallback.Execute(UConsoleUtils::GetCVar(Name)->GetFloat());
}

void UCVarChangeListenerManager::AddStringCVarCallback(FName Name, FStringCVarChangedSignature ChangedCallback, bool CallbackImmediately)
{
	if (!UConsoleUtils::IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Add String CVar Callback", Name);
		return;
	}
	
	UCVarChangeListener* Listener = FindOrCreateListener(Name);
	if (!Listener)
	{
		// Failed to find CVar
		return;
	}
	if (Listener->OnStringCVarChanged.Contains(ChangedCallback))
	{
		UE_LOG(LogAutoSettings, Warning, TEXT("Cannot add callback for %s because it is already registered"), *Name.ToString());
	}
	else
	{
		Listener->OnStringCVarChanged.Add(ChangedCallback);
	}
	if (CallbackImmediately)
		ChangedCallback.Execute(UConsoleUtils::GetCVar(Name)->GetString());
}

UCVarChangeListener* UCVarChangeListenerManager::FindOrCreateListener(FName Name)
{
	IConsoleVariable* CVar = UConsoleUtils::GetCVar(Name);

	if (!ensureMsgf(CVar, TEXT("Failed to find CVar: %s"), *Name.ToString()))
	{
		return nullptr;
	}

	UCVarChangeListener** Pointer = Listeners.Find(Name);

	UCVarChangeListener* Listener = Pointer ? *Pointer : nullptr;

	// If it doesn't exist, create one
	if (!Listener)
	{
		Listener = NewObject<UCVarChangeListener>();
		Listener->Init(CVar);
		Listeners.Add(Name, Listener);
	}

	return Listener;

}