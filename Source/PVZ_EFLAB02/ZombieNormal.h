// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StateInterface.h"
#include "ZombieNormal.generated.h"

UCLASS()
class PVZ_EFLAB02_API AZombieNormal : public AActor, public IStateInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombieNormal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class AZombie* Zombie;
	virtual void Movimiento() override;
	virtual FString GetEstadoA_ToString() override;
	virtual void DefinirZombie_Estados(class AZombie* _Zombie) override;
};
