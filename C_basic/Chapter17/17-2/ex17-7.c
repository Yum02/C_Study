#include<stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main(void)
{
	struct address list[5] = {
		{"Alice", 30, "123-4567", "123 Main St"},
		{"Bob", 25, "987-6543", "456 Oak St"},
		{"Charlie", 35, "555-1234", "789 Pine St"},
		{"Diana", 28, "444-5678", "321 Maple St"},
		{"Ethan", 40, "222-3333", "654 Cedar St"}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			list[i].name,
			list[i].age,
			list[i].tel,
			list[i].addr);
	}

	return 0;
}