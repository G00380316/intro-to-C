// Lab 2 
// Enoch Abiodun
// 21/01/2020


#include <stdio.h>

int  main()
{
	int age, dateOfBirth;
	int const CURRENTYEAR= 2020;
	printf("Enter the age you will be on the 31st of December: ");
	scanf("%i", &age);
	dateOfBirth = CURRENTYEAR- age;
	printf("Your date of birth is %i \n", dateOfBirth);
	return 0;
}
