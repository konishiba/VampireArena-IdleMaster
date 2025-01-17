#pragma once
#include "Item.h"

enum ElementType
{
	ET_SLASH,
	ET_BLUNT,
	ET_PIERCE,
};

class Equipable : public Item
{
protected :
	bool isSaboted;
	int equipableStat;
	int weight;
	ElementType element;

public :

	inline bool GetIsSaboted() const
	{
		return isSaboted;
	}
};

