// 
/*#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, l;
    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }
        printf("%d", 6-i);
        for (j = 1; j <= i-5; j++)
        {
            printf(" ");
        }
        printf("%d", 6-i);
        
        printf("\n");
    }
}*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        printf("%d",j);
        for ( k = 1; k <=10-2*i ; k++)
        {
            printf(" ");
        }
         printf("%d",j);
        printf("\n");
    }
}