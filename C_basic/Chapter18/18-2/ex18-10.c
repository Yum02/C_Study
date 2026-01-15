#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	fgets(name, sizeof(name), fp);

	printf("Age: %d, name : %s\n", age, name);
	fclose(fp);

	return 0;
}