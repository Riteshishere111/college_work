// Write a program to print sum of the series 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6.......n 
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b;
float s;
a=1; b=0;
s=0;
printf("\n enter a number=");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
    a=a;
    b=b+1;
    s=s+(1.0*a)/b;
}
printf("\n sum=%f",s);
}