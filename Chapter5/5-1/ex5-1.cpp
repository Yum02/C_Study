#include<stdio.h>
int main(void) {
	int a = 20;
	int b = 0;

	if (a > 10) {
		b = a; 
		//a는 10보다 크다는 조건문에 참이므로 b에 a의 값 20이 대입됨
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}