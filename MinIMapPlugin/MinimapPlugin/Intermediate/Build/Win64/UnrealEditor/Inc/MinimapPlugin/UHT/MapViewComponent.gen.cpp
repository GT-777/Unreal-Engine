// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapViewComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapViewComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapBackground_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapIconComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent_NoRegister();
MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References

// Begin Delegate FMapViewCategoriesChangedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms
	{
		UMapViewComponent* MapView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MapViewComponent event signatures\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MapViewComponent event signatures" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapView_MetaData), NewProp_MapView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::NewProp_MapView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapViewCategoriesChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapViewCategoriesChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapViewCategoriesChangedSignature, UMapViewComponent* MapView)
{
	struct _Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms
	{
		UMapViewComponent* MapView;
	};
	_Script_MinimapPlugin_eventMapViewCategoriesChangedSignature_Parms Parms;
	Parms.MapView=MapView;
	MapViewCategoriesChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapViewCategoriesChangedSignature

// Begin Delegate FMapViewSizeChangedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms
	{
		UMapViewComponent* MapView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapView_MetaData), NewProp_MapView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::NewProp_MapView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapViewSizeChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapViewSizeChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapViewSizeChangedSignature, UMapViewComponent* MapView)
{
	struct _Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms
	{
		UMapViewComponent* MapView;
	};
	_Script_MinimapPlugin_eventMapViewSizeChangedSignature_Parms Parms;
	Parms.MapView=MapView;
	MapViewSizeChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapViewSizeChangedSignature

// Begin Delegate FMapViewDestroyedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms
	{
		UMapViewComponent* MapView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapView_MetaData), NewProp_MapView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::NewProp_MapView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapViewDestroyedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapViewDestroyedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapViewDestroyedSignature, UMapViewComponent* MapView)
{
	struct _Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms
	{
		UMapViewComponent* MapView;
	};
	_Script_MinimapPlugin_eventMapViewDestroyedSignature_Parms Parms;
	Parms.MapView=MapView;
	MapViewDestroyedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapViewDestroyedSignature

// Begin Class UMapViewComponent Function DeprojectViewToWorld
struct Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics
{
	struct MapViewComponent_eventDeprojectViewToWorld_Parms
	{
		float U;
		float V;
		FVector WorldPos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Converts normalized view position to world position\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts normalized view position to world position" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventDeprojectViewToWorld_Parms, U), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U_MetaData), NewProp_U_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventDeprojectViewToWorld_Parms, V), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V_MetaData), NewProp_V_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventDeprojectViewToWorld_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::NewProp_WorldPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "DeprojectViewToWorld", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::MapViewComponent_eventDeprojectViewToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::MapViewComponent_eventDeprojectViewToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execDeprojectViewToWorld)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_U);
	P_GET_PROPERTY(FFloatProperty,Z_Param_V);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeprojectViewToWorld(Z_Param_U,Z_Param_V,Z_Param_Out_WorldPos);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function DeprojectViewToWorld

// Begin Class UMapViewComponent Function GetActiveBackgroundLevel
struct Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics
{
	struct MapViewComponent_eventGetActiveBackgroundLevel_Parms
	{
		const AMapBackground* MapBackground;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retrieves the cached height level for a multi-level map background\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the cached height level for a multi-level map background" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapBackground_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetActiveBackgroundLevel_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapBackground_MetaData), NewProp_MapBackground_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetActiveBackgroundLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::NewProp_MapBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetActiveBackgroundLevel", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::MapViewComponent_eventGetActiveBackgroundLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::MapViewComponent_eventGetActiveBackgroundLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetActiveBackgroundLevel)
{
	P_GET_OBJECT(AMapBackground,Z_Param_MapBackground);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveBackgroundLevel(Z_Param_MapBackground);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetActiveBackgroundLevel

// Begin Class UMapViewComponent Function GetActiveBackgroundPriority
struct Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics
{
	struct MapViewComponent_eventGetActiveBackgroundPriority_Parms
	{
		bool IsInsideAnyBackground;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retrieves the cached height level for a multi-level map background\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the cached height level for a multi-level map background" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsInsideAnyBackground_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInsideAnyBackground;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::NewProp_IsInsideAnyBackground_SetBit(void* Obj)
{
	((MapViewComponent_eventGetActiveBackgroundPriority_Parms*)Obj)->IsInsideAnyBackground = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::NewProp_IsInsideAnyBackground = { "IsInsideAnyBackground", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapViewComponent_eventGetActiveBackgroundPriority_Parms), &Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::NewProp_IsInsideAnyBackground_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetActiveBackgroundPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::NewProp_IsInsideAnyBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetActiveBackgroundPriority", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::MapViewComponent_eventGetActiveBackgroundPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::MapViewComponent_eventGetActiveBackgroundPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetActiveBackgroundPriority)
{
	P_GET_UBOOL_REF(Z_Param_Out_IsInsideAnyBackground);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetActiveBackgroundPriority(Z_Param_Out_IsInsideAnyBackground);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetActiveBackgroundPriority

// Begin Class UMapViewComponent Function GetViewAspectRatio
struct Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics
{
	struct MapViewComponent_eventGetViewAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the aspect ratio Width / Height of the view\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the aspect ratio Width / Height of the view" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetViewAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::MapViewComponent_eventGetViewAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::MapViewComponent_eventGetViewAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetViewAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetViewAspectRatio();
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetViewAspectRatio

// Begin Class UMapViewComponent Function GetViewCoordinates
struct Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics
{
	struct MapViewComponent_eventGetViewCoordinates_Parms
	{
		FVector WorldPos;
		bool bForceRectangular;
		float U;
		float V;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert world position to view position, where the boundaries represented by view size correspond to 0.0 and 1.0\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert world position to view position, where the boundaries represented by view size correspond to 0.0 and 1.0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPos;
	static void NewProp_bForceRectangular_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRectangular;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewCoordinates_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPos_MetaData), NewProp_WorldPos_MetaData) };
void Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_bForceRectangular_SetBit(void* Obj)
{
	((MapViewComponent_eventGetViewCoordinates_Parms*)Obj)->bForceRectangular = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_bForceRectangular = { "bForceRectangular", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapViewComponent_eventGetViewCoordinates_Parms), &Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_bForceRectangular_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewCoordinates_Parms, U), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewCoordinates_Parms, V), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapViewComponent_eventGetViewCoordinates_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapViewComponent_eventGetViewCoordinates_Parms), &Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_WorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_bForceRectangular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_U,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetViewCoordinates", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::MapViewComponent_eventGetViewCoordinates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::MapViewComponent_eventGetViewCoordinates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetViewCoordinates)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos);
	P_GET_UBOOL(Z_Param_bForceRectangular);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_U);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_V);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetViewCoordinates(Z_Param_Out_WorldPos,Z_Param_bForceRectangular,Z_Param_Out_U,Z_Param_Out_V);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetViewCoordinates

// Begin Class UMapViewComponent Function GetViewExtent
struct Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics
{
	struct MapViewComponent_eventGetViewExtent_Parms
	{
		float ViewExtentX;
		float ViewExtentY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns how far the map will display in world units\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns how far the map will display in world units" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewExtentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ViewExtentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::NewProp_ViewExtentX = { "ViewExtentX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewExtent_Parms, ViewExtentX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::NewProp_ViewExtentY = { "ViewExtentY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewExtent_Parms, ViewExtentY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::NewProp_ViewExtentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::NewProp_ViewExtentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetViewExtent", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::MapViewComponent_eventGetViewExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::MapViewComponent_eventGetViewExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetViewExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetViewExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetViewExtent)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ViewExtentX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ViewExtentY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetViewExtent(Z_Param_Out_ViewExtentX,Z_Param_Out_ViewExtentY);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetViewExtent

// Begin Class UMapViewComponent Function GetViewYaw
struct Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics
{
	struct MapViewComponent_eventGetViewYaw_Parms
	{
		float WorldYaw;
		float Yaw;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Convert world yaw to view yaw\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert world yaw to view yaw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldYaw_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::NewProp_WorldYaw = { "WorldYaw", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewYaw_Parms, WorldYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldYaw_MetaData), NewProp_WorldYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetViewYaw_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::NewProp_WorldYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::NewProp_Yaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetViewYaw", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::MapViewComponent_eventGetViewYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::MapViewComponent_eventGetViewYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetViewYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetViewYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetViewYaw)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_WorldYaw);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Yaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetViewYaw(Z_Param_WorldYaw,Z_Param_Out_Yaw);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetViewYaw

// Begin Class UMapViewComponent Function GetWorldCorners
struct Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics
{
	struct MapViewComponent_eventGetWorldCorners_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Computes the world position of the view's rectangular frustum\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computes the world position of the view's rectangular frustum" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetWorldCorners_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetWorldCorners", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::MapViewComponent_eventGetWorldCorners_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::MapViewComponent_eventGetWorldCorners_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetWorldCorners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetWorldCorners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetWorldCorners)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=P_THIS->GetWorldCorners();
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetWorldCorners

// Begin Class UMapViewComponent Function GetZoomScale
struct Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics
{
	struct MapViewComponent_eventGetZoomScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get how far the minimap is zoomed out. The total world area visible is ZoomScale x ViewExtent\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get how far the minimap is zoomed out. The total world area visible is ZoomScale x ViewExtent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventGetZoomScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "GetZoomScale", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::MapViewComponent_eventGetZoomScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::MapViewComponent_eventGetZoomScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_GetZoomScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_GetZoomScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execGetZoomScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetZoomScale();
	P_NATIVE_END;
}
// End Class UMapViewComponent Function GetZoomScale

// Begin Class UMapViewComponent Function IsIconCategoryVisible
struct Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics
{
	struct MapViewComponent_eventIsIconCategoryVisible_Parms
	{
		FName IconCategory;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns visibility of MapIcons with this IconCategory\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns visibility of MapIcons with this IconCategory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconCategory;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::NewProp_IconCategory = { "IconCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventIsIconCategoryVisible_Parms, IconCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapViewComponent_eventIsIconCategoryVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapViewComponent_eventIsIconCategoryVisible_Parms), &Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::NewProp_IconCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "IsIconCategoryVisible", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::MapViewComponent_eventIsIconCategoryVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::MapViewComponent_eventIsIconCategoryVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execIsIconCategoryVisible)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_IconCategory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsIconCategoryVisible(Z_Param_IconCategory);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function IsIconCategoryVisible

// Begin Class UMapViewComponent Function IsSameBackgroundLevel
struct Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics
{
	struct MapViewComponent_eventIsSameBackgroundLevel_Parms
	{
		const UMapIconComponent* MapIcon;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Computes whether an icon is considered on the same level, to be rendered\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computes whether an icon is considered on the same level, to be rendered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapIcon;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::NewProp_MapIcon = { "MapIcon", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventIsSameBackgroundLevel_Parms, MapIcon), Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapIcon_MetaData), NewProp_MapIcon_MetaData) };
void Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapViewComponent_eventIsSameBackgroundLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapViewComponent_eventIsSameBackgroundLevel_Parms), &Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::NewProp_MapIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "IsSameBackgroundLevel", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::MapViewComponent_eventIsSameBackgroundLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::MapViewComponent_eventIsSameBackgroundLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execIsSameBackgroundLevel)
{
	P_GET_OBJECT(UMapIconComponent,Z_Param_MapIcon);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSameBackgroundLevel(Z_Param_MapIcon);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function IsSameBackgroundLevel

// Begin Class UMapViewComponent Function RegisterMultiLevelMapBackground
struct Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics
{
	struct MapViewComponent_eventRegisterMultiLevelMapBackground_Parms
	{
		AMapBackground* MapBackground;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventRegisterMultiLevelMapBackground_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::NewProp_MapBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "RegisterMultiLevelMapBackground", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::MapViewComponent_eventRegisterMultiLevelMapBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::MapViewComponent_eventRegisterMultiLevelMapBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execRegisterMultiLevelMapBackground)
{
	P_GET_OBJECT(AMapBackground,Z_Param_MapBackground);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterMultiLevelMapBackground(Z_Param_MapBackground);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function RegisterMultiLevelMapBackground

// Begin Class UMapViewComponent Function SetIconCategoryVisible
struct Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics
{
	struct MapViewComponent_eventSetIconCategoryVisible_Parms
	{
		FName IconCategory;
		bool bNewVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Affects visibility of any MapIcon with this IconCategory\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Affects visibility of any MapIcon with this IconCategory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IconCategory;
	static void NewProp_bNewVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::NewProp_IconCategory = { "IconCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventSetIconCategoryVisible_Parms, IconCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::NewProp_bNewVisible_SetBit(void* Obj)
{
	((MapViewComponent_eventSetIconCategoryVisible_Parms*)Obj)->bNewVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::NewProp_bNewVisible = { "bNewVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapViewComponent_eventSetIconCategoryVisible_Parms), &Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::NewProp_bNewVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewVisible_MetaData), NewProp_bNewVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::NewProp_IconCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::NewProp_bNewVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "SetIconCategoryVisible", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::MapViewComponent_eventSetIconCategoryVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::MapViewComponent_eventSetIconCategoryVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execSetIconCategoryVisible)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_IconCategory);
	P_GET_UBOOL(Z_Param_bNewVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIconCategoryVisible(Z_Param_IconCategory,Z_Param_bNewVisible);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function SetIconCategoryVisible

// Begin Class UMapViewComponent Function SetViewExtent
struct Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics
{
	struct MapViewComponent_eventSetViewExtent_Parms
	{
		float NewViewExtentX;
		float NewViewExtentY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets how far the map will display in world units\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets how far the map will display in world units" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewViewExtentX_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewViewExtentY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewViewExtentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewViewExtentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::NewProp_NewViewExtentX = { "NewViewExtentX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventSetViewExtent_Parms, NewViewExtentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewViewExtentX_MetaData), NewProp_NewViewExtentX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::NewProp_NewViewExtentY = { "NewViewExtentY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventSetViewExtent_Parms, NewViewExtentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewViewExtentY_MetaData), NewProp_NewViewExtentY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::NewProp_NewViewExtentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::NewProp_NewViewExtentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "SetViewExtent", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::MapViewComponent_eventSetViewExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::MapViewComponent_eventSetViewExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_SetViewExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_SetViewExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execSetViewExtent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewViewExtentX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewViewExtentY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewExtent(Z_Param_NewViewExtentX,Z_Param_NewViewExtentY);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function SetViewExtent

// Begin Class UMapViewComponent Function SetZoomScale
struct Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics
{
	struct MapViewComponent_eventSetZoomScale_Parms
	{
		float NewZoomScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set how far the minimap is zoomed out. The total world area visible is ZoomScale x ViewExtent\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set how far the minimap is zoomed out. The total world area visible is ZoomScale x ViewExtent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewZoomScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoomScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::NewProp_NewZoomScale = { "NewZoomScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventSetZoomScale_Parms, NewZoomScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewZoomScale_MetaData), NewProp_NewZoomScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::NewProp_NewZoomScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "SetZoomScale", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::MapViewComponent_eventSetZoomScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::MapViewComponent_eventSetZoomScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_SetZoomScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_SetZoomScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execSetZoomScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoomScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetZoomScale(Z_Param_NewZoomScale);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function SetZoomScale

// Begin Class UMapViewComponent Function UnregisterMultiLevelMapBackground
struct Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics
{
	struct MapViewComponent_eventUnregisterMultiLevelMapBackground_Parms
	{
		AMapBackground* MapBackground;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventUnregisterMultiLevelMapBackground_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::NewProp_MapBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "UnregisterMultiLevelMapBackground", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::MapViewComponent_eventUnregisterMultiLevelMapBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::MapViewComponent_eventUnregisterMultiLevelMapBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execUnregisterMultiLevelMapBackground)
{
	P_GET_OBJECT(AMapBackground,Z_Param_MapBackground);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterMultiLevelMapBackground(Z_Param_MapBackground);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function UnregisterMultiLevelMapBackground

// Begin Class UMapViewComponent Function ViewContains
struct Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics
{
	struct MapViewComponent_eventViewContains_Parms
	{
		FVector WorldPos;
		float WorldRadius;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Broad check for whether a component is possibly in view. False outcomes are always correct. True outcomes need to be further inspected.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broad check for whether a component is possibly in view. False outcomes are always correct. True outcomes need to be further inspected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldRadius;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventViewContains_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPos_MetaData), NewProp_WorldPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_WorldRadius = { "WorldRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapViewComponent_eventViewContains_Parms, WorldRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRadius_MetaData), NewProp_WorldRadius_MetaData) };
void Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapViewComponent_eventViewContains_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapViewComponent_eventViewContains_Parms), &Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_WorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_WorldRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapViewComponent, nullptr, "ViewContains", nullptr, nullptr, Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::MapViewComponent_eventViewContains_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::MapViewComponent_eventViewContains_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapViewComponent_ViewContains()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapViewComponent_ViewContains_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapViewComponent::execViewContains)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WorldRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ViewContains(Z_Param_Out_WorldPos,Z_Param_WorldRadius);
	P_NATIVE_END;
}
// End Class UMapViewComponent Function ViewContains

// Begin Class UMapViewComponent
void UMapViewComponent::StaticRegisterNativesUMapViewComponent()
{
	UClass* Class = UMapViewComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeprojectViewToWorld", &UMapViewComponent::execDeprojectViewToWorld },
		{ "GetActiveBackgroundLevel", &UMapViewComponent::execGetActiveBackgroundLevel },
		{ "GetActiveBackgroundPriority", &UMapViewComponent::execGetActiveBackgroundPriority },
		{ "GetViewAspectRatio", &UMapViewComponent::execGetViewAspectRatio },
		{ "GetViewCoordinates", &UMapViewComponent::execGetViewCoordinates },
		{ "GetViewExtent", &UMapViewComponent::execGetViewExtent },
		{ "GetViewYaw", &UMapViewComponent::execGetViewYaw },
		{ "GetWorldCorners", &UMapViewComponent::execGetWorldCorners },
		{ "GetZoomScale", &UMapViewComponent::execGetZoomScale },
		{ "IsIconCategoryVisible", &UMapViewComponent::execIsIconCategoryVisible },
		{ "IsSameBackgroundLevel", &UMapViewComponent::execIsSameBackgroundLevel },
		{ "RegisterMultiLevelMapBackground", &UMapViewComponent::execRegisterMultiLevelMapBackground },
		{ "SetIconCategoryVisible", &UMapViewComponent::execSetIconCategoryVisible },
		{ "SetViewExtent", &UMapViewComponent::execSetViewExtent },
		{ "SetZoomScale", &UMapViewComponent::execSetZoomScale },
		{ "UnregisterMultiLevelMapBackground", &UMapViewComponent::execUnregisterMultiLevelMapBackground },
		{ "ViewContains", &UMapViewComponent::execViewContains },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapViewComponent);
UClass* Z_Construct_UClass_UMapViewComponent_NoRegister()
{
	return UMapViewComponent::StaticClass();
}
struct Z_Construct_UClass_UMapViewComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MinimapPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Represents a world area to render to a map, in terms of a location, rotation and XY view size.\n// Add this to any character or other actor which serves as a center point for a map or minimap. \n// Note that for your convenience MapBackground actors have a MapViewComponent that you can use \n// to render exactly the area covered by the MapBackground actor.\n" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "MapViewComponent.h" },
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Represents a world area to render to a map, in terms of a location, rotation and XY view size.\nAdd this to any character or other actor which serves as a center point for a map or minimap.\nNote that for your convenience MapBackground actors have a MapViewComponent that you can use\nto render exactly the area covered by the MapBackground actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnVisibleCategoriesChanged_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event that fires when visible icon categories change\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that fires when visible icon categories change" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnViewSizeChanged_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event that fires when the view size is changed\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that fires when the view size is changed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnViewDestroyed_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event that fires when the view component is destroyed\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that fires when the view component is destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How the map view's runtime rotation will be updated. Set to InheritYaw for rotating minimaps and UseFixedRotation for non-rotating top down or side scrolling maps.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the map view's runtime rotation will be updated. Set to InheritYaw for rotating minimaps and UseFixedRotation for non-rotating top down or side scrolling maps." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FixedRotation_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If RotationMode is set to UseFixedRotation, what world rotation the map view will use\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If RotationMode is set to UseFixedRotation, what world rotation the map view will use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InheritedYawOffset_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If RotationMode is set to InheritYaw, the offset to add to the parent component's yaw to obtain this map view's yaw\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If RotationMode is set to InheritYaw, the offset to add to the parent component's yaw to obtain this map view's yaw" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportZooming_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uncheck to disable zooming with this view\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uncheck to disable zooming with this view" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightProxy_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set, this scene component's Z coordinate is used for selecting background levels\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set, this scene component's Z coordinate is used for selecting background levels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgoundLevelCacheLifetime_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The interval at which the map view recomputes his height level position on multi-level backgrounds.\n// When the map view is inside a multi-level background volume, icons on other levels aren't rendered.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The interval at which the map view recomputes his height level position on multi-level backgrounds.\nWhen the map view is inside a multi-level background volume, icons on other levels aren't rendered." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapBackgrounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per multi-level background, the height level this map view is on.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per multi-level background, the height level this map view is on." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionOnMultiLevelBackgrounds_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per multi-level background, the height level this map view is on.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapViewComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per multi-level background, the height level this map view is on." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVisibleCategoriesChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnViewSizeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnViewDestroyed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FixedRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritedYawOffset;
	static void NewProp_bSupportZooming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportZooming;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightProxy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackgoundLevelCacheLifetime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackgrounds_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_MapBackgrounds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PositionOnMultiLevelBackgrounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionOnMultiLevelBackgrounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PositionOnMultiLevelBackgrounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapViewComponent_DeprojectViewToWorld, "DeprojectViewToWorld" }, // 1192212852
		{ &Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundLevel, "GetActiveBackgroundLevel" }, // 1378053659
		{ &Z_Construct_UFunction_UMapViewComponent_GetActiveBackgroundPriority, "GetActiveBackgroundPriority" }, // 777789083
		{ &Z_Construct_UFunction_UMapViewComponent_GetViewAspectRatio, "GetViewAspectRatio" }, // 1157248867
		{ &Z_Construct_UFunction_UMapViewComponent_GetViewCoordinates, "GetViewCoordinates" }, // 3336216564
		{ &Z_Construct_UFunction_UMapViewComponent_GetViewExtent, "GetViewExtent" }, // 2592486125
		{ &Z_Construct_UFunction_UMapViewComponent_GetViewYaw, "GetViewYaw" }, // 2364297471
		{ &Z_Construct_UFunction_UMapViewComponent_GetWorldCorners, "GetWorldCorners" }, // 893946646
		{ &Z_Construct_UFunction_UMapViewComponent_GetZoomScale, "GetZoomScale" }, // 3649325884
		{ &Z_Construct_UFunction_UMapViewComponent_IsIconCategoryVisible, "IsIconCategoryVisible" }, // 1202584101
		{ &Z_Construct_UFunction_UMapViewComponent_IsSameBackgroundLevel, "IsSameBackgroundLevel" }, // 849246269
		{ &Z_Construct_UFunction_UMapViewComponent_RegisterMultiLevelMapBackground, "RegisterMultiLevelMapBackground" }, // 3122836361
		{ &Z_Construct_UFunction_UMapViewComponent_SetIconCategoryVisible, "SetIconCategoryVisible" }, // 2242492207
		{ &Z_Construct_UFunction_UMapViewComponent_SetViewExtent, "SetViewExtent" }, // 3577287939
		{ &Z_Construct_UFunction_UMapViewComponent_SetZoomScale, "SetZoomScale" }, // 860348275
		{ &Z_Construct_UFunction_UMapViewComponent_UnregisterMultiLevelMapBackground, "UnregisterMultiLevelMapBackground" }, // 3108290001
		{ &Z_Construct_UFunction_UMapViewComponent_ViewContains, "ViewContains" }, // 486663267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapViewComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_OnVisibleCategoriesChanged = { "OnVisibleCategoriesChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, OnVisibleCategoriesChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapViewCategoriesChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnVisibleCategoriesChanged_MetaData), NewProp_OnVisibleCategoriesChanged_MetaData) }; // 1396745396
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_OnViewSizeChanged = { "OnViewSizeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, OnViewSizeChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapViewSizeChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnViewSizeChanged_MetaData), NewProp_OnViewSizeChanged_MetaData) }; // 2382572578
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_OnViewDestroyed = { "OnViewDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, OnViewDestroyed), Z_Construct_UDelegateFunction_MinimapPlugin_MapViewDestroyedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnViewDestroyed_MetaData), NewProp_OnViewDestroyed_MetaData) }; // 3649992407
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, RotationMode), Z_Construct_UEnum_MinimapPlugin_EMapViewRotationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationMode_MetaData), NewProp_RotationMode_MetaData) }; // 1162657592
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_FixedRotation = { "FixedRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, FixedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FixedRotation_MetaData), NewProp_FixedRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_InheritedYawOffset = { "InheritedYawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, InheritedYawOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InheritedYawOffset_MetaData), NewProp_InheritedYawOffset_MetaData) };
void Z_Construct_UClass_UMapViewComponent_Statics::NewProp_bSupportZooming_SetBit(void* Obj)
{
	((UMapViewComponent*)Obj)->bSupportZooming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_bSupportZooming = { "bSupportZooming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapViewComponent), &Z_Construct_UClass_UMapViewComponent_Statics::NewProp_bSupportZooming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportZooming_MetaData), NewProp_bSupportZooming_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_HeightProxy = { "HeightProxy", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, HeightProxy), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightProxy_MetaData), NewProp_HeightProxy_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_BackgoundLevelCacheLifetime = { "BackgoundLevelCacheLifetime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, BackgoundLevelCacheLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgoundLevelCacheLifetime_MetaData), NewProp_BackgoundLevelCacheLifetime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_MapBackgrounds_ElementProp = { "MapBackgrounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_MapBackgrounds = { "MapBackgrounds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, MapBackgrounds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapBackgrounds_MetaData), NewProp_MapBackgrounds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_PositionOnMultiLevelBackgrounds_ValueProp = { "PositionOnMultiLevelBackgrounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_PositionOnMultiLevelBackgrounds_Key_KeyProp = { "PositionOnMultiLevelBackgrounds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMapViewComponent_Statics::NewProp_PositionOnMultiLevelBackgrounds = { "PositionOnMultiLevelBackgrounds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapViewComponent, PositionOnMultiLevelBackgrounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionOnMultiLevelBackgrounds_MetaData), NewProp_PositionOnMultiLevelBackgrounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapViewComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_OnVisibleCategoriesChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_OnViewSizeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_OnViewDestroyed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_FixedRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_InheritedYawOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_bSupportZooming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_HeightProxy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_BackgoundLevelCacheLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_MapBackgrounds_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_MapBackgrounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_PositionOnMultiLevelBackgrounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_PositionOnMultiLevelBackgrounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapViewComponent_Statics::NewProp_PositionOnMultiLevelBackgrounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapViewComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapViewComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapViewComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapViewComponent_Statics::ClassParams = {
	&UMapViewComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapViewComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapViewComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapViewComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapViewComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapViewComponent()
{
	if (!Z_Registration_Info_UClass_UMapViewComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapViewComponent.OuterSingleton, Z_Construct_UClass_UMapViewComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapViewComponent.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapViewComponent>()
{
	return UMapViewComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapViewComponent);
UMapViewComponent::~UMapViewComponent() {}
// End Class UMapViewComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapViewComponent, UMapViewComponent::StaticClass, TEXT("UMapViewComponent"), &Z_Registration_Info_UClass_UMapViewComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapViewComponent), 2872732030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_4163980058(TEXT("/Script/MinimapPlugin"),
	Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapViewComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
