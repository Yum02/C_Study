#include<stdio.h>

enum season { SPRING, SUMMER, FALL, WINTER };

int main(void)
{
	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING: pc = "warm"; break;
	case SUMMER: pc = "hot"; break;
	case FALL: pc = "cool"; break;
	case WINTER: pc = "cold"; break;
	}

	printf("°èÀý ³¯¾¾ => %s\n", pc);

	return 0;
}