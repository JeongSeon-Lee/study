#include <stdio.h>

int main(void) {
    char *dessert = "apple";    // �����Ϳ� ���ڿ� �ʱ�ȭ

    printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
    dessert = "banana";
    printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

    return 0;
}