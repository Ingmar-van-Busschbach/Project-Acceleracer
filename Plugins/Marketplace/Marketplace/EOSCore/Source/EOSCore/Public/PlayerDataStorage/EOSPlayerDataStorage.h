/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
 official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "eos_playerdatastorage_types.h"
#include "PlayerDataStorage/EOSPlayerDataStorageTypes.h"
#include "EOSPlayerDataStorage.generated.h"

/**
 * The following EOS_PlayerDataStorage_* functions allow you to query file metadata; create/upload files; and duplicate, read, and delete existing files
 */

UCLASS()
class EOSCORE_API UCorePlayerDataStorage : public UEOSCoreSubsystem
{
	GENERATED_BODY()
public:
    UCorePlayerDataStorage();
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCorePlayerDataStorage* GetPlayerDataStorage() { return PlayerDataStorageObject; }
public:
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|PlayerDataStorage|Delegates")
        FOnQueryFileCompleteCallbackDelegate OnQueryFileCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|PlayerDataStorage|Delegates")
        FOnQueryFileListCompleteCallbackDelegate OnQueryFileListCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|PlayerDataStorage|Delegates")
        FOnDuplicateFileCompleteCallbackDelegate OnDuplicateFileCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|PlayerDataStorage|Delegates")
        FOnDeleteFileCompleteCallbackDelegate OnDeleteFileCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|PlayerDataStorage|Delegates")
        FOnFileTransferProgressCallbackDelegate OnFileTransferProgressCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|PlayerDataStorage|Delegates")
        FOnReadFileCompleteCallbackDelegate OnReadFileCompleteCallbackDelegate;
	UPROPERTY(BlueprintAssignable, Category = "EOSCore|PlayerDataStorage|Delegates")
        FOnWriteFileCompleteCallbackDelegate OnWriteFileCompleteCallbackDelegate;
public:
    /**
    * Query a specific file's metadata, such as file names, size, and a MD5 hash of the data. This is not required before a file may be opened, saved, copied, or deleted. Once a file has
    * been queried, its metadata will be available by the EOS_PlayerDataStorage_CopyFileMetadataAtIndex and EOS_PlayerDataStorage_CopyFileMetadataByFilename functions.
    *
    * @param Options Object containing properties related to which user is querying files, and what file is being queried
    * @param callback This function is called when the query operation completes
    *
    * @see EOS_PlayerDataStorage_GetFileMetadataCount
    * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex
    * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        void EOSPlayerDataStorageQueryFile(FEOSPlayerDataStorageQueryFileOptions queryFileOptions, const FOnQueryFileCompleteCallback& callback);

    /**
     * Query the file metadata, such as file names, size, and a MD5 hash of the data, for all files owned by this user for this application. This is not required before a file may be opened,
     * saved, copied, or deleted.
     *
     * @param Options Object containing properties related to which user is querying files
     * @param callback This function is called when the query operation completes
     *
     * @see EOS_PlayerDataStorage_GetFileMetadataCount
     * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex
     * @see EOS_PlayerDataStorage_CopyFileMetadataByFilename
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        void EOSPlayerDataStorageQueryFileList(FEOSPlayerDataStorageQueryFileListOptions queryFileListOptions, const FOnQueryFileListCompleteCallback& callback);

    /**
     * Create the cached copy of a file's metadata by filename. The metadata will be for the last retrieved or successfully saved version, and will not include any changes that have not
     * completed writing. The returned pointer must be released by the user when no longer needed.
     *
     * @param CopyFileMetadataOptions Object containing properties related to which user is requesting metadata, and for which filename
     * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOS_PlayerDataStorage_FileMetadata_Release.
     * @return EOSResult::EOS_Success if the metadata is currently cached, otherwise an error result explaining what went wrong
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        static EOSResult EOSPlayerDataStorageCopyFileMetadataByFilename(FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions copyFileMetadataOptions, FEOSPlayerDataStorageFileMetadata& outMetadata);

    /**
     * Get the count of files we have previously queried information for and files we have previously read from / written to.
     *
     * @param GetFileMetadataCountOptions Object containing properties related to which user is requesting the metadata count
     * @param OutFileMetadataCount If successful, the count of metadata currently cached
     * @return EOSResult::EOS_Success if the input was valid, otherwise an error result explaining what went wrong
     *
     * @see EOS_PlayerDataStorage_CopyFileMetadataAtIndex
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        static EOSResult EOSPlayerDataStorageGetFileMetadataCount(FEOSPlayerDataStorageGetFileMetadataCountOptions getFileMetadataCountOptions, int32& outFileMetadataCount);

    /**
     * Get the cached copy of a file's metadata by index. The metadata will be for the last retrieved or successfully saved version, and will not include any local changes that have not been
     * committed by calling SaveFile. The returned pointer must be released by the user when no longer needed.
     *
     * @param CopyFileMetadataOptions Object containing properties related to which user is requesting metadata, and at what index
     * @param OutMetadata A copy of the FileMetadata structure will be set if successful.  This data must be released by calling EOS_PlayerDataStorage_FileMetadata_Release.
     * @return EOSResult::EOS_Success if the requested metadata is currently cached, otherwise an error result explaining what went wrong
     *
     * @see EOS_PlayerDataStorage_GetFileMetadataCount
     * @see EOS_PlayerDataStorage_FileMetadata_Release
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        static EOSResult EOSPlayerDataStorageCopyFileMetadataAtIndex(FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions copyFileMetadataOptions, FEOSPlayerDataStorageFileMetadata& outMetadata);

    /**
     * Copies the data of an existing file to a new filename. This action happens entirely on the server and will not upload the contents of the source destination file from the host. This
     * function paired with a subsequent EOS_PlayerDataStorage_DeleteFile can be used to rename a file. If successful, the destination file's metadata will be updated in our local cache.
     *
     * @param DuplicateOptions Object containing properties related to which user is duplicating the file, and what the source and destination file names are
     * @param callback This function is called when the duplicate operation completes
     *
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        void EOSPlayerDataStorageDuplicateFile(FEOSPlayerDataStorageDuplicateFileOptions duplicateOptions, const FOnDuplicateFileCompleteCallback& callback);

    /**
     * Deletes an existing file in the cloud. If successful, the file's data will be removed from our local cache.
     *
     * @param DelteOptions Object containing properties related to which user is deleting the file, and what file name is
     * @param callback This function is called when the delete operation completes
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        void EOSPlayerDataStorageDeleteFile(FEOSPlayerDataStorageDeleteFileOptions deleteOptions, const FOnDeleteFileCompleteCallback& callback);

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
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        void EOSPlayerDataStorageReadFile(FEOSPlayerDataStorageReadFileOptions readOptions, const FOnReadFileCompleteCallback& callback);
    
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
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        void EOSPlayerDataStorageWriteFile(FEOSPlayerDataStorageWriteFileOptions writeOptions, const FOnWriteFileCompleteCallback& callback);

    /**
     * Below are helper functions to retrieve information about a file request handle, or to attempt to cancel a request in progress.
     */

