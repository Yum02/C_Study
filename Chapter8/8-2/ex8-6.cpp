#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //문자열 관련 함수 헤더 파일

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	gets_s(str);
	puts("입력된 문자열 : ");
	puts(str);

	return 0;
}