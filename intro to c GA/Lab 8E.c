// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int fnumber=1,number=1;

    printf("The first ten factorial numbers is: ");
	
	printf("N		N!\n\n");

	while (number<11)
	{
		fnumber = number * fnumber;
		printf("%i		%i\n", number, fnumber);

		number++;
	}
	
	printf("\n\n");

	return 0;

}