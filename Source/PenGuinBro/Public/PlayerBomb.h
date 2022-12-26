// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PlayerBomb.generated.h"

UCLASS()
class PENGUINBRO_API APlayerBomb : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerBomb();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = BombSettings)
	class UBoxComponent* boxComp;
	
	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = BombSettings)
	class UBoxComponent* boxComp1;

	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = BombSettings)
	class UStaticMeshComponent* meshComp;

	UPROPERTY(EditInstanceOnly, Category = BombSetting)
	float explosionTime = 1;

	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = BombSettings)
	FVector boxSize;

private:
	FVector direction;

	float currentTime = 0;

	float spawnTime = 1;
};
