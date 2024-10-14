//Write a program to print following series 3, 6, 12, 24, .........n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 3; i <= n; i=i*2)
    {
        a=i;

        printf("\n%d", a);
    }
}