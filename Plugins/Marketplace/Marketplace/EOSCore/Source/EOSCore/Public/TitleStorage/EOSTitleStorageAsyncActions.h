/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "TitleStorage/EOSTitleStorage.h"
#include "Core/EOSCoreAsync.h"
#include "EOSTitleStorageAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreTitleStorageQueryFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreTitleStorageQueryFile : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnTitleStorageQueryFileCompleteCallbackDelegate OnCallback;
private:
	FOnTitleStorageQueryFileCompleteCallback Callback;
public:
	UEOSCoreTitleStorageQueryFile()
	{
		Callback.BindUFunction(this, "HandleCallback");
	}
	~UEOSCoreTitleStorageQueryFile()
	{
		Callback.Unbind();
	}
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
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|TitleStorage|Async"))
		static UEOSCoreTitleStorageQueryFile* EOSTitleStorageQueryFileAsync(UObject* WorldContextObject, FEOSTitleStorageQueryFileOptions options);
protected:
	FEOSTitleStorageQueryFileOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSTitleStorageQueryFileCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreTitleStorageQueryFileList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreTitleStorageQueryFileList : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnTitleStorageQueryFileListCompleteCallbackDelegate OnCallback;
private:
	FOnTitleStorageQueryFileListCompleteCallback Callback;
public:
	UEOSCoreTitleStorageQueryFileList()
	{
		Callback.BindUFunction(this, "HandleCallback");
	}
	~UEOSCoreTitleStorageQueryFileList()
	{
		Callback.Unbind();
	}
public:
	/**
	 * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files available for current user based on their settings (such as game role) and tags provided.
	 * This is not required before a file can be downloaded by name.
	 *
	 * @param Options Object containing properties related to which user is querying files and the list of tags
	 * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback
	 * @param callback This function is called when the query operation completes
	 *
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|TitleStorage|Async"))
		static UEOSCoreTitleStorageQueryFileList* EOSTitleStorageQueryFileListAsync(UObject* WorldContextObject, FEOSTitleStorageQueryFileListOptions options);
protected:
	FEOSTitleStorageQueryFileListOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSTitleStorageQueryFileListCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreTitleStorageReadFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreTitleStorageReadFile : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnTitleStorageReadFileCompleteCallbackDelegate OnCallback;
private:
	FOnTitleStorageReadFileCompleteCallback Callback;
public:
	UEOSCoreTitleStorageReadFile()
	{
		Callback.BindUFunction(this, "HandleCallback");
	}
	~UEOSCoreTitleStorageReadFile()
	{
		Callback.Unbind();
	}
public:
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
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|TitleStorage|Async"))
		static UEOSCoreTitleStorageReadFile* EOSTitleStorageReadFileAsync(UObject* WorldContextObject, FEOSTitleStorageReadFileOptions options);
protected:
	FEOSTitleStorageReadFileOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
		void HandleCallback(const FEOSTitleStorageReadFileCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCoreTitleStorageDeleteCache
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCoreTitleStorageDeleteCache : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnTitleStorageDeleteCacheCompleteCallbackDelegate OnCallback;
private:
	FOnTitleStorageDeleteCacheCompleteCallback Callback;
public:
	UEOSCoreTitleStorageDeleteCache()
	{
		Callback.BindUFunction(this, "HandleCallback");
	}
	~UEOSCoreTitleStorageDeleteCache()
	{
		Callback.Unbind();
	}
public:
	/**
	 * Clear previously cached file data. This operation will be done asynchronously. All cached files except those corresponding to the transfers in progress will be removed.
	 * Warning: Use this with care. Cache system generally tries to clear old and unused cached files from time to time. Unnecessarily clearing cache can degrade performance as SDK will have to re-download data.
	 *
	 * @param Options Object containing properties related to which user is deleting cache
	 * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks
	 * @param callback This function is called when the delete cache operation completes
	 * @return EOS_Success if the operation was started correctly, otherwise an error result explaining what went wrong
	 */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|TitleStorage|Async"))
		static UEOSCoreTitleStorageDeleteCache* EOSTitleStorageDeleteCacheAsync(UObject* WorldContextObject, FEOSTitleStorageDeleteCacheOptions options);
protected:
	FEOSTitleStorageDeleteCacheOptions Options;
public:
	virtual void Activate() override;
private:
	UFUNCTION()
		void HandleCallback(const FEOSTitleStorageDeleteCacheCallbackInfo& data, bool bWasSuccessful)
	{
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
	}
};