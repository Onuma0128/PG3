#include<stdio.h>
template <typename T1, typename T2>

T1 Min(T1 a, T2 b) {
	if (a < b) {
		return a;
	}
	return b;
}

template<>
char Min<char>(char a, char b) {
	return printf("数学以外は代入できません\n");
}

int main() {

	int int_a = 2;
	int int_b = 5;
	printf("%d\n", Min(int_a, int_b));

	float float_a = 2.0f;
	float float_b = 5.0f;
	printf("%f\n", Min(float_a, float_b));

	double double_a = 6.4433f;
	double double_b = 3.0034f;
	printf("%lf\n", Min(double_a, double_b));

	char char_a = 'max';
	char char_b = 'min';
	printf("%c\n", Min(char_a, char_b));

	return 0;
}