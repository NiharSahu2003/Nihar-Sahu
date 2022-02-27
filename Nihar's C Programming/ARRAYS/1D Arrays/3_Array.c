#include<stdio.h>

int main()
{
	int a[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		a[i] = i + 100;
		printf("%d ",a[i]); //This OR
	}
	
//	for(i=0;i<5;i++)
//	{
//		printf("%d ",a[i]); // OR This
//	}
}
