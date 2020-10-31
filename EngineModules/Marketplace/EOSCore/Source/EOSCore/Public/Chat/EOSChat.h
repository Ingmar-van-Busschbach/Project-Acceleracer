/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "EOSCoreModule.h"
#include "Containers/Ticker.h"
#include "Core/EOSTypes.h"
#include "P2P/EOSP2PTypes.h"
#include "EOSChat.generated.h"

/**
 * The Chat Interface is a exlusive interface to EOSCore::
 * It's purpose is to simplify chat messages
 */

 DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChatMessageReceived, const FEOSProductUserId&, sender, const FEOSProductUserId&, receiver, const FString&, message);
 DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnChatMessageReceivedCallback, const FEOSProductUserId&, sender, const FEOSProductUserId&, receiver, const FString&, message);

UCLASS()
class EOSCORE_API UCoreChat : public UEOSCoreSubsystem, public FTickerObjectBase
{
	GENERATED_BODY()
public:
	UCoreChat();
public:
	UPROPERTY(BlueprintAssignable)
		FOnChatMessageReceived OnChatMessageReceived;
protected:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool Tick(float deltaTime);
public:
	/**
	 * The Chat Interface is a exlusive interface to EOSCore::
	 * It's purpose is to simplify chat messages
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "EOSCore|Interfaces")
		static UCoreChat* GetChat() { return ChatObject; }
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Chat")
		static void SendChatMessage(FEOSProductUserId target, FString message, EEOSEPacketReliability reliability = EEOSEPacketReliability::EOS_PR_UnreliableUnordered);
	UFUNCTION(BlueprintCallable, Category = "EOSCore|Chat")
		static void ListenForChatMessages(const FOnChatMessageReceivedCallback& callback);
private:
	static void OnIncomingChatConnection(const EOS_P2P_OnIncomingConnectionRequestInfo* data);
private:
	static UCoreChat* ChatObject;
	bool bIsListeningForConnections;
	EOS_NotificationId ListeningId;
};
