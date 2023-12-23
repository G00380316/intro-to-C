// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int count=0,enumber;

	printf("Enter number to determine if its in the range between 1 and 10: ");
	

	while (count<=7)
	{
		scanf("%i", &enumber);
		
		if (0<enumber && enumber<10)
		{
			printf("\n\nIn range\n\n");
		}
		else
		{
			printf("\n\nOut of range\n\n");
		}
		count++;
		enumber = 0;
	}
	

	return 0;

}