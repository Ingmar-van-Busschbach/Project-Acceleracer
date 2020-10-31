/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Core/EOSHelpers.h"
#include "EOSPlayerDataStorageTypes.generated.h"

class UCorePlayerDataStorage;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

/**
 * Return results for EOS_PlayerDataStorage_OnReadFileDataCallback callbacks to return
 */
UENUM(BlueprintType)
enum class EEOSPlayerDataStorag_EReadResult : uint8
{
	None = 0,
	/** Signifies the data was read successfully, and we should continue to the next chunk if possible */
	EOS_RR_ContinueReading = 1,
	/** Signifies there was a failure reading the data, and the request should end */
	EOS_RR_FailRequest = 2,
	/** Signifies the request should be cancelled, but not due to an error */
	EOS_RR_CancelRequest = 3
};

/**
 * Return results for EOS_PlayerDataStorage_OnWriteFileDataCallback callbacks to return
 */
UENUM(BlueprintType)
enum class EEOSPlayerDataStorageEWriteResult : uint8
{
	None = 0,
	/** Signifies the data was written successfully, and we should write the data the file */
	EOS_WR_ContinueWriting = 1,
	/** Signifies all data has now been written successfully, and we should upload the data to the cloud */
	EOS_WR_CompleteRequest = 2,
	/** Signifies there was a failure writing the data, and the request should end */
	EOS_WR_FailRequest = 3,
	/** Signifies the request should be cancelled, but not due to an error */
	EOS_WR_CancelRequest = 4
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

struct FTransferInProgress
{
public:
	bool bDownload = true;
	size_t TotalSize = 0;
	size_t CurrentIndex = 0;
	TArray<uint8> Data;
	FString LocalFile;
public:
	bool Done() const { return TotalSize == CurrentIndex || TotalSize == 0; }
	void Reset()
	{
		TotalSize = 0;
		CurrentIndex = 0;
		Data.Empty();
		LocalFile.Reset();
	}
};

USTRUCT(BlueprintType)
struct FEOSHPlayerDataStorageFileTransferRequest
{
	GENERATED_BODY()
public:
	EOS_PlayerDataStorageFileTransferRequestHandle* Handle;
public:
	explicit FEOSHPlayerDataStorageFileTransferRequest() 
		: Handle(nullptr) {}
	FEOSHPlayerDataStorageFileTransferRequest(const EOS_HPlayerDataStorageFileTransferRequest& data)
		: Handle(data) {}
public:
	operator EOS_HPlayerDataStorageFileTransferRequest() const { return Handle;}
	operator EOS_HPlayerDataStorageFileTransferRequest() { return Handle;}
};

/**
 * Metadata information for a specific file
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageFileMetadata
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The total size of the file in bytes */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 FileSizeBytes;
	/** The MD5 Hash of the entire file, in hex digits */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString MD5Hash;
	/** The file's name */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
public:
	explicit FEOSPlayerDataStorageFileMetadata()
		: ApiVersion(EOS_PLAYERDATASTORAGE_FILEMETADATA_API_LATEST) 
		, FileSizeBytes(0) {}
	FEOSPlayerDataStorageFileMetadata(const EOS_PlayerDataStorage_FileMetadata& data) 
		: ApiVersion(EOS_PLAYERDATASTORAGE_FILEMETADATA_API_LATEST) 
		, FileSizeBytes(data.FileSizeBytes)
		, MD5Hash(data.MD5Hash)
		, Filename(data.Filename)
		{}
};

/**
 * Input data for the EOS_PlayerDataStorage_QueryFile function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageQueryFileOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user requesting file metadata */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The requested file's name */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
public:
	explicit FEOSPlayerDataStorageQueryFileOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_QUERYFILEOPTIONS_API_LATEST) {}
};

/**
 * Data containing information about a query file request
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageQueryFileCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		EOSResult ResultCode;
	/** Client-specified data passed into the file query request */
		void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSPlayerDataStorageQueryFileCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSPlayerDataStorageQueryFileCallbackInfo(const EOS_PlayerDataStorage_QueryFileCallbackInfo& data) 
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) {}
};

/**
 * Input data for the EOS_PlayerDataStorage_QueryFileList function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageQueryFileListOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who requested file metadata */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSPlayerDataStorageQueryFileListOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_QUERYFILELISTOPTIONS_API_LATEST) {}
};

/**
 * Data containing information about a query file list request
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageQueryFileListCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		EOSResult ResultCode;
	/** Client-specified data passed into the file query request */
		void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** A count of files that were found, if successful */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 FileCount;
