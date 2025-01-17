#include "Object.h"
#include "ObjectManager.h"

Object::Object()
{
	Register();
}

Object::~Object()
{
	for (Component* _component : components)
	{
		delete _component;
	}
}

void Object::Register()
{
	M_OBJECT.AddObject(this);
}

void Object::BeginPlay()
{
	for (Component* _component : components)
	{
		_component->BeginPlay();
	}
}

void Object::Tick(const float _deltaTime)
{
	for (Component* _component : components)
	{
		_component->Tick(_deltaTime);
	}
}

void Object::BeginDestroy()
{
	for (Component* _component : components)
	{
		_component->BeginDestroy();
	}
}

void Object::AddComponent(Component* _component)
{
	components.insert(_component);
}

void Object::RemoveComponent(Component* _component)
{
	components.erase(_component);
}