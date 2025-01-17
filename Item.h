#pragma once
#include "CoreMinimal.h"

enum RarityType
{
	RT_JUNK = 1,
	RT_COMMON,
	RT_UNCOMMON,
	RT_RARE,
	RT_EPIC,
	RT_LEGENDARY,
	RT_SANGUINE,
};

class Item
{
protected :
	string name;
	string description;
	int upgradePrice;
	RarityType rarity;

public:
	inline string GetName() const
	{
		return name;
	}
	inline string GetDescription() const
	{
		return description;
	}
	inline int GetUpgradePrice() const
	{
		return upgradePrice * rarity;
	}
	inline int GetRarity() const
	{
		return rarity;
	}
};

