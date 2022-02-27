#include<stdio.h>

void main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	
	if(a>b && a>c)
	{
		printf("a is the greatest");
	}
	else if(b>a && b>c)
	{
		printf("b is the greatest");
	}
	else
	{
		printf("c is the greatest");
	}
	getch();
}
