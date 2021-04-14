// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSP2PGetPortRangeOptions;
enum class EOSResult : uint8;
struct FEOSP2PSetPortRangeOptions;
struct FEOSP2PGetRelayControlOptions;
enum class EEOSERelayControl : uint8;
struct FEOSP2PSetRelayControlOptions;
struct FEOSP2PGetNATTypeOptions;
enum class EEOSENATType : uint8;
struct FEOSP2PCloseConnectionsOptions;
struct FEOSP2PCloseConnectionOptions;
struct FEOSP2PAcceptConnectionOptions;
struct FEOSNotificationId;
struct FEOSP2PAddNotifyPeerConnectionClosedOptions;
struct FEOSP2PAddNotifyPeerConnectionRequestOptions;
struct FEOSP2PReceivePacketOptions;
struct FEOSProductUserId;
struct FEOSP2PSocketId;
struct FEOSP2PGetNextReceivedPacketSizeOptions;
struct FEOSP2PSendPacketOptions;
class UCoreP2P;
#ifdef EOSCORE_EOSP2P_generated_h
#error "EOSP2P.generated.h already included, missing '#pragma once' in EOSP2P.h"
#endif
#define EOSCORE_EOSP2P_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEOSP2PGetPortRange); \
	DECLARE_FUNCTION(execEOSP2PSetPortRange); \
	DECLARE_FUNCTION(execEOSP2PGetRelayControl); \
	DECLARE_FUNCTION(execEOSP2PSetRelayControl); \
	DECLARE_FUNCTION(execEOSP2PGetNATType); \
	DECLARE_FUNCTION(execEOSP2PQueryNATType); \
	DECLARE_FUNCTION(execEOSP2PCloseConnections); \
	DECLARE_FUNCTION(execEOSP2PCloseConnection); \
	DECLARE_FUNCTION(execEOSP2PAcceptConnection); \
	DECLARE_FUNCTION(execEOSP2PRemoveNotifyPeerConnectionClosed); \
	DECLARE_FUNCTION(execEOSP2PAddNotifyPeerConnectionClosed); \
	DECLARE_FUNCTION(execEOSP2PRemoveNotifyPeerConnectionRequest); \
	DECLARE_FUNCTION(execEOSP2PAddNotifyPeerConnectionRequest); \
	DECLARE_FUNCTION(execEOSP2PReceivePacket); \
	DECLARE_FUNCTION(execEOSP2PGetNextReceivedPacketSize); \
	DECLARE_FUNCTION(execEOSP2PSendPacket); \
	DECLARE_FUNCTION(execGetP2P);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEOSP2PGetPortRange); \
	DECLARE_FUNCTION(execEOSP2PSetPortRange); \
	DECLARE_FUNCTION(execEOSP2PGetRelayControl); \
	DECLARE_FUNCTION(execEOSP2PSetRelayControl); \
	DECLARE_FUNCTION(execEOSP2PGetNATType); \
	DECLARE_FUNCTION(execEOSP2PQueryNATType); \
	DECLARE_FUNCTION(execEOSP2PCloseConnections); \
	DECLARE_FUNCTION(execEOSP2PCloseConnection); \
	DECLARE_FUNCTION(execEOSP2PAcceptConnection); \
	DECLARE_FUNCTION(execEOSP2PRemoveNotifyPeerConnectionClosed); \
	DECLARE_FUNCTION(execEOSP2PAddNotifyPeerConnectionClosed); \
	DECLARE_FUNCTION(execEOSP2PRemoveNotifyPeerConnectionRequest); \
	DECLARE_FUNCTION(execEOSP2PAddNotifyPeerConnectionRequest); \
	DECLARE_FUNCTION(execEOSP2PReceivePacket); \
	DECLARE_FUNCTION(execEOSP2PGetNextReceivedPacketSize); \
	DECLARE_FUNCTION(execEOSP2PSendPacket); \
	DECLARE_FUNCTION(execGetP2P);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreP2P(); \
	friend struct Z_Construct_UClass_UCoreP2P_Statics; \
public: \
	DECLARE_CLASS(UCoreP2P, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreP2P)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCoreP2P(); \
	friend struct Z_Construct_UClass_UCoreP2P_Statics; \
public: \
	DECLARE_CLASS(UCoreP2P, UEOSCoreSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreP2P)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreP2P(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreP2P) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreP2P); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreP2P); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreP2P(UCoreP2P&&); \
	NO_API UCoreP2P(const UCoreP2P&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreP2P(UCoreP2P&&); \
	NO_API UCoreP2P(const UCoreP2P&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreP2P); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreP2P); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreP2P)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_21_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCORE_API UClass* StaticClass<class UCoreP2P>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCore_Public_P2P_EOSP2P_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
