// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieNormal.h"
#include "Zombie.h"

// Sets default values
AZombieNormal::AZombieNormal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombieNormal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombieNormal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AZombieNormal::Movimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Movimiento Normal"));
	Zombie->SetVelocidad(0.09f);
	Zombie->EstadoZ(Zombie->GetZombieRealentizado());
}
FString AZombieNormal::GetEstadoA_ToString()
{
	return "ZombieNormal";
}
void AZombieNormal::DefinirZombie_Estados(AZombie* _Zombie)
{
	Zombie = _Zombie;
}