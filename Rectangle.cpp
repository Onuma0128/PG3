#include "Rectangle.h"

#include <stdio.h>

Rectangle::Rectangle(Vector2 size)
{
	size_ = size;
}

void Rectangle::Size()
{
	result = size_.x * size_.y;
}

void Rectangle::Draw()
{
	printf("矩形の面積は%5.3fでした。\n", result);
}
