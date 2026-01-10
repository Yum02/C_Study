#include<stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i; //1, 3, 6, 10, 15, 21, 28, 36
		if(sum > 30)
		{
			break;
		}
	}
	printf("누적값 : %d\n", sum);
	printf("마지막 더한 값 : %d\n", i);
}