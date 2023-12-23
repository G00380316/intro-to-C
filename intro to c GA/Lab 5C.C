// Lab 5
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	char grade;

	printf("Enter your grade (From A-E): ");
	scanf("%c", &grade);

	if (grade == 'A' || grade == 'a')
	{
		printf("\nExcellent\n\n");
	}

	if (grade == 'B' || grade == 'b')
	{
		printf("\nGood\n\n");
	}

	if (grade == 'C' || grade == 'c')
	{
		printf("\nFair\n\n");
	}

	if (grade == 'D' || grade == 'd')
	{
		printf("\nPoor\n\n");
	}

	if (grade == 'E' || grade == 'e')
	{
		printf("\nFailure\n\n");
	}


	return 0;

}