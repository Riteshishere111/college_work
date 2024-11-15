// Write a program to input 5 elemets into an array and print largest and smallest elements of array
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, black[5], max, min;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter the value of index %d: ", i);
        scanf("%d", &black[i]);
    }
    max = black[0];
    min = black[0];
    for (j = 0; j <= 4; j++)
    {
        if (black[j]> max)
        {
            max=black[j];
        }
        if (black[j]<min)
        {
            min=black[j];
        }
    }
    printf("max = %d\n min= %d",max,min);
}