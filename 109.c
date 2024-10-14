//Write a program to print following series 8, 14, 20, 26, 32, ...........n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 8; i <= n; i+=6)
    {
        a=i;
        printf("\n%d", a);
    }
}