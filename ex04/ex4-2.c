#include <stdio.h>
#include <math.h>

// 構造体Pointを作成
typedef struct
{
    double x;
    double y;
}Point;

int main() {
    // Pointの配列path, 経路の合計値を格納するsumを定義
    Point path[4];
    double sum = 0;

    // Pointを入力
    for(int i=0; i<4; i++) {
        printf("%dつめの点の座標＞",i+1);
        scanf("%lf%lf", &path[i].x, &path[i].y);
    }

    // pathに含まれる点を二つずつ選択し、その距離をsumに足していく
    for(int i=0; i<3; i++) {
        double length;
        Point from = path[i];
        Point to = path[i+1];
        length = sqrt((from.x-to.x)*(from.x-to.x)+(from.y-to.y)*(from.y-to.y));
        sum += length;
    }

    printf("経路の長さは%f", sum);
}