/*
 * ex1-2
 * 「%を使わずにaをbで割った余りを求めよ」
 */

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d を %d で割った余りは %d です。\n", a, b, a - (a / b ) * b);
}

/*
 * a = b x p + qとなる正の整数p, qについてqを求めます。正しpは取りうる最大の値です。
 * p は「aをbで割ったものを小数点以下切り捨てた値」です。一般的なプログラミング言語では
 * 整数同士の割り算は切り捨てた値を出力するので、 p = a / bです。
 * 式変形してq = a - (a / b) * bとなります。
 *
 * ところで割り算は0で割ってはいけないというルールがありますが、bに0を代入するとどうなるでしょうか。
 *
 */
