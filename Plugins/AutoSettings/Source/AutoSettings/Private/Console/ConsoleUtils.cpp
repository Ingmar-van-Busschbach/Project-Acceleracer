// Copyright Sam Bonifacio. All Rights Reserved.

#include "Console/ConsoleUtils.h"
#include "Logging/MessageLog.h"
#include "Misc/AutoSettingsError.h"

IConsoleVariable* UConsoleUtils::GetCVar(FName Name)
{
	IConsoleVariable* CVar = IConsoleManager::Get().FindConsoleVariable(Name.ToString().GetCharArray().GetData());

	if (!CVar)
	{
		FAutoSettingsError::LogError(FString::Printf(TEXT("Tried to find console variable '%s' that doesn't exist"), *Name.ToString()));
	}

	return CVar;
}

bool UConsoleUtils::IsCVarRegistered(FName Name)
{
	IConsoleVariable* CVar = IConsoleManager::Get().FindConsoleVariable(Name.ToString().GetCharArray().GetData());

	return CVar != nullptr;
}

void UConsoleUtils::RegisterIntCVar(FName Name, int32 DefaultValue, const FString& Help)
{
	FString SanitizedHelp = Help.IsEmpty() ? " " : Help;
	IConsoleManager::Get().RegisterConsoleVariable(Name.ToString().GetCharArray().GetData(), DefaultValue, SanitizedHelp.GetCharArray().GetData(), 0);
}

void UConsoleUtils::RegisterBoolCVar(FName Name, bool DefaultValue, const FString& Help)
{
	FString SanitizedHelp = Help.IsEmpty() ? " " : Help;
	IConsoleManager::Get().RegisterConsoleVariable(Name.ToString().GetCharArray().GetData(), DefaultValue, SanitizedHelp.GetCharArray().GetData(), 0);
}

void UConsoleUtils::RegisterFloatCVar(FName Name, float DefaultValue, const FString& Help)
{
	FString SanitizedHelp = Help.IsEmpty() ? " " : Help;
	IConsoleManager::Get().RegisterConsoleVariable(Name.ToString().GetCharArray().GetData(), DefaultValue, SanitizedHelp.GetCharArray().GetData(), 0);
}

void UConsoleUtils::RegisterStringCVar(FName Name, const FString& DefaultValue, const FString& Help)
{
	FString SanitizedHelp = Help.IsEmpty() ? " " : Help;
	IConsoleManager::Get().RegisterConsoleVariable(Name.ToString().GetCharArray().GetData(), DefaultValue, SanitizedHelp.GetCharArray().GetData(), 0);
}

int32 UConsoleUtils::GetIntCVar(FName Name)
{
	if(!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Get Int CVar", Name);
		return 0;
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if (!ensure(CVar))
	{
		return 0;
	}
	
	return CVar->GetInt();
}

bool UConsoleUtils::GetBoolCVar(FName Name)
{
	if (!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Get Bool CVar", Name);
		return false;
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if (!ensure(CVar))
	{
		return false;
	}
	
	return CVar->GetBool();
}

float UConsoleUtils::GetFloatCVar(FName Name)
{
	if (!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Get Float CVar", Name);
		return 0.f;
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if(!ensure(CVar))
	{
		return 0.f;
	}
	
	return CVar->GetFloat();
}

FString UConsoleUtils::GetStringCVar(FName Name)
{
	if (!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Get String CVar", Name);
		return FString();
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if(!ensure(CVar))
	{
		return FString();
	}
	
	return CVar->GetString();
}

void UConsoleUtils::SetIntCVar(FName Name, int32 Value)
{
	if (!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Set Int CVar", Name);
		return;
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if(!ensure(CVar))
	{
		return;
	}
	
	CVar->Set(Value, PreserveFlags(CVar));
	IConsoleManager::Get().CallAllConsoleVariableSinks();
}

void UConsoleUtils::SetBoolCVar(FName Name, bool Value)
{
	if (!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Set Bool CVar", Name);
		return;
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if (!ensure(CVar))
	{
		return;
	}
	
	CVar->Set(Value, PreserveFlags(CVar));
	IConsoleManager::Get().CallAllConsoleVariableSinks();
}

void UConsoleUtils::SetFloatCVar(FName Name, float Value)
{
	if (!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Set Float CVar", Name);
		return;
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if (!ensure(CVar))
	{
		return;
	}

	CVar->Set(Value, PreserveFlags(CVar));
	IConsoleManager::Get().CallAllConsoleVariableSinks();
}

void UConsoleUtils::SetStringCVar(FName Name, FString Value)
{
	if (!IsCVarRegistered(Name))
	{
		FAutoSettingsError::LogMissingCVar("Set String CVar", Name);
		return;
	}
	
	IConsoleVariable* CVar = GetCVar(Name);
	if (!ensure(CVar))
	{
		return;
	}

	CVar->Set(Value.GetCharArray().GetData(), PreserveFlags(CVar));
	IConsoleManager::Get().CallAllConsoleVariableSinks();
}

EConsoleVariableFlags UConsoleUtils::PreserveFlags(IConsoleVariable* CVar)
{
	return (EConsoleVariableFlags)(CVar->GetFlags() & ECVF_SetByMask);
}
