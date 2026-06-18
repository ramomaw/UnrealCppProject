// Fill out your copyright notice in the Description page of Project Settings.


#include "HelloWorld.h"

// Sets default values
void AHelloWorld::BeginPlay()
{
	Super::BeginPlay();

	// Prints Hello World to the Unreal Output Log in yellow text
	UE_LOG(LogTemp, Warning, TEXT("Hello, Unreal GitHub World!"));
}

// Called when the game starts or when spawned
void AHelloWorld::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHelloWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

