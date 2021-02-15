/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Core/EOSHelpers.h"
#include "eos_titlestorage_types.h"
#include "EOSTitleStorageTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 * Return results for EOS_TitleStorage_OnReadFileDataCallback callbacks
 */
UENUM(BlueprintType)
enum class EEOSTitleStorageEReadResult : uint8
{
	NONE = 0,
	/** Signifies the data was read successfully, and we should continue to the next chunk if possible */
	EOS_TS_RR_ContinueReading = 1,
	/** Signifies there was a failure reading the data, and the request should end */
	EOS_TS_RR_FailRequest = 2,
	/** Signifies the request should be cancelled, but not due to an error */
	EOS_TS_RR_CancelRequest = 3
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 * Metadata information for a specific file
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageFileMetadata
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
		/** The total size of the file in bytes (Includes file header in addition to file contents). */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		int32 FileSizeBytes;
	/** The MD5 Hash of the entire file (including additional file header), in hex digits */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FString MD5Hash;
	/** The file's name */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FString Filename;
public:
	explicit FEOSTitleStorageFileMetadata()
		: ApiVersion(EOS_TITLESTORAGE_FILEMETADATA_API_LATEST)
		, FileSizeBytes(0)
		{ }
	FEOSTitleStorageFileMetadata(const EOS_TitleStorage_FileMetadata& data)
		: ApiVersion(EOS_TITLESTORAGE_FILEMETADATA_API_LATEST)
		, FileSizeBytes(data.FileSizeBytes)
		, MD5Hash(UTF8_TO_TCHAR(data.MD5Hash))
		, Filename(UTF8_TO_TCHAR(data.Filename))
	{}
};

/**
 * Input data for the EOS_TitleStorage_QueryFile function
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageQueryFileOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product User ID of the local user requesting file metadata (optional) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FEOSProductUserId LocalUserId;
	/** The requested file's name */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FString Filename;
public:
	explicit FEOSTitleStorageQueryFileOptions()
		: ApiVersion(EOS_TITLESTORAGE_QUERYFILEOPTIONS_API_LATEST)
	{}
	FEOSTitleStorageQueryFileOptions(const EOS_TitleStorage_QueryFileOptions& data)
		: ApiVersion(EOS_TITLESTORAGE_QUERYFILEOPTIONS_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, Filename(UTF8_TO_TCHAR(data.Filename))
	{}
};

/**
 * Structure containing information about a query file request
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageQueryFileCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Client-specified data passed into the file query request */
		void* ClientData;
	/** Product User ID of the local user who initiated this request (optional, will only be present in case it was provided during operation start) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSTitleStorageQueryFileCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr)
	{}
	FEOSTitleStorageQueryFileCallbackInfo(const EOS_TitleStorage_QueryFileCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Input data for the EOS_TitleStorage_QueryFileList function
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageQueryFileListOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product User ID of the local user who requested file metadata (optional) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FEOSProductUserId LocalUserId;
	/** List of tags to use for lookup. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		TArray<FString> ListOfTags;
public:
	explicit FEOSTitleStorageQueryFileListOptions()
		: ApiVersion(EOS_TITLESTORAGE_QUERYFILELISTOPTIONS_API_LATEST) {}
};

/**
 * Structure containing information about a query file list request
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageQueryFileListCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Client-specified data passed into the file query request */
		void* ClientData;
	/** Product User ID of the local user who initiated this request (optional, will only be present in case it was provided during operation start) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** A count of files that were found, if successful */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 FileCount;
public:
	explicit FEOSTitleStorageQueryFileListCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr)
		, FileCount(0)
	{}
	FEOSTitleStorageQueryFileListCallbackInfo(const EOS_TitleStorage_QueryFileListCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, FileCount(data.FileCount)
	{}
};

/**
 * Input data for the EOS_TitleStorage_GetFileMetadataCount function
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageGetFileMetadataCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product User ID of the local user who is requesting file metadata (optional) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSTitleStorageGetFileMetadataCountOptions()
		: ApiVersion(EOS_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS_API_LATEST)
	{}
	FEOSTitleStorageGetFileMetadataCountOptions(const EOS_TitleStorage_GetFileMetadataCountOptions& data)
		: ApiVersion(EOS_TITLESTORAGE_GETFILEMETADATACOUNTOPTIONS_API_LATEST)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Input data for the CopyFileMetadataAtIndex function
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageCopyFileMetadataAtIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product User ID of the local user who is requesting file metadata (optional) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FEOSProductUserId LocalUserId;
	/** The index to get data for */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		int32 Index;
