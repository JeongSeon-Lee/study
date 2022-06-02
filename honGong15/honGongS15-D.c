#include <stdio.h>
#include <string.h>

void swap(char *type, void *a, void *b);

int main(void) {
    int w1, w2;
    double h1, h2;

    printf("ù ��° ����� ���̿� Ű �Է� : ");
    scanf("%d %lf", &w1, &h1);
    printf("�� ��° ����� ���̿� Ű �Է� : ");
    scanf("%d %lf", &w2, &h2);

    swap("int", &w1, &w2);
    swap("double", &h1, &h2);

    printf("ù ��° ����� ���̿� Ű : %d, %.1lf\n", w1, h1);
    printf("�� ��° ����� ���̿� Ű : %d, %.1lf\n", w2, h2);

    return 0;
}

/* void swap(char *type, void *a, void *b) {
    void *temp;

    if(type == "int") {
        *(int *)temp = *(int *)a;
        *(int *)a = *(int *)b;
        *(int *)b = *(int *)temp;
    }
    if(type == "double") {
        *(double *)temp = *(double *)a;
        *(double *)a = *(double *)b;
        *(double *)b = *(double *)temp;
    }
}
 */
void swap(char *type, void *a, void *b) {
    int temp;
    double dtemp;

    if(type == "int") {
        temp = *(int *)a;
        *(int *)a = *(int *)b;
        *(int *)b = temp;
     }
     if(type == "double") {
        dtemp = *(double *)a;
        *(double *)a = *(double *)b;
        *(double *)b = dtemp;
     }

}