// Lab 11
// Enoch Abiodun
// 01/03/2020


#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{

    int width;
    int cwidth = 0;
    int cwidth1 = 6; 
    char options = 0;

    void printSquare(int width);
    void printTriangleInc(int cwidth);
    void printTriangleDec(int cwidth1);
   
    printf("please choose\nA\tprint square\nB\tprint Triangle increase\nC\tprint Traingle decreas\nQ\tExit\n\n");
    while (options != 'Q' && options != 'q')
    {
        
        scanf("%c", &options);

        switch (options)
        {
        case'A':
        case'a': 
            printf("\nEnter width: ");
            scanf("%i", &width);
            printSquare(width);
        break;
        case'B':
        case'b':
            printTriangleInc(cwidth);
        break;
        case'C':
        case'c':
            printTriangleDec(cwidth1);
        break;
        default:
        break;
        }
    }
}

void printSquare(int width)
{
    for (int row = 1; row <= width; row++)
    {
        for (int col = 1; col <= width; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("please choose\nA\tprint square\nB\tprint Triangle increase\nC\tprint Traingle decreas\nQ\tExit\n\n");
    return 0;
}

void printTriangleInc(int cwidth)
{
    printf("\n\n");
    for (int row = 1; row <= 6; row++)
    {
        cwidth++;
        for (int col = 1; col <= cwidth; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    printf("please choose\nA\tprint square\nB\tprint Triangle increase\nC\tprint Traingle decreas\nQ\tExit\n\n");
    return 0;
}

void printTriangleDec(int cwidth1)
{
    printf("\n\n");
    for (int row = 1; row <= 6; row++)
    {
        for (int col = 1; col <= cwidth1; col++)
        {
            printf("*");
        }
        cwidth1--;
        printf("\n");
    }
    printf("\n\n");
    printf("please choose\nA\tprint square\nB\tprint Triangle increase\nC\tprint Traingle decreas\nQ\tExit\n\n");
    return 0;
}