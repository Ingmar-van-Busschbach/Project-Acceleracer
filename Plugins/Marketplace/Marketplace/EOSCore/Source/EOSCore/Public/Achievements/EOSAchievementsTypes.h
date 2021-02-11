/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_achievements_types.h"
#include "Core/EOSTypes.h"
#include "Core/EOSHelpers.h"
#include "EOSAchievementsTypes.generated.h"

class UCoreAchievements;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/**
 * Input parameters for the EOS_Achievements_QueryDefinitions Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsQueryDefinitionsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSAchievementsQueryDefinitionsOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_QUERYDEFINITIONS_API_LATEST){ }
};

/**
 * Contains information about a collection of stat threshold data.
 *
 * The threshold will depend on the stat aggregate type:
 *   LATEST (Tracks the latest value)
 *   MAX (Tracks the maximum value)
 *   MIN (Tracks the minimum value)
 *   SUM (Generates a rolling sum of the value)
 *
 * @see EOS_Achievements_Definition
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsStatThresholds
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The name of the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString Name;
	/** The value of this data. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 Threshold;
public:
	explicit FEOSAchievementsStatThresholds()
		: ApiVersion(EOS_ACHIEVEMENTS_STATTHRESHOLD_API_LATEST)
		, Threshold(0) {}
	FEOSAchievementsStatThresholds(const EOS_Achievements_StatThresholds& data)
		: ApiVersion(EOS_ACHIEVEMENTS_STATTHRESHOLD_API_LATEST)
		, Name(UTF8_TO_TCHAR(data.Name))
		, Threshold(data.Threshold) {}
};

/**
 * Contains information about a collection of stat info data.
 *
 * @see EOS_Achievements_PlayerAchievement
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsPlayerStatInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The name of the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString Name;
	/** The current value of the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 CurrentValue;
	/** The threshold value of the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 ThresholdValue;
public:
	explicit FEOSAchievementsPlayerStatInfo()
		: ApiVersion(EOS_ACHIEVEMENTS_PLAYERSTATINFO_API_LATEST)
		, CurrentValue(0)
		, ThresholdValue(0) {}
	FEOSAchievementsPlayerStatInfo(const EOS_Achievements_PlayerStatInfo& data)
		: ApiVersion(EOS_ACHIEVEMENTS_PLAYERSTATINFO_API_LATEST)
		, Name(UTF8_TO_TCHAR(data.Name))
		, CurrentValue(data.CurrentValue)
		, ThresholdValue(data.ThresholdValue) {}
};

/**
 * Contains information about a single achievement definition with localized text.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsDefinitionV2
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Achievement ID that can be used to uniquely identify the achievement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString AchievementId;
	/** Localized display name for the achievement when it has been unlocked. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString UnlockedDisplayName;
	/** Localized description for the achievement when it has been unlocked. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString UnlockedDescription;
	/** Localized display name for the achievement when it is locked or hidden. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString LockedDisplayName;
	/** Localized description for the achievement when it is locked or hidden. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString LockedDescription;
	/** Localized flavor text that can be used by the game in an arbitrary manner. This may be null if there is no data configured in the dev portal */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString FlavorText;
	/** URL of an icon to display for the achievement when it is unlocked. This may be null if there is no data configured in the dev portal */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString UnlockedIconURL;
	/** URL of an icon to display for the achievement when it is locked or hidden. This may be null if there is no data configured in the dev portal */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString LockedIconURL;
	/** True if achievement is hidden, false otherwise. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		bool bIsHidden;
	/** The number of stat thresholds. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 StatThresholdsCount;
	/** Array of stat thresholds that need to be satisfied to unlock the achievement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		TArray<FEOSAchievementsStatThresholds> StatThresholds;
public:
	explicit FEOSAchievementsDefinitionV2()
		: ApiVersion(EOS_ACHIEVEMENTS_DEFINITIONV2_API_LATEST)
		, bIsHidden(false)
		, StatThresholdsCount(0){ }
	FEOSAchievementsDefinitionV2(const EOS_Achievements_DefinitionV2& data)
		: ApiVersion(EOS_ACHIEVEMENTS_DEFINITIONV2_API_LATEST)
		, AchievementId(UTF8_TO_TCHAR(data.AchievementId))
		, UnlockedDisplayName(UTF8_TO_TCHAR(data.UnlockedDisplayName))
		, UnlockedDescription(UTF8_TO_TCHAR(data.UnlockedDescription))
		, LockedDisplayName(UTF8_TO_TCHAR(data.LockedDisplayName))
		, LockedDescription(UTF8_TO_TCHAR(data.LockedDescription))
		, FlavorText(UTF8_TO_TCHAR(data.FlavorText))
		, UnlockedIconURL(UTF8_TO_TCHAR(data.UnlockedIconURL))
		, LockedIconURL(UTF8_TO_TCHAR(data.LockedIconURL))
		, bIsHidden(data.bIsHidden > 0)
		, StatThresholdsCount(data.StatThresholdsCount)
	{
		for (int32 i=0; i< StatThresholdsCount; i++)
			StatThresholds.Add(*data.StatThresholds);
	}
};

/**
 * Input parameters for the EOS_Achievements_GetAchievementDefinitionCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsGetAchievementDefinitionCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSAchievementsGetAchievementDefinitionCountOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_GETACHIEVEMENTDEFINITIONCOUNT_API_LATEST){ }
};

/**
 * Input parameters for the EOS_Achievements_CopyAchievementDefinitionByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Index of the achievement definition to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 AchievementIndex;
public:
	explicit FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_COPYDEFINITIONV2BYINDEX_API_LATEST)
		, AchievementIndex(0) {}
};

/**
 * Input parameters for the EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Achievement ID to look for when copying definition from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString AchievementId;
public:
	explicit FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_COPYDEFINITIONV2BYACHIEVEMENTID_API_LATEST){ }
};

/**
 * Data containing the result information for a query definitions request.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Achievements_QueryDefinitions. */
		void* ClientData;
