// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include "Components/StaticMeshComponent.h"
#include "ZombieCongelado.h"
#include "ZombieNormal.h"
#include "ZombieRealentizado.h"

// Sets default values
AZombie::AZombie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    ZombieMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zombie Mesh"));
    ZombieMesh->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
    ZombieMesh->SetSimulatePhysics(false);
    ZombieMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    // Cargar la malla para el zombie
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
    if (ZombieMeshAsset.Succeeded())
    {
        ZombieMesh->SetStaticMesh(ZombieMeshAsset.Object);
    }
    RootComponent = ZombieMesh;
}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*SpeedZombie=0.08f;*/
	// Supongamos que ya tienes una instancia de APlantaActor llamada MyPlantaActor

	FVector TargetLocation = FVector(-800.0f, -600.0f, 160.0f);
	// Cambia la ubicación objetivo según tus necesidades

	// Calcula la dirección y distancia al objetivo
	FVector Direction = TargetLocation - FVector(-800.0f, 400.0f, 160.0f);
	float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-800.0f, 400.0f, 160.0f));

	// Calcula el desplazamiento en este frame
	float DeltaMove = SpeedZombie * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanceToTarget)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(TargetLocation);
	}
	else
	{
		// Mueve el objeto en la dirección calculada
		this->AddActorWorldOffset(Direction * DeltaMove);
	}
}
void AZombie::Iniciar(int NivelDeFrio)
{
	ZombieCongelado = GetWorld()->SpawnActor<AZombieCongelado>(AZombieCongelado::StaticClass());
	ZombieCongelado->DefinirZombie_Estados(this);
	ZombieNormal = GetWorld()->SpawnActor<AZombieNormal>(AZombieNormal::StaticClass());
	ZombieNormal->DefinirZombie_Estados(this);
	ZombieRealentizado = GetWorld()->SpawnActor<AZombieRealentizado>(AZombieRealentizado::StaticClass());
	ZombieRealentizado->DefinirZombie_Estados(this);

	Contador = NivelDeFrio;

	if (NivelDeFrio == 3) {
		EstadoA = ZombieNormal;
	}
	if (NivelDeFrio == 2) {
		EstadoA = ZombieRealentizado;
	}
	if (NivelDeFrio == 1) {
		EstadoA = ZombieCongelado;
	}
}

IStateInterface* AZombie::GetEstadoA()
{
	return EstadoA;
}
IStateInterface* AZombie::GetZombieCongelado()
{
	return ZombieCongelado;
}
IStateInterface* AZombie::GetZombieNormal()
{
	return ZombieNormal;
}
IStateInterface* AZombie::GetZombieRealentizado()
{
	return ZombieRealentizado;
}
FString AZombie::GetEstadoA_ToString()
{
	return "ZombieNormal" + EstadoA->GetEstadoA_ToString();
}
void AZombie::EstadoZ(IStateInterface* Estado)
{
	EstadoA = Estado;
}
void AZombie::VerificarSpeed()
{
	/*if (SpeedZombie == 0.08f)
	{
		EstadoZ(ZombieNormal);
		EstadoA->ZombieNormalS();
	}
	else if (SpeedZombie == 0.04f)
	{
		EstadoZ(ZombieCongelado);
		EstadoA->ZombieCongeladoS();
	}
	else if (SpeedZombie == 0.02f)
	{
		SpeedZombie = 0.02f;
	}*/
}

void AZombie::SetVelocidad(float Movimiento)
{
	SpeedZombie=Movimiento;
}

void AZombie::Movimiento()
{
	EstadoA->Movimiento();
}

int AZombie::GetContador()
{
	return Contador;
}
