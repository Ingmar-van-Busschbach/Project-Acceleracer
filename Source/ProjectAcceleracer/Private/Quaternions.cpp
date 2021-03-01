// Mattel(c), the creator of Hot Wheels(tm) Acceleracers(tm), is not affiliated or endorses this project in any shape, way or form. This project is a non-profit, open-source, fair use project made under US Copyright Act 1976 (USC), article 17, section 107 with entertainment purposes in mind.

#include "Quaternions.h"
#include "math.h"

static const FQuat RollAxis = FQuat(1, 0, 0, 0);
static const FQuat PitchAxis = FQuat(0, 1, 0, 0);
static const float EXTERIOR_WHEEL_OF_POWER_ROLL_ANGLE = 0.0f;
static const float MIDDLE_WHEEL_OF_POWER_ROLL_ANGLE = -135.0f;
static const float INTERIOR_WHEEL_OF_POWER_ROLL_ANGLE = 135.0f;

float UQuaternions::Norme(FQuat Quaternion)
{
	float Sum = 0.f;

	Sum += pow(Quaternion.X, 2);
	Sum += pow(Quaternion.Y, 2);
	Sum += pow(Quaternion.Z, 2);
	Sum += pow(Quaternion.W, 2);

	return pow(Sum, 0.5f);
}

FQuat UQuaternions::Tourner(FQuat Axis, FQuat rotation)
{

	return (rotation * Axis) * rotation.Inverse();
}

FQuat UQuaternions::Rotation(FQuat Axis, float angle)
{
	float RadAngle = angle * PI / 180;
	float co = cos(RadAngle / 2);
	float si = sin(RadAngle / 2);
	FQuat NewAxis = Axis / Norme(Axis);
	return FQuat(NewAxis.X * si, NewAxis.Y * si, NewAxis.Z * si, co);
}

float UQuaternions::GetRealmPitchRotation(Realms RealmName)
{
	switch (RealmName)
	{
	case Cavern:
		return 0.0f;
	case Sky:
		return 12.0f;
	case Labyrinth:
		return 24.0f;
	case Solar:
		return 36.0f;
	case Pipeline:
		return 48.0f;
	case Blizzard:
		return 60.0f;
	case Warped:
		return 72.0f;
	case Glass:
		return 84.0f;
	case Metro:
		return 96.0f;
	case Ice:
		return 108.0f;
	case Micro:
		return 120.0f;
	case Cliffside:
		return 132.0f;
	case Ruins:
		return 144.0f;
	case Canyon:
		return 156.0f;
	case Water:
		return 168.0f;
	case Monument:
		return 180.0f;
	case Lava:
		return 192.0f;
	case Chrome:
		return 204.0f;
	case Reactor:
		return 216.0f;
	case Custom:
		return 228.0f;
	case Storm:
		return 240.0f;
	case Junk:
		return 252.0f;
	case Desert:
		return 264.0f;
	case Cybergrid:
		return 276.0f;
	case Sound:
		return 288.0f;
	case Cosmic:
		return 300.0f;
	case Forest:
		return 312.0f;
	case Wind:
		return 324.0f;
	case Fog:
		return 336.0f;
	case Swamp:
		return 348.0f;
	default:
		return 228.0f;
	}
}

float UQuaternions::GetWheelRollRotation(WheelPositions Wheel)
{
	switch (Wheel)
	{
	case Interior:
		return INTERIOR_WHEEL_OF_POWER_ROLL_ANGLE;
	case Middle:
		return MIDDLE_WHEEL_OF_POWER_ROLL_ANGLE;
	case Exterior:
		return EXTERIOR_WHEEL_OF_POWER_ROLL_ANGLE;
	default:
		return EXTERIOR_WHEEL_OF_POWER_ROLL_ANGLE;
	}
}

FQuat UQuaternions::CalculateWOPEuler(Realms RealmName, WheelPositions Wheel)
{
	float Roll = GetWheelRollRotation(Wheel);
	float Pitch = GetRealmPitchRotation(RealmName);
	FQuat RollAxisRotation = Rotation(RollAxis, Roll);
	FQuat PitchAxisRotation = Tourner(PitchAxis, RollAxisRotation); // rotate the pitch axis with the specified rotation above
	PitchAxisRotation = Rotation(PitchAxisRotation, Pitch);
	FQuat CombinedRotation = PitchAxisRotation * RollAxisRotation;
	return CombinedRotation;
}

/*TArray<float> UQuaternionTools::GimmeValues(FQuat Axis)
{
	TArray<float> Result = { Axis.W, Axis.X, Axis.Y, Axis.Z };

	return Result;
}*/

FQuat UQuaternions::GetRollAxis()
{
	return RollAxis;
}

FQuat UQuaternions::GetPitchAxis()
{
	return PitchAxis;
}