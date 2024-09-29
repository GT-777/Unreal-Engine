// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapRendererComponent.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapRendererComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapIconComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRendererComponent();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRendererComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapTrackerComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent_NoRegister();
MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption();
MINIMAPPLUGIN_API UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References

// Begin Delegate FMapClickedSignature
struct Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics
{
	struct _Script_MinimapPlugin_eventMapClickedSignature_Parms
	{
		FVector WorldLocation;
		bool bIsLeftMouseButton;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MapRendererComponent event signatures\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MapRendererComponent event signatures" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static void NewProp_bIsLeftMouseButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftMouseButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MinimapPlugin_eventMapClickedSignature_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouseButton_SetBit(void* Obj)
{
	((_Script_MinimapPlugin_eventMapClickedSignature_Parms*)Obj)->bIsLeftMouseButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouseButton = { "bIsLeftMouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MinimapPlugin_eventMapClickedSignature_Parms), &Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouseButton_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::NewProp_bIsLeftMouseButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MinimapPlugin, nullptr, "MapClickedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapClickedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::_Script_MinimapPlugin_eventMapClickedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMapClickedSignature_DelegateWrapper(const FMulticastScriptDelegate& MapClickedSignature, FVector WorldLocation, bool bIsLeftMouseButton)
{
	struct _Script_MinimapPlugin_eventMapClickedSignature_Parms
	{
		FVector WorldLocation;
		bool bIsLeftMouseButton;
	};
	_Script_MinimapPlugin_eventMapClickedSignature_Parms Parms;
	Parms.WorldLocation=WorldLocation;
	Parms.bIsLeftMouseButton=bIsLeftMouseButton ? true : false;
	MapClickedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMapClickedSignature

// Begin Class UMapRendererComponent Function GetBackgroundFillColor
struct Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics
{
	struct MapRendererComponent_eventGetBackgroundFillColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Retrieves the color that is shown underneath any background textures\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the color that is shown underneath any background textures" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventGetBackgroundFillColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "GetBackgroundFillColor", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::MapRendererComponent_eventGetBackgroundFillColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::MapRendererComponent_eventGetBackgroundFillColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execGetBackgroundFillColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetBackgroundFillColor();
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function GetBackgroundFillColor

// Begin Class UMapRendererComponent Function GetDrawFrustum
struct Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics
{
	struct MapRendererComponent_eventGetDrawFrustum_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the boundaries of the player's view is visualized on the map as a trapezoid\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the boundaries of the player's view is visualized on the map as a trapezoid" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapRendererComponent_eventGetDrawFrustum_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapRendererComponent_eventGetDrawFrustum_Parms), &Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "GetDrawFrustum", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::MapRendererComponent_eventGetDrawFrustum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::MapRendererComponent_eventGetDrawFrustum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execGetDrawFrustum)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetDrawFrustum();
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function GetDrawFrustum

// Begin Class UMapRendererComponent Function GetFrustumFloorDistance
struct Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics
{
	struct MapRendererComponent_eventGetFrustumFloorDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If bDrawFrustum == true, how far the floor is beneath the MapView. Controls the size of the rendered trapezoid.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bDrawFrustum == true, how far the floor is beneath the MapView. Controls the size of the rendered trapezoid." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventGetFrustumFloorDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "GetFrustumFloorDistance", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::MapRendererComponent_eventGetFrustumFloorDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::MapRendererComponent_eventGetFrustumFloorDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execGetFrustumFloorDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFrustumFloorDistance();
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function GetFrustumFloorDistance

// Begin Class UMapRendererComponent Function IsCircular
struct Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics
{
	struct MapRendererComponent_eventIsCircular_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the rendered map is circular\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the rendered map is circular" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapRendererComponent_eventIsCircular_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapRendererComponent_eventIsCircular_Parms), &Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "IsCircular", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::MapRendererComponent_eventIsCircular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::MapRendererComponent_eventIsCircular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_IsCircular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_IsCircular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execIsCircular)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCircular();
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function IsCircular

// Begin Class UMapRendererComponent Function IsRendered
struct Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics
{
	struct MapRendererComponent_eventIsRendered_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the map is currently rendered\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the map is currently rendered" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapRendererComponent_eventIsRendered_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapRendererComponent_eventIsRendered_Parms), &Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "IsRendered", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::MapRendererComponent_eventIsRendered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::MapRendererComponent_eventIsRendered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_IsRendered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_IsRendered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execIsRendered)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRendered();
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function IsRendered

// Begin Class UMapRendererComponent Function SetAutoLocateMapView
struct Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics
{
	struct MapRendererComponent_eventSetAutoLocateMapView_Parms
	{
		EMapViewSearchOption InAutoLocateMapView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Affects whether a MapView is automatically located at game start. Can be called during gameplay to find a new MapView, replacing the current.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Affects whether a MapView is automatically located at game start. Can be called during gameplay to find a new MapView, replacing the current." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InAutoLocateMapView_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAutoLocateMapView_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InAutoLocateMapView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::NewProp_InAutoLocateMapView_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::NewProp_InAutoLocateMapView = { "InAutoLocateMapView", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetAutoLocateMapView_Parms, InAutoLocateMapView), Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InAutoLocateMapView_MetaData), NewProp_InAutoLocateMapView_MetaData) }; // 1004760387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::NewProp_InAutoLocateMapView_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::NewProp_InAutoLocateMapView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetAutoLocateMapView", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::MapRendererComponent_eventSetAutoLocateMapView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::MapRendererComponent_eventSetAutoLocateMapView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetAutoLocateMapView)
{
	P_GET_ENUM(EMapViewSearchOption,Z_Param_InAutoLocateMapView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoLocateMapView(EMapViewSearchOption(Z_Param_InAutoLocateMapView));
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetAutoLocateMapView

// Begin Class UMapRendererComponent Function SetBackgroundFillColor
struct Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics
{
	struct MapRendererComponent_eventSetBackgroundFillColor_Parms
	{
		FLinearColor NewBackgroundFillColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the color to show underneath any background textures\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the color to show underneath any background textures" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundFillColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewBackgroundFillColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::NewProp_NewBackgroundFillColor = { "NewBackgroundFillColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetBackgroundFillColor_Parms, NewBackgroundFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewBackgroundFillColor_MetaData), NewProp_NewBackgroundFillColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::NewProp_NewBackgroundFillColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetBackgroundFillColor", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::MapRendererComponent_eventSetBackgroundFillColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::MapRendererComponent_eventSetBackgroundFillColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetBackgroundFillColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_NewBackgroundFillColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBackgroundFillColor(Z_Param_Out_NewBackgroundFillColor);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetBackgroundFillColor

// Begin Class UMapRendererComponent Function SetDrawFrustum
struct Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics
{
	struct MapRendererComponent_eventSetDrawFrustum_Parms
	{
		bool bNewDrawFrustum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set whether the boundaries of the player's view is visualized on the map as a trapezoid\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the boundaries of the player's view is visualized on the map as a trapezoid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewDrawFrustum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewDrawFrustum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDrawFrustum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::NewProp_bNewDrawFrustum_SetBit(void* Obj)
{
	((MapRendererComponent_eventSetDrawFrustum_Parms*)Obj)->bNewDrawFrustum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::NewProp_bNewDrawFrustum = { "bNewDrawFrustum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapRendererComponent_eventSetDrawFrustum_Parms), &Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::NewProp_bNewDrawFrustum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewDrawFrustum_MetaData), NewProp_bNewDrawFrustum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::NewProp_bNewDrawFrustum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetDrawFrustum", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::MapRendererComponent_eventSetDrawFrustum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::MapRendererComponent_eventSetDrawFrustum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetDrawFrustum)
{
	P_GET_UBOOL(Z_Param_bNewDrawFrustum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDrawFrustum(Z_Param_bNewDrawFrustum);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetDrawFrustum

// Begin Class UMapRendererComponent Function SetFrustumFloorDistance
struct Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics
{
	struct MapRendererComponent_eventSetFrustumFloorDistance_Parms
	{
		float NewFrustumFloorDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If bDrawFrustum == true, how far the floor is beneath the MapView. Controls the size of the rendered trapezoid.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If bDrawFrustum == true, how far the floor is beneath the MapView. Controls the size of the rendered trapezoid." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFrustumFloorDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFrustumFloorDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::NewProp_NewFrustumFloorDistance = { "NewFrustumFloorDistance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetFrustumFloorDistance_Parms, NewFrustumFloorDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFrustumFloorDistance_MetaData), NewProp_NewFrustumFloorDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::NewProp_NewFrustumFloorDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetFrustumFloorDistance", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::MapRendererComponent_eventSetFrustumFloorDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::MapRendererComponent_eventSetFrustumFloorDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetFrustumFloorDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFrustumFloorDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrustumFloorDistance(Z_Param_NewFrustumFloorDistance);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetFrustumFloorDistance

// Begin Class UMapRendererComponent Function SetHorizontalAlignment
struct Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics
{
	struct MapRendererComponent_eventSetHorizontalAlignment_Parms
	{
		TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set how the map should align horizontally in the viewport\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set how the map should align horizontally in the viewport" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(0, nullptr) }; // 1062133256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetHorizontalAlignment", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::MapRendererComponent_eventSetHorizontalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::MapRendererComponent_eventSetHorizontalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetHorizontalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetHorizontalAlignment

// Begin Class UMapRendererComponent Function SetIsCircular
struct Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics
{
	struct MapRendererComponent_eventSetIsCircular_Parms
	{
		bool bNewIsCircular;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set whether the rendered map is circular\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the rendered map is circular" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewIsCircular_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsCircular_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsCircular;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::NewProp_bNewIsCircular_SetBit(void* Obj)
{
	((MapRendererComponent_eventSetIsCircular_Parms*)Obj)->bNewIsCircular = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::NewProp_bNewIsCircular = { "bNewIsCircular", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapRendererComponent_eventSetIsCircular_Parms), &Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::NewProp_bNewIsCircular_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewIsCircular_MetaData), NewProp_bNewIsCircular_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::NewProp_bNewIsCircular,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetIsCircular", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::MapRendererComponent_eventSetIsCircular_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::MapRendererComponent_eventSetIsCircular_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetIsCircular()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetIsCircular_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetIsCircular)
{
	P_GET_UBOOL(Z_Param_bNewIsCircular);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsCircular(Z_Param_bNewIsCircular);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetIsCircular

// Begin Class UMapRendererComponent Function SetIsRendered
struct Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics
{
	struct MapRendererComponent_eventSetIsRendered_Parms
	{
		bool bNewIsRendered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set whether the map is currently rendered\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the map is currently rendered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewIsRendered_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIsRendered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsRendered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::NewProp_bNewIsRendered_SetBit(void* Obj)
{
	((MapRendererComponent_eventSetIsRendered_Parms*)Obj)->bNewIsRendered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::NewProp_bNewIsRendered = { "bNewIsRendered", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapRendererComponent_eventSetIsRendered_Parms), &Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::NewProp_bNewIsRendered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewIsRendered_MetaData), NewProp_bNewIsRendered_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::NewProp_bNewIsRendered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetIsRendered", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::MapRendererComponent_eventSetIsRendered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::MapRendererComponent_eventSetIsRendered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetIsRendered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetIsRendered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetIsRendered)
{
	P_GET_UBOOL(Z_Param_bNewIsRendered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsRendered(Z_Param_bNewIsRendered);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetIsRendered

// Begin Class UMapRendererComponent Function SetMapView
struct Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics
{
	struct MapRendererComponent_eventSetMapView_Parms
	{
		UMapViewComponent* InMapView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the view component which defines the location, rotation and view distance of the rendered map\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the view component which defines the location, rotation and view distance of the rendered map" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InMapView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::NewProp_InMapView = { "InMapView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetMapView_Parms, InMapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMapView_MetaData), NewProp_InMapView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::NewProp_InMapView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetMapView", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::MapRendererComponent_eventSetMapView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::MapRendererComponent_eventSetMapView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetMapView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetMapView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetMapView)
{
	P_GET_OBJECT(UMapViewComponent,Z_Param_InMapView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMapView(Z_Param_InMapView);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetMapView

// Begin Class UMapRendererComponent Function SetMargin
struct Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics
{
	struct MapRendererComponent_eventSetMargin_Parms
	{
		int32 Left;
		int32 Top;
		int32 Right;
		int32 Bottom;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set how far from the viewport's edge the map should be rendered. The alignment settings affect which values are used.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set how far from the viewport's edge the map should be rendered. The alignment settings affect which values are used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Left;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Top;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Bottom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetMargin_Parms, Left), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Left_MetaData), NewProp_Left_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetMargin_Parms, Top), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Top_MetaData), NewProp_Top_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetMargin_Parms, Right), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Right_MetaData), NewProp_Right_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetMargin_Parms, Bottom), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bottom_MetaData), NewProp_Bottom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Left,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::NewProp_Bottom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetMargin", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::MapRendererComponent_eventSetMargin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::MapRendererComponent_eventSetMargin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetMargin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetMargin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetMargin)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Left);
	P_GET_PROPERTY(FIntProperty,Z_Param_Top);
	P_GET_PROPERTY(FIntProperty,Z_Param_Right);
	P_GET_PROPERTY(FIntProperty,Z_Param_Bottom);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMargin(Z_Param_Left,Z_Param_Top,Z_Param_Right,Z_Param_Bottom);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetMargin

// Begin Class UMapRendererComponent Function SetSize
struct Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics
{
	struct MapRendererComponent_eventSetSize_Parms
	{
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the rendered size of the map. The alignment settings affect which values are used.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the rendered size of the map. The alignment settings affect which values are used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetSize_Parms, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetSize_Parms, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetSize", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::MapRendererComponent_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::MapRendererComponent_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetSize)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetSize

// Begin Class UMapRendererComponent Function SetVerticalAlignment
struct Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics
{
	struct MapRendererComponent_eventSetVerticalAlignment_Parms
	{
		TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set how the map should align vertically in the viewport\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set how the map should align vertically in the viewport" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRendererComponent_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(0, nullptr) }; // 550775363
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRendererComponent, nullptr, "SetVerticalAlignment", nullptr, nullptr, Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::MapRendererComponent_eventSetVerticalAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::MapRendererComponent_eventSetVerticalAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRendererComponent::execSetVerticalAlignment)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
	P_NATIVE_END;
}
// End Class UMapRendererComponent Function SetVerticalAlignment

// Begin Class UMapRendererComponent
void UMapRendererComponent::StaticRegisterNativesUMapRendererComponent()
{
	UClass* Class = UMapRendererComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBackgroundFillColor", &UMapRendererComponent::execGetBackgroundFillColor },
		{ "GetDrawFrustum", &UMapRendererComponent::execGetDrawFrustum },
		{ "GetFrustumFloorDistance", &UMapRendererComponent::execGetFrustumFloorDistance },
		{ "IsCircular", &UMapRendererComponent::execIsCircular },
		{ "IsRendered", &UMapRendererComponent::execIsRendered },
		{ "SetAutoLocateMapView", &UMapRendererComponent::execSetAutoLocateMapView },
		{ "SetBackgroundFillColor", &UMapRendererComponent::execSetBackgroundFillColor },
		{ "SetDrawFrustum", &UMapRendererComponent::execSetDrawFrustum },
		{ "SetFrustumFloorDistance", &UMapRendererComponent::execSetFrustumFloorDistance },
		{ "SetHorizontalAlignment", &UMapRendererComponent::execSetHorizontalAlignment },
		{ "SetIsCircular", &UMapRendererComponent::execSetIsCircular },
		{ "SetIsRendered", &UMapRendererComponent::execSetIsRendered },
		{ "SetMapView", &UMapRendererComponent::execSetMapView },
		{ "SetMargin", &UMapRendererComponent::execSetMargin },
		{ "SetSize", &UMapRendererComponent::execSetSize },
		{ "SetVerticalAlignment", &UMapRendererComponent::execSetVerticalAlignment },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapRendererComponent);
UClass* Z_Construct_UClass_UMapRendererComponent_NoRegister()
{
	return UMapRendererComponent::StaticClass();
}
struct Z_Construct_UClass_UMapRendererComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MinimapPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Given a MapViewComponent, renders a map of the area represented by the map view to a HUD Canvas.\n// Add this component to your game's HUD class in case you want to render a map using the Canvas approach.\n// Alternatively, ignore this component and use the UMG approach by adding a 'Minimap' widget to the game viewport.\n" },
#endif
		{ "IncludePath", "MapRendererComponent.h" },
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Given a MapViewComponent, renders a map of the area represented by the map view to a HUD Canvas.\nAdd this component to your game's HUD class in case you want to render a map using the Canvas approach.\nAlternatively, ignore this component and use the UMG approach by adding a 'Minimap' widget to the game viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMapClicked_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Event that fires when the background is clicked. When an icon is clicked, this event is not fired.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event that fires when the background is clicked. When an icon is clicked, this event is not fired." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoLocateMapView_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether a MapViewComponent should be found automatically in the world at game start. If disabled, call SetMapView() manually with a valid MapView.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether a MapViewComponent should be found automatically in the world at game start. If disabled, call SetMapView() manually with a valid MapView." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCircular_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the rendered map is circular\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the rendered map is circular" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRendered_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the map is currently being rendered\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the map is currently being rendered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFrustum_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the player's frustum is visualized as a trapezoid. This is done by intersecting \n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the player's frustum is visualized as a trapezoid. This is done by intersecting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumFloorDistance_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Affects the drawn frustum's size when bDrawFrustum is true. Distance between player camera and the floor.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Affects the drawn frustum's size when bDrawFrustum is true. Distance between player camera and the floor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundFillColor_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The color shown in places with no assigned background texture or where the texture is transparent.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The color shown in places with no assigned background texture or where the texture is transparent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The map's horizontal alignment in the viewport\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The map's horizontal alignment in the viewport" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The map's vertical alignment in the viewport\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The map's vertical alignment in the viewport" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far from the viewport's edge the map should be rendered. The alignment settings affect which values are used.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far from the viewport's edge the map should be rendered. The alignment settings affect which values are used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The rendered size of the map. The alignment settings affect which values are used.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rendered size of the map. The alignment settings affect which values are used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillMaterial_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The material used to fill the background of the material for regions where no background texture is rendered\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The material used to fill the background of the material for regions where no background texture is rendered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FillMaterialInstance_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material instance of the background fill material\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material instance of the background fill material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTracker_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map tracker which will be found in the world at begin play\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map tracker which will be found in the world at begin play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map view which defines what part of the world is rendered\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map view which defines what part of the world is rendered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoveringIcons_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Icons that are currently being hovered\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icons that are currently being hovered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferedHoverStartEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Icons that will fire their hover start event during the next tick. Detected during rendering pass to leverage computations.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icons that will fire their hover start event during the next tick. Detected during rendering pass to leverage computations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferedHoverEndEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Icons that will fire their hover start end during the next tick. Detected during rendering pass to leverage computations.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icons that will fire their hover start end during the next tick. Detected during rendering pass to leverage computations." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCanvas_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The most recent canvas that was rendered to. Used to transform screen space mouse events to world space.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRendererComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The most recent canvas that was rendered to. Used to transform screen space mouse events to world space." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapClicked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoLocateMapView_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoLocateMapView;
	static void NewProp_bIsCircular_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCircular;
	static void NewProp_bIsRendered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRendered;
	static void NewProp_bDrawFrustum_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFrustum;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumFloorDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundFillColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FillMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapTracker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapView;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveringIcons_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_HoveringIcons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferedHoverStartEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BufferedHoverStartEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BufferedHoverEndEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BufferedHoverEndEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LastCanvas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapRendererComponent_GetBackgroundFillColor, "GetBackgroundFillColor" }, // 4288420706
		{ &Z_Construct_UFunction_UMapRendererComponent_GetDrawFrustum, "GetDrawFrustum" }, // 2047084856
		{ &Z_Construct_UFunction_UMapRendererComponent_GetFrustumFloorDistance, "GetFrustumFloorDistance" }, // 3192827150
		{ &Z_Construct_UFunction_UMapRendererComponent_IsCircular, "IsCircular" }, // 3507722600
		{ &Z_Construct_UFunction_UMapRendererComponent_IsRendered, "IsRendered" }, // 1990180086
		{ &Z_Construct_UFunction_UMapRendererComponent_SetAutoLocateMapView, "SetAutoLocateMapView" }, // 481442260
		{ &Z_Construct_UFunction_UMapRendererComponent_SetBackgroundFillColor, "SetBackgroundFillColor" }, // 3961668731
		{ &Z_Construct_UFunction_UMapRendererComponent_SetDrawFrustum, "SetDrawFrustum" }, // 41191033
		{ &Z_Construct_UFunction_UMapRendererComponent_SetFrustumFloorDistance, "SetFrustumFloorDistance" }, // 3321771297
		{ &Z_Construct_UFunction_UMapRendererComponent_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 1777797871
		{ &Z_Construct_UFunction_UMapRendererComponent_SetIsCircular, "SetIsCircular" }, // 2583562868
		{ &Z_Construct_UFunction_UMapRendererComponent_SetIsRendered, "SetIsRendered" }, // 2127960756
		{ &Z_Construct_UFunction_UMapRendererComponent_SetMapView, "SetMapView" }, // 2721590350
		{ &Z_Construct_UFunction_UMapRendererComponent_SetMargin, "SetMargin" }, // 3380345804
		{ &Z_Construct_UFunction_UMapRendererComponent_SetSize, "SetSize" }, // 1852063199
		{ &Z_Construct_UFunction_UMapRendererComponent_SetVerticalAlignment, "SetVerticalAlignment" }, // 1600977067
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapRendererComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_OnMapClicked = { "OnMapClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, OnMapClicked), Z_Construct_UDelegateFunction_MinimapPlugin_MapClickedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMapClicked_MetaData), NewProp_OnMapClicked_MetaData) }; // 1133729135
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_AutoLocateMapView_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_AutoLocateMapView = { "AutoLocateMapView", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, AutoLocateMapView), Z_Construct_UEnum_MinimapPlugin_EMapViewSearchOption, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoLocateMapView_MetaData), NewProp_AutoLocateMapView_MetaData) }; // 1004760387
void Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsCircular_SetBit(void* Obj)
{
	((UMapRendererComponent*)Obj)->bIsCircular = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsCircular = { "bIsCircular", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapRendererComponent), &Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsCircular_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCircular_MetaData), NewProp_bIsCircular_MetaData) };
void Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsRendered_SetBit(void* Obj)
{
	((UMapRendererComponent*)Obj)->bIsRendered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsRendered = { "bIsRendered", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapRendererComponent), &Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsRendered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRendered_MetaData), NewProp_bIsRendered_MetaData) };
void Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bDrawFrustum_SetBit(void* Obj)
{
	((UMapRendererComponent*)Obj)->bDrawFrustum = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bDrawFrustum = { "bDrawFrustum", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapRendererComponent), &Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bDrawFrustum_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFrustum_MetaData), NewProp_bDrawFrustum_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_FrustumFloorDistance = { "FrustumFloorDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, FrustumFloorDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumFloorDistance_MetaData), NewProp_FrustumFloorDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BackgroundFillColor = { "BackgroundFillColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, BackgroundFillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundFillColor_MetaData), NewProp_BackgroundFillColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalAlignment_MetaData), NewProp_HorizontalAlignment_MetaData) }; // 1062133256
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalAlignment_MetaData), NewProp_VerticalAlignment_MetaData) }; // 550775363
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Margin_MetaData), NewProp_Margin_MetaData) }; // 2986890016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_FillMaterial = { "FillMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, FillMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillMaterial_MetaData), NewProp_FillMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_FillMaterialInstance = { "FillMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, FillMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FillMaterialInstance_MetaData), NewProp_FillMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_MapTracker = { "MapTracker", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, MapTracker), Z_Construct_UClass_UMapTrackerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTracker_MetaData), NewProp_MapTracker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapView_MetaData), NewProp_MapView_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_HoveringIcons_ElementProp = { "HoveringIcons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_HoveringIcons = { "HoveringIcons", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, HoveringIcons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoveringIcons_MetaData), NewProp_HoveringIcons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverStartEvents_Inner = { "BufferedHoverStartEvents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverStartEvents = { "BufferedHoverStartEvents", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, BufferedHoverStartEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferedHoverStartEvents_MetaData), NewProp_BufferedHoverStartEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverEndEvents_Inner = { "BufferedHoverEndEvents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMapIconComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverEndEvents = { "BufferedHoverEndEvents", nullptr, (EPropertyFlags)0x0040008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, BufferedHoverEndEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferedHoverEndEvents_MetaData), NewProp_BufferedHoverEndEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_LastCanvas = { "LastCanvas", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRendererComponent, LastCanvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCanvas_MetaData), NewProp_LastCanvas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapRendererComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_OnMapClicked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_AutoLocateMapView_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_AutoLocateMapView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsCircular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bIsRendered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_bDrawFrustum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_FrustumFloorDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BackgroundFillColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_HorizontalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_VerticalAlignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_Margin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_FillMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_FillMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_MapTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_MapView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_HoveringIcons_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_HoveringIcons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverStartEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverStartEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverEndEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_BufferedHoverEndEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRendererComponent_Statics::NewProp_LastCanvas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapRendererComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapRendererComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapRendererComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapRendererComponent_Statics::ClassParams = {
	&UMapRendererComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapRendererComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapRendererComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapRendererComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapRendererComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapRendererComponent()
{
	if (!Z_Registration_Info_UClass_UMapRendererComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapRendererComponent.OuterSingleton, Z_Construct_UClass_UMapRendererComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapRendererComponent.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapRendererComponent>()
{
	return UMapRendererComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapRendererComponent);
UMapRendererComponent::~UMapRendererComponent() {}
// End Class UMapRendererComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapRendererComponent, UMapRendererComponent::StaticClass, TEXT("UMapRendererComponent"), &Z_Registration_Info_UClass_UMapRendererComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapRendererComponent), 4040971156U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_4245739122(TEXT("/Script/MinimapPlugin"),
	Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRendererComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
