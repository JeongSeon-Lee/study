#include <stdio.h>

int main(void) {
    int num, grade;

    printf("�й� �Է� : ");
    scanf("%d", &num);          // ���ڿ� "315"�� ������ ��ȯ�Ǿ� num�� ����, ���ۿ� ���� ���� ����
    getchar();                  // ���ۿ� ���� �ִ� ���� ���� �Է¹���, ����� ���� ����
    printf("���� �Է� : ");
    grade = getchar();          // ���ۿ� ���� ���� ���ڸ� �������� �ʾҴٸ�, grade�� ���๮�ڰ� �Էµ�
    printf("�й� : %d, ���� : %c", num, grade);
    
    return 0;
}