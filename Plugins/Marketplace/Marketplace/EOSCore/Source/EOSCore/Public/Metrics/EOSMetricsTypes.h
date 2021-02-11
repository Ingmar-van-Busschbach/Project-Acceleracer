/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_metrics_types.h"
#include "Core/EOSHelpers.h"
#include "EOSMetricsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/** User game controller types. */
UENUM(BlueprintType)
enum class EEOSEUserControllerType : uint8
{
	/** The game controller type is unknown. */
	EOS_UCT_Unknown = 0,
	/** Mouse and keyboard controller. */
	EOS_UCT_MouseKeyboard = 1,
	/** Gamepad controller. */
	EOS_UCT_GamepadControl = 2,
	/** Touch controller. */
	EOS_UCT_TouchControl = 3
};

/** Account ID type for EOS_Metrics_BeginPlayerSession and EOS_Metrics_EndPlayerSession. */
UENUM(BlueprintType)
enum class EEOSEMetricsAccountIdType : uint8
{
	/** An Epic Online Services Account ID. */
	EOS_MAIT_Epic = 0,
	/** An external service Account ID. */
	EOS_MAIT_External = 1
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/** BeginPlayerSession. */
USTRUCT(BlueprintType)
struct FEOSMetricsBeginPlayerSessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID type that is set in the union. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		EEOSEMetricsAccountIdType AccountIdType;
	/** An Epic Online Services Account ID. Set this field when AccountIdType is set to EOS_MAIT_Epic. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		FEOSEpicAccountId Epic;
	/** An Account ID for another service. Set this field when AccountIdType is set to EOS_MAIT_External. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		FString External;
	/** The in-game display name for the user as UTF-8 string. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		FString DisplayName;
	/** The user's game controller type. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		EEOSEUserControllerType ControllerType;
	/**
	 * IP address of the game server hosting the game session.
	 * For a localhost session, set to NULL.
	 *
	 * Must be in either one of the following IPv4 or IPv6 string formats:
	 * - "127.0.0.1".
	 * - "1200:0000:AB00:1234:0000:2552:7777:1313".
	 *
	 * If both IPv4 and IPv6 addresses are available, use the IPv6 address.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		FString ServerIp;
	/**
	 * Optional, application-defined custom match session identifier.
	 *
	 * The game can tag each game session with a custom session match identifier,
	 * which will be shown in the played sessions listing at the user profile dashboard.
	 *
	 * If the identifier is not used, set to NULL.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		FString GameSessionId;
public:
	explicit FEOSMetricsBeginPlayerSessionOptions()
		: ApiVersion(EOS_METRICS_BEGINPLAYERSESSION_API_LATEST) 
		, AccountIdType(EEOSEMetricsAccountIdType::EOS_MAIT_Epic)
		, ControllerType(EEOSEUserControllerType::EOS_UCT_MouseKeyboard)
		{ }
};

/** EndPlayerSession. */
USTRUCT(BlueprintType)
struct FEOSMetricsEndPlayerSessionOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID type that is set in the union. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		EEOSEMetricsAccountIdType AccountIdType;
	/** An Epic Online Services Account ID. Set this field when AccountIdType is set to EOS_MAIT_Epic. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		FEOSEpicAccountId Epic;
	/** An Account ID for another service. Set this field when AccountIdType is set to EOS_MAIT_External. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Metrics")
		FString External;
public:
	explicit FEOSMetricsEndPlayerSessionOptions()
		: ApiVersion(EOS_METRICS_ENDPLAYERSESSION_API_LATEST) 
		, AccountIdType(EEOSEMetricsAccountIdType::EOS_MAIT_Epic)
		{ }
};