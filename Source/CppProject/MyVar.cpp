#include "MyVar.h"

// Sets default values
AMyVar::AMyVar()
{
    // Set this actor to call Tick() every frame.
    PrimaryActorTick.bCanEverTick = true;

    // Variable assignment
    ExampleValue = 100;
}

// Called when the game starts or when spawned
void AMyVar::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AMyVar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}