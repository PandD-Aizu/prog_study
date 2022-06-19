// ファイル分割せよ

#include <stdio.h>
#include "ex4-3.h"

int main() {
    printf("整数を入力してください(1, 2)> ");
    int id;
    scanf("%d", &id);
    
    if (id == 1) ex4_1();
    else if (id == 2) ex4_2();
    else printf("範囲外です。\n");
    
    return 0;
}

/*
 * 普通に骨が折れる問題ですね。
 */
