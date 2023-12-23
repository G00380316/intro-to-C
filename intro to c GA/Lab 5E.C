// Lab 5
// Enoch Abiodun
// 29/01/2020


#include <stdio.h>

int main()
{
	char echaracter;

	printf("Enter a character to be read: ");
	scanf("%c", &echaracter);

	switch (echaracter)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
	printf("\nIt is a vowel\n\n");
	break;

	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
    printf("\nIt is a operator\n\n");
	break;

	default: 
		printf("\nIt is something else!!!\n\n ");
	break;
	}


	return 0;

}