#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("�Ǽ��� 3�� �Է� : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);		// max, mid, min�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)		// �Ű������� ������ ����
{
	if (*maxp < *minp)
		swap(maxp, minp);		// maxp, minp �����͸� �μ��� �ְ� �Լ� ȣ��
	if (*maxp < *midp)
		swap(maxp, midp);
	if (*midp < *minp)
		swap(midp, minp);
}