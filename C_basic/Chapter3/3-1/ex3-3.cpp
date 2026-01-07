// discription: unsigned를 잘못쓴 예제
#include<stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);

	return 0;
}