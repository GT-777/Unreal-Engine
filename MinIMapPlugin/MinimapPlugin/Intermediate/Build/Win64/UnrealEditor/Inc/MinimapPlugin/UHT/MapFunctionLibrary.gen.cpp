// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapBackground_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapFunctionLibrary();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapFunctionLibrary_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapIconComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapTrackerComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent_NoRegister();
MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption();
UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References

// Begin Class UMapFunctionLibrary Function BoxSelectInView
struct Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics
{
	struct MapFunctionLibrary_eventBoxSelectInView_Parms
	{
		FVector2D StartUV;
		FVector2D EndUV;
		UMapViewComponent* MapView;
		bool bIsCircular;
		TArray<UMapIconComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Given a box selection in a view, gathers all map icons that intersect with the box.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a box selection in a view, gathers all map icons that intersect with the box." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartUV_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndUV_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartUV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndUV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapView;
	static void NewProp_bIsCircular_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_StartUV = { "StartUV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, StartUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartUV_MetaData), NewProp_StartUV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_EndUV = { "EndUV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, EndUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndUV_MetaData), NewProp_EndUV_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapView_MetaData), NewProp_MapView_MetaData) };
void Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular_SetBit(void* Obj)
{
	((MapFunctionLibrary_eventBoxSelectInView_Parms*)Obj)->bIsCircular = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventBoxSelectInView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCircular_MetaData), NewProp_bIsCircular_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventBoxSelectInView_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_StartUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_EndUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_MapView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_bIsCircular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "BoxSelectInView", nullptr, nullptr, Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::MapFunctionLibrary_eventBoxSelectInView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::MapFunctionLibrary_eventBoxSelectInView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapFunctionLibrary::execBoxSelectInView)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_StartUV);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_EndUV);
	P_GET_OBJECT(UMapViewComponent,Z_Param_MapView);
	P_GET_UBOOL(Z_Param_bIsCircular);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMapIconComponent*>*)Z_Param__Result=UMapFunctionLibrary::BoxSelectInView(Z_Param_Out_StartUV,Z_Param_Out_EndUV,Z_Param_MapView,Z_Param_bIsCircular);
	P_NATIVE_END;
}
// End Class UMapFunctionLibrary Function BoxSelectInView

// Begin Class UMapFunctionLibrary Function ClampIntoView
struct Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics
{
	struct MapFunctionLibrary_eventClampIntoView_Parms
	{
		FVector2D UV;
		float OuterRadiusUV;
		bool bIsCircular;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Moves an element completely into minimap space, given its UV coordinates and UV size.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Moves an element completely into minimap space, given its UV coordinates and UV size." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadiusUV_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadiusUV;
	static void NewProp_bIsCircular_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventClampIntoView_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV_MetaData), NewProp_UV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_OuterRadiusUV = { "OuterRadiusUV", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventClampIntoView_Parms, OuterRadiusUV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterRadiusUV_MetaData), NewProp_OuterRadiusUV_MetaData) };
void Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular_SetBit(void* Obj)
{
	((MapFunctionLibrary_eventClampIntoView_Parms*)Obj)->bIsCircular = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventClampIntoView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCircular_MetaData), NewProp_bIsCircular_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventClampIntoView_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_OuterRadiusUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_bIsCircular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "ClampIntoView", nullptr, nullptr, Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::MapFunctionLibrary_eventClampIntoView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::MapFunctionLibrary_eventClampIntoView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapFunctionLibrary::execClampIntoView)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OuterRadiusUV);
	P_GET_UBOOL(Z_Param_bIsCircular);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UMapFunctionLibrary::ClampIntoView(Z_Param_Out_UV,Z_Param_OuterRadiusUV,Z_Param_bIsCircular);
	P_NATIVE_END;
}
// End Class UMapFunctionLibrary Function ClampIntoView

// Begin Class UMapFunctionLibrary Function ComputeViewFrustum
struct Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics
{
	struct MapFunctionLibrary_eventComputeViewFrustum_Parms
	{
		const UObject* WorldContextObject;
		UMapViewComponent* MapView;
		bool bIsCircular;
		TArray<FVector2D> CornerUVs;
		float FloorDistance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Computes a top-down trapezoid that represents the player camera's view frustum. Trapezoid is computed by generating 4 lines through the corners of the player's viewport and \n// computing their intersection with the up-facing floor at 'FloorDistance' distance away from the camera. Returns true only when the view frustum could be computed. It fails\n// when the player is looking upward or if looking too closely towards the horizon. On success, CornerUVs stores the 4 points in minimap space that form the trapezoid.\n" },
#endif
		{ "CPP_Default_FloorDistance", "600.000000" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computes a top-down trapezoid that represents the player camera's view frustum. Trapezoid is computed by generating 4 lines through the corners of the player's viewport and\ncomputing their intersection with the up-facing floor at 'FloorDistance' distance away from the camera. Returns true only when the view frustum could be computed. It fails\nwhen the player is looking upward or if looking too closely towards the horizon. On success, CornerUVs stores the 4 points in minimap space that form the trapezoid." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapView;
	static void NewProp_bIsCircular_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerUVs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CornerUVs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorDistance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapView_MetaData), NewProp_MapView_MetaData) };
void Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular_SetBit(void* Obj)
{
	((MapFunctionLibrary_eventComputeViewFrustum_Parms*)Obj)->bIsCircular = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventComputeViewFrustum_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCircular_MetaData), NewProp_bIsCircular_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs_Inner = { "CornerUVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs = { "CornerUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, CornerUVs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance = { "FloorDistance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventComputeViewFrustum_Parms, FloorDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorDistance_MetaData), NewProp_FloorDistance_MetaData) };
void Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapFunctionLibrary_eventComputeViewFrustum_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventComputeViewFrustum_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_MapView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_bIsCircular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_CornerUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_FloorDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "ComputeViewFrustum", nullptr, nullptr, Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::MapFunctionLibrary_eventComputeViewFrustum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::MapFunctionLibrary_eventComputeViewFrustum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapFunctionLibrary::execComputeViewFrustum)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UMapViewComponent,Z_Param_MapView);
	P_GET_UBOOL(Z_Param_bIsCircular);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_CornerUVs);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FloorDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMapFunctionLibrary::ComputeViewFrustum(Z_Param_WorldContextObject,Z_Param_MapView,Z_Param_bIsCircular,Z_Param_Out_CornerUVs,Z_Param_FloorDistance);
	P_NATIVE_END;
}
// End Class UMapFunctionLibrary Function ComputeViewFrustum

// Begin Class UMapFunctionLibrary Function DetectIsInView
struct Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics
{
	struct MapFunctionLibrary_eventDetectIsInView_Parms
	{
		FVector2D UV;
		FVector2D OuterRadiusUV;
		bool bIsCircular;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Computes whether an icon is visible in view, given its UV coordinates and UV size in normalized view space.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Computes whether an icon is visible in view, given its UV coordinates and UV size in normalized view space." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadiusUV_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OuterRadiusUV;
	static void NewProp_bIsCircular_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventDetectIsInView_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV_MetaData), NewProp_UV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_OuterRadiusUV = { "OuterRadiusUV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventDetectIsInView_Parms, OuterRadiusUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterRadiusUV_MetaData), NewProp_OuterRadiusUV_MetaData) };
void Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular_SetBit(void* Obj)
{
	((MapFunctionLibrary_eventDetectIsInView_Parms*)Obj)->bIsCircular = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventDetectIsInView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCircular_MetaData), NewProp_bIsCircular_MetaData) };
void Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapFunctionLibrary_eventDetectIsInView_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFunctionLibrary_eventDetectIsInView_Parms), &Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_UV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_OuterRadiusUV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_bIsCircular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "DetectIsInView", nullptr, nullptr, Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::MapFunctionLibrary_eventDetectIsInView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::MapFunctionLibrary_eventDetectIsInView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapFunctionLibrary::execDetectIsInView)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_UV);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OuterRadiusUV);
	P_GET_UBOOL(Z_Param_bIsCircular);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMapFunctionLibrary::DetectIsInView(Z_Param_Out_UV,Z_Param_Out_OuterRadiusUV,Z_Param_bIsCircular);
	P_NATIVE_END;
}
// End Class UMapFunctionLibrary Function DetectIsInView

// Begin Class UMapFunctionLibrary Function FindMapView
struct Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics
{
	struct MapFunctionLibrary_eventFindMapView_Parms
	{
		UObject* WorldContextObject;
		EMapViewSearchOption MapViewSearchOption;
		UMapViewComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility option to find a MapViewComponent in the world\n" },
#endif
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility option to find a MapViewComponent in the world" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapViewSearchOption_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MapViewSearchOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MapViewSearchOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventFindMapView_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption = { "MapViewSearchOption", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventFindMapView_Parms, MapViewSearchOption), Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapViewSearchOption_MetaData), NewProp_MapViewSearchOption_MetaData) }; // 1004760387
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventFindMapView_Parms, ReturnValue), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_MapViewSearchOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "FindMapView", nullptr, nullptr, Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::MapFunctionLibrary_eventFindMapView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::MapFunctionLibrary_eventFindMapView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapFunctionLibrary_FindMapView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_FindMapView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapFunctionLibrary::execFindMapView)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(EMapViewSearchOption,Z_Param_MapViewSearchOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMapViewComponent**)Z_Param__Result=UMapFunctionLibrary::FindMapView(Z_Param_WorldContextObject,EMapViewSearchOption(Z_Param_MapViewSearchOption));
	P_NATIVE_END;
}
// End Class UMapFunctionLibrary Function FindMapView

