#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int hrs;
int mins;
int hrstomins;
int tmins;

int main()
{
    printf("\nEnter the number of hours you want calculated: ");
    scanf_s("%i", &hrs);
    hrstomins = hrs * 60;
    printf("\nEnter the number of minutes you want calculated: ");
    scanf_s("%i", &mins);
    tmins = hrstomins + mins;
    printf("\n\nThe total minutes is %i\n", tmins);
    return 0;
}
