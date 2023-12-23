// Lab 3
// Enoch Abiodun
// 22/01/2020


#include <stdio.h>

int main()
{
	int a,b,c, answer;
	a = 8, b = 3, c = -5;
	answer = a + b + c;
	printf("%i + %i + %i = %i\n", a, b, c, answer);
	answer = 2 * b + 3 * (a - c);
	printf("%i + %i + %i = %i\n", a, b, c, answer);
	answer = a / b;
	printf("%i/%i = %i\n", a, b, answer);
	answer = a % b;
	printf("%i %% %i = %i\n", a, b, answer);
	answer = a / c;
	printf("%i/%i = %i\n", a, c, answer);
	answer = a % c; 
	printf("%i %% %i = %i\n", a, c, answer);
	answer = a * b / c;
	printf("%i*%i/%i = %i\n", a, b,c, answer);
	answer = a * (b / c);
	printf("%i*(%i/%i) = %i\n", a, b, c, answer);
	answer = (a * c) % b;
	printf("(%i*%i)%% %i = %i\n", a, c,b, answer);
	answer = a * (c % b);
	printf("%i*(%i %% %i) = %i\n", a,c, b, answer);
	return 0;
}