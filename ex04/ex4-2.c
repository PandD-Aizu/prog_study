/*
 * ファイルポインタを使ってみよう
 */
#include <stdio.h>

// ex4-1.cからの流用
struct Student {
    int english;
    int math;
    int japanese;
};

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


int main() {
    FILE *read = fopen("sample.txt", "r");
    if (read == NULL) {
        printf("ファイルが読み込めません\n");
        return 0;
    }

    struct Student student;
    fscanf(read, "%d", &student.english);
    fscanf(read, "%d", &student.math);
    fscanf(read, "%d", &student.japanese);
    
    printf("平均: %lf, 分散: %lf\n", getAverage(student), getDisp(student));

    return 0;
}

/*
 * 資料とかも読みながら頑張って書いてください
 */
