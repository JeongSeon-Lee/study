#include <stdio.h>

int main(void) {
    double a = 3.4;
    double *pd = &a;
    int *pi;

    /* 형 변환을 사용한 포인터의 대입은 언제나 가능합니다. */
    pi = (int *)pd;
    printf("%d\n", *pi);

    return 0;
}