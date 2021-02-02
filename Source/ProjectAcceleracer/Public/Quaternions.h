// Mattel(c), the creator of Hot Wheels(tm) Acceleracers(tm), is not affiliated or endorses this project in any shape, way or form. This project is a non-profit, open-source, fair use project made under US Copyright Act 1976 (USC), article 17, section 107 with entertainment purposes in mind.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Quaternions.generated.h"

/**
 * 
 */
UENUM()
enum Realms
{
	Cavern     UMETA(DisplayName = "Cavern"),
	Sky      UMETA(DisplayName = "Sky"),
	Labyrinth   UMETA(DisplayName = "Labyrinth"),
	Solar     UMETA(DisplayName = "Solar"),
	Pipeline      UMETA(DisplayName = "Piepline"),
	Blizzard   UMETA(DisplayName = "Blizzard"),
	Warped     UMETA(DisplayName = "Warped"),
	Glass      UMETA(DisplayName = "Glass"),
	Metro   UMETA(DisplayName = "Metro"),
	Ice     UMETA(DisplayName = "Ice"),
	Micro      UMETA(DisplayName = "Micro"),
	Cliffside   UMETA(DisplayName = "Cliffside"),
	Ruins     UMETA(DisplayName = "Ruins"),
	Canyon      UMETA(DisplayName = "Canyon"),
	Water   UMETA(DisplayName = "Water"),
	Monument     UMETA(DisplayName = "Monument"),
	Lava      UMETA(DisplayName = "Lava"),
	Chrome   UMETA(DisplayName = "Chrome"),
	Reactor     UMETA(DisplayName = "Reactor"),
	Custom      UMETA(DisplayName = "Custom"),
	Storm   UMETA(DisplayName = "Storm"),
	Junk     UMETA(DisplayName = "Junk"),
	Desert      UMETA(DisplayName = "Desert"),
	Cybergrid   UMETA(DisplayName = "Cybergrid"),
	Sound     UMETA(DisplayName = "Sound"),
	Cosmic      UMETA(DisplayName = "Cosmic"),
	Forest   UMETA(DisplayName = "Forest"),
	Wind     UMETA(DisplayName = "Wind"),
	Fog      UMETA(DisplayName = "Fog"),
	Swamp   UMETA(DisplayName = "Swamp"),
};

UENUM()
enum WheelPositions
{
	Interior     UMETA(DisplayName = "Interior"),
	Middle      UMETA(DisplayName = "Middle"),
	Exterior   UMETA(DisplayName = "Exterior"),
};

UCLASS()
class PROJECTACCELERACER_API UQuaternions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static float Norme(FQuat Quaternion);

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static FQuat Tourner(FQuat Axis, FQuat rotation);

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static FQuat Rotation(FQuat Axis, float angle);

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static FQuat CalculateWOPEuler(Realms RealmName, WheelPositions Wheel);

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static float GetRealmPitchRotation(Realms RealmName);

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static float GetWheelRollRotation(WheelPositions Wheel);

	//UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
	//static TArray<float> GimmeValues(FQuat Axis);

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static FQuat GetRollAxis();

	UFUNCTION(BlueprintCallable, Category = "Quaternion tools")
		static FQuat GetPitchAxis();
};
