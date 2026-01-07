#include<stdio.h>

int main(void)
{
	int a;
	double b;
	char c;

	printf("int형의 주소 : %u\n", &a); //&는 주소 연산자, %u를 사용한 이유는 주소값이 음수가 될 수 없기 때문에 편의상 사용
	printf("double형의 주소 : %u\n", &b);
	printf("char형의 주소 : %u\n", &c);

	return 0;
}