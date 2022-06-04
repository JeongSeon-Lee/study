#include <stdio.h>

int main(void)
{
    FILE *afp, *bfp;
    int num = 10;
    int res;

    afp = fopen("honGong18//a.txt", "wt");
    fprintf(afp, "%d", num);

    bfp = fopen("honGong18//b.txt", "wb");

    fwrite(&num, sizeof(num), 1, bfp);

    fclose(afp);
    fclose(bfp);

    bfp = fopen("honGong18//b.txt", "rb");
    fread(&res, sizeof(res), 1, bfp);
    printf("%d", res);

    fclose(bfp);

    return 0;
}