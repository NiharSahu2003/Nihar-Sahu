#include<stdio.h>
#include<string.h>

struct Person
{
	int id;
	char name[20];
	int salary;
};

void main()
{
	struct Person p1;
	p1.id = 1;
	strcpy(p1.name,"Sam");
	p1.salary=1000;
	printf("id of person is %d \n",p1.id);
	printf("name of person is %s \n",p1.name);
	printf("salary of person id %d \n",p1.salary);
	
	getch();
}
