// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieVolador.h"
#include "CorrienteAerea.h"
#include "Levitar.h"
#include "Publicador.h"

void AZombieVolador::Destroyed()
{
	Super::Destroyed();
	//Mensaje de error si el zombie no existe
	if (!CorrienteAerea) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): El zombie no existe, asegurate que sea inicializado."));
		return;
	}
	//Desuscribirse del publicador si el zombie es destruido
	CorrienteAerea->DeSuscribirse(this);
}

void AZombieVolador::Actualizar(APublicador* Publicador)
{
	Levitar();
}

void AZombieVolador::Levitar()
{
		//Log Error if its Clock Tower is NULL
	if (!CorrienteAerea) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed(): La CorrienteAerea no existe asegurate que sea inicializada")); 
	return; }
		//Get the current time of the Clock Tower
		FString Estado = CorrienteAerea->GetEstado();

		if (!Estado.Compare("En Tierra"))
		{
			SpeedZombie = 0.2f;
		}

		else if (!Estado.Compare("Volando"))
		{
				SpeedZombie = 0.0f;

		FVector LocalizacionActual = this->GetActorLocation();
		this->SetActorLocation(FVector(LocalizacionActual.X, LocalizacionActual.Y, LocalizacionActual.Z + 500));
		}
}

void AZombieVolador::DefinirZombie(ACorrienteAerea* myCorrienteAerea)
{
	if (!myCorrienteAerea) {
		UE_LOG(LogTemp, Error, TEXT("DefinirZombie(): myCorrienteAerea es nulo, asegurate que fue inicializado."));
		return;
	}
	//Set the Clock Tower and Subscribe to that
	CorrienteAerea = myCorrienteAerea;
	CorrienteAerea->Suscribirse(this);
}


