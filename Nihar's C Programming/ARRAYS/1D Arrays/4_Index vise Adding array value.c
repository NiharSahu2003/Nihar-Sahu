#include<stdio.h>

int main()
{
	int a[5];
	int b[5];
	int c[5];
	
	int i;
	
	for(i=0; i<5; i++)
	{
		a[i] = i + 100;
	}
	printf("Values of Arrays A: \n");
	for(i=0; i<5; i++)
	{
		printf("%d ",a[i]);
	}
	
	for(i=0; i<5; i++)
	{
		b[i] = i + 200;
	}
	printf("\n\nValues of Arrays B: \n");
	for(i=0; i<5; i++)
	{
		printf("%d ",b[i]);
	}
	
	printf("\n\nValues of Arrays C:\n");
	for(i=0; i<5; i++)
	{
		c[i] = a[i] + b[i];
	}
	for(i=0; i<5; i++)
	{
		printf("%d ",c[i]);
	}
	
}
