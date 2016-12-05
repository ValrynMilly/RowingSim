// Fill out your copyright notice in the Description page of Project Settings.

#include "ROWINGSIMULATOR.h"
#include "PickupMaster.h"


// Sets default values
APickupMaster::APickupMaster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PickupRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PickupRoot"));
	RootComponent = PickupRoot;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Coffee"));
	PickupMesh->AttachToComponent(PickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	PickupBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PickupBox")); //birthing and naming the effect box
	PickupBox->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f)); //scale of effect box
	PickupBox->bGenerateOverlapEvents = true;
	PickupBox->OnComponentBeginOverlap.AddDynamic(this, &APickupMaster::OnPlayerEnterPickupBox);
	PickupBox->AttachToComponent(PickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

}

// Called when the game starts or when spawned
void APickupMaster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickupMaster::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}
//The definition for the pickup
//This below is where all the action happens when you pick up the item
void APickupMaster::OnPlayerEnterPickupBox(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	Destroy(); //for demo purposes I am just going to destroy the pick up itself
}

