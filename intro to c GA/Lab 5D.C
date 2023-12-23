// Lab 5
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	char grade;

	printf("Enter your grade (From A-E): ");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
	case 'a':
	printf("\nExcellent\n\n");
	break;

	case 'B':
	case 'b':
	printf("\nGood\n\n");
	break;

	case 'C':
	case 'c':
	printf("\nFair\n\n");
	break;

	case 'D':
	case 'd':
	printf("\nPoor\n\n");
	break;

	case 'E':
	case 'e':
	printf("\nFailure\n\n");
	break;
	
	default:
	break;
	}
	

	return 0;

}