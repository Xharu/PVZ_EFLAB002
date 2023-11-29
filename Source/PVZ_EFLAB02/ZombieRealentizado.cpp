// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieRealentizado.h"
#include "Zombie.h"

// Sets default values
AZombieRealentizado::AZombieRealentizado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZombieRealentizado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombieRealentizado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AZombieRealentizado::ZombieNormalS()
{
}
void AZombieRealentizado::ZombieCongeladoS()
{
}
void AZombieRealentizado::ZombieRealentizadoS()
{
	SpeedZombie = 0.04f;
}
FString AZombieRealentizado::ToString()
{
	return "ZombieNormal";
}
void AZombieRealentizado::DefinirZombie_Estados(AZombie* _Zombie)
{
	Zombie = _Zombie;
}
