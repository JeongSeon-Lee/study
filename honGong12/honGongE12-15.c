#include <stdio.h>

int my_strlen(char *pd);

int main(void) {
    char str1[80] = "kiwi";
    char str2[80] = "apple";

    printf("str1의 문자열 길이 : %d\n", my_strlen(str1));
    printf("str2의 문자열 길이 : %d\n", my_strlen(str2));

    return 0;
}

int my_strlen(char *pd) {
    int len = 0;

    while (*pd != '\0') {
        pd++;
        len++;
    }

    return len;
}