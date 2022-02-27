#include<stdio.h>

void main()
{
	int a;
	float b;
	double c;
	char d;
	
//	sizeof evaluates the size of a variable
	printf("Size of int: %ld bytes\n",sizeof(a));
	printf("Size of float: %ld bytes\n",sizeof(b));
	printf("Size of double: %ld bytes\n",sizeof(c));
	printf("Size of char: %ld bytes\n",sizeof(d));
	
	getch();
}
