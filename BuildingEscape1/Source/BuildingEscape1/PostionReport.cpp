// Fill out your copyright notice in the Description page of Project Settings.


#include "PostionReport.h"


// Sets default values for this component's properties
UPostionReport::UPostionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	FString ObjectName = GetOwner()->GetName();
	UE_LOG(LogTemp, Warning, TEXT("Position report reporting on %s"), *ObjectName);
}

// Called when the game starts
void UPostionReport::BeginPlay()
{
	Super::BeginPlay();


	
}


// Called every frame
void UPostionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

