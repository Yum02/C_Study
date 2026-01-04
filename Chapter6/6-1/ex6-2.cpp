#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;

	for (i = 0; i<3; i++) //i는 0으로 초기화 후, 3보다 작은 동안 하나씩 증가(i++)
	{
		a = a * 2;
	}
	printf("a = %d\n", a);

	return 0;
}