public:
	explicit FEOSPlayerDataStorageQueryFileListCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr)
		, FileCount(0)
		{ }
	FEOSPlayerDataStorageQueryFileListCallbackInfo(const EOS_PlayerDataStorage_QueryFileListCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, FileCount(data.FileCount) {}
};

/**
 * Input data for the EOS_PlayerDataStorage_GetFileMetadataCount function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageGetFileMetadataCountOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who is requesting file metadata */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSPlayerDataStorageGetFileMetadataCountOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_GETFILEMETADATACOUNTOPTIONS_API_LATEST) {}
};

/**
 * Input data for the CopyFileMetadataAtIndex function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who is requesting file metadata */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The index to get data for */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 Index;
public:
	explicit FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONS_API_LATEST) 
		, Index(0) {}
};

/**
 * Input data for the CopyFileMetadataByFilename function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who is requesting file metadata */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file's name to get data for */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
public:
	explicit FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_COPYFILEMETADATAATINDEXOPTIONS_API_LATEST) {}
};

/**
 * Input data for the EOS_PlayerDataStorage_DuplicateFile function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageDuplicateFileOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who is duplicating the requested file */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file name of the file to duplicate from */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString SourceFilename;
	/** The file name of the new file */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString DestinationFilename;
public:
	explicit FEOSPlayerDataStorageDuplicateFileOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_DUPLICATEFILEOPTIONS_API_LATEST) {}
};

/**
 * Data containing the result information for a duplicate file request
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageDuplicateFileCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		EOSResult ResultCode;
	/** Client-specified data passed into the file duplicate request */
		void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSPlayerDataStorageDuplicateFileCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSPlayerDataStorageDuplicateFileCallbackInfo(const EOS_PlayerDataStorage_DuplicateFileCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) {}
};

/**
 * Input data for the EOS_PlayerDataStorage_DeleteFile function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageDeleteFileOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who is deleting and owns the requested file */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file name to be deleted */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
public:
	explicit FEOSPlayerDataStorageDeleteFileOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_DELETEFILEOPTIONS_API_LATEST) {}
};

/**
 * Data containing the result information for a delete file request
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageDeleteFileCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		EOSResult ResultCode;
	/** Client-specified data passed into the file deletion request */
	void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
public:
	explicit FEOSPlayerDataStorageDeleteFileCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSPlayerDataStorageDeleteFileCallbackInfo(const EOS_PlayerDataStorage_DeleteFileCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) {}
};

/**
 * Data containing the information about a file transfer in progress (or one that has completed)
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageFileTransferProgressCallbackInfo
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into the file request */
	void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file name of the file being transferred */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
	/** Amount of bytes transferred so far in this request, out of TotalFileSizeBytes */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 BytesTransferred;
	/** The total size of the file being transferred */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 TotalFileSizeBytes;
public:
	explicit FEOSPlayerDataStorageFileTransferProgressCallbackInfo()
        : ClientData(nullptr)
		, BytesTransferred(0)
		, TotalFileSizeBytes(0) { }
	FEOSPlayerDataStorageFileTransferProgressCallbackInfo(const EOS_PlayerDataStorage_FileTransferProgressCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, Filename(data.Filename)
		, BytesTransferred(data.BytesTransferred)
		, TotalFileSizeBytes(data.TotalFileSizeBytes) {}
};

/**
 * Data containing data for a chunk of a file being read
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageReadFileDataCallbackInfo
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into the file request */
		void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file name being read */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
	/** The total file size of the file being read */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 TotalFileSizeBytes;
	/** Is this chunk the last chunk of data? */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		bool bIsLastChunk;
	/** The length of DataChunk in bytes that can be safely read */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 DataChunkLengthBytes;
	/** Pointer to the start of data to be read */
	const void* DataChunk;
public:
	explicit FEOSPlayerDataStorageReadFileDataCallbackInfo()
        : ClientData(nullptr)
		, TotalFileSizeBytes(0)
		, bIsLastChunk(false)
		, DataChunkLengthBytes(0)
		, DataChunk(nullptr) { }
	FEOSPlayerDataStorageReadFileDataCallbackInfo(const EOS_PlayerDataStorage_ReadFileDataCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, Filename(data.Filename)
		, TotalFileSizeBytes(data.TotalFileSizeBytes)
		, bIsLastChunk((data.bIsLastChunk>0))
		, DataChunkLengthBytes(data.DataChunkLengthBytes)
		, DataChunk(data.DataChunk)
		{}
};

