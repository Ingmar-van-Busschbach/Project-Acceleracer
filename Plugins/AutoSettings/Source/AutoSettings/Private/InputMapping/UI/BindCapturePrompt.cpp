// Copyright Sam Bonifacio. All Rights Reserved.

#include "InputMapping/UI/BindCapturePrompt.h"
#include "Misc/AutoSettingsConfig.h"
#include "Misc/AutoSettingsLogs.h"

UBindCapturePrompt::UBindCapturePrompt(const FObjectInitializer& ObjectInitializer)
	: UUserWidget(ObjectInitializer),
	bIgnoreGameViewportInputWhileCapturing(true),
	bRestrictKeyGroup(false),
	CaptureMode(EBindingCaptureMode::OnReleased),
	AccumulatedMouseDelta(FVector2D::ZeroVector)
{
	bIsFocusable = true;
}

void UBindCapturePrompt::Cancel()
{
	ClosePrompt(true);
}

void UBindCapturePrompt::NativeConstruct()
{
	Super::NativeConstruct();

	if (bIgnoreGameViewportInputWhileCapturing)
	{
		// Store previous ignore input value
		PreviousIgnoreInput = GetWorld()->GetGameViewport()->IgnoreInput();

		// Ignore game input so only this widget receives input
		GetWorld()->GetGameViewport()->SetIgnoreInput(true);
	}

	StartListening();
}

void UBindCapturePrompt::NativeDestruct()
{
	StopListening();
}

void UBindCapturePrompt::StartListening()
{
	SetKeyboardFocus();
	UE_LOG(LogAutoSettingsInput, Verbose, TEXT("BindCapturePrompt: SetKeyboardFocus"));

	SetUserFocus(GetOwningPlayer());
	UE_LOG(LogAutoSettingsInput, Verbose, TEXT("BindCapturePrompt: SetUserFocus to %s"), *GetOwningPlayer()->GetHumanReadableName());

	UE_LOG(LogAutoSettingsInput, Log, TEXT("BindCapturePrompt: Listening for input"));
}

void UBindCapturePrompt::StopListening()
{
	// This is mainly for subclasses to hook into
}

bool UBindCapturePrompt::IsKeyAllowed_Implementation(FKey PrimaryKey)
{
	// Mainly for subclasses
	return true;
}

FReply UBindCapturePrompt::NativeOnKeyDown(const FGeometry & InGeometry, const FKeyEvent & InKeyEvent)
{
	if (!ShouldIgnoreEvent(InKeyEvent))
	{
		KeysDown.AddUnique(InKeyEvent.GetKey());

		if (CaptureMode == EBindingCaptureMode::OnPressed)
		{
			Capture(InKeyEvent.GetKey());
			KeysDown.Remove(InKeyEvent.GetKey());
		}

		return FReply::Handled();
	}

	return Super::NativeOnKeyDown(InGeometry, InKeyEvent);
}

FReply UBindCapturePrompt::NativeOnKeyUp(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	FReply Reply = Super::NativeOnKeyUp(InGeometry, InKeyEvent);

	if (!ShouldIgnoreEvent(InKeyEvent))
	{
		if (CaptureMode != EBindingCaptureMode::OnReleased)
		{
			KeysDown.Remove(InKeyEvent.GetKey());
			return FReply::Handled();
		}

		// Require that this key was pressed down while we were listening,
		// otherwise you can eg. press down a key, which opens the bind prompt,
		// then release the key but have the bind prompt capture it as a binding, closing the prompt immediately
		if (KeysDown.Contains(InKeyEvent.GetKey()))
		{
			// Fire capture event
			Capture(InKeyEvent.GetKey());

			KeysDown.Remove(InKeyEvent.GetKey());
			return FReply::Handled();
		}
	}

	return Reply;
}

