// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapFog.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMapFog;
class UMapRendererComponent;
class UMapRevealerComponent;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTextureRenderTarget2D;
#ifdef MINIMAPPLUGIN_MapFog_generated_h
#error "MapFog.generated.h already included, missing '#pragma once' in MapFog.h"
#endif
#define MINIMAPPLUGIN_MapFog_generated_h

#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_12_DELEGATE \
MINIMAPPLUGIN_API void FMapFogMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogMaterialChangedSignature, AMapFog* MapFog);


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMapRevealerUnregistered); \
	DECLARE_FUNCTION(execOnMapRevealerRegistered); \
	DECLARE_FUNCTION(execGetFogMaterialInstanceForCanvas); \
	DECLARE_FUNCTION(execSetFogMaterialForCanvas); \
	DECLARE_FUNCTION(execGetFogMaterialForUMG); \
	DECLARE_FUNCTION(execSetFogMaterialForUMG); \
	DECLARE_FUNCTION(execGetWorldToPixelRatio); \
	DECLARE_FUNCTION(execGetSourceFogRenderTarget); \
	DECLARE_FUNCTION(execGetDestinationFogRenderTarget); \
	DECLARE_FUNCTION(execGetFogAtLocation);


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapFog(); \
	friend struct Z_Construct_UClass_AMapFog_Statics; \
public: \
	DECLARE_CLASS(AMapFog, AMapAreaBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapFog)


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapFog(AMapFog&&); \
	AMapFog(const AMapFog&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapFog); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapFog); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapFog) \
	NO_API virtual ~AMapFog();


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_14_PROLOG
#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class AMapFog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
