#include <stdio.h>

int main(void) {
    int age;
    char name[20];

    printf("���� �Է� : ");
    scanf("%d", &age);

    fgetc(stdin);
    // getchar();
    // scanf("%*c");

    printf("�̸� �Է� : ");
    gets(name);
    printf("���� : %d, �̸� : %s\n", age, name);

    return 0;
}