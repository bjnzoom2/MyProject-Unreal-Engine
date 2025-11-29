// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanDash = false;
	bPickupState = false;
	bPreviousPickupState = false;
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

void AMyCharacter::Dash(UCameraComponent* camera)
{
	if (!GetMesh() || GetCharacterMovement()->IsFlying()) return;
	bool grounded = !GetCharacterMovement()->IsFalling();
	if (!grounded && !bCanDash) return;

	if (camera) {
		FVector dashVector = camera->GetForwardVector();
		FVector velocityVector = GetVelocity();
		dashVector.X *= 4.8;
		dashVector.Y *= 4.8;
		LaunchCharacter(dashVector * 1250.0, false, false);
		//LaunchCharacter({ velocityVector.X * 10.0, velocityVector.Y * 10.0, 0 }, false, false);
	}

	bCanDash = false;
}

void AMyCharacter::PickUp(UPARAM(ref)AActor*& otherActor, UMaterialInterface* outline)
{
	if (!otherActor) return;
	if (Cast<APawn>(otherActor)) return;
	TArray<UActorComponent*> components;
	FVector pickUpLocation = GetMesh()->GetRightVector() * 200 + (GetMesh()->GetComponentLocation() + FVector(0.0, 0.0, 42.5));
	FRotator pickUpRotation = GetMesh()->GetComponentRotation();
	otherActor->GetComponents(components);
	for (UActorComponent* component : components) {
		UStaticMeshComponent* otherActorMesh = Cast<UStaticMeshComponent>(component);
		if (otherActorMesh) {
			if (bPickupState) {
				if (otherActorMesh->IsSimulatingPhysics()) otherActorMesh->SetSimulatePhysics(false);
				otherActorMesh->SetWorldLocationAndRotation(pickUpLocation, pickUpRotation);
				bPreviousPickupState = true;
			}
			else {
				if (!otherActorMesh->IsSimulatingPhysics()) otherActorMesh->SetSimulatePhysics(true);
				if (bPreviousPickupState) {
					otherActorMesh->SetOverlayMaterial(nullptr);
					otherActor = nullptr;
				}
				else {
					if (otherActorMesh->GetOverlayMaterial() != outline) otherActorMesh->SetOverlayMaterial(outline);
				}
				bPreviousPickupState = false;
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

