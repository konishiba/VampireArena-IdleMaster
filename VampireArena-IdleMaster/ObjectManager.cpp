#include "ObjectManager.h"

ObjectManager::~ObjectManager()
{
	for (Object* _object : allObject)
	{
		delete _object;
	}
}

void ObjectManager::BeginPlay()
{
	for (Object* _object : allObject)
	{
		_object->BeginPlay();
	}
}

void ObjectManager::Tick(const float _deltaTime)
{
	for (Object* _object : allObject)
	{
		_object->Tick(_deltaTime);
	}
}

void ObjectManager::BeginDestroy()
{
	for (Object* _object : allObject)
	{
		_object->BeginDestroy();
	}
}