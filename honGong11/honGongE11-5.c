#include <stdio.h>

int main(void) {
    int res;
    char ch;

    while (1) {
        res = scanf("%c", &ch);     // scanf 함수는 기본적으로 입력한 값의 개수를 반환
        if (res == -1) break;       // Ctrl+Z를 누르면 -1을 반환
        printf("%d ", ch);
    }

    return 0;
}
