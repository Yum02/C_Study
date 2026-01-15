#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	FILE* ifp, * ofp;
	char name[20];
	int kor, end, math;
	int total;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if(ifp == NULL)
	{
		printf("Input file open error!\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if(ofp == NULL)
	{
		printf("Output file open error!\n");
		return 1;
	}

	while (1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &end, &math);
		if(res == EOF)
		{
			break;
		}
		total = kor + end + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}