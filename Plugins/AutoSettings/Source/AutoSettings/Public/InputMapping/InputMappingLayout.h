#pragma once

#include "InputMappingGroup.h"
#include "InputMappingLayout.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct AUTOSETTINGS_API FInputMappingLayout
{
    GENERATED_BODY()
    
    UPROPERTY(config, EditAnywhere, Category = "Input Mapping Preset", meta = (EditCondition = "!bUseDefaultMappings"))
    TArray<FInputMappingGroup> MappingGroups;

    FInputMappingLayout() {}
	
    FInputMappingLayout(TArray<FInputMappingGroup> InMappingGroups)
	    : MappingGroups(InMappingGroups)
	{}

    // Returns mapping groups that which should remove bindings that conflict with ones in the given group
    TArray<int32> GetMappingGroupsToUnbind(int32 SourceMappingGroup) const;

    // Set the mappings for this preset, which constructs Mapping Groups to store them in
    void SetMappings(TArray<FInputActionKeyMapping> ActionMappings, TArray<FInputAxisKeyMapping> AxisMappings);

    // Add the given action and remove any existing actions that it should replace
    // Returns a layout containing any mappings that were unbound
    FInputMappingLayout ReplaceAction(const FInputActionKeyMapping& Action, int32 MappingGroupId, bool bAnyKeyGroup = false);

    // Add the given axis and remove any existing axes that it should replace
    // Returns a layout containing any mappings that were unbound
    FInputMappingLayout ReplaceAxis(const FInputAxisKeyMapping& Axis, int32 MappingGroupId, bool bAnyKeyGroup = false);

    // Unbind any actions or axes that are bound to the given chord
    // Returns a layout containing any mappings that were unbound
    FInputMappingLayout UnbindChord(FKey Key, TArray<int32> MappingGroupIds, bool ShiftDown = false, bool CtrlDown = false, bool AltDown = false, bool CmdDown = false);

    void RemoveAction(FName ActionName, int32 MappingGroupId, FGameplayTag KeyGroup, bool bRemoveFromUnbound = false);

    void RemoveAxis(FName AxisName, float Scale, int32 MappingGroupId, FGameplayTag KeyGroup, bool bRemoveFromUnbound = false, bool bIgnoreAxisKeys = false);

    TArray<FInputMappingGroup>& GetMappingGroups() { return MappingGroups; }

    FInputMappingGroup& GetMappingGroup(int32 MappingGroupIndex);

    const FInputMappingGroup& GetMappingGroupConst(int32 MappingGroupIndex) const;
    
    // Return all action mappings in this preset
    TArray<FInputActionKeyMapping> GetActions(bool bIncludeNullMappings = true) const
    {
        TArray<FInputActionKeyMapping> Actions;
        for (FInputMappingGroup Group : MappingGroups)
        {
            for (FInputActionKeyMapping& Action : Group.ActionMappings)
            {
            	if(bIncludeNullMappings || Action.Key.IsValid())
            	{
                    Actions.AddUnique(Action);
            	}
            }
        }
        return Actions;
    }

    // Return all axis mappings in this preset
    TArray<FInputAxisKeyMapping> GetAxes(bool bIncludeNullMappings = true) const
    {
        TArray<FInputAxisKeyMapping> Axes;
        for (FInputMappingGroup Group : MappingGroups)
        {
            for (FInputAxisKeyMapping& Axis : Group.AxisMappings)
            {
            	if(bIncludeNullMappings || Axis.Key.IsValid())
            	{
                    Axes.AddUnique(Axis);
            	}
            }
        }
        return Axes;
    }

	// Compares this layout to the given source layout and returns mappings from the source that are not bound in this one
    FInputMappingLayout FindUnboundMappings(const FInputMappingLayout& SourceLayout) const;

	// Merges mappings from the given source layout into this one, overwriting existing mappings where they conflict
    FInputMappingLayout MergeMappings(const FInputMappingLayout& OverridesLayout);

    // Merges unbound mappings
    FInputMappingLayout MergeUnboundMappings(const FInputMappingLayout& OverridesLayout);

	// Apply unbound mappings by removing them from existing mappings
    void ApplyUnboundMappings();

	// Convert all mappings into unbound mappings
    FInputMappingLayout ToUnboundMappings() const;

    void RemoveUnboundMappings();

    // Remove mappings and unbound mappings that are shared by the other mapping layout
    void RemoveMappingsSharedWith(const FInputMappingLayout& OtherLayout);

    // Apply this layout to the given player controller
    void Apply(APlayerController* Player);

    int32 GetTotalNumInputDefinitions() const { return GetActions().Num() + GetAxes().Num(); }

    bool operator==(const FInputMappingLayout& Other) const
    {
        return MappingGroups == Other.MappingGroups;
    }
};