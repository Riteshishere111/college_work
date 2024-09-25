// write a program to input three angle of triangle .check triangle formation is possible or not.triangle formation is possible if sum of three angle must be 180 degree and each angle should be greater than 0 degree
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, sum;
    printf("\n Enter the angle a: ");
    scanf("%d", &a);
    printf("\n Enter the angle b: ");
    scanf("%d", &b);
    printf("\n Enter the angle c: ");
    scanf("%d", &c);
    sum = a + b + c;
    if (a <= 0 || b <= 0|| c <= 0)
    {
        printf("\nTriangle formation is not possible");
    }
    else if (sum == 180)
    {
        printf("\nTriangle formation is possible");
    }
    else
        printf("\nTriangle formation is not possible");
        printf("\n ho gya lafda");

}