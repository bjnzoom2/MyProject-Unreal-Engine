// Fill out your copyright notice in the Description page of Project Settings.


#include "N_MurderDrone.h"

// Sets default values
AN_MurderDrone::AN_MurderDrone()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AN_MurderDrone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AN_MurderDrone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AN_MurderDrone::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

