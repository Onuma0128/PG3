#pragma once
template <typename Type>

class Box
{
public:

	Type a;
	Type b;

public:
	// コンストラクタ
	Box(Type a, Type b) :a(a), b(b) {}

	Type Min() {
		if (a < b) {
			return a;
		}
		else {
			return b;
		}
	}
};

