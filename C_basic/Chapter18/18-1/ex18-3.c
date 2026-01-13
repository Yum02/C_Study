#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	FILE* fp;
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w");
	if (fp = NULL)
	{
		printf("File open error!\n");
		return 1;
	}

	i = 0;
	while (str[i] != '\n')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}