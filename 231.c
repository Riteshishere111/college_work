// WAP to input a matix of order 3 by 3 and print in matrix form

#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], i, j;

    for (i = 0; i <= 2; i++) // for row of matrix

    {
        for (j = 0; j <= 2; j++) // for column of matrix
        {

            printf("Enter a matrix of 3x3: ");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
