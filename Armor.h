#pragma once
#include "Equipable.h"

class Armor : public Equipable
{

public :
	
	inline double GetWeight() const
	{
		return weight;
	}

	inline double GetResistance() const
	{
		return ((equipableStat / 2) * weight) * (rarity * 0.1);
	}
};

