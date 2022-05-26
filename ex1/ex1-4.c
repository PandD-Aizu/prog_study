#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;
    printf("点1の座標を入力してください> ");
    scanf("%lf%lf", &x1, &y1);
    printf("点2の座標を入力してください> ");
    scanf("%lf%lf", &x2, &y2);

    printf("点１と点２の距離は%lfです。\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

/*
 * ゲーム開発では平面上、空間上の点や図形を扱うことが多いです。プログラミング入門/Cの授業でも
 * このような幾何問題がいくつかでてくると思うので是非頑張ってください
 */
