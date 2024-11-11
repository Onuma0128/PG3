#pragma once
class Enemy
{
public:

	// 更新
	void Update();

	// 接近
	void Approach();
	// 攻撃
	void Attack();
	// 離脱
	void Withdrawal();

	// 待機時間
	void SetTimeout(int time);

private:
	// メンバ関数ポインタ
	static void (Enemy::* stateTable[])();
};