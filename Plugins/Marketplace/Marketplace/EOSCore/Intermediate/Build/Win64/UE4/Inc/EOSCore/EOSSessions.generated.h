// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSHSessionSearch;
struct FEOSHSessionDetails;
struct FEOSHActiveSession;
struct FEOSHSessionModification;
struct FEOSSessionSearchCopySearchResultByIndexOptions;
enum class EOSResult : uint8;
struct FEOSSessionSearchGetSearchResultCountOptions;
struct FEOSSessionSearchFindOptions;
struct FEOSSessionSearchSetMaxResultsOptions;
struct FEOSSessionSearchRemoveParameterOptions;
enum class EEOSEComparisonOp : uint8;
struct FEOSSessionSearchSetTargetUserIdOptions;
struct FEOSSessionSearchSetSessionIdOptions;
struct FEOSSessionDetailsCopySessionAttributeByKeyOptions;
struct FEOSSessionDetailsAttribute;
struct FEOSSessionDetailsCopySessionAttributeByIndexOptions;
struct FEOSSessionDetailsGetSessionAttributeCountOptions;
struct FEOSSessionDetailsCopyInfoOptions;
struct FEOSSessionDetailsInfo;
struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions;
struct FEOSProductUserId;
struct FEOSActiveSessionGetRegisteredPlayerCountOptions;
struct FEOSActiveSessionCopyInfoOptions;
struct FEOSActiveSessionInfo;
struct FEOSSessionModificationRemoveAttributeOptions;
enum class EEOSESessionAttributeAdvertisementType : uint8;
struct FEOSSessionModificationSetInvitesAllowedOptions;
struct FEOSSessionModificationSetMaxPlayersOptions;
struct FEOSSessionModificationSetJoinInProgressAllowedOptions;
struct FEOSSessionModificationSetPermissionLevelOptions;
struct FEOSSessionModificationSetHostAddressOptions;
struct FEOSSessionModificationSetBucketIdOptions;
struct FEOSSessionsDumpSessionStateOptions;
struct FEOSSessionsIsUserInSessionOptions;
struct FEOSSessionsCopySessionHandleForPresenceOptions;
struct FEOSSessionsCopySessionHandleByUiEventIdOptions;
struct FEOSSessionsCopySessionHandleByInviteIdOptions;
struct FEOSNotificationId;
struct FEOSSessionsCopyActiveSessionHandleOptions;
struct FEOSSessionsCreateSessionSearchOptions;
struct FEOSSessionsGetInviteIdByIndexOptions;
struct FEOSSessionsGetInviteCountOptions;
struct FEOSSessionsQueryInvitesOptions;
struct FEOSSessionsRejectInviteOptions;
struct FEOSSessionsSendInviteOptions;
struct FEOSSessionsUnregisterPlayersOptions;
struct FEOSSessionsRegisterPlayersOptions;
struct FEOSSessionsEndSessionOptions;
struct FEOSSessionsStartSessionOptions;
struct FEOSSessionsJoinSessionOptions;
struct FEOSSessionsDestroySessionOptions;
struct FEOSSessionsUpdateSessionOptions;
struct FEOSSessionsUpdateSessionModificationOptions;
struct FEOSSessionsCreateSessionModificationOptions;
class UCoreSessions;
#ifdef EOSCORE_EOSSessions_generated_h
#error "EOSSessions.generated.h already included, missing '#pragma once' in EOSSessions.h"
#endif
#define EOSCORE_EOSSessions_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSSessionSearchRelease); \
	DECLARE_FUNCTION(execEOSSessionDetailsRelease); \
	DECLARE_FUNCTION(execEOSActiveSessionRelease); \
	DECLARE_FUNCTION(execEOSSessionModificationRelease); \
	DECLARE_FUNCTION(execEOSSessionSearchCopySearchResultByIndex); \
	DECLARE_FUNCTION(execEOSSessionSearchGetSearchResultCount); \
	DECLARE_FUNCTION(execEOSSessionSearchFind); \
	DECLARE_FUNCTION(execEOSSessionSearchSetMaxResults); \
	DECLARE_FUNCTION(execEOSSessionSearchRemoveParameter); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterString); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterInt64); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterDouble); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterBool); \
	DECLARE_FUNCTION(execEOSSessionSearchSetTargetUserId); \
	DECLARE_FUNCTION(execEOSSessionSearchSetSessionId); \
	DECLARE_FUNCTION(execEOSSessionDetailsCopySessionAttributeByKey); \
	DECLARE_FUNCTION(execEOSSessionDetailsCopySessionAttributeByIndex); \
	DECLARE_FUNCTION(execEOSSessionDetailsGetSessionAttributeCount); \
	DECLARE_FUNCTION(execEOSSessionDetailsCopyInfo); \
	DECLARE_FUNCTION(execEOSActiveSessionGetRegisteredPlayerByIndex); \
	DECLARE_FUNCTION(execEOSActiveSessionGetRegisteredPlayerCount); \
	DECLARE_FUNCTION(execEOSActiveSessionCopyInfo); \
	DECLARE_FUNCTION(execEOSSessionModificationRemoveAttribute); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeString); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeInt64); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeDouble); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeBool); \
	DECLARE_FUNCTION(execEOSSessionModificationSetInvitesAllowed); \
	DECLARE_FUNCTION(execEOSSessionModificationSetMaxPlayers); \
	DECLARE_FUNCTION(execEOSSessionModificationSetJoinInProgressAllowed); \
	DECLARE_FUNCTION(execEOSSessionModificationSetPermissionLevel); \
	DECLARE_FUNCTION(execEOSSessionModificationSetHostAddress); \
	DECLARE_FUNCTION(execEOSSessionModificationSetBucketId); \
	DECLARE_FUNCTION(execEOSSessionsDumpSessionState); \
	DECLARE_FUNCTION(execEOSSessionsIsUserInSession); \
	DECLARE_FUNCTION(execEOSSessionsCopySessionHandleForPresence); \
	DECLARE_FUNCTION(execEOSSessionsCopySessionHandleByUiEventId); \
	DECLARE_FUNCTION(execEOSSessionsCopySessionHandleByInviteId); \
	DECLARE_FUNCTION(execEOSSessionsRemoveNotifyJoinSessionAccepted); \
	DECLARE_FUNCTION(execEOSSessionsAddNotifyJoinSessionAccepted); \
	DECLARE_FUNCTION(execEOSSessionsRemoveNotifySessionInviteAccepted); \
	DECLARE_FUNCTION(execEOSSessionsAddNotifySessionInviteAccepted); \
	DECLARE_FUNCTION(execEOSSessionsRemoveNotifySessionInviteReceived); \
	DECLARE_FUNCTION(execEOSSessionsAddNotifySessionInviteReceived); \
	DECLARE_FUNCTION(execEOSSessionsCopyActiveSessionHandle); \
	DECLARE_FUNCTION(execEOSSessionsCreateSessionSearch); \
	DECLARE_FUNCTION(execEOSSessionsGetInviteIdByIndex); \
	DECLARE_FUNCTION(execEOSSessionsGetInviteCount); \
	DECLARE_FUNCTION(execEOSSessionsQueryInvites); \
	DECLARE_FUNCTION(execEOSSessionsRejectInvite); \
	DECLARE_FUNCTION(execEOSSessionsSendInvite); \
	DECLARE_FUNCTION(execEOSSessionsUnregisterPlayers); \
	DECLARE_FUNCTION(execEOSSessionsRegisterPlayers); \
	DECLARE_FUNCTION(execEOSSessionsEndSession); \
	DECLARE_FUNCTION(execEOSSessionsStartSession); \
	DECLARE_FUNCTION(execEOSSessionsJoinSession); \
	DECLARE_FUNCTION(execEOSSessionsDestroySession); \
	DECLARE_FUNCTION(execEOSSessionsUpdateSession); \
	DECLARE_FUNCTION(execEOSSessionsUpdateSessionModification); \
	DECLARE_FUNCTION(execEOSSessionsCreateSessionModification); \
	DECLARE_FUNCTION(execGetSessions);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSSessionSearchRelease); \
	DECLARE_FUNCTION(execEOSSessionDetailsRelease); \
	DECLARE_FUNCTION(execEOSActiveSessionRelease); \
	DECLARE_FUNCTION(execEOSSessionModificationRelease); \
	DECLARE_FUNCTION(execEOSSessionSearchCopySearchResultByIndex); \
	DECLARE_FUNCTION(execEOSSessionSearchGetSearchResultCount); \
	DECLARE_FUNCTION(execEOSSessionSearchFind); \
	DECLARE_FUNCTION(execEOSSessionSearchSetMaxResults); \
	DECLARE_FUNCTION(execEOSSessionSearchRemoveParameter); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterString); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterInt64); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterDouble); \
	DECLARE_FUNCTION(execEOSSessionSearchSetParameterBool); \
	DECLARE_FUNCTION(execEOSSessionSearchSetTargetUserId); \
	DECLARE_FUNCTION(execEOSSessionSearchSetSessionId); \
	DECLARE_FUNCTION(execEOSSessionDetailsCopySessionAttributeByKey); \
	DECLARE_FUNCTION(execEOSSessionDetailsCopySessionAttributeByIndex); \
	DECLARE_FUNCTION(execEOSSessionDetailsGetSessionAttributeCount); \
	DECLARE_FUNCTION(execEOSSessionDetailsCopyInfo); \
	DECLARE_FUNCTION(execEOSActiveSessionGetRegisteredPlayerByIndex); \
	DECLARE_FUNCTION(execEOSActiveSessionGetRegisteredPlayerCount); \
	DECLARE_FUNCTION(execEOSActiveSessionCopyInfo); \
	DECLARE_FUNCTION(execEOSSessionModificationRemoveAttribute); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeString); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeInt64); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeDouble); \
	DECLARE_FUNCTION(execEOSSessionModificationAddAttributeBool); \
	DECLARE_FUNCTION(execEOSSessionModificationSetInvitesAllowed); \
	DECLARE_FUNCTION(execEOSSessionModificationSetMaxPlayers); \
	DECLARE_FUNCTION(execEOSSessionModificationSetJoinInProgressAllowed); \
	DECLARE_FUNCTION(execEOSSessionModificationSetPermissionLevel); \
	DECLARE_FUNCTION(execEOSSessionModificationSetHostAddress); \
	DECLARE_FUNCTION(execEOSSessionModificationSetBucketId); \
	DECLARE_FUNCTION(execEOSSessionsDumpSessionState); \
	DECLARE_FUNCTION(execEOSSessionsIsUserInSession); \
	DECLARE_FUNCTION(execEOSSessionsCopySessionHandleForPresence); \
	DECLARE_FUNCTION(execEOSSessionsCopySessionHandleByUiEventId); \
	DECLARE_FUNCTION(execEOSSessionsCopySessionHandleByInviteId); \
	DECLARE_FUNCTION(execEOSSessionsRemoveNotifyJoinSessionAccepted); \
	DECLARE_FUNCTION(execEOSSessionsAddNotifyJoinSessionAccepted); \
	DECLARE_FUNCTION(execEOSSessionsRemoveNotifySessionInviteAccepted); \
	DECLARE_FUNCTION(execEOSSessionsAddNotifySessionInviteAccepted); \
	DECLARE_FUNCTION(execEOSSessionsRemoveNotifySessionInviteReceived); \
	DECLARE_FUNCTION(execEOSSessionsAddNotifySessionInviteReceived); \
	DECLARE_FUNCTION(execEOSSessionsCopyActiveSessionHandle); \
	DECLARE_FUNCTION(execEOSSessionsCreateSessionSearch); \
	DECLARE_FUNCTION(execEOSSessionsGetInviteIdByIndex); \
	DECLARE_FUNCTION(execEOSSessionsGetInviteCount); \
	DECLARE_FUNCTION(execEOSSessionsQueryInvites); \
	DECLARE_FUNCTION(execEOSSessionsRejectInvite); \
	DECLARE_FUNCTION(execEOSSessionsSendInvite); \
	DECLARE_FUNCTION(execEOSSessionsUnregisterPlayers); \
	DECLARE_FUNCTION(execEOSSessionsRegisterPlayers); \
	DECLARE_FUNCTION(execEOSSessionsEndSession); \
	DECLARE_FUNCTION(execEOSSessionsStartSession); \
	DECLARE_FUNCTION(execEOSSessionsJoinSession); \
	DECLARE_FUNCTION(execEOSSessionsDestroySession); \
	DECLARE_FUNCTION(execEOSSessionsUpdateSession); \
	DECLARE_FUNCTION(execEOSSessionsUpdateSessionModification); \
	DECLARE_FUNCTION(execEOSSessionsCreateSessionModification); \
	DECLARE_FUNCTION(execGetSessions);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreSessions(); \
	friend struct Z_Construct_UClass_UCoreSessions_Statics; \
public: \
	DECLARE_CLASS(UCoreSessions, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSessions)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCoreSessions(); \
	friend struct Z_Construct_UClass_UCoreSessions_Statics; \
public: \
	DECLARE_CLASS(UCoreSessions, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSessions)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreSessions(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreSessions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSessions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSessions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSessions(UCoreSessions&&); \
	NO_API UCoreSessions(const UCoreSessions&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSessions(UCoreSessions&&); \
	NO_API UCoreSessions(const UCoreSessions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSessions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSessions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreSessions)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_28_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreSessions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Sessions_EOSSessions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
