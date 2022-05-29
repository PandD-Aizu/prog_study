#include <stdio.h>

// 問題文長方形の向き違うね

void drawRectangle(int x, int y) {
    for (int i = 0 ; i < y ; i++) {
        for (int j = 0 ; j < x ; j++) printf("*");
        printf("\n");
    }
}

int main() {
    printf("長方形の横の長さを入力してください> ");
    int x;
    scanf("%d", &x);

    printf("長方形の縦の長さを入力してください> ");
    int y;
    scanf("%d", &y);

    drawRectangle(x, y);
}

/*
 * せっかく関数を知ったのでこの問題でも使ってみました。
 * 20行程度の短いコードだとあまり関数の恩恵を得られませんが、
 *
 * みんげーや第4Q「アルゴリズムとデータ構造」の授業課題等で大量のコードを書く時に
 * デバッグが楽になる、コードが読みやすくなる等の関数のありがたみを感じるでしょう。
 */
