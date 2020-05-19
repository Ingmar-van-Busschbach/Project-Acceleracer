// Copyright Sam Bonifacio. All Rights Reserved.

#include "InputMapping/InputMappingManager.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "Engine/Engine.h"
#include "Misc/AutoSettingsLogs.h"
#include "Misc/AutoSettingsPlayer.h"

static FAutoConsoleCommand DumpPlayersCommand(
	TEXT("AutoSettings.Input.DumpPlayers"),
	TEXT("Dumps registered player controllers to log with their input mappings"),
	FConsoleCommandDelegate::CreateStatic(UInputMappingManager::DumpPlayers),
	ECVF_Default);

static TAutoConsoleVariable<int32> CVarDebugMode(
	TEXT("AutoSettings.Input.Debug"),
	0,
	TEXT("Dump all input mappings whenever they are modified"),
	ECVF_RenderThreadSafe);

UInputMappingManager* UInputMappingManager::Singleton = nullptr;

UInputMappingManager::UInputMappingManager()
{
}

UInputMappingManager* UInputMappingManager::Get()
{
	if (!Singleton)
	{
		Singleton = NewObject<UInputMappingManager>();
		Singleton->AddToRoot();
	}

	return Singleton;
}

TArray<FInputMappingPreset> UInputMappingManager::GetDefaultInputPresets()
{
	return GetDefault<UAutoSettingsConfig>()->GetInputPresets();
}

FPlayerInputMappings UInputMappingManager::GetPlayerInputMappingsStatic(APlayerController * Player)
{
	return Get()->FindPlayerInputMappings(Player);
}

void UInputMappingManager::SetPlayerInputPresetStatic(APlayerController * Player, FInputMappingPreset Preset)
{
	Get()->SetPlayerInputPreset(Player, Preset);
}

void UInputMappingManager::SetPlayerInputPresetByTag(APlayerController* Player, FGameplayTag PresetTag)
{
	Get()->SetPlayerInputPreset(Player, PresetTag);
}

void UInputMappingManager::SetPlayerKeyGroupStatic(APlayerController * Player, FGameplayTag KeyGroup)
{
	Get()->SetPlayerKeyGroup(Player, KeyGroup);
}

void UInputMappingManager::AddPlayerActionOverrideStatic(APlayerController * Player, const FInputActionKeyMapping & NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	Get()->AddPlayerActionOverride(Player, NewMapping, MappingGroup, bAnyKeyGroup);
}

void UInputMappingManager::AddPlayerAxisOverrideStatic(APlayerController * Player, const FInputAxisKeyMapping & NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	Get()->AddPlayerAxisOverride(Player, NewMapping, MappingGroup, bAnyKeyGroup);
}

bool UInputMappingManager::InitializePlayerInputOverridesStatic(APlayerController * Player)
{
	if (!ensure(Player))
	{
		return false;
	}

	if (!ensure(Player->PlayerInput))
	{
		return false;
	}

	Get()->RegisterPlayerController(Player);

	return true;
}

FInputActionKeyMapping UInputMappingManager::GetPlayerActionMappingStatic(APlayerController* Player, FName ActionName,
	int32 MappingGroup)
{
	return Get()->GetPlayerActionMapping(Player, ActionName, MappingGroup, FGameplayTag(), true);
}

FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMappingStatic(APlayerController* Player, FName AxisName,
	float Scale, int32 MappingGroup)
{
	return Get()->GetPlayerAxisMapping(Player, AxisName, Scale, MappingGroup, FGameplayTag(), true);
}

