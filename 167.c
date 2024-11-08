#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++) // rows
    {
        if (i <= 3) // starting 3 rows left space
        {
            for (j = 2; j <= i; j++)
            {
                printf(" ");
            }
            printf("*");
            for (k = 1; k <= 6 - 2 * i; k++)
            {
                printf(" ");
            }
            printf("*");
        }
        else // last 3 lines left side
        {
            for (j = 1; j <= 6 - i; j++)
            {
                printf(" ");
            }
            printf("*");
            for (k = 1; k < 2 * i-6; k++)
            {
                printf(" ");
                
            }
            printf("*");
        }
    
        printf("\n");
    }
}