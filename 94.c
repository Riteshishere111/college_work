// Write a program to input a number and print factorial value of each digit if example is 35 then factorial value of 5= 125 and factorial value of 3=6
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, fact, r, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i > 0; i /= 10)
    {
        r = i % 10;

        fact = 1;
        for (j = r; j > 0; j--)
        {
            fact = fact * j;
        }
        printf("factorial value of %d is = %d", r, fact);
    }
}