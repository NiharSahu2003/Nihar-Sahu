#include<stdio.h>

struct student
{
	int regno;
	char sname[20];
	float avg;
};
int main()
{
	char *cptr;
	int *iptr;
	struct student* sptr;
	printf("Size of char* is: %d\n",sizeof(cptr));
	printf("Size of int* is: %d\n",sizeof(iptr));
	printf("Size of student* is: %d\n",sizeof(sptr));
	printf("%d\n",&cptr);
	
	return 0;
}
