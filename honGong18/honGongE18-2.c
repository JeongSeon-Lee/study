#include <stdio.h>

int main(void)
{
    FILE *fp;
    int ch;

    fp = fopen("honGong18//a.txt", "r");
    if (fp == NULL)
    {
        printf("������ ������ �ʾҽ��ϴ�.\n");
        return 1;
    }

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        putchar(ch);
    }
    fclose(fp);
}