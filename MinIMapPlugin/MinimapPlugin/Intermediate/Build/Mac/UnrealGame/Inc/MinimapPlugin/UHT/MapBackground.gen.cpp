// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapBackground.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapBackground() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapAreaBase();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapBackground();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapBackground_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRendererComponent_NoRegister();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature();
MINIMAPPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMapBackgroundLevel();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References

// Begin Delegate FMapBackgroundTextureChangedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms
	{
		AMapBackground* MapBackground;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// MapBackground event signatures\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "MapBackground event signatures" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::NewProp_MapBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapBackgroundTextureChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapBackgroundTextureChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundTextureChangedSignature, AMapBackground* MapBackground)
{
	struct _Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms
	{
		AMapBackground* MapBackground;
	};
	_Script_MinimapPlugin_eventMapBackgroundTextureChangedSignature_Parms Parms;
	Parms.MapBackground=MapBackground;
	MapBackgroundTextureChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapBackgroundTextureChangedSignature

// Begin Delegate FMapBackgroundMaterialChangedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms
	{
		AMapBackground* MapBackground;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::NewProp_MapBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapBackgroundMaterialChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapBackgroundMaterialChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundMaterialChangedSignature, AMapBackground* MapBackground)
{
	struct _Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms
	{
		AMapBackground* MapBackground;
	};
	_Script_MinimapPlugin_eventMapBackgroundMaterialChangedSignature_Parms Parms;
	Parms.MapBackground=MapBackground;
	MapBackgroundMaterialChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapBackgroundMaterialChangedSignature

// Begin Delegate FMapBackgroundAppearanceChangedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms
	{
		AMapBackground* MapBackground;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::NewProp_MapBackground,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapBackgroundAppearanceChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapBackgroundAppearanceChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundAppearanceChangedSignature, AMapBackground* MapBackground)
{
	struct _Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms
	{
		AMapBackground* MapBackground;
	};
	_Script_MinimapPlugin_eventMapBackgroundAppearanceChangedSignature_Parms Parms;
	Parms.MapBackground=MapBackground;
	MapBackgroundAppearanceChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapBackgroundAppearanceChangedSignature

// Begin Delegate FMapBackgroundRenderedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms
	{
		AMapBackground* MapBackground;
		int32 Level;
		UTextureRenderTarget2D* RenderTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::NewProp_MapBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::NewProp_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapBackgroundRenderedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapBackgroundRenderedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundRenderedSignature, AMapBackground* MapBackground, int32 Level, UTextureRenderTarget2D* RenderTarget)
{
	struct _Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms
	{
		AMapBackground* MapBackground;
		int32 Level;
		UTextureRenderTarget2D* RenderTarget;
	};
	_Script_MinimapPlugin_eventMapBackgroundRenderedSignature_Parms Parms;
	Parms.MapBackground=MapBackground;
	Parms.Level=Level;
	Parms.RenderTarget=RenderTarget;
	MapBackgroundRenderedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapBackgroundRenderedSignature

// Begin Delegate FMapBackgroundOverlayChangedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms
	{
		AMapBackground* MapBackground;
		int32 Level;
		UTextureRenderTarget2D* RenderTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapBackground.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapBackground;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::NewProp_MapBackground = { "MapBackground", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms, MapBackground), Z_Construct_UClass_AMapBackground_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::NewProp_MapBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::NewProp_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapBackgroundOverlayChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapBackgroundOverlayChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapBackgroundOverlayChangedSignature, AMapBackground* MapBackground, int32 Level, UTextureRenderTarget2D* RenderTarget)
{
	struct _Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms
	{
		AMapBackground* MapBackground;
		int32 Level;
		UTextureRenderTarget2D* RenderTarget;
	};
	_Script_MinimapPlugin_eventMapBackgroundOverlayChangedSignature_Parms Parms;
	Parms.MapBackground=MapBackground;
	Parms.Level=Level;
	Parms.RenderTarget=RenderTarget;
	MapBackgroundOverlayChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapBackgroundOverlayChangedSignature

// Begin ScriptStruct FMapBackgroundLevel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapBackgroundLevel;
class UScriptStruct* FMapBackgroundLevel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapBackgroundLevel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapBackgroundLevel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapBackgroundLevel, (UObject*)Z_Construct_UPackage__Script_MinimapPlugin(), TEXT("MapBackgroundLevel"));
	}
	return Z_Registration_Info_UScriptStruct_MapBackgroundLevel.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UScriptStruct* StaticStruct<FMapBackgroundLevel>()
{
	return FMapBackgroundLevel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundTexture_MetaData[] = {
		{ "Category", "Minimap Snapshot Generation" },
		{ "Comment", "// If set, this texture will be rendered as background in-game. Otherwise, a generated background will be rendered to the selected RenderTarget.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "If set, this texture will be rendered as background in-game. Otherwise, a generated background will be rendered to the selected RenderTarget." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Minimap Snapshot Generation" },
		{ "Comment", "// Generated backgrounds are rendered to this render target. If not set to a static render target, a dynamic one will be created on demand.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Generated backgrounds are rendered to this render target. If not set to a static render target, a dynamic one will be created on demand." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overlay_MetaData[] = {
		{ "Category", "Minimap Snapshot Generation" },
		{ "Comment", "// An optional render target that you can draw custom icons and environment on. Just like the background texture, it will be mapped to the background volume. \n// Tip: Use this MapBackground's MapView->GetViewCoordinates / GetViewYaw to convert world position and rotation to relative texture coordinates and render angle.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "An optional render target that you can draw custom icons and environment on. Just like the background texture, it will be mapped to the background volume.\nTip: Use this MapBackground's MapView->GetViewCoordinates / GetViewYaw to convert world position and rotation to relative texture coordinates and render angle." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelHeight_MetaData[] = {
		{ "Category", "Minimap Snapshot Generation" },
		{ "Comment", "// Level's world height measured from the top of the previous level. Value is ignored for the last level: it automatically fills the remaining space.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Level's world height measured from the top of the previous level. Value is ignored for the last level: it automatically fills the remaining space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplingResolution_MetaData[] = {
		{ "Comment", "// Size of the sampled region from the background texture\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Size of the sampled region from the background texture" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingResolution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapBackgroundLevel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapBackgroundLevel, BackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundTexture_MetaData), NewProp_BackgroundTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapBackgroundLevel, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_Overlay = { "Overlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapBackgroundLevel, Overlay), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overlay_MetaData), NewProp_Overlay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_LevelHeight = { "LevelHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapBackgroundLevel, LevelHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelHeight_MetaData), NewProp_LevelHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_SamplingResolution = { "SamplingResolution", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapBackgroundLevel, SamplingResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplingResolution_MetaData), NewProp_SamplingResolution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_BackgroundTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_Overlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_LevelHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewProp_SamplingResolution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
	nullptr,
	&NewStructOps,
	"MapBackgroundLevel",
	Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::PropPointers),
	sizeof(FMapBackgroundLevel),
	alignof(FMapBackgroundLevel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapBackgroundLevel()
{
	if (!Z_Registration_Info_UScriptStruct_MapBackgroundLevel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapBackgroundLevel.InnerSingleton, Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapBackgroundLevel.InnerSingleton;
}
// End ScriptStruct FMapBackgroundLevel

// Begin Class AMapBackground Function CaptureBackground
struct Z_Construct_UFunction_AMapBackground_CaptureBackground_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Minimap Background" },
		{ "Comment", "// In-editor details panel button to trigger a recapture of configured background levels into render targets.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "In-editor details panel button to trigger a recapture of configured background levels into render targets." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_CaptureBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "CaptureBackground", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_CaptureBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_CaptureBackground_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapBackground_CaptureBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_CaptureBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execCaptureBackground)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaptureBackground();
	P_NATIVE_END;
}
// End Class AMapBackground Function CaptureBackground

// Begin Class AMapBackground Function GetBackgroundMaterialForUMG
struct Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics
{
	struct MapBackground_eventGetBackgroundMaterialForUMG_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves what material is used to render this volume's background texture in UMG\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Retrieves what material is used to render this volume's background texture in UMG" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundMaterialForUMG_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "GetBackgroundMaterialForUMG", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::MapBackground_eventGetBackgroundMaterialForUMG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::MapBackground_eventGetBackgroundMaterialForUMG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execGetBackgroundMaterialForUMG)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetBackgroundMaterialForUMG();
	P_NATIVE_END;
}
// End Class AMapBackground Function GetBackgroundMaterialForUMG

// Begin Class AMapBackground Function GetBackgroundMaterialInstanceForCanvas
struct Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics
{
	struct MapBackground_eventGetBackgroundMaterialInstanceForCanvas_Parms
	{
		UMapRendererComponent* Renderer;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves what material is used to render this volume's background texture on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Retrieves what material is used to render this volume's background texture on UCanvas" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::NewProp_Renderer = { "Renderer", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundMaterialInstanceForCanvas_Parms, Renderer), Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Renderer_MetaData), NewProp_Renderer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundMaterialInstanceForCanvas_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::NewProp_Renderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "GetBackgroundMaterialInstanceForCanvas", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::MapBackground_eventGetBackgroundMaterialInstanceForCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::MapBackground_eventGetBackgroundMaterialInstanceForCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execGetBackgroundMaterialInstanceForCanvas)
{
	P_GET_OBJECT(UMapRendererComponent,Z_Param_Renderer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetBackgroundMaterialInstanceForCanvas(Z_Param_Renderer);
	P_NATIVE_END;
}
// End Class AMapBackground Function GetBackgroundMaterialInstanceForCanvas

// Begin Class AMapBackground Function GetBackgroundOverlay
struct Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics
{
	struct MapBackground_eventGetBackgroundOverlay_Parms
	{
		int32 Level;
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whichever background texture is active\n" },
		{ "CPP_Default_Level", "0" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Returns whichever background texture is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundOverlay_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundOverlay_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "GetBackgroundOverlay", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::MapBackground_eventGetBackgroundOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::MapBackground_eventGetBackgroundOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execGetBackgroundOverlay)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetBackgroundOverlay(Z_Param_Level);
	P_NATIVE_END;
}
// End Class AMapBackground Function GetBackgroundOverlay

// Begin Class AMapBackground Function GetBackgroundPriority
struct Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics
{
	struct MapBackground_eventGetBackgroundPriority_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the background's priority. If the MapViewComponent is inside multiple MapBackgrounds at a time, only the ones with highest priority are rendered.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Retrieves the background's priority. If the MapViewComponent is inside multiple MapBackgrounds at a time, only the ones with highest priority are rendered." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundPriority_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "GetBackgroundPriority", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::MapBackground_eventGetBackgroundPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::MapBackground_eventGetBackgroundPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_GetBackgroundPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_GetBackgroundPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execGetBackgroundPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBackgroundPriority();
	P_NATIVE_END;
}
// End Class AMapBackground Function GetBackgroundPriority

// Begin Class AMapBackground Function GetBackgroundTexture
struct Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics
{
	struct MapBackground_eventGetBackgroundTexture_Parms
	{
		int32 Level;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whichever background texture is active\n" },
		{ "CPP_Default_Level", "0" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Returns whichever background texture is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundTexture_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "GetBackgroundTexture", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::MapBackground_eventGetBackgroundTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::MapBackground_eventGetBackgroundTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_GetBackgroundTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_GetBackgroundTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execGetBackgroundTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->GetBackgroundTexture(Z_Param_Level);
	P_NATIVE_END;
}
// End Class AMapBackground Function GetBackgroundTexture

// Begin Class AMapBackground Function GetBackgroundTextureAtHeight
struct Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics
{
	struct MapBackground_eventGetBackgroundTextureAtHeight_Parms
	{
		float WorldZ;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whichever background texture is active\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Returns whichever background texture is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::NewProp_WorldZ = { "WorldZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundTextureAtHeight_Parms, WorldZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldZ_MetaData), NewProp_WorldZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundTextureAtHeight_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::NewProp_WorldZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "GetBackgroundTextureAtHeight", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::MapBackground_eventGetBackgroundTextureAtHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::MapBackground_eventGetBackgroundTextureAtHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execGetBackgroundTextureAtHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_WorldZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->GetBackgroundTextureAtHeight(Z_Param_WorldZ);
	P_NATIVE_END;
}
// End Class AMapBackground Function GetBackgroundTextureAtHeight

// Begin Class AMapBackground Function GetBackgroundZOrder
struct Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics
{
	struct MapBackground_eventGetBackgroundZOrder_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the background's ZOrder. If there are multiple MapBackgrounds in the level, the one with highest ZOrder is rendered on top in the minimap.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Retrieves the background's ZOrder. If there are multiple MapBackgrounds in the level, the one with highest ZOrder is rendered on top in the minimap." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventGetBackgroundZOrder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "GetBackgroundZOrder", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::MapBackground_eventGetBackgroundZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::MapBackground_eventGetBackgroundZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execGetBackgroundZOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetBackgroundZOrder();
	P_NATIVE_END;
}
// End Class AMapBackground Function GetBackgroundZOrder

// Begin Class AMapBackground Function IsBackgroundVisible
struct Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics
{
	struct MapBackground_eventIsBackgroundVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves whether the background is visible on the minimap\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Retrieves whether the background is visible on the minimap" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapBackground_eventIsBackgroundVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapBackground_eventIsBackgroundVisible_Parms), &Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "IsBackgroundVisible", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::MapBackground_eventIsBackgroundVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::MapBackground_eventIsBackgroundVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_IsBackgroundVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_IsBackgroundVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execIsBackgroundVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBackgroundVisible();
	P_NATIVE_END;
}
// End Class AMapBackground Function IsBackgroundVisible

// Begin Class AMapBackground Function IsMultiLevel
struct Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics
{
	struct MapBackground_eventIsMultiLevel_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whether this MapBackground has multiple height levels\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Returns whether this MapBackground has multiple height levels" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapBackground_eventIsMultiLevel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapBackground_eventIsMultiLevel_Parms), &Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "IsMultiLevel", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::MapBackground_eventIsMultiLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::MapBackground_eventIsMultiLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_IsMultiLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_IsMultiLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execIsMultiLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMultiLevel();
	P_NATIVE_END;
}
// End Class AMapBackground Function IsMultiLevel

// Begin Class AMapBackground Function RerenderBackground
struct Z_Construct_UFunction_AMapBackground_RerenderBackground_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Render the scene from the top down camera to render targets. This generates images you can draw over.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Render the scene from the top down camera to render targets. This generates images you can draw over." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_RerenderBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "RerenderBackground", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_RerenderBackground_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_RerenderBackground_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMapBackground_RerenderBackground()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_RerenderBackground_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execRerenderBackground)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RerenderBackground();
	P_NATIVE_END;
}
// End Class AMapBackground Function RerenderBackground

// Begin Class AMapBackground Function SetBackgroundMaterialForCanvas
struct Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics
{
	struct MapBackground_eventSetBackgroundMaterialForCanvas_Parms
	{
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Changes what material is used to render this volume's background texture on UCanvas\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Changes what material is used to render this volume's background texture on UCanvas" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundMaterialForCanvas_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "SetBackgroundMaterialForCanvas", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::MapBackground_eventSetBackgroundMaterialForCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::MapBackground_eventSetBackgroundMaterialForCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execSetBackgroundMaterialForCanvas)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundMaterialForCanvas(Z_Param_NewMaterial);
	P_NATIVE_END;
}
// End Class AMapBackground Function SetBackgroundMaterialForCanvas

// Begin Class AMapBackground Function SetBackgroundMaterialForUMG
struct Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics
{
	struct MapBackground_eventSetBackgroundMaterialForUMG_Parms
	{
		UMaterialInterface* NewMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Changes what material is used to render this volume's background texture in UMG\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Changes what material is used to render this volume's background texture in UMG" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundMaterialForUMG_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::NewProp_NewMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "SetBackgroundMaterialForUMG", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::MapBackground_eventSetBackgroundMaterialForUMG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::MapBackground_eventSetBackgroundMaterialForUMG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execSetBackgroundMaterialForUMG)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundMaterialForUMG(Z_Param_NewMaterial);
	P_NATIVE_END;
}
// End Class AMapBackground Function SetBackgroundMaterialForUMG

// Begin Class AMapBackground Function SetBackgroundOverlay
struct Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics
{
	struct MapBackground_eventSetBackgroundOverlay_Parms
	{
		int32 Level;
		UTextureRenderTarget2D* NewBackgroundOverlay;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the background texture to render. If null, will generate a snapshot.\n" },
		{ "CPP_Default_Level", "0" },
		{ "CPP_Default_NewBackgroundOverlay", "None" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Sets the background texture to render. If null, will generate a snapshot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBackgroundOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundOverlay_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::NewProp_NewBackgroundOverlay = { "NewBackgroundOverlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundOverlay_Parms, NewBackgroundOverlay), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::NewProp_NewBackgroundOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "SetBackgroundOverlay", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::MapBackground_eventSetBackgroundOverlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::MapBackground_eventSetBackgroundOverlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execSetBackgroundOverlay)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_NewBackgroundOverlay);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundOverlay(Z_Param_Level,Z_Param_NewBackgroundOverlay);
	P_NATIVE_END;
}
// End Class AMapBackground Function SetBackgroundOverlay

// Begin Class AMapBackground Function SetBackgroundPriority
struct Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics
{
	struct MapBackground_eventSetBackgroundPriority_Parms
	{
		int32 NewBackgroundPriority;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the background's priority. If the MapViewComponent is inside multiple MapBackgrounds at a time, only the ones with highest priority are rendered.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Sets the background's priority. If the MapViewComponent is inside multiple MapBackgrounds at a time, only the ones with highest priority are rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundPriority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewBackgroundPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::NewProp_NewBackgroundPriority = { "NewBackgroundPriority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundPriority_Parms, NewBackgroundPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewBackgroundPriority_MetaData), NewProp_NewBackgroundPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::NewProp_NewBackgroundPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "SetBackgroundPriority", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::MapBackground_eventSetBackgroundPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::MapBackground_eventSetBackgroundPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_SetBackgroundPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_SetBackgroundPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execSetBackgroundPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewBackgroundPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundPriority(Z_Param_NewBackgroundPriority);
	P_NATIVE_END;
}
// End Class AMapBackground Function SetBackgroundPriority

// Begin Class AMapBackground Function SetBackgroundTexture
struct Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics
{
	struct MapBackground_eventSetBackgroundTexture_Parms
	{
		int32 Level;
		UTexture2D* NewBackgroundTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the background texture to render. If null, will generate a snapshot.\n" },
		{ "CPP_Default_Level", "0" },
		{ "CPP_Default_NewBackgroundTexture", "None" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Sets the background texture to render. If null, will generate a snapshot." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewBackgroundTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundTexture_Parms, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::NewProp_NewBackgroundTexture = { "NewBackgroundTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundTexture_Parms, NewBackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::NewProp_NewBackgroundTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "SetBackgroundTexture", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::MapBackground_eventSetBackgroundTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::MapBackground_eventSetBackgroundTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_SetBackgroundTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_SetBackgroundTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execSetBackgroundTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Level);
	P_GET_OBJECT(UTexture2D,Z_Param_NewBackgroundTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundTexture(Z_Param_Level,Z_Param_NewBackgroundTexture);
	P_NATIVE_END;
}
// End Class AMapBackground Function SetBackgroundTexture

// Begin Class AMapBackground Function SetBackgroundVisible
struct Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics
{
	struct MapBackground_eventSetBackgroundVisible_Parms
	{
		bool bNewVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets whether the background is visible on the minimap\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Sets whether the background is visible on the minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::NewProp_bNewVisible_SetBit(void* Obj)
{
	((MapBackground_eventSetBackgroundVisible_Parms*)Obj)->bNewVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::NewProp_bNewVisible = { "bNewVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapBackground_eventSetBackgroundVisible_Parms), &Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::NewProp_bNewVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewVisible_MetaData), NewProp_bNewVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::NewProp_bNewVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "SetBackgroundVisible", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::MapBackground_eventSetBackgroundVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::MapBackground_eventSetBackgroundVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_SetBackgroundVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_SetBackgroundVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execSetBackgroundVisible)
{
	P_GET_UBOOL(Z_Param_bNewVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundVisible(Z_Param_bNewVisible);
	P_NATIVE_END;
}
// End Class AMapBackground Function SetBackgroundVisible

// Begin Class AMapBackground Function SetBackgroundZOrder
struct Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics
{
	struct MapBackground_eventSetBackgroundZOrder_Parms
	{
		int32 NewBackgroundZOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Sets the background's ZOrder. If there are multiple MapBackgrounds in the level, the one with highest ZOrder is rendered on top in the minimap.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Sets the background's ZOrder. If there are multiple MapBackgrounds in the level, the one with highest ZOrder is rendered on top in the minimap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewBackgroundZOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::NewProp_NewBackgroundZOrder = { "NewBackgroundZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapBackground_eventSetBackgroundZOrder_Parms, NewBackgroundZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewBackgroundZOrder_MetaData), NewProp_NewBackgroundZOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::NewProp_NewBackgroundZOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapBackground, nullptr, "SetBackgroundZOrder", nullptr, nullptr, Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::MapBackground_eventSetBackgroundZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::MapBackground_eventSetBackgroundZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapBackground::execSetBackgroundZOrder)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewBackgroundZOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundZOrder(Z_Param_NewBackgroundZOrder);
	P_NATIVE_END;
}
// End Class AMapBackground Function SetBackgroundZOrder

// Begin Class AMapBackground
void AMapBackground::StaticRegisterNativesAMapBackground()
{
	UClass* Class = AMapBackground::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CaptureBackground", &AMapBackground::execCaptureBackground },
		{ "GetBackgroundMaterialForUMG", &AMapBackground::execGetBackgroundMaterialForUMG },
		{ "GetBackgroundMaterialInstanceForCanvas", &AMapBackground::execGetBackgroundMaterialInstanceForCanvas },
		{ "GetBackgroundOverlay", &AMapBackground::execGetBackgroundOverlay },
		{ "GetBackgroundPriority", &AMapBackground::execGetBackgroundPriority },
		{ "GetBackgroundTexture", &AMapBackground::execGetBackgroundTexture },
		{ "GetBackgroundTextureAtHeight", &AMapBackground::execGetBackgroundTextureAtHeight },
		{ "GetBackgroundZOrder", &AMapBackground::execGetBackgroundZOrder },
		{ "IsBackgroundVisible", &AMapBackground::execIsBackgroundVisible },
		{ "IsMultiLevel", &AMapBackground::execIsMultiLevel },
		{ "RerenderBackground", &AMapBackground::execRerenderBackground },
		{ "SetBackgroundMaterialForCanvas", &AMapBackground::execSetBackgroundMaterialForCanvas },
		{ "SetBackgroundMaterialForUMG", &AMapBackground::execSetBackgroundMaterialForUMG },
		{ "SetBackgroundOverlay", &AMapBackground::execSetBackgroundOverlay },
		{ "SetBackgroundPriority", &AMapBackground::execSetBackgroundPriority },
		{ "SetBackgroundTexture", &AMapBackground::execSetBackgroundTexture },
		{ "SetBackgroundVisible", &AMapBackground::execSetBackgroundVisible },
		{ "SetBackgroundZOrder", &AMapBackground::execSetBackgroundZOrder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapBackground);
UClass* Z_Construct_UClass_AMapBackground_NoRegister()
{
	return AMapBackground::StaticClass();
}
struct Z_Construct_UClass_AMapBackground_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// If you want to use a background image in your minimap, place MapBackgrounds in your level.\n// You can place any number of MapBackgrounds. MapBackgrounds may be spawned and destroyed during gameplay.\n//\n// The MapBackground has a box component. Move it and resize it in any way so that it covers the \n// the part of your level that you want to import a background texture for. \n//\n// Whenever you move the actor, a top-down snapshot will be generated of the area, stored in 'StaticRenderTarget'.\n// You can use this feature to get an image to draw over in an external image editor. Once you have prepared your\n// own background texture, set it in 'BackgroundTexture'.\n//\n// You can also just use the generated snapshot in-game. In that case, leave 'BackgroundTexture' empty. If you want\n// multiple MapBackgrounds to use a generated snapshot, clear 'StaticRenderTarget'. Then, each MapBackground will\n// create its own dynamic render target and they won't write to the same render target anymore.\n" },
		{ "IncludePath", "MapBackground.h" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "If you want to use a background image in your minimap, place MapBackgrounds in your level.\nYou can place any number of MapBackgrounds. MapBackgrounds may be spawned and destroyed during gameplay.\n\nThe MapBackground has a box component. Move it and resize it in any way so that it covers the\nthe part of your level that you want to import a background texture for.\n\nWhenever you move the actor, a top-down snapshot will be generated of the area, stored in 'StaticRenderTarget'.\nYou can use this feature to get an image to draw over in an external image editor. Once you have prepared your\nown background texture, set it in 'BackgroundTexture'.\n\nYou can also just use the generated snapshot in-game. In that case, leave 'BackgroundTexture' empty. If you want\nmultiple MapBackgrounds to use a generated snapshot, clear 'StaticRenderTarget'. Then, each MapBackground will\ncreate its own dynamic render target and they won't write to the same render target anymore." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMapBackgroundTextureChanged_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Event that fires when the background texture changes\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Event that fires when the background texture changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMapBackgroundMaterialChanged_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Event that fires when the material used to render the background changes\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Event that fires when the material used to render the background changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMapBackgroundAppearanceChanged_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Event that fires when any aspect of the background's appearance changes\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Event that fires when any aspect of the background's appearance changes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMapBackgroundRendered_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Event that fires whenever a top down render is captured. For background levels without a static texture, this happens at BeginPlay and when calling RerenderBackground.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Event that fires whenever a top down render is captured. For background levels without a static texture, this happens at BeginPlay and when calling RerenderBackground." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMapBackgroundOverlayChanged_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Event that fires when the overlay render target is changed.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Event that fires when the overlay render target is changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundLevels_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Assign background textures to height levels within the volume\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Assign background textures to height levels within the volume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMaterial_UMG_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Material is used to render the background in UMG. It receives the relevant background texture as a texture input named 'Texture'.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Material is used to render the background in UMG. It receives the relevant background texture as a texture input named 'Texture'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundMaterial_Canvas_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Material is used to render the background to Canvas. It receives the relevant background texture as a texture input named 'Texture'.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Material is used to render the background to Canvas. It receives the relevant background texture as a texture input named 'Texture'." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBackgroundVisible_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Whether the background is currently rendered\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Whether the background is currently rendered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundPriority_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// When the map view is inside multiple backgrounds, only the background(s) with highest priority are rendered\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "When the map view is inside multiple backgrounds, only the background(s) with highest priority are rendered" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundZOrder_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// When multiple backgrounds are rendered, backgrounds with higher ZOrder are rendered on top\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "When multiple backgrounds are rendered, backgrounds with higher ZOrder are rendered on top" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicRenderTargetSize_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// When creating dynamic render targets, the width and height of the render target. Increase to capture more detail in the snapshot at the cost of more texture memory usage.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "When creating dynamic render targets, the width and height of the render target. Increase to capture more detail in the snapshot at the cost of more texture memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActorClasses_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// Actors of these classes are hidden from the generated background\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Actors of these classes are hidden from the generated background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// These actors in the level are hidden from the generated background\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "These actors in the level are hidden from the generated background" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderNavigationMesh_MetaData[] = {
		{ "Category", "Minimap Background" },
		{ "Comment", "// If true, navigation mesh will be included in the generated snapshot. This functionality only works when capturing in editor - not standalone games.\n" },
		{ "DisplayName", "Render Navigation Mesh (Editor Only)" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "If true, navigation mesh will be included in the generated snapshot. This functionality only works when capturing in editor - not standalone games." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[] = {
		{ "Comment", "// Instance of the background material per MapRendererComponent. Only used when rendering to a UCanvas.\n" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Instance of the background material per MapRendererComponent. Only used when rendering to a UCanvas." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelVisualizers_MetaData[] = {
		{ "Comment", "// Non-interactable box components used purely for visualizing the floor configuration in wireframe in editor viewports\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Non-interactable box components used purely for visualizing the floor configuration in wireframe in editor viewports" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent2D_MetaData[] = {
		{ "Category", "Minimap Background Generation" },
		{ "Comment", "// Used to generate a background if no hand drawn background texture is set\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Used to generate a background if no hand drawn background texture is set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshRenderingComponent_MetaData[] = {
		{ "Category", "Minimap Background Generation" },
		{ "Comment", "// Used to include the navigation mesh in the generated background\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapBackground.h" },
		{ "ToolTip", "Used to include the navigation mesh in the generated background" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapBackgroundTextureChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapBackgroundMaterialChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapBackgroundAppearanceChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapBackgroundRendered;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapBackgroundOverlayChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundLevels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BackgroundLevels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundMaterial_UMG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundMaterial_Canvas;
	static void NewProp_bBackgroundVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBackgroundVisible;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BackgroundPriority;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BackgroundZOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DynamicRenderTargetSize;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HiddenActorClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActorClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
	static void NewProp_bRenderNavigationMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderNavigationMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstances_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialInstances;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVisualizers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelVisualizers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent2D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavMeshRenderingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapBackground_CaptureBackground, "CaptureBackground" }, // 3860423285
		{ &Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialForUMG, "GetBackgroundMaterialForUMG" }, // 1775967610
		{ &Z_Construct_UFunction_AMapBackground_GetBackgroundMaterialInstanceForCanvas, "GetBackgroundMaterialInstanceForCanvas" }, // 2872610545
		{ &Z_Construct_UFunction_AMapBackground_GetBackgroundOverlay, "GetBackgroundOverlay" }, // 433773425
		{ &Z_Construct_UFunction_AMapBackground_GetBackgroundPriority, "GetBackgroundPriority" }, // 3141583084
		{ &Z_Construct_UFunction_AMapBackground_GetBackgroundTexture, "GetBackgroundTexture" }, // 1047041751
		{ &Z_Construct_UFunction_AMapBackground_GetBackgroundTextureAtHeight, "GetBackgroundTextureAtHeight" }, // 1061938081
		{ &Z_Construct_UFunction_AMapBackground_GetBackgroundZOrder, "GetBackgroundZOrder" }, // 1561007718
		{ &Z_Construct_UFunction_AMapBackground_IsBackgroundVisible, "IsBackgroundVisible" }, // 2128637197
		{ &Z_Construct_UFunction_AMapBackground_IsMultiLevel, "IsMultiLevel" }, // 2092503823
		{ &Z_Construct_UFunction_AMapBackground_RerenderBackground, "RerenderBackground" }, // 2072355549
		{ &Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForCanvas, "SetBackgroundMaterialForCanvas" }, // 918547346
		{ &Z_Construct_UFunction_AMapBackground_SetBackgroundMaterialForUMG, "SetBackgroundMaterialForUMG" }, // 2202683702
		{ &Z_Construct_UFunction_AMapBackground_SetBackgroundOverlay, "SetBackgroundOverlay" }, // 2823529234
		{ &Z_Construct_UFunction_AMapBackground_SetBackgroundPriority, "SetBackgroundPriority" }, // 2198486691
		{ &Z_Construct_UFunction_AMapBackground_SetBackgroundTexture, "SetBackgroundTexture" }, // 552228828
		{ &Z_Construct_UFunction_AMapBackground_SetBackgroundVisible, "SetBackgroundVisible" }, // 1892712901
		{ &Z_Construct_UFunction_AMapBackground_SetBackgroundZOrder, "SetBackgroundZOrder" }, // 3447328750
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapBackground>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundTextureChanged = { "OnMapBackgroundTextureChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, OnMapBackgroundTextureChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundTextureChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMapBackgroundTextureChanged_MetaData), NewProp_OnMapBackgroundTextureChanged_MetaData) }; // 1240828603
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundMaterialChanged = { "OnMapBackgroundMaterialChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, OnMapBackgroundMaterialChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundMaterialChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMapBackgroundMaterialChanged_MetaData), NewProp_OnMapBackgroundMaterialChanged_MetaData) }; // 2577425590
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundAppearanceChanged = { "OnMapBackgroundAppearanceChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, OnMapBackgroundAppearanceChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundAppearanceChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMapBackgroundAppearanceChanged_MetaData), NewProp_OnMapBackgroundAppearanceChanged_MetaData) }; // 613205898
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundRendered = { "OnMapBackgroundRendered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, OnMapBackgroundRendered), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundRenderedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMapBackgroundRendered_MetaData), NewProp_OnMapBackgroundRendered_MetaData) }; // 2259198194
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundOverlayChanged = { "OnMapBackgroundOverlayChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, OnMapBackgroundOverlayChanged), Z_Construct_UDelegateFunction_MinimapPlugin_MapBackgroundOverlayChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMapBackgroundOverlayChanged_MetaData), NewProp_OnMapBackgroundOverlayChanged_MetaData) }; // 2027721172
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundLevels_Inner = { "BackgroundLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMapBackgroundLevel, METADATA_PARAMS(0, nullptr) }; // 3302460532
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundLevels = { "BackgroundLevels", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, BackgroundLevels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundLevels_MetaData), NewProp_BackgroundLevels_MetaData) }; // 3302460532
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundMaterial_UMG = { "BackgroundMaterial_UMG", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, BackgroundMaterial_UMG), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundMaterial_UMG_MetaData), NewProp_BackgroundMaterial_UMG_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundMaterial_Canvas = { "BackgroundMaterial_Canvas", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, BackgroundMaterial_Canvas), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundMaterial_Canvas_MetaData), NewProp_BackgroundMaterial_Canvas_MetaData) };
void Z_Construct_UClass_AMapBackground_Statics::NewProp_bBackgroundVisible_SetBit(void* Obj)
{
	((AMapBackground*)Obj)->bBackgroundVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_bBackgroundVisible = { "bBackgroundVisible", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapBackground), &Z_Construct_UClass_AMapBackground_Statics::NewProp_bBackgroundVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBackgroundVisible_MetaData), NewProp_bBackgroundVisible_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundPriority = { "BackgroundPriority", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, BackgroundPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundPriority_MetaData), NewProp_BackgroundPriority_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundZOrder = { "BackgroundZOrder", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, BackgroundZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundZOrder_MetaData), NewProp_BackgroundZOrder_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_DynamicRenderTargetSize = { "DynamicRenderTargetSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, DynamicRenderTargetSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicRenderTargetSize_MetaData), NewProp_DynamicRenderTargetSize_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActorClasses_Inner = { "HiddenActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActorClasses = { "HiddenActorClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, HiddenActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenActorClasses_MetaData), NewProp_HiddenActorClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenActors_MetaData), NewProp_HiddenActors_MetaData) };
void Z_Construct_UClass_AMapBackground_Statics::NewProp_bRenderNavigationMesh_SetBit(void* Obj)
{
	((AMapBackground*)Obj)->bRenderNavigationMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_bRenderNavigationMesh = { "bRenderNavigationMesh", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapBackground), &Z_Construct_UClass_AMapBackground_Statics::NewProp_bRenderNavigationMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderNavigationMesh_MetaData), NewProp_bRenderNavigationMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_MaterialInstances_ValueProp = { "MaterialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_MaterialInstances_Key_KeyProp = { "MaterialInstances_Key", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapRendererComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, MaterialInstances), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstances_MetaData), NewProp_MaterialInstances_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_LevelVisualizers_Inner = { "LevelVisualizers", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_LevelVisualizers = { "LevelVisualizers", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, LevelVisualizers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelVisualizers_MetaData), NewProp_LevelVisualizers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_CaptureComponent2D = { "CaptureComponent2D", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, CaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent2D_MetaData), NewProp_CaptureComponent2D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapBackground_Statics::NewProp_NavMeshRenderingComponent = { "NavMeshRenderingComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapBackground, NavMeshRenderingComponent), Z_Construct_UClass_UNavMeshRenderingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NavMeshRenderingComponent_MetaData), NewProp_NavMeshRenderingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapBackground_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundTextureChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundMaterialChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundAppearanceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundRendered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_OnMapBackgroundOverlayChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundLevels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundMaterial_UMG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundMaterial_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_bBackgroundVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_BackgroundZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_DynamicRenderTargetSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActorClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActorClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_HiddenActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_bRenderNavigationMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_MaterialInstances_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_MaterialInstances_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_MaterialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_LevelVisualizers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_LevelVisualizers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_CaptureComponent2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapBackground_Statics::NewProp_NavMeshRenderingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapBackground_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapBackground_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMapAreaBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapBackground_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapBackground_Statics::ClassParams = {
	&AMapBackground::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapBackground_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapBackground_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapBackground_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapBackground_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapBackground()
{
	if (!Z_Registration_Info_UClass_AMapBackground.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapBackground.OuterSingleton, Z_Construct_UClass_AMapBackground_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapBackground.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<AMapBackground>()
{
	return AMapBackground::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapBackground);
AMapBackground::~AMapBackground() {}
// End Class AMapBackground

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMapBackgroundLevel::StaticStruct, Z_Construct_UScriptStruct_FMapBackgroundLevel_Statics::NewStructOps, TEXT("MapBackgroundLevel"), &Z_Registration_Info_UScriptStruct_MapBackgroundLevel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapBackgroundLevel), 3302460532U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapBackground, AMapBackground::StaticClass, TEXT("AMapBackground"), &Z_Registration_Info_UClass_AMapBackground, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapBackground), 2293637302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_3693380739(TEXT("/Script/MinimapPlugin"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapBackground_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
