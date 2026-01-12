#pragma warning(disable:4996)
#include<stdio.h>

void func(int(*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
	int sel;

	printf("01. 두 정수의 합 : \n");
	printf("02. 두 정수의 곱 : \n");
	printf("03. 두 정수의 큰 값 : \n");
	printf("원하는 작업 선택(1~3) : ");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;
	}

	return 0;
}

void func(int(*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d %d", &a, &b);
	res = fp(a, b);
	printf("결과 값은 %d 입니다.\n", res);
}

int sum(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