     /**
      * Get the current state of a file request.
      *
      * @return EOS_Success if complete and successful, EOS_PlayerDataStorage_RequestInProgress if the request is still in progress, or another state for failure.
      */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        static EOSResult EOSPlayerDataStorageFileTransferRequestGetFileRequestState(const FEOSHPlayerDataStorageFileTransferRequest& handle);

    /**
     * Get the file name of the file this request is for. OutStringLength will always be set to the string length of the file name if it is not NULL.
     *
     * @param FilenameStringBufferSizeBytes The maximum number of bytes that can be written to OutStringBuffer
     * @param OutStringBuffer The buffer to write the NULL-terminated utf8 file name into, if successful
     * @return EOS_Success if the file name was successfully written to OutFilenameBuffer, a failure result otherwise
     *
     * @see EOS_PLAYERDATASTORAGE_FILENAME_MAX_LENGTH_BYTES
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        static EOSResult EOSPlayerDataStorageFileTransferRequestGetFilename(const FEOSHPlayerDataStorageFileTransferRequest& handle, int32 filenameStringBufferSizeBytes, FString& outStringBuffer);

    /**
     * Attempt to cancel this file request in progress. This is a best-effort command and is not guaranteed to be successful if the request has completed before this function is called.
     *
     * @return EOS_Success if successful, or EOS_NoChange if request is not cancelable or is already canceled
     */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        static EOSResult EOSPlayerDataStorageFileTransferRequestCancelRequest(const FEOSHPlayerDataStorageFileTransferRequest& handle);
public:
    /**
    * Free the memory used by a cloud-storage file request handle. This will not cancel a request in progress.
    */
    UFUNCTION(BlueprintCallable, Category = "EOSCore|PlayerDataStorage")
        static void EOSPlayerDataStorageFileTransferRequestRelease(const FEOSHPlayerDataStorageFileTransferRequest& handle);
private:
    void OnProgress(const EOS_PlayerDataStorage_FileTransferProgressCallbackInfo* data);
	EOS_PlayerDataStorage_EReadResult ReceiveData(const FString& filename, const void* data, size_t numBytes, size_t totalSize);
	EOS_PlayerDataStorage_EWriteResult SendData(const FString& filename, void* data, uint32_t* bytesWritten);
	static EOS_PlayerDataStorage_EReadResult OnFileDataReceived(const EOS_PlayerDataStorage_ReadFileDataCallbackInfo* data);
	static EOS_PlayerDataStorage_EWriteResult OnFileDataSend(const EOS_PlayerDataStorage_WriteFileDataCallbackInfo* data, void* outDataBuffer, uint32_t* outDataWritten);
    static void OnFileTransferProgressUpdated(const EOS_PlayerDataStorage_FileTransferProgressCallbackInfo* data);
private:
    static void Internal_OnPlayerDataStorageQueryFileCallback(const EOS_PlayerDataStorage_QueryFileCallbackInfo* data);
    static void Internal_OnPlayerDataStorageQueryFileListCallback(const EOS_PlayerDataStorage_QueryFileListCallbackInfo* data);
    static void Internal_OnPlayerDataStorageDuplicateFileCallback(const EOS_PlayerDataStorage_DuplicateFileCallbackInfo* data);
    static void Internal_OnPlayerDataStorageDeleteFileCallback(const EOS_PlayerDataStorage_DeleteFileCallbackInfo* data);
    static void Internal_OnPlayerDataStorageReadFileCallback(const EOS_PlayerDataStorage_ReadFileCallbackInfo* data);
    static void Internal_OnPlayerDataStorageWriteFileCallback(const EOS_PlayerDataStorage_WriteFileCallbackInfo* data);
private:
    static FEOSHPlayerDataStorageFileTransferRequest FileTransferHandleWrite;
    static FEOSHPlayerDataStorageFileTransferRequest FileTransferHandleRead;
    static FTransferInProgress CurrentRead;
    static FTransferInProgress CurrentWrite;
    static UCorePlayerDataStorage* PlayerDataStorageObject;
};
