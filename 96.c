// Write a program to input a number and check it is special number of not. A number is called a special number if sum of factorial value of each digit equal to number itself.for example number is 145 = 1!+4!+5!=145
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, fact, s, r, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    s = 0;
    for (i = n; i > 0; i /= 10)
    {
        r = i % 10;

        fact = 1;
        for (j = r; j > 0; j--)
        {
            fact = fact * j;
        }
        s = s + fact;
    }
    if (s == n)
    {
        printf("%d is a special number", n);
    }
    else
        printf("%d is not a special number", n);
}