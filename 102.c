//Write a program to print following series 2, 4, 6, 8,.....n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i+=2)
    {
        a=i;
        printf("\n%d", a);
    }
}