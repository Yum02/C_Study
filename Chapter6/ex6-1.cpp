#include <stdio.h>

int main(void)
{
	int a = 1;

	while (a < 10)
	{
		a = a * 2; 
	}
	//1 2 4 8 16
	printf("a = %d\n", a);

	return 0;
}