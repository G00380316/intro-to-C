// Lab 10
// Enoch Abiodun
// 19/02/2020


#include <stdio.h>

int main()
{
	int width;
	
	printf("Enter width: ");
	scanf("%i", &width);
	
	for (int row = 1; row <= width; row++)
	{
		for (int col = 1; col <= width; col++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	
	
	return 0;

}