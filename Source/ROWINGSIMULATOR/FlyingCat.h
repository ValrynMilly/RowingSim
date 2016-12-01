// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Cat.h"
#include "FlyingCat.generated.h"

/**
 * 
 */
UCLASS()
class ROWINGSIMULATOR_API AFlyingCat : public ACat
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	AFlyingCat();
	int32 GetSpeed();
	float GetDirection();

	
};
