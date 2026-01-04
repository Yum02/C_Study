#include<stdio.h>
int main(void) {
	int a = 10;

	if (a >= 0) {
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a : %d", a);

	return 0;
}