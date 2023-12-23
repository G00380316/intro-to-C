// Lab 2 
// Enoch Abiodun
// 21/01/2020


#include <stdio.h>

int  main()
{
	int value1, value2, sum;

	printf("Enter the value1");
	scanf("%i", &value1);
	printf("Enter the value2");
	scanf("%i", &value2);
	sum = value1 + value2;
	printf("The sum of % i and %i  is % i\n", value1, value2, sum);
	return 0;
}
