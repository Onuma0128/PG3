#include "Cat.h"

#include <stdio.h>

Cat::Cat()
{
	name = "猫";
}

void Cat::Bark()
{
	printf("%sが吠えた。\n", name);
}

void Cat::Bite()
{
	printf("%sが噛んだ。\n", name);
}