void DumpLayout(FInputMappingLayout& Layout)
{
	UE_LOG(LogAutoSettingsInput, Display, TEXT("        Mapping Groups:"));
	if (Layout.GetMappingGroups().Num() == 0)
	{
		UE_LOG(LogAutoSettingsInput, Display, TEXT("            NONE"));
	}
	for (int MappingGroupIndex = 0; MappingGroupIndex < Layout.GetMappingGroups().Num(); MappingGroupIndex++)
	{
		FInputMappingGroup& MappingGroup = Layout.GetMappingGroups()[MappingGroupIndex];
		UE_LOG(LogAutoSettingsInput, Display, TEXT("            %i:"), MappingGroupIndex);
		
		UE_LOG(LogAutoSettingsInput, Display, TEXT("                Actions:"));
		if (MappingGroup.ActionMappings.Num() == 0)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    NONE"));
		}
		for (int ActionIndex = 0; ActionIndex < MappingGroup.ActionMappings.Num(); ActionIndex++)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    %i: %s"), ActionIndex, *MappingGroup.ActionMappings[ActionIndex].ToDebugString());
		}
		
		UE_LOG(LogAutoSettingsInput, Display, TEXT("                Axes:"));
		if (MappingGroup.AxisMappings.Num() == 0)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    NONE"));
		}
		for (int AxisIndex = 0; AxisIndex < MappingGroup.AxisMappings.Num(); AxisIndex++)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    %i: %s"), AxisIndex, *MappingGroup.AxisMappings[AxisIndex].ToDebugString());
		}
		
		UE_LOG(LogAutoSettingsInput, Display, TEXT("                Unbound Actions:"));
		if (MappingGroup.UnboundActionMappings.Num() == 0)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    NONE"));
		}
		for (int ActionIndex = 0; ActionIndex < MappingGroup.UnboundActionMappings.Num(); ActionIndex++)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    %i: %s"), ActionIndex, *MappingGroup.UnboundActionMappings[ActionIndex].ToDebugString());
		}
		
		UE_LOG(LogAutoSettingsInput, Display, TEXT("                Unbound Axes:"));
		if (MappingGroup.UnboundAxisMappings.Num() == 0)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    NONE"));
		}
		for (int AxisIndex = 0; AxisIndex < MappingGroup.UnboundAxisMappings.Num(); AxisIndex++)
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("                    %i: %s"), AxisIndex, *MappingGroup.UnboundAxisMappings[AxisIndex].ToDebugString());
		}
	}
}

void UInputMappingManager::DumpPlayers()
{
	UE_LOG(LogAutoSettingsInput, Display, TEXT("----- DumpPlayers -----"));
	UInputMappingManager* Instance = Get();
	for (int i = 0; i < Instance->RegisteredPlayerControllers.Num(); i++)
	{
		APlayerController* PC = Instance->RegisteredPlayerControllers[i];

		UE_LOG(LogAutoSettingsInput, Display, TEXT("PlayerController %i: "), i);
		if (IsValid(PC))
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Object name: %s"), *PC->GetName());
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Human readable name: %s"), *PC->GetHumanReadableName());
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Implements IAutoSettingsPlayer: %i"), (int32)PC->Implements<UAutoSettingsPlayer>());
			FPlayerInputMappings InputMappings = Instance->FindPlayerInputMappings(PC);
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Player ID (if applicable): %s"), InputMappings.PlayerId.IsEmpty() ? TEXT("EMPTY") : *InputMappings.PlayerId);
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Key Group: %s"), *InputMappings.PlayerKeyGroup.ToString());
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Base Preset Tag: %s"), *InputMappings.BasePresetTag.ToString());
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Custom Mappings: %i"), (int32)InputMappings.MappingOverrides.GetTotalNumInputDefinitions());
			DumpLayout(InputMappings.MappingOverrides);
			FInputMappingLayout MergedLayout = InputMappings.BuildMergedMappingLayout();
			UE_LOG(LogAutoSettingsInput, Display, TEXT("    Merged Mappings: %i"), (int32)MergedLayout.GetTotalNumInputDefinitions());
			DumpLayout(MergedLayout);
		}
		else
		{
			UE_LOG(LogAutoSettingsInput, Display, TEXT("INVALID"));
		}
	}
	UE_LOG(LogAutoSettingsInput, Display, TEXT("----- End DumpPlayers -----"));
}

void UInputMappingManager::SetPlayerKeyGroup(APlayerController* Player, FGameplayTag KeyGroup)
{
	if(!ensure(IsValid(Player) && IsValid(Player->GetLocalPlayer())))
	{
		return;
	}
	
	FPlayerInputMappings InputMappings = FindPlayerInputMappings(Player);

	if(InputMappings.PlayerKeyGroup == KeyGroup)
	{
		// No-op, bail to avoid save
		return;
	}
	
	InputMappings.PlayerKeyGroup = KeyGroup;

	SavePlayerInputMappings(Player, InputMappings);

	// Even though the actual mappings haven't changed it all, broadcast so that widgets that do care about the new value can update
	Get()->OnMappingsChanged.Broadcast(Player);
}

