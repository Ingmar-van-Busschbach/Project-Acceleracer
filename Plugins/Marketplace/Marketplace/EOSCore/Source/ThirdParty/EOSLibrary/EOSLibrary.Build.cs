/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

using System.IO;
using UnrealBuildTool;

public class EOSLibrary : ModuleRules
{
	public EOSLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

        string SourceDirectory = ModuleDirectory + "/";

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Include"));
        
        if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Lib", "EOSSDK-Win64-Shipping.lib"));

			PublicDelayLoadDLLs.Add("EOSSDK-Win64-Shipping.dll");
			RuntimeDependencies.Add("$(PluginDir)/Source/ThirdParty/EOSLibrary/Bin/EOSSDK-Win64-Shipping.dll");
		}
		else if (Target.Platform == UnrealTargetPlatform.Linux)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Bin", "libEOSSDK-Linux-Shipping.so"));

			PublicDelayLoadDLLs.Add("libEOSSDK-Linux-Shipping.so");
			RuntimeDependencies.Add("$(PluginDir)/Source/ThirdParty/EOSLibrary/Bin/libEOSSDK-Linux-Shipping.so");
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "Lib", "libEOSSDK-Mac-Shipping.dylib"));

			PublicDelayLoadDLLs.Add("libEOSSDK-Mac-Shipping.dylib");
			RuntimeDependencies.Add("$(PluginDir)/Source/ThirdParty/EOSLibrary/Bin/libEOSSDK-Mac-Shipping.dylib");
		}
		else if (Target.Platform == UnrealTargetPlatform.IOS)
		{

		}
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PublicAdditionalLibraries.Add(SourceDirectory + "Lib/arm64-v8a/libEOSSDK.so");
            PublicAdditionalLibraries.Add(SourceDirectory + "Lib/armeabi-v7a/libEOSSDK.so");

            AdditionalPropertiesForReceipt.Add("AndroidPlugin", SourceDirectory + "LibEOSCore_APL.xml");
        }
	}
}
