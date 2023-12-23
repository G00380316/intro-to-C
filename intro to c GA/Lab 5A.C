// Lab 5
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	float tempc,tempf;
	const float MULTIPLIER = 1.8, MULTIPLIER1 =32;

	printf("Enter the tempature in Celsius: ");
	scanf("%f", &tempc);
	
	printf("The conversion from Celsius to Fahrenheit:  ");
	tempf = MULTIPLIER * tempc + MULTIPLIER1;
	printf("%f", tempf);
	return 0;
}