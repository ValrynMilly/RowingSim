// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Cat.generated.h"

UCLASS()
class ROWINGSIMULATOR_API ACat : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACat();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	float RunningTime;
	// Return the mesh for the cat
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return CatMesh; }

	//return whether or not the cat is active
	UFUNCTION(BlueprintPure,Category="Cat")
	bool IsActive();

	//allows other classes to safely change wheter or not the cat is active
	UFUNCTION(BlueprintCallable,Category = "Cat")
	void SetActive(bool NewPickState);

	void MoveActor(float DeltaTime);
	
	//function to call whent eh pickup is collected
	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();
	virtual void WasCollected_Implementation();

protected:

	//True when the cat is in use and when it cant be used
	bool bIsActive;


private:
	//The static mesh to represent the pickup in the level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "Cat", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* CatMesh;
	
	
};
