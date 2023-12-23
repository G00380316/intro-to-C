// Lab 3
// Enoch Abiodun
// 22/01/2020


#include <stdio.h>

int main()
{
	int sub, answer;
	printf("Evaluate the following polynomial!");
	printf("\n**********************");
	printf("\nPlease enter a number: ");
	scanf("%i", &sub);
	answer = 4 * sub * sub - 1 * sub + 6;
	printf("\n**********************");
	printf("\nThe answer for x = %i is %i", sub, answer);
	printf("\n**********************");
	return 0;
}