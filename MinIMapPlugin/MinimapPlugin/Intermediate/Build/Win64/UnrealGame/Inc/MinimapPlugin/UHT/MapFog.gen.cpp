// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapFog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapFog() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapAreaBase();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapFog();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapFog_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRendererComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRevealerComponent_NoRegister();
MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References

// Begin Delegate FMapFogMaterialChangedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms
	{
		AMapFog* MapFog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapFog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapFog = { "MapFog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms, MapFog), Z_Construct_UClass_AMapFog_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapFog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapFogMaterialChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapFogMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapFogMaterialChangedSignature, AMapFog* MapFog)
{
	struct _Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms
	{
		AMapFog* MapFog;
	};
	_Script_MinimapPlugin_eventMapFogMaterialChangedSignature_Parms Parms;
	Parms.MapFog=MapFog;
	MapFogMaterialChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapFogMaterialChangedSignature

// Begin Class AMapFog Function GetDestinationFogRenderTarget
struct Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics
{
	struct MapFog_eventGetDestinationFogRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is written to this frame.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is written to this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetDestinationFogRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetDestinationFogRenderTarget", nullptr, nullptr, Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::MapFog_eventGetDestinationFogRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::MapFog_eventGetDestinationFogRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execGetDestinationFogRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetDestinationFogRenderTarget();
	P_NATIVE_END;
}
// End Class AMapFog Function GetDestinationFogRenderTarget

// Begin Class AMapFog Function GetFogAtLocation
struct Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics
{
	struct MapFog_eventGetFogAtLocation_Parms
	{
		FVector WorldLocation;
		bool bRequireCurrentlyRevealing;
		float RevealFactor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves fog at location. Returns true if the location was covered by this MapFog. Warning: Reads from render target which is expensive, but only does this once per frame.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Retrieves fog at location. Returns true if the location was covered by this MapFog. Warning: Reads from render target which is expensive, but only does this once per frame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentlyRevealing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static void NewProp_bRequireCurrentlyRevealing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentlyRevealing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RevealFactor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetFogAtLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
void Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing_SetBit(void* Obj)
{
	((MapFog_eventGetFogAtLocation_Parms*)Obj)->bRequireCurrentlyRevealing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing = { "bRequireCurrentlyRevealing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFog_eventGetFogAtLocation_Parms), &Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireCurrentlyRevealing_MetaData), NewProp_bRequireCurrentlyRevealing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_RevealFactor = { "RevealFactor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetFogAtLocation_Parms, RevealFactor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapFog_eventGetFogAtLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapFog_eventGetFogAtLocation_Parms), &Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_bRequireCurrentlyRevealing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_RevealFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetFogAtLocation", nullptr, nullptr, Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::MapFog_eventGetFogAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::MapFog_eventGetFogAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_GetFogAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_GetFogAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execGetFogAtLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_GET_UBOOL(Z_Param_bRequireCurrentlyRevealing);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RevealFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFogAtLocation(Z_Param_Out_WorldLocation,Z_Param_bRequireCurrentlyRevealing,Z_Param_Out_RevealFactor);
	P_NATIVE_END;
}
// End Class AMapFog Function GetFogAtLocation

// Begin Class AMapFog Function GetFogMaterialForUMG
struct Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics
{
	struct MapFog_eventGetFogMaterialForUMG_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves what material is used to render this volume's fog in UMG\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Retrieves what material is used to render this volume's fog in UMG" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetFogMaterialForUMG_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetFogMaterialForUMG", nullptr, nullptr, Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::MapFog_eventGetFogMaterialForUMG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::MapFog_eventGetFogMaterialForUMG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execGetFogMaterialForUMG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetFogMaterialForUMG();
	P_NATIVE_END;
}
// End Class AMapFog Function GetFogMaterialForUMG

// Begin Class AMapFog Function GetFogMaterialInstanceForCanvas
struct Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics
{
	struct MapFog_eventGetFogMaterialInstanceForCanvas_Parms
	{
		UMapRendererComponent* Renderer;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves what material is used to render this volume's fog on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Retrieves what material is used to render this volume's fog on UCanvas" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Renderer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Renderer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetFogMaterialInstanceForCanvas_Parms, Renderer), Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Renderer_MetaData), NewProp_Renderer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetFogMaterialInstanceForCanvas_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_Renderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetFogMaterialInstanceForCanvas", nullptr, nullptr, Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::MapFog_eventGetFogMaterialInstanceForCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::MapFog_eventGetFogMaterialInstanceForCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execGetFogMaterialInstanceForCanvas)
{
	P_GET_OBJECT(UMapRendererComponent,Z_Param_Renderer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetFogMaterialInstanceForCanvas(Z_Param_Renderer);
	P_NATIVE_END;
}
// End Class AMapFog Function GetFogMaterialInstanceForCanvas

// Begin Class AMapFog Function GetSourceFogRenderTarget
struct Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics
{
	struct MapFog_eventGetSourceFogRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is read from this frame.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Returns the texture that stores what area is revealed. Double buffering is used. This will retrieve the render target that is read from this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetSourceFogRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetSourceFogRenderTarget", nullptr, nullptr, Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::MapFog_eventGetSourceFogRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::MapFog_eventGetSourceFogRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execGetSourceFogRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetSourceFogRenderTarget();
	P_NATIVE_END;
}
// End Class AMapFog Function GetSourceFogRenderTarget

// Begin Class AMapFog Function GetWorldToPixelRatio
struct Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics
{
	struct MapFog_eventGetWorldToPixelRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the ratio between world units and pixels\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Returns the ratio between world units and pixels" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventGetWorldToPixelRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "GetWorldToPixelRatio", nullptr, nullptr, Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::MapFog_eventGetWorldToPixelRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::MapFog_eventGetWorldToPixelRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execGetWorldToPixelRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWorldToPixelRatio();
	P_NATIVE_END;
}
// End Class AMapFog Function GetWorldToPixelRatio

// Begin Class AMapFog Function OnMapRevealerRegistered
struct Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics
{
	struct MapFog_eventOnMapRevealerRegistered_Parms
	{
		UMapRevealerComponent* MapRevealer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapRevealer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapRevealer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::NewProp_MapRevealer = { "MapRevealer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventOnMapRevealerRegistered_Parms, MapRevealer), Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapRevealer_MetaData), NewProp_MapRevealer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::NewProp_MapRevealer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "OnMapRevealerRegistered", nullptr, nullptr, Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::MapFog_eventOnMapRevealerRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::MapFog_eventOnMapRevealerRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execOnMapRevealerRegistered)
{
	P_GET_OBJECT(UMapRevealerComponent,Z_Param_MapRevealer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMapRevealerRegistered(Z_Param_MapRevealer);
	P_NATIVE_END;
}
// End Class AMapFog Function OnMapRevealerRegistered

// Begin Class AMapFog Function OnMapRevealerUnregistered
struct Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics
{
	struct MapFog_eventOnMapRevealerUnregistered_Parms
	{
		UMapRevealerComponent* MapRevealer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapRevealer_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapRevealer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::NewProp_MapRevealer = { "MapRevealer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventOnMapRevealerUnregistered_Parms, MapRevealer), Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapRevealer_MetaData), NewProp_MapRevealer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::NewProp_MapRevealer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "OnMapRevealerUnregistered", nullptr, nullptr, Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::MapFog_eventOnMapRevealerUnregistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::MapFog_eventOnMapRevealerUnregistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execOnMapRevealerUnregistered)
{
	P_GET_OBJECT(UMapRevealerComponent,Z_Param_MapRevealer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMapRevealerUnregistered(Z_Param_MapRevealer);
	P_NATIVE_END;
}
// End Class AMapFog Function OnMapRevealerUnregistered

// Begin Class AMapFog Function SetFogMaterialForCanvas
struct Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics
{
	struct MapFog_eventSetFogMaterialForCanvas_Parms
	{
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Changes what material is used to render this volume's fog on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Changes what material is used to render this volume's fog on UCanvas" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventSetFogMaterialForCanvas_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "SetFogMaterialForCanvas", nullptr, nullptr, Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::MapFog_eventSetFogMaterialForCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::MapFog_eventSetFogMaterialForCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execSetFogMaterialForCanvas)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogMaterialForCanvas(Z_Param_NewMaterial);
	P_NATIVE_END;
}
// End Class AMapFog Function SetFogMaterialForCanvas

// Begin Class AMapFog Function SetFogMaterialForUMG
struct Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics
{
	struct MapFog_eventSetFogMaterialForUMG_Parms
	{
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Changes what material is used to render this volume's fog in UMG\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Changes what material is used to render this volume's fog in UMG" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapFog_eventSetFogMaterialForUMG_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapFog, nullptr, "SetFogMaterialForUMG", nullptr, nullptr, Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::MapFog_eventSetFogMaterialForUMG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::MapFog_eventSetFogMaterialForUMG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapFog::execSetFogMaterialForUMG)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogMaterialForUMG(Z_Param_NewMaterial);
	P_NATIVE_END;
}
// End Class AMapFog Function SetFogMaterialForUMG

// Begin Class AMapFog
void AMapFog::StaticRegisterNativesAMapFog()
{
	UClass* Class = AMapFog::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDestinationFogRenderTarget", &AMapFog::execGetDestinationFogRenderTarget },
		{ "GetFogAtLocation", &AMapFog::execGetFogAtLocation },
		{ "GetFogMaterialForUMG", &AMapFog::execGetFogMaterialForUMG },
		{ "GetFogMaterialInstanceForCanvas", &AMapFog::execGetFogMaterialInstanceForCanvas },
		{ "GetSourceFogRenderTarget", &AMapFog::execGetSourceFogRenderTarget },
		{ "GetWorldToPixelRatio", &AMapFog::execGetWorldToPixelRatio },
		{ "OnMapRevealerRegistered", &AMapFog::execOnMapRevealerRegistered },
		{ "OnMapRevealerUnregistered", &AMapFog::execOnMapRevealerUnregistered },
		{ "SetFogMaterialForCanvas", &AMapFog::execSetFogMaterialForCanvas },
		{ "SetFogMaterialForUMG", &AMapFog::execSetFogMaterialForUMG },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapFog);
UClass* Z_Construct_UClass_AMapFog_NoRegister()
{
	return AMapFog::StaticClass();
}
struct Z_Construct_UClass_AMapFog_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapFog.h" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMapFogMaterialChanged_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Event that fires when the material used to render the background changes\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Event that fires when the material used to render the background changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogRenderTargetSize_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// Width and height of the texture in which vision information is stored. Increase to have more detailed fog boundaries at the cost of performance.\n// Especially if you use GetFogAtLocation() or any icon is configured to show/hide based on fog, having a large render target size will impact performance.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Width and height of the texture in which vision information is stored. Increase to have more detailed fog boundaries at the cost of performance.\nEspecially if you use GetFogAtLocation() or any icon is configured to show/hide based on fog, having a large render target size will impact performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogMaterial_UMG_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// This material is used to render the fog in UMG. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to render the fog in UMG. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogMaterial_Canvas_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// This material is used to render the fog on HUD canvas. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to render the fog on HUD canvas. It receives the fog data as two texture inputs named 'FogRevealedPermanent' and 'FogRevealedTemporary'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapOpacityHidden_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the map texture to show when a location is hidden in fog\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the map texture to show when a location is hidden in fog" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapOpacityExplored_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the map texture to show when a location is explored before by a permanent map revealer\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the map texture to show when a location is explored before by a permanent map revealer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapOpacityRevealing_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the map texture to show when a location is currently being revealed\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the map texture to show when a location is currently being revealed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogCombineMaterial_MetaData[] = {
		{ "Category", "Minimap Fog" },
		{ "Comment", "// This material is used to control how the revealed area expands over time given the previous and current frames' revealed areas.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to control how the revealed area expands over time given the previous and current frames' revealed areas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogCacheLifetime_MetaData[] = {
		{ "Category", "Gameplay Fog" },
		{ "Comment", "// If you call GetFogAtLocation() or if any icons are configured to show/hide based on fog, texture data will be retrieved from the GPU. Because this is a slow operation, the retrieved data \n// is cached and reused for a duration. This setting controls that duration. You can increase it for better performance but delayed response to fog.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If you call GetFogAtLocation() or if any icons are configured to show/hide based on fog, texture data will be retrieved from the GPU. Because this is a slow operation, the retrieved data\nis cached and reused for a duration. This setting controls that duration. You can increase it for better performance but delayed response to fog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWorldFog_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// If true, will apply fog to world as a post process effect\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If true, will apply fog to world as a post process effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogPostProcessMaterial_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// This material is used to render the fog in the world as a post process effect\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "This material is used to render the fog in the world as a post process effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOpacityHidden_MetaData[] = {
		{ "Category", "World Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the world to show when a location is hidden in fog\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the world to show when a location is hidden in fog" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOpacityExplored_MetaData[] = {
		{ "Category", "World Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the world to show when a location is explored before by a permanent map revealer\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the world to show when a location is explored before by a permanent map revealer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldOpacityRevealing_MetaData[] = {
		{ "Category", "World Fog" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much of the world to show when a location is currently being revealed\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "How much of the world to show when a location is currently being revealed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessVolume_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// If set, the FogPostProcessMaterial will be applied to this volume\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If set, the FogPostProcessMaterial will be applied to this volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoLocatePostProcessVolume_MetaData[] = {
		{ "Category", "World Fog" },
		{ "Comment", "// If PostProcessVolume isn't set, this setting controls what the plugin will do\n" },
		{ "EditCondition", "bEnableWorldFog" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "If PostProcessVolume isn't set, this setting controls what the plugin will do" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermanentRevealRT_A_MetaData[] = {
		{ "Comment", "// Render targets that store what parts of the fog are permanently revealed\n// Two render targets per reveal type for buffer swapping\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Render targets that store what parts of the fog are permanently revealed\nTwo render targets per reveal type for buffer swapping" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermanentRevealRT_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevealRT_Staging_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapFog.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
		{ "Comment", "// Instance of the background material per MapRendererComponent. Only used when rendering to a UCanvas.\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Instance of the background material per MapRendererComponent. Only used when rendering to a UCanvas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogCombineMatInst_MetaData[] = {
		{ "Comment", "// Instance of the fog combine material\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Instance of the fog combine material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogPostProcessMatInst_MetaData[] = {
		{ "Comment", "// Instance of the fog post process material\n" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Instance of the fog post process material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapRevealers_MetaData[] = {
		{ "Comment", "// Keep track of all fog revealers\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapFog.h" },
		{ "ToolTip", "Keep track of all fog revealers" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapFogMaterialChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FogRenderTargetSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogMaterial_UMG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogMaterial_Canvas;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapOpacityHidden;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapOpacityExplored;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapOpacityRevealing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogCombineMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogCacheLifetime;
	static void NewProp_bEnableWorldFog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWorldFog;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogPostProcessMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldOpacityHidden;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldOpacityExplored;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldOpacityRevealing;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessVolume;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoLocatePostProcessVolume_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoLocatePostProcessVolume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PermanentRevealRT_A;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PermanentRevealRT_B;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RevealRT_Staging;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogCombineMatInst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogPostProcessMatInst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapRevealers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MapRevealers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapFog_GetDestinationFogRenderTarget, "GetDestinationFogRenderTarget" }, // 2345240507
		{ &Z_Construct_UFunction_AMapFog_GetFogAtLocation, "GetFogAtLocation" }, // 1116403615
		{ &Z_Construct_UFunction_AMapFog_GetFogMaterialForUMG, "GetFogMaterialForUMG" }, // 2898105934
		{ &Z_Construct_UFunction_AMapFog_GetFogMaterialInstanceForCanvas, "GetFogMaterialInstanceForCanvas" }, // 502766197
		{ &Z_Construct_UFunction_AMapFog_GetSourceFogRenderTarget, "GetSourceFogRenderTarget" }, // 1243977469
		{ &Z_Construct_UFunction_AMapFog_GetWorldToPixelRatio, "GetWorldToPixelRatio" }, // 4004246977
		{ &Z_Construct_UFunction_AMapFog_OnMapRevealerRegistered, "OnMapRevealerRegistered" }, // 3599795230
		{ &Z_Construct_UFunction_AMapFog_OnMapRevealerUnregistered, "OnMapRevealerUnregistered" }, // 2613961616
		{ &Z_Construct_UFunction_AMapFog_SetFogMaterialForCanvas, "SetFogMaterialForCanvas" }, // 3004156475
		{ &Z_Construct_UFunction_AMapFog_SetFogMaterialForUMG, "SetFogMaterialForUMG" }, // 4280815449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapFog>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_OnMapFogMaterialChanged = { "OnMapFogMaterialChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, OnMapFogMaterialChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapFogMaterialChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMapFogMaterialChanged_MetaData), NewProp_OnMapFogMaterialChanged_MetaData) }; // 1113258707
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogRenderTargetSize = { "FogRenderTargetSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogRenderTargetSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogRenderTargetSize_MetaData), NewProp_FogRenderTargetSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_UMG = { "FogMaterial_UMG", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogMaterial_UMG), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogMaterial_UMG_MetaData), NewProp_FogMaterial_UMG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_Canvas = { "FogMaterial_Canvas", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogMaterial_Canvas), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogMaterial_Canvas_MetaData), NewProp_FogMaterial_Canvas_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityHidden = { "MinimapOpacityHidden", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, MinimapOpacityHidden), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapOpacityHidden_MetaData), NewProp_MinimapOpacityHidden_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityExplored = { "MinimapOpacityExplored", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, MinimapOpacityExplored), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapOpacityExplored_MetaData), NewProp_MinimapOpacityExplored_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityRevealing = { "MinimapOpacityRevealing", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, MinimapOpacityRevealing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapOpacityRevealing_MetaData), NewProp_MinimapOpacityRevealing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMaterial = { "FogCombineMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogCombineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogCombineMaterial_MetaData), NewProp_FogCombineMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogCacheLifetime = { "FogCacheLifetime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogCacheLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogCacheLifetime_MetaData), NewProp_FogCacheLifetime_MetaData) };
void Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog_SetBit(void* Obj)
{
	((AMapFog*)Obj)->bEnableWorldFog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog = { "bEnableWorldFog", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapFog), &Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableWorldFog_MetaData), NewProp_bEnableWorldFog_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMaterial = { "FogPostProcessMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogPostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogPostProcessMaterial_MetaData), NewProp_FogPostProcessMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityHidden = { "WorldOpacityHidden", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, WorldOpacityHidden), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOpacityHidden_MetaData), NewProp_WorldOpacityHidden_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityExplored = { "WorldOpacityExplored", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, WorldOpacityExplored), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOpacityExplored_MetaData), NewProp_WorldOpacityExplored_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityRevealing = { "WorldOpacityRevealing", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, WorldOpacityRevealing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldOpacityRevealing_MetaData), NewProp_WorldOpacityRevealing_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_PostProcessVolume = { "PostProcessVolume", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, PostProcessVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessVolume_MetaData), NewProp_PostProcessVolume_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume = { "AutoLocatePostProcessVolume", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, AutoLocatePostProcessVolume), Z_Construct_UEnum_MinimapPlugin_EFogPostProcessVolumeOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoLocatePostProcessVolume_MetaData), NewProp_AutoLocatePostProcessVolume_MetaData) }; // 3228974615
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_A = { "PermanentRevealRT_A", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, PermanentRevealRT_A), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermanentRevealRT_A_MetaData), NewProp_PermanentRevealRT_A_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_B = { "PermanentRevealRT_B", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, PermanentRevealRT_B), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermanentRevealRT_B_MetaData), NewProp_PermanentRevealRT_B_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_RevealRT_Staging = { "RevealRT_Staging", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, RevealRT_Staging), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevealRT_Staging_MetaData), NewProp_RevealRT_Staging_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_ValueProp = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_Key_KeyProp = { "MaterialInstances_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, MaterialInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstances_MetaData), NewProp_MaterialInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMatInst = { "FogCombineMatInst", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogCombineMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogCombineMatInst_MetaData), NewProp_FogCombineMatInst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMatInst = { "FogPostProcessMatInst", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, FogPostProcessMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogPostProcessMatInst_MetaData), NewProp_FogPostProcessMatInst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers_Inner = { "MapRevealers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapRevealerComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers = { "MapRevealers", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapFog, MapRevealers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapRevealers_MetaData), NewProp_MapRevealers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapFog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_OnMapFogMaterialChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogRenderTargetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_UMG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogMaterial_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityExplored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MinimapOpacityRevealing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogCacheLifetime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_bEnableWorldFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityExplored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_WorldOpacityRevealing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_PostProcessVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_AutoLocatePostProcessVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_PermanentRevealRT_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_RevealRT_Staging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogCombineMatInst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_FogPostProcessMatInst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapFog_Statics::NewProp_MapRevealers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapFog_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMapAreaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapFog_Statics::ClassParams = {
	&AMapFog::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapFog_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapFog_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapFog_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapFog()
{
	if (!Z_Registration_Info_UClass_AMapFog.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapFog.OuterSingleton, Z_Construct_UClass_AMapFog_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapFog.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<AMapFog>()
{
	return AMapFog::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapFog);
AMapFog::~AMapFog() {}
// End Class AMapFog

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapFog, AMapFog::StaticClass, TEXT("AMapFog"), &Z_Registration_Info_UClass_AMapFog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapFog), 2588374479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_1952370472(TEXT("/Script/MinimapPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapFog_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
