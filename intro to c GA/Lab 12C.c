// Lab 12
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>	

void fillCharacter(int x, char c);

int main()
{
	int width;
	char c;
	
	printf("enter number and character to determine sides and charcter of squares\n");
	scanf("%i", &width);
	scanf("%c", &c);
	printf("\n");

	fillCharacter(width, c);
}

void fillCharacter(int x, char c)
{
	for (int cwidth = 0; cwidth < x; cwidth++)
	{
		for (int cwidth1 = 0; cwidth1 < x; cwidth1++)
		{
			printf("%c", c);
		}
		printf("\n");
	}
}