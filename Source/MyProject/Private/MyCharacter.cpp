// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanDash = true;
	bPickupState = false;
	bPreviousPickupState = false;
	bSolverActivated = false;
	solverMode = ESolverMode::Transform;
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

void AMyCharacter::Dash()
{
	if (!GetMesh() || GetCharacterMovement()->IsFlying()) return;
	bool grounded = !GetCharacterMovement()->IsFalling();
	if (!grounded && !bCanDash) return;

	if (cameraComp) {
		FVector dashVector = cameraComp->GetForwardVector();
		FVector velocityVector = GetVelocity();
		dashVector.X *= 4.8;
		dashVector.Y *= 4.8;
		LaunchCharacter(dashVector * 1250.0, false, false);
		//LaunchCharacter({ velocityVector.X * 10.0, velocityVector.Y * 10.0, 0 }, false, false);
	}

	bCanDash = false;
}

/*void AMyCharacter::PickUp(UPARAM(ref)AActor*& otherActor, UMaterialInterface* outline)
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
}*/

void AMyCharacter::Fly()
{
	if (GetCharacterMovement()->IsFalling()) {
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	}
	else if (GetCharacterMovement()->IsFlying()) {
		GetCharacterMovement()->SetMovementMode(MOVE_Falling);
	}
}

void AMyCharacter::Shoot()
{
	TArray<FHitResult> hits;
	FVector startPos = springArmComp->GetComponentLocation();
	FVector endPos = cameraComp->GetForwardVector() * range + startPos;
	bool bHit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), startPos, endPos, 30.0f, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), false, TArray<AActor*>(), EDrawDebugTrace::Persistent, hits, true);
	if (bHit) {
		UKismetSystemLibrary::PrintString(this, UKismetStringLibrary::Conv_IntToString(hits.Num()));
		for (FHitResult& hit : hits) {
			UKismetSystemLibrary::PrintString(this, UKismetStringLibrary::Conv_NameToString(hit.GetActor()->GetFName()));
			if (hit.GetComponent()->IsSimulatingPhysics()) {
				FVector hitLocation = hit.Location;
				FVector componentLocation = hit.GetComponent()->GetComponentLocation();
				hit.GetComponent()->AddImpulse((componentLocation - hitLocation).GetSafeNormal() * 2000, NAME_None, true);
			}
		}
	}
}

void AMyCharacter::ActivateSolver()
{
	bSolverActivated = !bSolverActivated;
	if (bSolverActivated) {
		int solverModeValue = static_cast<int>(solverMode);
		solverMeshComp->SetStaticMesh(solverMeshes[solverModeValue]);
	}
	else {
		solverMeshComp->SetStaticMesh(nullptr);
	}
}

void AMyCharacter::SwitchSolverMode(float mouseAxisValue)
{
	int solverModeValue = static_cast<int>(solverMode);
	solverModeValue += static_cast<int>(mouseAxisValue);
	if (solverModeValue > 3) solverModeValue = 0;
	if (solverModeValue < 0) solverModeValue = 3;
	if (bSolverActivated) solverMeshComp->SetStaticMesh(solverMeshes[solverModeValue]);
	solverMode = static_cast<ESolverMode>(solverModeValue);
}

void AMyCharacter::SolverTransform(UPARAM(ref)AActor* otherActor, UMaterialInterface* outline)
{
	if (!bSolverActivated || !otherActor || Cast<APawn>(otherActor)) return;
	TArray<UStaticMeshComponent*> otherActorMeshs;
	otherActor->GetComponents(otherActorMeshs);
	UStaticMeshComponent* otherMainMesh = nullptr;
	UStaticMeshComponent* otherSolverMesh = nullptr;

	for (UStaticMeshComponent* mesh : otherActorMeshs) {
		if (mesh->GetFName() == FName("Solver Mesh")) {
			otherSolverMesh = mesh;
		}
		else {
			otherMainMesh = mesh;
		}
	}

	if (!otherSolverMesh) {
		otherSolverMesh = NewObject<UStaticMeshComponent>(otherActor, "Solver Mesh");
		otherSolverMesh->SetMobility(EComponentMobility::Movable);
		otherSolverMesh->SetStaticMesh(solverMeshes[0]);
		otherSolverMesh->SetupAttachment(otherMainMesh);
		otherSolverMesh->SetWorldLocation(otherMainMesh->GetComponentLocation() + FVector(0.0, 0.0, otherSolverMesh->GetStaticMesh()->GetBounds().BoxExtent.Size() / 2));
		otherSolverMesh->SetWorldScale3D(FVector(2.0));
		otherSolverMesh->RegisterComponent();
		otherMainMesh->SetOverlayMaterial(outline);
	}
	else if (otherSolverMesh->GetStaticMesh() != solverMeshes[0]) {
		otherSolverMesh->SetStaticMesh(solverMeshes[0]);
		if (otherMainMesh->GetOverlayMaterial() != outline) otherMainMesh->SetOverlayMaterial(outline);
	}
	else {
		otherSolverMesh->DestroyComponent();
		otherSolverMesh = nullptr;
		otherMainMesh->SetOverlayMaterial(nullptr);
		otherMainMesh = nullptr;
		otherActor = nullptr;
	}
}

