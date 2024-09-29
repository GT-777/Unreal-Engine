// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapTrackerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapBackground;
class AMapFog;
class UMapIconComponent;
class UMapRevealerComponent;
#ifdef MINIMAPPLUGIN_MapTrackerComponent_generated_h
#error "MapTrackerComponent.generated.h already included, missing '#pragma once' in MapTrackerComponent.h"
#endif
#define MINIMAPPLUGIN_MapTrackerComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_14_DELEGATE \
MINIMAPPLUGIN_API void FMapIconRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconRegisteredSignature, UMapIconComponent* MapIcon);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_15_DELEGATE \
MINIMAPPLUGIN_API void FMapIconUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapIconUnregisteredSignature, UMapIconComponent* MapIcon);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_16_DELEGATE \
MINIMAPPLUGIN_API void FMapBackgroundRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundRegisteredSignature, AMapBackground* MapBackground);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_17_DELEGATE \
MINIMAPPLUGIN_API void FMapBackgroundUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundUnregisteredSignature, AMapBackground* MapBackground);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_18_DELEGATE \
MINIMAPPLUGIN_API void FMapFogRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogRegisteredSignature, AMapFog* MapFog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_19_DELEGATE \
MINIMAPPLUGIN_API void FMapFogUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogUnregisteredSignature, AMapFog* MapFog);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_20_DELEGATE \
MINIMAPPLUGIN_API void FMapRevealerRegisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapRevealerRegisteredSignature, UMapRevealerComponent* MapRevealer);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_21_DELEGATE \
MINIMAPPLUGIN_API void FMapRevealerUnregisteredSignature_DelegateWrapper(const FMulticastScriptDelegate& MapRevealerUnregisteredSignature, UMapRevealerComponent* MapRevealer);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMapRevealers); \
	DECLARE_FUNCTION(execGetFogRevealedFactor); \
	DECLARE_FUNCTION(execHasMapFog); \
	DECLARE_FUNCTION(execGetMapFogs); \
	DECLARE_FUNCTION(execGetMapBackgrounds); \
	DECLARE_FUNCTION(execGetMapIcons);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapTrackerComponent(); \
	friend struct Z_Construct_UClass_UMapTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UMapTrackerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapTrackerComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapTrackerComponent(UMapTrackerComponent&&); \
	UMapTrackerComponent(const UMapTrackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapTrackerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapTrackerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapTrackerComponent) \
	NO_API virtual ~UMapTrackerComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_26_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapTrackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapTrackerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
