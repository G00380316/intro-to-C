// Lab 7
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int counter = 10;

	printf("The numbers from 10 to 1 are: \n\n");
	do
	{
		printf("%d ", counter);
		counter--;	
	} while (counter>0);

	printf("\n\n");

	return 0;

}