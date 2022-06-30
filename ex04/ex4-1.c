/*
 * テストの点数を格納する構造体を宣言して平均と分散を求めよ
 */

#include <stdio.h>

typedef struct{
    int english;
    int math;
    int japanese;
} Student;

// a - bの二乗を返す関数
double getPow(double a, double b) {
    return (a - b) * (a - b);
}

// int型同士の割り算でdoubleを返すには、doubleへのキャストが必要です！
// (第一回勉強会資料を参照してください)
double getAverage(Student s) {
    return (double)(s.english + s.math + s.japanese) / (double)3;
}

// 分散は偏差の二乗の平均をとります
// 偏差は値ー平均です。（どうせ二乗するので平均ー値でも大丈夫です）
double getDisp(Student s) {
    double ave = getAverage(s);
    return (getPow(ave, s.english) + getPow(ave, s.math) + getPow(ave, s.japanese)) / (double)3;
}

int main() {
    Student student;
    printf("英語の点数を入力してください> ");
    scanf("%d", &student.english);

    printf("数学の点数を入力してください> ");
    scanf("%d", &student.math);

    printf("国語の点数を入力してください> ");
    scanf("%d", &student.japanese);

    printf("平均: %lf, 分散: %lf\n", getAverage(student), getDisp(student));

    return 0;
}

/* 
 * 工夫ポイントは
 * getDisp内でgetAverageを呼びだし、二回平均を求めるプログラムを書く所を一回に抑えている
 * getPowを定義して、getDispのれreturn文を短く書いている
 *
 * 繰り返し書く必要がでるような部分は関数に切り分けることを心がけましょう
 */
