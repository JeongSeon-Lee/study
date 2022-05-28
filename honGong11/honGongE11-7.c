#include <stdio.h>

int main(void) {
    int num, grade;

    printf("학번 입력 : ");
    scanf("%d", &num);          // 문자열 "315"는 정수로 변환되어 num에 저장, 버퍼에 개행 문자 남음
    getchar();                  // 버퍼에 남아 있던 개행 문자 입력받음, 사용은 하지 않음
    printf("학점 입력 : ");
    grade = getchar();          // 버퍼에 남은 개행 문자를 제거하지 않았다면, grade에 개행문자가 입력됨
    printf("학번 : %d, 학점 : %c", num, grade);
    
    return 0;
}