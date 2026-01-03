#include<stdio.h>

int main(void)
{
	int a = 10, b = 20, res;
	
	res = (a > b) ? a : b; //a와 b 중 큰 값을 res에 대입
	printf("큰 값은 %d입니다.\n", res);
	
	return 0;
}