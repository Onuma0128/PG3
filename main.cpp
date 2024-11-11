#include<stdio.h>

#include <memory>

#include "Enemy.h"

int main() {

	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	enemy->Update();

	return 0;
}