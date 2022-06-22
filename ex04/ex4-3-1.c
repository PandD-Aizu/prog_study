#include "ex4-3.h"

// ex4-1.cから流用。void型の関数なので、return 0をしてはいけません
void ex4_1() {
    struct Student student;
    printf("英語の点数を入力してください> ");
    scanf("%d", &student.english);

    printf("数学の点数を入力してください> ");
    scanf("%d", &student.math);

    printf("国語の点数を入力してください> ");
    scanf("%d", &student.japanese);

    printf("平均: %lf, 分散: %lf\n", getAverage(student), getDisp(student));
}
