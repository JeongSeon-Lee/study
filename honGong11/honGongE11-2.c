#include <stdio.h>

int main(void) {
    int a, b;
    char ch1, ch2;

    /* %c�� ���� ����, ȭ��Ʈ �����̽��� �Էµ� */
    printf("���� �� �� �Է� : \n");
    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2);     // ���� ���ڸ� %c�� ����ϸ� ���� ������ ����� ����
    printf("%d, %d\n", ch1, ch2);     // ���� �� ���̰� �ƽ�Ű �ڵ� ������ ���

    /* %d, %lf, %s���� ȭ��Ʈ �����̽��� ������ ���� �뵵 */
    printf("���� �� �� �Է� : \n");
    scanf("%d%d", &a, &b);
    printf("%d, %d\n", a, b);

    printf("���� �� �� �Է� : \n");
    scanf("%d %d", &a, &b);
    printf("%d, %d\n", a, b);

    printf("���� �� �� �Է� : \n");
    scanf(" %c %c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2);

    return 0;
}