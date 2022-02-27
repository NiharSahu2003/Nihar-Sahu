#include<stdio.h>
#include<stdbool.h>

void main()
{
	
//	Logical Operators  && || !
	
	bool a = true;
	bool b = false;
	
	printf("true && false %d\n",a&&b);
	printf("false && true %d\n",b&&a);
	printf("true && true %d\n",a&&a);
	printf("false && false %d\n\n",b&&b);
	
	printf("true || false %d\n",a||b);
	printf("false || true %d\n",b||a);
	printf("false || false %d\n",b||b);
	printf("true || true %d\n\n",a||a);
	
	getch();
}
