// Write a program ot input a number and check whether the number is armstrong number or not.A number is armstrong if sum of power of each digit= number **(power= number of digits)
#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    int a, i, c, s, r, sq;
    s = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    for (i = a; i > 0; i /= 10)
    {
        c++;
    }
    for (i = a; i > 0; i /= 10)
    {
        r = i % 10;
        sq = pow(r, c);
        s = s + sq;
    }
    if (s == a)
    {
        printf("%d is a neon number", a);
    }
    else
    {
        printf("%d is a not a neon number", a);
    }
}