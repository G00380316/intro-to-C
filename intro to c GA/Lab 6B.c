// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	const float HILL = 15.00, DSTAND = 20.00, CSTAND = 35.50;
	float notickets;
	float tcost;
	char optstand;

	printf("\nNOTE: Only maximum of 8 tickets can be purchased in one transaction!!!");

	printf("\n\nEnter the number of tickets required: ");
	scanf("%f", &notickets);

	if (notickets<9)
	{
		printf("\n\nH     Hill 16 (price €15.00)");
		printf("\nD     Davin Stand (price €20.00)");
		printf("\nC     Cusack Stand (price €35.50)");
		printf("\n\nSelect ticket category (H, D or C ): ");
		scanf(" %c", &optstand);
		
		switch (optstand)
		{
		case 'H':
		case 'h':
			printf("\n\nTotal cost: ");
			tcost = notickets * HILL;
			printf("%.2f", tcost);
			printf("\n\n");
			break;
		case'D':
		case 'd':
			printf("\n\nTotal cost: ");
			tcost = notickets * DSTAND;
			printf("%.2f", tcost);
			printf("\n\n");
			break;
		case 'C':
		case 'c':
			printf("\n\nTotal cost: ");
			tcost = notickets * CSTAND;
			printf("%.2f", tcost);
			printf("\n\n");
			break;
		default:
			printf("\nIncorrect entry\n\n");
			break;
		}
	}
	else
	{
		printf("\n\nThe maximum number of tickets has exceeded, Please again...\n\n");
	}
	


	

	

	return 0;

}