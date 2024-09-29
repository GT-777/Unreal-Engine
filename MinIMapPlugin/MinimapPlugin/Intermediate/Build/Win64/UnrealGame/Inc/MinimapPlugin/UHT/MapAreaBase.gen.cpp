// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapAreaBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapAreaBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapAreaBase();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_AMapAreaBase_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapViewComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References

// Begin Class UMapAreaPrimitiveComponent
void UMapAreaPrimitiveComponent::StaticRegisterNativesUMapAreaPrimitiveComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapAreaPrimitiveComponent);
UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent_NoRegister()
{
	return UMapAreaPrimitiveComponent::StaticClass();
}
struct Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// This component makes it easy to press F to focus on MapAreaBase actors.\n" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "MapAreaBase.h" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "This component makes it easy to press F to focus on MapAreaBase actors." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapAreaPrimitiveComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::ClassParams = {
	&UMapAreaPrimitiveComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapAreaPrimitiveComponent()
{
	if (!Z_Registration_Info_UClass_UMapAreaPrimitiveComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapAreaPrimitiveComponent.OuterSingleton, Z_Construct_UClass_UMapAreaPrimitiveComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapAreaPrimitiveComponent.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapAreaPrimitiveComponent>()
{
	return UMapAreaPrimitiveComponent::StaticClass();
}
UMapAreaPrimitiveComponent::UMapAreaPrimitiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapAreaPrimitiveComponent);
UMapAreaPrimitiveComponent::~UMapAreaPrimitiveComponent() {}
// End Class UMapAreaPrimitiveComponent

// Begin Class AMapAreaBase Function GetAreaBounds
struct Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics
{
	struct MapAreaBase_eventGetAreaBounds_Parms
	{
		UBoxComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns the BoxComponent that represents the area covered by this MapBackground\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Returns the BoxComponent that represents the area covered by this MapBackground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapAreaBase_eventGetAreaBounds_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetAreaBounds", nullptr, nullptr, Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::MapAreaBase_eventGetAreaBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::MapAreaBase_eventGetAreaBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapAreaBase_GetAreaBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetAreaBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapAreaBase::execGetAreaBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBoxComponent**)Z_Param__Result=P_THIS->GetAreaBounds();
	P_NATIVE_END;
}
// End Class AMapAreaBase Function GetAreaBounds

// Begin Class AMapAreaBase Function GetLevelAtHeight
struct Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics
{
	struct MapAreaBase_eventGetLevelAtHeight_Parms
	{
		float WorldZ;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns whichever background texture is active\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Returns whichever background texture is active" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldZ_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_WorldZ = { "WorldZ", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapAreaBase_eventGetLevelAtHeight_Parms, WorldZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldZ_MetaData), NewProp_WorldZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapAreaBase_eventGetLevelAtHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_WorldZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetLevelAtHeight", nullptr, nullptr, Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::MapAreaBase_eventGetLevelAtHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::MapAreaBase_eventGetLevelAtHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapAreaBase::execGetLevelAtHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_WorldZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLevelAtHeight(Z_Param_WorldZ);
	P_NATIVE_END;
}
// End Class AMapAreaBase Function GetLevelAtHeight

// Begin Class AMapAreaBase Function GetMapAspectRatio
struct Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics
{
	struct MapAreaBase_eventGetMapAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Retrieves the aspect ratio SizeX / SizeY of the map's volume. Z is ignored.\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Retrieves the aspect ratio SizeX / SizeY of the map's volume. Z is ignored." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetMapAspectRatio", nullptr, nullptr, Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::MapAreaBase_eventGetMapAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::MapAreaBase_eventGetMapAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapAreaBase::execGetMapAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMapAspectRatio();
	P_NATIVE_END;
}
// End Class AMapAreaBase Function GetMapAspectRatio

// Begin Class AMapAreaBase Function GetMapView
struct Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics
{
	struct MapAreaBase_eventGetMapView_Parms
	{
		UMapViewComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Returns a MapViewComponent that represents the area covered by this MapBackground\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Returns a MapViewComponent that represents the area covered by this MapBackground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapView_Parms, ReturnValue), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetMapView", nullptr, nullptr, Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::MapAreaBase_eventGetMapView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::MapAreaBase_eventGetMapView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapAreaBase_GetMapView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetMapView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapAreaBase::execGetMapView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMapViewComponent**)Z_Param__Result=P_THIS->GetMapView();
	P_NATIVE_END;
}
// End Class AMapAreaBase Function GetMapView

// Begin Class AMapAreaBase Function GetMapViewCornerUVs
struct Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics
{
	struct MapAreaBase_eventGetMapViewCornerUVs_Parms
	{
		UMapViewComponent* MapView;
		TArray<FVector2D> CornerUVs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// Computes the map view's corners' UV coordinates in this area\n" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Computes the map view's corners' UV coordinates in this area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapView_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapView;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerUVs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CornerUVs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_MapView = { "MapView", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapViewCornerUVs_Parms, MapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapView_MetaData), NewProp_MapView_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs_Inner = { "CornerUVs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs = { "CornerUVs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapAreaBase_eventGetMapViewCornerUVs_Parms, CornerUVs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MapAreaBase_eventGetMapViewCornerUVs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapAreaBase_eventGetMapViewCornerUVs_Parms), &Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_MapView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_CornerUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapAreaBase, nullptr, "GetMapViewCornerUVs", nullptr, nullptr, Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::MapAreaBase_eventGetMapViewCornerUVs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::MapAreaBase_eventGetMapViewCornerUVs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapAreaBase::execGetMapViewCornerUVs)
{
	P_GET_OBJECT(UMapViewComponent,Z_Param_MapView);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_CornerUVs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMapViewCornerUVs(Z_Param_MapView,Z_Param_Out_CornerUVs);
	P_NATIVE_END;
}
// End Class AMapAreaBase Function GetMapViewCornerUVs

// Begin Class AMapAreaBase
void AMapAreaBase::StaticRegisterNativesAMapAreaBase()
{
	UClass* Class = AMapAreaBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAreaBounds", &AMapAreaBase::execGetAreaBounds },
		{ "GetLevelAtHeight", &AMapAreaBase::execGetLevelAtHeight },
		{ "GetMapAspectRatio", &AMapAreaBase::execGetMapAspectRatio },
		{ "GetMapView", &AMapAreaBase::execGetMapView },
		{ "GetMapViewCornerUVs", &AMapAreaBase::execGetMapViewCornerUVs },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapAreaBase);
UClass* Z_Construct_UClass_AMapAreaBase_NoRegister()
{
	return AMapAreaBase::StaticClass();
}
struct Z_Construct_UClass_AMapAreaBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// Base class of actors that represent part of the world in the minimap, for example to add a background or fog.\n" },
		{ "IncludePath", "MapAreaBase.h" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "Base class of actors that represent part of the world in the minimap, for example to add a background or fog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaBounds_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// When viewed top-down, the world area covered by this box is mapped to the minimap\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "When viewed top-down, the world area covered by this box is mapped to the minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaPrimitive_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// This component ensures that the viewport will focus on the volume correctly when pressing F in the editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "This component ensures that the viewport will focus on the volume correctly when pressing F in the editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AreaMapView_MetaData[] = {
		{ "Category", "Minimap" },
		{ "Comment", "// A MapView component that can be used to render exactly the area covered by this MapBackground to the minimap\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MapAreaBase.h" },
		{ "ToolTip", "A MapView component that can be used to render exactly the area covered by this MapBackground to the minimap" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaBounds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaPrimitive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AreaMapView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapAreaBase_GetAreaBounds, "GetAreaBounds" }, // 3215768499
		{ &Z_Construct_UFunction_AMapAreaBase_GetLevelAtHeight, "GetLevelAtHeight" }, // 3919781926
		{ &Z_Construct_UFunction_AMapAreaBase_GetMapAspectRatio, "GetMapAspectRatio" }, // 745640189
		{ &Z_Construct_UFunction_AMapAreaBase_GetMapView, "GetMapView" }, // 3197336384
		{ &Z_Construct_UFunction_AMapAreaBase_GetMapViewCornerUVs, "GetMapViewCornerUVs" }, // 2488486129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapAreaBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaBounds = { "AreaBounds", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapAreaBase, AreaBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaBounds_MetaData), NewProp_AreaBounds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaPrimitive = { "AreaPrimitive", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapAreaBase, AreaPrimitive), Z_Construct_UClass_UMapAreaPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaPrimitive_MetaData), NewProp_AreaPrimitive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaMapView = { "AreaMapView", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapAreaBase, AreaMapView), Z_Construct_UClass_UMapViewComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AreaMapView_MetaData), NewProp_AreaMapView_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapAreaBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaPrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapAreaBase_Statics::NewProp_AreaMapView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapAreaBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapAreaBase_Statics::ClassParams = {
	&AMapAreaBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapAreaBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapAreaBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapAreaBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapAreaBase()
{
	if (!Z_Registration_Info_UClass_AMapAreaBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapAreaBase.OuterSingleton, Z_Construct_UClass_AMapAreaBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapAreaBase.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<AMapAreaBase>()
{
	return AMapAreaBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapAreaBase);
AMapAreaBase::~AMapAreaBase() {}
// End Class AMapAreaBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapAreaPrimitiveComponent, UMapAreaPrimitiveComponent::StaticClass, TEXT("UMapAreaPrimitiveComponent"), &Z_Registration_Info_UClass_UMapAreaPrimitiveComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapAreaPrimitiveComponent), 1223335373U) },
		{ Z_Construct_UClass_AMapAreaBase, AMapAreaBase::StaticClass, TEXT("AMapAreaBase"), &Z_Registration_Info_UClass_AMapAreaBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapAreaBase), 691493844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_2268754639(TEXT("/Script/MinimapPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapAreaBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
