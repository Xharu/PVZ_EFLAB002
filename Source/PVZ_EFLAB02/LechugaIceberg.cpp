// Fill out your copyright notice in the Description page of Project Settings.


#include "LechugaIceberg.h"

// Sets default values
ALechugaIceberg::ALechugaIceberg()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LechugaIcebergMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LechugaIceberg Mesh"));
	LechugaIcebergMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	LechugaIcebergMesh->SetSimulatePhysics(false);
	LechugaIcebergMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = LechugaIcebergMesh;
	// Load the static mesh asset
	static ConstructorHelpers::FObjectFinder<UStaticMesh> LechugaIcebergMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (LechugaIcebergMeshAsset.Succeeded())
	{
		LechugaIcebergMesh->SetStaticMesh(LechugaIcebergMeshAsset.Object);
	}
}

// Called when the game starts or when spawned
void ALechugaIceberg::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALechugaIceberg::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

