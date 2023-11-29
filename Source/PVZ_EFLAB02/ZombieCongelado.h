// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StateInterface.h"
#include "ZombieCongelado.generated.h"

UCLASS()
class PVZ_EFLAB02_API AZombieCongelado : public AActor, public IStateInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombieCongelado();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Tick(float DeltaTime) override;
	class AZombie* Zombie;
	virtual void ZombieNormalS() override;
	virtual void ZombieCongeladoS() override;
	virtual void ZombieRealentizadoS() override;
	virtual FString ToString() override;
	virtual void DefinirZombie_Estados(class AZombie* _Zombie) override;
};
