// Fill out your copyright notice in the Description page of Project Settings.

#include "ROWINGSIMULATOR.h"
#include "Bruce.h"


// Sets default values
ABruce::ABruce()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create the static mesh component
	BruceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BruceMesh"));
	RootComponent = BruceMesh;
}

// Called when the game starts or when spawned
void ABruce::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABruce::Tick( float DeltaTime )
{

	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();//gets the actors location
	float DeltaHeight = +0.5;
	NewLocation.X += DeltaHeight * 20.0f;
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

