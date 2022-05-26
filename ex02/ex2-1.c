#include <stdio.h>

int main() {
    double value;
    printf("整数を入力してください > ");
    scanf("%lf", &value);

    // value = value * -1と同じ意味です（第一回勉強会資料を参照してください）
    if (value < 0) value *= -1;

    printf("絶対値は %lf です。\n", value);
}

/*
 * if (value >= 0) printf("%lf", value)
 * else printf("%lf", value)
 * よりマイナス１をかけるほうが楽ですね
 */
