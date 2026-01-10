//주석 전 a의 실행결과는 10임. 이유는 매개변수 a의 메모리 주소에 저장된 값을 main함수로 넘겨주지 않았기 때문
#include<stdio.h>

//void add_ten(int a);
int add_ten(int a);

int main(void)
{
	int a = 10;

	/*add_ten(a);*/
	a = add_ten(a);
	printf("a : %d\n", a);

	return 0;
}

//void add_ten(int a)
int add_ten(int a)
{
	a = a + 10;

	return a;
}