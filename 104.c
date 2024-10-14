// Write a program to print following series 1, 4, 9, 16, 25, ......n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i * i <= n; i++)
    {
        a = i * i;
        printf("\n%d", a);
    }
}