// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/GenericControls/RadioSelect/RadioSelect.h"
#include "Misc/SettingOption.h"
#include "Misc/AutoSettingsError.h"

void URadioSelect::SetOptions(TArray<FSettingOption> InOptions)
{
	Options = InOptions;

	RadioButtons.Empty();

	if(!ensure(RadioButtonClass))
	{
		FAutoSettingsError::LogInvalidClass(GetClass(), "RadioButtonClass");
		return;
	}

	if (IsValid(ButtonContainer))
	{
		ButtonContainer->ClearChildren();

		for (const FSettingOption Option : Options)
		{
			URadioButton* NewButton = CreateWidget<URadioButton>(GetWorld(), RadioButtonClass);

			if (!ensure(NewButton))
			{
				FAutoSettingsError::LogWidgetCreationFailed(GetClass(), "RadioButton");
				continue;
			}

			NewButton->SetLabel(Option.Label);
			NewButton->SetValue(Option.Value);

			RadioButtons.Add(NewButton);

			UPanelSlot* NewSlot = ButtonContainer->AddChild(NewButton);

			NewButton->OnSelected.AddDynamic(this, &URadioSelect::ButtonSelected);

			OnButtonCreated(NewButton, NewSlot);
		}

	}

}

void URadioSelect::Select(FString Value)
{
	SelectionChangedEvent.Broadcast(Value);

	for (URadioButton* RadioButton : RadioButtons)
	{
		RadioButton->SetSelected(RadioButton->GetValue() == Value);
	}

}

void URadioSelect::NativePreConstruct()
{
	Super::NativePreConstruct();

	SetOptions(Options);
}

void URadioSelect::OnButtonCreated_Implementation(URadioButton* Button, UPanelSlot* NewSlot)
{
}

void URadioSelect::ButtonSelected(FString Value)
{
	Select(Value);
}