/**
 * Input data for the EOS_PlayerDataStorage_ReadFile function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageReadFileOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who is reading the requested file */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/* Absolute path to the local file we want to download to, eg C:/tmp/MyData.sav */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString LocalFile;
	/* Location of the file on the EOS network, eg SaveData/MyData.sav */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString RemoteFile;
	/** The maximum amount of data in bytes should be available to read in a single EOS_PlayerDataStorage_OnReadFileDataCallback call */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 ReadChunkLengthBytes;

	/** Callback function to handle copying read data */
	EOS_PlayerDataStorage_OnReadFileDataCallback ReadFileDataCallback;
	/** Optional callback function to be informed of download progress, if the file is not already locally cached. If set, this will be called at least once before completion if the request is successfully started */
	EOS_PlayerDataStorage_OnFileTransferProgressCallback FileTransferProgressCallback;
public:
	explicit FEOSPlayerDataStorageReadFileOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_READFILEOPTIONS_API_LATEST)
		, ReadChunkLengthBytes(4096)
		{}
};

/**
 * Data containing the result of a read file request
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageReadFileCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		EOSResult ResultCode;
	/** Client-specified data passed into the file read request */
		void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The filename of the file that has been finished reading */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSHPlayerDataStorageFileTransferRequest Handle;
public:
	explicit FEOSPlayerDataStorageReadFileCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSPlayerDataStorageReadFileCallbackInfo(const EOS_PlayerDataStorage_ReadFileCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) 
		, Filename(data.Filename)
		{}
};

/**
 * Data containing data for a chunk of a file being written
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageWriteFileDataCallbackInfo
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into the file write request */
		void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file name that is being written to */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
	/** The maximum amount of data in bytes that can be written safely to DataBuffer */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 DataBufferLengthBytes;
public:
	explicit FEOSPlayerDataStorageWriteFileDataCallbackInfo()
        : ClientData(nullptr)
		, DataBufferLengthBytes(0) { }
	FEOSPlayerDataStorageWriteFileDataCallbackInfo(const EOS_PlayerDataStorage_WriteFileDataCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) 
		, Filename(data.Filename)
		, DataBufferLengthBytes(data.DataBufferLengthBytes)
		{}
};

/**
 * Input data for the EOS_PlayerDataStorage_WriteFile function
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageWriteFileOptions
{
	GENERATED_BODY()
public:
	/** API Version. */
	int32 ApiVersion;
public:
	/** The Account ID of the local user who is writing the requested file */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/* Absolute path to the local file we want to upload, eg C:/tmp/MyData.sav */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString LocalFile;
	/* Location of the file on the EOS network, eg SaveData/MyData.sav */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString RemoteFile;
	/** Requested maximum amount of data in bytes that can be written to the file per tick */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 ChunkLengthBytes;

	/** Callback function to handle copying data into the DataBuffer to be written into the requested file */
	EOS_PlayerDataStorage_OnWriteFileDataCallback WriteFileDataCallback;
	/** Optional callback function to be informed of upload progress, if any */
	EOS_PlayerDataStorage_OnFileTransferProgressCallback FileTransferProgressCallback;
public:
	explicit FEOSPlayerDataStorageWriteFileOptions()
		: ApiVersion(EOS_PLAYERDATASTORAGE_WRITEFILEOPTIONS_API_LATEST)
		, ChunkLengthBytes(4096)
		{}
};

/**
 * The result information for a request to write data to a file
 */
USTRUCT(BlueprintType)
struct FEOSPlayerDataStorageWriteFileCallbackInfo
{
	GENERATED_BODY()
public:
	/** Result code for the operation. EOS_Success is returned for a successful request, other codes indicate an error */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		EOSResult ResultCode;
	/** Client-specified data passed into the file write request */
		void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file name that is being written to */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSHPlayerDataStorageFileTransferRequest Handle;
public:
	explicit FEOSPlayerDataStorageWriteFileCallbackInfo()
        : ResultCode(EOSResult::EOS_ServiceFailure)
        , ClientData(nullptr){ }
	FEOSPlayerDataStorageWriteFileCallbackInfo(const EOS_PlayerDataStorage_WriteFileCallbackInfo& data)
		: ResultCode(EOSHelpers::ToEOSCoreResult(data.ResultCode))
		, ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId) 
		, Filename(data.Filename)
		{}
};

