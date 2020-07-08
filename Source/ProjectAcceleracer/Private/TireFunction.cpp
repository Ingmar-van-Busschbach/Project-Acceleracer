// Fill out your copyright notice in the Description page of Project Settings.

#include "TireFunction.h"


void UTireFunction::modifyTyreConfig(UWheeledVehicleMovementComponent* Component, TArray<FWheelSetupBp> Tyres)
{
    TArray<FWheelSetup> CTyres;
    for (int i = 0; i < Tyres.Num(); i++)
    {
        FWheelSetup tire;
            tire.WheelClass = Tyres[i].WheelClass;
            tire.BoneName = Tyres[i].BoneName;
            tire.bDisableSteering = Tyres[i].bDisableSteering;
			CTyres.Add(tire);
    }
    Component->WheelSetups = CTyres;
    Component->CreateVehicle();
    Component->RecreatePhysicsState();

	//Wheel->TireConfig = TireConfig;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Some variable values: x: %f"), Wheel->TireConfig->GetFrictionScale()));
}

void UTireFunction::switchTires(UWheeledVehicleMovementComponent * Component, UTireConfig * Tire)
{
    for (int i = 0; i < Component->Wheels.Num(); i++)
    {
        Component->Wheels[i]->TireConfig = Tire;
    }
}

void UTireFunction::checkVelocity(UWheeledVehicleMovementComponent* Component)
{
    GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Some variable values: x: %f"), 0));
}


//UVehicleWheel.TireConfig

//AWheeledVehicle