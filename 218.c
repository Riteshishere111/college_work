// Write a program to input 2 array of same size and check equality array in another array.
#include <stdio.h>
#include <conio.h>
void main()
{
    int black[5], white[5], sum[5], i, j, k;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &black[i]);
    }
    for (j = 0; j <= 4; j++)
    {
        printf("Enter the value for index %d: ", j);
        scanf("%d", &white[j]);
    }
    for (k = 0; k <= 4; k++)
    {
        if (black[k] != white[k])
        {
            printf("It's not equal");
            break;
        }
    }
    if (k == 5)
    {
        printf("It's equal");
    }
}