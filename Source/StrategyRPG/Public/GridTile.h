#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GridTile.generated.h"

UCLASS()
class STRATEGYRPG_API AGridTile : public AActor
{
    GENERATED_BODY()

public:
    // Constructor
    AGridTile();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    // Grid Position
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridX;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridY;

    // Whether the tile is occupied by a unit
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    bool bIsOccupied;

    // Set Tile Type (e.g., Grass, Water, Mountain)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    FString TileType;

    // Initializes the tile's position and type
    void InitializeTile(int32 X, int32 Y, FString Type);
};

