#include <stdio.h>

int main(void) {
    double a = 3.4;
    double *pd = &a;
    int *pi;

    /* �� ��ȯ�� ����� �������� ������ ������ �����մϴ�. */
/*     pi = (int *)pd;
    printf("%d\n", *pi); */

    /* �����Ϳ� 100���� ���� ���� */
    pi = (int *) 100;
    *pi = 10;
    printf("%d\n", *pi);

    return 0;
}