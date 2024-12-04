// Write a program to input a matrix of order 3x3 and calculate sum of of elements of both diagonal
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3][3], i, j, s = 0;
    printf("\n enter an array=");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i == j)
            {
                s = s + a[i][j];
            }
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i + j == 2)
            {
                s = s + a[i][j];
            }
        }
    }
    printf("sum of both diagonal= %d", s);
}
