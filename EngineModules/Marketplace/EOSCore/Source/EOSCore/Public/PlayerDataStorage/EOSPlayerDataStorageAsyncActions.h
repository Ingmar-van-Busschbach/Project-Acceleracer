/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "PlayerDataStorage/EOSPlayerDataStorageTypes.h"
#include "Core/EOSCoreAsync.h"
#include "EOSPlayerDataStorageAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePlayerDataStorageQueryFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePlayerDataStorageQueryFile : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryFileCompleteCallbackDelegate OnCallback;
private:
    FOnQueryFileCompleteCallback Callback;
public:
    UEOSCorePlayerDataStorageQueryFile() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCorePlayerDataStorageQueryFile() { Callback.Unbind(); }
public:
    /**
    * Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened, saved, copied, or deleted. Once a file has
    * been queried, its metadata will be available by the EOS_PlayerDataStorage_CopyFileMetadataAtIndex and EOS_PlayerDataStorage_CopyFileMetadataByFilename functions.
    *
    * @param Options Object containing properties related to which user is querying files, and what file is being queried
    * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback
    * @param callback This function is called when the query operation completes
    *
    * @see EOS_PlayerDataStorage_GetFileMetadataCount
    * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex
    * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename
    */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|PlayerDataStorage|Async"))
		static UEOSCorePlayerDataStorageQueryFile* EOSPlayerDataStorageQueryFileAsync(UObject* WorldContextObject, FEOSPlayerDataStorageQueryFileOptions options);
protected:
    FEOSPlayerDataStorageQueryFileOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSPlayerDataStorageQueryFileCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePlayerDataStorageQueryFileList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePlayerDataStorageQueryFileList : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnQueryFileListCompleteCallbackDelegate OnCallback;
private:
    FOnQueryFileListCompleteCallback Callback;
public:
    UEOSCorePlayerDataStorageQueryFileList() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCorePlayerDataStorageQueryFileList() { Callback.Unbind(); }
