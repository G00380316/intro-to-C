// Lab 9
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	float  salary , comission;
	int sales;
	
		printf("Enter sales in pounds (-1 to end) :  ");
		scanf("%i", &sales);
		
		while (sales!=-1)
		{
			comission = sales * 0.09;
			if (comission > 800)
			{
				comission = 800;
			}
			salary = 200 + comission;
			printf("\n\nSalary is: %2.f", salary);
        
			printf("\n\nEnter sales in pounds (-1 to end) :  ");
			scanf("%i", &sales);
		}
	
	return 0;
}