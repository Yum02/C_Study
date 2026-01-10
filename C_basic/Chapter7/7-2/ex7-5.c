//discpription : 자기 자신을 호출하는 재귀호출 함수
#include<stdio.h>

void fluit(void);

int main(void)
{
		fluit();
		return 0;
}

void fluit(void)
{
		printf("apple\n");
		fluit(); //계속 apple만 출력됨
}