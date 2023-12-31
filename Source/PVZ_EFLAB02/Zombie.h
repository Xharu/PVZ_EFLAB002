// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StateInterface.h"
#include "Zombie.generated.h"
//class IStateInterface;

UCLASS()
class PVZ_EFLAB02_API AZombie : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombie();
	UStaticMeshComponent* ZombieMesh;
	FVector Ubicacion;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float SpeedZombie;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	IStateInterface* ZombieCongelado;
	IStateInterface* ZombieNormal;
	IStateInterface* ZombieRealentizado;

	IStateInterface* EstadoA;
	int Contador;
public:
	void Iniciar(int NivelDeFrio);
	IStateInterface* GetEstadoA();
	IStateInterface* GetZombieCongelado();
	IStateInterface* GetZombieNormal();
	IStateInterface* GetZombieRealentizado();
	FString GetEstadoA_ToString();
	void EstadoZ(IStateInterface* Estado);
	void VerificarSpeed();
	void SetVelocidad(float Movimiento);
	void Movimiento();
	int GetContador();
};
