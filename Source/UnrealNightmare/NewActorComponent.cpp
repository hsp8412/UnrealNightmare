// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActorComponent.h"


// Sets default values for this component's properties
UNewActorComponent::UNewActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNewActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Function to modify two Blueprint classes
void UNewActorComponent::ModifyBlueprintClasses(UObject* BlueprintClass1, UObject* BlueprintClass2)
{
    // Example modification: cast to UserWidget and set visibility
    UUserWidget* Widget1 = Cast<UUserWidget>(BlueprintClass1);
    UUserWidget* Widget2 = Cast<UUserWidget>(BlueprintClass2);

    if (Widget1 && Widget2)
    {
        Widget1->SetVisibility(ESlateVisibility::Hidden);
        Widget2->SetVisibility(ESlateVisibility::Visible);
    }
}