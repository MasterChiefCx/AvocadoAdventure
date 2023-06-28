// Fill out your copyright notice in the Description page of Project Settings.


#include "Movimiento.h"

// Sets default values
AMovimiento::AMovimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovimiento::BeginPlay()
{
	Super::BeginPlay();
	StartPos= GetActorLocation();
	MyVector=StartPos;
	
}

// Called every frame
void AMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
if(timer>=5)
	{
		timer=0;
		Velocity.Y*=-1;
	}
	timer+=DeltaTime;
	MyVector+=Velocity*DeltaTime;
	SetActorLocation(MyVector);
}

