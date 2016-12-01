// Fill out your copyright notice in the Description page of Project Settings.

#include "ROWINGSIMULATOR.h"
#include "Cat.h"


// Sets default values
ACat::ACat()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//all cats start active
	bIsActive = true;

	//Create the static mesh component
	CatMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CatMesh"));
	RootComponent = CatMesh;
}

// Called when the game starts or when spawned
void ACat::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame---Moves the cat along the river
void ACat::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	FVector NewLocation = GetActorLocation();//gets the actors location
	float DeltaHeight = -0.5;	//(FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.X += DeltaHeight * 50.0f;       
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
	
}
//returns active state
bool ACat::IsActive()
{
	return bIsActive;
}
//changes active state
void ACat::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}
void ACat::MoveActor(float DeltaTime)
{


	
}
void ACat::WasCollected_Implementation()
{
	//Log a debug message
	FString CatDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *CatDebugString);
}