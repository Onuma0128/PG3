#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// 偶数関数
int EvenNumber(int num) {
    return  num % 2 == 0;
}
// 奇数関数
int OddNumber(int num) {
    return  num % 2 != 0;
}
// 結果
void Check(int dice_roll, int (*numberChecker)(int)) {
    printf("サイコロの出目は %d でした。\n", dice_roll);
    if (numberChecker(dice_roll)) {
        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }
}

int main() {
	
    int guess;
    int dice_roll;

    // 乱数のシードを初期化
    srand((unsigned int)time(NULL));

    printf("半か丁か予想してください。\n半なら1、丁なら2を入力してください: ");
    scanf_s("%d", &guess);

    // 関数ポインタ
    int (*numberChecker)(int);

    if (guess == 1) {
        numberChecker = OddNumber;
    }
    else if (guess == 2) {
        numberChecker = EvenNumber;
    }
    else {
        printf("無効なデータを読み取りました。終了します。");
        return 0;
    }

    // サイコロを振る (1から6のランダムな数を生成)
    dice_roll = rand() % 6 + 1;

    // 3秒待機
    printf("サイコロを振っています");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n");

    // 正解かチェック
    Check(dice_roll, numberChecker);

	return 0;
}