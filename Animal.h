#pragma once
class Animal
{
public:
	Animal() = default;
	virtual ~Animal();

	// 吠える
	virtual void Bark();
	// 噛む
	virtual void Bite();

protected:

	const char* name;
};

