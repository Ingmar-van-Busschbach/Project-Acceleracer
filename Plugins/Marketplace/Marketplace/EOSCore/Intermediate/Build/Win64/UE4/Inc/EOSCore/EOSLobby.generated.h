// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSHLobbySearch;
struct FEOSLobbySearchCopySearchResultByIndexOptions;
struct FEOSHLobbyDetails;
enum class EOSResult : uint8;
struct FEOSLobbySearchGetSearchResultCountOptions;
struct FEOSLobbySearchSetMaxResultsOptions;
struct FEOSLobbySearchRemoveParameterOptions;
enum class EEOSEComparisonOp : uint8;
struct FEOSLobbySearchSetTargetUserIdOptions;
struct FEOSLobbySearchSetLobbyIdOptions;
struct FEOSLobbySearchFindOptions;
struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions;
struct FEOSLobbyAttribute;
struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions;
struct FEOSLobbyDetailsGetMemberAttributeCountOptions;
struct FEOSLobbyDetailsGetMemberByIndexOptions;
struct FEOSProductUserId;
struct FEOSLobbyDetailsGetMemberCountOptions;
struct FEOSLobbyDetailsCopyAttributeByKeyOptions;
struct FEOSLobbyDetailsCopyAttributeByIndexOptions;
struct FEOSLobbyDetailsGetAttributeCountOptions;
struct FEOSLobbyDetailsCopyInfoOptions;
struct FEOSLobbyDetailsInfo;
struct FEOSLobbyDetailsGetLobbyOwnerOptions;
struct FEOSHLobbyModification;
struct FEOSLobbyModificationRemoveMemberAttributeOptions;
enum class EEOSELobbyAttributeVisibility : uint8;
struct FEOSLobbyModificationRemoveAttributeOptions;
struct FEOSLobbyModificationAddAttributeOptions;
struct FEOSLobbyModificationSetMaxMembersOptions;
struct FEOSLobbyModificationSetPermissionLevelOptions;
struct FEOSLobbyCopyLobbyDetailsHandleOptions;
struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions;
struct FEOSNotificationId;
struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions;
struct FEOSLobbyCreateLobbySearchOptions;
struct FEOSLobbyGetInviteIdByIndexOptions;
struct FLobbyInviteId;
struct FEOSLobbyGetInviteCountOptions;
struct FEOSLobbyQueryInvitesOptions;
struct FEOSLobbyRejectInviteOptions;
struct FEOSLobbySendInviteOptions;
struct FEOSLobbyKickMemberOptions;
struct FEOSLobbyPromoteMemberOptions;
struct FEOSLobbyUpdateLobbyOptions;
struct FEOSLobbyUpdateLobbyModificationOptions;
struct FEOSLobbyLeaveLobbyOptions;
struct FEOSLobbyJoinLobbyOptions;
struct FEOSLobbyDestroyLobbyOptions;
struct FEOSLobbyCreateLobbyOptions;
class UCoreLobby;
#ifdef EOSCORE_EOSLobby_generated_h
#error "EOSLobby.generated.h already included, missing '#pragma once' in EOSLobby.h"
#endif
#define EOSCORE_EOSLobby_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSLobbySearchCopySearchResultByIndex); \
	DECLARE_FUNCTION(execEOSLobbySearchGetSearchResultCount); \
	DECLARE_FUNCTION(execEOSLobbySearchSetMaxResults); \
	DECLARE_FUNCTION(execEOSLobbySearchRemoveParameter); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterString); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterInt64); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterDouble); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterBool); \
	DECLARE_FUNCTION(execEOSLobbySearchSetTargetUserId); \
	DECLARE_FUNCTION(execEOSLobbySearchSetLobbyId); \
	DECLARE_FUNCTION(execEOSLobbySearchFind); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyMemberAttributeByKey); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyMemberAttributeByIndex); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetMemberAttributeCount); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetMemberByIndex); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetMemberCount); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyAttributeByKey); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyAttributeByIndex); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetAttributeCount); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyInfo); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetLobbyOwner); \
	DECLARE_FUNCTION(execEOSLobbyModificationRemoveMemberAttribute); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeString); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeInt64); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeDouble); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeBool); \
	DECLARE_FUNCTION(execEOSLobbyModificationRemoveAttribute); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeString); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeInt64); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeDouble); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeBool); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttribute); \
	DECLARE_FUNCTION(execEOSLobbyModificationSetMaxMembers); \
	DECLARE_FUNCTION(execEOSLobbyModificationSetPermissionLevel); \
	DECLARE_FUNCTION(execEOSLobbyCopyLobbyDetailsHandle); \
	DECLARE_FUNCTION(execEOSLobbyCopyLobbyDetailsHandleByInviteId); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyInviteAccepted); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyInviteAccepted); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyInviteReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyInviteReceived); \
	DECLARE_FUNCTION(execEOSLobbyCreateLobbySearch); \
	DECLARE_FUNCTION(execEOSLobbyGetInviteIdByIndex); \
	DECLARE_FUNCTION(execEOSLobbyGetInviteCount); \
	DECLARE_FUNCTION(execEOSLobbyQueryInvites); \
	DECLARE_FUNCTION(execEOSLobbyRejectInvite); \
	DECLARE_FUNCTION(execEOSLobbySendInvite); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyMemberStatusReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyMemberStatusReceived); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyMemberUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyMemberUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyKickMember); \
	DECLARE_FUNCTION(execEOSLobbyPromoteMember); \
	DECLARE_FUNCTION(execEOSLobbyUpdateLobby); \
	DECLARE_FUNCTION(execEOSLobbyUpdateLobbyModification); \
	DECLARE_FUNCTION(execEOSLobbyLeaveLobby); \
	DECLARE_FUNCTION(execEOSLobbyJoinLobby); \
	DECLARE_FUNCTION(execEOSLobbyDestroyLobby); \
	DECLARE_FUNCTION(execEOSLobbyCreateLobby); \
	DECLARE_FUNCTION(execGetLobby);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSLobbySearchCopySearchResultByIndex); \
	DECLARE_FUNCTION(execEOSLobbySearchGetSearchResultCount); \
	DECLARE_FUNCTION(execEOSLobbySearchSetMaxResults); \
	DECLARE_FUNCTION(execEOSLobbySearchRemoveParameter); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterString); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterInt64); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterDouble); \
	DECLARE_FUNCTION(execEOSLobbySearchSetParameterBool); \
	DECLARE_FUNCTION(execEOSLobbySearchSetTargetUserId); \
	DECLARE_FUNCTION(execEOSLobbySearchSetLobbyId); \
	DECLARE_FUNCTION(execEOSLobbySearchFind); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyMemberAttributeByKey); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyMemberAttributeByIndex); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetMemberAttributeCount); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetMemberByIndex); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetMemberCount); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyAttributeByKey); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyAttributeByIndex); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetAttributeCount); \
	DECLARE_FUNCTION(execEOSLobbyDetailsCopyInfo); \
	DECLARE_FUNCTION(execEOSLobbyDetailsGetLobbyOwner); \
	DECLARE_FUNCTION(execEOSLobbyModificationRemoveMemberAttribute); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeString); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeInt64); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeDouble); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddMemberAttributeBool); \
	DECLARE_FUNCTION(execEOSLobbyModificationRemoveAttribute); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeString); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeInt64); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeDouble); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttributeBool); \
	DECLARE_FUNCTION(execEOSLobbyModificationAddAttribute); \
	DECLARE_FUNCTION(execEOSLobbyModificationSetMaxMembers); \
	DECLARE_FUNCTION(execEOSLobbyModificationSetPermissionLevel); \
	DECLARE_FUNCTION(execEOSLobbyCopyLobbyDetailsHandle); \
	DECLARE_FUNCTION(execEOSLobbyCopyLobbyDetailsHandleByInviteId); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyInviteAccepted); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyInviteAccepted); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyInviteReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyInviteReceived); \
	DECLARE_FUNCTION(execEOSLobbyCreateLobbySearch); \
	DECLARE_FUNCTION(execEOSLobbyGetInviteIdByIndex); \
	DECLARE_FUNCTION(execEOSLobbyGetInviteCount); \
	DECLARE_FUNCTION(execEOSLobbyQueryInvites); \
	DECLARE_FUNCTION(execEOSLobbyRejectInvite); \
	DECLARE_FUNCTION(execEOSLobbySendInvite); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyMemberStatusReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyMemberStatusReceived); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyMemberUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyMemberUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyRemoveNotifyLobbyUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyAddNotifyLobbyUpdateReceived); \
	DECLARE_FUNCTION(execEOSLobbyKickMember); \
	DECLARE_FUNCTION(execEOSLobbyPromoteMember); \
	DECLARE_FUNCTION(execEOSLobbyUpdateLobby); \
	DECLARE_FUNCTION(execEOSLobbyUpdateLobbyModification); \
	DECLARE_FUNCTION(execEOSLobbyLeaveLobby); \
	DECLARE_FUNCTION(execEOSLobbyJoinLobby); \
	DECLARE_FUNCTION(execEOSLobbyDestroyLobby); \
	DECLARE_FUNCTION(execEOSLobbyCreateLobby); \
	DECLARE_FUNCTION(execGetLobby);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreLobby(); \
	friend struct Z_Construct_UClass_UCoreLobby_Statics; \
public: \
	DECLARE_CLASS(UCoreLobby, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreLobby)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUCoreLobby(); \
	friend struct Z_Construct_UClass_UCoreLobby_Statics; \
public: \
	DECLARE_CLASS(UCoreLobby, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreLobby)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreLobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreLobby(UCoreLobby&&); \
	NO_API UCoreLobby(const UCoreLobby&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreLobby(UCoreLobby&&); \
	NO_API UCoreLobby(const UCoreLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreLobby); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreLobby)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_32_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_Lobby_EOSLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
