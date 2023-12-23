// Lab 4
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int hwage,hworked,owork,gwage;

	printf("Enter hourly wage: ");
	scanf("%i", &hwage);
	printf("Enter hours worked: ");
	scanf("%i", &hworked);

	owork = hworked - 40;

	if (hworked<=40)
	{
		
		gwage = hworked * hwage;

	}
	else
	{

		gwage = 40 * hwage + owork * hwage * 2;
	
	}
	printf("\nThe gross wage of the user is %i", gwage);
	return 0;
}