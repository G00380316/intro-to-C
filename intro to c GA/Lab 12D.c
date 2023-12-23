// Lab 12
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float hypotenus(float opp, float adj);

int main()
{
	float opp,adj,hypo;
	int i = 0;
	int count = 0;

	while (i < 3)
	{
		count++;
		printf("Enter value of side 1 of Triangle %i:\n",count);
		scanf("%f", &opp);
		printf("\n");
		printf("Enter value of side 2 of Triangle %i:\n",count);
		scanf("%f", &adj);
		printf("\n");

		hypo = hypotenus(opp, adj);
		printf("The hypothenuse of the triangle with sides %.2f and %.2f is %.2f\n", opp, adj, hypo);
		printf("\n");
		i++;
	}
	
}

float hypotenus(float opp, float adj)
{
	float hypo;
	hypo = sqrt(pow(opp, 2) + pow(adj, 2));
	return hypo;
}