// Write a program to input two array of same size or different size merge these two array in third array
#include<stdio.h>
#include<conio.h>
void main()
{
  int black[5], white[6], i, j, k, l,m;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &black[i]);
    }
    for (j = 0; j <= 5; j++)
    {
        printf("Enter the value for index %d: ", j);
        scanf("%d", &white[j]);
    }
    printf("\nThird array values are: ");
    int array3[11];
    for (k = 0; k <= 4; k++)
    {
        array3[k]=black[k];
    }
    for (l = 0; l <= 5; l++)
    {
        array3[k+l]=white[l];
    }
    for (m = 0; m <= 10; m++)
    {
    printf("%d ",array3[m]);
    }
    

}