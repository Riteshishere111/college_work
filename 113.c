/*           ERROR             */


// Write a program to print non fibonacci series
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a, b, s, j;
    a = -1;
    b = +1;
    printf("enter a number=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = a + b;
        a = b;
        b = s;
        for (j = 1; j < s && j <= n; j++)
        {
            printf("%d, ", j);
        }
        // Move to next fibonacci number
        j = j + 1;
    }
}