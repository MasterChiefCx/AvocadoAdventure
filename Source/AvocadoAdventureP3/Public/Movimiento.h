// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Movimiento.generated.h"

UCLASS()
class AVOCADOADVENTUREP3_API AMovimiento : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovimiento();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
UPROPERTY(EditAnywhere, Category="Pos");
	FVector MyVector= FVector(0,0,0);
	UPROPERTY(EditAnywhere);
	FVector Velocity= FVector(0,100,0);
	UPROPERTY(EditAnywhere);
		float timer=0;
	float dir=1;
	FVector StartPos;
};
