// Write a program to input a number and calculate number of its factor using call by reference
#include <stdio.h>
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
    for (i = 1; i <= *x; i++)
    {
        if (*x % i == 0)
        {
            f++;
        }
    }
    printf("Number of factors of %d= %d", *x, f);
}