// Begin Class UMapFunctionLibrary Function GetFirstMapBackground
struct Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics
{
	struct MapFunctionLibrary_eventGetFirstMapBackground_Parms
	{
		const UObject* WorldContextObject;
		AMapBackground* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retrieves the first MapBackground placed in the level, if any. If you expect more than one MapBackground, you shouldn't use this function.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the first MapBackground placed in the level, if any. If you expect more than one MapBackground, you shouldn't use this function." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetFirstMapBackground_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetFirstMapBackground_Parms, ReturnValue), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "GetFirstMapBackground", nullptr, nullptr, Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::MapFunctionLibrary_eventGetFirstMapBackground_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::MapFunctionLibrary_eventGetFirstMapBackground_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapFunctionLibrary::execGetFirstMapBackground)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMapBackground**)Z_Param__Result=UMapFunctionLibrary::GetFirstMapBackground(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UMapFunctionLibrary Function GetFirstMapBackground

// Begin Class UMapFunctionLibrary Function GetMapTracker
struct Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics
{
	struct MapFunctionLibrary_eventGetMapTracker_Parms
	{
		const UObject* WorldContextObject;
		UMapTrackerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retrieves the central MapTrackerComponent component.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the central MapTrackerComponent component." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetMapTracker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFunctionLibrary_eventGetMapTracker_Parms, ReturnValue), Z_Construct_UClass_UMapTrackerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapFunctionLibrary, nullptr, "GetMapTracker", nullptr, nullptr, Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::MapFunctionLibrary_eventGetMapTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::MapFunctionLibrary_eventGetMapTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapFunctionLibrary::execGetMapTracker)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMapTrackerComponent**)Z_Param__Result=UMapFunctionLibrary::GetMapTracker(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UMapFunctionLibrary Function GetMapTracker

// Begin Class UMapFunctionLibrary
void UMapFunctionLibrary::StaticRegisterNativesUMapFunctionLibrary()
{
	UClass* Class = UMapFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BoxSelectInView", &UMapFunctionLibrary::execBoxSelectInView },
		{ "ClampIntoView", &UMapFunctionLibrary::execClampIntoView },
		{ "ComputeViewFrustum", &UMapFunctionLibrary::execComputeViewFrustum },
		{ "DetectIsInView", &UMapFunctionLibrary::execDetectIsInView },
		{ "FindMapView", &UMapFunctionLibrary::execFindMapView },
		{ "GetFirstMapBackground", &UMapFunctionLibrary::execGetFirstMapBackground },
		{ "GetMapTracker", &UMapFunctionLibrary::execGetMapTracker },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapFunctionLibrary);
UClass* Z_Construct_UClass_UMapFunctionLibrary_NoRegister()
{
	return UMapFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UMapFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Utility functions for the minimap plugin\n" },
#endif
		{ "IncludePath", "MapFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MapFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility functions for the minimap plugin" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapFunctionLibrary_BoxSelectInView, "BoxSelectInView" }, // 3073552871
		{ &Z_Construct_UFunction_UMapFunctionLibrary_ClampIntoView, "ClampIntoView" }, // 3901805525
		{ &Z_Construct_UFunction_UMapFunctionLibrary_ComputeViewFrustum, "ComputeViewFrustum" }, // 1586661222
		{ &Z_Construct_UFunction_UMapFunctionLibrary_DetectIsInView, "DetectIsInView" }, // 1090920388
		{ &Z_Construct_UFunction_UMapFunctionLibrary_FindMapView, "FindMapView" }, // 1174476369
		{ &Z_Construct_UFunction_UMapFunctionLibrary_GetFirstMapBackground, "GetFirstMapBackground" }, // 1789373149
		{ &Z_Construct_UFunction_UMapFunctionLibrary_GetMapTracker, "GetMapTracker" }, // 3473705480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMapFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapFunctionLibrary_Statics::ClassParams = {
	&UMapFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMapFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMapFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapFunctionLibrary.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapFunctionLibrary>()
{
	return UMapFunctionLibrary::StaticClass();
}
UMapFunctionLibrary::UMapFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapFunctionLibrary);
UMapFunctionLibrary::~UMapFunctionLibrary() {}
// End Class UMapFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapFunctionLibrary, UMapFunctionLibrary::StaticClass, TEXT("UMapFunctionLibrary"), &Z_Registration_Info_UClass_UMapFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapFunctionLibrary), 3946493404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_581108827(TEXT("/Script/MinimapPlugin"),
	Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
