// Write a program to print sum of series 1 - x^2)/9 + x^5)/12 - x^10)/15
#include <stdio.h>
#include <conio.h>
#include<math.h>
void main()
{
    int n, x, i, a, b, p;
    float s;
    s = 0.0;
    b = 6;
    printf("\nEnter the value of x and n: ");
    scanf("%d %d", &x, &n);
    for (i = 0; i <= n; i++)
    {
        p = i * i + 1;
        b = b + 3;
        a = pow(x, b);
        if (i % 2 == 0)
        {
            s = s + (1.0 * a) / b;
        }
        else
        {
            s = s - (1.0 * a) / b;
        }
    }
    printf("\nSum = %f", s);
}