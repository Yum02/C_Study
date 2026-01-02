//dicription : char 배열에 문자열 복사
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry";

	printf("fruit = %s\n", fruit);
	strcpy(fruit, "banana");
	printf("fruit = %s\n", fruit);

	return 0;
}