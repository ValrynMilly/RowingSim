// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Cat.h"
#include "PowerUpCat.generated.h"

/**
 * 
 */
UCLASS()
class ROWINGSIMULATOR_API APowerUpCat : public ACat
{
	GENERATED_BODY()
		

public:
	APowerUpCat();
	void WasCollected_Implementation() override;


};
