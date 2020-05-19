// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "InputMapping/UI/InputMapping.h"
#include "ActionLabel.h"
#include "ActionMapping.generated.h"

/**
 * Shows a label for an input action and allows the user to rebind it
 */
UCLASS(abstract)
class AUTOSETTINGS_API UActionMapping : public UInputMapping
{
	GENERATED_BODY()
	
public:

	// Name of the action mapping to display and rebind
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Mapping")
	FName ActionName;
	
protected:

	UPROPERTY(BlueprintReadOnly, Category = "Action Mapping", meta = (BindWidget))
	UActionLabel* ActionLabel;

	virtual void NativeConstruct() override;

	virtual void UpdateLabel_Implementation() override;

	UActionLabel* GetActionLabel() const { return ActionLabel; }

private:
	virtual void BindChord(FInputChord InChord) override;
	
};
