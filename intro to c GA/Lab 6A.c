// Lab 5
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int eage;

	printf("Enter your age: ");
	scanf("%i",&eage);

	switch (eage/5)
	{
	case 0:
	case 1:
	printf("\n\nBased on your Age..\n");
	printf("Under 10:		£3.50\n\n");
	break;
	case 2:
	case 3:
	printf("\n\nBased on your Age..\n");
	printf("10-19:			£5.00\n\n");
	break;
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	printf("\n\nBased on your Age..\n");
	printf("20-64:			£7.50\n\n");
	break;
	default: 
	printf("\n\nBased on your Age..\n");
	printf("Age 65 and older:	£4.50\n\n");
	break;
	}


	return 0;

}