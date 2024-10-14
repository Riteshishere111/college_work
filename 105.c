// Write a program to print following series 2, 9, 28, 65,........n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, a;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        a = i * i * i + 1;
        if(a>n){
            break;
        }
        printf("\n%d", a);
    }
}