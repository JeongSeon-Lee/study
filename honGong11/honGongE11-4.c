#include <stdio.h>

int main(void) {
    char ch;
    int i;

    for (i = 0; i < 3; i++) {   // 첫 번째 : 입력 받고, 첫 번째 문자 저장, 출력
        scanf("%c", &ch);       // 두 번째 : 입력 필요없고(버퍼에 남음), 두 번재 문자 저장, 출력
        printf("%c", ch);       // 세 번재 : 입력 필요없고, 세 번째 문자 저장, 출력
        printf("%c\n", ch);
    }

    return 0;
}