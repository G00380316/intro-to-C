// Lab 9
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int hworked=0;
	float hrate=0, salary,otime,opay;
	
	
	while (hworked >= 0)
	{
		printf("Enter hours worked (-1 to end) : ");
		scanf("%i", &hworked);

		while (hworked != -1)
		{
			if (hworked > 40)
			{
				printf("Enter hourly rate of the worker (£ 00.00) :  ");
				scanf("%f", &hrate);
				otime = hworked - 40;
				opay = otime * hrate * 1.5;
				salary = 40  * hrate + opay;
				printf("\nSalary is %.2f", salary);
				printf("\n\n");
			}
			else
			{
				printf("Enter hourly rate of the worker (£ 00.00) :  ");
				scanf("%f", &hrate);
				salary = hworked * hrate;
				printf("\nSalary is %.2f", salary);
				printf("\n\n");

			}
			printf("Enter hours worked (-1 to end) : ");
			scanf("%i", &hworked);

		}
		

	}
	return 0;

}