// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapAreaBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBoxComponent;
class UMapViewComponent;
#ifdef MINIMAPPLUGIN_MapAreaBase_generated_h
#error "MapAreaBase.generated.h already included, missing '#pragma once' in MapAreaBase.h"
#endif
#define MINIMAPPLUGIN_MapAreaBase_generated_h

#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapAreaPrimitiveComponent(); \
	friend struct Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics; \
public: \
	DECLARE_CLASS(UMapAreaPrimitiveComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapAreaPrimitiveComponent)


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapAreaPrimitiveComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapAreaPrimitiveComponent(UMapAreaPrimitiveComponent&&); \
	UMapAreaPrimitiveComponent(const UMapAreaPrimitiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapAreaPrimitiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapAreaPrimitiveComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapAreaPrimitiveComponent) \
	NO_API virtual ~UMapAreaPrimitiveComponent();


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_13_PROLOG
#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapAreaPrimitiveComponent>();

#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLevelAtHeight); \
	DECLARE_FUNCTION(execGetMapViewCornerUVs); \
	DECLARE_FUNCTION(execGetMapAspectRatio); \
	DECLARE_FUNCTION(execGetMapView); \
	DECLARE_FUNCTION(execGetAreaBounds);


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapAreaBase(); \
	friend struct Z_Construct_UClass_AMapAreaBase_Statics; \
public: \
	DECLARE_CLASS(AMapAreaBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMapAreaBase)


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMapAreaBase(AMapAreaBase&&); \
	AMapAreaBase(const AMapAreaBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapAreaBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapAreaBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapAreaBase) \
	NO_API virtual ~AMapAreaBase();


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_29_PROLOG
#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class AMapAreaBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
