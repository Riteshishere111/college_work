// 
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {

            for (k = 1; k <= i; k++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 4; j >=i-5; j--)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
