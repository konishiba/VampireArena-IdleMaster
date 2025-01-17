#pragma once
#include "Equipable.h"

class Armor : public Equipable
{

public :
	FORCEINLINE double GetWeight() const
	{
		return weight;
	}

	FORCEINLINE double GetResistance() const
	{
		return ((equipableStat / 2) * weight) * (rarity * 0.1);
	}

public:
	Armor() = default;
};