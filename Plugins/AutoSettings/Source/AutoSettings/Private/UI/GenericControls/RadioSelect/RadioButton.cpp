// Copyright Sam Bonifacio. All Rights Reserved.

#include "UI/GenericControls/RadioSelect/RadioButton.h"

void URadioButton::SetSelected(bool InSelected)
{
	Selected = InSelected;
	UpdateSelected(Selected);
}

void URadioButton::TriggerSelection()
{
	OnSelected.Broadcast(Value);
}

void URadioButton::NativeConstruct()
{
	UpdateLabel(Label);
	UpdateSelected(Selected);
}