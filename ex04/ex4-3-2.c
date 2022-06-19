#include "ex4-3.h"

// ex4-2.cからの流用
void ex4_2() {
    FILE *read = fopen("sample.txt", "r");
    if (read == NULL) {
        printf("ファイルが読み込めません\n");
        return ;
    }

    struct Student student;
    fscanf(read, "%d", &student.english);
    fscanf(read, "%d", &student.math);
    fscanf(read, "%d", &student.japanese);
    
    printf("平均: %lf, 分散: %lf\n", getAverage(student), getDisp(student));
}
