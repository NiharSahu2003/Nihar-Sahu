#include<stdio.h>
#include<math.h>

void main()
{
	float a = 100;
	float b = 2;
	float c = 30;
	float d = 230.47;
	double e = 200.347;
	
	printf("sqrt(si): %f\n",sqrt(a)); // ----> Square root
	printf("pow(li,3): %f\n",pow(b,3)); // ----> Power
	printf("sin(d): %f\n",sin(c));
	printf("cos(d): %f\n",cos(c));
	printf("abs(i): %f\n",abs(d)); // ----> Mod
	printf("floor(d): %ld\n",floor(e));
	printf("sqrt(f): %f\n",sqrt(d));
	printf("pow(d,2): %f\n",pow(d,2));
	
	getch();
}
