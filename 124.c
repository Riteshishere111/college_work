// Write a program to print sum of the series 5/7 + 9/13 + 13/19 + 17/25........n
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b,n;
float s;
a=1;
b=1;
s=0;
printf("\n enter a number=");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    a=a+4;
    b=b+6;
    s=s+(1.0*a)/b;
}
printf("\n sum=%f",s);
}