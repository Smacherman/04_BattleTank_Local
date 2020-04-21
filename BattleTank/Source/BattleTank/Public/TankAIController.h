// Copyright Experience 360 LLC 2020

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

// class ATank;

/**
 *
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
    GENERATED_BODY()
    
    virtual void BeginPlay() override;
    
    virtual void Tick(float DeltaSeconds) override;
    
    // How close can the AI tank get
    float AcceptanceRadius = 3000;

};

