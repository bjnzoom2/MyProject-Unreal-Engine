// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/MyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyActor();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_TestEnum();
	MYPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTestStruct();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_TestEnum;
	static UEnum* TestEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_TestEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_TestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject_TestEnum, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("TestEnum"));
		}
		return Z_Registration_Info_UEnum_TestEnum.OuterSingleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<TestEnum>()
	{
		return TestEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_MyProject_TestEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyProject_TestEnum_Statics::Enumerators[] = {
		{ "apple", (int64)apple },
		{ "banana", (int64)banana },
		{ "pear", (int64)pear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyProject_TestEnum_Statics::Enum_MetaDataParams[] = {
		{ "apple.DisplayName", "Apple_1" },
		{ "apple.Name", "apple" },
		{ "banana.DisplayName", "Apple_1" },
		{ "banana.Name", "banana" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
		{ "pear.DisplayName", "Pear_1" },
		{ "pear.Name", "pear" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject_TestEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		"TestEnum",
		"TestEnum",
		Z_Construct_UEnum_MyProject_TestEnum_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_TestEnum_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_TestEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject_TestEnum_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyProject_TestEnum()
	{
		if (!Z_Registration_Info_UEnum_TestEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_TestEnum.InnerSingleton, Z_Construct_UEnum_MyProject_TestEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_TestEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestStruct;
class UScriptStruct* FTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestStruct, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("TestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_TestStruct.OuterSingleton;
}
template<> MYPROJECT_API UScriptStruct* StaticStruct<FTestStruct>()
{
	return FTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_string_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_string;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestStruct, value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value_MetaData), Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value2_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value2 = { "value2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestStruct, value2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value2_MetaData), Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_string_MetaData[] = {
		{ "Category", "TestStruct" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_string = { "string", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestStruct, string), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_string_MetaData), Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_string_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_value2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestStruct_Statics::NewProp_string,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		&NewStructOps,
		"TestStruct",
		Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers),
		sizeof(FTestStruct),
		alignof(FTestStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_TestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestStruct.InnerSingleton, Z_Construct_UScriptStruct_FTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(AMyActor::execprintStr)
	{
		P_GET_STRUCT_REF(FTestStruct,Z_Param_Out_testStruct);
		P_GET_OBJECT(UObject,Z_Param_context);
		P_FINISH;
		P_NATIVE_BEGIN;
		AMyActor::printStr(Z_Param_Out_testStruct,Z_Param_context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execsetHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setHealth(Z_Param__health);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyActor::execgetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->getHealth();
		P_NATIVE_END;
	}
	void AMyActor::StaticRegisterNativesAMyActor()
	{
		UClass* Class = AMyActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getHealth", &AMyActor::execgetHealth },
			{ "printStr", &AMyActor::execprintStr },
			{ "setHealth", &AMyActor::execsetHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor_getHealth_Statics
	{
		struct MyActor_eventgetHealth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_getHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventgetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_getHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_getHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_getHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_getHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "getHealth", nullptr, nullptr, Z_Construct_UFunction_AMyActor_getHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_getHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_getHealth_Statics::MyActor_eventgetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_getHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_getHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_getHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_getHealth_Statics::MyActor_eventgetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_getHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_getHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_printStr_Statics
	{
		struct MyActor_eventprintStr_Parms
		{
			FTestStruct testStruct;
			UObject* context;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_testStruct;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyActor_printStr_Statics::NewProp_testStruct = { "testStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventprintStr_Parms, testStruct), Z_Construct_UScriptStruct_FTestStruct, METADATA_PARAMS(0, nullptr) }; // 2460979181
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyActor_printStr_Statics::NewProp_context = { "context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventprintStr_Parms, context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_printStr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_printStr_Statics::NewProp_testStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_printStr_Statics::NewProp_context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_printStr_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_printStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "printStr", nullptr, nullptr, Z_Construct_UFunction_AMyActor_printStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_printStr_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_printStr_Statics::MyActor_eventprintStr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_printStr_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_printStr_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_printStr_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_printStr_Statics::MyActor_eventprintStr_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_printStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_printStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyActor_setHealth_Statics
	{
		struct MyActor_eventsetHealth_Parms
		{
			float _health;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp__health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyActor_setHealth_Statics::NewProp__health = { "_health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyActor_eventsetHealth_Parms, _health), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyActor_setHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyActor_setHealth_Statics::NewProp__health,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor_setHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor_setHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor, nullptr, "setHealth", nullptr, nullptr, Z_Construct_UFunction_AMyActor_setHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_setHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyActor_setHealth_Statics::MyActor_eventsetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_setHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActor_setHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor_setHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyActor_setHealth_Statics::MyActor_eventsetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyActor_setHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActor_setHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActor);
	UClass* Z_Construct_UClass_AMyActor_NoRegister()
	{
		return AMyActor::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor_getHealth, "getHealth" }, // 2269864414
		{ &Z_Construct_UFunction_AMyActor_printStr, "printStr" }, // 4079630961
		{ &Z_Construct_UFunction_AMyActor_setHealth, "setHealth" }, // 3348139058
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "Public/MyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
		&AMyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMyActor()
	{
		if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMyActor>()
	{
		return AMyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
	AMyActor::~AMyActor() {}
	struct Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::EnumInfo[] = {
		{ TestEnum_StaticEnum, TEXT("TestEnum"), &Z_Registration_Info_UEnum_TestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2808645967U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::ScriptStructInfo[] = {
		{ FTestStruct::StaticStruct, Z_Construct_UScriptStruct_FTestStruct_Statics::NewStructOps, TEXT("TestStruct"), &Z_Registration_Info_UScriptStruct_TestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestStruct), 2460979181U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 3211192429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_596713797(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