public:
	explicit FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo() 
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr) {}
	FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo(const EOS_Achievements_OnQueryDefinitionsCompleteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
	{}
};

/**
 * Input parameters for the EOS_Achievements_QueryPlayerAchievements Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsQueryPlayerAchievementsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The account ID for the user whose achievements are to be retrieved. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
public:
	explicit FEOSAchievementsQueryPlayerAchievementsOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_QUERYPLAYERACHIEVEMENTS_API_LATEST){ }
};

/**
 * Contains information about a single player achievement.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsPlayerAchievement
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Achievement ID that can be used to uniquely identify the achievement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString AchievementId;
	/** Progress towards completing this achievement (as a percentage). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		float Progress;
	/** If not EOS_ACHIEVEMENTS_ACHIEVEMENT_UNLOCKTIME_UNDEFINED then this is the POSIX timestamp that the achievement was unlocked. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString UnlockTime;
	/** The number of player stat info entries. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 StatInfoCount;
	/** Array of player stat info. These values can be used to calculate the overall progress towards unlocking the achievement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		TArray<FEOSAchievementsPlayerStatInfo> StatInfo;
	/**
	 * Localized display name for the achievement based on this specific player's current progress on the achievement.
	 * Note: The current progress is updated when EOS_Achievements_QueryPlayerAchievements succeeds and when an achievement is unlocked.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString DisplayName;
	/**
	 * Localized description for the achievement based on this specific player's current progress on the achievement.
	 * Note: The current progress is updated when EOS_Achievements_QueryPlayerAchievements succeeds and when an achievement is unlocked.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString Description;
	/**
	 * URL of an icon to display for the achievement based on this specific player's current progress on the achievement. This may be null if there is no data configured in the dev portal
	 * Note: The current progress is updated when EOS_Achievements_QueryPlayerAchievements succeeds and when an achievement is unlocked.
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString IconURL;
	/** Localized flavor text that can be used by the game in an arbitrary manner. This may be null if there is no data configured in the dev portal */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString FlavorText;
public:
	explicit FEOSAchievementsPlayerAchievement()
		: ApiVersion(EOS_ACHIEVEMENTS_PLAYERACHIEVEMENT_API_LATEST)
		, Progress(0.0f)
		, StatInfoCount(0) { }
	FEOSAchievementsPlayerAchievement(const EOS_Achievements_PlayerAchievement& data)
		: ApiVersion(EOS_ACHIEVEMENTS_PLAYERACHIEVEMENT_API_LATEST)
		, AchievementId(UTF8_TO_TCHAR(data.AchievementId))
		, Progress(data.Progress)
		, UnlockTime(LexToString(data.UnlockTime))
		, StatInfoCount(data.StatInfoCount)
		, DisplayName(UTF8_TO_TCHAR(data.DisplayName))
		, Description(UTF8_TO_TCHAR(data.Description))
		, IconURL(UTF8_TO_TCHAR(data.IconURL))
		, FlavorText(UTF8_TO_TCHAR(data.FlavorText))
	{
		for (int32 i = 0; i < StatInfoCount; i++)
		{
			StatInfo.Add(data.StatInfo[i]);
		}
	}
};

/**
 * Input parameters for the EOS_Achievements_GetPlayerAchievementCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsGetPlayerAchievementCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Account ID for the user for which to retrieve the achievement count */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
public:
	explicit FEOSAchievementsGetPlayerAchievementCountOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_GETPLAYERACHIEVEMENTCOUNT_API_LATEST) {}
};

