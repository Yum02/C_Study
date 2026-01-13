#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}

	return 0;
}