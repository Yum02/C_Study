#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = fgetc(stdin);
		if (ch == EOF)
		{
			break;
		}
		fputc(ch, stdout);
	}

	return 0;
}