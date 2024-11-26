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
            for (k = 5; k < i + 5; k++)
            {
                printf("%d", k);
            }
        }
        else
        {
            for (j = 5; j <= 14 - i; j++)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}