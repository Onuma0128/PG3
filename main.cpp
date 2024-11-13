#include<stdio.h>

#include <memory>

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	// 犬
	std::unique_ptr<Animal> animal_dog = std::make_unique<Dog>();
	// 猫
	std::unique_ptr<Animal> animal_cat = std::make_unique<Cat>();

	// 吠える
	animal_dog->Bark();
	animal_cat->Bark();

	// 噛む
	animal_dog->Bite();
	animal_cat->Bite();

	return 0;
}