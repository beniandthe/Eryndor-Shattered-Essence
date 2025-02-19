#include "AGridManager.h"
#include "GridTile.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"


AGridManager::AGridManager()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AGridManager::BeginPlay()
{
    Super::BeginPlay();
    GenerateGrid();
}

void AGridManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AGridManager::GenerateGrid()
{
    if (!GridTileClass) return;

    UWorld* World = GetWorld();
    if (!World) return;

    // Clear existing tiles (optional, if needed)
    TArray<AActor*> ExistingTiles;
    UGameplayStatics::GetAllActorsOfClass(World, AGridTile::StaticClass(), ExistingTiles);
    for (AActor* Tile : ExistingTiles)
    {
        Tile->Destroy();
    }

    // Spawn the grid tiles
    for (int32 X = 0; X < GridWidth; X++)
    {
        for (int32 Y = 0; Y < GridHeight; Y++)
        {
            FVector SpawnLocation = FVector(X * TileSize, Y * TileSize, 0.f);
            FRotator SpawnRotation = FRotator::ZeroRotator;

            AGridTile* NewTile = World->SpawnActor<AGridTile>(GridTileClass, SpawnLocation, SpawnRotation);
        }
    }
}

void AGridManager::UpdateGridSize(int32 NewWidth, int32 NewHeight, float NewTileSize)
{
    GridWidth = NewWidth;
    GridHeight = NewHeight;
    TileSize = NewTileSize;

    GenerateGrid();
}

#if WITH_EDITOR
void AGridManager::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    // Get the changed property name
    FName PropertyName = PropertyChangedEvent.GetPropertyName();

    // Check if the changed property is related to grid generation
    if (PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, GridWidth) ||
        PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, GridHeight) ||
        PropertyName == GET_MEMBER_NAME_CHECKED(AGridManager, TileSize))
    {
        GenerateGrid(); // Regenerate the grid when a property changes
    }
}
#endif



