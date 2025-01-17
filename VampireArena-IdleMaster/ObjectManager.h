#pragma once
#include "Singleton.h"
#include "Actor.h"

class ObjectManager : public Singleton<ObjectManager>
{
	set<Object*> allObject;

public:
	FORCEINLINE set<Object*> GetAllObject() const
	{
		return allObject;
	}

	FORCEINLINE void AddObject(Object* _actor)
	{
		allObject.insert(_actor);
	}

public:
	~ObjectManager();

public:
	virtual void BeginPlay();
	virtual void Tick(const float _deltaTime);
	virtual void BeginDestroy();
};