#include<stdio.h>
//Using Relational Operator
void main()
{
	int a = 10;
	int b = 20;
	
	if(b<a)
	{
		printf("a is greater than b");
	}
	else if(a==b)
	{
		printf("a is equal to b");
	}
	else
	{
		printf("b is greater than a");
	}
	
	getch();
}
