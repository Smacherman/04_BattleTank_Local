// Copyright Experience 360 LLC 2020

#pragma once
#include "Tank.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

// class ATank;

/**
 *
 */
UCLASS(meta=(BlueprintSpawnableComponent), hidecategories = ("Collision"))
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
    GENERATED_BODY()
    
public:
    // -1 is max downward movement, and +1 is max up movement
    void Elevate(float RelativeSpeed);


private:
    UPROPERTY(EditDefaultsOnly, Category = "Setup")
    float MaxDegreesPerSecond = 10;
    
    UPROPERTY(EditDefaultsOnly, Category = "Setup")
    float MaxElevationDegrees = 40;
    
    UPROPERTY(EditDefaultsOnly, Category = "Setup")
    float MinElevationDegrees = 0;

    
};
