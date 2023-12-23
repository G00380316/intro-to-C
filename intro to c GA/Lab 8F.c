// Lab 8
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int numberof;
	char symbol;

    printf("Enter a number and a symbol: ");
	scanf("%i%c",&numberof,&symbol);
	
	printf("\n\n");
	
	do
	{
		printf("%c", symbol);
		numberof--;
	} while (numberof>0);
	
	printf("\n\n");

	return 0;

}