#include <stdio.h>

int main()
{
	printf("%d\n", 10); //%d is a format specifier for integers
	printf("%lf\n", 3.4); //%lf is a format specifier for double
	printf("%.1lf\n", 3.45); //%.1lf is a format specifier for double with 1 decimal place
	printf("%d Plus %d is %d\n", 10, 20, 10 + 20);

	return 0;
}