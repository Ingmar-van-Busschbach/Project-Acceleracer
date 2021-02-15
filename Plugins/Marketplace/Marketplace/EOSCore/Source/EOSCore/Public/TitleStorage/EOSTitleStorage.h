/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "EOSTitleStorageTypes.h"
#include "EOSTitleStorage.generated.h"

/**
 * The following EOSTitleStorage* functions allow you to query metadata for available files from title storage as well as download and read their contents.
 */

struct FTitleStorageTransferInProgress
{
public:
	bool bDownload = true;
	size_t TotalSize = 0;
	size_t CurrentIndex = 0;
	TArray<uint8> Data;
	FString LocalFile;
	EOS_HTitleStorageFileTransferRequest CurrentTransferHandle = nullptr;
public:
	bool Done() const
	{
		return TotalSize == CurrentIndex || TotalSize == 0;
	}
	void Reset()
	{
		TotalSize = 0;
		CurrentIndex = 0;
		Data.Empty();
		LocalFile.Reset();
		EOS_TitleStorageFileTransferRequest_Release(CurrentTransferHandle);
	}
};

UCLASS()
class EOSCORE_API UCoreTitleStorage : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
	UCoreTitleStorage();
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|TitleStorage|Delegates")
		FOnTitleStorageQueryFileCompleteCallbackDelegate OnTitleStorageQueryFileCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|TitleStorage|Delegates")
		FOnTitleStorageQueryFileListCompleteCallbackDelegate OnTitleStorageQueryFileListCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|TitleStorage|Delegates")
		FOnTitleStorageFileTransferProgressCallbackDelegate OnTitleStorageFileTransferProgressCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|TitleStorage|Delegates")
		FOnTitleStorageReadFileCompleteCallbackDelegate OnTitleStorageReadFileCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|TitleStorage|Delegates")
		FOnTitleStorageDeleteCacheCompleteCallbackDelegate OnTitleStorageDeleteCacheCompleteCallbackDelegate;
public:
	/**
	 * The following EOSTitleStorage* functions allow you to query metadata for available files from title storage as well as download and read their contents.
	 */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreTitleStorage* GetTitleStorage() { return TitleStorageObject; }
