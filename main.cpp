#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <functional>
#include <thread>

// 偶数関数
int EvenNumber(int num) {
    return  num % 2 == 0;
}
// 奇数関数
int OddNumber(int num) {
    return  num % 2 != 0;
}

void SetTimeout(int time) {
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

int main() {
    // 乱数のシードを初期化
    srand((unsigned int)time(NULL));
	
    int guess;
    int dice_roll = rand() % 6 + 1;


    printf("半か丁か予想してください。\n半なら1、丁なら2を入力してください: ");
    scanf_s("%d", &guess);

    // 3秒待機
    printf("サイコロを振っています");
    for (int i = 0; i < 3; ++i) {
        SetTimeout(1000);
        printf(".");
    }

    // ラムダ式
    std::function<void()> fx = [dice_roll, guess]() {

        printf("\nサイコロの出目は %d でした。\n", dice_roll);
        if ((guess == 1 && OddNumber(dice_roll)) || (guess == 2 && EvenNumber(dice_roll))) {
            printf("正解\n");
        }
        else {
            printf("不正解\n");
        }
    };

    // 正解かチェック
    fx();

	return 0;
}