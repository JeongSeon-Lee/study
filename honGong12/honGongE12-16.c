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
    while ((*pd == *ps) && (*pd != '\0')) {     // 두 문자가 같으나 널 문자가 아닌 경우
        pd++;                                   // 다음 문자로 이동
        ps++;
    }
    /* 반복문 이후 이 시점에서는 두 문자가 다르거나 둘 다 널 문자임 */
    if (*pd > *ps) return 1;                    // 앞 문자의 아스키 코드 값이 크면 1 반환
    else if (*pd < *ps) return -1;              // 뒷 문자의 아스키 코드 값이 크면 -1 반환
    else return 0;                              // 둘 다 널 문자이므로 같은 문자열
/*     
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
 */
}