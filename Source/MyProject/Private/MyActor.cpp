// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, "Instantiated");
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::CollisionAction(AActor* otherActor)
{
	if (!Cast<APawn>(otherActor)) { return; }
	TArray<UActorComponent*> components;
	this->GetComponents(components);

	for (UActorComponent* component : components) {
		UStaticMeshComponent* staticMeshComponent = Cast<UStaticMeshComponent>(component);
		if (staticMeshComponent) {
			FVector componentLocation = staticMeshComponent->GetComponentLocation();
			FVector spawnLocation = componentLocation + FVector(0.0, 0.0, 1000.0);
			FActorSpawnParameters params;
			params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

			GetWorld()->SpawnActor<AMyActor>(BPActor, spawnLocation, FRotator::ZeroRotator, params);
		}
	}
}
