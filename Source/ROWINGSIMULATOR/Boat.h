// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Boat.generated.h"

UCLASS()
class ROWINGSIMULATOR_API ABoat : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABoat();
	// Return the mesh for the worm
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return BoatMesh; }
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;
	float RunningTime;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Boat", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BoatMesh;
};
