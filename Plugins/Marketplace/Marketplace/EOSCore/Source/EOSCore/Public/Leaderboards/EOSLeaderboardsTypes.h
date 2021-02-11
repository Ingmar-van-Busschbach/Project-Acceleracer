/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_leaderboards_types.h"
#include "Core/EOSHelpers.h"
#include "EOSLeaderboardsTypes.generated.h"

class UCoreLeaderboards;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/**
 * An enumeration of the different leaderboard aggregation types.
 */
UENUM(BlueprintType)
enum class EEOSELeaderboardAggregation : uint8
{
	/** Minimum */
	EOS_LA_Min = 0,
	/** Maximum */
	EOS_LA_Max = 1,
	/** Sum */
	EOS_LA_Sum = 2,
	/** Latest */
	EOS_LA_Latest = 3
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/**
 * Input parameters for the EOS_Leaderboards_QueryLeaderboardDefinitions Function.
 * StartTime and EndTime are optional parameters, they can be used to limit the list of definitions
 * to overlap the time window specified.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The POSIX timestamp for the start time, or EOS_LEADERBOARDS_TIME_UNDEFINED (Optional). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString StartTime;
	/** The POSIX timestamp for the end time, or EOS_LEADERBOARDS_TIME_UNDEFINED (Optional). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString EndTime;
public:
    explicit FEOSLeaderboardsQueryLeaderboardDefinitionsOptions()
		: ApiVersion(EOS_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONS_API_LATEST){ }
    FEOSLeaderboardsQueryLeaderboardDefinitionsOptions(const EOS_Leaderboards_QueryLeaderboardDefinitionsOptions& data)
		: ApiVersion(EOS_LEADERBOARDS_QUERYLEADERBOARDDEFINITIONS_API_LATEST)
        , StartTime(LexToString(data.StartTime))
        , EndTime(LexToString(data.EndTime)) { }
};

/**
 * Contains information about a single leaderboard definition
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsDefinition
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Unique ID to identify leaderboard. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString LeaderboardId;
	/** Name of stat used to rank leaderboard. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString StatName;
	/** Aggregation used to sort leaderboard. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    EEOSELeaderboardAggregation Aggregation;
	/** The POSIX timestamp for the start time, or EOS_LEADERBOARDS_TIME_UNDEFINED. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString StartTime;
	/** The POSIX timestamp for the end time, or EOS_LEADERBOARDS_TIME_UNDEFINED. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString EndTime;
public:
    explicit FEOSLeaderboardsDefinition()
		: ApiVersion(EOS_LEADERBOARDS_DEFINITION_API_LATEST)
        , Aggregation(EEOSELeaderboardAggregation::EOS_LA_Latest)
        { }
    FEOSLeaderboardsDefinition(const EOS_Leaderboards_Definition& data)
		: ApiVersion(EOS_LEADERBOARDS_DEFINITION_API_LATEST)
        , LeaderboardId(data.LeaderboardId)
        , StatName(data.StatName)
        , Aggregation(static_cast<EEOSELeaderboardAggregation>(data.Aggregation))
        , StartTime(LexToString(data.StartTime))
        , EndTime(LexToString(data.EndTime)) { }
};

/**
 * Input parameters for the EOS_Leaderboards_GetLeaderboardDefinitionCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
    explicit FEOSLeaderboardsGetLeaderboardDefinitionCountOptions()
        : ApiVersion(EOS_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNT_API_LATEST)
    {}
    FEOSLeaderboardsGetLeaderboardDefinitionCountOptions(const EOS_Leaderboards_GetLeaderboardDefinitionCountOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_GETLEADERBOARDDEFINITIONCOUNT_API_LATEST)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_CopyLeaderboardDefinitionByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** Index of the leaderboard definition to retrieve from the cache */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
    	int32 LeaderboardIndex;
public:
    explicit FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions()
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEX_API_LATEST)
        , LeaderboardIndex(0)
    {}
    FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions(const EOS_Leaderboards_CopyLeaderboardDefinitionByIndexOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYINDEX_API_LATEST)
        , LeaderboardIndex(data.LeaderboardIndex)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** Leaderboard ID to look for when copying leaderboard definition from the cache */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		FString LeaderboardId;
public:
    explicit FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions()
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDID_API_LATEST)
    {}
    FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions(const EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardIdOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDDEFINITIONBYLEADERBOARDID_API_LATEST)
        , LeaderboardId(data.LeaderboardId)
    {}
};

USTRUCT(BlueprintType)
struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo
{
    GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    EOSResult ResultCode;
	/** Context that was passed into EOS_Leaderboards_QueryLeaderboardDefinitions. */
	    void* ClientData;
public:
    explicit FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
    FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo(const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallbackInfo& data)
        : ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
        , ClientData(data.ClientData)
    {}
};

