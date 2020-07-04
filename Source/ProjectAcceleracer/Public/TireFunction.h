// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "VehicleWheel.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "TireConfig.h"

#include "TireFunction.generated.h"


/**
 * 
 */

USTRUCT(BlueprintType)
struct FWheelSetupBp
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
			TSubclassOf<UVehicleWheel> WheelClass;

		UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
			FName BoneName;

		UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
			FVector AdditionalOffset;

		UPROPERTY(BlueprintReadWrite, Category = WheelSetup)
			bool bDisableSteering;
};


UCLASS()
class PROJECTACCELERACER_API UTireFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static void modifyTyreConfig(UWheeledVehicleMovementComponent * Component, TArray<FWheelSetupBp> Tyres);
		UFUNCTION(BlueprintCallable)
		static void switchTires(UWheeledVehicleMovementComponent* Component, UTireConfig* Tire);
		UFUNCTION(BlueprintCallable)
			static void checkVelocity(UWheeledVehicleMovementComponent* Component);
};
