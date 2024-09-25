//Write a program to input 2 numbers and print in descending order.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("\nIn descending order: %d, %d", a, b);
    }
    else
    {
        printf("\nIn descending order: %d, %d", b, a);
    }
}