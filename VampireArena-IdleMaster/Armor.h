#pragma once
#include "Equipable.h"

class Armor : public Equipable
{

public :
	
	FORCEINLINE int GetWeight() const
	{
		return weight;
	}

	FORCEINLINE int GetResistance() const
	{
		return (equipableStat + weight) * (rarity * 0.1);
	}

public:
	Armor() = default;
};