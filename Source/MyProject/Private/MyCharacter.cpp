// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyCharacter::MoveAlongForwardVector(float AxisValue)
{
	if (GetMesh()) {
		FVector rightVector = GetMesh()->GetRightVector();

		AddMovementInput(rightVector, AxisValue);
	}
}

void AMyCharacter::MoveAlongRightVector(float AxisValue)
{
	if (GetMesh()) {
		FVector forwardVector = GetMesh()->GetForwardVector();

		AddMovementInput(forwardVector, -AxisValue);
	}
}

void AMyCharacter::MoveAlongUpVector(float AxisValue)
{
	if (GetMesh()) {
		FVector upVector = GetMesh()->GetUpVector();

		AddMovementInput(upVector, AxisValue);
	}
}

void AMyCharacter::PickUp(USkeletalMeshComponent* skeletalMesh, AActor* otherActor, UPARAM(ref)bool& pickupState)
{
	if (Cast<APawn>(otherActor)) return;
	TArray<UActorComponent*> components;
	FVector pickUpLocation = skeletalMesh->GetRightVector() * 200 + (skeletalMesh->GetComponentLocation() + FVector(0.0, 0.0, 42.5));
	FRotator pickUpRotation = skeletalMesh->GetComponentRotation();
	otherActor->GetComponents(components);
	for (UActorComponent* component : components) {
		UStaticMeshComponent* otherActorMesh = Cast<UStaticMeshComponent>(component);
		if (otherActorMesh) {
			if (pickupState) {
				otherActorMesh->SetSimulatePhysics(false);
				otherActorMesh->SetWorldLocationAndRotation(pickUpLocation, pickUpRotation);
			}
			else {
				otherActorMesh->SetSimulatePhysics(true);
			}
		}
	}
}

void AMyCharacter::Fly()
{
	if (GetCharacterMovement()->IsFalling()) {
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	}
	else if (GetCharacterMovement()->IsFlying()) {
		GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	}
}

