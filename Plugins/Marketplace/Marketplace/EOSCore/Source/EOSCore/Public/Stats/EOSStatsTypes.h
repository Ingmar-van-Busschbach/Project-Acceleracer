/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "eos_stats_types.h"
#include "Core/EOSHelpers.h"
#include "EOSStatsTypes.generated.h"

class UCoreStats;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/**
 * Contains information about a single stat to ingest.
 */
USTRUCT(BlueprintType)
struct FEOSStatsIngestData
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The name of the stat to ingest. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString StatName;
	/** The amount to ingest the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 IngestAmount;
public:
	explicit FEOSStatsIngestData()
		: ApiVersion(EOS_STATS_INGESTDATA_API_LATEST)
		, IngestAmount(0)
		{ }
	FEOSStatsIngestData(const EOS_Stats_IngestData& data)
		: ApiVersion(EOS_STATS_INGESTDATA_API_LATEST)
		, StatName(data.StatName)
		, IngestAmount(data.IngestAmount)
	{}
};

USTRUCT(BlueprintType)
struct FEOSStatsIngestStatOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Product User ID of the local user requesting the ingest.  Set to null for dedicated server. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** Stats to ingest. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		TArray<FEOSStatsIngestData> Stats;
	/** The number of stats to ingest, may not exceed EOS_STATS_MAX_INGEST_STATS. */
		int32 StatsCount;
	/** The Product User ID for the user whose stat is being ingested. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSStatsIngestStatOptions()
		: ApiVersion(EOS_STATS_INGESTSTAT_API_LATEST){ }
};

/**
 * Data containing the result information for an ingest stat request.
 */
USTRUCT(BlueprintType)
struct FEOSStatsIngestStatCompleteCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Stats_IngestStat. */
		void* ClientData;
	/** The Product User ID for the user requesting the ingest */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** The Product User ID for the user whose stat is being ingested */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSStatsIngestStatCompleteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSStatsIngestStatCompleteCallbackInfo(const EOS_Stats_IngestStatCompleteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
	{}
};

/**
 * Input parameters for the EOS_Stats_QueryStats Function.
 */
USTRUCT(BlueprintType)
struct FEOSStatsQueryStatsOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
		int32 ApiVersion;
public:
	/** The Product User ID of the local user requesting the stats. Set to null for dedicated server. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for start time (Optional). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString StartTime;
	/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for end time (Optional). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString EndTime;
	/** An array of stat names to query for (Optional). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		TArray<FString> StatNames;
	/** The number of stat names included in query (Optional), may not exceed EOS_STATS_MAX_QUERY_STATS. */
		uint32_t StatNamesCount;
	/** The Product User ID for the user whose stats are being retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSStatsQueryStatsOptions()
		: ApiVersion(EOS_STATS_QUERYSTATS_API_LATEST){ }
};

/**
 * Contains information about a single player stat.
 */
USTRUCT(BlueprintType)
struct FEOSStatsStat
{
	GENERATED_BODY()
public:
	/** API Version. */
		int32 ApiVersion;
public:
	/** Name of the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString Name;
	/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for start time. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString StartTime;
	/** If not EOS_STATS_TIME_UNDEFINED then this is the POSIX timestamp for end time. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString EndTime;
	/** Current value for the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 Value;
public:
	explicit FEOSStatsStat()
		: ApiVersion(EOS_STATS_STAT_API_LATEST)
		, Value(0)
		{ }
	FEOSStatsStat(const EOS_Stats_Stat& data)
		: ApiVersion(EOS_STATS_STAT_API_LATEST)
		, Name(data.Name)
		, StartTime(data.StartTime == EOS_STATS_TIME_UNDEFINED ? FString("-1") : LexToString(data.StartTime))
		, EndTime(data.EndTime == EOS_STATS_TIME_UNDEFINED ? FString("-1") : LexToString(data.EndTime))
		, Value(data.Value)
	{}
};

/**
 * Input parameters for the EOS_Stats_GetStatsCount Function.
 */
USTRUCT(BlueprintType)
struct FEOSStatsGetStatCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
		int32 ApiVersion;
public:
	/** The Product User ID for the user whose stats are being counted */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSStatsGetStatCountOptions()
		: ApiVersion(EOS_STATS_GETSTATCOUNT_API_LATEST){ } 
};

/**
 * Input parameters for the EOS_Stats_CopyStatByIndex Function.
 */
USTRUCT(BlueprintType)
struct FEOSStatsCopyStatByIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
		int32 ApiVersion;
public:
	/** The Account ID for the user who is copying the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId TargetUserId;
	/** Index of the stat to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 StatIndex;
public:
	explicit FEOSStatsCopyStatByIndexOptions()
		: ApiVersion(EOS_STATS_COPYSTATBYINDEX_API_LATEST)
		, StatIndex(0)
		{ }
};

/**
 * Input parameters for the EOS_Stats_CopyStatByName Function.
 */
USTRUCT(BlueprintType)
struct FEOSStatsCopyStatByNameOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
		int32 ApiVersion;
public:
	/** The Account ID for the user who is copying the stat. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId TargetUserId;
	/** Name of the stat to retrieve from the cache */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString Name;
public:
	explicit FEOSStatsCopyStatByNameOptions()
		: ApiVersion(EOS_STATS_COPYSTATBYNAME_API_LATEST){ }
}; 

/**
 * Data containing the result information for querying a player's stats request.
 */
USTRUCT(BlueprintType)
struct FEOSStatsOnQueryStatsCompleteCallbackInfo
{
	GENERATED_BODY()
public:
	/** API Version. */
		int32 ApiVersion;
public:
	/** Result code for the operation. EOS_Success is returned for a successful operation, otherwise one of the error codes is returned. See eos_common.h */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Context that was passed into EOS_Stats_QueryStats. */
		void* ClientData;
	/** The Product User ID of the user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** The Product User ID whose stats which were retrieved */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId TargetUserId;
public:
	explicit FEOSStatsOnQueryStatsCompleteCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSStatsOnQueryStatsCompleteCallbackInfo(const EOS_Stats_OnQueryStatsCompleteCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, TargetUserId(data.TargetUserId)
	{}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnStatsIngestStatCompleteCallback, const FEOSStatsIngestStatCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnStatsQueryStatsCompleteCallback, const FEOSStatsOnQueryStatsCompleteCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatsIngestStatCompleteCallbackDelegate, const FEOSStatsIngestStatCompleteCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatsQueryStatsCompleteCallbackDelegate, const FEOSStatsOnQueryStatsCompleteCallbackInfo&, data);

struct FIngestStatCompleteCallback
{
public:
	UCoreStats* StatsObject;
	FOnStatsIngestStatCompleteCallback Callback;
public:
	FIngestStatCompleteCallback(UCoreStats* obj, const FOnStatsIngestStatCompleteCallback& callback)
		: StatsObject(obj)
		, Callback(callback) {}
};

struct FQueryStatsCompleteCallback
{
public:
	UCoreStats* StatsObject;
	FOnStatsQueryStatsCompleteCallback Callback;
public:
	FQueryStatsCompleteCallback(UCoreStats* obj, const FOnStatsQueryStatsCompleteCallback& callback)
		: StatsObject(obj)
		, Callback(callback) {}
};