#include<stdio.h>

#include <memory>

#include "Box.h"

int main() {

	Box<int> intBox(2, 1);
	Box<float> floatBox(1.9f, 1.5f);
	Box<double> doubleBox(2.01f, 2.0f);

	printf("%d\n", intBox.Min());
	printf("%f\n", floatBox.Min());
	printf("%lf\n", doubleBox.Min());
	
	return 0;
}