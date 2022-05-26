#include <stdio.h>

int main() {
    printf("点数を入力してください> ");
    int point;
    scanf("%d", &point);

    if (point > 100) printf("範囲外です\n");
    else if (point >= 80) printf("評価はA、合格です。\n");
    else if (point >= 65) printf("評価はB、合格です。\n");
    else if (point >= 50) printf("評価はC、合格です。\n");
    else if (point >= 35) printf("評価はD、不合格です。\n");
    else if (point >= 0) printf("評価はE、不合格です。\n");
    else printf("範囲外です。\n");
}

/*
 * 一度条件式を満たしたらそれ以下のelse if や else文には捕まらないことがコーディング量を減らすポイント
 * もっとコーディング量を減らしたいと思っている方はC言語での文字の取り扱い方について予習してみましょう
 * (大学では第3Qで習います)
 */
