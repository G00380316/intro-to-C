// Lab 7
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int sum = 0;

	for (int counter = 1; counter < 11; counter++)
	{
		sum = sum + counter;
	}
	printf("The sum of the integers from 1 to 10 is ");
	printf("%i",sum);
	printf("\n\n");
	return 0;

}