// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	float enteuro, camount; 
	int eoption;
	const float cdollar = 1.2264, csterling = 0.6882, cyen = 136.45;
	
	printf("Enter euros to convert: ");
	scanf("%f", &enteuro);

	printf("\n\n 1	Dollars");
	printf("\n 2	Sterling ");
	printf("\n 3	Yen\n");

	printf("Select conversion type: ");
	scanf("%i", &eoption);
		
		switch (eoption)
		{
		case 1:
			printf("\n\nConverted amount: ");
			camount = enteuro * cdollar;
			printf("%.2f", camount);
			printf("\n\n");
			break;
		case 2:
			printf("\n\nTotal cost: ");
			camount = enteuro * csterling;
			printf("%.2f", camount);
			printf("\n\n");
			break;
		case 3:
			printf("\n\nTotal cost: ");
			camount = enteuro * 136.45;
			printf("%.2f", camount);
			printf("\n\n");
			break;
		default:
			printf("\n\nIncorrect entry\n\n");
			break;
		}
	return 0;

}