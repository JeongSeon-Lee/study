#include <stdio.h>

char *my_strcat(char *pd, char *ps);

int main(void) {
    char str[80] = "apple";

    printf("���̱� �� : %s\n", str);
    my_strcat(str, "jam");
    printf("���� �� : %s\n", str);

    return 0;
}

char *my_strcat(char *pd, char *ps) {
    while (*pd != '\0') {
        pd++;
    }
    while (*ps != '\0') {
        *pd = *ps;
        pd++;
        ps++;
    }
    *pd = '\0';

    return pd;
}