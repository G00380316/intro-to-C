// Lab 4
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int integer1,integer2;

	printf("Enter two integers(whole numbers)!!!");
	printf("\n\nFirst Integer= ");
	scanf("%i", &integer1);
    printf("\n\nSecond Integer= ");
	scanf("%i", &integer2);

	if (integer1 == integer2)
	{
		printf("The numbers are equal");
	}
	else
	{
		printf("The numbers are not equal");
	}
	return 0;
}