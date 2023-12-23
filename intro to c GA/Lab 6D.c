// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int entsales, camount; 
	int eoption;

	printf("Enter total sales: ");
	scanf("%i", &entsales);
		
	switch (entsales/10000)
		{
		case 0:
		case 1:
			printf("\n\nCommision: ");
			camount = entsales * 0.15 ;
			printf("%i", camount);
			printf("\n\n");
			break;
		case 2:
		case 3:
		case 4:
			printf("\n\nCommision: ");
			camount = entsales * 0.20 ;
			printf("%i", camount);
			printf("\n\n");
			break;
		case 5:
			printf("\n\nCommision: ");
			camount = entsales * 0.25 ;
			printf("%i", camount);
			printf("\n\n");
			break;
		default:
			printf("\n\nCommision: ");
			camount = entsales * 0.25 ;
			printf("%i", camount);
			printf("\n\n");
			break;
		}
		
	return 0;

}