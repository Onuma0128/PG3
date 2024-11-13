#include "Circle.h"

#include <stdio.h>

const float PI = 3.14f;

Circle::Circle(float radius)
{
	radius_ = radius;
}

void Circle::Size()
{
	result = radius_ * radius_ * PI;
}

void Circle::Draw()
{
	printf("円の面積は%5.3fでした。\n", result);
}
