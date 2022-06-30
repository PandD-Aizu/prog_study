#include"ex4-3.h"
// int型同士の割り算でdoubleを返すには、doubleへのキャストが必要です！
// (第一回勉強会資料を参照してください)
double getAverage(Student s) {
    return (double)(s.english + s.math + s.japanese) / (double)3;
}