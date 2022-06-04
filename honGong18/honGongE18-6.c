#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
    int i, res;

    fp = fopen("honGong18//a.txt", "wb");
    for (i = 0; i < 10; i++)
    {
        fputc(ary[i], fp);
    }
    
    fp = fopen("honGong18//a.txt", "rt");
    while(1)
    {
        res = fgetc(fp);
        if (res == EOF) break;
        printf("%4d", res);
    }
    fclose(fp);

    return 0;
}