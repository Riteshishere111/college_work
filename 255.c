// Write a program to input a number and calculate sum of its digits using call by reference
#include <stdio.h>
#include <conio.h>
void fact(int *);
void main()
{
    int a;
    printf("\nEnter a numbers: ");
    scanf("%d", &a);
    fact(&a);
}
void fact(int *x)
{
    int f, i;
    f = 0;
    for (i = *x; i >0; i/=10)
    {
            f++;
    }
    printf("Number of digits of %d= %d", *x, f);
}