public:
    /**
     * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened,
     * saved, copied, or deleted.
     *
     * @param Options Object containing properties related to which user is querying files
     * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback
     * @param callback This function is called when the query operation completes
     *
     * @see EOS_PlayerDataStorage_GetFileMetadataCount
     * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex
     * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|PlayerDataStorage|Async"))
		static UEOSCorePlayerDataStorageQueryFileList* EOSPlayerDataStorageQueryFileListAsync(UObject* WorldContextObject, FEOSPlayerDataStorageQueryFileListOptions options);
protected:
    FEOSPlayerDataStorageQueryFileListOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSPlayerDataStorageQueryFileListCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePlayerDataStorageDuplicateFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePlayerDataStorageDuplicateFile : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnDuplicateFileCompleteCallbackDelegate OnCallback;
private:
    FOnDuplicateFileCompleteCallback Callback;
public:
    UEOSCorePlayerDataStorageDuplicateFile() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCorePlayerDataStorageDuplicateFile() { Callback.Unbind(); }
public:
    /**
     * Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This
     * function paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache.
     *
     * @param DuplicateOptions Object containing properties related to which user is duplicating the file, and what the source and destination file names are
     * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback
     * @param callback This function is called when the duplicate operation completes
     *
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|PlayerDataStorage|Async"))
		static UEOSCorePlayerDataStorageDuplicateFile* EOSPlayerDataStorageDuplicateFileAsync(UObject* WorldContextObject, FEOSPlayerDataStorageDuplicateFileOptions options);
protected:
    FEOSPlayerDataStorageDuplicateFileOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSPlayerDataStorageDuplicateFileCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePlayerDataStorageDeleteFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePlayerDataStorageDeleteFile : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnDeleteFileCompleteCallbackDelegate OnCallback;
private:
    FOnDeleteFileCompleteCallback Callback;
public:
    UEOSCorePlayerDataStorageDeleteFile() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCorePlayerDataStorageDeleteFile() { Callback.Unbind(); }
public:
    /**
     * Deletes an existing file in the cloud. If successful, the file's data will be removed from our local cache.
     *
     * @param DelteOptions Object containing properties related to which user is deleting the file, and what file name is
     * @param ClientData Optional pointer to help clients track this request, that is returned in the completion callback
     * @param callback This function is called when the delete operation completes
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|PlayerDataStorage|Async"))
		static UEOSCorePlayerDataStorageDeleteFile* EOSPlayerDataStorageDeleteFileAsync(UObject* WorldContextObject, FEOSPlayerDataStorageDeleteFileOptions options);
protected:
    FEOSPlayerDataStorageDeleteFileOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSPlayerDataStorageDeleteFileCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePlayerDataStorageReadFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePlayerDataStorageReadFile : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnReadFileCompleteCallbackDelegate OnCallback;
private:
    FOnReadFileCompleteCallback Callback;
    FOnFileTransferProgressUpdated ProgressCallback;
public:
    UEOSCorePlayerDataStorageReadFile() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCorePlayerDataStorageReadFile() { Callback.Unbind(); }
public:
    /**
     * Retrieve the contents of a specific file, potentially downloading the contents if we do not have a local copy, from the cloud. This request will occur asynchronously, potentially over
     * multiple frames. All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at
     * least once if the request is started successfully.
     *
     * @param ReadOptions Object containing properties related to which user is opening the file, what the file's name is, and related mechanisms for copying the data
     * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks
     * @param callback This function is called when the read operation completes
     * @return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed
     *
     * @see EOS_PlayerDataStorageFileTransferRequest_Release
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|PlayerDataStorage|Async"))
		static UEOSCorePlayerDataStorageReadFile* EOSPlayerDataStorageReadFileAsync(UObject* WorldContextObject, FEOSPlayerDataStorageReadFileOptions options);
protected:
    FEOSPlayerDataStorageReadFileOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSPlayerDataStorageReadFileCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		UEOSCorePlayerDataStorageWriteFile
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class EOSCORE_API UEOSCorePlayerDataStorageWriteFile : public UEOSCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
        FOnWriteFileCompleteCallbackDelegate OnCallback;
private:
    FOnWriteFileCompleteCallback Callback;
    FOnFileTransferProgressUpdated ProgressCallback;
public:
    UEOSCorePlayerDataStorageWriteFile() { Callback.BindUFunction(this, "HandleCallback"); }
    ~UEOSCorePlayerDataStorageWriteFile() { Callback.Unbind(); }
public:
    /**
     * Write new data to a specific file, potentially overwriting any existing file by the same name, to the cloud. This request will occur asynchronously, potentially over multiple frames.
     * All callbacks for this function will come from the same thread that the SDK is ticked from. If specified, the FileTransferProgressCallback will always be called at least once if the
     * request is started successfully.
     *
     * @param WriteOptions Object containing properties related to which user is writing the file, what the file's name is, and related mechanisms for writing the data
     * @param ClientData Optional pointer to help clients track this request, that is returned in associated callbacks
     * @param callback This function is called when the write operation completes
     * @return A valid Player Data Storage File Request handle if successful, or NULL otherwise. Data contained in the completion callback will have more detailed information about issues with the request in failure cases. This handle must be released when it is no longer needed
     *
     * @see EOS_PlayerDataStorageFileTransferRequest_Release
     */
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", Category = "EOSCore|PlayerDataStorage|Async"))
		static UEOSCorePlayerDataStorageWriteFile* EOSPlayerDataStorageWriteFileAsync(UObject* WorldContextObject, FEOSPlayerDataStorageWriteFileOptions options);
protected:
    FEOSPlayerDataStorageWriteFileOptions Options;
private:
	virtual void Activate() override;
private:
	UFUNCTION()
        void HandleCallback(const FEOSPlayerDataStorageWriteFileCallbackInfo& data, bool bWasSuccessful)
    {
		OnCallback.Broadcast(data);
		Callback.Unbind();
		SetReadyToDestroy();
    }
};