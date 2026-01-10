#include<stdio.h>

int main(void)
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple"); // 주소값 출력
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1); // 주소값 출력
	printf("첫 번째 문자 : %c\n", *"apple"); // 'a' 출력
	printf("두 번째 문자 : %c\n", *("apple" + 1)); // 'p' 출력
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]); // 'p' 출력

	return 0;
}