// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publicador.h"
#include "CorrienteAerea.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_EFLAB02_API ACorrienteAerea : public APublicador
{
	GENERATED_BODY()
	
private:
	//The current time of this Clock Tower
	FString Estado;

public:
	//Called when the time of this Clock Tower has changed
	void EstadoCambiado();
	//Set the time of this Clock Tower
	void DefinirEstado(FString myEstado);
	//Return the time of this Clock Tower
	FORCEINLINE FString GetEstado() { return Estado; };
};
