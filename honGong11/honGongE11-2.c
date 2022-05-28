#include <stdio.h>

int main(void) {
    int a, b;
    char ch1, ch2;

    /* %c는 제어 문자, 화이트 스페이스도 입력됨 */
    printf("문자 두 개 입력 : \n");
    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2);     // 제어 문자를 %c로 출력하면 제어 문자의 기능을 수행
    printf("%d, %d\n", ch1, ch2);     // 눈에 잘 보이게 아스키 코드 값으로 출력

    /* %d, %lf, %s에서 화이트 스페이스는 데이터 구분 용도 */
    printf("정수 두 개 입력 : \n");
    scanf("%d%d", &a, &b);
    printf("%d, %d\n", a, b);

    printf("정수 두 개 입력 : \n");
    scanf("%d %d", &a, &b);
    printf("%d, %d\n", a, b);

    printf("문자 두 개 입력 : \n");
    scanf(" %c %c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2);

    return 0;
}