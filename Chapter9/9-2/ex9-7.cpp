// 만약 포인터가 없으면 에러 발생
#include<stdio.h>

void swap(int* pa, int* pb);

int main(void)
{
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;

	temp = *pa; //temp에 pa가 가리키는 변수 값 저장
	*pa = *pb; //pa가 가리키는 변수에 pb가 가리키는 변수 값 저장
	*pb = temp; //pb가 가리키는 변수에 temp값 저장
}