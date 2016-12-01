// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Bruce.generated.h"

UCLASS()
class ROWINGSIMULATOR_API ABruce : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABruce();
	// Return the mesh for the worm
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return BruceMesh; }
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;
	float RunningTime;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bruce", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* BruceMesh;
};
