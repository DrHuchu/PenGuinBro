// Fill out your copyright notice in the Description page of Project Settings.


#include "BombRange.h"
#include "Components/SphereComponent.h"

// Sets default values
ABombRange::ABombRange()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABombRange::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABombRange::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	



}

