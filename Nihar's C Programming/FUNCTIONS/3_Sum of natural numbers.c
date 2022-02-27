#include<stdio.h>

int additionNum(int n);
int main()
{
	int num;
	printf("Enter a positive interger: ");
	scanf("%d",&num);
	printf("Sum = %d",additionNum(num));
	return 0;
}

int additionNum(int n)
{
	if(n != 0)
	   return n + additionNum(n - 1);
	else
	   return n;
}
