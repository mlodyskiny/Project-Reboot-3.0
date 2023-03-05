#pragma once

#include "BuildingActor.h"
#include "PlayerState.h"

enum class EFortResourceType : uint8_t
{
	Wood = 0,
	Stone = 1,
	Metal = 2,
	Permanite = 3,
	None = 4,
	EFortResourceType_MAX = 5
};

class ABuildingSMActor : public ABuildingActor
{
public:
	bool IsPlayerPlaced()
	{
		return true; // FOR NOW
	}

	void SetPlayerPlaced(bool NewValue)
	{

	}

	bool IsDestroyed()
	{
		return false; // FOR NOW
	}

	APlayerState*& GetEditingPlayer()
	{
		static auto EditingPlayerOffset = GetOffset("EditingPlayer");
		return Get<APlayerState*>(EditingPlayerOffset);
	}

	int& GetCurrentBuildingLevel()
	{
		static auto CurrentBuildingLevelOffset = GetOffset("CurrentBuildingLevel");
		return Get<int>(CurrentBuildingLevelOffset);
	}

	EFortResourceType& GetResourceType()
	{
		static auto ResourceTypeOffset = GetOffset("ResourceType");
		return Get<EFortResourceType>(ResourceTypeOffset);
	}

	static UClass* StaticClass();
};