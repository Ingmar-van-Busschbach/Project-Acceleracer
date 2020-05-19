// Copyright Sam Bonifacio. All Rights Reserved.

#include "Console/CVarChangeListener.h"
#include "HAL/IConsoleManager.h"
#include "Utility/AutoSettingsStringUtils.h"

void UCVarChangeListener::Init(IConsoleVariable* InCVar)
{
	CVar = InCVar;

	CurrentValue = CVar->GetString();

	// Register sink
	IConsoleManager::Get().RegisterConsoleVariableSink_Handle(FConsoleCommandDelegate::CreateUObject(this, &UCVarChangeListener::CVarSink));
}

void UCVarChangeListener::CVarSink()
{
	const FString NewValue = CVar->GetString();

	// Check if value has updated since the last time we checked
	if (NewValue != CurrentValue)
	{
		CurrentValue = NewValue;

		OnStringCVarChanged.Broadcast(CurrentValue);
		const int32 IntValue = CurrentValue.IsNumeric() ? FCString::Atoi(*CurrentValue) : 0;
		OnIntCVarChanged.Broadcast(IntValue);
		OnBoolCVarChanged.Broadcast(FAutoSettingsStringUtils::IsTruthy(CurrentValue));
		OnFloatCVarChanged.Broadcast(FCString::Atof(*CurrentValue));

	}
}
