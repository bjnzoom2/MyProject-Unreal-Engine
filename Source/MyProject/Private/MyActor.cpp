// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Kismet/KismetSystemLibrary.h"

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
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AMyActor::getHealth()
{
	return health;
}

void AMyActor::setHealth(float _health)
{
	if (_health > maxHealth) {
		_health = maxHealth;
	}
	else if (_health < 0) {
		_health = 0;
	}

	health = _health;
}

void AMyActor::printStr(UPARAM(ref)FTestStruct& testStruct, UObject* context)
{
	UKismetSystemLibrary::PrintString(context, testStruct.string);
}

