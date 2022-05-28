#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void)
{
	double max, mid, min;

	printf("실수값 3개 입력 : ");
	scanf("%lf%lf%lf", &max, &mid, &min);
	line_up(&max, &mid, &min);		// max, mid, min의 주소를 인수로 주고 함수 호출
	printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)		// 매개변수로 포인터 선언
{
	if (*maxp < *minp)
		swap(maxp, minp);		// maxp, minp 포인터를 인수로 주고 함수 호출
	if (*maxp < *midp)
		swap(maxp, midp);
	if (*midp < *minp)
		swap(midp, minp);
}