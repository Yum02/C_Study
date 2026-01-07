#include<stdio.h>

int main(void)
{
	int a;
	int* pa; //int형 포인터 변수 선언

	pa = &a; //포인터 변수에 a의 주소값 대입
	// pa -> a
	*pa = 10; //포인터 변수를 통해 a에 값 대입

	printf("포인터로 a값 출력 : %d\n", *pa); //포인터 변수를 통해 a값 출력
	printf("변수명으로 a값 출력 : %d\n", a); //변수명을 통해 a값 출력

	return 0;
}