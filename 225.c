// WAP to input 5 elements into an array and print only perfect elements of array using function.
#include <stdio.h>
#include <conio.h>
int perfect(int);
void main()
{
    int n[5], i;
    for (i = 0; i <= 4; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &n[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        if (perfect(n[i]) == n[i])
        {
            printf("\n %d is a perfect number", n[i]);
        }
    }
}

int perfect(int a)
{
    int i, c = 0;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            c=c+i;
        }
        
    }
    return c;
}