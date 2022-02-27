#include<stdio.h>
#include<stdbool.h> //this library is loaded for BOOLEAN type

void main()
{
	int a = 10;
	float b = 10.45;
	double c = 100.995;
	char d = 'n';
	bool e = true;
	bool f = false;
	
	printf("This is an INTEGER %d\n",a);
	printf("This is an FLOATING POINT %f\n",b);
	printf("This is an DOUBLE %lf\n",c);
	printf("This is an CHARACTER %c\n",d);
	printf("This is an BOOLEAN type %d\n",e);
	printf("This is an BOOLEAN type %d\n",f);
	
	getch();
}
