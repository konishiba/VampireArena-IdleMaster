#pragma once
#include "Equipable.h"

class Armor : public Equipable
{

public :
	
	inline int GetWeight() const
	{
		return weight;
	}

	inline int GetResistance() const
	{
		return (equipableStat + weight) * (rarity * 0.1);
	}
};

