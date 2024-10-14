//Write a program to print following series 1, 4, 7, 10, .......n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i+=3)
    {
        a=i;
        printf("\n%d", a);
    }
}