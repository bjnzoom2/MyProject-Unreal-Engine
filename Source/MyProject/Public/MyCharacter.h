// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "MyCharacter.generated.h"

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

	UFUNCTION(BlueprintCallable)
	void MoveAlongForwardVector(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void MoveAlongRightVector(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void MoveAlongUpVector(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void Dash(UCameraComponent* camera, UPARAM(ref)bool& canDash);

	UFUNCTION(BlueprintCallable)
	void PickUp(AActor* otherActor, UPARAM(ref)bool& pickupState);

	UFUNCTION(BlueprintCallable)
	void Fly();
};