public:
	/**
	 * Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened. Once a file has
	 * been queried, its metadata will be available by the EOSTitleStorageCopyFileMetadataAtIndex and EOSTitleStorageCopyFileMetadataByFilename functions.
	 *
	 * @param Options Object containing properties related to which user is querying files, and what file is being queried
	 * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback
	 * @param callback This function is called when the query operation completes
	 *
	 * @see EOSTitleStorageGetFileMetadataCount
	 * @see EOSTitleStorageCopyFileMetadataAtIndex
	 * @see EOSTitleStorageCopyFileMetadataByFilename
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		void EOSTitleStorageQueryFile(const FEOSTitleStorageQueryFileOptions options, const FOnTitleStorageQueryFileCompleteCallback& callback);

	/**
	 * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files available for current user based on their settings (such as game role) and tags provided.
	 * This is not required before a file can be downloaded by name.
	 *
	 * @param Options Object containing properties related to which user is querying files and the list of tags
	 * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback
	 * @param callback This function is called when the query operation completes
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		void EOSTitleStorageQueryFileList(const FEOSTitleStorageQueryFileListOptions Options, const FOnTitleStorageQueryFileListCompleteCallback& callback);

	/**
	 * Create a cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not
	 * completed writing. The returned pointer must be released by the user when no longer needed.
	 *
		 * @param Options Object containing properties related to which user is requesting metadata, and for which filename
	 * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOSTitleStorageFileMetadata_Release.
	 * @return EOS_Success if the metadata is currently cached, otherwise an error result explaining what went wrong
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		static EOSResult EOSTitleStorageCopyFileMetadataByFilename(const FEOSTitleStorageCopyFileMetadataByFilenameOptions options, FEOSTitleStorageFileMetadata& outMetadata);

	/**
	 * Get the count of files we have previously queried information for and files we have previously read from / written to.
	 *
	 * @param Options Object containing properties related to which user is requesting the metadata count
	 * @return If successful, the count of metadata currently cached. Returns 0 on failure.
	 *
	 * @see EOSTitleStorageCopyFileMetadataAtIndex
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		static int32 EOSTitleStorageGetFileMetadataCount(const FEOSTitleStorageGetFileMetadataCountOptions options);

	/**
	 * Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved version. The returned pointer must be released by the user when no longer needed.
	 *
	 * @param Options Object containing properties related to which user is requesting metadata, and at what index
	 * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOSTitleStorageFileMetadata_Release.
	 * @return EOS_Success if the requested metadata is currently cached, otherwise an error result explaining what went wrong.
	 *
	 * @see EOSTitleStorageGetFileMetadataCount
	 * @see EOSTitleStorageFileMetadata_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		static EOSResult EOSTitleStorageCopyFileMetadataAtIndex(FEOSTitleStorageCopyFileMetadataAtIndexOptions options, FEOSTitleStorageFileMetadata& outMetadata);

	/**
	 * Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over
	 * multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at
	 * least once if the request is started successfully.
	 *
	 * @param Options Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data
	 * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks
	 * @param callback This function is called when the read operation completes
	 * @return A valid Title Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed
	 *
	 * @see EOS_TitleStorageFileTransferRequest_Release
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		FEOSTitleStorageFileTransferRequestHandle EOSTitleStorageReadFile(FEOSTitleStorageReadFileOptions options, const FOnTitleStorageReadFileCompleteCallback& callback);

	/**
	 * Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed.
	 * Warning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data.
	 *
	 * @param Options Object containing properties related to which user is deleting cache
	 * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks
	 * @param callback This function is called when the delete cache operation completes
	 * @return EOS_Success if the operation was started correctly, otherwise an error result explaining what went wrong
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		EOSResult EOSTitleStorageDeleteCache(FEOSTitleStorageDeleteCacheOptions options, const FOnTitleStorageDeleteCacheCompleteCallback& callback);

	/**
	 * Below are helper functions to retrieve information about a file request handle, or to attempt to cancel a request in progress.
	 */

	 /**
	  * Get the current state of a file request.
	  *
	  * @return EOS_Success if complete and successful, EOS_RequestInProgress if the request is still in progress, or another state for failure.
	  */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		static EOSResult EOSTitleStorageFileTransferRequestGetFileRequestState(FEOSTitleStorageFileTransferRequestHandle handle);

	/**
	 * Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL.
	 *
	 * @param FilenameStringBufferSizeBytes The maximum number of bytes that can be written to OutStringBuffer
	 * @param OutStringBuffer The buffer to write the NULL-terminated utf8 file name into, if successful
	 * @return EOS_Success if the file name was successfully written to OutFilenameBuffer, a failure result otherwise
	 *
	 * @see EOSTitleStorageFILENAME_MAX_LENGTH_BYTES
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		static EOSResult EOSTitleStorageFileTransferRequestGetFilename(FEOSTitleStorageFileTransferRequestHandle handle, int32 filenameStringBufferSizeBytes, FString& outStringBuffer);

	/**
	 * Attempt to cancel this file request in progress. This is a best-effort command and is not guaranteed to be successful if the request has completed before this function is called.
	 *
	 * @return EOS_Success if successful or already canceled, or EOS_NoChange if request is not cancelable.
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|TitleStorage")
		static EOSResult EOSTitleStorageFileTransferRequestCancelRequest(FEOSTitleStorageFileTransferRequestHandle handle);
private:
	static void Internal_OnTitleStorageQueryFileCallback(const EOS_TitleStorage_QueryFileCallbackInfo* data);
	static void Internal_OnTitleStorageQueryFileListCallback(const EOS_TitleStorage_QueryFileListCallbackInfo* data);
	static void Internal_OnTitleStorageDeleteCacheCallback(const EOS_TitleStorage_DeleteCacheCallbackInfo* data);
	static void Internal_OnTitleStorageReadFileCallback(const EOS_TitleStorage_ReadFileCallbackInfo* data);
private:
	/**
	 * Callback for when we have data ready to be read from the requested file. It is undefined how often this will be called during a single tick.
	 *
	 * @param EOS_TitleStorage_ReadFileDataCallbackInfo Struct containing a chunk of data to read, as well as some metadata for the file being read
	 * @return The result of the read operation. If this value is not EOS_TS_RR_ContinueReading, this callback will not be called again for the same request
	 */
	static EOS_TitleStorage_EReadResult OnReadFileDataCallback(const EOS_TitleStorage_ReadFileDataCallbackInfo* data);
	static void OnFileTransferProgressCallback(const EOS_TitleStorage_FileTransferProgressCallbackInfo* data);
	EOS_TitleStorage_EReadResult ReceiveData(const FString& filename, const void* data, size_t numBytes, size_t totalSize);
private:
    static UCoreTitleStorage* TitleStorageObject;
	static FTitleStorageTransferInProgress CurrentRead;
};
