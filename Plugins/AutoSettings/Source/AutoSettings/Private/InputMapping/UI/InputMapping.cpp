// Copyright Sam Bonifacio. All Rights Reserved.

#include "InputMapping/UI/InputMapping.h"

UInputMapping::UInputMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer), MappingGroup(-1)
{
	
}

void UInputMapping::UpdateMapping_Implementation()
{
	if (UBindCaptureButton* CaptureButton = GetBindCaptureButton())
	{
		CaptureButton->KeyGroup = KeyGroup;
	}
	UpdateLabel();
}

void UInputMapping::NativePreConstruct()
{
	Super::NativePreConstruct();

	UpdateMapping();
}

void UInputMapping::NativeConstruct()
{
	Super::NativeConstruct();

	if (GetBindCaptureButton())
	{
		GetBindCaptureButton()->OnChordCaptured.AddUniqueDynamic(this, &UInputMapping::ChordCaptured);
	}

	UpdateMapping();
}

void UInputMapping::UpdateLabel_Implementation()
{

}

void UInputMapping::ChordCaptured(FInputChord InChord)
{
	BindChord(InChord);
}
