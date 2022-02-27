#include<stdio.h>

void main()
{
	int e = 20;
	switch(e)
	{
		case 10:
			printf("10");
			break;
		
		case 20:
		    printf("20");
			break;
		
		default://will be executed if e dosen't match any cases
		    printf("none of the above");
			break;
	}
	
	getch();
	
}
