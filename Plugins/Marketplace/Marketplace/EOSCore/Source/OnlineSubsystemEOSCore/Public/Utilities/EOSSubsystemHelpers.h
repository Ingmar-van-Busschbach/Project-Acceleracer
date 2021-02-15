/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemTypes.h"
#include "eos_sessions_types.h"
#include "OnlineKeyValuePair.h"
#include "OnlineSessionSettings.h"
#include "FindSessionsCallbackProxy.h"
#include "EOSSubsystemHelpers.generated.h"

namespace EOSSubsystemHelpers
{
	int32 GetPendingDataSize(int32 channel, const FString& productId);
	ELoginStatus::Type GetLoginStatus(EOS_ELoginStatus status);
	
	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, bool data);
	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, float data);
	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, double data);
	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, int64 data);
	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, int32 data);
	EOS_Sessions_AttributeData CreateSessionAttributeData(const char* attributeName, const char* data);

	EOS_HSessionDetails GetSessionHandleFromInviteId(const char* inviteId);
	EOS_HSessionDetails GetSessionHandleFromUiEvent(uint64 eventId);

	void UpdateSessionDetails(const EOS_HSessionDetails& handle, FOnlineSession* session, const EOS_SessionDetails_Info* SessionDetails);
	void UpdateSessionModificationHandle(const FOnlineSessionSettings& NewSessionSettings, EOS_HSessionModification& ModificationHandle);
	
	EOS_ELoginCredentialType GetLoginCredentialType(const FString& str);

	EOS_EpicAccountId AccountIdFromString(FString string);
	EOS_EResult AccountIdToString(EOS_EpicAccountId id, FString& string);

	EOS_ProductUserId ProductIdFromString(FString string);
	EOS_EResult ProductIdToString(EOS_ProductUserId id, FString& string);

	EOS_ProductUserId GetLoggedInUserByIndex(int32 index);
	EOS_EpicAccountId GetLoggedInAccountByIndex(int32 index);
} 

UCLASS()
class ONLINESUBSYSTEMEOSCORE_API UEOSSubsystemHelpers : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static FBlueprintSessionResult CreateSessionResultFromInviteId(FString inviteId);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Utilities")
		static FBlueprintSessionResult CreateSessionResultFromUiEvent(FString eventId);
};