#include <stdio.h>

int main() {
    printf("整数を入力してください> ");
    int n;
    scanf("%d", &n);
    switch(n % 2) {
        case 1:
            printf("奇数です。\n");
            break;
        default:
            printf("偶数です。\n");
            break;
    }
}

/*
 * n % 2は必ず0か1を取るのでcase1: case0: defaultじゃなくてcase 1(or 0): defaultで良い
 */
