// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSProductUserId;
enum class EEOSEPacketReliability : uint8;
class UCoreChat;
#ifdef EOSCORE_EOSChat_generated_h
#error "EOSChat.generated.h already included, missing '#pragma once' in EOSChat.h"
#endif
#define EOSCORE_EOSChat_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_22_DELEGATE \
struct _Script_EOSCore_eventOnChatMessageReceivedCallback_Parms \
{ \
	FEOSProductUserId sender; \
	FEOSProductUserId receiver; \
	FString message; \
}; \
static inline void FOnChatMessageReceivedCallback_DelegateWrapper(const FScriptDelegate& OnChatMessageReceivedCallback, FEOSProductUserId const& sender, FEOSProductUserId const& receiver, const FString& message) \
{ \
	_Script_EOSCore_eventOnChatMessageReceivedCallback_Parms Parms; \
	Parms.sender=sender; \
	Parms.receiver=receiver; \
	Parms.message=message; \
	OnChatMessageReceivedCallback.ProcessDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_21_DELEGATE \
struct _Script_EOSCore_eventOnChatMessageReceived_Parms \
{ \
	FEOSProductUserId sender; \
	FEOSProductUserId receiver; \
	FString message; \
}; \
static inline void FOnChatMessageReceived_DelegateWrapper(const FMulticastScriptDelegate& OnChatMessageReceived, FEOSProductUserId const& sender, FEOSProductUserId const& receiver, const FString& message) \
{ \
	_Script_EOSCore_eventOnChatMessageReceived_Parms Parms; \
	Parms.sender=sender; \
	Parms.receiver=receiver; \
	Parms.message=message; \
	OnChatMessageReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenForChatMessages); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execGetChat);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenForChatMessages); \
	DECLARE_FUNCTION(execSendChatMessage); \
	DECLARE_FUNCTION(execGetChat);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreChat(); \
	friend struct Z_Construct_UClass_UCoreChat_Statics; \
public: \
	DECLARE_CLASS(UCoreChat, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreChat)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCoreChat(); \
	friend struct Z_Construct_UClass_UCoreChat_Statics; \
public: \
	DECLARE_CLASS(UCoreChat, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreChat)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreChat(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreChat) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreChat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreChat); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreChat(UCoreChat&&); \
	NO_API UCoreChat(const UCoreChat&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreChat(UCoreChat&&); \
	NO_API UCoreChat(const UCoreChat&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreChat); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreChat); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreChat)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_24_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreChat>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Chat_EOSChat_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
