// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "InputLabel.h"
#include "Components/PanelWidget.h"
#include "ActionLabel.generated.h"

/**
 * Label for an input action
 * Shows the key the action is bound to, and also any modifier keys
 * Keys will use icons if available, or fall back to text label
 */
UCLASS(abstract)
class AUTOSETTINGS_API UActionLabel : public UInputLabel
{
	GENERATED_BODY()
	
public:

	// Name of the action to display
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Action Label")
	FName ActionName;

	// KeyLabel class to create for each key
	UPROPERTY(EditAnywhere, NoClear, Category = "Action Label")
	TSubclassOf<UKeyLabel> KeyLabelWidgetClass;

	// Separator widget to place in between keys
	UPROPERTY(EditAnywhere, Category = "Action Label")
	TSubclassOf<UWidget> KeySeparatorWidgetClass;

	// Initialize this label
	void InitializeLabel();

	virtual void UpdateLabel_Implementation() override;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "Action Label", meta = (BindWidget))
	UPanelWidget* KeyContainer;

	UPanelWidget* GetKeyContainer() const { return KeyContainer; }

	UKeyLabel* CreateLabel();

	UKeyLabel* CreateLabel(const FText& LabelOverride);

	virtual void NativePreConstruct() override;

	void UpdateKeyLabels(struct FInputActionKeyMapping Mapping);

private:

	UPROPERTY()
	UKeyLabel* PrimaryKeyLabel;
	UPROPERTY()
	UKeyLabel* ShiftLabel;
	UPROPERTY()
	UKeyLabel* CtrlLabel;
	UPROPERTY()
	UKeyLabel* AltLabel;
	UPROPERTY()
	UKeyLabel* CmdLabel;

	UPROPERTY()
	UWidget* ShiftSeparator;
	UPROPERTY()
	UWidget* CtrlSeparator;
	UPROPERTY()
	UWidget* AltSeparator;
	UPROPERTY()
	UWidget* CmdSeparator;

	void SetModifierKeyLabelVisibility(UKeyLabel* KeyLabel, UWidget* KeySeparator, bool Visibility);

	UWidget* AddSeparatorIfValid();
};
