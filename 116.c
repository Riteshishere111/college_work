// Write a program to print sum of following series 5 + 9 + 13 + 17.................n
#include <stdio.h>
#include <conio.h>
void main()
{
    // variable declaration
    int n, a, s;

    // input a of a number
    printf("Enter a number: ");
    scanf("%d",&n);

    // value initialization
    s=0;

    for (int i = 5; i <= n; i+=4)
    {
        s=s+i;
    }
    printf("sum = %d",s);    
}