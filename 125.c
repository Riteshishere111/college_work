// Write a program to print sum of the series  9/14 + 15/22 + 21/30 + 27/38.............n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,n;
float s;
a=3;
b=6;
s=0;
printf("\n enter a number=");
scanf("%d");
for(i=1; i<=n; i++)
{
    a=a+6;
    b=b+8;
    s=s+(1.0*a)/b;
}
printf("\n sum=%f",s);
}