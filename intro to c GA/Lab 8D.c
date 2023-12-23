// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int factorial=1 ;

    printf("The first ten factorial numbers is: ");
	
	printf("N		N!\n\n");

	for (int number = 1; number < 11; number++)
	{
		factorial = number * factorial;
		printf("%i		%i\n", number, factorial);
	

	}
		

	printf("\n\n");

	return 0;

}