FReply UBindCapturePrompt::NativeOnMouseButtonDown(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent)
{
	if (!ShouldIgnoreEvent(InMouseEvent))
	{
		UE_LOG(LogAutoSettingsInput, Verbose, TEXT("BindCapturePrompt: NativeOnMouseButtonDown"));

		KeysDown.AddUnique(InMouseEvent.GetEffectingButton());

		if (CaptureMode == EBindingCaptureMode::OnPressed)
		{
			// Fire capture event
			Capture(InMouseEvent.GetEffectingButton());

			KeysDown.Remove(InMouseEvent.GetEffectingButton());
		}
		
		return FReply::Handled();
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

FReply UBindCapturePrompt::NativeOnMouseButtonUp(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseButtonUp(InGeometry, InMouseEvent);

	if (!ShouldIgnoreEvent(InMouseEvent))
	{
		UE_LOG(LogAutoSettingsInput, Verbose, TEXT("BindCapturePrompt: NativeOnMouseButtonUp"));
		if (CaptureMode != EBindingCaptureMode::OnReleased)
		{
			return FReply::Handled();
		}

		// Fire capture event
		Capture(InMouseEvent.GetEffectingButton());

		KeysDown.Remove(InMouseEvent.GetEffectingButton());

		return FReply::Handled();
	}

	return Reply;
}

FReply UBindCapturePrompt::NativeOnMouseWheel(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseWheel(InGeometry, InMouseEvent);

	if (!ShouldIgnoreEvent(InMouseEvent))
	{
		// Fire capture event
		const FKey WheelKey = InMouseEvent.GetWheelDelta() > 0 ? EKeys::MouseScrollUp : EKeys::MouseScrollDown;
		Capture(WheelKey);
		return FReply::Handled();
	}

	return Reply;
}

FReply UBindCapturePrompt::NativeOnMouseMove(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent)
{
	FReply Reply = Super::NativeOnMouseMove(InGeometry, InMouseEvent);

	// If neither mouse axis are allowed, then don't even bother considering them
	if (!GetDefault<UAutoSettingsConfig>()->IsKeyAllowed(EKeys::MouseX) && !GetDefault<UAutoSettingsConfig>()->IsKeyAllowed(EKeys::MouseY))
	{
		return Reply;
	}

	if (!ShouldIgnoreEvent(InMouseEvent))
	{
		const FVector2D Delta = InMouseEvent.GetCursorDelta();

		AccumulatedMouseDelta += Delta;

		const float RequiredDelta = FMath::Max(GetDefault<UAutoSettingsConfig>()->MouseMoveCaptureDistance, 0.0f);

		if (AccumulatedMouseDelta.Size() > RequiredDelta)
		{
			if (FMath::Abs(AccumulatedMouseDelta.X) > FMath::Abs(AccumulatedMouseDelta.Y))
			{
				// X axis
				Capture(EKeys::MouseX);
			}
			else
			{
				// Y axis
				Capture(EKeys::MouseY);
			}

			return FReply::Handled();
		}

	}

	return Reply;
}

void UBindCapturePrompt::Capture(FKey PrimaryKey)
{
	bool ShiftDown = false;
	bool CtrlDown = false;
	bool AltDown = false;
	bool CmdDown = false;

	FKey NonModifier = EKeys::Invalid;

	// Check keys that were pressed for modifiers

	if (GetDefault<UAutoSettingsConfig>()->AllowModifierKeys)
	{
		for (FKey Key : KeysDown)
		{
			if (Key == EKeys::LeftShift || Key == EKeys::RightShift)
				ShiftDown = true;
			else if (Key == EKeys::LeftControl || Key == EKeys::RightControl)
				CtrlDown = true;
			else if (Key == EKeys::LeftAlt || Key == EKeys::RightAlt)
				AltDown = true;
			else if (Key == EKeys::LeftCommand || Key == EKeys::RightCommand)
				CmdDown = true;
			else
				NonModifier = Key;
		}
	}

	// Use last pressed non-modifier key if need primary, otherwise used last pressed key including modifiers
	if (!PrimaryKey.IsValid())
	{
		if (NonModifier.IsValid())
			PrimaryKey = NonModifier;
		else if (KeysDown.IsValidIndex(0))
			PrimaryKey = KeysDown.Last();
	}

	if (GetDefault<UAutoSettingsConfig>()->BindingEscapeKeys.Contains(PrimaryKey))
	{
		UE_LOG(LogAutoSettingsInput, Log, TEXT("BindCapturePrompt: Escape key pressed: %s - Cancelling"), *PrimaryKey.ToString());
		// Cancelling is not considered a capture attempt so we don't do a rejection
		Cancel();
		return;
	}

	// Don't use key as modifier if it is already the primary key
	if (PrimaryKey == EKeys::LeftShift || PrimaryKey == EKeys::RightShift)
		ShiftDown = false;
	else if (PrimaryKey == EKeys::LeftControl || PrimaryKey == EKeys::RightControl)
		CtrlDown = false;
	else if (PrimaryKey == EKeys::LeftAlt || PrimaryKey == EKeys::RightAlt)
		AltDown = false;
	else if (PrimaryKey == EKeys::LeftCommand || PrimaryKey == EKeys::RightCommand)
		CmdDown = false;

	const FInputChord Chord = FInputChord(PrimaryKey, ShiftDown, CtrlDown, AltDown, CmdDown);

	if (!GetDefault<UAutoSettingsConfig>()->IsKeyAllowed(PrimaryKey))
	{
		// Primary key disallowed, abort
		UE_LOG(LogAutoSettingsInput, Log, TEXT("BindCapturePrompt: Ignored globally disallowed key: %s"), *PrimaryKey.ToString());
		RejectCapture(Chord);
		return;
	}

	if (!IsKeyAllowed(PrimaryKey))
	{
		// Primary key disallowed, abort
		UE_LOG(LogAutoSettingsInput, Log, TEXT("BindCapturePrompt: Ignored key disallowed by IsKeyAllowed override: %s"), *PrimaryKey.ToString());
		RejectCapture(Chord);
		return;
	}

	// Check if the primary key is allowed by the key group
	if (bRestrictKeyGroup && !GetDefault<UAutoSettingsConfig>()->DoesKeyGroupContainKey(KeyGroup, PrimaryKey))
	{
		UE_LOG(LogAutoSettingsInput, Log, TEXT("BindCapturePrompt: Rejecting key because not allowed by key grouop: %s"), *PrimaryKey.ToString());
		RejectCapture(Chord);
		return;
	}

	UE_LOG(LogAutoSettingsInput, Log, TEXT("BindCapturePrompt: Captured chord: %s"), *Chord.GetInputText().ToString());

	ConfirmCapture(Chord);
}

bool UBindCapturePrompt::ShouldIgnoreEvent(const FInputEvent& InputEvent) const
{
	// Ignore input coming from a different player
	if (GetOwningPlayer()->GetLocalPlayer()->GetControllerId() != InputEvent.GetUserIndex())
	{
		return true;
	}
	
	return false;
}

void UBindCapturePrompt::ConfirmCapture(FInputChord Chord)
{
	OnChordCaptured.Broadcast(Chord);
	ClosePrompt(false);
}

void UBindCapturePrompt::RejectCapture(FInputChord Chord)
{
	OnChordRejected.Broadcast(Chord);
	// Keep the prompt open on rejection
}

void UBindCapturePrompt::ClosePrompt(bool bWasCancelled)
{
	StopListening();

	if (bIgnoreGameViewportInputWhileCapturing)
	{
		// Return viewport's ignore input to previous value
		GetWorld()->GetGameViewport()->SetIgnoreInput(PreviousIgnoreInput);
	}

	RemoveFromParent();

	OnCapturePromptClosed.Broadcast(bWasCancelled);
}
