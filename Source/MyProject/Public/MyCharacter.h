// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "MyCharacter.generated.h"

UENUM()
enum ESolverMode {
	Transform = 0,
	Rotate = 1,
	Scale = 2,
	Edit = 3,
	None = 4
};

UCLASS()
class MYPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="C++ Components")
	TObjectPtr<UCameraComponent> cameraComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "C++ Components")
	TObjectPtr<USpringArmComponent> springArmComp;

	UPROPERTY(BlueprintReadWrite)
	bool bCanDash;

	UPROPERTY(BlueprintReadWrite)
	bool bPickupState;

	UPROPERTY(BlueprintReadWrite)
	bool bPreviousPickupState;

	UPROPERTY(BlueprintReadWrite)
	double range = 5000;

	UPROPERTY(BlueprintReadWrite)
	bool bSolverActivated;

	UPROPERTY(BlueprintReadWrite)
	bool bSolverUse;

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<ESolverMode> solverMode;

	UPROPERTY(BlueprintReadWrite)
	TEnumAsByte<ESolverMode> solverUseMode;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "C++ Components")
	TObjectPtr<UStaticMeshComponent> solverMeshComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "C++ Meshes")
	TArray<TObjectPtr<UStaticMesh>> solverMeshes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "C++ Actors")
	TObjectPtr<AActor> otherActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UStaticMeshComponent> otherMainMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TObjectPtr<UStaticMeshComponent> otherSolverMesh;

	UFUNCTION(BlueprintCallable)
	void MoveAlongForwardVector(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void MoveAlongRightVector(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void MoveAlongUpVector(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void Dash();

	//UFUNCTION(BlueprintCallable)
	//void PickUp(UPARAM(ref)AActor*& otherActor, UMaterialInterface* outline);

	UFUNCTION(BlueprintCallable)
	void Fly();

	UFUNCTION(BlueprintCallable)
	void Shoot();

	UFUNCTION(BlueprintCallable)
	void ActivateSolver();

	UFUNCTION(BlueprintCallable)
	void SwitchSolverMode(float mouseAxisValue);

	UFUNCTION(BlueprintCallable)
	void MeshCheck();

	UFUNCTION(BlueprintCallable)
	void SolverUseMesh(UMaterialInterface* outline);

	UFUNCTION(BlueprintCallable)
	void SolverUse();
};
