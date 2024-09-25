// write a program to input length of three side of triangle and check triangle formation is possible or not. The formation is only possible if sum of two side is always greater than the third.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    printf("\n Enter the value of c: ");
    scanf("%d", &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        printf("\nTriangle formation is possible");
    }
    else
    {
        printf("\n Triangle formation is not possible");
    }
}
