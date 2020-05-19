// Copyright Sam Bonifacio. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Misc/AutoSettingsConfig.h"
#include "BindCapturePrompt.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChordCapturedEvent, FInputChord, CapturedChord);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChordRejectedEvent, FInputChord, CapturedChord);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCapturePromptClosedEvent, bool, bWasCancelled);

UENUM()
enum class EBindingCaptureMode : uint8
{
	// Capture keys when they are released (default)
	OnReleased,
	// Capture keys when they are pressed. This will prevent use of modifiers, since a modifier will be captured by itself when it is pressed.
	OnPressed,
};

/**
 * Prompt that listens for an input chord and fires an event when it captures one
 */
UCLASS(abstract)
class AUTOSETTINGS_API UBindCapturePrompt : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UBindCapturePrompt(const FObjectInitializer& ObjectInitializer);

	// If true, then will tell viewport to ignore all game input (leaving only UI input)
	// while capturing, then restore if when closed. If the game supports multiple local players
	// binding at the same time then this may be undesirable.
	UPROPERTY(EditDefaultsOnly, Category = "Bind Capture Prompt")
	bool bIgnoreGameViewportInputWhileCapturing;

	// If true, only allow capturing keys in the passed in Key Group, otherwise the keys will be captured anyway
	UPROPERTY(EditDefaultsOnly, Category = "Bind Capture Prompt")
	bool bRestrictKeyGroup;

	// Should keys and mouse clicks be captured when they are pressed, or when they are released?
	UPROPERTY(EditDefaultsOnly, Category = "Bind Capture Prompt")
	EBindingCaptureMode CaptureMode;

	// If valid and bRestrictKeyGroup is true, then only keys allowed by this Key Group will be captured
	// If a key is rejected for not being in the Key Group, then OnChordRejected will be fired
	UPROPERTY()
	FGameplayTag KeyGroup;

	// Fired when an input chord is captured
	UPROPERTY(BlueprintAssignable, Category = "Bind Capture Prompt")
	FChordCapturedEvent OnChordCaptured;

	// Fired when an input chord is rejected
	UPROPERTY(BlueprintAssignable, Category = "Bind Capture Prompt")
	FChordRejectedEvent OnChordRejected;

	// Fired when the capture prompt is closed
	UPROPERTY(BlueprintAssignable, Category = "Bind Capture Prompt")
	FCapturePromptClosedEvent OnCapturePromptClosed;

	// Cancel listening and close the prompt
	UFUNCTION(BlueprintCallable, Category = "Bind Capture Prompt")
	void Cancel();

	// Returns the key group used for this prompt
	UFUNCTION(BlueprintPure, Category = "Bind Capture Prompt")
	FGameplayTag GetKeyGroup() const { return KeyGroup; }

protected:

	// Keys that are currently down, used to collect modifiers
	UPROPERTY()
	TArray<FKey> KeysDown;

	// Value of viewport's "ignore input" before the prompt was opened
	UPROPERTY()
	bool PreviousIgnoreInput;

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	// Start listening for capture input (called in Construct by default)
	virtual void StartListening();
	
	// Stop listening for capture input (called automatically after a binding is captured)
	virtual void StopListening();

	// Subclasses can override to disallow keys based on the prompt
	UFUNCTION(BlueprintNativeEvent)
	bool IsKeyAllowed(FKey PrimaryKey);

	void Capture(FKey PrimaryKey = EKeys::Invalid);

	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	virtual FReply NativeOnKeyUp(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseButtonUp(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseWheel(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply NativeOnMouseMove(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

private:

	// Total delta the mouse has moved
	UPROPERTY()
	FVector2D AccumulatedMouseDelta;

	bool ShouldIgnoreEvent(const FInputEvent& InputEvent) const;

	void ConfirmCapture(FInputChord Chord);

	void RejectCapture(FInputChord Chord);

	void ClosePrompt(bool bWasCancelled);
	
};
