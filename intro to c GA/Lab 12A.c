// Lab 12
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>	

float computeArea(float rad);

int main()
{
	float radius;
	float area;

	printf("Enter Raduis to calculate area of circle: ");
	scanf("%f", &radius);
	area = computeArea(radius);
	printf("\n\n");
	printf("%.2f", area);
	printf("\n\n");
}

float computeArea(float rad)
{
	float sqarea;
	sqarea = M_PI * pow(rad, 2);
	return sqarea;
}