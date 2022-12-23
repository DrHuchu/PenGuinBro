// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	class USphereComponent* sphereComp;

	UPROPERTY(Editanywhere, BlueprintReadWrite, Category = BombSettings)
	class UStaticMeshComponent* meshComp;

private:
	FVector direction;

};