public:
	explicit FEOSTitleStorageCopyFileMetadataAtIndexOptions()
		: ApiVersion(EOS_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_API_LATEST)
	{}
	FEOSTitleStorageCopyFileMetadataAtIndexOptions(const EOS_TitleStorage_CopyFileMetadataAtIndexOptions& data)
		: ApiVersion(EOS_TITLESTORAGE_COPYFILEMETADATAATINDEXOPTIONS_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, Index(data.Index)
	{}
};

/**
 * Input data for the CopyFileMetadataByFilename function
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageCopyFileMetadataByFilenameOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product User ID of the local user who is requesting file metadata (optional) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FEOSProductUserId LocalUserId;
	/** The file's name to get data for */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FString Filename;
public:
	explicit FEOSTitleStorageCopyFileMetadataByFilenameOptions()
		: ApiVersion(EOS_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_API_LATEST)
	{}
	FEOSTitleStorageCopyFileMetadataByFilenameOptions(const EOS_TitleStorage_CopyFileMetadataByFilenameOptions& data)
		: ApiVersion(EOS_TITLESTORAGE_COPYFILEMETADATABYFILENAMEOPTIONS_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, Filename(UTF8_TO_TCHAR(data.Filename))
	{}
};

USTRUCT(BlueprintType)
struct FEOSTitleStorageFileTransferProgressCallbackInfo
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into the file request */
		void* ClientData;
	/** Product User ID of the local user who initiated this request (optional, will only be present in case it was provided during operation start) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** The file name of the file being transferred */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString Filename;
	/** Amount of bytes transferred so far in this request, out of TotalFileSizeBytes */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 BytesTransferred;
	/** The total size of the file being transferred (Includes file header in addition to file contents, can be slightly more than expected) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 TotalFileSizeBytes;
public:
	explicit FEOSTitleStorageFileTransferProgressCallbackInfo()
		: ClientData(nullptr)
	{}
	FEOSTitleStorageFileTransferProgressCallbackInfo(const EOS_TitleStorage_FileTransferProgressCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, Filename(UTF8_TO_TCHAR(data.Filename))
		, BytesTransferred(data.BytesTransferred)
		, TotalFileSizeBytes(data.TotalFileSizeBytes)
	{}
};

/**
 * Structure containing data for a chunk of a file being read
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageReadFileDataCallbackInfo
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into the file request */
		void* ClientData;
	/** Product User ID of the local user who initiated this request (optional, will only be present in case it was provided during operation start) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** The file name being read */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString Filename;
	/** The total file size of the file being read */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 TotalFileSizeBytes;
	/** Is this chunk the last chunk of data? */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		bool bIsLastChunk;
	/** The length of DataChunk in bytes that can be safely read */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		int32 DataChunkLengthBytes;
	/** Pointer to the start of data to be read */
	const void* DataChunk;
public:
	explicit FEOSTitleStorageReadFileDataCallbackInfo()
		: ClientData(nullptr)
	{}
	FEOSTitleStorageReadFileDataCallbackInfo(const EOS_TitleStorage_ReadFileDataCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, Filename(UTF8_TO_TCHAR(data.Filename))
		, TotalFileSizeBytes(data.TotalFileSizeBytes)
		, bIsLastChunk((data.bIsLastChunk > 0))
		, DataChunkLengthBytes(data.DataChunkLengthBytes)
		, DataChunk(data.DataChunk)
	{}
};

/**
 * Input data for the EOS_TitleStorage_ReadFile function
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageReadFileOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product User ID of the local user who is reading the requested file (optional) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FEOSProductUserId LocalUserId;
	/** The file name to read; this file must already exist */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FString Filename;
	/* Full path to our local file that will be written to as we download the Title Storage File, c:\temp.txt */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FString SaveFileName;
	
	/** Callback function to handle copying read data */
	EOS_TitleStorage_OnReadFileDataCallback ReadFileDataCallback;
	/** Optional callback function to be informed of download progress, if the file is not already locally cached. If set, this will be called at least once before completion if the request is successfully started */
	EOS_TitleStorage_OnFileTransferProgressCallback FileTransferProgressCallback;
public:
	explicit FEOSTitleStorageReadFileOptions()
		: ApiVersion(EOS_TITLESTORAGE_READFILEOPTIONS_API_LATEST)
	{}
	FEOSTitleStorageReadFileOptions(const EOS_TitleStorage_ReadFileOptions& data)
		: ApiVersion(EOS_TITLESTORAGE_READFILEOPTIONS_API_LATEST)
		, LocalUserId(data.LocalUserId)
		, Filename(UTF8_TO_TCHAR(data.Filename))
	{}
};

