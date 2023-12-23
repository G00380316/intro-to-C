// Lab 4
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int integer1,test=2;

	printf("Enter an Integer: ");
	scanf("%i", &integer1);

	if (integer1 % test ==0)
	{
		printf("\nThe Integer is even");
	}
	else
	{
		printf("\nThe Integer is odd");
	}
	return 0;
}