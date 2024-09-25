// Write a program to input 3 numbers and print in ascending order.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    printf("\nEnter the value of c: ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        if (b < c)
        {
            printf("\nIn ascending order: %d, %d, %d", a, b, c);
        }
        else
        {
            printf("\nIn ascending order: %d, %d, %d", a, c, b);
        }
    }
    else if (b < a && b < c)
    {
        if (a < c)
        {
            printf("\nIn ascending order: %d, %d, %d", b, a, c);
        }
        else
        {
            printf("\nIn ascending order: %d, %d, %d", b, c, a);
        }
    }
    else
    {
        if (a < b)
        {

            printf("\n In ascending order: %d, %d, %d", c, a, b);
        }
        else
        {

            printf("\nIn ascending order: %d, %d, %d", c, b, a);
        }
    }
}
