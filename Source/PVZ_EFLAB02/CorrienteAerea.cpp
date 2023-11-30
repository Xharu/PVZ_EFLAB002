// Fill out your copyright notice in the Description page of Project Settings.


#include "CorrienteAerea.h"

void ACorrienteAerea::EstadoCambiado()
{
	NotificarSuscriptores();
}

void ACorrienteAerea::DefinirEstado(FString myEstado)
{
	Estado = myEstado;
	EstadoCambiado();
}
