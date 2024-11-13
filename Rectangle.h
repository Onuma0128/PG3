#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	Rectangle(Vector2 size);
	~Rectangle() = default;

	void Size()override;

	void Draw()override;

private:

	Vector2 size_;

};