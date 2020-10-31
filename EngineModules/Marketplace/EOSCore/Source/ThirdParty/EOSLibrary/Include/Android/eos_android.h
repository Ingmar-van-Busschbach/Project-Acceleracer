// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "eos_types.h"
#include <jni.h>

#pragma pack(push, 8)

/** The most recent version of the EOS_Android_IntitalizeOptions structure. */
#define EOS_ANDROID_INITIALIZEOPTIONS_API_LATEST 1

/**
 * Options for initializing mount paths required for some platforms.
 */
EOS_STRUCT(EOS_Android_InitializeOptions, (
	/** API version of EOS_Initialize. */
	int32_t ApiVersion;

   /** JNI's Java VM */
	JavaVM* VM;
	
    /** Full internal directory path. Can be null */
	const char* OptionalInternalDirectory;
    /** Full external directory path. Can be null */
	const char* OptionalExternalDirectory;
));

#pragma pack(pop)
