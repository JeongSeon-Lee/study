#include <stdio.h>

int main(void) {
    char ch;
    int i;

    for (i = 0; i < 3; i++) {   // ù ��° : �Է� �ް�, ù ��° ���� ����, ���
        scanf("%c", &ch);       // �� ��° : �Է� �ʿ����(���ۿ� ����), �� ���� ���� ����, ���
        printf("%c", ch);       // �� ���� : �Է� �ʿ����, �� ��° ���� ����, ���
        printf("%c\n", ch);
    }

    return 0;
}