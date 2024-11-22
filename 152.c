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
                printf("%d",k);
            }
        }
        else
        {
            for (j =1; j <=10-i; j++)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}
