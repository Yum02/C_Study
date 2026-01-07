//실행 안됨. 이유 : int형 포인터를 double형 포인터로 변환하여 역참조 시도
#include<stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
}