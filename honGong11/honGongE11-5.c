#include <stdio.h>

int main(void) {
    int res;
    char ch;

    while (1) {
        res = scanf("%c", &ch);     // scanf �Լ��� �⺻������ �Է��� ���� ������ ��ȯ
        if (res == -1) break;       // Ctrl+Z�� ������ -1�� ��ȯ
        printf("%d ", ch);
    }

    return 0;
}
