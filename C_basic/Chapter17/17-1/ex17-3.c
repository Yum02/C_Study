#include<stdio.h>

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int id;
	double grade;
};

int main(void)
{
	struct student yuni;
	yuni.pf.age = 20;
	yuni.pf.height = 165.5;
	yuni.id = 12345;
	yuni.grade = 88.5;

	printf("Age: %d\n", yuni.pf.age);
	printf("Height: %.1f\n", yuni.pf.height);
	printf("ID: %d\n", yuni.id);
	printf("Grade: %.1f\n", yuni.grade);

	return 0;
}