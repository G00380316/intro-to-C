// Lab 5
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	float volume,radius;
	const float PI = 3.14;

	printf("Enter the radius of a Sphere: ");
	scanf("%f", &radius);

	volume = 1.33 * PI * radius * radius * radius;
	printf("\nThe volume of the Sphere is %.2f", volume);
	
	return 0;

}