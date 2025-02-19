#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AGridManager.generated.h"

class AGridTile;

UCLASS()
class STRATEGYRPG_API AGridManager : public AActor
{
    GENERATED_BODY()

public:
    AGridManager();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;

    #if WITH_EDITOR
        virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    #endif


    /** Grid settings */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridWidth = 5; // Number of tiles in width

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 GridHeight = 5; // Number of tiles in height

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float TileSize = 100.f; // Distance between tiles

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    TSubclassOf<AGridTile> GridTileClass; // The tile to spawn

    /** Generates the grid based on current settings */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void GenerateGrid();

    /** Updates the grid size dynamically */
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void UpdateGridSize(int32 NewWidth, int32 NewHeight, float NewTileSize);
};


