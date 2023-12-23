#include <stdio.h>

char p[8];
int count = 0;
int j;
char rev[8];

int main() {
	
	printf("Enter your name: ");
	scanf("%s", &p);

	while (p[count] != '\0')
	{
		count++;
	}

	j = count - 1;

	for (int i = 0; i < count;i++)
	{
		rev[i] = p[j];
		j--;
	}

	printf("\nname reversed: ");
	printf(rev);

	return 0;
}
