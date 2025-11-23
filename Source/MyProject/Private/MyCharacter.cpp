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

void AMyCharacter::MoveAlongForwardVector(USkeletalMeshComponent* skeletalMesh, float AxisValue)
{
	if (skeletalMesh) {
		FVector rightVector = skeletalMesh->GetRightVector();

		AddMovementInput(rightVector, AxisValue);
	}
}

void AMyCharacter::MoveAlongRightVector(USkeletalMeshComponent* skeletalMesh, float AxisValue)
{
	if (skeletalMesh) {
		FVector forwardVector = skeletalMesh->GetForwardVector();

		AddMovementInput(forwardVector, -AxisValue);
	}
}

void AMyCharacter::PickUp(USkeletalMeshComponent* skeletalMesh, AActor* otherActor, UPARAM(ref)bool& pickupState)
{
	FVector pickUpLocation = skeletalMesh->GetRightVector() * 200;
	UKismetSystemLibrary::PrintString(this, UKismetStringLibrary::Conv_VectorToString(pickUpLocation));
	if (!pickupState) {
		otherActor->SetActorLocation(pickUpLocation);
	}
	pickupState = !pickupState;
}

