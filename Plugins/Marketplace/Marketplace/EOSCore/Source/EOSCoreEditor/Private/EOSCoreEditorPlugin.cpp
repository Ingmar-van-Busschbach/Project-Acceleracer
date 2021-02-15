/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "EOSCoreEditorPlugin.h"
#include "PropertyEditorModule.h"

#include "Modules/ModuleManager.h"
#include "LevelEditor.h"

class FToolBarBuilder;
class FMenuBuilder;

#define LOCTEXT_NAMESPACE "FEOSCoreEditorModule"

class FEOSCoreEditorPlugin : public IEOSCoreEditorPlugin
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void DonateActionClicked();
	void HelpActionClicked();
	void DiscordActionClicked();
	void MarketplaceActionClicked();

private:
	void AddMenuBarExtension(FMenuBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};

IMPLEMENT_MODULE(FEOSCoreEditorPlugin, EOSCoreEditor)

void FEOSCoreEditorPlugin::StartupModule()
{
	FEOSCoreEditorStyle::Initialize();
	FEOSCoreEditorStyle::ReloadTextures();
	FEOSCoreEditorCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FEOSCoreEditorCommands::Get().DonateAction,
		FExecuteAction::CreateRaw(this, &FEOSCoreEditorPlugin::DonateActionClicked),
		FCanExecuteAction());
	PluginCommands->MapAction(
		FEOSCoreEditorCommands::Get().HelpAction,
		FExecuteAction::CreateRaw(this, &FEOSCoreEditorPlugin::HelpActionClicked),
		FCanExecuteAction());
	PluginCommands->MapAction(
		FEOSCoreEditorCommands::Get().DiscordAction,
		FExecuteAction::CreateRaw(this, &FEOSCoreEditorPlugin::DiscordActionClicked),
		FCanExecuteAction());
	PluginCommands->MapAction(
		FEOSCoreEditorCommands::Get().MarketplaceAction,
		FExecuteAction::CreateRaw(this, &FEOSCoreEditorPlugin::MarketplaceActionClicked),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuBarExtension("Window", EExtensionHook::After, PluginCommands, FMenuBarExtensionDelegate::CreateRaw(this, &FEOSCoreEditorPlugin::AddMenuBarExtension));
		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
}

void FEOSCoreEditorPlugin::ShutdownModule()
{
	FEOSCoreEditorStyle::Shutdown();
	FEOSCoreEditorCommands::Unregister();
}

void FEOSCoreEditorPlugin::DonateActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://paypal.me/eeldev"), NULL, NULL);
}

void FEOSCoreEditorPlugin::HelpActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://eeldev.com/index.php/eoscore/"), NULL, NULL);
}

void FEOSCoreEditorPlugin::DiscordActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://discord.gg/7AGWewB"), NULL, NULL);
}

void FEOSCoreEditorPlugin::MarketplaceActionClicked()
{
	FPlatformProcess::LaunchURL(TEXT("https://www.unrealengine.com/marketplace/product/eoscore"), NULL, NULL);
}

void FEOSCoreEditorPlugin::AddMenuBarExtension(FMenuBarBuilder& Builder)
{
	Builder.AddPullDownMenu(
		LOCTEXT("EOSCoreEditorMenu", "EOSCore:: Plugin"),
		LOCTEXT("EOSCoreEditorMenu_Tooltip", "EOSCore:: Help and Documentation menu"),
		FNewMenuDelegate::CreateRaw(this, &FEOSCoreEditorPlugin::AddMenuExtension), "EOSCore:: Plugin");
}

void FEOSCoreEditorPlugin::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.BeginSection("Help", LOCTEXT("EOSCoreMenu_Help", "Help"));
	Builder.AddMenuEntry(FEOSCoreEditorCommands::Get().MarketplaceAction);
	Builder.AddMenuEntry(FEOSCoreEditorCommands::Get().HelpAction);
	Builder.AddMenuEntry(FEOSCoreEditorCommands::Get().DiscordAction);
	Builder.EndSection();

	Builder.BeginSection("Support", LOCTEXT("EOSCoreMenu_Support", "Support"));
	Builder.AddMenuEntry(FEOSCoreEditorCommands::Get().DonateAction);
	Builder.EndSection();
}

#undef LOCTEXT_NAMESPACE