/**
 * Contains information about a single stat to query with user scores.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsUserScoresQueryStatInfo
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** The name of the stat to query. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		FString StatName;
	/** Aggregation used to sort the cached user scores. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    EEOSELeaderboardAggregation Aggregation;
public:
    explicit FEOSLeaderboardsUserScoresQueryStatInfo()
        : ApiVersion(EOS_LEADERBOARDS_USERSCORESQUERYSTATINFO_API_LATEST)
        , Aggregation(EEOSELeaderboardAggregation::EOS_LA_Latest)
    {}
    FEOSLeaderboardsUserScoresQueryStatInfo(const EOS_Leaderboards_UserScoresQueryStatInfo& data)
        : ApiVersion(EOS_LEADERBOARDS_USERSCORESQUERYSTATINFO_API_LATEST)
        , StatName(data.StatName)
        , Aggregation(static_cast<EEOSELeaderboardAggregation>(data.Aggregation))
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_QueryLeaderboardUserScores Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** An array of account IDs for the users whose scores are to be retrieved. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		TArray<FEOSProductUserId> UserIds;
	/** The number of users included in query. */
	    int32 UserIdsCount;
	/** Array of info about stats to query. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    TArray<FEOSLeaderboardsUserScoresQueryStatInfo> StatInfo;
	/** The number of stats to query. */
	    int32 StatInfoCount;
	/** The POSIX timestamp for the start time, or EOS_LEADERBOARDS_TIME_UNDEFINED (Optional). */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString StartTime;
	/** The POSIX timestamp for the end time, or EOS_LEADERBOARDS_TIME_UNDEFINED (Optional). */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString EndTime;
public:
    explicit  FEOSLeaderboardsQueryLeaderboardUserScoresOptions()
        : ApiVersion(EOS_LEADERBOARDS_QUERYLEADERBOARDUSERSCORES_API_LATEST)
        , UserIdsCount(UserIds.Num())
        , StatInfoCount(StatInfo.Num())
    {}
    
};

/**
 * Contains information about a single leaderboard user score
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsLeaderboardUserScore
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** User id. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		FEOSProductUserId UserId;
	/** Leaderboard score. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    int32 Score;
public:
    explicit FEOSLeaderboardsLeaderboardUserScore()
        : ApiVersion(EOS_LEADERBOARDS_LEADERBOARDUSERSCORE_API_LATEST)
        , Score(0)
    {}
    FEOSLeaderboardsLeaderboardUserScore(const EOS_Leaderboards_LeaderboardUserScore& data)
        : ApiVersion(EOS_LEADERBOARDS_LEADERBOARDUSERSCORE_API_LATEST)
        , UserId(data.UserId)
        , Score(data.Score)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_GetLeaderboardUserScoreCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** Name of stat used to rank leaderboard. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
    	FString StatName;
public:
    explicit FEOSLeaderboardsGetLeaderboardUserScoreCountOptions()
        : ApiVersion(EOS_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNT_API_LATEST)
    {}
    FEOSLeaderboardsGetLeaderboardUserScoreCountOptions(const EOS_Leaderboards_GetLeaderboardUserScoreCountOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_GETLEADERBOARDUSERSCORECOUNT_API_LATEST)
        , StatName(data.StatName)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_CopyLeaderboardUserScoreByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** Index of the sorted leaderboard user score to retrieve from the cache. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		int32 LeaderboardUserScoreIndex;
	/** Name of the stat used to rank the leaderboard. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString StatName;
public:
    explicit FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions()
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEX_API_LATEST)
        , LeaderboardUserScoreIndex(0)
    {}
    FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions(const EOS_Leaderboards_CopyLeaderboardUserScoreByIndexOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYINDEX_API_LATEST)
        , LeaderboardUserScoreIndex(data.LeaderboardUserScoreIndex)
        , StatName(data.StatName)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_CopyLeaderboardUserScoreByUserId Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** User id to look for when copying leaderboard score data from the cache. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		FEOSProductUserId UserId;
	/** Name of stat used to rank leaderboard. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString StatName;
public:
    explicit FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions()
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERID_API_LATEST)
    {}
    FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions(const EOS_Leaderboards_CopyLeaderboardUserScoreByUserIdOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDUSERSCOREBYUSERID_API_LATEST)
        , UserId(data.UserId)
        , StatName(data.StatName)
    {}
};

/**
 * Data containing the result information for a query leaderboard user scores request.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo
{
    GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
        EOSResult ResultCode;
    /** Context that was passed into EOS_Leaderboards_QueryLeaderboardUserScores. */
	    void* ClientData;
public:
    FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr) {}
    FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo(const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallbackInfo& data)
        : ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
        , ClientData(data.ClientData)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_QueryLeaderboardRanks Function.
 *
 * @see EOS_Leaderboards_Definition
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsQueryLeaderboardRanksOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** Unique ID to identify leaderboard. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		FString LeaderboardId;
public:
    explicit FEOSLeaderboardsQueryLeaderboardRanksOptions()
        : ApiVersion(EOS_LEADERBOARDS_QUERYLEADERBOARDRANKS_API_LATEST)
    {}
    FEOSLeaderboardsQueryLeaderboardRanksOptions(const EOS_Leaderboards_QueryLeaderboardRanksOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_QUERYLEADERBOARDRANKS_API_LATEST)
        , LeaderboardId(data.LeaderboardId)
    {}
};

