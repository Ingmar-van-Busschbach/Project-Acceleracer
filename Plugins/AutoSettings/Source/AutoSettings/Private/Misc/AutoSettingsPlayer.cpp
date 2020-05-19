// Copyright Sam Bonifacio. All Rights Reserved.

#include "Misc/AutoSettingsPlayer.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "Misc/AutoSettingsLogs.h"

FString IAutoSettingsPlayer::GetUniquePlayerIdentifier(const APlayerController* PlayerController)
{
	check(PlayerController);
	return PlayerController->Implements<UAutoSettingsPlayer>() ? Execute_GetUniquePlayerIdentifier(PlayerController) : GetUniquePlayerIdentifier_Default(PlayerController);
}

FString IAutoSettingsPlayer::GetUniquePlayerIdentifier_Default(const APlayerController* PlayerController)
{
	check(PlayerController);
	check(PlayerController->GetLocalPlayer());
	return FString::FromInt(PlayerController->GetLocalPlayer()->GetControllerId());
}

FString IAutoSettingsPlayer::GetUniquePlayerIdentifier_Implementation() const
{
	const APlayerController* ThisPC = Cast<APlayerController>(this);
	return ThisPC ? GetUniquePlayerIdentifier_Default(ThisPC) : FString();
}

FInputMappingPreset IAutoSettingsPlayer::GetDefaultInputMappingPreset(const APlayerController* PlayerController)
{
	check(PlayerController);
	return PlayerController->Implements<UAutoSettingsPlayer>() ? Execute_GetDefaultInputMappingPreset(PlayerController) : GetDefaultInputMappingPreset_Default();
}

FInputMappingPreset IAutoSettingsPlayer::GetDefaultInputMappingPreset_Default()
{
	return UInputMappingManager::GetDefaultInputPresets()[0];
}

FInputMappingPreset IAutoSettingsPlayer::GetDefaultInputMappingPreset_Implementation() const
{
	return GetDefaultInputMappingPreset_Default();
}

bool IAutoSettingsPlayer::GetInputMappings(const APlayerController* PlayerController, FPlayerInputMappings& InputMappings)
{
	check(PlayerController);
	return PlayerController->Implements<UAutoSettingsPlayer>() ? Execute_GetInputMappings(PlayerController, InputMappings) : false;
}

bool IAutoSettingsPlayer::GetInputMappings_Implementation(FPlayerInputMappings& InputMappings) const
{
	return false;
}

void IAutoSettingsPlayer::SaveInputMappings(APlayerController* PlayerController, FPlayerInputMappings InputMappings)
{
	check(PlayerController);
	if (PlayerController->Implements<UAutoSettingsPlayer>())
	{
		UE_LOG(LogAutoSettingsInput, Log, TEXT("%s implements IAutoSettingsPlayer, calling SaveInputMappings"), *PlayerController->GetName());
		Execute_SaveInputMappings(PlayerController, InputMappings);
	}
}

void IAutoSettingsPlayer::SaveInputMappings_Implementation(FPlayerInputMappings InputMappings)
{

}
