// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class ROWINGSIMULATOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	//Returns the where to spawn subobject
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn;  }

	//find a random point within the box component
	UFUNCTION(BlueprintPure, Category ="Spawning")
	FVector GetRandomPointsInVolume();
protected:
	//The Cat to spawn
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class ACat> WhatToSpawn;


	FTimerHandle SpawnTimer;

	//minimum spawn delay
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Spawning")
	float SpawnDelayRangeLow;
	//maximum Spawn delay
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeHigh;

private:
	//Box component to specify where cats should eb spawned
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Spawning", meta=(AllowPrivateAccess = "true"))
	class UBoxComponent* WhereToSpawn;
	
	//this is going to handle spannign a new cat
	void SpawnCat();

	//The current spawn delay
	float SpawnDelay;

};
