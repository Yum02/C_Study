#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == 1) break; //반환값이 -1이면 반복 종료
		printf("%d ", ch);
	}
	return 0;
}