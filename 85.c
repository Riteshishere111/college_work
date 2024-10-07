// Write a program and check whether the number entered is a neon number or not. A number is neon if sum of digits of square of the number is equal to the number itself.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, sq, i, r, s;
    i = 0;
    s = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    sq = a * a;
    for (i = sq; i > 0; i = i / 10)
    {
        r = i % 10;
        s = s + r;
    }
    if (s == a)
    {
        printf("%d is a neon number", a);
    }
    else
    {
        printf("%d is not a neon number", a);
    }
}