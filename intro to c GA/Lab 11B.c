// Lab 11
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


float rad1,rad2,rad3,rad4;
float volume,volume1,volume2,volume3;
float s_area,s_area1,s_area2,s_area3;

int main()
{
	printf("\nEnter the raduis of the sphere 1: ");
	scanf("%f", &rad1);
	printf("\nEnter the raduis of the sphere 2: ");
	scanf("%f", &rad2);
    printf("\nEnter the raduis of the sphere 3: ");
	scanf("%f", &rad3);
    printf("\nEnter the raduis of the sphere 4: ");
	scanf("%f", &rad4);

	volume = ((float)4/3) * M_PI * pow(rad1,3);
	volume1 = ((float)4/3) * M_PI * pow(rad2,3);
	volume2 = ((float)4/3) * M_PI * pow(rad3,3);
	volume3 = ((float)4/3) * M_PI * pow(rad4,3);

	s_area = 4 * M_PI  * pow(rad1,2);
	s_area1 = 4 * M_PI  * pow(rad2,2);
	s_area2 = 4 * M_PI  * pow(rad3,2);
	s_area3 = 4 * M_PI  * pow(rad4,2);

	printf("\n\nSphere\tRadius\tSurface Area\tVolume\n1\t%.2f\t%.2f\t\t%.2f\n2\t%.2f\t%.2f\t\t%.2f\n3\t%.2f\t%.2f\t\t%.2f\n4\t%.2f\t%.2f\t\t%.2f",rad1,s_area,volume,rad2,s_area1,volume1,rad3,s_area2,volume2,rad4,s_area3,volume3 );

	return 0;
}
