#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = &a;
    double *pd;

    pd = p;     // p �ּҰ��� pd�� ����, �ּҸ� 100�̶� �����ϸ� *p�� 100~103���� ����, *pd�� 100~107���� ����
    printf("%lf\n", *pd);

    return 0;
}