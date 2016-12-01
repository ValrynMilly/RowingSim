// Fill out your copyright notice in the Description page of Project Settings.

#include "ROWINGSIMULATOR.h"
#include "FlyingCat.h"

//Set defualt value
AFlyingCat::AFlyingCat()
{
	
	//HERE IS WHERE YOU CAN TELL THE MESH TO DO STUFF LIKE ROTATION AND MOVEMENT
	//GetMesh()->SetSimulatePhysics(false);
	
}
int AFlyingCat::GetSpeed()
{
	int32 speed = 2;
	return speed;
}
float AFlyingCat::GetDirection()
{
	float direction = 1;
	return direction;
}

