#include "ex4-3.h"

// ex4-1.cからの流用
double getPow(double a, double b) {
    return (a - b) * (a - b);
}

double getAverage(struct Student s) {
    return (double)(s.english + s.math + s.japanese) / (double)3;
}

double getDisp(struct Student s) {
    double ave = getAverage(s);
    return (getPow(ave, s.english) + getPow(ave, s.math) + getPow(ave, s.japanese)) / (double)3;
}
