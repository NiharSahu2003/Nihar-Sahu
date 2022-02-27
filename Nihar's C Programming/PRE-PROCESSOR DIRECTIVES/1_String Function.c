#include<stdio.h>
#include<string.h>

void main()
{
	char s1[30];
	char s2[30];
	gets(s1);
	gets(s2);
	
	printf("%ld\n",strlen(s1)); // ----> Find the length of the string
	printf("%ld\n",strlen(s2)); // ----> Find the length of the string
	printf("%s\n",strcat(s1,s2)); // ----> Join two strings
	printf("%ld\n",strcmp(s1,s2)); // ----> Compare two strings
	printf("%s\n",strlwr(s1)); // ----> Converts strings two lowercase
	printf("%s\n",strupr(s1)); // ----> Converts strings two uppercase
	printf("%s\n",strcpy(s1,s2)); // ----> Copy one strings to other
	
	getch();
}
