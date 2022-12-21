// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPenGuin.h"

// Sets default values
APlayerPenGuin::APlayerPenGuin()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPenGuin::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPenGuin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPenGuin::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

