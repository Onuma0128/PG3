#pragma once

struct Vector2
{
	float x;
	float y;
};

class IShape
{
public:
	virtual void Size() = 0;

	virtual void Draw() = 0;

protected:

	float result;

};