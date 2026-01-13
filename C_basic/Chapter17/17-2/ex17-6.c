#include<stdio.h>

struct score
{
	int kor, eng, math;
};

int main(void)
{
	struct score yuni = { 90, 85, 88 };
	struct score* ps = &yuni;

	printf("Korean: %d\n", (*ps).kor);
	printf("English: %d\n", ps->eng);
	printf("Math: %d\n", ps->math);

	return 0;
}