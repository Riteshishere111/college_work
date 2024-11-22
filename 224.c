// WAP to input 5 Elements into an array and print only prime elements of array using function .
#include <stdio.h>
#include <conio.h>
int fact(int);
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
        if (fact(n[i])==2)
        {
        printf("\n %d is a prime number", n[i]);
        }
        
    }
}

int fact(int a)
{
    int i, c = 0;
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            c++;
        }
    }
    return c;
}