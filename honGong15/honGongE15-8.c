#include <stdio.h>

void func(int (*fp)(int, int));             // �Լ� �����͸� �Ű������� ���� �Լ�
int sum(int a, int b);                      // �� ������ ���ϴ� �Լ�
int mul(int a, int b);                      // �� ������ ���ϴ� �Լ�
int max(int a, int b);                      // �� ���� �߿� ū ���� ���ϴ� �Լ�

int main(void) {
    int sel;                                // ���õ� �޴� ��ȣ�� ������ ����

    printf("01 �� ������ ��\n");            // �޴� ���
    printf("02 �� ������ ��\n");
    printf("03 �� ���� �߿��� ū �� ���\n");
    printf("���ϴ� ������ �����ϼ��� : ");
    scanf("%d", &sel);

    switch (sel) {
    case 1: func(sum); break;
    case 2: func(mul); break;
    case 3: func(max); break;
    }

    return 0;
}

void func(int (*fp)(int, int)) {
    int a, b;
    int res;

    printf("�� ������ ���� �Է��ϼ��� : ");
    scanf("%d%d", &a, &b);
    res = fp(a, b);
    printf("�ᱣ���� : %d\n", res);
}

int sum(int a, int b) {
    return (a + b);
}

int mul(int a, int b) {
    return (a * b);
}

int max(int a, int b) {
    if (a > b) return a;
    else return b;
}