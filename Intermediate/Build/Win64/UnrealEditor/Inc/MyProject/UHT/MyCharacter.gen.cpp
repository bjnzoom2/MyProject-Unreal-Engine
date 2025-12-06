// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Public/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacter();
	MYPROJECT_API UClass* Z_Construct_UClass_AMyCharacter_NoRegister();
	MYPROJECT_API UEnum* Z_Construct_UEnum_MyProject_ESolverMode();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESolverMode;
	static UEnum* ESolverMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESolverMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESolverMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MyProject_ESolverMode, (UObject*)Z_Construct_UPackage__Script_MyProject(), TEXT("ESolverMode"));
		}
		return Z_Registration_Info_UEnum_ESolverMode.OuterSingleton;
	}
	template<> MYPROJECT_API UEnum* StaticEnum<ESolverMode>()
	{
		return ESolverMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MyProject_ESolverMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MyProject_ESolverMode_Statics::Enumerators[] = {
		{ "Transform", (int64)Transform },
		{ "Rotate", (int64)Rotate },
		{ "Scale", (int64)Scale },
		{ "Edit", (int64)Edit },
		{ "None", (int64)None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MyProject_ESolverMode_Statics::Enum_MetaDataParams[] = {
		{ "Edit.Name", "Edit" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
		{ "None.Name", "None" },
		{ "Rotate.Name", "Rotate" },
		{ "Scale.Name", "Scale" },
		{ "Transform.Name", "Transform" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MyProject_ESolverMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MyProject,
		nullptr,
		"ESolverMode",
		"ESolverMode",
		Z_Construct_UEnum_MyProject_ESolverMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_ESolverMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MyProject_ESolverMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MyProject_ESolverMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_MyProject_ESolverMode()
	{
		if (!Z_Registration_Info_UEnum_ESolverMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESolverMode.InnerSingleton, Z_Construct_UEnum_MyProject_ESolverMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESolverMode.InnerSingleton;
	}
	DEFINE_FUNCTION(AMyCharacter::execSolverUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SolverUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execSolverUseMesh)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_outline);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SolverUseMesh(Z_Param_outline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execMeshCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeshCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execSwitchSolverMode)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_mouseAxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchSolverMode(Z_Param_mouseAxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execActivateSolver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSolver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execFly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execMoveAlongUpVector)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveAlongUpVector(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execMoveAlongRightVector)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveAlongRightVector(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyCharacter::execMoveAlongForwardVector)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveAlongForwardVector(Z_Param_AxisValue);
		P_NATIVE_END;
	}
	void AMyCharacter::StaticRegisterNativesAMyCharacter()
	{
		UClass* Class = AMyCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSolver", &AMyCharacter::execActivateSolver },
			{ "Dash", &AMyCharacter::execDash },
			{ "Fly", &AMyCharacter::execFly },
			{ "MeshCheck", &AMyCharacter::execMeshCheck },
			{ "MoveAlongForwardVector", &AMyCharacter::execMoveAlongForwardVector },
			{ "MoveAlongRightVector", &AMyCharacter::execMoveAlongRightVector },
			{ "MoveAlongUpVector", &AMyCharacter::execMoveAlongUpVector },
			{ "Shoot", &AMyCharacter::execShoot },
			{ "SolverUse", &AMyCharacter::execSolverUse },
			{ "SolverUseMesh", &AMyCharacter::execSolverUseMesh },
			{ "SwitchSolverMode", &AMyCharacter::execSwitchSolverMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyCharacter_ActivateSolver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_ActivateSolver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_ActivateSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "ActivateSolver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_ActivateSolver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_ActivateSolver_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_ActivateSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_ActivateSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_Dash_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_Dash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Dash", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Dash_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Dash_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_Dash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Dash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_Fly_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_Fly_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable)\n//void PickUp(UPARAM(ref)AActor*& otherActor, UMaterialInterface* outline);\n" },
#endif
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable)\nvoid PickUp(UPARAM(ref)AActor*& otherActor, UMaterialInterface* outline);" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Fly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Fly", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Fly_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Fly_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_Fly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Fly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_MeshCheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_MeshCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_MeshCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "MeshCheck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MeshCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_MeshCheck_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_MeshCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_MeshCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics
	{
		struct MyCharacter_eventMoveAlongForwardVector_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventMoveAlongForwardVector_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "MoveAlongForwardVector", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::MyCharacter_eventMoveAlongForwardVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::MyCharacter_eventMoveAlongForwardVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics
	{
		struct MyCharacter_eventMoveAlongRightVector_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventMoveAlongRightVector_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "MoveAlongRightVector", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::MyCharacter_eventMoveAlongRightVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::MyCharacter_eventMoveAlongRightVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics
	{
		struct MyCharacter_eventMoveAlongUpVector_Parms
		{
			float AxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventMoveAlongUpVector_Parms, AxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::NewProp_AxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "MoveAlongUpVector", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::MyCharacter_eventMoveAlongUpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::MyCharacter_eventMoveAlongUpVector_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "Shoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_Shoot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_SolverUse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_SolverUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SolverUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SolverUse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SolverUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SolverUse_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AMyCharacter_SolverUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SolverUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics
	{
		struct MyCharacter_eventSolverUseMesh_Parms
		{
			UMaterialInterface* outline;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_outline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::NewProp_outline = { "outline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventSolverUseMesh_Parms, outline), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::NewProp_outline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SolverUseMesh", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::MyCharacter_eventSolverUseMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::MyCharacter_eventSolverUseMesh_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCharacter_SolverUseMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SolverUseMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics
	{
		struct MyCharacter_eventSwitchSolverMode_Parms
		{
			float mouseAxisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouseAxisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::NewProp_mouseAxisValue = { "mouseAxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCharacter_eventSwitchSolverMode_Parms, mouseAxisValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::NewProp_mouseAxisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCharacter, nullptr, "SwitchSolverMode", nullptr, nullptr, Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::MyCharacter_eventSwitchSolverMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::MyCharacter_eventSwitchSolverMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMyCharacter_SwitchSolverMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCharacter_SwitchSolverMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCharacter);
	UClass* Z_Construct_UClass_AMyCharacter_NoRegister()
	{
		return AMyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_cameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_springArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDash_MetaData[];
#endif
		static void NewProp_bCanDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPickupState_MetaData[];
#endif
		static void NewProp_bPickupState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPickupState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviousPickupState_MetaData[];
#endif
		static void NewProp_bPreviousPickupState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousPickupState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_range_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolverActivated_MetaData[];
#endif
		static void NewProp_bSolverActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolverActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSolverUse_MetaData[];
#endif
		static void NewProp_bSolverUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSolverUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_solverMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_solverMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_solverUseMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_solverUseMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_solverMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_solverMeshComp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_solverMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_solverMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_solverMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherMainMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_otherMainMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherSolverMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_otherSolverMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCharacter_ActivateSolver, "ActivateSolver" }, // 1683464538
		{ &Z_Construct_UFunction_AMyCharacter_Dash, "Dash" }, // 1614259173
		{ &Z_Construct_UFunction_AMyCharacter_Fly, "Fly" }, // 2485847123
		{ &Z_Construct_UFunction_AMyCharacter_MeshCheck, "MeshCheck" }, // 1537854590
		{ &Z_Construct_UFunction_AMyCharacter_MoveAlongForwardVector, "MoveAlongForwardVector" }, // 3871623889
		{ &Z_Construct_UFunction_AMyCharacter_MoveAlongRightVector, "MoveAlongRightVector" }, // 321678148
		{ &Z_Construct_UFunction_AMyCharacter_MoveAlongUpVector, "MoveAlongUpVector" }, // 575698247
		{ &Z_Construct_UFunction_AMyCharacter_Shoot, "Shoot" }, // 3108240336
		{ &Z_Construct_UFunction_AMyCharacter_SolverUse, "SolverUse" }, // 2957201540
		{ &Z_Construct_UFunction_AMyCharacter_SolverUseMesh, "SolverUseMesh" }, // 3923610882
		{ &Z_Construct_UFunction_AMyCharacter_SwitchSolverMode, "SwitchSolverMode" }, // 3632513572
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCharacter.h" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_cameraComp_MetaData[] = {
		{ "Category", "C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_cameraComp = { "cameraComp", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, cameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_cameraComp_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_cameraComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_springArmComp_MetaData[] = {
		{ "Category", "C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_springArmComp_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_springArmComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_bCanDash_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bCanDash_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->bCanDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bCanDash = { "bCanDash", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bCanDash_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_bCanDash_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_bCanDash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPickupState_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPickupState_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->bPickupState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPickupState = { "bPickupState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPickupState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPickupState_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPickupState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPreviousPickupState_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPreviousPickupState_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->bPreviousPickupState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPreviousPickupState = { "bPreviousPickupState", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPreviousPickupState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPreviousPickupState_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPreviousPickupState_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_range_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_range = { "range", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, range), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_range_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_range_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverActivated_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverActivated_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->bSolverActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverActivated = { "bSolverActivated", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverActivated_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverActivated_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverUse_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverUse_SetBit(void* Obj)
	{
		((AMyCharacter*)Obj)->bSolverUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverUse = { "bSolverUse", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCharacter), &Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverUse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverUse_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverUse_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMode_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMode = { "solverMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, solverMode), Z_Construct_UEnum_MyProject_ESolverMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMode_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMode_MetaData) }; // 2294366891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverUseMode_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverUseMode = { "solverUseMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, solverUseMode), Z_Construct_UEnum_MyProject_ESolverMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverUseMode_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverUseMode_MetaData) }; // 2294366891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshComp_MetaData[] = {
		{ "Category", "C++ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshComp = { "solverMeshComp", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, solverMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshComp_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshComp_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshes_Inner = { "solverMeshes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshes_MetaData[] = {
		{ "Category", "C++ Meshes" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshes = { "solverMeshes", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, solverMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshes_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherActor_MetaData[] = {
		{ "Category", "C++ Actors" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherActor_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherMainMesh_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherMainMesh = { "otherMainMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, otherMainMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherMainMesh_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherMainMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherSolverMesh_MetaData[] = {
		{ "Category", "MyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherSolverMesh = { "otherSolverMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCharacter, otherSolverMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherSolverMesh_MetaData), Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherSolverMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_cameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_springArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bCanDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPickupState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bPreviousPickupState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_bSolverUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverUseMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_solverMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherMainMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCharacter_Statics::NewProp_otherSolverMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCharacter_Statics::ClassParams = {
		&AMyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyCharacter()
	{
		if (!Z_Registration_Info_UClass_AMyCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCharacter.OuterSingleton, Z_Construct_UClass_AMyCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyCharacter.OuterSingleton;
	}
	template<> MYPROJECT_API UClass* StaticClass<AMyCharacter>()
	{
		return AMyCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCharacter);
	AMyCharacter::~AMyCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_Statics::EnumInfo[] = {
		{ ESolverMode_StaticEnum, TEXT("ESolverMode"), &Z_Registration_Info_UEnum_ESolverMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2294366891U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyCharacter, AMyCharacter::StaticClass, TEXT("AMyCharacter"), &Z_Registration_Info_UClass_AMyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCharacter), 3269746513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_4201300919(TEXT("/Script/MyProject"),
		Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_luken_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_MyCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
