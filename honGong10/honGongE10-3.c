# include <stdio.h>

int main(void) {
    int ary[3] = { 10, 20, 30 };
    int *pa = ary;
    int i;

    printf("�迭�� ũ�� : %d\n", sizeof(ary));
    printf("������ ũ�� : %d\n", sizeof(pa));

    printf("�迭�� �� : ");
    for (i = 0; i < 3; i++) {
        printf("%d ", *(pa++));     // *(ary++) �ȵ�. �迭���� �ּ� ����̱� ������ ���� �ٲ� �� ����.
    }                               // ������ �켱������ ���� pa++�� ���� ����. �׷��� �������̹Ƿ� ���� ������ ���� ���� ���� ���� �ÿ��� �����Ǳ� ������ �� ���.

    return 0;
}