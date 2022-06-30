/*
 * テストの点数を格納する構造体を宣言して平均と分散を求めよ
 * ただし、関数をファイル分割せよ
 */

#include <stdio.h>
#include "ex4-3.h"

int main() {
    Student student;
    printf("英語の点数を入力してください> ");
    scanf("%d", &student.english);

    printf("数学の点数を入力してください> ");
    scanf("%d", &student.math);

    printf("国語の点数を入力してください> ");
    scanf("%d", &student.japanese);

    printf("平均: %lf, 分散: %lf\n", getAverage(student), getDisp(student));

    return 0;
}

/* 
 * 関数を分割するだけですね
 * getPow関数については、getDispでのみでしか使用していないため、ヘッダーファイルには書いていません
 */
