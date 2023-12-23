// Lab 9
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int vlength=0 , noparts=0;
	float alength;
	int sum=0 , min = 100,  max = 0;
	
	
	printf("Enter component length in mm (-1 to end): ");
	scanf("%i", &vlength);
	while (vlength!=-1)
	{
		noparts++;
		if (vlength < min)
		{
			min = vlength;
		}
		else if (vlength > max)
		{
			max = vlength;
		}
	    sum = sum + vlength;

		printf("Enter component length in mm (-1 to end): ");
		scanf("%i", &vlength);

	}
		
	printf("\n\nNo of parts tested: %i",noparts);

	alength = (sum / noparts);
	printf("\nAvg  length: %2.f",alength);
	
	printf("\nMax length: %i",max);

	printf("\nMin length: %i",min);
	


	
	return 0;
}