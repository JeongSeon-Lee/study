#include <stdio.h>

int main(void)
{
    FILE *fp;

    fp = fopen("honGong18//a.txt", "r");
    if (fp == NULL)
    {
        printf("������ ������ �ʾҽ��ϴ�.\n");
        return 1;
    }
    printf("���ϸ� ���Ƚ��ϴ�.\n");
    fclose(fp);

    return 0;
}