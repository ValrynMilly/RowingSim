// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PickupMaster.generated.h"

UCLASS()
class ROWINGSIMULATOR_API APickupMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickupMaster();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere)
	USceneComponent* PickupRoot;

	// The static mesh for my pickup
	UPROPERTY(EditAnywhere) // Tells the compiller that its editable anywhere
	UStaticMeshComponent* PickupMesh; //The mesh itself
	
	UPROPERTY(EditAnywhere)
	UShapeComponent* PickupBox;

	UFUNCTION() //Adding Paramaters for the pickups like what its hit by and what follows after pick up
	void OnPlayerEnterPickupBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
