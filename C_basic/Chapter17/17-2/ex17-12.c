#include<stdio.h>

struct student
{
	int num;
	double grade;
};
typedef struct student STUDENT;
void print_data(STUDENT* ps);

int main(void)
{
	STUDENT s1 = { 1001, 89.5 };
	print_data(&s1);
	return 0;
}

void print_data(STUDENT* ps)
{
	printf("number : %d\n", ps->num);
	printf("grade  : %.1lf\n", ps->grade);
}