// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerBomb.h"
#include "Components/SphereComponent.h"
#include "Components/MeshComponent.h"

// Sets default values
APlayerBomb::APlayerBomb()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerBomb::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APlayerBomb::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	//경과된 시간을 누적
	currentTime += DeltaTime;

	if (currentTime > explosionTime)
	{
		Destroy();

		//누적된 시간을 다시 0으로 초기화
		currentTime = 0;
	}
}

