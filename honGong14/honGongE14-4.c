#include <stdio.h>

int main(void) {
    char animal1[5][10] = {
        {'d', 'o', 'g', '\0'},
        {'c', 'a', 't', '\0'},
        {'f', 'l', 'o', 'g', '\0'},
        {'p', 'i', 'g', '\0'}
    };
    char animal2[][10] = { "dog", "cat", "flog", "pig"};
    int i;

    for (i = 0; i < 5; i++) {
        printf("[%s ]", animal1[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("[%s ]", animal2[i]);
    }

    return 0;
}