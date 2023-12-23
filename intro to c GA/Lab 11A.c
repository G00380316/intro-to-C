// Lab 11
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


float raduis,volume;

int main()
{
	printf("Enter the raduis of the sphere: ");
	scanf("%f", &raduis);

	volume = ((float)4/3) * M_PI * pow(raduis,3);

	printf("\n\nVolume of the square = %.2f\n\n", volume);

	return 0;
}
