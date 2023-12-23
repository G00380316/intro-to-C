// Lab 6
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	char ch;
  

	for (int count = 0; count < 4; count++)
	{
		printf("Enter character: ");
		scanf(" %c", &ch);

		printf("The ASCII value for %c is: %i", ch, ch);


		printf("\n\n");

	}
	
	

	return 0;

}