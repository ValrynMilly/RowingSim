// Fill out your copyright notice in the Description page of Project Settings.

#include "ROWINGSIMULATOR.h"
#include "Boat.h"


// Sets default values
ABoat::ABoat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Create the static mesh component
	BoatMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoatMesh"));
	RootComponent = BoatMesh;
}

// Called when the game starts or when spawned
void ABoat::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABoat::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();//gets the actors location
	float DeltaHeight = +0.5;
	NewLocation.X += DeltaHeight * 10.0f;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}
