// 
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 2; j <= i; j++)
        {
            printf(" ");
        }
        printf("*");
        for ( k = 1; k <=10-2*i ; k++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}