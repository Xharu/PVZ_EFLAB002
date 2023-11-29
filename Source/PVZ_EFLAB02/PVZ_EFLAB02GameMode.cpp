// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_EFLAB02GameMode.h"
#include "PVZ_EFLAB02Pawn.h"
#include "Zombie.h"
#include "LechugaIceberg.h"

APVZ_EFLAB02GameMode::APVZ_EFLAB02GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APVZ_EFLAB02Pawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}
void APVZ_EFLAB02GameMode::BeginPlay()
{
	Super::BeginPlay();
	FVector SpawnLocationZombie = FVector(-800.0f, 400.0f, 160.0f);
	for (int i = 0; i < 5; i++) {
		SpawnLocationZombie.X += 150;
		AZombie* NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		NuevoZombie->SpeedZombie;
		vectorZombies.Add(NuevoZombie);
	}

	FVector SpawnLocationLechugaIceberg = FVector(-800.0f, -400.0f, 160.0f);

	for (int i = 0; i < 2; i++) {
		SpawnLocationLechugaIceberg.X += 300;
		ALechugaIceberg* NuevoLechugaIceberg = GetWorld()->SpawnActor<ALechugaIceberg>(ALechugaIceberg::StaticClass(), SpawnLocationLechugaIceberg, FRotator::ZeroRotator);
		vectorLechugaIceberg.Add(NuevoLechugaIceberg);
	}
	
}
void APVZ_EFLAB02GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}