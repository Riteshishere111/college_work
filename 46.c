// Write a program to input 2 numbers and print greater number.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is the greater number", a);
    }
    else
    {
        printf("%d is the greater number", b);
    }
}
