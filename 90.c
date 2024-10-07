// Write a program to input a number and check it is perfect number or not. A number is perfect number if sum of all factors excluding the number = number itself.for ex=6 1+2+3=6
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, s, c;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
    {
        printf("%d is a perfect number", n);
    }
    else
    {
        printf("%d is not a perfect number", n);
    }
}