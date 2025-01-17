#pragma once
#include "Singleton.h"
#include "ShapeActor.h"

class TextureManager : public Singleton<TextureManager>
{
	string defaultTexturePath;
	string defaultTextureExtension;
	Texture* defaultTexture;

private:
	FORCEINLINE Texture GetDefaultTexture()
	{
		if (!defaultTexture)
		{
			LoadDefaultTexture();
		}

		return *defaultTexture;
	}

public:
	TextureManager();
	~TextureManager();

private:
	void LoadDefaultTexture();
	void LoadTexture(Texture& _texture, const string& _path, const IntRect& _rect = IntRect());
	void SetTexture(Shape* _shape, const Texture* _texture);

public:
	void Load(ShapeActor* _shapeActor, const string& _path, const IntRect& _rect = IntRect(),
			  const bool _isRepeated = false, const bool _smooth = true);
	
};