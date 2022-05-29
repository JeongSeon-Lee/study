#include <stdio.h>

int my_strcmp(char *pd, char *ps);

int main(void) {
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름 : ");

    if (my_strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else 
        printf("%s\n", str2);
    
    return 0;
}

int my_strcmp(char *pd, char *ps) {
    if (*pd == *ps) {
        if (*pd == '\0')
            return 0;
        pd++;
        ps++;
    }
    else if (*pd > *ps)
        return 1;
    else
        return -1;
}