void UInputMappingManager::AddPlayerActionOverride(APlayerController * Player, const FInputActionKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	UE_LOG(LogAutoSettingsInput, Log, TEXT("InputMappingManager: Adding action override: %s"), *NewMapping.ActionName.ToString());

	FPlayerInputMappings PlayerInputMappings = FindPlayerInputMappings(Player);

	// Resolve current final merged layout and calculate mappings that would be unbound from it
	FInputMappingLayout MergedLayout = PlayerInputMappings.BuildMergedMappingLayout();
	const FInputMappingLayout UnboundMappings = MergedLayout.ReplaceAction(NewMapping, MappingGroup, bAnyKeyGroup);

	// Store new mapping and any resulting unbound mappings in the mapping overrides
	PlayerInputMappings.MappingOverrides.MergeUnboundMappings(UnboundMappings);
	PlayerInputMappings.MappingOverrides.ReplaceAction(NewMapping, MappingGroup, bAnyKeyGroup);

	PlayerInputMappings.MappingOverrides.RemoveMappingsSharedWith(PlayerInputMappings.GetBasePresetMappings());

	// Resolve and apply new final merged layout
	PlayerInputMappings.Apply(Player);

	SavePlayerInputMappings(Player, PlayerInputMappings);

	OnMappingsChanged.Broadcast(Player);

	if (CVarDebugMode->GetBool())
	{
		DumpPlayers();
	}
}

void UInputMappingManager::AddPlayerAxisOverride(APlayerController* Player, const FInputAxisKeyMapping& NewMapping, int32 MappingGroup, bool bAnyKeyGroup)
{
	UE_LOG(LogAutoSettingsInput, Log, TEXT("InputMappingManager: Adding axis override: %s, Scale: %f"), *NewMapping.AxisName.ToString(), NewMapping.Scale);

	FPlayerInputMappings PlayerInputMappings = FindPlayerInputMappings(Player);

	// Resolve current final merged layout and calculate mappings that would be unbound from it
	FInputMappingLayout MergedLayout = PlayerInputMappings.BuildMergedMappingLayout();
	const FInputMappingLayout UnboundMappings = MergedLayout.ReplaceAxis(NewMapping, MappingGroup, bAnyKeyGroup);

	// Store new mapping and any resulting unbound mappings in the mapping overrides
	PlayerInputMappings.MappingOverrides.MergeUnboundMappings(UnboundMappings);
	PlayerInputMappings.MappingOverrides.ReplaceAxis(NewMapping, MappingGroup, bAnyKeyGroup);

	PlayerInputMappings.MappingOverrides.RemoveMappingsSharedWith(PlayerInputMappings.GetBasePresetMappings());
	
	// Resolve and apply new final merged layout
	PlayerInputMappings.Apply(Player);

	SavePlayerInputMappings(Player, PlayerInputMappings);

	OnMappingsChanged.Broadcast(Player);

	if(CVarDebugMode->GetBool())
	{
		DumpPlayers();
	}
}

