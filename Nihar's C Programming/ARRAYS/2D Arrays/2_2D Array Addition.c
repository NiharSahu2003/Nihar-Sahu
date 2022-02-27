#include<stdio.h>

int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	
	int i,j;
	
	int m=0;
	int n=9;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j] = m;
			m++;
		}
	}
	printf("\nValues of Array A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j] = n;
			n--;
		}
	}
	printf("\nValues of Array B:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nAddition of two Arrays is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
