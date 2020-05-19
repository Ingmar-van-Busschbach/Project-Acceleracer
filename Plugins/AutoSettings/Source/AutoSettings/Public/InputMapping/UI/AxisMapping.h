// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "InputMapping/UI/InputMapping.h"
#include "AxisLabel.h"
#include "AxisMapping.generated.h"

/**
 * Shows a label for an input axis on a particular scale and allows the user to rebind it
 */
UCLASS(abstract)
class AUTOSETTINGS_API UAxisMapping : public UInputMapping
{
	GENERATED_BODY()
	
public:

	// Name of the axis mapping to display and rebind
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Axis Mapping")
	FName AxisName;

	// Scale of the axis mapping to display and rebind
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Axis Mapping")
	float Scale;
	
protected:

	UPROPERTY(BlueprintReadOnly, Category = "Axis Mapping", meta = (BindWidget))
	UAxisLabel* AxisLabel;

	virtual void NativeConstruct() override;

	virtual void UpdateLabel_Implementation() override;

	UAxisLabel* GetAxisLabel() const { return AxisLabel; }

private:

	virtual void BindChord(FInputChord InChord) override;
	
	
};
