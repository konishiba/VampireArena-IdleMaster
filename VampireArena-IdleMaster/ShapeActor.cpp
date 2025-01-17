#include "ShapeActor.h"

ShapeActor::ShapeActor(const float _radius, const string& _path, const IntRect _rect, const size_t& _pointsCount)
{
	shape = new CircleShape(_radius, _pointsCount);
}

ShapeActor::ShapeActor(const Vector2f& _size, const string& _path, const IntRect& _rect)
{
	shape = new RectangleShape(_size);
}

ShapeActor::~ShapeActor()
{
	delete shape;
}
