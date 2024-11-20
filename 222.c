#include <stdio.h>
#include <conio.h>
int digit(int);
void main()
{
    int a[5], i;
    printf("\n enter array= ");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("\n sum of digit of%d=%d", a[i], digit(a[i]));
    }
}

int digit(int p)
{
    int i, r, s;
    s = 0;
    for (i = 0; i <=p; i = i / 10)
    {
        r = i % 10;
        s = s + r;
    }
    return s;
}