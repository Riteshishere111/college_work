// WAP to input 5 elements into an array and print Total Number of Factors of each elements using function.
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
        printf("\nTotal number of factors of %d = %d", n[i], fact(n[i]));
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