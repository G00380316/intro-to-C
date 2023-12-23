// Lab 10
// Enoch Abiodun
// 19/02/2020


#include <stdio.h>

int main()
{
	char select;
	int width;
	int cwidth=0;
	int cwidth1 = 6;
	
	printf("\nA		Square");
	printf("\nB		Triangle Increase");
	printf("\nC		Triangle Decrease");

	printf("\n\nPlease choose: ");
	scanf(" %c", &select);

	switch (select)
	{
	case'A':
	case'a':
	printf("\nEnter width: ");
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
	break;
	case'B':
	case'b':
		printf("\n\n");
		for (int row = 1; row <= 6; row++)
		{
			cwidth++;
			for (int col = 1; col <= cwidth; col++)
			{
				printf("*");
			}
			printf("\n");

		}
		printf("\n\n");
	break;
	case'C':
	case'c':
		printf("\n\n");
		for (int row = 1; row <= 6; row++)
		{
			for (int col = 1; col <= cwidth1; col++)
			{
				printf("*");
			}
			cwidth1--;
			printf("\n");

		}
		printf("\n\n");
		break;
	default:
		break;
	}
	return 0;

}