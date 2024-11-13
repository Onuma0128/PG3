#include <stdio.h>

#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	
	// サイズを指定
	IShape* circle = new Circle(20.0f);
	IShape* rectangle = new Rectangle({ 20.0f,30.0f });

	// 面積を計算
	circle->Size();
	rectangle->Size();

	// 計算結果を描画
	circle->Draw();
	rectangle->Draw();

	delete circle;
	delete rectangle;

	return 0;
}