/**
 * Input parameters for the EOS_Achievements_CopyPlayerAchievementByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsCopyPlayerAchievementByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID for the user who is copying the achievement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
	/** Index of the achievement to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 AchievementIndex;
public:
	explicit FEOSAchievementsCopyPlayerAchievementByIndexOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYINDEX_API_LATEST)
		, AchievementIndex(0) {}
};

/**
 * Input parameters for the EOS_Achievements_CopyPlayerAchievementByAchievementId Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsCopyPlayerAchievementByAchievementIdOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID for the user who is copying the achievement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
	/** Achievement ID to search for when retrieving player achievement data from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString AchievementId;
public:
	explicit FEOSAchievementsCopyPlayerAchievementByAchievementIdOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_COPYPLAYERACHIEVEMENTBYACHIEVEMENTID_API_LATEST) {}
};

/**
 * Input parameters for the EOS_Achievements_CopyPlayerAchievementByAchievementId Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Achievements_QueryPlayerAchievements. */
	void* ClientData;
	/** The Account ID of the user who initiated this request. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
public:
	explicit FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr)
	{}
	FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo(const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, UserId(data.UserId)
	{}
};

/**
 * Input parameters for the EOS_Achievements_UnlockAchievements Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsUnlockAchievementsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID for the user whose achievements are to be unlocked. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
	/** An array of Achievement IDs to unlock. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		TArray<FString> AchievementIds;
public:
	explicit FEOSAchievementsUnlockAchievementsOptions()
		: ApiVersion(EOS_ACHIEVEMENTS_UNLOCKACHIEVEMENTS_API_LATEST){ }
};

/**
 * Data containing the result information for unlocking achievements request.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Achievements_UnlockAchievements. */
		void* ClientData;
	/** The Account ID of the user who initiated this request. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
	/** The number of achievements to unlock. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		int32 AchievementsCount;
public:
	explicit FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr)
		, AchievementsCount(0)
	{}
	FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo(const EOS_Achievements_OnUnlockAchievementsCompleteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, UserId(data.UserId)
		, AchievementsCount(data.AchievementsCount)
	{}
};

/**
 * Input parameters for the EOS_Achievements_AddNotifyAchievementsUnlocked Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsAddNotifyAchievementsUnlockedV2Options
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	explicit FEOSAchievementsAddNotifyAchievementsUnlockedV2Options()
		: ApiVersion(EOS_ACHIEVEMENTS_ADDNOTIFYACHIEVEMENTSUNLOCKEDV2_API_LATEST) {}
};

/**
 * Output parameters for the EOS_Achievements_OnAchievementsUnlockedCallback Function.
 */
USTRUCT(BlueprintType)
struct FEOSAchievementsOnAchievementsUnlockedCallbackV2Info
{
	GENERATED_BODY()
public:
	/** Context that was passed into EOS_Achievements_AddNotifyAchievementsUnlocked */
		void* ClientData;
	/** Account ID for user that received the unlocked achievements notification */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSProductUserId UserId;
	/** Achievement ID for the achievement that was unlocked. Can be passed to EOS_Achievements_CopyPlayerAchievementByAchievementId to get full information for the achievement. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString AchievementId;
	/** POSIX timestamp when the achievement was unlocked */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FString UnlockTime;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Achievements")
		FEOSNotificationId NotificationID;
public:
	explicit FEOSAchievementsOnAchievementsUnlockedCallbackV2Info()
		: ClientData(nullptr)
	{}
	FEOSAchievementsOnAchievementsUnlockedCallbackV2Info(const EOS_Achievements_OnAchievementsUnlockedCallbackV2Info& data)
		: ClientData(data.ClientData)
		, UserId(data.UserId)
		, AchievementId(UTF8_TO_TCHAR(data.AchievementId))
		, UnlockTime(LexToString(data.UnlockTime))
	{}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAchievementsQueryDefinitionsCallback, const FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAchievementsQueryPlayerAchievementsCallback, const FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAchievementsUnlockAchievementsCallback, const FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAchievementsUnlockedV2Callback, const FEOSAchievementsOnAchievementsUnlockedCallbackV2Info&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAchievementsQueryDefinitionsCallbackDelegate, const FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAchievementsQueryPlayerAchievementsCallbackDelegate, const FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAchievementsUnlockedCallbackV2Delegate, const FEOSAchievementsOnAchievementsUnlockedCallbackV2Info&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAchievementsUnlockAchievementsCallbackDelegate, const FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo&, data);

struct FQueryDefinitionsCallback
{
public:
	UCoreAchievements* AchievementsObject;
	FOnAchievementsQueryDefinitionsCallback Callback;
public:
	FQueryDefinitionsCallback(UCoreAchievements* obj, const FOnAchievementsQueryDefinitionsCallback& callback)
		: AchievementsObject(obj)
		, Callback(callback) {}
};

struct FQueryPlayerAchievementsCallback
{
public:
	UCoreAchievements* AchievementsObject;
	FOnAchievementsQueryPlayerAchievementsCallback Callback;
public:
	FQueryPlayerAchievementsCallback(UCoreAchievements* obj, const FOnAchievementsQueryPlayerAchievementsCallback& callback)
		: AchievementsObject(obj)
		, Callback(callback) {}
};

struct FUnlockAchievementsCallback
{
public:
	UCoreAchievements* AchievementsObject;
	FOnAchievementsUnlockAchievementsCallback Callback;
public:
	FUnlockAchievementsCallback(UCoreAchievements* obj, const FOnAchievementsUnlockAchievementsCallback& callback)
		: AchievementsObject(obj)
		, Callback(callback) {}
};