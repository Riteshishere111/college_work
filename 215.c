// Write a program to input 5 elements into an array and input a number , check this no. is exist in this array or not.
#include <stdio.h>
#include <conio.h>
void main()
{
    int black[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &black[i]);
    }
    printf("Enter a number to check availability in array: ");
    int n;
    scanf("%d", &n);
    int j;
    for (j = 0; j <= 4; j++)
    {
        if (n == black[j])
        {
            printf("Yes It is in array");
            break;
        }
    }
    if (j == 5)
    {
        printf("It is not available");
    }
}