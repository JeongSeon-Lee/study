#include <stdio.h>

int main(void) {
    char animal[5][20];
    int i;              // 반복 제어 변수
    int count;           // 행의 수를 저장할 변수

    count = sizeof(animal) / sizeof(animal[0]);
    for (i = 0; i < count; i++) {
        scanf("%s", animal[i]);
    }

    for (i = 0; i < count; i++) {
        printf("%s", animal[i]);
    }

    return 0;
}