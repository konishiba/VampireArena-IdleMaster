#pragma once
#include "Equipable.h"

class Weapon : public Equipable
{

public :

	inline int GetReach() const
	{
		return weight;
	}

	inline int GetAttackValue() const
	{
		return (equipableStat * weight) * rarity;
	}
};

