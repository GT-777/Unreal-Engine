// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapIconComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMapIconComponent;
class UMapViewComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class UUserWidget;
enum class EIconBackgroundInteraction : uint8;
enum class EIconFogInteraction : uint8;
enum class EIconSizeUnit : uint8;
struct FLinearColor;
#ifdef MINIMAPPLUGIN_MapIconComponent_generated_h
#error "MapIconComponent.generated.h already included, missing '#pragma once' in MapIconComponent.h"
#endif
#define MINIMAPPLUGIN_MapIconComponent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_14_DELEGATE \
MINIMAPPLUGIN_API void FMapIconMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconMaterialChangedSignature, UMapIconComponent* MapIcon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_15_DELEGATE \
MINIMAPPLUGIN_API void FMapIconMaterialInstancesChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconMaterialInstancesChangedSignature, UMapIconComponent* MapIcon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_16_DELEGATE \
MINIMAPPLUGIN_API void FMapIconAppearanceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconAppearanceChangedSignature, UMapIconComponent* MapIcon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_17_DELEGATE \
MINIMAPPLUGIN_API void FMapIconEnteredViewSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconEnteredViewSignature, UMapIconComponent* MapIcon, UMapViewComponent* View);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_18_DELEGATE \
MINIMAPPLUGIN_API void FMapIconLeftViewSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconLeftViewSignature, UMapIconComponent* MapIcon, UMapViewComponent* View);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_19_DELEGATE \
MINIMAPPLUGIN_API void FMapIconDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconDestroyedSignature, UMapIconComponent* MapIcon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_20_DELEGATE \
MINIMAPPLUGIN_API void FMapIconHoverStartSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconHoverStartSignature, UMapIconComponent* MapIcon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_21_DELEGATE \
MINIMAPPLUGIN_API void FMapIconHoverEndSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconHoverEndSignature, UMapIconComponent* MapIcon);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_22_DELEGATE \
MINIMAPPLUGIN_API void FMapIconClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconClickedSignature, UMapIconComponent* MapIcon, bool bIsLeftMouse);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReceiveClicked); \
	DECLARE_FUNCTION(execReceiveHoverEnd); \
	DECLARE_FUNCTION(execReceiveHoverStart); \
	DECLARE_FUNCTION(execIsRenderedInView); \
	DECLARE_FUNCTION(execMarkRenderedInView); \
	DECLARE_FUNCTION(execGetIconFogRevealThreshold); \
	DECLARE_FUNCTION(execSetIconFogRevealThreshold); \
	DECLARE_FUNCTION(execGetIconFogInteraction); \
	DECLARE_FUNCTION(execSetIconFogInteraction); \
	DECLARE_FUNCTION(execGetIconBackgroundInteraction); \
	DECLARE_FUNCTION(execSetIconBackgroundInteraction); \
	DECLARE_FUNCTION(execGetObjectiveArrowSize); \
	DECLARE_FUNCTION(execSetObjectiveArrowSize); \
	DECLARE_FUNCTION(execDoesObjectiveArrowRotate); \
	DECLARE_FUNCTION(execSetObjectiveArrowRotates); \
	DECLARE_FUNCTION(execGetObjectiveArrowTexture); \
	DECLARE_FUNCTION(execSetObjectiveArrowTexture); \
	DECLARE_FUNCTION(execIsObjectiveArrowEnabled); \
	DECLARE_FUNCTION(execSetObjectiveArrowEnabled); \
	DECLARE_FUNCTION(execGetIconZOrder); \
	DECLARE_FUNCTION(execSetIconZOrder); \
	DECLARE_FUNCTION(execGetIconDrawColor); \
	DECLARE_FUNCTION(execSetIconDrawColor); \
	DECLARE_FUNCTION(execGetIconSizeUnit); \
	DECLARE_FUNCTION(execGetIconSize); \
	DECLARE_FUNCTION(execSetIconSize); \
	DECLARE_FUNCTION(execDoesIconRotate); \
	DECLARE_FUNCTION(execSetIconRotates); \
	DECLARE_FUNCTION(execIsIconInteractable); \
	DECLARE_FUNCTION(execSetIconInteractable); \
	DECLARE_FUNCTION(execIsIconVisible); \
	DECLARE_FUNCTION(execSetIconVisible); \
	DECLARE_FUNCTION(execGetIconTooltipText); \
	DECLARE_FUNCTION(execSetIconTooltipText); \
	DECLARE_FUNCTION(execGetIconTexture); \
	DECLARE_FUNCTION(execSetIconTexture); \
	DECLARE_FUNCTION(execGetIconMaterialInstancesForCanvas); \
	DECLARE_FUNCTION(execResetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execGetObjectiveArrowMaterialForCanvas); \
	DECLARE_FUNCTION(execGetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execSetIconMaterialForCanvas); \
	DECLARE_FUNCTION(execRegisterMaterialInstanceFromUMG); \
	DECLARE_FUNCTION(execGetIconMaterialInstancesForUMG); \
	DECLARE_FUNCTION(execResetIconMaterialForUMG); \
	DECLARE_FUNCTION(execGetObjectiveArrowMaterialForUMG); \
	DECLARE_FUNCTION(execGetIconMaterialForUMG); \
	DECLARE_FUNCTION(execSetIconMaterialForUMG);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapIconComponent(); \
	friend struct Z_Construct_UClass_UMapIconComponent_Statics; \
public: \
	DECLARE_CLASS(UMapIconComponent, UBillboardComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapIconComponent)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapIconComponent(UMapIconComponent&&); \
	UMapIconComponent(const UMapIconComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapIconComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapIconComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapIconComponent) \
	NO_API virtual ~UMapIconComponent();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_28_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapIconComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapIconComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
