#include "GridTile.h"

// Constructor
AGridTile::AGridTile()
{
    PrimaryActorTick.bCanEverTick = false;

    // Create a default Static Mesh for visualization (optional)
    UStaticMeshComponent* MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
    RootComponent = MeshComponent;
}

// Called when the game starts or when spawned
void AGridTile::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame (currently unused)
void AGridTile::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

// Initializes the tile with a position and type
void AGridTile::InitializeTile(int32 X, int32 Y, FString Type)
{
    GridX = X;
    GridY = Y;
    TileType = Type;
    bIsOccupied = false;

    // Move tile to the correct world position
    SetActorLocation(FVector(GridX * 100.0f, GridY * 100.0f, 0.0f));
}
