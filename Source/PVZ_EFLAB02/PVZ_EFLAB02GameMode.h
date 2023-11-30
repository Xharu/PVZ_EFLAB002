// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_EFLAB02GameMode.generated.h"

class AZombie;
class AZombieVolador;
class ALechugaIceberg;
UCLASS(MinimalAPI)
class APVZ_EFLAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_EFLAB02GameMode();
private:
	class ACorrienteAerea* CorrienteAerea;

public:
	TArray<AZombie*> vectorZombies;
	TArray<ALechugaIceberg*> vectorLechugaIceberg;
	FVector Ubicacion;
	
	FTimerHandle TemporizadorHandle;
	FTimerHandle TemporizadorHandle2;
	FTimerHandle TemporizadorHandle3;

	FTimerHandle TemporizadorCorienteAerea;
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	float TiempoTranscurrido;

	void Volando();
};