USTRUCT(BlueprintType)
struct FEOSOnFileTransferProgressUpdated
{
	GENERATED_BODY()
public:
	/** Client-specified data passed into the file request */
	void* ClientData;
	/** The Account ID of the local user who initiated this request */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSProductUserId LocalUserId;
	/** The file name of the file being transferred */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FString Filename;
	/** Amount of bytes transferred so far in this request, out of TotalFileSizeBytes */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 BytesTransferred;
	/** The total size of the file being transferred */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		int32 TotalFileSizeBytes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PlayerDataStorage")
		FEOSHPlayerDataStorageFileTransferRequest Handle;
public:
	explicit FEOSOnFileTransferProgressUpdated()
        : ClientData(nullptr)
		, BytesTransferred(0)
		, TotalFileSizeBytes(0) {}
	FEOSOnFileTransferProgressUpdated(const EOS_PlayerDataStorage_FileTransferProgressCallbackInfo& data)
		: ClientData(data.ClientData)
		, LocalUserId(data.LocalUserId)
		, Filename(data.Filename)
		, BytesTransferred(data.BytesTransferred)
		, TotalFileSizeBytes(data.TotalFileSizeBytes) 
		{}
};

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryFileCompleteCallback, const FEOSPlayerDataStorageQueryFileCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnQueryFileListCompleteCallback, const FEOSPlayerDataStorageQueryFileListCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDuplicateFileCompleteCallback, const FEOSPlayerDataStorageDuplicateFileCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnDeleteFileCompleteCallback, const FEOSPlayerDataStorageDeleteFileCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFileTransferProgressCallback, const FEOSPlayerDataStorageFileTransferProgressCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnReadFileCompleteCallback, const FEOSPlayerDataStorageReadFileCallbackInfo&, data);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnWriteFileCompleteCallback, const FEOSPlayerDataStorageWriteFileCallbackInfo&, data);

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnFileTransferProgressUpdated, const FEOSOnFileTransferProgressUpdated&, data);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryFileCompleteCallbackDelegate, const FEOSPlayerDataStorageQueryFileCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQueryFileListCompleteCallbackDelegate, const FEOSPlayerDataStorageQueryFileListCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDuplicateFileCompleteCallbackDelegate, const FEOSPlayerDataStorageDuplicateFileCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeleteFileCompleteCallbackDelegate, const FEOSPlayerDataStorageDeleteFileCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileTransferProgressCallbackDelegate, const FEOSPlayerDataStorageFileTransferProgressCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadFileCompleteCallbackDelegate, const FEOSPlayerDataStorageReadFileCallbackInfo&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWriteFileCompleteCallbackDelegate, const FEOSPlayerDataStorageWriteFileCallbackInfo&, data);

struct FFileCompleteCallback
{
public:
	UCorePlayerDataStorage* PlayerDataStorageObject;
	FOnQueryFileCompleteCallback Callback;
public:
	FFileCompleteCallback(UCorePlayerDataStorage* obj, const FOnQueryFileCompleteCallback& callback)
		: PlayerDataStorageObject(obj)
		, Callback(callback) {}
};

struct FFileListCompleteCallback
{
public:
	UCorePlayerDataStorage* PlayerDataStorageObject;
	FOnQueryFileListCompleteCallback Callback;
public:
	FFileListCompleteCallback(UCorePlayerDataStorage* obj, const FOnQueryFileListCompleteCallback& callback)
		: PlayerDataStorageObject(obj)
		, Callback(callback) {}
};

struct FDuplicateFileCompleteCallback
{
public:
	UCorePlayerDataStorage* PlayerDataStorageObject;
	FOnDuplicateFileCompleteCallback Callback;
public:
	FDuplicateFileCompleteCallback(UCorePlayerDataStorage* obj, const FOnDuplicateFileCompleteCallback& callback)
		: PlayerDataStorageObject(obj)
		, Callback(callback) {}
};

struct FDeleteFileCompleteCallback
{
public:
	UCorePlayerDataStorage* PlayerDataStorageObject;
	FOnDeleteFileCompleteCallback Callback;
public:
	FDeleteFileCompleteCallback(UCorePlayerDataStorage* obj, const FOnDeleteFileCompleteCallback& callback)
		: PlayerDataStorageObject(obj)
		, Callback(callback) {}
};

struct FReadFileCompleteCallback
{
public:
	UCorePlayerDataStorage* PlayerDataStorageObject;
	FOnReadFileCompleteCallback Callback;
public:
	FReadFileCompleteCallback(UCorePlayerDataStorage* obj, const FOnReadFileCompleteCallback& callback)
		: PlayerDataStorageObject(obj)
		, Callback(callback) {}
};

struct FWriteFileCompleteCallback
{
public:
	UCorePlayerDataStorage* PlayerDataStorageObject;
	FOnWriteFileCompleteCallback Callback;
public:
	FWriteFileCompleteCallback(UCorePlayerDataStorage* obj, const FOnWriteFileCompleteCallback& callback)
		: PlayerDataStorageObject(obj)
		, Callback(callback) {}
};