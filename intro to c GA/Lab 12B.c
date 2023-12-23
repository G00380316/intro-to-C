// Lab 14
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>	

float computeArea(float rad);
float computeCircum(float circ);

int main()
{
	float radius,radius1,radius2,radius3,radius4;
	float area,area1,area2,area3,area4;
	float circum, circum1, circum2, circum3, circum4;
		 
	printf("Enter Raduis to calculate area of circle: ");
	scanf("%f", &radius);
	area = computeArea(radius);
	circum = computeCircum(radius);
	printf("\n");
	
	printf("Enter Raduis to calculate area of circle: ");
	scanf("%f", &radius1);
	area1 = computeArea(radius1);
	circum1 = computeCircum(radius1);
	printf("\n");
	
	printf("Enter Raduis to calculate area of circle: ");
	scanf("%f", &radius2);
	area2 = computeArea(radius2);
	circum2 = computeCircum(radius2);
	printf("\n");
	
	printf("Enter Raduis to calculate area of circle: ");
	scanf("%f", &radius3);
	area3 = computeArea(radius3);
	circum3 = computeCircum(radius3);
	printf("\n");
	
	printf("Enter Raduis to calculate area of circle: ");
	scanf("%f", &radius4);
	area4 = computeArea(radius4);
	circum4 = computeCircum(radius4);
	printf("\n");

	printf("Circle\traduis\tarea\tcircumference\n1\t%.2f\t%.2f\t%.2f\n2\t%.2f\t%.2f\t%.2f\n3\t%.2f\t%.2f\t%.2f\n4\t%.2f\t%.2f\t%.2f\n5\t%.2f\t%.2f\t%.2f\n", radius, area, circum, radius1, area1, circum1, radius2, area2, circum2, radius3, area3, circum3
		, radius4, area4, circum4);

	
}

float computeArea(float rad)
{
	float sqarea;
	sqarea = M_PI * pow(rad, 2);
	return sqarea;
}

float computeCircum(float circ)
{
	float circum;
	circum = 2 * M_PI * circ;
	return circum;
}
