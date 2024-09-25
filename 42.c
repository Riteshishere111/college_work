// write a program to input length of three side of triangle and check triangle formation is possible or not.Then check if it equilateral triangle, isoscelus triangle or scalene triangle.
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

        if (a == b && b == c && c == a)
        {
            printf("\nIt is an equilateral triangle");
        }
        else if (a == b || b == c || c == a)
        {
            printf("\nIt is an isoscelus triangle");
        }
        else
        {
            printf("\n It is a Scalene triangle");
        }
    }
    else
    {
        printf("\n Triangle formation is not possible");
    }
}