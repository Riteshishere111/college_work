// Write a program to input two number and print factorial value of each number between these number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, min, max, i, fact;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    for (i = min; i <= max; i++)
    {

        fact = 1;
        for (int j = i; j > 0; j--)
        {
            fact = fact * j;
        }
        printf("\nfactorial value of %d is = %d", i, fact);
    }
}