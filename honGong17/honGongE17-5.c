#include <stdio.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision robot);    // 반환하는 자료형이 구조체형, 매개변수도 구조체형

int main(void) {
    struct vision robot;

    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf, %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot) {
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}