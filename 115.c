// Write a program to print sum of following series 1 + 4 + 9 + 16 ............n
#include <stdio.h>
#include <conio.h>
void main()
{
    // variables declaration
    int n, s, a;

    // s value initialization
    s = 0;

    // input of a number n
    printf("Enter a number: ");
    scanf("%d", &n);

    // for loop to sum
    for (int i = 0; i < n; i++)
    {
        a = i + 1;
        s = s + a * a;
    }
    // print sum
    printf("Sum= %d", s);
}