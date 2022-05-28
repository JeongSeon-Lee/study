# include <stdio.h>

int main(void) {
    int ary[3] = { 10, 20, 30 };
    int *pa = ary;
    int i;

    printf("배열명 크기 : %d\n", sizeof(ary));
    printf("포인터 크기 : %d\n", sizeof(pa));

    printf("배열의 값 : ");
    for (i = 0; i < 3; i++) {
        printf("%d ", *(pa++));     // *(ary++) 안됨. 배열명은 주소 상수이기 때문에 값을 바꿀 수 없음.
    }                               // 연산자 우선순위에 따라 pa++이 먼저 수행. 그러나 후위형이므로 다음 연산인 간접 참조 연산 수행 시에는 증가되기 이전의 값 사용.

    return 0;
}