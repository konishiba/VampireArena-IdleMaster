#pragma once
#include "Core.h"
#include "Component.h"

class Object : public Core
{
	set<Component*> components;

public:


public:
	Object();
	virtual ~Object();

private:
	void Register();

public:
	virtual void BeginPlay() override;
	virtual void Tick(const float _deltaTime) override;
	virtual void BeginDestroy() override;

#pragma region Components
public:
	void AddComponent(Component* _component);
	void RemoveComponent(Component* _component);
	template<typename T>
	T* GetComponent()
	{
		for (Component* _component : components)
		{
			if (is_same_v<decltype(_component), T>)
			{
				return dynamic_cast<T>(_component);
			}
		}
		return nullptr;
	}
#pragma endregion
};

