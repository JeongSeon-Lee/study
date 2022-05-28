#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;     // p 주소값을 pd에 대입, 주소를 100이라 가정하면 *p는 100~103번지 영역, *pd는 100~107번지 영역
    printf("%lf\n", *pd);

    return 0;
}