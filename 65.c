// Write a menu driven to input two numbers and print greater number without using if else.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf(" Enter the value of a and b:  ");
    scanf("%d %d", &a, &b);
    c = a / b;
    switch (c)
    {
    case 0:
        printf("%d is greater number", b);
        break;

    default:
        printf("%d is greater number",a);
        break;
    }
}