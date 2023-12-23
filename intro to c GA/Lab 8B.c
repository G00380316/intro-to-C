// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	
	
	int product = 1;
	printf("The product of the odd integers from 1 to 15\n\n");

	for (int count = 1; count < 16; count+=2)
	{
		product = product * count;
	}
	printf("%i", product);
	printf("\n\n");
		
	return 0;

}