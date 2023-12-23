// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	int sum = 0, count = 10; 
	
	printf("The sum of the even integers from 10 to 20 inclusive\n\n");
	
	do
	{
		sum = sum + count;
		count += 2;
	} while (count < 21);

	printf("%i", sum);
	printf("\n\n");
		
	return 0;

}