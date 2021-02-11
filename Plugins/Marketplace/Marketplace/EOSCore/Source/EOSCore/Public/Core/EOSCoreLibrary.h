/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "eos_auth_types.h"
#include "eos_connect_types.h"
#include "Core/EOSTypes.h"
#include "Sessions/EOSSessionsTypes.h"
#include "Lobby/EOSLobbyTypes.h"
#include "EOSCoreLibrary.generated.h"

UCLASS()
class EOSCORE_API UEOSCoreLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static void BreakLobbyIdStruct(FEOSLobbyId id, FString& outId);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static void BreakAccessTokenStruct(FAccessToken token, FString& outToken);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static FAccessToken MakeAccessTokenStruct(FString token);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static void BreakLobbyInviteIdStruct(FLobbyInviteId inviteId, FString& outinviteId);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static FLobbyInviteId MakeLobbyInviteIdStruct(FString inviteId);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static void BreakUIEventIdStruct(FEOSUIEventId eventId, FString& outEventId);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities", meta = (DisplayName = "Is Valid"))
		static bool IsLobbyIdValid(FEOSLobbyId id);

	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities", meta = (ExpandEnumAsExecs = "result"))
		static void EOS_Success(EOSResult status, ESuccessFail& result);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool IsProductUserIdIdenticalWith(FEOSProductUserId a, FEOSProductUserId b);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool IsEpicAccountIdIdenticalWith(FEOSEpicAccountId a, FEOSEpicAccountId b);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool IsLobbyIdIdenticalWith(FEOSLobbyId a, FEOSLobbyId b);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static bool GetSessionAttributeBool(const FEOSSessionsAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static FString GetSessionAttributeInt64(const FEOSSessionsAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static FString GetSessionAttributeDouble(const FEOSSessionsAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static FString GetSessionAttributeString(const FEOSSessionsAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Lobby|Utilities")
		static bool GetLobbyAttributeBool(const FEOSLobbyAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Lobby|Utilities")
		static FString GetLobbyAttributeInt64(const FEOSLobbyAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Lobby|Utilities")
		static FString GetLobbyAttributeDouble(const FEOSLobbyAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Lobby|Utilities")
		static FString GetLobbyAttributeString(const FEOSLobbyAttributeData& data);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static FBucketId MakeBucketId(FString string);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static void BreakBucketId(FBucketId bucket, FString& string);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static FSessionInviteId MakeSessionsInviteId(FString string);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Sessions|Utilities")
		static void BreakSessionsInviteId(FSessionInviteId id, FString& string);

	/**
	* Returns a string representation of an EOS_EResult.
	* The return value is never null.
	* The return value must not be freed.
	*
	* Example: EOS_EResult_ToString(EOS_Success) returns "EOS_Success"
	*/
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static FString EOSEResultToString(EOSResult result);

	/**
	 * Returns whether a result is to be considered the final result, or false if the callback that returned this result
	 * will be called again either after some time or from another action.
	 *
	 * @param Result The result to check against being a final result for an operation
	 * @return True if this result means the operation is complete, false otherwise
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static bool EOSEResultIsOperationComplete(EOSResult result);

	/**
	 * Encode a byte array into hex encoded string
	 *
	 * @return An EOS_EResult that indicates whether the byte array was converted and copied into the OutBuffer.
	 *         EOS_Success if the encoding was successful and passed out in OutBuffer
	 *         EOS_InvalidParameters if you pass a null pointer on invalid length for any of the parameters
	 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the encoding. InOutBufferLength contains the required minimum length to perform the operation successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static EOSResult EOSByteArrayToString(const TArray<uint8> array, int32 length, FString& string);

	/**
	 * Check whether or not the given account unique id is considered valid
	 *
	 * @param AccountId The account id to check for validity
	 * @return EOS_TRUE if the EOS_EpicAccountId is valid, otherwise EOS_FALSE
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static bool EOSEpicAccountIdIsValid(FEOSEpicAccountId id);

	/**
	 * Check whether or not the given account unique id is considered valid
	 *
	 * @param AccountId The account id to check for validity
	 * @return EOS_TRUE if the EOS_EpicAccountId is valid, otherwise EOS_FALSE
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities", meta = (DisplayName = "EOSEpic Account Id is Valid (Pure)"))
		static bool EOSEpicAccountIdIsValidPure(FEOSEpicAccountId id) { return EOSEpicAccountIdIsValid(id); }

	/**
	 * Retrieve a string-ified account ID from an EOS_EpicAccountId. This is useful for replication of Epic account IDs in multiplayer games.
	 *
	 * @param AccountId The account ID for which to retrieve the string-ified version.
	 * @param OutBuffer The buffer into which the character data should be written
	 * @param InOutBufferLength The size of the OutBuffer in characters.
	 *                          The input buffer should include enough space to be null-terminated.
	 *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.
	 *
	 * @return An EOS_EResult that indicates whether the account ID string was copied into the OutBuffer.
	 *         EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer excluding the null terminator.
	 *         EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.
	 *         EOS_InvalidUser - The AccountId is invalid and cannot be string-ified
	 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the account ID string. InOutBufferLength contains the required minimum length to perform the operation successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static EOSResult EOSEpicAccountIdToString(FEOSEpicAccountId id, FString& string);

	/**
	 * Retrieve an EOS_EpicAccountId from a raw account ID string. The input string must be null-terminated.
	 *
	 * @param AccountIdString The string-ified account ID for which to retrieve the EOS_EpicAccountId
	 * @return The EOS_EpicAccountId that corresponds to the AccountIdString
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static FEOSEpicAccountId EOSEpicAccountIdFromString(FString string);

	/**
	 * Check whether or not the given account unique id is considered valid
	 *
	 * @param AccountId The account id to check for validity
	 * @return EOS_TRUE if the EOS_ProductUserId is valid, otherwise EOS_FALSE
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static bool EOSProductUserIdIsValid(FEOSProductUserId id);

	/**
	 * Check whether or not the given account unique id is considered valid
	 *
	 * @param AccountId The account id to check for validity
	 * @return EOS_TRUE if the EOS_ProductUserId is valid, otherwise EOS_FALSE
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities", meta = (DisplayName = "EOSProduct User Id is Valid (Pure)"))
		static bool EOSProductUserIdIsValidPure(FEOSProductUserId id) { return EOSProductUserIdIsValid(id); }

	/**
	 * Retrieve a string-ified account ID from an EOS_ProductUserId. This is useful for replication of Product User IDs in multiplayer games.
	 *
	 * @param AccountId The account ID for which to retrieve the string-ified version.
	 * @param OutBuffer The buffer into which the character data should be written
	 * @param InOutBufferLength The size of the OutBuffer in characters.
	 *                          The input buffer should include enough space to be null-terminated.
	 *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer.
	 *
	 * @return An EOS_EResult that indicates whether the account ID string was copied into the OutBuffer.
	 *         EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer excluding the null terminator.
	 *         EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.
	 *         EOS_InvalidUser - The AccountId is invalid and cannot be string-ified
	 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the account ID string. InOutBufferLength contains the required minimum length to perform the operation successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static EOSResult EOSProductUserIdToString(FEOSProductUserId id, FString& string);

	/**
	 * Retrieve an EOS_EpicAccountId from a raw account ID string. The input string must be null-terminated.
	 *
	 * @param AccountIdString The string-ified account ID for which to retrieve the EOS_ProductUserId
	 * @return The EOS_ProductUserId that corresponds to the AccountIdString
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static FEOSProductUserId EOSProductUserIdFromString(FString string);

	/**
	 * Convert a string to a byte array, useful when sending chat messages
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static TArray<uint8> CoreStringToByte(FString string);
	
	/**
	 * Convert a byte array to a string, useful when receiving chat messages for example
	 *
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static FString CoreBytesToString(const TArray<uint8>& data);

	/*
	* Get the current product id of the last successful login
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static FEOSProductUserId GetCurrentProductId();

	/*
	* Get the current account id of the last successful login
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static FEOSEpicAccountId GetCurrentAccountId();

	/**
	 * Retrieve a null-terminated string-ified continuance token from an EOS_ContinuanceToken.
	 *
	 * To get the required buffer size, call once with OutBuffer set to NULL, InOutBufferLength will contain the buffer size needed.
	 * Call again with valid params to get the string-ified continuance token which will only contain UTF8-encoded printable characters (excluding the null-terminator).
	 *
	 * @param ContinuanceToken The continuance token for which to retrieve the string-ified version.
	 * @param OutBuffer The buffer into which the character data should be written
	 * @param InOutBufferLength The size of the OutBuffer in characters.
	 *                          The input buffer should include enough space to be null-terminated.
	 *                          When the function returns, this parameter will be filled with the length of the string copied into OutBuffer including the null termination character.
	 *
	 * @return An EOS_EResult that indicates whether the Epic Online Services Account ID string was copied into the OutBuffer.
	 *         EOS_Success - The OutBuffer was filled, and InOutBufferLength contains the number of characters copied into OutBuffer including the null terminator.
	 *         EOS_InvalidParameters - Either OutBuffer or InOutBufferLength were passed as NULL parameters.
	 *         EOS_InvalidUser - The AccountId is invalid and cannot be string-ified
	 *         EOS_LimitExceeded - The OutBuffer is not large enough to receive the continuance token string. InOutBufferLength contains the required minimum length to perform the operation successfully.
	 */
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Utilities")
		static EOSResult EOSContinuanceTokenToString(FContinuanceToken id, FString& string);
};
