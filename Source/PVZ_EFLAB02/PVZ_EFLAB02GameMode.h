// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PVZ_EFLAB02GameMode.generated.h"

class AZombie;
class ALechugaIceberg;
UCLASS(MinimalAPI)
class APVZ_EFLAB02GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APVZ_EFLAB02GameMode();
	TArray<AZombie*> vectorZombies;
	TArray<ALechugaIceberg*> vectorLechugaIceberg;
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	float TiempoTranscurrido;
};



