// Lab 5
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int enumber;

	printf("Please enter one of the following Options: ");
	printf("\n1	Hill 16");
	printf("\n2	Hogan Stand");
	printf("\n3	DavinStand");
	printf("\n4	Cusack Stand");
	printf("\n\n0	Exit\n\n");
	scanf("%i",&enumber);

	
	
	switch (enumber)
	{
	case 1:
	printf("\n\nYou have a place in Hill 16\n\n");
	break;
	case 2:
	printf("\n\nYou have a place in the Hogan Stand\n\n");
	break;
	case 3:
	printf("\n\nYou have a place in the Daven Standn\n\n");
	break;
	case 4:
	printf("\n\nYou have a place in the Cusack stand\n\n");
	break;
	case 0:
	printf("\n\nthank you. Goodbye.\n\n");
	break;
	default: 
	break;
	}


	return 0;

}