FInputActionKeyMapping UInputMappingManager::GetPlayerActionMapping(APlayerController* Player, FName ActionName, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const
{
	FPlayerInputMappings InputOverride;
	if (Player)
	{
		InputOverride = FindPlayerInputMappings(Player);
	}

	if (bUsePlayerKeyGroup)
		KeyGroup = InputOverride.PlayerKeyGroup;

	FInputMappingLayout MergedMappingLayout = InputOverride.BuildMergedMappingLayout();

	// Use the first mapping group with the specified key group
	if (MappingGroup == -1)
	{
		for (FInputMappingGroup& MappingGroupObj : MergedMappingLayout.GetMappingGroups())
		{
			FInputActionKeyMapping Mapping = MappingGroupObj.GetAction(ActionName, KeyGroup);
			if (Mapping.Key.IsValid())
				return Mapping;
		}
		return FInputActionKeyMapping();
	}

	if (MergedMappingLayout.GetMappingGroups().IsValidIndex(MappingGroup))
		return MergedMappingLayout.GetMappingGroups()[MappingGroup].GetAction(ActionName, KeyGroup);
	else
		return FInputActionKeyMapping();
}

FInputAxisKeyMapping UInputMappingManager::GetPlayerAxisMapping(APlayerController * Player, FName AxisName, float Scale, int32 MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup) const
{
	FPlayerInputMappings InputOverride;
	if (Player)
	{
		InputOverride = FindPlayerInputMappings(Player);
	} 

	if (bUsePlayerKeyGroup)
		KeyGroup = InputOverride.PlayerKeyGroup;

	FInputMappingLayout MergedMappingLayout = InputOverride.BuildMergedMappingLayout();

	// Use the first mapping group with the specified key group
	if (MappingGroup == -1)
	{
		for (FInputMappingGroup& MappingGroupObj : MergedMappingLayout.GetMappingGroups())
		{
			FInputAxisKeyMapping Mapping = MappingGroupObj.GetAxis(AxisName, Scale, KeyGroup);
			if (Mapping.Key.IsValid())
				return Mapping;
		}
		return FInputAxisKeyMapping();
	}

	if (MergedMappingLayout.GetMappingGroups().IsValidIndex(MappingGroup))
		return MergedMappingLayout.GetMappingGroups()[MappingGroup].GetAxis(AxisName, Scale, KeyGroup);
	else
		return FInputAxisKeyMapping();
}

void UInputMappingManager::SetPlayerInputPreset(APlayerController * Player, FInputMappingPreset Preset)
{
	const FString PresetTag = Preset.PresetTag.IsValid() ? Preset.PresetTag.ToString() : "Invalid";
	UE_LOG(LogAutoSettingsInput, Log, TEXT("Setting input preset for '%s', tag: %s"), *Player->GetHumanReadableName(), *PresetTag);
	
	if (!RegisteredPlayerControllers.Contains(Player))
		RegisterPlayerController(Player);

	FPlayerInputMappings InputOverride = FindPlayerInputMappings(Player);
	InputOverride.BasePresetTag = Preset.PresetTag;
	InputOverride.MappingOverrides = FInputMappingLayout();
	InputOverride.Apply(Player);

	SavePlayerInputMappings(Player, InputOverride);

	OnMappingsChanged.Broadcast(Player);
}

void UInputMappingManager::SetPlayerInputPreset(APlayerController* Player, FGameplayTag PresetTag)
{
	TArray<FInputMappingPreset> Presets = GetDefaultInputPresets();

	FInputMappingPreset* FoundPreset = Presets.FindByPredicate([PresetTag](FInputMappingPreset Preset) { return Preset.PresetTag == PresetTag; });
	if (FoundPreset)
	{
		SetPlayerInputPreset(Player, *FoundPreset);
	}
}

void UInputMappingManager::Tick(float DeltaTime)
{
	if (GetDefault<UAutoSettingsConfig>()->bAutoInitializePlayerInputOverrides)
	{
		// Polling this is a bit dirty, but can't find any engine events that fire when players are added so it'll have to do

		UWorld* World = GetGameWorld();

		if (World)
		{
			UGameInstance* GameInstance = World->GetGameInstance();
			if (GameInstance)
			{
				TArray<ULocalPlayer*> Players = GameInstance->GetLocalPlayers();
				for (ULocalPlayer* Player : Players)
				{
					if (APlayerController* PlayerController = Player->GetPlayerController(World))
					{
						if (PlayerController->PlayerInput && !RegisteredPlayerControllers.Contains(PlayerController))
						{
							RegisterPlayerController(PlayerController);
						}
					}
				}
			}
		}
	}

}

void UInputMappingManager::PostInitProperties()
{
	Super::PostInitProperties();

	// Migrate deprecated properties

	for(FPlayerInputMappings& PlayerInput : PlayerInputOverrides)
	{
		PlayerInput.MigrateDeprecatedProperties();
	}
}

UWorld* UInputMappingManager::GetGameWorld() const
{
	UWorld* TestWorld = nullptr;
	const TIndirectArray<FWorldContext>& WorldContexts = GEngine->GetWorldContexts();
	for (const FWorldContext& Context : WorldContexts)
	{
		if (((Context.WorldType == EWorldType::PIE) || (Context.WorldType == EWorldType::Game)) && (Context.World() != nullptr))
		{
			TestWorld = Context.World();
			break;
		}
	}

	return TestWorld;
}

void UInputMappingManager::RegisterPlayerController(APlayerController* Player)
{
	if (!ensure(IsValid(Player) && IsValid(Player->PlayerInput)))
	{
		return;
	}

	UE_LOG(LogAutoSettingsInput, Log, TEXT("Registering input overrides for %s"), *Player->GetHumanReadableName());

	// Add input overrides to a fresh player controller
	// Note: Players can be "re-registered" without first being unregistered
	// Logic here should refresh anything applicable but avoid duplication
	// Might be worth creating an "unregister" for this case

	// First find existing mappings (from config, or old PlayerControllers for the same player) or default
	FPlayerInputMappings InputOverride = FindPlayerInputMappings(Player);

	// Migrate deprecated properties - this needs to happen both when loading from config or from custom saves
	InputOverride.MigrateDeprecatedProperties();

	SavePlayerInputMappings(Player, InputOverride);

	// Replace player mappings
	InputOverride.Apply(Player);
	RegisteredPlayerControllers.AddUnique(Player);

	Player->OnDestroyed.AddUniqueDynamic(this, &ThisClass::OnRegisteredPlayerControllerDestroyed);

	// Broadcast events
	OnMappingsChanged.Broadcast(Player);
}

FPlayerInputMappings UInputMappingManager::FindPlayerInputMappings(APlayerController* Player) const
{
	if (!ensure(Player))
	{
		return FPlayerInputMappings();
	}

	FPlayerInputMappings FoundMappings;
	const bool bSuccess = IAutoSettingsPlayer::GetInputMappings(Player, FoundMappings);

	if (bSuccess)
	{
		UE_LOG(LogAutoSettingsInput, Verbose, TEXT("Found input mappings for %s with via IAutoSettingsPlayer::GetInputMappings"), *Player->GetHumanReadableName());
		return FoundMappings;
	}

	// Player ID string to compare
	const FString PlayerIdString = IAutoSettingsPlayer::GetUniquePlayerIdentifier(Player);

	UE_LOG(LogAutoSettingsInput, Verbose, TEXT("Checking internal mappings for %s with ID %s"), *Player->GetHumanReadableName(), *PlayerIdString);

	for (FPlayerInputMappings PlayerInputMapping : PlayerInputOverrides)
	{
		// Compare ID strings
		if (PlayerIdString == PlayerInputMapping.PlayerId)
		{
			UE_LOG(LogAutoSettingsInput, Verbose, TEXT("Found existing input mappings"));
			return PlayerInputMapping;
		}
	}

	// Add default
	return FPlayerInputMappings(PlayerIdString, false, IAutoSettingsPlayer::GetDefaultInputMappingPreset(Player));
}

void UInputMappingManager::SavePlayerInputMappings(APlayerController* Player, FPlayerInputMappings& NewMappings)
{
	UE_LOG(LogAutoSettingsInput, Log, TEXT("Saving input overrides for %s"), *Player->GetHumanReadableName());
	
	// Remove existing mappings from config with that ID
	PlayerInputOverrides.RemoveAll([NewMappings](const FPlayerInputMappings& ExistingMappings)
	{
		return ExistingMappings.PlayerId == NewMappings.PlayerId;
	});

	// Add to config
	PlayerInputOverrides.Add(NewMappings);
	SaveConfig();

	if(!ensure(IsValid(Player)))
	{
		return;
	}

	// Custom save
	IAutoSettingsPlayer::SaveInputMappings(Player, NewMappings);
}

void UInputMappingManager::OnRegisteredPlayerControllerDestroyed(AActor* DestroyedActor)
{
	APlayerController* PlayerController = Cast<APlayerController>(DestroyedActor);

	if (!ensure(PlayerController))
	{
		return;
	}

	UE_LOG(LogAutoSettingsInput, Verbose, TEXT("Registered Player Controller %s for player %s destroyed"), *PlayerController->GetName(), *PlayerController->GetHumanReadableName());

	// Unregister
	RegisteredPlayerControllers.Remove(PlayerController);
	PlayerController->OnDestroyed.RemoveDynamic(this, &ThisClass::OnRegisteredPlayerControllerDestroyed);
}
