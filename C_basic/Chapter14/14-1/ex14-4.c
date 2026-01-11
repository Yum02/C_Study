#include<stdio.h>

int main(void)
{
	int score[2][3][4] = {
		{ { 71,72,73,74 }, { 75,76,77,78 }, { 79,80,81,82 } },
		{ { 83,84,85,86 }, { 87,88,89,90 }, { 91,92,93,94 } }
	};
	
	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d¹Ý Á¡¼ö...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}