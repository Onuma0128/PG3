#include <stdio.h>

int Recursive(int n) {
    if (n == 1) {
        return 100;
    }
    return (2 * Recursive(n - 1) - 50);
}

int main() {
    // 働いた時間
    int n = 10;
    // 一般的な賃金の合計金額
    int generalTotalWage = 0;
    // 再帰的な賃金の合計金額
    int recursiveTotalWage = 0;

    // 各時間ごとの時給を計算して総収入に加算
    for (int i = 1; i <= n; i++) {
        int hourlyWage = 1072;
        generalTotalWage += hourlyWage;
        printf("一般的な賃金体系\n");
        printf("%d時間 給料 : %d円\n", i, hourlyWage);

        hourlyWage = Recursive(i);
        recursiveTotalWage += hourlyWage;
        printf("再帰的な賃金体系\n");
        printf("%d時間 給料 : %d円\n\n", i, hourlyWage);
    }
    // 賃金の合計金額を表示
    printf("一般的な賃金体系での総収入: %d円\n", generalTotalWage);
    printf("再帰的な賃金体系での総収入: %d円\n", recursiveTotalWage);

    // どちらの金額が上かを表示
    if (generalTotalWage > recursiveTotalWage) {
        printf("一般的な賃金体系の方が儲かる");
    }
    else {
        printf("再帰的な賃金体系の方が儲かる");
    }


    return 0;
}