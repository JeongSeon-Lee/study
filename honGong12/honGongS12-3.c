#include <stdio.h>
#include <string.h>

char *conceal(char *ps);

int main(void) {
    char str[80];

    printf("�ܾ� �Է� : ");
    scanf("%s", str);
    printf("�Է��� �ܾ� : %s, ", str);
    conceal(str);
    printf("������ �ܾ� : %s", str);

    return 0;
}

char *conceal(char *ps) {
    char *po = ps;

    if (strlen(ps) > 5) {
        ps += 5;
        while (*ps != '\0') {
        *ps = '*';
        ps++;
        }
    }
    return po;
}