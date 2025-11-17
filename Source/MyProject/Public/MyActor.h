// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UENUM(BlueprintType)
enum TestEnum {
	apple UMETA(DisplayName = "Apple_1"),
	banana UMETA(DisplayName = "Apple_1"),
	pear UMETA(DisplayName="Pear_1")
};

USTRUCT(BlueprintType)
struct FTestStruct {
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int value = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float value2 = 9.8;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FString string = "String";
};

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	float health = 100;
	const float maxHealth = 100;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintPure)
	float getHealth();

	UFUNCTION(BlueprintCallable)
	void setHealth(float _health);

	UFUNCTION(BlueprintCallable)
	static void printStr(UPARAM(ref)FTestStruct& testStruct, UObject* context);
};
