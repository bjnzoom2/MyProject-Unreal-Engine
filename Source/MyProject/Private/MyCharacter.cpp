// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PC = nullptr;
	bCanDash = true;
	//bPickupState = false;
	//bPreviousPickupState = false;
	bSolverActivated = false;
	bSolverUse = false;
	solverMode = ESolverMode::Transform;
	solverUseMode = ESolverMode::None;
	otherActor = nullptr;
	bIsLocked = false;
	minScale = 0.1;
	maxScale = 10;
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	PC = Cast<APlayerController>(GetController());
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SolverUse();
	if (bSolverUse) {
		(solverUseMode == 1 || solverUseMode == 2) ? bIsLocked = true : bIsLocked = false;
	}
	else {
		bIsLocked = false;
	}
	if (PC) {
		bIsLocked ? PC->SetIgnoreLookInput(true) : PC->SetIgnoreLookInput(false);
	}
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

void AMyCharacter::LookAround(float AxisValue)
{
	if (!bIsLocked) {
		AddControllerYawInput(AxisValue);
	} else if (bSolverUse) {
		switch (solverUseMode) {
			case 1:
				otherMainMesh->SetWorldRotation(FRotator(otherMainMesh->GetComponentRotation().Pitch, otherMainMesh->GetComponentRotation().Yaw - AxisValue, otherMainMesh->GetComponentRotation().Roll));
				break;
			case 2:
				if (*otherMainMesh->GetComponentScale().XYZ < minScale) {
					otherMainMesh->SetWorldScale3D(FVector(minScale));
					return;
				}
				else if (*otherMainMesh->GetComponentScale().XYZ > maxScale) {
					otherMainMesh->SetWorldScale3D(FVector(maxScale));
					return;
				}
				otherMainMesh->SetWorldScale3D(otherMainMesh->GetComponentScale() + FVector(AxisValue));
				break;
			default:
				return;
		}
	}
}

void AMyCharacter::LookUp(float AxisValue)
{
	if (!bIsLocked) {
		AddControllerPitchInput(AxisValue);
	} else if (bSolverUse) {
		switch (solverUseMode) {
			case 1:
				otherMainMesh->SetWorldRotation(FRotator(otherMainMesh->GetComponentRotation().Pitch - AxisValue, otherMainMesh->GetComponentRotation().Yaw, otherMainMesh->GetComponentRotation().Roll));
				break;
			case 2:
				if (*otherMainMesh->GetComponentScale().XYZ < minScale) {
					otherMainMesh->SetWorldScale3D(FVector(minScale));
					return;
				}
				else if (*otherMainMesh->GetComponentScale().XYZ > maxScale) {
					otherMainMesh->SetWorldScale3D(FVector(maxScale));
					return;
				}
				otherMainMesh->SetWorldScale3D(otherMainMesh->GetComponentScale() - FVector(AxisValue));
				break;
			default:
				return;
		}
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

void AMyCharacter::GetOtherActor(UMaterialInterface* outline)
{
	FHitResult hit;
	FVector startPos = springArmComp->GetComponentLocation();
	FVector endPos = cameraComp->GetForwardVector() * range + startPos;
	bool bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), startPos, endPos, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), false, TArray<AActor*>(), EDrawDebugTrace::Persistent, hit, true);
	if (bHit) {
		if (hit.GetComponent()->GetFName() == "StaticMeshComponent0") return;
		if (otherActor) {
			if (otherMainMesh) otherMainMesh->SetOverlayMaterial(nullptr);
			otherActor = nullptr;
		}
		otherActor = hit.GetActor();
		MeshCheck();
		if (otherMainMesh) otherMainMesh->SetOverlayMaterial(outline);
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
		if (otherSolverMesh) otherSolverMesh->DestroyComponent();
		otherSolverMesh = nullptr;
		if (otherMainMesh) {
			otherMainMesh->SetOverlayMaterial(nullptr);
			if (!otherMainMesh->IsSimulatingPhysics()) otherMainMesh->SetSimulatePhysics(true);
		}
		otherMainMesh = nullptr;
		otherActor = nullptr;
		bSolverUse = false;
	}
}

