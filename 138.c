// 
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a, b, c, p, i, x, n;
    float s;
    s = 0;
    p = 1;
    b = 9 / 2; /* <-----CHECK THIS*/
    c = 1;
    printf("\n Enter n, x=");
    scanf("%d %d", &n, &x);
    for (i = 0; i <= n; i++)
    {
        p=p+3;
        b=b*2;
        a=pow(x, p);
        c=c+a;
        s=s+(1.0*c)/b;
    }
    printf("\n Sum = %f",s);
}