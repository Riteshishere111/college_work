// Write a program to input 2 numbers and print in ascending order.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    if (a < b)
    {
        printf("In ascending order: %d %d", a, b);
    }
    else
    {
        printf("In ascending order: %d %d", b, a);
    }
}