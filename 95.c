// Write a program to input a number and calculate sum of factorial value of each digit if example is 35 sum of factorial value of each digits= 120+6=126
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, fact,s, r, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    s=0;
    for (i = n; i > 0; i /= 10)
    {
        r = i % 10;

        fact = 1;
        for (j = r; j > 0; j--)
        {
            fact = fact * j;
        }
        s=s+fact;
    }
        printf("sum of factorial value of each digit is = %d",s);
}