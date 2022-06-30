#include"ex4-3.h"

// a - bの二乗を返す関数
double getPow(double a, double b) {
    return (a - b) * (a - b);
}

// 分散は偏差の二乗の平均をとります
// 偏差は値ー平均です。（どうせ二乗するので平均ー値でも大丈夫です）
double getDisp(Student s) {
    double ave = getAverage(s);
    return (getPow(ave, s.english) + getPow(ave, s.math) + getPow(ave, s.japanese)) / (double)3;
}
