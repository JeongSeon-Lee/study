#include <stdio.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision robot);    // ��ȯ�ϴ� �ڷ����� ����ü��, �Ű������� ����ü��

int main(void) {
    struct vision robot;

    printf("�÷� �Է� : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("�ٲ� �÷� : %.1lf, %.1lf\n", robot.left, robot.right);

    return 0;
}

struct vision exchange(struct vision robot) {
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}