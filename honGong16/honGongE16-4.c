#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char temp[80];
    char *str[3];       // ���� �Ҵ� ������ ������ ������ �迭
    int i;

    for (i = 0; i < 3; i++) {
        printf("���ڿ��� �Է��ϼ��� : ");
        gets(temp);
        str[i] = (char *)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

    for (i = 0; i < 3; i++) {
        printf("%s\n", str[i]);
    }

    for (i = 0; i < 3; i++) {
        free(str[i]);
    }

    return 0;
}