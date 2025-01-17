#pragma once
#include "Equipable.h"

class Weapon : public Equipable
{

public :

	FORCEINLINE int GetReach() const
	{
		return weight;
	}

	FORCEINLINE int GetAttackValue() const
	{
		return (equipableStat + weight) * rarity;
	}

public:
	Weapon() = default;
};