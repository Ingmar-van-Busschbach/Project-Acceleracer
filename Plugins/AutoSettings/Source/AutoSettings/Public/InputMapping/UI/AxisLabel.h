// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "InputLabel.h"
#include "AxisLabel.generated.h"

/**
 * Label for an input axis on a particular scale
 * Shows the icon for the key it is bound to if available, or falls back to text label
 */
UCLASS(abstract)
class AUTOSETTINGS_API UAxisLabel : public UInputLabel
{
	GENERATED_BODY()
	
public:
	// Name of the axis to display
	UPROPERTY(EditAnywhere, Category = "Axis Label")
	FName AxisName;

	// Scale of the key to display
	UPROPERTY(EditAnywhere, Category = "Axis Label")
	float Scale;

	// Initialize this label
	void InitializeLabel();

	virtual void UpdateLabel_Implementation() override;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Axis Label", meta = (BindWidget))
	UKeyLabel* KeyLabel;

	UKeyLabel* GetKeyLabel() const { return KeyLabel;}

	virtual void NativePreConstruct() override;

};
