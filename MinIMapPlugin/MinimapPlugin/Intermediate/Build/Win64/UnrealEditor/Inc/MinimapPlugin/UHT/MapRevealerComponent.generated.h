// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapRevealerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMapFogRevealMode : uint8;
#ifdef MINIMAPPLUGIN_MapRevealerComponent_generated_h
#error "MapRevealerComponent.generated.h already included, missing '#pragma once' in MapRevealerComponent.h"
#endif
#define MINIMAPPLUGIN_MapRevealerComponent_generated_h

#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRevealDropOffDistance); \
	DECLARE_FUNCTION(execGetRevealDropOffDistance); \
	DECLARE_FUNCTION(execSetRevealExtent); \
	DECLARE_FUNCTION(execGetRevealExtent); \
	DECLARE_FUNCTION(execSetRevealMode); \
	DECLARE_FUNCTION(execGetRevealMode);


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapRevealerComponent(); \
	friend struct Z_Construct_UClass_UMapRevealerComponent_Statics; \
public: \
	DECLARE_CLASS(UMapRevealerComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MinimapPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMapRevealerComponent)


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMapRevealerComponent(UMapRevealerComponent&&); \
	UMapRevealerComponent(const UMapRevealerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapRevealerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapRevealerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapRevealerComponent) \
	NO_API virtual ~UMapRevealerComponent();


#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_14_PROLOG
#define FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINIMAPPLUGIN_API UClass* StaticClass<class UMapRevealerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
