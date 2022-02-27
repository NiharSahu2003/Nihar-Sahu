#include<stdio.h>

int main()
{
	int a[5] = {1,2,3,4,5};  //array initialization
	int *p;
	int i;
	p=a;
	
	printf("Printing the array element using pointer");
	for(i=0;i<5;i++)
	{
		printf("\n%x",*p);
		p++;
	}
	return 0;
}
