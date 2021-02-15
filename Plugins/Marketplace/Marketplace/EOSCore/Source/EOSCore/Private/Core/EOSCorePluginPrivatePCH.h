/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Engine/World.h"
#include "HAL/PlatformFilemanager.h"
#include "HAL/RunnableThread.h"
#include "HAL/FileManager.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "Containers/Ticker.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/MessageDialog.h"
#include "Misc/ConfigCacheIni.h"
#include <string>
#include <algorithm>
#include "Containers/Queue.h"
#include "Misc/CommandLine.h"
#include "Modules/ModuleManager.h"

#include "eos_auth.h"
#include "eos_sdk.h"
#include "eos_userinfo.h"
#include "eos_stats.h"
#include "eos_connect.h"
#include "eos_lobby.h"
#include "eos_ui.h"
#include "eos_friends.h"
#include "eos_achievements.h"
#include "eos_ecom.h"
#include "eos_leaderboards.h"
#include "eos_sessions.h"
#include "eos_playerdatastorage.h"
#include "eos_presence.h"
#include "eos_p2p.h"
#include "eos_metrics.h"
#include "eos_ecom.h"
#include "eos_logging.h"

#include "EOSPlatform.h"
#include "EOSCorePlatformModule.h"
