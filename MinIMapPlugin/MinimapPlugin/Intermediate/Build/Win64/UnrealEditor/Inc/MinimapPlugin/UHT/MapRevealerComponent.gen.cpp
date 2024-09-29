// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinimapPlugin/Public/MapRevealerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapRevealerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRevealerComponent();
MINIMAPPLUGIN_API UClass* Z_Construct_UClass_UMapRevealerComponent_NoRegister();
MINIMAPPLUGIN_API UEnum* Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode();
UPackage* Z_Construct_UPackage__Script_MinimapPlugin();
// End Cross Module References

// Begin Class UMapRevealerComponent Function GetRevealDropOffDistance
struct Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics
{
	struct MapRevealerComponent_eventGetRevealDropOffDistance_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealDropOffDistance_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "GetRevealDropOffDistance", nullptr, nullptr, Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::MapRevealerComponent_eventGetRevealDropOffDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::MapRevealerComponent_eventGetRevealDropOffDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRevealerComponent::execGetRevealDropOffDistance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetRevealDropOffDistance();
	P_NATIVE_END;
}
// End Class UMapRevealerComponent Function GetRevealDropOffDistance

// Begin Class UMapRevealerComponent Function GetRevealExtent
struct Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics
{
	struct MapRevealerComponent_eventGetRevealExtent_Parms
	{
		float RevealExtentX;
		float RevealExtentY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the XY extent of this revealer. Z is unused.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the XY extent of this revealer. Z is unused." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RevealExtentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RevealExtentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentX = { "RevealExtentX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealExtent_Parms, RevealExtentX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentY = { "RevealExtentY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealExtent_Parms, RevealExtentY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::NewProp_RevealExtentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "GetRevealExtent", nullptr, nullptr, Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::MapRevealerComponent_eventGetRevealExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::MapRevealerComponent_eventGetRevealExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRevealerComponent::execGetRevealExtent)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RevealExtentX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RevealExtentY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRevealExtent(Z_Param_Out_RevealExtentX,Z_Param_Out_RevealExtentY);
	P_NATIVE_END;
}
// End Class UMapRevealerComponent Function GetRevealExtent

// Begin Class UMapRevealerComponent Function GetRevealMode
struct Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics
{
	struct MapRevealerComponent_eventGetRevealMode_Parms
	{
		EMapFogRevealMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether this reveals temporarily, permanently or is disabled\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether this reveals temporarily, permanently or is disabled" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventGetRevealMode_Parms, ReturnValue), Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, METADATA_PARAMS(0, nullptr) }; // 2373672872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "GetRevealMode", nullptr, nullptr, Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::MapRevealerComponent_eventGetRevealMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::MapRevealerComponent_eventGetRevealMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRevealerComponent::execGetRevealMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMapFogRevealMode*)Z_Param__Result=P_THIS->GetRevealMode();
	P_NATIVE_END;
}
// End Class UMapRevealerComponent Function GetRevealMode

// Begin Class UMapRevealerComponent Function SetRevealDropOffDistance
struct Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics
{
	struct MapRevealerComponent_eventSetRevealDropOffDistance_Parms
	{
		float NewRevealDropOffDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the distance, measured from the revealer's XY extent, over which the revealer's effect gradually decreases." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealDropOffDistance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRevealDropOffDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::NewProp_NewRevealDropOffDistance = { "NewRevealDropOffDistance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealDropOffDistance_Parms, NewRevealDropOffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRevealDropOffDistance_MetaData), NewProp_NewRevealDropOffDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::NewProp_NewRevealDropOffDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "SetRevealDropOffDistance", nullptr, nullptr, Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::MapRevealerComponent_eventSetRevealDropOffDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::MapRevealerComponent_eventSetRevealDropOffDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRevealerComponent::execSetRevealDropOffDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRevealDropOffDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRevealDropOffDistance(Z_Param_NewRevealDropOffDistance);
	P_NATIVE_END;
}
// End Class UMapRevealerComponent Function SetRevealDropOffDistance

// Begin Class UMapRevealerComponent Function SetRevealExtent
struct Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics
{
	struct MapRevealerComponent_eventSetRevealExtent_Parms
	{
		float NewRevealExtentX;
		float NewRevealExtentY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets the XY extend of this revealer. Z is unused.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the XY extend of this revealer. Z is unused." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealExtentX_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealExtentY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRevealExtentX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRevealExtentY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentX = { "NewRevealExtentX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealExtent_Parms, NewRevealExtentX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRevealExtentX_MetaData), NewProp_NewRevealExtentX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentY = { "NewRevealExtentY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealExtent_Parms, NewRevealExtentY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRevealExtentY_MetaData), NewProp_NewRevealExtentY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::NewProp_NewRevealExtentY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "SetRevealExtent", nullptr, nullptr, Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::MapRevealerComponent_eventSetRevealExtent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::MapRevealerComponent_eventSetRevealExtent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRevealerComponent::execSetRevealExtent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRevealExtentX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRevealExtentY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRevealExtent(Z_Param_NewRevealExtentX,Z_Param_NewRevealExtentY);
	P_NATIVE_END;
}
// End Class UMapRevealerComponent Function SetRevealExtent

// Begin Class UMapRevealerComponent Function SetRevealMode
struct Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics
{
	struct MapRevealerComponent_eventSetRevealMode_Parms
	{
		EMapFogRevealMode NewRevealMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets whether this reveals temporarily, permanently or is disabled\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether this reveals temporarily, permanently or is disabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRevealMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewRevealMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRevealMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode = { "NewRevealMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapRevealerComponent_eventSetRevealMode_Parms, NewRevealMode), Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRevealMode_MetaData), NewProp_NewRevealMode_MetaData) }; // 2373672872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::NewProp_NewRevealMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMapRevealerComponent, nullptr, "SetRevealMode", nullptr, nullptr, Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::MapRevealerComponent_eventSetRevealMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::MapRevealerComponent_eventSetRevealMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapRevealerComponent::execSetRevealMode)
{
	P_GET_ENUM(EMapFogRevealMode,Z_Param_NewRevealMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRevealMode(EMapFogRevealMode(Z_Param_NewRevealMode));
	P_NATIVE_END;
}
// End Class UMapRevealerComponent Function SetRevealMode

// Begin Class UMapRevealerComponent
void UMapRevealerComponent::StaticRegisterNativesUMapRevealerComponent()
{
	UClass* Class = UMapRevealerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRevealDropOffDistance", &UMapRevealerComponent::execGetRevealDropOffDistance },
		{ "GetRevealExtent", &UMapRevealerComponent::execGetRevealExtent },
		{ "GetRevealMode", &UMapRevealerComponent::execGetRevealMode },
		{ "SetRevealDropOffDistance", &UMapRevealerComponent::execSetRevealDropOffDistance },
		{ "SetRevealExtent", &UMapRevealerComponent::execSetRevealExtent },
		{ "SetRevealMode", &UMapRevealerComponent::execSetRevealMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMapRevealerComponent);
UClass* Z_Construct_UClass_UMapRevealerComponent_NoRegister()
{
	return UMapRevealerComponent::StaticClass();
}
struct Z_Construct_UClass_UMapRevealerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "MinimapPlugin" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Minimaps can be covered in fog by adding MapFog actors. When using this feature, add MapRevealComponents \n// to actors that can temporarily or permanently reveal areas.\n" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "MapRevealerComponent.h" },
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimaps can be covered in fog by adding MapFog actors. When using this feature, add MapRevealComponents\nto actors that can temporarily or permanently reveal areas." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevealMaterial_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the shape of the revealed area, by rendering that shape to every MapFog's fog render target.\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the shape of the revealed area, by rendering that shape to every MapFog's fog render target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevealMode_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this revealer reveals temporarily, permanently or is disabled at the moment\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this revealer reveals temporarily, permanently or is disabled at the moment" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevealDropOffDistance_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Any area within RevealRadius and RevealRadius + RevealDropOffDistance is partially revealed\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any area within RevealRadius and RevealRadius + RevealDropOffDistance is partially revealed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTempEngineBugWorkaround_MetaData[] = {
		{ "Category", "Minimap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 4.22 introduced a bug where K2_DrawTriangle renders triange lists with the UVs of first triangle\n" },
#endif
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "4.22 introduced a bug where K2_DrawTriangle renders triange lists with the UVs of first triangle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RevealMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/MapRevealerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RevealMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RevealMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RevealMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RevealDropOffDistance;
	static void NewProp_bTempEngineBugWorkaround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTempEngineBugWorkaround;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RevealMaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapRevealerComponent_GetRevealDropOffDistance, "GetRevealDropOffDistance" }, // 3382330676
		{ &Z_Construct_UFunction_UMapRevealerComponent_GetRevealExtent, "GetRevealExtent" }, // 4066314747
		{ &Z_Construct_UFunction_UMapRevealerComponent_GetRevealMode, "GetRevealMode" }, // 3653388765
		{ &Z_Construct_UFunction_UMapRevealerComponent_SetRevealDropOffDistance, "SetRevealDropOffDistance" }, // 205018043
		{ &Z_Construct_UFunction_UMapRevealerComponent_SetRevealExtent, "SetRevealExtent" }, // 317930969
		{ &Z_Construct_UFunction_UMapRevealerComponent_SetRevealMode, "SetRevealMode" }, // 1637993476
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapRevealerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterial = { "RevealMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRevealerComponent, RevealMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevealMaterial_MetaData), NewProp_RevealMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode = { "RevealMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRevealerComponent, RevealMode), Z_Construct_UEnum_MinimapPlugin_EMapFogRevealMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevealMode_MetaData), NewProp_RevealMode_MetaData) }; // 2373672872
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealDropOffDistance = { "RevealDropOffDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRevealerComponent, RevealDropOffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevealDropOffDistance_MetaData), NewProp_RevealDropOffDistance_MetaData) };
void Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround_SetBit(void* Obj)
{
	((UMapRevealerComponent*)Obj)->bTempEngineBugWorkaround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround = { "bTempEngineBugWorkaround", nullptr, (EPropertyFlags)0x0010000000000055, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMapRevealerComponent), &Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTempEngineBugWorkaround_MetaData), NewProp_bTempEngineBugWorkaround_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterialInstance = { "RevealMaterialInstance", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMapRevealerComponent, RevealMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RevealMaterialInstance_MetaData), NewProp_RevealMaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMapRevealerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealDropOffDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_bTempEngineBugWorkaround,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMapRevealerComponent_Statics::NewProp_RevealMaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMapRevealerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MinimapPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapRevealerComponent_Statics::ClassParams = {
	&UMapRevealerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMapRevealerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapRevealerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapRevealerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapRevealerComponent()
{
	if (!Z_Registration_Info_UClass_UMapRevealerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapRevealerComponent.OuterSingleton, Z_Construct_UClass_UMapRevealerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapRevealerComponent.OuterSingleton;
}
template<> MINIMAPPLUGIN_API UClass* StaticClass<UMapRevealerComponent>()
{
	return UMapRevealerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapRevealerComponent);
UMapRevealerComponent::~UMapRevealerComponent() {}
// End Class UMapRevealerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapRevealerComponent, UMapRevealerComponent::StaticClass, TEXT("UMapRevealerComponent"), &Z_Registration_Info_UClass_UMapRevealerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapRevealerComponent), 3602930503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_2790270833(TEXT("/Script/MinimapPlugin"),
	Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NeoGraph_Documents_Unreal_Projects_TestMiniMap_Plugins_MinimapPlugin_Source_MinimapPlugin_Public_MapRevealerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
