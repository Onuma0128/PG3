#include "Enemy.h"

#include <stdio.h>
#include <thread>

void (Enemy::* Enemy::stateTable[])() = {
	&Enemy::Approach,
	&Enemy::Attack,
	&Enemy::Withdrawal
};

void Enemy::Update()
{
	for (int i = 0; i < 3; ++i) {
		SetTimeout(1000);
		(this->*stateTable[i])();
	}
}

void Enemy::Approach()
{
	printf("接近\n");
}

void Enemy::Attack()
{
	printf("攻撃\n");
}

void Enemy::Withdrawal()
{
	printf("離脱\n");
}

void Enemy::SetTimeout(int time)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(time));
}
