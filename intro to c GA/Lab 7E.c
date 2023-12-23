// Lab 7
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int enumber,counter = 0;
	
	printf("Enter a number from 1 to 100: ");
	scanf("%i",&enumber);
	printf("\n\n");
	
	while (counter < 6)
	{
		printf("%i ", enumber);
		enumber++;
		counter++;
	}
	printf("\n\n");
	return 0;

}