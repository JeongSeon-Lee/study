#include <stdio.h>

int main(void) {
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    /* 2차원 배열에서 일부 초깃값 생략
    int num[3][4] = { {1}, {5, 6}, {9, 10, 11} };
     */
    /* 행의 수 생략
    int num[][4] = { {1}, {5, 6}, {9, 10, 11} };
     */
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%5d", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}