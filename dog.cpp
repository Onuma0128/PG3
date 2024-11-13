#include "dog.h"

#include <stdio.h>

Dog::Dog()
{
	name = "犬";
}

void Dog::Bark()
{
	printf("%sが吠えた。\n", name);
}

void Dog::Bite()
{
	printf("%sが噛んだ。\n", name);
}

