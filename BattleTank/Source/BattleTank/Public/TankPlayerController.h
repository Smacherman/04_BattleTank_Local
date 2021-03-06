// Copyright Experience 360 LLC 2020

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

// class ATank;
class UTankTankAimingComponent;

/**
 *  Responsible for helping the player aim.
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
    
protected:
    UFUNCTION(BlueprintCallable, Category = "Setup")
    ATank* GetControlledTank() const;
    
    UFUNCTION(BlueprintImplementableEvent, Category = "Setup")
    void FoundAimingComponent(UTankAimingComponent* AimComRef);
    
private:
    virtual void BeginPlay() override;

    virtual void Tick( float DeltaTime ) override;
    
    // start tank moving the barrel so that a shot would hit where the crosshair intercets
    void AimTowardsCrosshair();
    
    // Return an OUT parameter, true if hit landscape
    bool GetSightRayHitLocation(FVector& HitLocation) const;
    
    UPROPERTY(EditDefaultsOnly)
    float CrosshairXLocation = 0.5;

    UPROPERTY(EditDefaultsOnly)
    float CrosshairYLocation = 0.3333;
    
    UPROPERTY(EditDefaultsOnly)
    float LineTraceRange = 1000000.0;

    bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
    
    bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;


};
