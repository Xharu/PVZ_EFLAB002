// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_EFLAB02GameMode.h"
#include "PVZ_EFLAB02Pawn.h"
#include "Zombie.h"
#include "ZombieNormal.h"
#include "ZombieCongelado.h"
#include "ZombieRealentizado.h"
#include "StateInterface.h"
#include "LechugaIceberg.h"
#include "ZombieVolador.h"
#include "CorrienteAerea.h"
#include "Levitar.h"
#include "Publicador.h"
#include "Suscriptor.h"

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
	CorrienteAerea = GetWorld()->SpawnActor<ACorrienteAerea>(ACorrienteAerea::StaticClass());

	AZombieVolador* ZombieVolador = GetWorld()->SpawnActor<AZombieVolador>(AZombieVolador::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);

	ZombieVolador->DefinirZombie(CorrienteAerea);
	GetWorldTimerManager().SetTimer(TemporizadorCorienteAerea, this, &APVZ_EFLAB02GameMode::Volando, 5.0f, false);


	/*AZombie* Zombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);*/
	/*for (int i = 0; i < 5; i++) {
		SpawnLocationZombie.X += 150;
		AZombie* NuevoZombie = GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocationZombie, FRotator::ZeroRotator);
		NuevoZombie->SpeedZombie;
		vectorZombies.Add(NuevoZombie);
	}*/

	/*Zombie->Iniciar(3);*/
	/*Zombie->Movimiento();*/

	/*GetWorldTimerManager().SetTimer(TemporizadorHandle, Zombie, &AZombie::Movimiento, 0.1f, false);
	GetWorldTimerManager().SetTimer(TemporizadorHandle2, Zombie, &AZombie::Movimiento, 2.0f, false);
	GetWorldTimerManager().SetTimer(TemporizadorHandle3, Zombie, &AZombie::Movimiento, 5.0f, false);*/
}
void APVZ_EFLAB02GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void APVZ_EFLAB02GameMode::Volando()
{
		CorrienteAerea->DefinirEstado("Volando");
}