/**
 * Contains information about a single leaderboard record
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsLeaderboardRecord
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** User Id */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		FEOSProductUserId UserId;
	/** Sorted position on leaderboard */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    int32 Rank;
	/** Leaderboard score. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    int32 Score;
	/* The latest display name seen for the user since they last time logged in. Empty if the user would not have a display name set. */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
	    FString UserDisplayName;
public:
    explicit FEOSLeaderboardsLeaderboardRecord()
        : ApiVersion(EOS_LEADERBOARDS_LEADERBOARDRECORD_API_LATEST)
        , Rank(0)
        , Score(0)
    {}
    FEOSLeaderboardsLeaderboardRecord(const EOS_Leaderboards_LeaderboardRecord& data)
        : ApiVersion(EOS_LEADERBOARDS_LEADERBOARDRECORD_API_LATEST)
        , UserId(data.UserId)
        , Rank(data.Rank)
        , Score(data.Score)
        , UserDisplayName(data.UserDisplayName)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_GetLeaderboardRecordCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsGetLeaderboardRecordCountOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
    explicit FEOSLeaderboardsGetLeaderboardRecordCountOptions()
        : ApiVersion(EOS_LEADERBOARDS_GETLEADERBOARDRECORDCOUNT_API_LATEST)
    {}
    FEOSLeaderboardsGetLeaderboardRecordCountOptions(const EOS_Leaderboards_GetLeaderboardRecordCountOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_GETLEADERBOARDRECORDCOUNT_API_LATEST)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_CopyLeaderboardRecordByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** Index of the leaderboard record to retrieve from the cache */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		int32 LeaderboardRecordIndex;
public:
    explicit FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions()
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEX_API_LATEST)
        , LeaderboardRecordIndex(0)
    {}
    FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions(const EOS_Leaderboards_CopyLeaderboardRecordByIndexOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDRECORDBYINDEX_API_LATEST)
        , LeaderboardRecordIndex(data.LeaderboardRecordIndex)
    {}
};

/**
 * Input parameters for the EOS_Leaderboards_CopyLeaderboardRecordByUserId Function.
 */
USTRUCT(BlueprintType)
struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions
{
    GENERATED_BODY()
public:
    /** API Version. */
    int32 ApiVersion;
public:
	/** User id to look for when copying leaderboard record data from the cache */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
		FEOSProductUserId UserId;
public:
    explicit FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions()
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERID_API_LATEST)
    {}
    FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions(const EOS_Leaderboards_CopyLeaderboardRecordByUserIdOptions& data)
        : ApiVersion(EOS_LEADERBOARDS_COPYLEADERBOARDRECORDBYUSERID_API_LATEST)
        , UserId(data.UserId)
    {}
};

USTRUCT(BlueprintType)
struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo
{
    GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Leaderboards")
        EOSResult ResultCode;
    /** Context that was passed into EOS_Leaderboards_QueryLeaderboardRanks. */
	    void* ClientData;
public:
    explicit FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
    FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo(const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallbackInfo& data)
        : ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
        , ClientData(data.ClientData)
    {}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryLeaderboardDefinitionsCompleteCallback, const FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryLeaderboardUserScoresCompleteCallback, const FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryLeaderboardRanksCompleteCallback, const FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryLeaderboardDefinitionsCompleteCallbackDelegate, const FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryLeaderboardUserScoresCompleteCallbackDelegate, const FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryLeaderboardRanksCompleteCallbackDelegate, const FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo&, data);

struct FLeaderboardDefinitionsCompleteCallback
{
public:
	UCoreLeaderboards* LeaderboardsObject;
	FOnQueryLeaderboardDefinitionsCompleteCallback Callback;
public:
	FLeaderboardDefinitionsCompleteCallback(UCoreLeaderboards* obj, const FOnQueryLeaderboardDefinitionsCompleteCallback& callback)
		: LeaderboardsObject(obj)
		, Callback(callback) {}
};

struct FLeaderboardRanksCompleteCallback
{
public:
	UCoreLeaderboards* LeaderboardsObject;
	FOnQueryLeaderboardRanksCompleteCallback Callback;
public:
	FLeaderboardRanksCompleteCallback(UCoreLeaderboards* obj, const FOnQueryLeaderboardRanksCompleteCallback& callback)
		: LeaderboardsObject(obj)
		, Callback(callback) {}
};

struct FLeaderboardUserScoresCompleteCallback
{
public:
	UCoreLeaderboards* LeaderboardsObject;
	FOnQueryLeaderboardUserScoresCompleteCallback Callback;
public:
	FLeaderboardUserScoresCompleteCallback(UCoreLeaderboards* obj, const FOnQueryLeaderboardUserScoresCompleteCallback& callback)
		: LeaderboardsObject(obj)
		, Callback(callback) {}
};