/**
 * Structure containing the result of a read file request
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageReadFileCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Client-specified data passed into the file read request */
		void* ClientData;
	/** Product User ID of the local user who initiated this request (optional, will only be present in case it was provided during operation start) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
	/** The filename of the file that has been finished reading */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FString Filename;
public:
	explicit FEOSTitleStorageReadFileCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr)
	{}
	FEOSTitleStorageReadFileCallbackInfo(const EOS_TitleStorage_ReadFileCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, Filename(UTF8_TO_TCHAR(data.Filename))
	{}
};

/**
 * Input data for the EOS_TitleStorage_DeleteCache function
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageDeleteCacheOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** Product User ID of the local user who is deleting his cache (optional) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TitleStorage")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSTitleStorageDeleteCacheOptions()
		: ApiVersion(EOS_TITLESTORAGE_DELETECACHEOPTIONS_API_LATEST)
	{}
	FEOSTitleStorageDeleteCacheOptions(const EOS_TitleStorage_DeleteCacheOptions& data)
		: ApiVersion(EOS_TITLESTORAGE_DELETECACHEOPTIONS_API_LATEST)
		, LocalUserId(data.LocalUserId)
	{}
};

/**
 * Structure containing the result of a delete cache operation
 */
USTRUCT(BlueprintType)
struct FEOSTitleStorageDeleteCacheCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		EOSResult ResultCode;
	/** Client-specified data passed into the delete cache request */
	void* ClientData;
	/** Product User ID of the local user who initiated this request (optional, will only be present in case it was provided during operation start) */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stats")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSTitleStorageDeleteCacheCallbackInfo()
		: ResultCode(EOSResult::EOS_ServiceFailure)
		, ClientData(nullptr)
	{}
	FEOSTitleStorageDeleteCacheCallbackInfo(const EOS_TitleStorage_DeleteCacheCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
	{}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegates
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTitleStorageQueryFileCompleteCallback, const FEOSTitleStorageQueryFileCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTitleStorageQueryFileListCompleteCallback, const FEOSTitleStorageQueryFileListCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTitleStorageFileTransferProgressCallback, const FEOSTitleStorageFileTransferProgressCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTitleStorageReadFileCompleteCallback, const FEOSTitleStorageReadFileCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnTitleStorageDeleteCacheCompleteCallback, const FEOSTitleStorageDeleteCacheCallbackInfo&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTitleStorageQueryFileCompleteCallbackDelegate, const FEOSTitleStorageQueryFileCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTitleStorageQueryFileListCompleteCallbackDelegate, const FEOSTitleStorageQueryFileListCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTitleStorageFileTransferProgressCallbackDelegate, const FEOSTitleStorageFileTransferProgressCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTitleStorageReadFileCompleteCallbackDelegate, const FEOSTitleStorageReadFileCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTitleStorageDeleteCacheCompleteCallbackDelegate, const FEOSTitleStorageDeleteCacheCallbackInfo&, data);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		ClientData Objects
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

struct FQueryFileOptionsCallback
{
public:
	class UCoreTitleStorage* TitleStorageObject;
	FOnTitleStorageQueryFileCompleteCallback Callback;
public:
	FQueryFileOptionsCallback(class UCoreTitleStorage* obj, const FOnTitleStorageQueryFileCompleteCallback& callback)
		: TitleStorageObject(obj)
		, Callback(callback)
	{
	}
};

struct FQueryFileListOptionsCallback
{
public:
	class UCoreTitleStorage* TitleStorageObject;
	FOnTitleStorageQueryFileListCompleteCallback Callback;
public:
	FQueryFileListOptionsCallback(class UCoreTitleStorage* obj, const FOnTitleStorageQueryFileListCompleteCallback& callback)
		: TitleStorageObject(obj)
		, Callback(callback)
	{
	}
};

struct FDeleteCacheCallback
{
public:
	class UCoreTitleStorage* TitleStorageObject;
	FOnTitleStorageDeleteCacheCompleteCallback Callback;
public:
	FDeleteCacheCallback(class UCoreTitleStorage* obj, const FOnTitleStorageDeleteCacheCompleteCallback& callback)
		: TitleStorageObject(obj)
		, Callback(callback)
	{
	}
};

struct FReadFileCallback
{
public:
	class UCoreTitleStorage* TitleStorageObject;
	FOnTitleStorageReadFileCompleteCallback Callback;
public:
	FReadFileCallback(class UCoreTitleStorage* obj, const FOnTitleStorageReadFileCompleteCallback& callback)
		: TitleStorageObject(obj)
		, Callback(callback)
	{
	}
};