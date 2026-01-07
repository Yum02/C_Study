#include<stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1); //처음 호출하므로 1을 인수로 줌
	return 0;
}

void fruit(int count)
{
	printf("apple\n", count);
	if (count == 3) return; //3번 호출될 때까지 재귀 호출
	fruit(count + 1); //재귀 호출 시 인수를 1 증가시킴
	printf("jam\n");
}