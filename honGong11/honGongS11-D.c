#include <stdio.h>

int main(void) {
    int ch;
    int len, max = 0;

    while(1) {
        len = 0;
        ch = getchar();                    // ���� �Է�
        // Ctrl+ZŰ�� �����ų� ���� Ű�� ġ�� �ʴ� ���� �ݺ� �Է�
        while((ch != -1) && (ch != '\n')) {
            len++;                        // ������ ���� ����
            ch = getchar();
        }
        if(ch == -1) break;         // Ctrl+ZŰ�� ������ ��� �Է� ����
        if(len > max) max = len;    // ���� �Է��� �ܾ��� ���̰� ���� ���� ��                                               
    }                 // �ܾ��� ���̺��� ��� �� ���� ���� �� ���̷� ����

    printf("���� �� �ܾ��� ���� : %d\n", max);

    return 0;
}