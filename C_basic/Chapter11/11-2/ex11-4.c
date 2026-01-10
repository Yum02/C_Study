#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	char ch;
	int i;

// 문자 입력하고 화면 출력 과정을 3번 반복
	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}