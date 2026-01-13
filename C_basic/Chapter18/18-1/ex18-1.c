#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	FILE* fp;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("File can`t open.\n");
		return 1;
	}

	printf("File open.\n");
	return 0;
}