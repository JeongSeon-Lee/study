#include <stdio.h>

int main(void) {
    int num, grade;

    printf("�й� �Է� : ");
    scanf("%d", &num);
    while (getchar() != '\n');
    printf("���� �Է� : ");
    grade = getchar();
    printf("�й� : %d, ���� : %c", num, grade);
    
    return 0;
}