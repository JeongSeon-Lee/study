#include <stdio.h>
#include <string.h>

char *conceal(char *ps);

int main(void) {
    char str[80];

    printf("단어 입력 : ");
    scanf("%s", str);
    printf("입력한 단어 : %s, ", str);
    conceal(str);
    printf("생략한 단어 : %s", str);

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