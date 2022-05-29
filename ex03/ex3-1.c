#include <stdio.h>

int sumup(int n) {
    return n * (n + 1) / 2;
}

int main() {
    printf("整数を入力してください> ");
    int n;
    scanf("%d", &n);
    
    printf("%d\n", sumup(n));
}

/*
 * これくらい短い関数ならプロトタイプ宣言にしなくてもmain関数が見やすいですね
 */
