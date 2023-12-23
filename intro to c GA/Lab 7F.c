// Lab 7
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int firstc=1,secondc=10,thirdc=100,fourthc=1000,counter = 0;
	
	printf("N\t10*N\t100*N\t1000*N");
	printf("\n\n");
	
	
	while (counter < 5)
	{
		printf("%d	%i	%i	%i\n",firstc,secondc,thirdc,fourthc);
		
		fourthc = fourthc + 1000;
		thirdc = thirdc + 100;
		secondc = secondc + 10;
		firstc++;
		counter++;
	}
	printf("\n\n");
	return 0;

}