#include<stdio.h>

int add(int a,int b); //function decleration
int main()
{
	int a=10,b=20;
	int c=add(10,20); //function call
	int d=add(20,30); //function call
	int e=add(30,50); //function call
	printf("Addition:%d\n",c);
	printf("Addition:%d\n",d);
	printf("Addition:%d\n",e);
	getch();
}
int add(int a, int b) //function definition
{
	int c;
	c=a+b;
	return c;
}
