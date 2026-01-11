#include<stdio.h>

int main(void)
{
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "cat";
	pary[2] = "tiger";
	pary[3] = "lion";
	pary[4] = "elephant";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}

	return 0;
}