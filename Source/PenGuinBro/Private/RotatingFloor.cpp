// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingFloor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerPenGuin.h"

// Sets default values
ARotatingFloor::ARotatingFloor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	boxCompR = CreateDefaultSubobject<UBoxComponent>(TEXT("RotFloor Box Collision"));
	SetRootComponent(boxCompR);
	boxCompR->SetBoxExtent(FVector(62.5f, 75.0f, 12.5f));
	boxCompR->SetCollisionProfileName(TEXT("RotFloorSetting"));

	meshCompR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotFloor Mesh"));
	meshCompR->SetupAttachment(boxCompR);
}

// Called when the game starts or when spawned
void ARotatingFloor::BeginPlay()
{
	Super::BeginPlay();
	
	boxCompR->OnComponentBeginOverlap.AddDynamic(this, &ARotatingFloor::OnOverlap);
}

// Called every frame
void ARotatingFloor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARotatingFloor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//만일 부딪힌 대상이 플레이어펭귄의 정수리 박스라면
		//아더액터를 정수리 박스에 캐스팅 성공한다면 -> 포인터 변수가 널포인터를 가리키지 않는다면
	APlayerPenguin* player = Cast<APlayerPenguin>(OtherActor);
	if (player != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlap"));

	}
}


