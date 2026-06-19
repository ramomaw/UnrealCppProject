#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyVar.generated.h"

UCLASS()
class CPPPROJECT_API AMyVar : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    AMyVar();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Variable declaration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
    int32 ExampleValue;
};