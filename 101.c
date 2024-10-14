// Write a program to print following series 1, 2, 3, 4,.....n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = i;
        printf("\n%d", a);
    }
}