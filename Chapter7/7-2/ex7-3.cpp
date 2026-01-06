#include<stdio.h>

void print_char(char ch, int count);

int main(void)
{
	print_char('@', 5);
	return 0;
}

void print_char(char ch, int count) //매개변수는 있으나 반환형이 없음
{
	int i;

	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
	return;//반환값이 없으므로 생략 가능
}