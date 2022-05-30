#include <stdio.h>

int main(void) {
    int score[2][3][4] = {
        { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} },
        { {12, 11, 10, 9}, {8, 7, 6, 5}, {4, 3, 2, 1} }
    };
    int i, j, k;

    for (i = 0; i < 2; i++) {
        printf("%d¹Ý Á¡¼ö...\n", i + 1);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                printf("%5d", score[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}