#include <stdio.h>

int main(void)
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1]; //pa를 배열명처럼 사용

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]); //포인터로 모든 배열 요소 출력
	}

	return 0;
}