// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Zombie.h"
#include "Suscriptor.h" 
#include "Levitar.h"
#include "CorrienteAerea.h"
#include "ZombieVolador.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_EFLAB02_API AZombieVolador : public AZombie, public ISuscriptor, public ILevitar
{
	GENERATED_BODY()
private:
	//El zombie de este suscriptor
	UPROPERTY()
	ACorrienteAerea* CorrienteAerea;

public:
	//Llamado cuando el suscriptor es destruido
	virtual void Destroyed() override;
	//Llamado cuando el publicador cambia su estado para ejecutar su rutina
	virtual void Actualizar(class APublicador* Publicador) override;
	//Ejecuta la rutina de este suscriptor
	virtual void Levitar();
	//Define el zombie de este suscriptor
	void DefinirZombie(ACorrienteAerea* myCorrienteAerea);
};
