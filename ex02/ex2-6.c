#include <stdio.h>

#define N 5

int main() {
    int a[N];
    printf("配列の要素を入力してください> ");
    for (int i = 0 ; i < N ; i++) scanf("%d", &a[i]);

    // 平均の計算
    double average = 0.0;
    for (int i = 0 ; i < N ; i++) average += a[i];
    average /= N;

    // 分散の計算
    double variance = 0.0;
    for (int i = 0 ; i < N ; i++) variance += (average - a[i]) * (average - a[i]);
    variance /= N;

    printf("平均: %lf, 分散: %lf\n", average, variance);
}

/*
 * 配列の要素に0から順に処理を行いたい時には(配列の要素数を例えばnとして)
 * for (int i = 0 ; i < n ; i++)と書くのが基本です。
 * for (int i = 0 ; i <= n - 1 ; i++) はあまりいないかな〜
 */
