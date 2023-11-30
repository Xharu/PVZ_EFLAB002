// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCongelado.h"
#include "Zombie.h"

// Sets default values
AZombieCongelado::AZombieCongelado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombieCongelado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombieCongelado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AZombieCongelado::Movimiento()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Movimiento Congelado"));
	Zombie->SetVelocidad(0.0f);

}

FString AZombieCongelado::GetEstadoA_ToString()
{
	return "ZombieCongelado";
}
void AZombieCongelado::DefinirZombie_Estados(AZombie* _Zombie)
{
	Zombie = _Zombie;
}