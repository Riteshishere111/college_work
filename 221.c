#include <stdio.h>
#include <conio.h>
int fact(int);
void main()
{
    int a[5], i;
    printf("\n enter array=");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        printf("\n factorial value of %d=%d", a[i], fact(a[i]));
    }
}
int fact(int p)
{
    int i, f;
    f = 1;
    for (i = 1; i <= p; i++)
    {
        f = f * i;
    }
    return (f);
}