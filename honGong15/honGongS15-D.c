#include <stdio.h>

void swap(char *type, void *a, void *b);

int main(void) {
    int w1, w2;
    double h1, h2;

    printf("첫 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &w1, &h1);
    printf("두 번째 사람의 나이와 키 입력 : ");
    scanf("%d %lf", &w2, &h2);

    swap("int", &w1, &w2);
    swap("double", &h1, &h2);

    printf("첫 번째 사람의 나이와 키 : %d, %.1lf", w1, h1);
    printf("두 번째 사람의 나이와 키 : %d, %.1lf", w2, h2);

    return 0;
}

void swap(char *type, void *a, void *b) {
    void *temp;

    if (type == "int") {
        *(int *)temp = *(int *)a;
        *(int *)a = *(int *)b;
        *(int *)b = *(int *)temp;
    }
    else if (type == "double") {
        *(double *)temp = *(double *)a;
        *(double *)a = *(double *)b;
        *(double *)b = *(double *)temp;
    }
}