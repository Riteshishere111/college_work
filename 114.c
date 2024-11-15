// Write a program to print sum of following series 1 + 2 + 3 + 4 +.........n
#include <stdio.h>
#include <conio.h>
void main()
{
    // variable declaration
    int n, s;

    // initial value of s
    s = 0;

    // Input of a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop till n numbers to sum to s
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    //Print of sum
    printf("sum = %d", s);
}