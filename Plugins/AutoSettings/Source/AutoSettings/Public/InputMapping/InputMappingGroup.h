#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "InputMappingGroup.generated.h"

struct FGameplayTag;

// Sadly the mapping names aren't editable in config unless using these child classes
// Config editable action mapping
USTRUCT(BlueprintType)
struct AUTOSETTINGS_API FConfigActionKeyMapping : public FInputActionKeyMapping
{
	GENERATED_BODY()

    FConfigActionKeyMapping() {}

	FConfigActionKeyMapping(FInputActionKeyMapping Base)
	{
		ActionName = Base.ActionName;
		Key = Base.Key;
		bShift = Base.bShift;
		bCtrl = Base.bCtrl;
		bAlt = Base.bAlt;
		bCmd = Base.bCmd;
	}

	FString ToDebugString() const
	{
		return FString::Printf(TEXT("ActionName: %s, Key: %s, bShift: %i, bCtrl: %i, bAlt: %i, bCmd: %i"),
            *ActionName.ToString(),
            *Key.ToString(),
            (int32)bShift,
            (int32)bCtrl,
            (int32)bAlt,
            (int32)bCmd);
	}
};

// Config editable axis mapping
USTRUCT(BlueprintType)
struct AUTOSETTINGS_API FConfigAxisKeyMapping : public FInputAxisKeyMapping
{
	GENERATED_BODY()

    FConfigAxisKeyMapping() {}

	FConfigAxisKeyMapping(FInputAxisKeyMapping Base)
	{
		AxisName = Base.AxisName;
		Key = Base.Key;
		Scale = Base.Scale;
	}

	FString ToDebugString() const
	{
		return FString::Printf(TEXT("AxisName: %s, Key: %s, Scale: %f"),
            *AxisName.ToString(),
            *Key.ToString(),
            Scale);
	}
};

// An input mapping group represents a set of mappings for which each action or axis has a single binding
// Each action should have a unique name and each axis should have a unique name + scale combination, however axis keys count as all scales
// It's valid to have axis mappings for (Name: MoveForward, Scale: 1, Key: W) and (Name: MoveForward, Scale: -1, Key: S) at the same time
// It's not valid to have (Name: MoveForward, Scale: 1, Key: GamepadLeftStickY) and (Name: MoveForward, Scale: -1, Key: S)
USTRUCT()
struct AUTOSETTINGS_API FInputMappingGroup
{
	GENERATED_BODY()

	// Action mappings in this group
	UPROPERTY(config, EditAnywhere, Category = "Input Mapping Group", meta = (TitleProperty = "ActionName"))
	TArray<FConfigActionKeyMapping> ActionMappings;

	// Axis mappings in this group
	UPROPERTY(config, EditAnywhere, Category = "Input Mapping Group", meta = (TitleProperty = "AxisName"))
	TArray<FConfigAxisKeyMapping> AxisMappings;

	UPROPERTY(config)
	TArray<FConfigActionKeyMapping> UnboundActionMappings;

	UPROPERTY(config)
	TArray<FConfigAxisKeyMapping> UnboundAxisMappings;
	
	// Return all action mappings that match the given parameters
	TArray<FInputActionKeyMapping> GetAllActions(FName ActionName, FGameplayTag KeyGroup) const;

	// Return all axis mappings that match the given parameters
	TArray<FInputAxisKeyMapping> GetAllAxes(FName AxisName, float Scale, FGameplayTag KeyGroup, bool bAnyScale = false) const;

	// Returns the first action that matches the given parameters
	FInputActionKeyMapping GetAction(FName ActionName, FGameplayTag KeyGroup) const;

	// Returns the first axis that matches the given parameters
	FInputAxisKeyMapping GetAxis(FName AxisName, float Scale, FGameplayTag KeyGroup) const;

	// Add the given action and remove any existing actions that it should replace
	// Returns any actions that were unbound from different keys, if any
	FInputMappingGroup ReplaceAction(FInputActionKeyMapping Action, bool bAnyKeyGroup = false);

	// Add the given axis and remove any exist axes that it should replace
	// Returns any axes that were unbound from different keys, if any
	FInputMappingGroup ReplaceAxis(FInputAxisKeyMapping Axis, bool bAnyKeyGroup = false);

	// Unbind any actions or axes that are bound to the given chord
	// Returns a mapping group containing any mappings that were unbound
	FInputMappingGroup UnbindChord(FKey Key, bool ShiftDown = false, bool CtrlDown = false, bool AltDown = false, bool CmdDown = false);

	void RemoveAction(FName ActionName, FGameplayTag KeyGroup, bool bRemoveFromUnbound = false);

	void RemoveAxis(FName AxisName, float Scale, FGameplayTag KeyGroup, bool bRemoveFromUnbound = false, bool bIgnoreAxisKeys = false, bool bAnyScale = false);

	void RemoveMappings(FInputMappingGroup& MappingsToRemove);

	FInputMappingGroup FindUnboundMappings(const FInputMappingGroup& SourceMappingGroup) const;

	// Convert all mappings into unbound mappings
	FInputMappingGroup ToUnboundMappings() const;

	void RemoveUnboundMappings();

	// Remove mappings and unbound mappings that are shared by the other mapping group
	void RemoveMappingsSharedWith(const FInputMappingGroup& OtherMappingGroup);

	bool operator==(const FInputMappingGroup& Other) const
	{
		return (ActionMappings == Other.ActionMappings
			&& AxisMappings == Other.AxisMappings);
	}

	FInputMappingGroup operator+=(const FInputMappingGroup& Other);

};