// Write a program to input a number and check it is magic number or not.A number is called a magic number if sum of digits of number until sum is less than 9 =1 for example if number is 649
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s, r, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (j = n; j > 9; j = s)
    {
        s = 0;
        for (i = j; i > 0; i /= 10)
        {
            r = i % 10;
            s = s + r;
        }
    }
    if (s == 1)
    {
        printf("%d is a magic number", n);
    }
    else
        printf("%d is not a magic number", n);
}