#include<stdio.h>
#include<stdbool.h>

void main()
{
	bool MachineIsWorking = true;
	
	printf("Since this machine is working,\n its value is %d\n",MachineIsWorking);
	
	MachineIsWorking = false;
	
	printf("The machine has stopped operating. \n Now its value is %d\n",MachineIsWorking);
	
	getch();
}
