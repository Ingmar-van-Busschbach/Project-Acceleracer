/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "Modules/ModuleManager.h"

class IEOSCoreEditorPlugin : public IModuleInterface
{
public:
	static inline IEOSCoreEditorPlugin& Get()
	{
		return FModuleManager::LoadModuleChecked<IEOSCoreEditorPlugin>("EOSCoreEditorPlugin");
	}
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("EOSCoreEditorPlugin");
	}
};