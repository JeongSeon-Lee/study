#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("honGong18//a.txt", "r");
    if (fp == NULL)
    {
        printf("파일이 열리지 않았습니다.\n");
        return 1;
    }
    printf("파일리 열렸습니다.\n");
    fclose(fp);

    return 0;
}