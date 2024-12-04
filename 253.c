// Write a program to input a number and calculate its factorial value using call by reference
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
    int i,f;
    f=1;
    for (i = 1; i <=*x; i++)
    {
        f=f*i;
    }
    printf("factorial value of %d= %d",*x,f);
}