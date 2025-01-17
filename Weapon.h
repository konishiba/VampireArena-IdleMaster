#pragma once
#include "Equipable.h"

class Weapon : public Equipable
{

public :

	inline double GetReach() const
	{
		return weight;
	}

	inline double GetAttackValue() const
	{
		return ((equipableStat * weight) * (1 + (rarity * 0.1)) * 0.9;
	}
};

