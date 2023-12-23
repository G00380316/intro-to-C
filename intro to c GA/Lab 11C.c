// Lab 11
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>



int main()
{
    float angleis,radianis;
    int angle;
    char options;

    printf("S Sine\n\nC Cosine\n\nT Tan");
    printf("\n\nselect one of the options using the assigned letter: ");
    scanf("%ch",&options);
    printf("\nPlease enter a angle: ");
    scanf("%i",&angle);


    switch(options)
    {
     case'S':
     case's':
      radianis = angle * (M_PI / 180);
      angleis = sin(radianis);
      printf("\nsine %i = %.2f",angle,angleis);
     break;
     case'C':
     case'c':
      radianis = angle * (M_PI / 180);
      angleis = cos(radianis);
      printf("\ncosine %i = %.2f",angle,angleis);
     break;
     case'T':
     case't':
      radianis = angle * (M_PI / 180);
      angleis = tan(radianis);
      printf("\ntan %i = %.2f",angle,angleis);
     break;
     default:
     break;
    }

	return 0;
}
