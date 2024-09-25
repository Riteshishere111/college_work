// Write a menu driven program to input a choice and check if choice is 1 input length of three side of triangle and calculate area of triangle if choice is 2 input length of base and height of triangle calculate area of triangle. also print error for each wrong choice.
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a, b, c,ch,area;
    printf("Find area of triangle Enter 1 to find using all 3 sides: \n2 to find using height and base of triangle: ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Enter three sides of triangle: ");
        scanf("%d %d %d", &a, &b, &c);
        float s;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of triangle= %d", area);
        break;
    case 2:
        printf("Enter the height and base of triangle: ");
        scanf("%d %d", &a, &b);
        area = ((1.0 / 2) * a * b);
        printf("Area of Triangle= %d", area);
        break;
    default:
        printf("Wrong choice");
        break;
    }
}