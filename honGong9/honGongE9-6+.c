#include <stdio.h>

int main(void) {
    double a = 3.4;
    double *pd = &a;
    int *pi;

    /* �� ��ȯ�� ����� �������� ������ ������ �����մϴ�. */
    pi = (int *)pd;
    printf("%d\n", *pi);

    return 0;
}