void AMyCharacter::SwitchSolverMode(float mouseAxisValue)
{
	if (!bSolverActivated) return;
	int solverModeValue = static_cast<int>(solverMode);
	solverModeValue += static_cast<int>(mouseAxisValue);
	if (solverModeValue > 3) solverModeValue = 0;
	if (solverModeValue < 0) solverModeValue = 3;
	solverMeshComp->SetStaticMesh(solverMeshes[solverModeValue]);
	solverMode = static_cast<ESolverMode>(solverModeValue);
}

void AMyCharacter::MeshCheck()
{
	if (!otherActor || Cast<APawn>(otherActor)) return;
	TArray<UStaticMeshComponent*> otherActorMeshs;
	otherActor->GetComponents(otherActorMeshs);

	for (UStaticMeshComponent* mesh : otherActorMeshs) {
		if (mesh->GetFName() == FName("SolverMesh")) {
			otherSolverMesh = mesh;
		}
		else if (mesh->GetFName() == FName("StaticMesh")) {
			otherMainMesh = mesh;
		}
	}
}

void AMyCharacter::SolverUseMesh(UMaterialInterface* outline)
{
	if (!bSolverActivated || !otherActor || Cast<APawn>(otherActor) || !otherMainMesh) return;
	MeshCheck();

	if (!otherSolverMesh) {
		otherSolverMesh = NewObject<UStaticMeshComponent>(otherActor, "SolverMesh");
		otherSolverMesh->SetMobility(EComponentMobility::Movable);
		otherSolverMesh->SetStaticMesh(solverMeshes[static_cast<int>(solverMode)]);
		otherSolverMesh->SetupAttachment(otherMainMesh);
		otherSolverMesh->SetWorldScale3D(otherMainMesh->GetComponentScale() + FVector(2.0));
		otherSolverMesh->RegisterComponent(); 
		bSolverUse = true;
		solverUseMode = solverMode;
	}
	else if (otherSolverMesh->GetStaticMesh() != solverMeshes[static_cast<int>(solverMode)]) {
		otherSolverMesh->SetStaticMesh(solverMeshes[static_cast<int>(solverMode)]);
		if (otherMainMesh->GetOverlayMaterial() != outline) otherMainMesh->SetOverlayMaterial(outline);
		solverUseMode = solverMode;
	}
	else {
		otherSolverMesh->DestroyComponent();
		otherSolverMesh = nullptr;
		otherMainMesh->SetOverlayMaterial(nullptr);
		if (!otherMainMesh->IsSimulatingPhysics()) otherMainMesh->SetSimulatePhysics(true);
		otherMainMesh = nullptr;
		otherActor = nullptr;
		bSolverUse = false;
		solverUseMode = ESolverMode::None;
	}
}

void AMyCharacter::SolverUse()
{
	if (!bSolverActivated || !otherActor) return;
	if (bSolverUse) {
		FVector transformVector = cameraComp->GetForwardVector() * 300 + GetMesh()->GetComponentLocation();
		switch (solverUseMode) {
			case 0:
				if (otherMainMesh->IsSimulatingPhysics()) otherMainMesh->SetSimulatePhysics(false);
				otherMainMesh->SetWorldLocation(transformVector);
				break;
			case 1:
			case 2:
				if (otherMainMesh->IsSimulatingPhysics()) otherMainMesh->SetSimulatePhysics(false);
				// Logic is handled in LookAround and LookUp functions
				break;
			case 3:
				if (!otherMainMesh->IsSimulatingPhysics()) otherMainMesh->SetSimulatePhysics(true);

				break;
			default:
				return;
		}
	}
}

void AMyCharacter::SolverEdit(FKey key)
{
	if (!bSolverUse || solverUseMode != ESolverMode::Edit || !otherActor) return;
	if (key.GetFName() == "T") {
		FTransform otherActorTransform = otherMainMesh->GetComponentTransform();
		FActorSpawnParameters params;
		params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		GetWorld()->SpawnActor(otherActor->GetClass(), &otherActorTransform, params);
	}
}

