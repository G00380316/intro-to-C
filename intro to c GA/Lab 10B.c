// Lab 10
// Enoch Abiodun
// 19/02/2020


#include <stdio.h>

int main()
{
	int width,cwidth = 6;
	
	printf("Enter width: ");
	scanf("%i", &width);
	
	printf("\n");
	for (int row = 1; row <= width; row++)
	{
	
		for (int col = 1; col <= row; col++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	printf("\n\n\n");

	for (int row = 1; row <= width; row++)
	{
		
		for (int col = 1; col <= cwidth; col++)
		{
			printf("*");
		}
		cwidth--;
		printf("\n");

	}
	printf("\n\n");
	
	
	return 0;

}