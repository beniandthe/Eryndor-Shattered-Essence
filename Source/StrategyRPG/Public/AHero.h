#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FactionTypes.h"
#include "HeroTypes.h"
#include "AHero.generated.h"

UCLASS()
class STRATEGYRPG_API AHero : public ACharacter
{
    GENERATED_BODY()

public:
    AHero();

protected:
    virtual void BeginPlay() override;

public:
    /** Primary Attributes */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Strength; // Physical attack power

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Dexterity; // Movement, reflexes, evasion

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Intelligence; // Magic damage, spell power, mana pool

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Endurance; // Health pool, stamina

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Charisma; // Social influence, leadership

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Perception; // Awareness, detection, critical hit chance

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Luck; // Rare item drop rates, critical chance

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
    int32 Faith; // Light/Dark Essence power, divine abilities

    /** Derived Stats */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Health; // Scales with Endurance

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Stamina; // Determines movement range

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Essence; // General magical resource (scales with Intelligence)

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float LightEssence; // Unlocked via moral choices

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float DarkEssence; // Unlocked via moral choices

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Leadership; // Unit command limit, influenced by Charisma

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Diplomacy; // Negotiation success rate

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Tactics; // Combat strategy effectiveness

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Willpower; // Resistance to fear, mind control

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    int32 Stealth; // Determines visibility to enemies

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Initiative; // Determines turn order in combat

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float Evasion; // Chance to avoid attacks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float CriticalChance; // Chance to land a critical hit

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float MagicResistance; // Resistance against magic attacks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float PhysicalResistance; // Resistance against physical attacks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float AttackPower; // Base physical attack damage

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float SpellPower; // Base magical attack power

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
    float CriticalDamage; // Determines critical hit multiplier

    /** Utility Functions */
    UFUNCTION(BlueprintCallable, Category = "Stats")
    void CalculateDerivedStats();

    UFUNCTION(BlueprintCallable, Category = "Stats")
    void ModifyAttribute(FString AttributeName, int32 Value);

    /** Hero's Faction */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Faction")
    EFaction Faction;

    /** Hero's Race */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    ERace Race;

    /** Hero's Class */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Class")
    EHeroClass HeroClass;

    /** Morality System */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Morality")
    float LightEssenceThreshold; // Determines Light skill unlocks

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Morality")
    float DarkEssenceThreshold; // Determines Dark skill unlocks
};


//The AHero class is a subclass of ACharacter, which is a built - in Unreal Engine class that represents a character in the game world.The AHero class has several attributes that represent the hero's primary attributes (Strength, Dexterity, Intelligence, Endurance, Charisma, and Perception) and derived stats (Health, Stamina, Mana, Leadership, Diplomacy, Tactics, Willpower, Stealth, and Initiative). The class also has functions to calculate derived stats and modify attributes. 
//The AHero class also has a Faction attribute of type EFaction, which represents the hero's faction. The class has a function to set the faction. 
//The AHero class is defined in the AHero.h header file, which is located in the Source / StrategyRPG / Public directory/AHero.cpp

