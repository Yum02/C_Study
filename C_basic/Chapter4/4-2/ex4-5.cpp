#include<stdio.h>

int main(void)
{
	//형 변환 연산자 예제
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); 
	//int형을 기본으로 사용하는 이유는 double형은 저장공간이 더 크며 연손 속도가 느리고, 오차가 발생함.
	//따라서 실수 연산이 필요할 때만 형 변환을 함.
	printf("a = %d, b = %d\n", a, b);
	printf("a / b = %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf = %d\n", res, a);

	return 0;
}