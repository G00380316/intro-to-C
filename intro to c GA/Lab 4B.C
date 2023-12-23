// Lab 4
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int grade;

	printf("Enter your grade? ");
	scanf("%i", &grade);
	if (grade>=40)
	{
		printf("\n\tStudent Passed\n\n");
	}
	else
	{
		printf("\n\tStudent Failed\n\n");
	}

	return 0;
}