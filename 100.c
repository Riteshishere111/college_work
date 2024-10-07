// Write a program to input two number and print all prime number between these number
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, min, max, i, fact, c, j;
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
    printf("\nprime number between %d and %d = ", min, max);
    for (i = min; i <= max; i++)
    {
        c = 0;
        for (j = i; j > 0; j--)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d, ", i);
        }
    }
}