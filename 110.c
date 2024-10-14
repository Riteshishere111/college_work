//Write a program to print following series 7, 15, 23, 31, ........n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 7; i <= n; i+=8)
    {
        a=i;
        printf("\n%d", a);
    }
}