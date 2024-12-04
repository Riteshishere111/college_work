// WAP to input 5 elements into an array and print only special number of array using function.
#include <stdio.h>
#include <conio.h>
int special(int);
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
        if (special(n[i]) == n[i])
        {
            printf("\n %d is a Special number", n[i]);
        }
    }
}

int special(int a)
{
    int s = 0, r, i, j, f;

    for (j = a; j > 0; j /= 10)
    {
        r = j % 10;
        f = 1;
        for (i = 1; i <= r; i++)
        {
            f = f * i;
        }
        s = s + f;
    }

    return s;
}
