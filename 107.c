//Write a program to print following series 5, 15, 45, 135,.....n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 5; i <= n; i=i*3)
    {
        a=i;
        printf("\n%d", a);
    }
}