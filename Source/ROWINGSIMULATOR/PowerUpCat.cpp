// Fill out your copyright notice in the Description page of Project Settings.

#include "ROWINGSIMULATOR.h"
#include "PowerUpCat.h"

APowerUpCat::APowerUpCat()
{

}
//will be used to destroy pickups when collected.
void APowerUpCat::WasCollected_Implementation()
{
	// use the base pickup behavior
	Super::WasCollected_Implementation();
	//destroy the batter
	Destroy();
}


