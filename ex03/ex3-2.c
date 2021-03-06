#include <stdio.h>

int RectAngle(int, int);

int main() {
    printf("長方形の横の長さを入力してください> ");
    int x;
    scanf("%d", &x);
    
    printf("長方形の縦の長さを入力してください> ");
    int y;
    scanf("%d", &y);

    int size = RectAngle(x, y);
    if (size == -1) printf("長さが適切ではありません。\n");
    else printf("面積は%dです。\n", size);
}

int RectAngle(int x, int y) {
    if (x < 0 || y < 0) return -1;
    else return x * y;
}

/*
 * 会津大学生にはこの関数の部分でうまくできなくてプログラミング嫌いになって大学の授業がイヤになる生徒が毎年一定数いるようです。
 * 今は難しく感じることも、プログラムを書けば書くほど慣れて理解が深まるので諦めずに頑張ってください！
 */
