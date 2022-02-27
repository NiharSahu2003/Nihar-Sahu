#include<stdio.h>

int max(int num1, int num2);
int main()
{
	int a = 100;
	int b = 200;
	int result;
	result = max(a,b);
	printf("Max value is : %d\n", result);
//	return 0;
}

int max(int num1, int num2)
{
	int result;
	if(num1 > num2)
	printf("result = num1\n");
	else
	printf("result = num2\n");
	return result;
}
