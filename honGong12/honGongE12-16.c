#include <stdio.h>

int my_strcmp(char *pd, char *ps);

int main(void) {
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("������ ���߿� ������ ���� �̸� : ");

    if (my_strcmp(str1, str2) > 0)
        printf("%s\n", str1);
    else 
        printf("%s\n", str2);
    
    return 0;
}

int my_strcmp(char *pd, char *ps) {
    while ((*pd == *ps) && (*pd != '\0')) {     // �� ���ڰ� ������ �� ���ڰ� �ƴ� ���
        pd++;                                   // ���� ���ڷ� �̵�
        ps++;
    }
    /* �ݺ��� ���� �� ���������� �� ���ڰ� �ٸ��ų� �� �� �� ������ */
    if (*pd > *ps) return 1;                    // �� ������ �ƽ�Ű �ڵ� ���� ũ�� 1 ��ȯ
    else if (*pd < *ps) return -1;              // �� ������ �ƽ�Ű �ڵ� ���� ũ�� -1 ��ȯ
    else return 0;                              // �� �� �� �����̹Ƿ� ���� ���ڿ�
/*     
    if (*pd == *ps) {
        if (*pd == '\0')
            return 0;
        pd++;
        ps++;
    }
    else if (*pd > *ps)
        return 1;
    else
        return -1;
 */
}