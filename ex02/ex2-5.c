#include <stdio.h>

int main() {
    while(1) {
        int n;
        printf("整数を入力してください > ");
        scanf("%d", &n);

        if (n < 1) {
            printf("範囲外です。プログラムを終了します。\n");
            // ここは第四問と同じreturn 0でも期待通りに動作します。
            break;
        }

        int ans = 0;
        for (int i = 1 ; i <= n ; i++) ans += i;
        printf("1から%dまでの和は%dです。\n", n, ans);
    }

    return 0;
}

/*
 * コンピュータリテラシーで習ったと思いますが、
 * cat ex2-4.c > ex2-5.cでコマンドから新規ファイルを作りながらコピーできます(wslとかmacとかLinuxの人は)
 * 便利ですね
 */
