// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELogLevel : uint8;
#ifdef EOSCOREPLATFORM_EOSCorePlatformModule_generated_h
#error "EOSCorePlatformModule.generated.h already included, missing '#pragma once' in EOSCorePlatformModule.h"
#endif
#define EOSCOREPLATFORM_EOSCorePlatformModule_generated_h

#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_71_DELEGATE \
struct _Script_EOSCorePlatform_eventOnEOSMessage_Parms \
{ \
	ELogLevel logLevel; \
	FString category; \
	FString message; \
}; \
static inline void FOnEOSMessage_DelegateWrapper(const FScriptDelegate& OnEOSMessage, ELogLevel logLevel, const FString& category, const FString& message) \
{ \
	_Script_EOSCorePlatform_eventOnEOSMessage_Parms Parms; \
	Parms.logLevel=logLevel; \
	Parms.category=category; \
	Parms.message=message; \
	OnEOSMessage.ProcessDelegate<UObject>(&Parms); \
}


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_SPARSE_DATA
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execListenForEOSMessages);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execListenForEOSMessages);


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSCorePlatformUtilities(); \
	friend struct Z_Construct_UClass_UEOSCorePlatformUtilities_Statics; \
public: \
	DECLARE_CLASS(UEOSCorePlatformUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCorePlatform"), NO_API) \
	DECLARE_SERIALIZER(UEOSCorePlatformUtilities)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_INCLASS \
private: \
	static void StaticRegisterNativesUEOSCorePlatformUtilities(); \
	friend struct Z_Construct_UClass_UEOSCorePlatformUtilities_Statics; \
public: \
	DECLARE_CLASS(UEOSCorePlatformUtilities, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EOSCorePlatform"), NO_API) \
	DECLARE_SERIALIZER(UEOSCorePlatformUtilities)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSCorePlatformUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSCorePlatformUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSCorePlatformUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSCorePlatformUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSCorePlatformUtilities(UEOSCorePlatformUtilities&&); \
	NO_API UEOSCorePlatformUtilities(const UEOSCorePlatformUtilities&); \
public:


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSCorePlatformUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSCorePlatformUtilities(UEOSCorePlatformUtilities&&); \
	NO_API UEOSCorePlatformUtilities(const UEOSCorePlatformUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSCorePlatformUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSCorePlatformUtilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSCorePlatformUtilities)


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_PRIVATE_PROPERTY_OFFSET
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_73_PROLOG
#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_RPC_WRAPPERS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_INCLASS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_PRIVATE_PROPERTY_OFFSET \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_SPARSE_DATA \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_INCLASS_NO_PURE_DECLS \
	ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EOSCOREPLATFORM_API UClass* StaticClass<class UEOSCorePlatformUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectAcceleracer_Plugins_Marketplace_Marketplace_EOSCore_Source_EOSCorePlatform_Public_EOSCorePlatformModule_h


#define FOREACH_ENUM_ELOGLEVEL(op) \
	op(ELogLevel::EOS_LOG_Off) \
	op(ELogLevel::EOS_LOG_Fatal) \
	op(ELogLevel::EOS_LOG_Error) \
	op(ELogLevel::EOS_LOG_Warning) \
	op(ELogLevel::EOS_LOG_Info) \
	op(ELogLevel::EOS_LOG_Verbose) \
	op(ELogLevel::EOS_LOG_VeryVerbose) 

enum class ELogLevel : uint8;
template<> EOSCOREPLATFORM_API UEnum* StaticEnum<ELogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
