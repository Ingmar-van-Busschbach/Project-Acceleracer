// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/GenericControls/Spinner.h"

void USpinner::SelectValue(FString Value)
{
	const int32 Index = Options.IndexOfByPredicate([Value](FSettingOption Option) { return Option.Value == Value; });
	if (Index >= 0)
	{
		SelectIndex(Index);
	}
}

void USpinner::SelectIndex(int32 Index)
{
	CurrentIndex = Index;
	FSettingOption& SelectedOption = Options[CurrentIndex];
	OnSelectionChanged(SelectedOption);
	SelectionChangedEvent.Broadcast(SelectedOption.Value);
}

void USpinner::Next()
{
	if (HasValidNext())
	{
		if (CurrentIndex < Options.Num() - 1)
			SelectIndex(CurrentIndex+1);
		else
			SelectIndex(0);
	}
}

void USpinner::Previous()
{
	if (HasValidPrevious())
	{
		if (CurrentIndex > 0)
			SelectIndex(CurrentIndex - 1);
		else
			SelectIndex(Options.Num() - 1);
	}
}

bool USpinner::HasValidNext() const
{
	return bAllowWrapping || CurrentIndex < Options.Num() - 1;
}

bool USpinner::HasValidPrevious() const
{
	return bAllowWrapping || CurrentIndex > 0;
}

FSettingOption USpinner::GetCurrentOption() const
{
	if (Options.IsValidIndex(CurrentIndex))
		return Options[CurrentIndex];
	else
		return FSettingOption();
}

void USpinner::OnSelectionChanged_Implementation(FSettingOption SelectedOption)
{
}
